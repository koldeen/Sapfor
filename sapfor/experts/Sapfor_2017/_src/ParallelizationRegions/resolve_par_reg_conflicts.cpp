#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

#include "ParRegions_func.h"
#include "resolve_par_reg_conflicts.h"

#include "../Utils/SgUtils.h"

#include "../GraphCall/graph_calls_func.h"

using std::map;
using std::pair;
using std::set;
using std::vector;
using std::string;
using std::to_string;
using std::make_pair;

static bool recursiveFindCall(SgExpression *exp, const string &funcName)
{
    if (exp)
    {
        if (exp->variant() == FUNC_CALL)
            if (funcName == exp->symbol()->identifier())
                return true;

        return recursiveFindCall(exp->rhs(), funcName) || recursiveFindCall(exp->lhs(), funcName);
    }

    return false;
}

static void findCall(const FuncInfo *funcFrom, const FuncInfo *funcTo, bool &callsFromRegion, bool &callsFromCode)
{
    if (SgFile::switchToFile(funcTo->fileName) != -1)
    {
        bool isRegion = false;
        SgStatement *iterator = funcTo->funcPointer->GetOriginal();
        SgStatement *end = SgStatement::getStatementByFileAndLine(funcTo->fileName, funcTo->linesNum.second);

        for (; iterator != end; iterator = iterator->lexNext())
        {
            if (iterator->variant() == SPF_PARALLEL_REG_DIR)
                isRegion = true;

            if (iterator->variant() == SPF_END_PARALLEL_REG_DIR)
                isRegion = false;

            if (isSPF_stat(iterator) || isDVM_stat(iterator))
                continue;

            bool retVal = false;

            if (iterator->variant() == PROC_STAT)
                if (iterator->symbol()->identifier() == funcFrom->funcName)
                    retVal = true;

            for (int i = 0; i < 3; ++i)
                retVal = retVal || recursiveFindCall(iterator->expr(i), funcFrom->funcName);

            if (retVal)
            {
                if (isRegion)
                    callsFromRegion = true;
                else
                    callsFromCode = true;
            }
        }
    }
    else
        printInternalError(convertFileName(__FILE__).c_str(), __LINE__);
}

static FuncInfo* getFuncInfo(const map<string, FuncInfo*> &funcMap, const string &funcName)
{
    auto it = funcMap.find(funcName);
    if (it == funcMap.end())
        return NULL;

    return it->second;
}

static void fillRegionCover(FuncInfo *func, const map<string, FuncInfo*> &funcMap)
{
    if (func->funcPointer->variant() != ENTRY_STAT)
    {
        if (SgFile::switchToFile(func->fileName) != -1)
        {
            SgStatement *iterator = func->funcPointer;
            FuncInfo *entry = NULL;
            bool isFuncCovered = true;
            bool isEntryCovered = true;
            bool isRegion = false;

            // ALEX, TODO: � DVM ��������� ��������� �������?
            for (; !isSgExecutableStatement(iterator) && !isSPF_stat(iterator) && iterator->variant() != ENTRY_STAT; iterator = iterator->lexNext())
            {
                // skip not executable and not necessary statements
            }

            for (; iterator->lineNumber() < func->linesNum.second; iterator = iterator->lexNext())
            {
                switch (iterator->variant())
                {
                case SPF_PARALLEL_REG_DIR:
                    isRegion = true;
                    break;
                case SPF_END_PARALLEL_REG_DIR:
                    isRegion = false;
                    break;
                case ENTRY_STAT:
                    if (entry && isEntryCovered)
                        entry->setIsCoveredByRegion();

                    entry = getFuncInfo(funcMap, string(iterator->symbol()->identifier()));
                    isEntryCovered = true;
                    break;
                default:
                    if (isSPF_stat(iterator) || isDVM_stat(iterator))
                        break;

                    if (!isRegion)
                    {
                        isFuncCovered = false;
                        isEntryCovered = false;
                    }
                    break;
                }
            }

            // ALEX, TODO: � �������� �� entry?
            // SERG, TODO: � �����? ���� isEntryCovered ������������ � true, ������ ���� ���������� entry
            if (isEntryCovered)
                entry->setIsCoveredByRegion();

            if (isFuncCovered)
                func->setIsCoveredByRegion();
        }
        else
            printInternalError(convertFileName(__FILE__).c_str(), __LINE__);
    }
}

static const CommonBlock* isInCommon(const map<string, CommonBlock> &commonBlocks, const string &arrayName)
{
    for (auto &commonBlockPair : commonBlocks)
        for (auto &variable : commonBlockPair.second.getVariables())
            if (variable.getName() == arrayName)
                return &commonBlockPair.second;

    return NULL;
}

static void recursiveFill(SgExpression *exp,
                          ParallelRegion *region,
                          const string &fileName,
                          const string &funcName,
                          const ParallelRegionLines &lines,
                          const map<string, FuncInfo*> &funcMap,
                          const map<string, CommonBlock> &commonBlocks,
                          map<DIST::Array*, const CommonBlock*> &allUsedCommonArrays)
{
    if (exp)
    {
        if (exp->variant() == ARRAY_REF)
        {
            SgSymbol *arraySymbol = exp->symbol();
            string arrayName = string(arraySymbol->identifier());
            DIST::Array *array = getArrayFromDeclarated(arraySymbol->declaredInStmt(), arrayName);
            FuncInfo *func = getFuncInfo(funcMap, funcName);

            auto commonBlock = isInCommon(commonBlocks, arrayName);
            if (commonBlock)
            {
                auto it = region->GetCrossedFuncs().find(func);
                if (it == region->GetCrossedFuncs().end())
                {
                    region->AddUsedCommonArray(func, array, lines);
                    allUsedCommonArrays.insert(make_pair(array, commonBlock));
                }
            }
            else if (!lines.isImplicit())
                region->AddUsedLocalArray(func, array, lines);
        }

        recursiveFill(exp->rhs(), region, fileName, funcName, lines, funcMap, commonBlocks, allUsedCommonArrays);
        recursiveFill(exp->lhs(), region, fileName, funcName, lines, funcMap, commonBlocks, allUsedCommonArrays);
    }
}

void fillRegionArrays(vector<ParallelRegion*> &regions,
                      const map<string, vector<FuncInfo*>> &allFuncInfo,
                      const map<string, CommonBlock> &commonBlocks,
                      map<DIST::Array*, const CommonBlock*> &allUsedCommonArrays)
{
    if (regions.size() == 1 && regions[0]->GetName() == "DEFAULT") // only default
        return;

    map<string, FuncInfo*> funcMap;
    createMapOfFunc(allFuncInfo, funcMap);
    
    for (auto &region : regions)
    {
        auto funcSymbols = region->GetFuncSymbols();

        for (auto &fileLines : region->GetAllLines())
        {
            // switch to current file
            if (SgFile::switchToFile(fileLines.first) != -1)
            {
                auto it = funcSymbols.find(fileLines.first);
                if (it == funcSymbols.end())
                    region->AddFileForFuncSymbols(fileLines.first);

                for (auto &regionLines : fileLines.second)
                {
                    SgStatement *iterator = NULL;
                    SgStatement *end = NULL;
                    string functionName = "";

                    // implicit lines
                    if (regionLines.isImplicit())
                    {
                        iterator = SgStatement::getStatementByFileAndLine(fileLines.first, regionLines.lines.first);
                        end = SgStatement::getStatementByFileAndLine(fileLines.first, regionLines.lines.second);
                    }
                    else
                    {
                        iterator = regionLines.stats.first->GetOriginal();
                        end = regionLines.stats.second->GetOriginal();
                    }

                    while (iterator->variant() != PROG_HEDR && iterator->variant() != PROC_HEDR && iterator->variant() != FUNC_HEDR)
                        iterator = iterator->controlParent();

                    functionName = iterator->symbol()->identifier();

                    if (regionLines.isImplicit())
                        iterator = SgStatement::getStatementByFileAndLine(fileLines.first, regionLines.lines.first);
                    else
                        iterator = regionLines.stats.first;

                    for (; iterator && iterator != end; iterator = iterator->lexNext())
                    {
                        if (isSPF_stat(iterator) || isDVM_stat(iterator))
                            continue;

                        for (int i = 0; i < 3; ++i)
                            recursiveFill(iterator->expr(i), region, fileLines.first, functionName, regionLines, funcMap, commonBlocks, allUsedCommonArrays);
                    }
                }
            }
            else
                printInternalError(convertFileName(__FILE__).c_str(), __LINE__);
        }
    }
}

void fillRegionFunctions(vector<ParallelRegion*> &regions, const map<string, vector<FuncInfo*>> &allFuncInfo, set<FuncInfo*> &allCommonFunctions)
{
    if (regions.size() == 1 && regions[0]->GetName() == "DEFAULT") // only default
        return;

    for (auto &region : regions)
    {
        for (auto &func : region->GetAllFuncCalls())
        {
            auto callingRegions = getAllRegionsByLine(regions, func->fileName, func->linesNum.first);
            if (callingRegions.size() > 1)
                region->AddCrossedFunc(func);
        }
    }

    // funcName -> funcInfo
    map<string, FuncInfo*> funcMap;
    createMapOfFunc(allFuncInfo, funcMap);

    for (auto &funcPair : funcMap)
    {
        bool callsFromRegion = false;
        bool callsFromCode = false;

        fillRegionCover(funcPair.second, funcMap);

        //__spf_print(1, "  func '%s' at lines %d-%d is covered %d\n", funcPair.second->funcName.c_str(),
        //            funcPair.second->linesNum.first, funcPair.second->linesNum.second, funcPair.second->isCoveredByRegion); // remove

        for (auto &call : funcPair.second->callsTo)
            findCall(funcPair.second, call, callsFromRegion, callsFromCode);

        if (callsFromCode && callsFromRegion)
            allCommonFunctions.insert(funcPair.second);
    }
}

bool checkRegions(const vector<ParallelRegion*> &regions, map<string, vector<Messages>> &SPF_messages)
{
    bool noError = true;

    // check if region includes itself
    for (auto &region : regions)
    {
        for (auto &fileLines : region->GetAllLines())
        {
            for (auto &regionLine : fileLines.second)
            {
                if (!regionLine.isImplicit())
                {
                    for (auto &regionLine2 : fileLines.second)
                    {
                        if (regionLine2.isImplicit() && regionLine2.lines.first <= regionLine.lines.first && regionLine2.lines.second >= regionLine.lines.second)
                        {
                            __spf_print(1, "parallel region '%s' is included in file '%s' on line %d\n", region->GetName().c_str(),
                                        fileLines.first.c_str(), regionLine2.lines.first);
                            string message;
                            __spf_printToBuf(message, "parallel region '%s' is included in file '%s'", region->GetName().c_str(), fileLines.first.c_str());

                            auto itM = SPF_messages.find(fileLines.first);
                            if (itM == SPF_messages.end())
                                itM = SPF_messages.insert(itM, make_pair(fileLines.first, vector<Messages>()));

                            itM->second.push_back(Messages(ERROR, regionLine2.lines.first, message, 1033));

                            noError = false;
                        }
                    }
                }
            }
        }
    }

    return noError;
}

static void recursiveReplace(SgExpression *exp, const string &from, SgSymbol *to)
{
    if (exp)
    {
        // Alex, TODO: exp->symbol()->identifier()
        if (exp->symbol() && exp->symbol()->identifier() == from)
        {
            exp->setSymbol(to);
            __spf_print(1, "  replace symbol '%s' to '%s'\n", from.c_str(), to->identifier()); // remove
        }

        recursiveReplace(exp->lhs(), from, to);
        recursiveReplace(exp->rhs(), from, to);
    }
}

static void replaceSymbol(const string &fileName, const vector<ParallelRegionLines> &lines, SgSymbol *origSymb, SgSymbol *newSymb)
{
    if (SgFile::switchToFile(fileName) != -1)
    {
        for (auto &regionLines : lines)
        {
            // explicit lines
            if (!regionLines.isImplicit())
            {
                SgStatement *iterator = regionLines.stats.first->GetOriginal();
                SgStatement *end = regionLines.stats.second->GetOriginal()->lexNext();

                for (; iterator != end; iterator = iterator->lexNext())
                {
                    if (iterator->symbol() && iterator->symbol()->identifier() == string(origSymb->identifier()))
                    {
                        iterator->setSymbol(*newSymb);

                        __spf_print(1, "  replace symbol '%s' to '%s' in file %s on line %d\n",
                                    origSymb->identifier(),
                                    newSymb->identifier(),
                                    fileName.c_str(),
                                    iterator->lineNumber()); // remove
                    }

                    for (int i = 0; i < 3; ++i)
                        recursiveReplace(iterator->expr(i), origSymb->identifier(), newSymb);
                }
            }
        }
    }
    else
        printInternalError(convertFileName(__FILE__).c_str(), __LINE__);
}

static SgStatement* createCommonBlock(SgFile *file,
                                      const map<string, CommonBlock> &commonBlocks,
                                      const map<DIST::Array*, const CommonBlock*> &allUsedCommonArrays,
                                      map<string, map<DIST::Array*, pair<SgSymbol*, SgSymbol*>>> &createdCommonArrays,
                                      map<string, SgStatement*> &createdCommonBlocks)
{
    string fileName = file->filename();

    auto it = createdCommonBlocks.find(fileName);
    if (it == createdCommonBlocks.end())
    {
        // new common-block is not created at this file, so create it
        if (SgFile::switchToFile(fileName) != -1)
        {
            // creating new common-block statement
            string commBlockName = "reg";
            SgStatement *commDecl = new SgStatement(COMM_STAT);

            // TODO: check new common-block name
            //if (ifSymbolExists(file, commBlockName))
            //    printInternalError(convertFileName(__FILE__).c_str(), __LINE__);

            SgSymbol *commSymb = new SgSymbol(VAR_REF, commBlockName.c_str());
            SgExprListExp *commList = new SgExprListExp(COMM_LIST);
            SgExprListExp *curNode = NULL;
            commDecl->setExpression(0, *commList);
            commList->setSymbol(commSymb);

            for (auto &arrayBlock : allUsedCommonArrays)
            {
                // check if need to add array
                int pos = -1;
                for (auto &var : arrayBlock.second->getVariables())
                {
                    if (var.getName() == arrayBlock.first->GetShortName() && var.getType() == ARRAY)
                        pos = var.getPosition();
                }

                auto varsOnPos = arrayBlock.second->getVariables(pos);
                if (varsOnPos.size() && varsOnPos[0]->getName() == arrayBlock.first->GetShortName())
                {
                    // need to add
                    // check if need to create new common array symbol
                    SgSymbol *newArrSymb = NULL;

                    auto it = createdCommonArrays.find(fileName);
                    if (it == createdCommonArrays.end())
                        it = createdCommonArrays.insert(it, make_pair(fileName, map<DIST::Array*, pair<SgSymbol*, SgSymbol*>>()));

                    auto itt = it->second.find(arrayBlock.first);
                    if (itt == it->second.end())
                    {
                        // need to create symbol
                        // get array type
                        auto place = *arrayBlock.first->GetDeclInfo().begin();

                        if (SgFile::switchToFile(place.first) != -1)
                        {
                            SgSymbol *arrSymb = NULL;
                            SgStatement *decl = SgStatement::getStatementByFileAndLine(place.first, place.second);

                            for (auto exp = decl->expr(0); exp; exp = exp->rhs())
                            {
                                if (exp->lhs()->symbol() && exp->lhs()->symbol()->identifier() == arrayBlock.first->GetShortName())
                                {
                                    arrSymb = exp->lhs()->symbol();
                                    break;
                                }
                            }

                            SgType *arrType = arrSymb->type()->copyPtr();

                            // create array symbol
                            if (SgFile::switchToFile(file->filename()) != -1)
                            {
                                string newArrName = arrayBlock.first->GetShortName() + "_" + commBlockName;

                                // TODO: check new array name
                                //if (ifSymbolExists(file, newArrName))
                                //    printInternalError(convertFileName(__FILE__).c_str(), __LINE__);

                                newArrSymb = new SgSymbol(VAR_REF, newArrName.c_str(), arrType, file->firstStatement());
                                itt = it->second.insert(itt, make_pair(arrayBlock.first, make_pair((SgSymbol*)NULL, newArrSymb)));
                                
                            }
                            else
                                printInternalError(convertFileName(__FILE__).c_str(), __LINE__);
                        }
                        else
                            printInternalError(convertFileName(__FILE__).c_str(), __LINE__);
                    }
                    else
                    {
                        // just use previous created symbol
                        newArrSymb = itt->second.second;
                    }

                    if (!newArrSymb)
                        printInternalError(convertFileName(__FILE__).c_str(), __LINE__);

                    // inserting newArrSymb to COMM_STAT
                    if (!curNode)
                    {
                        curNode = new SgExprListExp();
                        commList->setLhs(curNode);
                    }
                    else
                    {
                        SgExprListExp *newNode = new SgExprListExp();
                        curNode->setRhs(newNode);
                        curNode = (SgExprListExp*)curNode->rhs();
                    }

                    SgExpression *arrNode = new SgExpression(VAR_REF, NULL, NULL, newArrSymb);
                    curNode->setLhs(arrNode);

                }
            }

            createdCommonBlocks.insert(make_pair(fileName, commDecl));

            return commDecl;
        }
        else
            printInternalError(convertFileName(__FILE__).c_str(), __LINE__);
    }

    return it->second;
}

static void insertArrayCopying(const string &fileName, const vector<ParallelRegionLines> &lines, SgSymbol *origSymb, SgSymbol *newSymb)
{
    if (SgFile::switchToFile(fileName) != -1)
    {
        for (auto &regionLines : lines)
        {
            if (!regionLines.isImplicit())
            {
                // A_reg = A
                // TODO: use SgAssignStmt
                SgStatement *assign = new SgStatement(ASSIGN_STAT);
                SgExpression *left = new SgArrayRefExp(*newSymb);
                SgExpression *right = new SgArrayRefExp(*origSymb);

                assign->setExpression(0, *left);
                assign->setExpression(1, *right);
                regionLines.stats.first->insertStmtBefore(*assign, *regionLines.stats.first->controlParent());

                __spf_print(1, "insert '%s = %s'\n", newSymb->identifier(), origSymb->identifier()); // remove

                // A = A_reg
                assign = new SgStatement(ASSIGN_STAT);
                left = new SgArrayRefExp(*origSymb);
                right = new SgArrayRefExp(*newSymb);
                assign->setExpression(0, *left);
                assign->setExpression(1, *right);
                regionLines.stats.second->insertStmtAfter(*assign, *regionLines.stats.second->lexNext()->controlParent());

                __spf_print(1, "insert '%s = %s'\n", origSymb->identifier(), newSymb->identifier()); // remove

                // TODO: SPF_ANALYSIS(decl)
            }
        }
    }
    else
        printInternalError(convertFileName(__FILE__).c_str(), __LINE__);
}

static pair<SgSymbol*, SgSymbol*> copyArray(const pair<string, int> &place,
                                            const DIST::Array *array,
                                            const string &suffix = "")
{
    string fileName = place.first;

    if (SgFile::switchToFile(fileName) != -1)
    {
        string newArrName = array->GetShortName() + suffix;
        SgSymbol *arrSymb = array->GetDeclSymbol()->GetOriginal();
        SgSymbol *newArrSymb = NULL;
        SgStatement *decl = SgStatement::getStatementByFileAndLine(place.first, place.second);
        SgStatement *newDecl = NULL;

        newArrSymb = &arrSymb->copy();
        newArrSymb->changeName(newArrName.c_str());
        newDecl = newArrSymb->makeVarDeclStmt();
        decl->insertStmtAfter(*newDecl, *decl->controlParent());

        __spf_print(1, "  new array '%s' as copy of array '%s' (line: %d)\n",
                    newArrName.c_str(),
                    arrSymb->identifier(),
                    decl->lineNumber()); // remove

        return make_pair(arrSymb, newArrSymb);
    }
    else
        printInternalError(convertFileName(__FILE__).c_str(), __LINE__);
}

static void copyFunction(ParallelRegion *region,
                         const FuncInfo *func,
                         const map<string, CommonBlock> &commonBlocks,
                         const map<DIST::Array*, const CommonBlock*> &allUsedCommonArrays,
                         map<string, vector<ParallelRegionLines>> &linesToEdit,
                         map<string, map<DIST::Array*, pair<SgSymbol*, SgSymbol*>>> &createdCommonArrays,
                         map<string, SgStatement*> &createdCommonBlocks,
                         const string &suffix = "")
{
    if (SgFile::switchToFile(func->fileName) != -1)
    {
        // create copy function symbol and copy function for original function
        SgSymbol *funcSymb = func->funcPointer->GetOriginal()->symbol();
        SgSymbol *newFuncSymb = NULL;
        SgFile *file = func->funcPointer->GetOriginal()->getFile();
        string newFuncName = string(funcSymb->identifier()) + suffix;

        newFuncSymb = &(funcSymb->copySubprogram(*(file->firstStatement())));
        newFuncSymb = &newFuncSymb->copy();
        newFuncSymb->changeName(newFuncName.c_str());
        file->firstStatement()->lexNext()->setSymbol(*newFuncSymb);

        __spf_print(1, "  new function '%s' as copy of function '%s' (scope: %d) for file %s\n",
                    newFuncName.c_str(), funcSymb->identifier(), funcSymb->scope()->lineNumber(), func->fileName.c_str()); // remove

        // add copy function lines to explicit lines for next changes
        Statement *begin = new Statement(file->firstStatement()->lexNext());
        Statement *end = new Statement(file->firstStatement()->lexNext()->lastNodeOfStmt());
        pair<Statement*, Statement*> beginEnd = make_pair(begin, end);
        pair<int, int> newLines = make_pair(beginEnd.first->lineNumber(), beginEnd.second->lineNumber());

        auto it = linesToEdit.find(func->fileName);
        if (it == linesToEdit.end())
            it = linesToEdit.insert(it, make_pair(func->fileName, vector<ParallelRegionLines>()));
        it->second.push_back(ParallelRegionLines(newLines, beginEnd));

        __spf_print(1, "    lines %d-%d added with statement ids %d,%d\n",
                    newLines.first, newLines.second,
                    beginEnd.first->id(), beginEnd.second->id()); // remove

        region->AddFuncSymbols(func->fileName, funcSymb, newFuncSymb);

        __spf_print(1, "    add replaced symbols (%s, %s) for file %s\n",
                    funcSymb->identifier(), newFuncSymb->identifier(), func->fileName.c_str()); // remove

        // add common-block if it is nessesary
        SgStatement *iterator = begin->GetOriginal();
        for (; iterator != end->GetOriginal() && !isSgExecutableStatement(iterator); iterator = iterator->lexNext())
            ;

        Statement *start = new Statement(iterator);
        vector<ParallelRegionLines> lines;
        lines.push_back(ParallelRegionLines(make_pair(start->lineNumber(), end->lineNumber()), make_pair(start, end)));

        for (auto iterator = begin->GetOriginal(); iterator && !isSgExecutableStatement(iterator) && iterator != end->GetOriginal(); iterator = iterator->lexNext())
        {
            if (iterator->variant() == COMM_STAT)
            {
                // SERG: ������� ��� ������
                set<string> toReplace;
                SgStatement *commDecl = createCommonBlock(file, commonBlocks, allUsedCommonArrays, createdCommonArrays, createdCommonBlocks);
                SgStatement *copyDecl = commDecl->copyPtr();

                iterator->insertStmtAfter(*commDecl, *iterator->controlParent());
                __spf_print(1, "  new common block 'reg'\n"); // remove

                // making declaration of new common array symbols
                auto it = createdCommonArrays.find(file->filename());
                for (auto &arraySymbols : it->second)
                {
                    SgStatement *newDecl = arraySymbols.second.second->makeVarDeclStmt();
                    iterator->insertStmtAfter(*newDecl, *iterator->controlParent());
                }

                // replace common arrays to new common arrays
                for (auto exp = iterator->expr(0)->lhs(); exp; exp = exp->rhs())
                {
                    __spf_print(1, "TRYING TO REPLACE '%s'\n", exp->lhs()->symbol()->identifier()); // remove
                    SgSymbol *varSymb = exp->lhs()->symbol();
                    string varName = varSymb->identifier();
                    DIST::Array *array = getArrayFromDeclarated(varSymb->declaredInStmt(), varName);

                    if (array)
                    {
                        auto arrayBlock = allUsedCommonArrays.find(array);
                        int pos = -1;
                        for (auto &var : arrayBlock->second->getVariables())
                        {
                            if (var.getName() == varName && var.getType() == ARRAY)
                                pos = var.getPosition();
                        }

                        auto varsOnPos = arrayBlock->second->getVariables(pos);
                        auto var = varsOnPos[0];

                        DIST::Array *commArr = getArrayFromDeclarated(, );
                        auto itt = it->second.find(commArr);

                        replaceSymbol(func->fileName, lines, varSymb, );
                    }
                }

                break;
            }
        }
    }
    else
        printInternalError(convertFileName(__FILE__).c_str(), __LINE__);
}

void resolveParRegions(vector<ParallelRegion*> &regions,
                       const map<string, CommonBlock> &commonBlocks,
                       const set<FuncInfo*> &allCommonFunctions,
                       const map<DIST::Array*, const CommonBlock*> &allUsedCommonArrays,
                       map<string, map<DIST::Array*, pair<SgSymbol*, SgSymbol*>>> &createdCommonArrays,
                       map<string, SgStatement*> &createdCommonBlocks,
                       set<FuncInfo*> &insertedCommonArrays,
                       set<FuncInfo*> &insertedCommonBlocks)
{
    for (auto &region : regions)
    {
        __spf_print(1, "[%s]: create local arrays\n", region->GetName().c_str()); // remove

        // creating new local arrays
        for (auto &funcArrays : region->GetUsedLocalArrays())
        {
            for (auto &arrayLines : funcArrays.second)
            {
                auto place = *arrayLines.first->GetDeclInfo().begin();
                auto origCopy = copyArray(place, arrayLines.first, string("_") + region->GetName());
                replaceSymbol(place.first, arrayLines.second, origCopy.first, origCopy.second);
                insertArrayCopying(place.first, arrayLines.second, origCopy.first, origCopy.second);
            }
        }

        __spf_print(1, "[%s]: create common arrays\n", region->GetName().c_str()); // remove

        // creating new common arrays
        for (auto &funcArrays : region->GetUsedCommonArrays())
        {
            auto it = createdCommonArrays.find(funcArrays.first->fileName);
            if (it == createdCommonArrays.end())
                it = createdCommonArrays.insert(it, make_pair(funcArrays.first->fileName, map<DIST::Array*, pair<SgSymbol*, SgSymbol*>>()));

            for (auto &arrayLines : funcArrays.second)
            {
                auto itt = it->second.find(arrayLines.first);
                if (itt == it->second.end())
                {
                    // common array is not created
                    for (auto &place : arrayLines.first->GetDeclInfo())
                    {
                        __spf_print(1, "PLACE FILE '%s' AND CUR FUNC '%s'\n", place.first.c_str(), funcArrays.first->funcName.c_str()); // remove

                        if (place.first == funcArrays.first->fileName)
                        {
                            if (SgFile::switchToFile(place.first) != -1)
                            {
                                SgStatement *decl = SgStatement::getStatementByFileAndLine(place.first, place.second);

                                __spf_print(1, "DECL TO FUNC '%s'\n", decl->controlParent()->symbol()->identifier()); // remove

                                if (decl->controlParent()->symbol()->identifier() == funcArrays.first->funcName)
                                {
                                    // create symbol, declaration and then replace in lines and insert copying
                                    auto origCopy = copyArray(place, arrayLines.first, string("_reg"));
                                    replaceSymbol(funcArrays.first->fileName, arrayLines.second, origCopy.first, origCopy.second);
                                    insertArrayCopying(funcArrays.first->fileName, arrayLines.second, origCopy.first, origCopy.second);
                                    it->second.insert(make_pair(arrayLines.first, origCopy));

                                    break;
                                }
                            }
                            else
                                printInternalError(convertFileName(__FILE__).c_str(), __LINE__);
                        }
                    }
                }
                else
                {
                    // only replace and insert copying
                    replaceSymbol(funcArrays.first->fileName, arrayLines.second, itt->second.first, itt->second.second);
                    insertArrayCopying(funcArrays.first->fileName, arrayLines.second, itt->second.first, itt->second.second);
                }
            }
        }

        __spf_print(1, "[%s]: create functions\n", region->GetName().c_str()); // remove

        // creating new functions
        auto crossedFuncs = region->GetCrossedFuncs();
        auto allFuncs = region->GetAllFuncCalls();

        map<string, vector<ParallelRegionLines>> newLinesToEdit; // file -> lines

        for (auto &crossedFunc : crossedFuncs)
            copyFunction(region, crossedFunc, commonBlocks, allUsedCommonArrays, newLinesToEdit, createdCommonArrays, createdCommonBlocks, string("_") + region->GetName());

        for (auto &commonFunc : allCommonFunctions)
        {
            auto it = crossedFuncs.find(commonFunc);
            auto itt = region->GetAllFuncCalls().find(commonFunc);
            if (it == crossedFuncs.end() && itt != region->GetAllFuncCalls().end())
                copyFunction(region, commonFunc, commonBlocks, allUsedCommonArrays, newLinesToEdit, createdCommonArrays, createdCommonBlocks, string("_") + region->GetName());
        }

        // forall funcs B, C: B is not crossed & C is crossed & B call C ==> need to change B
        //                    B is not all-common
        for (auto &func : allFuncs)
        {
            auto it = crossedFuncs.find(func);
            auto itt = allCommonFunctions.find(func);
            if (it == crossedFuncs.end() && itt == allCommonFunctions.end())
            {
                for (auto &crossedFunc : crossedFuncs)
                {
                    auto it = func->callsFrom.find(crossedFunc->funcName);
                    if (it != func->callsFrom.end())
                    {
                        Statement *end = new Statement(func->funcPointer->GetOriginal()->lastNodeOfStmt());
                        pair<Statement*, Statement*> beginEnd = make_pair(func->funcPointer, end);
                        pair<int, int> funcLines = make_pair(beginEnd.first->GetOriginal()->lineNumber(), beginEnd.second->GetOriginal()->lineNumber());

                        auto it = newLinesToEdit.find(func->fileName);
                        if (it == newLinesToEdit.end())
                            it = newLinesToEdit.insert(it, make_pair(func->fileName, vector<ParallelRegionLines>()));
                        it->second.push_back(ParallelRegionLines(funcLines, beginEnd));

                        __spf_print(1, "    lines %d-%d added with statement ids %d,%d\n",
                                    funcLines.first, funcLines.second,
                                    beginEnd.first->GetOriginal()->id(), beginEnd.second->GetOriginal()->id()); // remove
                    }
                }
            }
        }

        // replace created functions calls
        auto funcSymbols = region->GetFuncSymbols();

        for (auto &fileLines : region->GetAllLines())
        {
            auto it = funcSymbols.find(fileLines.first);
            if (it != funcSymbols.end())
            {
                for (auto &origCopy : it->second)
                    replaceSymbol(fileLines.first, fileLines.second, origCopy.first, origCopy.second);
            }
        }

        for (auto &fileLines : newLinesToEdit)
        {
            auto it = funcSymbols.find(fileLines.first);
            if (it != funcSymbols.end())
            {
                for (auto &origCopy : it->second)
                    replaceSymbol(fileLines.first, fileLines.second, origCopy.first, origCopy.second);
            }
        }
    }
}

int printCheckRegions(const char *fileName, const vector<ParallelRegion*> &regions,
                      const map<DIST::Array*, const CommonBlock*> &allUsedCommonArrays,
                      const set<FuncInfo*> &allCommonFunctions)
{
    string outText = "";    
    for (auto &region : regions)
    {
        outText += "*** REGION '" + region->GetName() + "'\n";
        outText += "  COMMON ARRAYS:";

        for (auto &funcArrays : region->GetUsedCommonArrays())
            for (auto &arrayLines : funcArrays.second)
                outText += " " + arrayLines.first->GetShortName();

        outText += "\n";
        outText += "  LOCAL ARRAYS in [FUNC, ARRAY, [LINES]]:\n";
        
        for (auto &funcArrays : region->GetUsedLocalArrays())
        {
            for (auto &arrayLines : funcArrays.second)
            {
                string toPrint = "";
                for (auto &lines : arrayLines.second)
                {
                    toPrint += "[" + to_string(lines.lines.first);
                    toPrint += "-" + to_string(lines.lines.second);
                    toPrint += "]";
                }

                outText += "    [" + funcArrays.first->funcName + ", " + arrayLines.first->GetShortName() + ", " + toPrint + "]\n";
            }
        }
        outText += "  CROSSED FUNCTIONS:";

        for (auto &func : region->GetCrossedFuncs())
            outText += " " + func->funcName;

        outText += "\n\n";
    }

    outText += "*** SUMMARY\n";
    outText += "  ALL GLOBAL ARRAYS:";

    for (auto &commonArrayCommonBlock : allUsedCommonArrays)
        outText += " " + commonArrayCommonBlock.first->GetShortName();

    outText += "\n";
    outText += "  ALL COMMON FUNCTIONS:";

    for (auto &func : allCommonFunctions)
        outText += " " + func->funcName;

    outText += "\n";
           
    if (fileName == NULL)
        __spf_print(1, "%s", outText.c_str());    
    else
    {
        FILE *file = fopen(fileName, "w");
        if (file == NULL)
        {
            __spf_print(1, "can not open file '%s'\n", fileName);
            return -1;
        }
        fprintf(file, "%s", outText.c_str());
        fclose(file);
    }
    return 0;
}

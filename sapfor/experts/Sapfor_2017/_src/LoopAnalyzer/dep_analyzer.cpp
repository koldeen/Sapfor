#include "../Utils/leak_detector.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>

#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>

#include <vector>
#include <map>
#include <set>
#include <utility>
#include <assert.h>
#include <chrono>

#include "dvm.h"
#include "loop_analyzer.h"

#include "../Utils/utils.h"
#include "../Utils/SgUtils.h"
#include "../ParallelizationRegions/ParRegions_func.h"
#include "../SageAnalysisTool/depGraph.h"

using std::vector;
using std::pair;
using std::tuple;
using std::map;
using std::set;
using std::make_pair;
using std::make_tuple;
using std::get;
using std::string;
using std::wstring;
using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::milliseconds;

typedef enum { ddflow, ddanti, ddoutput, ddreduce } ddnature;
extern map<LoopGraph*, depGraph*> depInfoForLoopGraph;
extern void initializeDepAnalysisForFunction(SgFile *file, SgStatement *func, const map<string, FuncInfo*> &allFuncs, vector<Messages> &messagesForFile);
extern int staticPrivateAnalysis;

static const set<string> *currentNonDistrArrays = NULL;
static map<SgSymbol*, string> varInOut;
static map<SgExpression*, string> *currentCollection = NULL;

bool isRemovableDependence(const depNode *currNode, const set<string> &privVars)
{
    bool result = true;
    bool varIn = false, varOut = false;

    switch (currNode->typedep)
    {
    case WRONGDEP:
        result = false;
        break;
    case ARRAYDEP:
        if (currentNonDistrArrays && currentNonDistrArrays->size() > 0)
        {
            SgSymbol *vIn = OriginalSymbol(currNode->varin->symbol());
            SgSymbol *vOut = OriginalSymbol(currNode->varout->symbol());

            auto found = varInOut.find(vIn);
            if (found == varInOut.end())
                found = varInOut.insert(found, make_pair(vIn, vIn->identifier()));
            varIn = currentNonDistrArrays->find(found->second) != currentNonDistrArrays->end();

            found = varInOut.find(vOut);
            if (found == varInOut.end())
                found = varInOut.insert(found, make_pair(vOut, vOut->identifier()));
            varOut = currentNonDistrArrays->find(found->second) != currentNonDistrArrays->end();
        }
        //dont check if textual identically 
        if ((!isEqExpressions(currNode->varin, currNode->varout, *currentCollection) || varIn || varOut) && (currNode->varin != currNode->varout))
        {
            // TODO: process all loop, not only top loop
            if (currNode->knowndist[1] == 0 || currNode->distance[1] != 0)
            {
                if (currNode->knowndist[1] == 0)
                    result = false;
            }
            else if (varIn || varOut) // found dependencies between non ditributed arrays
            {
                result = false;
            }
        }

        break;
    case PRIVATEDEP:
    case REDUCTIONDEP:
        break;
    case SCALARDEP:
        if (privVars.find(currNode->varin->symbol()->identifier()) == privVars.end())
            result = false;
        break;
    default:
        result = false;
        break;
    }
    return result;
}

static SgStatement* getCurrentFunc(SgStatement *st)
{
    while (st->variant() != PROG_HEDR && st->variant() != PROC_HEDR && st->variant() != FUNC_HEDR)
        st = st->controlParent();
    checkNull(st, convertFileName(__FILE__).c_str(), __LINE__);
    return st;
}

depGraph *getDependenciesGraph(LoopGraph *currLoop, SgFile *file, const set<string> *privVars)
{
    SgForStmt *currLoopRef = (SgForStmt*)currLoop->loop->GetOriginal();
    auto t = high_resolution_clock::now();

    map<SgExpression*, string> tmpCollection;
    currentCollection = &tmpCollection;

    depGraph *depg = new depGraph(file, getCurrentFunc(currLoopRef), currLoopRef, *privVars);
    float elapsed = duration_cast<milliseconds>(high_resolution_clock::now() - t).count() / 1000.;
    if (elapsed > 1.0f)
        printf("SAPFOR: time of graph bulding for loop %d = %f sec\n", currLoop->lineNum, elapsed);
    currentCollection = NULL;
    return depg;
}

//TODO: remove?
static int isOnlyDef(SgStatement *loopSt, const map<SgStatement*, vector<DefUseList>> &defUseByPlace, const string &symb)
{
    SgStatement *last = loopSt->lastNodeOfStmt();
    bool wasFoundSome = false;
    int count = 0;
    for (auto st = loopSt; st != last; st = st->lexNext())
    {
        auto it = defUseByPlace.find(st);
        if (it != defUseByPlace.end())
        {
            for (auto &elem : it->second)
            {
                if (elem.getVar() == symb)
                {
                    wasFoundSome = true;
                    if (elem.isUse())
                        return -1;
                    if (elem.isDef())
                        count++;
                }
            }
        }
    }

    if (!wasFoundSome)
        printInternalError(convertFileName(__FILE__).c_str(), __LINE__);

    return count;
}

// try to find dependencies: reductions and privates for scalar 
//                           and regular and other for arrrays
//TODO: add optimization - dont call omega test for arrays many times
void tryToFindDependencies(LoopGraph *currLoop, const map<int, pair<SgForStmt*, pair<set<string>, set<string>>>> &allLoops,
                           set<SgStatement*> &funcWasInit, SgFile *file, vector<ParallelRegion*> regions,
                           vector<Messages> *currMessages,
                           map<SgExpression*, string> &collection,
                           const map<string, FuncInfo*> &allFuncs, const map<SgStatement*, vector<DefUseList>> &defUseByPlace)
{
    auto it = allLoops.find(currLoop->lineNum);
    if (it == allLoops.end())
        return;

    map<int, SgForStmt*> localAllLoopMap;
    for (auto &elem : allLoops)
        localAllLoopMap.insert(make_pair(elem.first, elem.second.first));

    ParallelRegion *currReg = getRegionByLine(regions, it->second.first->fileName(), currLoop->lineNum);

    if (currReg && currLoop->hasLimitsToParallel() == false)
    {
        SgForStmt *currLoopRef = it->second.first;
        bool onlyOneStep = false;
        // if identical
        string startL = string(currLoopRef->start()->unparse());
        string endL = string(currLoopRef->end()->unparse());
        if (startL == endL)
            onlyOneStep = true;

        const set<string> &privVars = it->second.second.first;
        const set<string> &nonDistrArrays = it->second.second.second;
        
        SgStatement *func = getFuncStat(currLoopRef);
        if (funcWasInit.find(func) == funcWasInit.end())
        {
            funcWasInit.insert(func);
            initializeDepAnalysisForFunction(file, func, allFuncs, *currMessages);
        }

        currentNonDistrArrays = &nonDistrArrays;
        currentCollection = &collection;
        depGraph *depg = getDependenciesGraph(currLoop, file, &privVars);
        currentNonDistrArrays = NULL;
        currentCollection = NULL;

        /*auto t = high_resolution_clock::now();
        depGraph *depg = new depGraph(file, getCurrentFunc(currLoopRef), currLoopRef, privVars);
        float elapsed = duration_cast<milliseconds>(high_resolution_clock::now() - t).count() / 1000.;
        if (elapsed > 1.0f)
            printf("SAPFOR: time of graph bulding for loop %d = %f sec\n", currLoop->lineNum, elapsed);*/

        if (depg)
        {
            const std::vector<depNode*> &nodes = depg->getNodes();
            vector<const depNode*> privatesToAdd;
            vector<const depNode*> reductionsToAdd;
            vector<const depNode*> unknownScalarDep;

            bool findUnknownDepLen = false;
            map<SgSymbol*, tuple<int, int, int>> acrossToAdd;

            bool varIn = false, varOut = false;
            bool isEqual = false;

            for (int k = 0; k < nodes.size(); ++k)
            {
                const depNode *currNode = nodes[k];
                switch (currNode->typedep)
                {
                case WRONGDEP:
                    break;
                case ARRAYDEP:
                    if (nonDistrArrays.size() > 0)
                    {
                        SgSymbol *vIn = OriginalSymbol(currNode->varin->symbol());
                        SgSymbol *vOut = OriginalSymbol(currNode->varout->symbol());

                        auto found = varInOut.find(vIn);
                        if (found == varInOut.end())
                            found = varInOut.insert(found, make_pair(vIn, vIn->identifier()));
                        varIn = nonDistrArrays.find(found->second) != nonDistrArrays.end();
                        
                        found = varInOut.find(vOut);
                        if (found == varInOut.end())
                            found = varInOut.insert(found, make_pair(vOut, vOut->identifier()));
                        varOut = nonDistrArrays.find(found->second) != nonDistrArrays.end();
                    }

                    isEqual = isEqExpressions(currNode->varin, currNode->varout, collection);
                    //dont check if textual identically 
                    if ((!isEqual || varIn || varOut) && (currNode->varin != currNode->varout))
                    {
                        // TODO: process all loop, not only top loop
                        if (currNode->knowndist[1] == 0 || currNode->distance[1] != 0)
                        {
                            if (currNode->knowndist[1] == 0)
                            {
                                if (!findUnknownDepLen)
                                {
                                    auto message = currNode->createDepMessagebetweenArrays();
                                    wstring depMessageEng = to_wstring(message.first), depMessageRus = to_wstring(message.second);
                                    
                                    depMessageEng += L" with unknown distance in loop on line " + std::to_wstring(currLoopRef->lineNumber()) + L" prevents parallelization";
                                    depMessageRus += L"#" + std::to_wstring(currLoopRef->lineNumber());

                                    currMessages->push_back(Messages(NOTE, currNode->stmtin->lineNumber(), L"R124:" + depMessageRus, depMessageEng, 3006));

                                    // __spf_print only first unknown dep length
                                    findUnknownDepLen = true;
                                    if (!onlyOneStep)
                                        currLoop->hasUnknownArrayDep = true;
                                }
                            }
                            else if (!findUnknownDepLen) //currNode->distance[1] != 0
                            {
                                const ddnature nature = (ddnature)currNode->kinddep;
                                int position = -1;
                                if (nature == ddflow)
                                    position = 0;
                                else if (nature == ddanti)
                                    position = 1;

                                if (position != -1)
                                {
                                    SgSymbol *arrayS = OriginalSymbol(currNode->varin->symbol());
                                    SgArrayRefExp *arrayRef = (SgArrayRefExp*)(currNode->varin);

                                    bool existSubs = false;

                                    auto it = acrossToAdd.find(arrayS);
                                    if (it == acrossToAdd.end())
                                    {
                                        int subsPos = -1;
                                        SgSymbol *doName = currLoopRef->symbol();
                                        for (int z = 0; z < arrayRef->numberOfSubscripts() && !existSubs; ++z)
                                        {
                                            existSubs = checkExistence(arrayRef->subscript(z), doName);
                                            if (existSubs)
                                                subsPos = z;
                                        }

                                        if (existSubs)
                                            it = acrossToAdd.insert(it, make_pair(arrayS, make_tuple(0, 0, subsPos)));
                                    }
                                    else
                                        existSubs = true;

                                    if (existSubs)
                                    {
                                        if (position == 0)
                                            get<0>(it->second) = std::max(get<0>(it->second), abs((int)currNode->distance[1]));
                                        else
                                            get<1>(it->second) = std::max(get<1>(it->second), abs((int)currNode->distance[1]));
                                    }
                                }
                            }
                            //currNode->displayDep();
                        }
                        else if (!isEqual && (varIn || varOut)) // found dependencies between non ditributed arrays
                        {
                            if (currNode->knowndist[1] == 0 || currNode->distance[1] != 0)
                            {
                                if (!findUnknownDepLen)
                                {
                                    auto message = currNode->createDepMessagebetweenArrays();
                                    wstring depMessageEng = to_wstring(message.first), depMessageRus = to_wstring(message.second);
                                    depMessageEng += L" prevents parallelization";
                                    currMessages->push_back(Messages(NOTE, currNode->stmtin->lineNumber(), L"R124:" + depMessageRus, depMessageEng, 3006));

                                    // __spf_print only first unknown dep length
                                    findUnknownDepLen = true;
                                    if (!onlyOneStep)
                                        currLoop->hasUnknownArrayDep = true;
                                }
                            }
                        }
                    }

                    break;
                case PRIVATEDEP: //TODO
                    if (privVars.find(currNode->varin->symbol()->identifier()) == privVars.end())
                        privatesToAdd.push_back(currNode);
                    //unknownScalarDep.push_back(currNode); 
                    break;
                case REDUCTIONDEP:
                    if (privVars.find(currNode->varin->symbol()->identifier()) == privVars.end())
                        reductionsToAdd.push_back(currNode);
                    break;
                case SCALARDEP:
                    if (privVars.find(currNode->varin->symbol()->identifier()) == privVars.end())
                        unknownScalarDep.push_back(currNode);
                    break;
                default:
                    break;
                }
            }

            if (!onlyOneStep)
            {
                addPrivatesToLoops(currLoop, privatesToAdd, localAllLoopMap, *currMessages);
                addReductionsToLoops(currLoop, reductionsToAdd, localAllLoopMap, *currMessages);
                if (!findUnknownDepLen && !currLoop->hasLimitsToParallel())
                    addAcrossToLoops(currLoop, acrossToAdd, localAllLoopMap, *currMessages);
                
                currLoop->hasUnknownScalarDep = (unknownScalarDep.size() != 0);
                for (int k = 0; k < unknownScalarDep.size(); ++k)
                {
                    __spf_print(1, "  unknown scalar dependencies by '%s' on line %d (try to specify its type)\n",
                                unknownScalarDep[k]->varin->symbol()->identifier(), unknownScalarDep[k]->stmtin->lineNumber());

                    wstring messageE, messageR;
                    __spf_printToLongBuf(messageE, L"unknown scalar dependencies by '%s' (try to specify its type)", to_wstring(unknownScalarDep[k]->varin->symbol()->identifier()).c_str());
                    __spf_printToLongBuf(messageR, R112, to_wstring(unknownScalarDep[k]->varin->symbol()->identifier()).c_str());

                    currMessages->push_back(Messages(WARR, unknownScalarDep[k]->stmtin->lineNumber(), messageR, messageE, 3005));

                    currLoop->linesOfScalarDep.push_back(unknownScalarDep[k]->stmtin->lineNumber());
                }
            }

            if (!currLoop->hasLimitsToParallel())
                depInfoForLoopGraph[currLoop] = depg;
            else
            {
                currLoop->addConflictMessages(currMessages);
                delete depg;
            }
        }
    }
    else if (currReg && currLoop->hasLimitsToParallel())
    {
        // loop has limits
        currLoop->addConflictMessages(currMessages);
    }
    
    for (int k = 0; k < currLoop->children.size(); ++k)
        tryToFindDependencies(currLoop->children[k], allLoops, funcWasInit, file, regions, currMessages, collection, allFuncs, defUseByPlace);
}
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <map>
#include <string>

#include "../GraphCall/graph_calls.h"
#include "../Utils/errors.h"
#include "../Utils/utils.h"
#include "sage++user.h"
#include "definesValues.h"
#include "set.h"
#include "definitionSet.h"


using std::map;
using std::string;
using std::vector;
using std::wstring;

#ifdef __SPF
extern "C" void addToCollection(const int line, const char *file, void *pointer, int type);
extern "C" void removeFromCollection(void *pointer);
#endif

//
// Global table to store the use and def 
//

// Not used anymore, replaced by attributes;
// SgExpression *Used[MAXNODE];
// SgExpression *Defined[MAXNODE];

//
// declaration for the  data flow  framework
//

extern Set *genSet[MAXNODE];
extern Set *killSet[MAXNODE];
extern Set *inSet[MAXNODE];
extern Set *outSet[MAXNODE];

extern void iterativeForwardFlowAnalysis(SgFile *file,
    SgStatement *func,
    Set *(*giveGenSet)(SgStatement *func, SgStatement *stmt),
    Set *(*giveKillSet)(SgStatement *func, SgStatement *stmt),
    int(*feq)(void *e1, void *e2),
    void *(*fcomb)(void *e1, void *e2),
    void(*fp)(void *e1));

extern void generalIterativeFlowAnalysis(SgFile *file,
    SgStatement *func,
    Set *(*transfertSet)(SgStatement *func, SgStatement *stmt, Set *setin),
    int(*feq)(void *e1, void *e2),
    void* (*fcomb)(void *e1, void *e2),
    void(*fp)(void *e1));

/////////////////////////////////////////////////////////////////////
// from the intrinsic.C file
/////////////////////////////////////////////////////////////////////

extern int isSymbolIntrinsic(SgSymbol *symb);

/////////////////////////////////////////////////////////////////////
// computes the definition for each file;
/////////////////////////////////////////////////////////////////////

static inline bool isVarRef(SgExpression *ex)
{
    const int var = ex->variant();
    return (var == ARRAY_REF || var == VAR_REF || var == ARRAY_OP);
}

static void fillDef(SgExpression *ex, vector<SgExpression*> &useL, vector<SgExpression*> &defL, 
                    const map<string, FuncInfo*> &funcs, vector<Messages> &messagesForFile, const int currLine);

static void fillUse(SgExpression *ex, vector<SgExpression*> &useL, vector<SgExpression*> &defL,
                    const map<string, FuncInfo*> &funcs, vector<Messages> &messagesForFile, const int currLine)
{
    if (ex)
    {
        if (isVarRef(ex))
        {
            useL.push_back(ex);
            fillUse(ex->lhs(), useL, defL, funcs, messagesForFile, currLine);
            fillUse(ex->rhs(), useL, defL, funcs, messagesForFile, currLine);
        }
        else if (ex->variant() == FUNC_CALL)
            fillDef(ex, useL, defL, funcs, messagesForFile, currLine);
        else
        {
            fillUse(ex->lhs(), useL, defL, funcs, messagesForFile, currLine);
            fillUse(ex->rhs(), useL, defL, funcs, messagesForFile, currLine);
        }
    }
}

static void fillDef(SgExpression *ex, vector<SgExpression*> &useL, vector<SgExpression*> &defL,
                    const map<string, FuncInfo*> &funcs, vector<Messages> &messagesForFile, const int currLine)
{
    if (ex)
    {
        if (ex->variant() == FUNC_CALL)
        {
            bool isIntrinsic = isSymbolIntrinsic(ex->symbol());
            SgFunctionCallExp *call = (SgFunctionCallExp*)ex;

            FuncInfo *currInfo = NULL;
            auto it = funcs.find(call->funName()->identifier());
            if (funcs.end() != it)
            {
                currInfo = it->second;
                if (currInfo->funcParams.countOfPars != call->numberOfArgs())
                {
                    wstring bufE, bufR;
                    __spf_printToLongBuf(bufE, L"Count of formal and actual parameters are not equal for function call '%s'", to_wstring(currInfo->funcName).c_str());
#ifdef _WIN32
                    __spf_printToLongBuf(bufR, R82, to_wstring(currInfo->funcName).c_str());
#endif
                    messagesForFile.push_back(Messages(ERROR, currLine, bufR, bufE, 1046));
                    throw -991;
                }
            }
            
            for (int z = 0; z < call->numberOfArgs(); ++z)
            {
                SgExpression *arg = call->arg(z);
                if (isVarRef(arg))
                {
                    if (currInfo)
                    {
                        if (currInfo->funcParams.isArgOut(z))
                            defL.push_back(arg);
                    }
                    else
                    {
                        if (!isIntrinsic)
                            defL.push_back(arg);
                    }
                    useL.push_back(arg);
                }

                fillUse(arg->lhs(), useL, defL, funcs, messagesForFile, currLine);
                fillUse(arg->rhs(), useL, defL, funcs, messagesForFile, currLine);
            }
        }
        else
        {
            fillUse(ex->lhs(), useL, defL, funcs, messagesForFile, currLine);
            fillUse(ex->rhs(), useL, defL, funcs, messagesForFile, currLine);
        }
    }
}

SgExpression* makeList(const std::vector<SgExpression*> &vec)
{
    if (vec.size() == 0)
        return NULL;
    
    SgExpression *list = new SgExpression(EXPR_LIST);
    SgExpression *r_list = list;
    for (int i = 0; i < vec.size(); ++i)
    {
        list->setLhs(vec[i]);
        if (i != vec.size() - 1)
        {
            list->setRhs(new SgExpression(EXPR_LIST));
            list = list->rhs();
        }
    }

    return r_list;
}

static void defUseVar(SgStatement *stmt, SgStatement *func, SgExpression **def, SgExpression **use, 
                      const map<string, FuncInfo*> &allFuncs, vector<Messages> &messagesForFile)
{
    SgExpression *expr1, *expr2;
    SgExpression *temp, *pt, *pt1;
    SgArrayRefExp *aref;
    SgExprListExp *exprli;
    SgFunctionCallExp *fc;
    SgInputOutputStmt *iostmt;
    SgCallStmt *callStat;    
    if (!stmt || !func)
        return;

    *def = NULL;
    *use = NULL;

    switch (stmt->variant())
    {
    case  ASSIGN_STAT:
        expr1 = stmt->expr(0);
        expr2 = stmt->expr(1);
        // need to be recursively applied later;
        if (expr1)
            *def = expr1->symbRefs();
        else
            *def = NULL;
        if (expr2)
            *use = expr2->symbRefs();
        else
            *use = NULL;
        for (temp = *def; temp; temp = temp->rhs())
        {
            if (aref = isSgArrayRefExp(temp->lhs()))
            {
                pt = aref->subscripts();
                if (pt)
                {
                    pt1 = pt->symbRefs();
                    // we add it to the end of use;
                    if (*use)
                    {
                        if (pt1 && (exprli = isSgExprListExp(*use)))
                        {
                            exprli->linkToEnd(*pt1);
                        }
                    }
                    else
                        *use = pt1;
                }
            }
        }

        for (temp = *use; temp; temp = temp->rhs())
        {
            if (aref = isSgArrayRefExp(temp->lhs()))
            {
                pt = aref->subscripts();
                if (pt)
                {
                    pt1 = pt->symbRefs();
                    // we add it to the end of use;
                    if (pt1 && (exprli = isSgExprListExp(*use)))
                    {
                        exprli->linkToEnd(*pt1);
                    }
                }
            }

            if (fc = isSgFunctionCallExp(temp->lhs()))
            {
                FuncInfo *currInfo = NULL;
                auto it = allFuncs.find(fc->funName()->identifier());
                if (allFuncs.end() != it)
                {
                    currInfo = it->second;
                    if (currInfo->funcParams.countOfPars != fc->numberOfArgs())
                    {
                        wstring bufE, bufR;
                        __spf_printToLongBuf(bufE, L"Count of formal and actual parameters are not equal for function call '%s'", to_wstring(currInfo->funcName).c_str());
#ifdef _WIN32
                        __spf_printToLongBuf(bufR, R83, to_wstring(currInfo->funcName).c_str());
#endif
                        messagesForFile.push_back(Messages(ERROR, stmt->lineNumber(), bufR, bufE, 1046));
                        throw -991;
                    }
                }

                pt = fc->args();
                if (pt)
                {
                    pt1 = pt->symbRefs();
                    // we add it to the end of use;
                    if (pt1 && (exprli = isSgExprListExp(*use)))
                    {
                        exprli->linkToEnd(*pt1);
                    }

                    //new algo
                    if (currInfo)
                    {
                        vector<SgExpression*> defL;
                        vector<SgExpression*> useL;
                        fillDef(fc, useL, defL, allFuncs, messagesForFile, stmt->lineNumber());
                        if (defL.size())
                        {
                            SgExpression *list = makeList(defL);
                            if (exprli = isSgExprListExp(*def))
                                exprli->linkToEnd(*list);
                            else
                                *def = list;
                        }
                    } //old algo
                    else
                    {
                        // if not an intrinsic, needs to be added to the def list;
                        if (!isSymbolIntrinsic(fc->funName()))
                        {
                            pt1 = pt->symbRefs();
                            if (pt1 && (exprli = isSgExprListExp(*def)))
                            {
                                exprli->linkToEnd(*pt1);
                            }
                            else
                                *def = pt1;
                        }
                    }
                }
            }
        }
        break;
    case FOR_NODE:
    {
        SgExprListExp *el;
        SgVarRefExp   *vr;
        if (stmt->symbol())
        {
            vr = new SgVarRefExp(*(stmt->symbol()));
            *def = new SgExprListExp(*vr);
            *use = new SgExprListExp(*vr);
        }
        else
        {
            *use = NULL;
            *def = NULL;
        }
        // Borne inf and sup are also sunject to use;
        expr1 = stmt->expr(0);
        expr2 = stmt->expr(1);
        // need to be recursively applied later;
        if (expr1)
        {
            pt1 = expr1->symbRefs();
            if (*use)
            {
                if (pt1 && (exprli = isSgExprListExp(*use)))
                {
                    exprli->linkToEnd(*pt1);
                }
            }
            else
                *use = pt1;
        }
        if (expr2)
        {
            pt1 = expr2->symbRefs();
            if (*use)
            {
                if (pt1 && (exprli = isSgExprListExp(*use)))
                {
                    exprli->linkToEnd(*pt1);
                }
            }
            else
                *use = pt1;
        }
        for (temp = *use; temp; temp = temp->rhs())
        {
            if (aref = isSgArrayRefExp(temp->lhs()))
            {
                pt = aref->subscripts();
                if (pt)
                {
                    pt1 = pt->symbRefs();
                    // we add it to the end of use;
                    if (pt1 && (exprli = isSgExprListExp(*use)))
                    {
                        exprli->linkToEnd(*pt1);
                    }
                }
            }
            if (fc = isSgFunctionCallExp(temp->lhs()))
            {
                pt = fc->args();
                if (pt)
                {
                    pt1 = pt->symbRefs();
                    // we add it to the end of use;
                    if (pt1 && (exprli = isSgExprListExp(*use)))
                    {
                        exprli->linkToEnd(*pt1);
                    }
                    // if not an intrinsic, needs to be added to the def list;
                    if (!isSymbolIntrinsic(fc->funName()))
                    {
                        pt1 = pt->symbRefs();
                        if (pt1 && (exprli = isSgExprListExp(*def)))
                        {
                            exprli->linkToEnd(*pt1);
                        }
                        else
                            *def = pt1;
                    }
                }
            }
        }
    }
    break;
    case LOGIF_NODE:
    case CONT_STAT:
    case CONTROL_END: // here we should check if loop...
    case IF_NODE:
    case WHILE_NODE:
    case DO_WHILE_NODE:
        expr2 = stmt->expr(0);
        // need to be recursively applied later;
        if (expr2)
            *use = expr2->symbRefs();
        else
            *use = NULL;
        *def = NULL;
        for (temp = *use; temp; temp = temp->rhs())
        {
            if (aref = isSgArrayRefExp(temp->lhs()))
            {
                pt = aref->subscripts();
                if (pt)
                {
                    pt1 = pt->symbRefs();
                    // we add it to the end of use;
                    if (pt1 && (exprli = isSgExprListExp(*use)))
                    {
                        exprli->linkToEnd(*pt1);
                    }
                }
            }
            if (fc = isSgFunctionCallExp(temp->lhs()))
            {
                pt = fc->args();
                if (pt)
                {
                    pt1 = pt->symbRefs();
                    // we add it to the end of use;
                    if (pt1 && (exprli = isSgExprListExp(*use)))
                    {
                        exprli->linkToEnd(*pt1);
                    }
                    // if not an intrinsic, needs to be added to the def list;
                    if (!isSymbolIntrinsic(fc->funName()))
                    {
                        pt1 = pt->symbRefs();
                        if (pt1 && (exprli = isSgExprListExp(*def)))
                        {
                            exprli->linkToEnd(*pt1);
                        }
                        else
                            *def = pt1;
                    }
                }
            }
        }
        break;

    case READ_STAT:
        iostmt = isSgInputOutputStmt(stmt);
        if (iostmt)
        {
            if (iostmt->itemList())
                *def = iostmt->itemList()->symbRefs();
            else
                *def = NULL;
            *use = NULL;
        }
        else
            Message("internal error : IO statements not found\n", 0);
        break;

    case WRITE_STAT:
    case PRINT_STAT:
        iostmt = isSgInputOutputStmt(stmt);
        if (iostmt)
        {
            if (iostmt->itemList())
                *use = iostmt->itemList()->symbRefs();
            else
                *use = NULL;
            *def = NULL;
        }
        else
            Message("internal error : IO statements not found\n", 0);
        break;
    case PROC_STAT:
        callStat = (SgCallStmt*)stmt;
        
        pt = callStat->expr(0);
        if (pt)
        {
            /**use = pt->symbRefs();
            // if not an intrinsic, needs to be added to the def list;
            if (!isSymbolIntrinsic(callStat->name()))
                *def = pt->symbRefs(); 
            printf("old use:\n");
            recExpressionPrint(*use);
            printf("old def:\n");
            recExpressionPrint(*def);*/
                        
            vector<SgExpression*> defL;
            vector<SgExpression*> useL;

            FuncInfo *currInfo = NULL;
            auto it = allFuncs.find(callStat->name()->identifier());
            if (allFuncs.end() != it)
            {
                currInfo = it->second;
                if (currInfo->funcParams.countOfPars != callStat->numberOfArgs())
                {
                    wstring bufE, bufR;
                    __spf_printToLongBuf(bufE, L"Count of formal and actual parameters are not equal for function call '%s'", to_wstring(currInfo->funcName).c_str());
#ifdef _WIN32
                    __spf_printToLongBuf(bufR, R84, to_wstring(currInfo->funcName).c_str());
#endif
                    messagesForFile.push_back(Messages(ERROR, stmt->lineNumber(), bufR, bufE, 1046));
                    throw -991;
                }
            }

            for (int z = 0; z < callStat->numberOfArgs(); ++z)
            {
                SgExpression *arg = callStat->arg(z);
                if (isVarRef(arg))
                {
                    if (currInfo)
                    {
                        if (currInfo->funcParams.isArgOut(z))
                            defL.push_back(arg);
                    }
                    else
                        defL.push_back(arg);
                    useL.push_back(arg);
                }
                
                fillUse(arg->lhs(), useL, defL, allFuncs, messagesForFile, callStat->lineNumber());
                fillUse(arg->rhs(), useL, defL, allFuncs, messagesForFile, callStat->lineNumber());
            }

            *use = makeList(useL);
            *def = makeList(defL);

            /*printf("new use:\n");
            recExpressionPrint(*use);
            printf("new def:\n");
            recExpressionPrint(*def);
            printf("");*/
        }
        else
        {
            *def = NULL;
            *use = NULL;
        }
        break;
    case GOTO_NODE:
    case STOP_STAT:
    case RETURN_STAT:
    case RETURN_NODE:
    case ELSEIF_NODE:
    case ARITHIF_NODE:
    case WHERE_NODE:
    case WHERE_BLOCK_STMT:
    case SWITCH_NODE:
    case CASE_NODE:
    case BREAK_NODE:
    case EXIT_STMT:
    case ASSGOTO_NODE:
    case COMGOTO_NODE:
    default:
        *def = NULL;
        *use = NULL;
        break;
    }
}


void initDefUseTable(SgStatement *func, const map<string, FuncInfo*> &allFuncs, vector<Messages> &messagesForFile)
{
    SgStatement *last, *first, *lastfunc, *temp;
    SgExpression *def, *use, *pt;
    int i;
    int nbatt, typeat, j;

    if (!func)
        return;

    lastfunc = func->lastNodeOfStmt();


    for (temp = func; temp; temp = temp->lexNext())
    {
        if (isSgExecutableStatement(temp))
        {
            nbatt = temp->numberOfAttributes();
            for (j = 0; j < nbatt; j++)
            {
                typeat = temp->attributeType(j);
                if ((typeat == USEDLIST_ATTRIBUTE) ||
                    (typeat == DEFINEDLIST_ATTRIBUTE))
                {
                    temp->deleteAttribute(j);
                    j--;
                }
            }
        }
        if (temp == lastfunc)
            break;
    }

    for (temp = func; temp; temp = temp->lexNext())
    {
        if (isSgExecutableStatement(temp))
        {
            defUseVar(temp, func, &def, &use, allFuncs, messagesForFile);
            temp->addAttribute(USEDLIST_ATTRIBUTE, (void*)use, 0);
            temp->addAttribute(DEFINEDLIST_ATTRIBUTE, (void*)def, 0);
        }
        if (temp == lastfunc)
            break;
    }
}

//
// Example of functions for flow analysis
//
int symbRefEqual(void *e1, void *e2)
{
    SgExpression *ex1, *ex2;
    SgSymbol     *s1, *s2;
    PT_ELSET     el1, el2;
    if (!e1 && !e2)
        return 1;
    if (!e1 || !e2)
        return 0;

    el1 = (PT_ELSET)e1;
    el2 = (PT_ELSET)e2;

    ex1 = el1->expr;
    ex2 = el2->expr;

    if ((s1 = ex1->symbol()) && (s2 = ex2->symbol()))
    {
        if (s1 == s2)
        {
            if (el1->stmt == el2->stmt)
                return 1;
            else
                return 0;
        }
        else
            return 0;
    }
    else
        return 0;
}

void myPrint(void *e1)
{
    SgExpression *ex1;
    PT_ELSET     el1;
    if (!e1)
        return;
    el1 = (PT_ELSET)e1;
    ex1 = el1->expr;
    if (el1->stmt)
        printf("(id = %d, line = %d, ", el1->stmt->id(), el1->stmt->lineNumber());
    else
        printf("(id = -, line = -, ");
    if (ex1->symbol())
        printf("%s", ex1->symbol()->identifier());
    else
        ex1->unparsestdout();
    printf(")");
    printf(",");
}

//
// Example of function to compute gen and kill  sets for Reaching Definition.
// NOARRAYREF indicate if we want array ref in

Set *makeGenSet(SgStatement *func, SgStatement *stmt)
{
    SgExpression *def, *use, *pt;
    PT_ELSET     el;
    Set *defset, *pts;

    if (!func || !stmt)
        return NULL;

    def = (SgExpression *)stmt->attributeValue(0, DEFINEDLIST_ATTRIBUTE);
    // Defined[stmt->id()];
    defset = new Set(symbRefEqual, NULL, myPrint);
#ifdef __SPF
    addToCollection(__LINE__, __FILE__, defset, 1);
#endif
    if (def)
    {
        for (pt = def; pt; pt = pt->rhs())
        {
            if (!isSgTypeExp(pt->lhs()))
            {
                if (!NOARRAYREF || !isSgArrayRefExp(pt->lhs()))
                {
                    el = new struct elset;
#ifdef __SPF
                    addToCollection(__LINE__, __FILE__, el, 1);
#endif
                    el->stmt = stmt;
                    el->expr = pt->lhs();
                    defset->addElement((void *)el);
                }
            }
        }
    }

    pts = defset;
    //  printf("Printing defset:\n");
    //  defset->printSet();
    defset = defset->compact();
    if (pts)
    {
#ifdef __SPF
        removeFromCollection(pts);
#endif
        delete pts;
    }
    //   defset->printSet();
    return defset;

}


Set *makeKillSet(SgStatement *func, SgStatement *stmt)
{

    SgExpression *def, *use, *pt, *defstmt, *expr1, *pt1;
    PT_ELSET     el;
    Set *killset, *pts;
    SgStatement *last, *first, *lastfunc, *temp;
    int trouve;
    if (!func || !stmt)
        return NULL;

    killset = new Set(symbRefEqual, NULL, myPrint);
#ifdef __SPF
    addToCollection(__LINE__, __FILE__, killset, 1);
#endif
    last = func->lastNodeOfStmt();
    defstmt = (SgExpression *)stmt->attributeValue(0, DEFINEDLIST_ATTRIBUTE);
    //Defined[stmt->id()];
    if (defstmt)
    {
        for (pt1 = defstmt; pt1; pt1 = pt1->rhs())
        {
            expr1 = pt1->lhs();
            if (!isSgArrayRefExp(expr1) && !isSgTypeExp(expr1))
            { // cannot kill an array ref;
                for (temp = func; temp; temp = temp->lexNext())
                {
                    if (temp != stmt)
                    {
                        if (def = (SgExpression *)temp->attributeValue(0, DEFINEDLIST_ATTRIBUTE))
                            //Defined[temp->id()])
                        {
                            for (pt = def; pt; pt = pt->rhs())
                            {
                                if (pt->lhs())
                                {
                                    if (pt->lhs()->symbol() == expr1->symbol())
                                    {
                                        el = new struct elset;
#ifdef __SPF
                                        addToCollection(__LINE__, __FILE__, el, 1);
#endif
                                        el->stmt = temp;
                                        el->expr = pt->lhs();
                                        killset->addElement((void *)el);
                                    }
                                }
                            }
                        }
                    }
                    if (temp == last)
                        break;
                }
            }
        }
    }
    pts = killset;
    //   printf("Printing killset:\n");
    //   killset->printSet();
    killset = killset->compact();
    //   killset->printSet();
    if (pts)
    {
#ifdef __SPF
        removeFromCollection(pts);
#endif
        delete pts;
    }
    return killset;
}

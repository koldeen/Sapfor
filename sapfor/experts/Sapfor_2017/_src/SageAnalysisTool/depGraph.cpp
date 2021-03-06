#include <stdio.h>
#include <vector>
#include <set>
#include <string>
#include <map>
#include <algorithm>

#ifdef __SPF
extern "C" void addToCollection(const int line, const char *file, void *pointer, int type);
extern "C" void removeFromCollection(void *pointer);
#endif

#if __SPF && NDEBUG && __BOOST
#include <boost/thread.hpp>
#endif
extern int passDone;

#include "../GraphCall/graph_calls.h"
#include "../Utils/errors.h"
#include "../VisualizerCalls/get_information.h"

#include "sage++user.h"
#include "definesValues.h"
#include "set.h"
#include "definitionSet.h"
#include "inducVar.h"
#include "arrayRef.h"
#include "depGraph.h"
#include "intrinsic.h"

using std::vector;
using std::set;
using std::map;
using std::string;
using std::pair;

///////////////////////////////////////////////////////////////////////////////////////
// to link with the omega Test 
///////////////////////////////////////////////////////////////////////////////////////

#include "OmegaForSage/include/portable.h"
#include "OmegaForSage/include/affine.h"

///////////////////////////////////////////////////////////////////////////////////////
// some global declarations
///////////////////////////////////////////////////////////////////////////////////////

depGraph *currentDepGraph = NULL;

extern SgStatement  *currentStmtIn;
extern SgStatement  *currentStmtOut;
extern SgExpression *currentVarIn;
extern SgExpression *currentVarOut;

///////////////////////////////////////////////////////////////////////////////////////
// for data dependence computation (uses omega Test) (dependence.C)
///////////////////////////////////////////////////////////////////////////////////////

extern Set* computeLoopDependencies(SgStatement *func, Set *inset, SgSymbol **tsymb, Set *induc);
extern int lexOrder(PT_ACCESSARRAY  el1, PT_ACCESSARRAY el2);

///////////////////////////////////////////////////////////////////////////////////////
// Part for computing array reference (arrayRef.C)
///////////////////////////////////////////////////////////////////////////////////////

extern Set* loopArrayAccessAnalysis(SgStatement *func, SgStatement *stmt, SgSymbol **tsymb, Set **induc, const set<string> &privVars);

///////////////////////////////////////////////////////////////////////////////////////
// declaration for defuse and reaching definition (defUse.C)
///////////////////////////////////////////////////////////////////////////////////////
extern void initDefUseTable(SgStatement *func, const map<string, FuncInfo*> &allFuncs, vector<Messages> &messagesForFile);
extern Set *makeGenSet(SgStatement *func, SgStatement *stmt);
extern Set *makeKillSet(SgStatement *func, SgStatement *stmt);
extern int symbRefEqual(void *e1, void *e2);
extern void myPrint(void *e1);

///////////////////////////////////////////////////////////////////////////////////////
// declaration for the  data flow  framework
///////////////////////////////////////////////////////////////////////////////////////

extern void iterativeForwardFlowAnalysis(SgFile *file,
    SgStatement *func,
    Set *(*giveGenSet)(SgStatement *func, SgStatement *stmt),
    Set *(*giveKillSet)(SgStatement *func, SgStatement *stmt),
    int(*feq)(void *e1, void *e2),
    void *(*fcomb)(void *e1, void *e2),
    void(*fp)(void *e1));

///////////////////////////////////////////////////////////////////////////////////////
// Utility Functions
///////////////////////////////////////////////////////////////////////////////////////


void convertContLoopToEnddo(SgStatement *stmt)
{
    SgForStmt         *doloop;
    SgStatement       *temp, *child;
    int               i;

    if (!stmt)
        return;
    if (doloop = isSgForStmt(stmt))
    {
        doloop->convertLoop();
    }

    i = 1;
    temp = stmt;
    child = temp->childList1(0);
    while (child)
    {
        convertContLoopToEnddo(child);
        child = temp->childList1(i);
        i++;
    }
    i = 1;
    temp = stmt;
    child = temp->childList2(0);
    while (child)
    {
        convertContLoopToEnddo(child);
        child = temp->childList2(i);
        i++;
    }
}

///////////////////////////////////////////////////////////////////////////////////////
// Here are the methods of depNode
///////////////////////////////////////////////////////////////////////////////////////


depNode::depNode(SgStatement *sin, SgStatement *sout,
                 SgExpression *vin, SgExpression *vout,
                 int tdep, int kdep, int *dist, int *kdist, int le)
{
    int i;

    stmtin = sin;
    stmtout = sout;
    varin = vin;
    varout = vout;
    typedep = tdep;
    kinddep = kdep;
    lenghtvect = le;
    if (tdep == ARRAYDEP)
    {
        distance.resize(le + 1);
        knowndist.resize(le + 1);

        for (i = 0; i < le + 1; ++i)
        {
            distance[i] = dist[i];
            knowndist[i] = kdist[i];
        }
    }
}


depNode::~depNode()
{
    //  Message("Delete depNode Not implemented yet",0);
}

pair<string, string> depNode::createDepMessagebetweenArrays() const
{
    string retEng;
    string retRus;
    char buf[1024];
    if (typedep == ARRAYDEP)
    {
        ddnature nature = (ddnature)kinddep;
        
        switch (nature)
        {
        case ddflow:
            retEng += "Flow dependence between ";
            retRus += "Flow#";
            break;
        case ddanti:
            retEng += "Anti dependence between ";
            retRus += "Anti#";
            break;
        case ddoutput:
            retEng += "Output dependence between ";
            retRus += "Output#";            
            break;
        case ddreduce:
            retEng += "Reduce dependence between ";
            retRus += "Reduce#";
            break;
        }
        retEng += varin->unparse();
        retRus += varin->unparse();

        sprintf(buf, " (line %d)", stmtin->lineNumber());
        retEng += buf;
        
        sprintf(buf, "#%d", stmtin->lineNumber());
        retRus += buf;
                
        retEng += " and ";
        retRus += "#";

        retEng += varout->unparse();
        retRus += varout->unparse();
        
        sprintf(buf, " (line %d)", stmtout->lineNumber());
        retEng += buf;
        
        sprintf(buf, "#%d", stmtout->lineNumber());
        retRus += buf;        
    }

    return std::make_pair(retEng, retRus);
}

void depNode::displayDep() const
{
    SgExpression *ex1, *ex2;
    int i;
    ddnature nature;
    ex1 = varin;
    ex2 = varout;


    if (!typedep)
    {
        printf("UNKNOWN DATA DEPENDENCE\n");
        return;
    }
    if (typedep == ARRAYDEP)
    {
        nature = (ddnature)kinddep;
        printf("------> ");
        switch (nature)
        {
        case ddflow: 
            printf("FLOW dependence between ");
            break;
        case ddanti: 
            printf("ANTI dependence between ");
            break;
        case ddoutput: 
            printf("OUTPUT dependence between ");
            break;
        case ddreduce: 
            printf("REDUCE dependence between ");
            break;
        }
        ex1->unparsestdout();
        printf(" (line %d) and ", stmtin->lineNumber());
        ex2->unparsestdout();
        printf(" (line %d) with vector (", stmtout->lineNumber());
        for (i = 1; i <= lenghtvect; i++)
        {
            if (knowndist[i])
                printf("%d", distance[i]);
            else
            {
                if (distance[i] & DEPZERO)
                {
                    printf("0");
                }
                if (distance[i] & DEPGREATER)
                {
                    printf("+");
                }
                if (distance[i] & DEPLESS)
                {
                    printf("-");
                }
            }

            if (i < lenghtvect)
                printf(", ");
        }
        printf(")\n");
    }
    else
    {
        printf("------> ");
        printf("This is a Scalar Dep on ");
        ex1->unparsestdout();
        if (typedep == PRIVATEDEP)
            printf(" and variable can be PRIVATE");
        if (typedep == REDUCTIONDEP)
            printf(" and variable can be REDUCTION with kind %d", kinddep);
        printf("\n");
    }
}

std::string depNode::displayDepToStr() const
{
    std::string out = "";

    SgExpression *ex1, *ex2;
    int i;
    ddnature nature;
    ex1 = varin;
    ex2 = varout;


    if (!typedep)
    {
        out += "UNKNOWN DATA DEPENDENCE";
        return out;
    }

    if (typedep == ARRAYDEP)
    {
        nature = (ddnature)kinddep;
        switch (nature)
        {
        case ddflow:
            out += "Flow dependence between ";
            break;
        case ddanti:
            out += "Anti dependence between ";
            break;
        case ddoutput:
            out += "Output dependence between ";
            break;
        case ddreduce:
            out += "Reduce dependence between ";
            break;
        }
        out += string(ex1->unparse());
        out += " (line (" + std::to_string(stmtin->lineNumber()) + ") and ";
        out += string(ex2->unparse());
        out += " (line " + std::to_string(stmtout->lineNumber()) + ") with vector (";

        for (i = 1; i <= lenghtvect; i++)
        {
            if (knowndist[i])
                out += std::to_string(distance[i]);
            else
            {
                if (distance[i] & DEPZERO)
                    out += "0";
                if (distance[i] & DEPGREATER)
                    out += "+";
                if (distance[i] & DEPLESS)
                    out += "-";
            }

            if (i < lenghtvect)
                out += ", ";
        }
        out += ")";
    }
    else
    {
        out += "This is a Scalar Dep on ";
        out += string(ex1->unparse());
        
        if (typedep == PRIVATEDEP)
            out += " and variable can be PRIVATE";
        if (typedep == REDUCTIONDEP)
            out += " and variable can be REDUCTION with kind " + std::to_string((int)kinddep);
    }
    return out;
}
///////////////////////////////////////////////////////////////////////////////////////
// Here are the methods of depGraph
///////////////////////////////////////////////////////////////////////////////////////
depGraph::depGraph(SgFile *fi, SgStatement *f, SgStatement *l, const set<string> &privVars) : privVars(privVars)
{
    SgForStmt *doloop;

    if (!l || !f)
    {
        Message("Cannot Create Dependence Graph", 0);
        return;
    }

    if (doloop = isSgForStmt(l))
    {
        func = f;
        loop = l;
        file = fi;
        tabstat = NULL;
        nbstmt = 0;
        tabtag = NULL;

        loopnum = 0;
        induc = NULL;
        currentDepGraph = this;
        perfectNestedLevel = doloop->isPerfectLoopNest();
        // We now compute the dependence Graph;
        arrayRef = loopArrayAccessAnalysis(func, loop, tsymb, &induc, privVars);

        createNeededException();        

        computeLoopDependencies(func, arrayRef, tsymb, induc);      
        scalarRefAnalysis(loop);
    }
    else
    {
        Message("Cannot Create Dependence Graph; not a doloop", 0);
        return;
    }
}


depGraph::~depGraph()
{
    //Message("Delete depGraph Not implemented yet", 0);
    for (int i = 0; i < nodes.size(); ++i)
    {
#ifdef __SPF
        removeFromCollection(nodes[i]);
#endif
        delete nodes[i];
    }
}


void depGraph::addAnEdge(SgStatement *sin, SgStatement *sout,
                         SgExpression *vin, SgExpression *vout,
                         int tdep, int kdep, int *dist, int *kdist, int le)
{
    depNode *datadep;
    datadep = new depNode(sin, sout, vin, vout, tdep, kdep, dist, kdist, le);
#ifdef __SPF
    addToCollection(__LINE__, __FILE__, datadep, 1);
#endif
    nodes.push_back(datadep);
}

depNode *depGraph::firstNode()
{
    return nodes[0];
}

const std::vector<depNode*>& depGraph::getNodes()
{
    return nodes;
}


void depGraph::display()
{
    printf("-------------------------------------------------------------------\n");
    printf("----------------- Print Data Dependence Graph----------------------\n");
    printf("-------------------------------------------------------------------\n");

    //loop->unparsestdout();
    for (unsigned i = 0; i < nodes.size(); ++i)
        nodes[i]->displayDep();

    printf("-------------------------------------------------------------------\n");
    printf("----------------- End Data Dependence Graph----------------------\n");
    printf("-------------------------------------------------------------------\n");
}


int stmtLexOrder(SgStatement *el1, SgStatement *el2)
{
    SgStatement *stmt;
    if (!el1 || !el2)
        return FALSE;
    if (el1 == el2)
        return FALSE;
    if (!el1 || !el2)
        return FALSE;
    stmt = el1;
    while (stmt)
    {
        if (stmt == el2)
            return TRUE;
        stmt = stmt->lexNext();
    }
    return FALSE;
}

//
// Do the scalar analysis, try to recognize private and reductions variables
// leave induction variables (this is for known quite simple)
// uses also the arrayRef set that already contains references to scalar that are not
// induction variable.
//

//
// looking for patterns of the scalar analysis
// Look if there is a write that is before all the other use of the scalar 
// variable;

int isItPrivate(int firstrefin, PT_ACCESSARRAY access1, Set *arrayset, SgStatement *loop)
{
    PT_ACCESSARRAY writeaccess, access2;
    int i, j, notFound;
    int firstref = firstrefin;
    int inifirstref;
    SgForStmt *doloop;
    SgStatement *forcheck;

    if (!(doloop = isSgForStmt(loop)))
    {
        Message("No loop given in isItPrivate", 0);
        return 0;
    }
    if (!access1)
    {
        Message("internal error in isItPrivate", 0);
        return 0;
    }

    inifirstref = firstref;
    while (firstref < arrayset->size())
    {
        writeaccess = NULL;
        for (j = firstref; (j < arrayset->size()); j++)
        {
            access2 = (PT_ACCESSARRAY)arrayset->getElement(j);
            if (access2 && access2->scalar && access2->stmt && loop->isIncludedInStmt(*(access2->stmt)) &&
                (access1->var->symbol() == access2->var->symbol()))
            {
                if (access2->rw)
                {
                    writeaccess = access2;
                    firstref = j + 1;
                    break;
                }
            }
        }
        if (!writeaccess)
            break;
        // now check that the write access is before, in lexical order;
        notFound = 0;
        for (j = inifirstref; (j < arrayset->size()) && !notFound; j++)
        {
            access2 = (PT_ACCESSARRAY)arrayset->getElement(j);
            if ((access2 != writeaccess) && loop->isIncludedInStmt(*(access2->stmt)))
            {
                if (access2 && access2->scalar && (access1->var->symbol() == access2->var->symbol()))
                {
                    if (!lexOrder(writeaccess, access2))
                    {
                        notFound = 1;
                    }
                }
            }
        }
        if (!notFound)
        {
            for (j = inifirstref; (j < arrayset->size()) && !notFound; j++)
            {
                access2 = (PT_ACCESSARRAY)arrayset->getElement(j);
                if ((access2 != writeaccess) && loop->isIncludedInStmt(*(access2->stmt)))
                {
                    if (access2 && access2->scalar && (access1->var->symbol() == access2->var->symbol()))
                    {
                        if (!access2->stmt || !writeaccess->stmt)
                            Message("Statement not set on array access; core dump is coming", 0);

                        if (access2->stmt->controlParent() != writeaccess->stmt->controlParent())
                        {
                            // check that the control parent is after;
                            if (!stmtLexOrder(writeaccess->stmt, access2->stmt->controlParent()))
                            {
                                notFound = 1;
                            }
                        }
                    }
                }
            }
        }
        if (!notFound)
            return 1;
    }
    return 0;
}

//
// look for reduction var the type of the reduction op
//

SgExpression *lookForFather(SgExpression *root, SgExpression *expr)
{
    SgExpression *temp;

    if (!root || !expr)
        return NULL;
    if (root->rhs() == expr)
        return root;
    if (root->lhs() == expr)
        return root;

    if (temp = lookForFather(root->rhs(), expr))
        return temp;
    if (temp = lookForFather(root->lhs(), expr))
        return temp;

    return NULL;
}

#include "reductionCode.h"

int lookForOperationKind(PT_ACCESSARRAY access)
{
    SgStatement  *stmt;
    SgSymbol    *sy;
    SgExpression *father;

    if (!access)
        return 0;

    sy = access->var->symbol();
    stmt = access->stmt;
    if (!sy || !stmt)
        return 0;
    SgExpression* topOper = stmt->expr(1);

    if (father = lookForFather(stmt->expr(1), access->var))
    {
        while (father && (father != access->var) && (father->variant() == EXPR_LIST))
            father = lookForFather(stmt->expr(1), father);
        if (!father)
            return UNKNOWREDUCTION;
        if (!sy->type())
            return UNKNOWREDUCTION;
        switch (father->variant())
        {
        case ADD_OP:
        case SUBT_OP:
            switch (sy->type()->variant())
            {
            case T_INT:
                return  IADDREDUCTION;
            case T_COMPLEX:
            case T_FLOAT:
                return SADDREDUCTION;
            case T_DCOMPLEX:
            case T_DOUBLE:
                return DADDREDUCTION;
            default:
                return UNKNOWREDUCTION;
            }
        case MULT_OP:
            if (topOper != father)
                return UNKNOWREDUCTION;
            switch (sy->type()->variant())
            {
            case T_INT:
                return IMULREDUCTION;
            case T_COMPLEX:
            case T_FLOAT:
                return SMULREDUCTION;
            case T_DCOMPLEX:
            case T_DOUBLE:
                return DMULREDUCTION;
            default:
                return UNKNOWREDUCTION;
            }
        case AND_OP:
            if (topOper != father)
                return UNKNOWREDUCTION;
            switch (sy->type()->variant())
            {
            case T_BOOL:
                return ANDREDUCTION;
            default:
                return UNKNOWREDUCTION;
            }
        case OR_OP:
            if (topOper != father)
                return UNKNOWREDUCTION;
            switch (sy->type()->variant())
            {
            case T_BOOL:
                return ORREDUCTION;
            default:
                return UNKNOWREDUCTION;
            }
        case EQV_OP:
            if (topOper != father)
                return UNKNOWREDUCTION;
            switch (sy->type()->variant())
            {
            case T_BOOL:
                return EQVREDUCTION;
            default:
                return UNKNOWREDUCTION;
            }
        case NEQV_OP:
            if (topOper != father)
                return UNKNOWREDUCTION;
            switch (sy->type()->variant())
            {
            case T_BOOL:
                return NEQVREDUCTION;
            default:
                return UNKNOWREDUCTION;
            }
        case FUNC_CALL://TODO with max and min
            if (topOper != father)
                return UNKNOWREDUCTION;
            if (father->symbol() && 
                    (strcmp(father->symbol()->identifier(), "max") == 0 ||
                     strcmp(father->symbol()->identifier(), "dmax") == 0 ||
                     strcmp(father->symbol()->identifier(), "dmax1") == 0))
            {
                switch (sy->type()->variant())
                {
                case T_INT:
                    return  IMAXREDUCTION;
                case T_COMPLEX:
                case T_FLOAT:
                    return  SMAXREDUCTION;
                case T_DCOMPLEX:
                case T_DOUBLE:
                    return DMAXREDUCTION;
                }
            }
            if (father->symbol() && 
                    (strcmp(father->symbol()->identifier(), "min") == 0 ||
                     strcmp(father->symbol()->identifier(), "dmin") == 0 || 
                     strcmp(father->symbol()->identifier(), "dmin1") == 0))
            {
                switch (sy->type()->variant())
                {
                case T_INT:
                    return  IMINREDUCTION;
                case T_COMPLEX:
                case T_FLOAT:
                    return  SMINREDUCTION;
                case T_DCOMPLEX:
                case T_DOUBLE:
                    return DMINREDUCTION;
                }
            }
            return UNKNOWREDUCTION;
        }
    }
    return UNKNOWREDUCTION;
}

//
// check if a scalar variable is a reduction variable
// does not compute yet the kind of the reduction
//

static bool setNewKind(int &reductionKind, const int newKind)
{
    bool needBreak = false;

    if (reductionKind == UNKNOWREDUCTION)
        reductionKind = newKind;
    else if (reductionKind != newKind)
    {
        reductionKind = UNKNOWREDUCTION;
        needBreak = true;
    }
    return needBreak;
}

int isItReduction(int firstref, PT_ACCESSARRAY access1, Set *arrayset, SgStatement *loop)
{
    PT_ACCESSARRAY  access2, lastaccess, firstaccess;
    int i, j;
    if (!loop)
    {
        Message("No loop given in isItReduction", 0);
        return UNKNOWREDUCTION;
    }
    if (!access1)
    {
        Message("internal error in isItReduction", 0);
        return UNKNOWREDUCTION;
    }
    // check how many accesses to the variable;

    std::map<SgStatement*, set<PT_ACCESSARRAY>> accessesForStat;
        
    firstaccess = (PT_ACCESSARRAY)arrayset->getElement(firstref);
    accessesForStat[firstaccess->stmt].insert(firstaccess);

    lastaccess = NULL;
    for (j = firstref + 1; (j < arrayset->size()); j++)
    {
        access2 = (PT_ACCESSARRAY)arrayset->getElement(j);
        if (access2 && access2->scalar &&
            loop->isIncludedInStmt(*(access2->stmt)) &&
            (access1->var->symbol() == access2->var->symbol()))
        {
            lastaccess = access2;
            accessesForStat[lastaccess->stmt].insert(lastaccess);
        }
    }

    //united to controlParent (IF, LOGIF_NODE, ...)
    bool changes = true;
    while (changes)
    {
        changes = false;

        bool done = false;
        for (auto ACC = accessesForStat.begin(); ACC != accessesForStat.end(); ACC++)
        {
            for (auto ACC1 = accessesForStat.begin(); ACC1 != accessesForStat.end(); ACC1++)
            {
                if (ACC1->first == ACC->first)
                    continue;

                if (ACC1->first->variant() == ASSIGN_STAT)
                {
                    if (ACC1->first->controlParent() == ACC->first)
                    {
                        ACC->second.insert(ACC1->second.begin(), ACC1->second.end());
                        accessesForStat.erase(ACC1);
                        done = true;
                        changes = true;
                        break;
                    }
                }

                if (ACC1->first->variant() == ASSIGN_STAT)
                {
                    if (ACC1->first->controlParent() == ACC1->first)
                    {
                        ACC1->second.insert(ACC->second.begin(), ACC->second.end());
                        accessesForStat.erase(ACC);
                        done = true;
                        changes = true;
                        break;
                    }
                }
            }

            if (done)
                break;
        }
    }

    std::map<SgStatement*, set<PT_ACCESSARRAY>> newAccessesForStat;
    for (auto &ACC : accessesForStat)
    {
        auto &elem = ACC.second;
        bool isIfStat = ACC.first->variant() == IF_NODE || ACC.first->variant() == LOGIF_NODE;

        // only read under IF stat was accepted
        if (elem.size() == 1)
        {           
            firstaccess = *elem.begin();
            if (firstaccess->rw == 0 && isIfStat)
                continue;
            else
                return UNKNOWREDUCTION;
        } // more then 2 accesses in one statement
        else if (elem.size() != 2)
            return UNKNOWREDUCTION;
        // must be an assign statement or IF/LOGIF_NODE;
        if (ACC.first->variant() != ASSIGN_STAT && !isIfStat)
            return UNKNOWREDUCTION;

        firstaccess = *elem.begin();
        lastaccess = *elem.rbegin();
        // one of them must be read and another one - write
        if (firstaccess->rw && lastaccess->rw)
            return UNKNOWREDUCTION;

        newAccessesForStat[ACC.first] = ACC.second;
    }
    accessesForStat = newAccessesForStat;

    int reductionKind = UNKNOWREDUCTION;
    for (auto &ACC : accessesForStat)
    {
        auto &elem = ACC.second;
        firstaccess = *elem.begin();
        lastaccess = *elem.rbegin();

        if (ACC.first->variant() == ASSIGN_STAT)
        {
            int kind;
            //look for the reduction operations;
            if (firstaccess->rw)
                kind = lookForOperationKind(lastaccess);
            else
                kind = lookForOperationKind(firstaccess);

            if (setNewKind(reductionKind, kind))
                break;
        } // IF_NODE, LOGIF_NODE
        else
        {
            if (firstaccess->stmt->variant() == ASSIGN_STAT)
                std::swap(firstaccess, lastaccess);

            SgExpression *cond = firstaccess->stmt->expr(0);
            if (cond->lhs() == NULL || cond->rhs() == NULL)
                return UNKNOWREDUCTION;

            switch (cond->variant())
            {
            case LT_OP:
            case LE_OP:
                if (cond->lhs()->variant() == VAR_REF && cond->lhs()->symbol() == firstaccess->var->symbol())
                {
                    if (setNewKind(reductionKind, IMAXREDUCTION))
                        return reductionKind;
                }
                else if (cond->rhs()->variant() == VAR_REF && cond->rhs()->symbol() == firstaccess->var->symbol())
                {
                    if (setNewKind(reductionKind, IMINREDUCTION))
                        return reductionKind;
                }
                else
                    return UNKNOWREDUCTION;
                break;
            case GT_OP:
            case GE_OP:
                if (cond->lhs()->variant() == VAR_REF && cond->lhs()->symbol() == firstaccess->var->symbol())
                {
                    if (setNewKind(reductionKind, IMINREDUCTION))
                        return reductionKind;
                }
                else if (cond->rhs()->variant() == VAR_REF && cond->rhs()->symbol() == firstaccess->var->symbol())
                {
                    if (setNewKind(reductionKind, IMAXREDUCTION))
                        return reductionKind;
                }
                else
                    return UNKNOWREDUCTION;
                break;
            default:
                return UNKNOWREDUCTION;
            }
        }
    }
    return reductionKind;
}

//
// main function for scalar analysis
//


void depGraph::scalarRefAnalysis(SgStatement *loop)
{
    PT_ACCESSARRAY access1, access2;
    int i, j;
    int done, thereisawrite, thewrite;
    if (!arrayRef)
    {
        Message("No reference to treat in scalarRefAnalysis", 0);
        return;
    }
    if (!loop)
    {
        Message("No loop given in scalarRefAnalysis", 0);
        return;
    }
    for (i = 0; i < arrayRef->size(); i++)
    {
        access1 = (PT_ACCESSARRAY)arrayRef->getElement(i);
        if (loop->isIncludedInStmt(*(access1->stmt)))
        {
            if (access1 && access1->scalar)
            {
                // check if already done;
                done = 0;
                for (j = 0; (j < i) && (!done); j++)
                {
                    access2 = (PT_ACCESSARRAY)arrayRef->getElement(j);
                    if (access2 && access2->scalar &&
                        loop->isIncludedInStmt(*(access2->stmt)) &&
                        (access1->var->symbol() == access2->var->symbol()))
                        done = 1;
                }

                if (!done)
                {
                    // start to look at all the access to the variable;
                    thereisawrite = access1->rw;
                    thewrite = i;
                    for (j = i + 1; j < arrayRef->size(); j++)
                    {
                        access2 = (PT_ACCESSARRAY)arrayRef->getElement(j);
                        if (access2 && access2->scalar &&
                            loop->isIncludedInStmt(*(access2->stmt)) &&
                            (access1->var->symbol() == access2->var->symbol()))
                        {
                            if (access2->rw)
                            {
                                thewrite = j;
                                thereisawrite++;
                            }
                        }
                    }
                    // if there is a write try to recognize the patterns;
                    if (thereisawrite)
                    {
                        if (thereisawrite >= 1)
                        {
                            int tp;
                            if (tp = isItReduction(i, access1, arrayRef, loop))
                                addAnEdge(access1->stmt, NULL, access1->var, NULL, REDUCTIONDEP, tp, NULL, NULL, 0);
                            else if (isItPrivate(i, access1, arrayRef, loop))
                                addAnEdge(access1->stmt, NULL, access1->var, NULL, PRIVATEDEP, 0, NULL, NULL, 0);
                            else // scalar dep;
                                addAnEdge(access1->stmt, NULL, access1->var, NULL, SCALARDEP, 0, NULL, NULL, 0);                            
                        }
                        else //drop it;
                            addAnEdge(access1->stmt, NULL, access1->var, NULL, SCALARDEP, 0, NULL, NULL, 0);
                    }
                    // else nothing to do this is safe...;
                }
            }
        }
    }
}



//
// used to redo the scalar analysis of a given innermost loop
//

void depGraph::redoScalarRefAnalysis(SgStatement *loop)
{    
    if (!loop)
        return;

    //first remove the scalar dep already there;
    // then call again the scalar analysis;
    std::vector<int> idxToDel;
    for (int i = 0; i < nodes.size(); ++i)
    {
        depNode *temp = nodes[i];
        if (temp->typedep >= PRIVATEDEP)
        {
            idxToDel.push_back(i);
#ifdef __SPF
            removeFromCollection(nodes[i]);
#endif
            delete nodes[i];
        }
    }

    for (int k = 0; k < idxToDel.size(); ++k)
        nodes.erase(nodes.begin() + idxToDel[k]);
    
    scalarRefAnalysis(loop);
}



depNode *depGraph::isThereAnEdge(SgStatement *stmt1, SgStatement *stmt2)
{
    depNode *temp;
    if (!stmt1 || !stmt2)
        return NULL;

    for (int i = 0; i < nodes.size(); ++i)
    {
        temp = nodes[i];
        if ((temp->stmtin == stmt1) && (temp->stmtout == stmt2))
            return temp;
    }
    return NULL;
}

// valid only for array;


int depGraph::isLoopCarryingTheDep(SgStatement *doloop, depNode *node)
{
    int level;
    int i, j;
    PT_INDUCVAR ind;

    if (!doloop || !node)
        return FALSE;

    if (node->typedep != ARRAYDEP)
        return FALSE;

    if (!doloop->isIncludedInStmt(*(node->stmtin)))
        return FALSE;
    if (!doloop->isIncludedInStmt(*(node->stmtout)))
        return FALSE;

    if (loop == doloop)
    {
        level = 0;
    }
    else
    {
        level = -1;
        for (j = 0; j < induc->size(); j++)
        {
            ind = (PT_INDUCVAR)induc->getElement(j);
            if (ind && (ind->stmt == doloop))
            { // gives the nested level;
                level = ind->level;
                break;
            }
        }
    }
    if (level == -1)
    {
        Message("Did not find the nested level in isLoopCarryingTheDep", loop->lineNumber());
        return FALSE;
    }
    // now we can look at the dependence vector;

    for (i = 1; (i <= node->lenghtvect) && (i <= level); i++)
    {
        if (node->knowndist[i])
        {
            if (node->distance[i] != 0)
            {
                return FALSE;
            }
        }
        else
        {
            if (!(node->distance[i] & DEPZERO))
            {
                return FALSE;
            }
        }
    }

    return TRUE;
}


///////////////////////////////////////
// compute strongly connected component
////////////////////////////////////////

// look at if there is an edge in the dependence graph that link two statements;
// look only array reference for now....;
// not exactly that.......

int depGraph::isThereAnEdgeSCC(SgStatement *stmt1, SgStatement *stmt2, SgStatement *doloop)
{

    int i, j, dir;
    depNode *temp;
    PT_ACCESSARRAY access1, access2;

    if (!stmt1 || !stmt2 || !arrayRef)
        return FALSE;
    if (stmt1->isIncludedInStmt(*(stmt2)))
        return TRUE;
    if (stmt2->isIncludedInStmt(*(stmt1)))
        return TRUE;

    for (int i = 0; i < nodes.size(); ++i)
    {
        temp = nodes[i];
        //need to check the dependence vector;
        // may not be a dependence;
        // is the loop carrying the depenendence?;
        dir = isLoopCarryingTheDep(doloop, temp);
        if (dir)
        {
            if (((temp->stmtin == stmt1) && (temp->stmtout == stmt2)) ||
                (stmt1->isIncludedInStmt(*(temp->stmtin)) && stmt2->isIncludedInStmt(*(temp->stmtout))))
            {
                return TRUE;
            }
        }
    }

    // check now that the two statements are not refering to the same scalar var;
    // if yes there is an edge;
    for (i = 0; i < arrayRef->size(); i++)
    {
        access1 = (PT_ACCESSARRAY)arrayRef->getElement(i);
        if (access1 && access1->scalar &&
            ((access1->stmt == stmt1) || stmt1->isIncludedInStmt(*(access1->stmt))))
        {
            for (j = 0; j < arrayRef->size(); j++)
            {
                access2 = (PT_ACCESSARRAY)arrayRef->getElement(j);
                if (access2 && access2->scalar &&
                    ((access2->stmt == stmt2) || stmt2->isIncludedInStmt(*(access2->stmt))) &&
                    access1->var->symbol() == access2->var->symbol())
                {
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

//
// Routines to compute the Strongly connected component in the graph
//
static int MarkdepthTraversal = 0;

void depGraph::depthTraversal(int stmtid, SgStatement *stmt)
{
    int i, j;
    int serial;

    if (tabtag[stmtid] != 0)
    {
        return;
    }
    tabtag[stmtid] = MarkdepthTraversal;
    serial = MarkdepthTraversal;
    MarkdepthTraversal++;
    for (j = 0; j < nbstmt; j++)
    {
        // there is an edges, so it is a suc
        if (j != stmtid)
        {
            if (isThereAnEdgeSCC(tabstat[stmtid], tabstat[j], stmt))
            {
                depthTraversal(j, stmt);
                if ((tabtag[j] > 0) && (tabtag[j] < tabtag[stmtid]))
                    tabtag[stmtid] = tabtag[j];
            }
        }
    }
}

int depGraph::getHigherMark()
{
    int i;
    int mark = -1, resul = -1;
    for (i = 0; i < nbstmt; i++)
    {
        if (tabtag[i] >= mark)
        {
            mark = tabtag[i];
            resul = i;
        }
    }
    return resul;
}

int depGraph::getZeroMark()
{
    int i;
    for (i = 0; i < nbstmt; i++)
    {
        if (tabtag[i] == 0)
        {
            return i;
        }
    }
    return -1;
}

//
// look for strongly connected components
// assumed to be 
//

int  depGraph::computeSCC(SgStatement *stmtin)
{
    SgStatement       *temp1, *temp2, *last;
    int               i, node, node1;
    int               mark;
    int               first_componante = -1;
    SgStatement        *stmt;
    SgForStmt          *doloop;
    int nest;

    // This algorithm is not working properly... (yet)

    if (!(doloop = isSgForStmt(stmtin)) || !func)
        return FALSE;

    stmt = doloop;
    nest = doloop->isPerfectLoopNest();
    for (i = 1; i < nest; i++)
    {
        stmt = doloop->getNextLoop();
        if (!(doloop = isSgForStmt(stmt)))
        {
            return  FALSE;
        }
    }

    if (tabstat)
    {
#ifdef __SPF
        removeFromCollection(tabstat);
#endif
        delete[] tabstat;
    }
    if (tabtag)
    {
#ifdef __SPF
        removeFromCollection(tabtag);
#endif
        delete[] tabtag;
    }

    // count the number of statement for allocations;
    // nbstmt -1 because of the control end;
    nbstmt = stmt->numberOfChildrenList1() - 1;
    if (nbstmt < 1) // count the control end;
        return  FALSE;
    tabstat = new SgStatement *[nbstmt];
    tabtag = new int[nbstmt];
#ifdef __SPF
    addToCollection(__LINE__, __FILE__, tabstat, 2);
    addToCollection(__LINE__, __FILE__, tabtag, 2);
#endif

    for (i = 0; i < nbstmt; i++)
    {
        tabstat[i] = stmt->childList1(i);
        tabtag[i] = 0;
    }

    MarkdepthTraversal = 1;
    while (-1 != (node = getZeroMark()))
    {
        depthTraversal(node, doloop);
        node1 = getHigherMark();
        if (node1 != -1)
            MarkdepthTraversal = tabtag[node1] + 1;
        for (i = 0; i < nbstmt; i++)
        {
            if (tabtag[i] > 0)
                tabtag[i] = -tabtag[i];
        }
    }
    for (i = 0; i < nbstmt; i++)
    {
        tabtag[i] = -tabtag[i];
    }
    printf("SCC for the loop\n");
    printf("----------------\n");
    for (i = 0; i < nbstmt; i++)
    {
        printf("Statement %d is in SCC %d\n", i, tabtag[i]);
    }
    return TRUE;
}


///////////////////////////////////////////////////////////////////////////////////////
// Function that make the link with the OmegaTest.... Called by the Omega Test 
// function  store_dependence
///////////////////////////////////////////////////////////////////////////////////////

extern int toBeCalledByOmegaTest(int tdep, int kdep, int *dist, int *kdist, int le, int from, int to)
{
    if (!currentDepGraph)
    {
        Message("No current Dep Graph", 0);
        return FALSE;
    }

    if (from == currentVarIn->id())
        currentDepGraph->addAnEdge(currentStmtIn, currentStmtOut, currentVarIn, currentVarOut, tdep, kdep, dist, kdist, le);
    else
        currentDepGraph->addAnEdge(currentStmtOut, currentStmtIn, currentVarOut, currentVarIn, tdep, kdep, dist, kdist, le);
    return TRUE;
}

///////////////////////////////////////////////////////////////////////////////////////
// Compute the data dependence Graph for a loop
// A call to initialize must be done so the data
// flow analysis is done for the function first
///////////////////////////////////////////////////////////////////////////////////////

// f is a function statement; file the file;
void initializeDepAnalysisForFunction(SgFile *file, SgStatement *f, const map<string, FuncInfo*> &allFuncs, vector<Messages> &messagesForFile)
{
    if (!f || !file)
    {
        Message("Cannot run initializeDepAnalysisForFunction; no function provided", 0);
        return;
    }
    // convert the loops to be enddo loops; should help later????
    convertContLoopToEnddo(f);
    initDefUseTable(f, allFuncs, messagesForFile);
    //  Not Needed Yet;
    //iterativeForwardFlowAnalysis(file,f,makeGenSet,makeKillSet,symbRefEqual,NULL,myPrint);

}

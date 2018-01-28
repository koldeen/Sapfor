#include "leak_detector.h"

#include <cstdio>
#include <cstring>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <locale>
#include <set>
#include <map>
#include <assert.h>

#include "directive_parser.h"
#include "SgUtils.h"
#include "LoopAnalyzer/loop_analyzer.h"
#include "AstWrapper.h"

using std::string;
using std::vector;
using std::set;
using std::tuple;
using std::map;
using std::make_pair;
using std::pair;

bool isSPF_NoInline(SgStatement *st)
{
    //__spf_print(1, "check attributes for functons in line %d\n", st->lineNumber());
    for (int z = 0; z < st->numberOfAttributes(); ++z)
    {
        //if (z == 0)
        //    __spf_print(1, "attribute found with num %d\n", st->numberOfAttributes());
        SgAttribute *attr = st->getAttribute(z);
        int type = st->attributeType(z);
        if (type == SPF_TRANSFORM_DIR)
        {
            SgStatement *data = (SgStatement *)(attr->getAttributeData());
            if (data)
            {
                SgExpression *exprList = data->expr(0);
                while (exprList)
                {
                    if (exprList->lhs()->variant() == SPF_NOINLINE_OP)
                    {
                        //__spf_print(1, "found no inline\n");
                        return true;
                    }
                    exprList = exprList->rhs();
                }
            }
        }
    }
    return false;
}

static map<SgSymbol*, Symbol*> dictCreated;

static inline string getData(SgExpression *symb, string*) { return OriginalSymbol(symb->symbol())->identifier(); }
static inline SgSymbol* getData(SgExpression *symb, SgSymbol**) { return OriginalSymbol(symb->symbol()); }

static inline Symbol* getData(SgExpression *symb, Symbol**)
{
    SgSymbol *symbOr = OriginalSymbol(symb->symbol());
    auto it = dictCreated.find(symbOr);
    if (it == dictCreated.end())
        it = dictCreated.insert(it, make_pair(symbOr, new Symbol(symbOr)));
    return it->second;
}

template<typename fillType>
void fillPrivatesFromComment(SgStatement *st, set<fillType> &privates)
{
    if (st)
    {
        if (st->variant() == SPF_ANALYSIS_DIR)
        {
            SgExpression *exprList = st->expr(0);
            while (exprList)
            {
                if (exprList->lhs()->variant() == ACC_PRIVATE_OP)
                {                    
                    SgExpression *list = exprList->lhs()->lhs();
                    while (list)
                    {
                        fillType *dummy = NULL;
                        privates.insert(getData(list->lhs(), dummy));
                        list = list->rhs();
                    }
                    break;
                }
                exprList = exprList->rhs();
            }
        }
    }
}

template void fillPrivatesFromComment(SgStatement *st, set<string> &privates);
template void fillPrivatesFromComment(SgStatement *st, set<SgSymbol*> &privates);
template void fillPrivatesFromComment(SgStatement *st, set<Symbol*> &privates);

//for simple reduction
template<typename fillType>
void fillReductionsFromComment(SgStatement *st, map<string, set<fillType>> &reduction)
{    
    if (st)
    {
        if (st->variant() == SPF_ANALYSIS_DIR)
        {
            SgExpression *exprList = st->expr(0);
            while (exprList)
            {
                if (exprList->lhs()->variant() == REDUCTION_OP)
                {
                    SgExpression *list = exprList->lhs()->lhs();
                    while (list)
                    {
                        SgExpression *currRed = list->lhs();
                        
                        fillType redSymb, *dummy = NULL;
                        //minloc/maxloc
                        if (currRed->rhs()->variant() == EXPR_LIST)
                            redSymb = getData(currRed->rhs()->lhs(), dummy);
                        else
                            redSymb = getData(currRed->rhs(), dummy);
                        string oper = ((SgKeywordValExp *)(currRed->lhs()))->value();
                        
                        auto it = reduction.find(oper);                        
                        if (oper == "minloc" || oper == "maxloc")
                        {
                            //skip
                            //__spf_print(1, "  MAXLOC/MINLOC operation from SPF not supported yet, ignored\n");                            
                        }
                        else
                        {
                            if (it == reduction.end())
                                it = reduction.insert(it, make_pair(oper, set<fillType>()));
                            it->second.insert(redSymb);
                        }
                        list = list->rhs();
                    }
                }
                exprList = exprList->rhs();
            }
        }
    }
}

template void fillReductionsFromComment(SgStatement *st, map<string, set<string>> &reduction);
template void fillReductionsFromComment(SgStatement *st, map<string, set<SgSymbol*>> &reduction);

//for mini/max loc reduction
template<typename fillType>
void fillReductionsFromComment(SgStatement *st, map<string, set<tuple<fillType, fillType, int>>> &reduction)
{
    if (st)
    {
        if (st->variant() == SPF_ANALYSIS_DIR)
        {
            SgExpression *exprList = st->expr(0);
            while (exprList)
            {
                if (exprList->lhs()->variant() == REDUCTION_OP)
                {
                    SgExpression *list = exprList->lhs()->lhs();
                    while (list)
                    {
                        SgExpression *currRed = list->lhs();

                        fillType redSymb, *dummy = NULL;
                        //minloc/maxloc
                        if (currRed->rhs()->variant() == EXPR_LIST)
                            redSymb = getData(currRed->rhs()->lhs(), dummy);
                        else
                            redSymb = getData(currRed->rhs(), dummy);
                        string oper = ((SgKeywordValExp *)(currRed->lhs()))->value();

                        auto it = reduction.find(oper);
                        if (oper == "minloc" || oper == "maxloc")
                        {
                            fillType arraySymb = getData(currRed->rhs()->rhs()->lhs(), dummy);
                            int dim = currRed->rhs()->rhs()->rhs()->lhs()->valueInteger();

                            if (it == reduction.end())
                                it = reduction.insert(it, make_pair(oper, set<tuple<fillType, fillType, int>>()));
                            it->second.insert(std::make_tuple(redSymb, arraySymb, dim));
                        }
                        else
                        {
                            //skip
                        }
                        list = list->rhs();
                    }
                }
                exprList = exprList->rhs();
            }
        }
    }
}

template void fillReductionsFromComment(SgStatement *st, map<string, set<tuple<string, string, int>>> &reduction);
template void fillReductionsFromComment(SgStatement *st, map<string, set<tuple<SgSymbol*, SgSymbol*, int>>> &reduction);

template<typename fillType>
void fillShadowAcrossFromComment(const int type, SgStatement *st, vector<pair<pair<fillType, string>, vector<pair<int, int>>>> &data)
{
    if (st)
    {
        if (st->variant() == SPF_PARALLEL_DIR)
        {
            SgExpression *exprList = st->expr(0);
            while (exprList)
            {
                if (exprList->lhs()->variant() == type)
                {
                    SgExpression *list = exprList->lhs()->lhs();
                    while (list)
                    {
                        SgSymbol *symb = OriginalSymbol(list->lhs()->symbol());
                        fillType arrayName, *dummy = NULL;
                        arrayName = getData(list->lhs(), dummy);
                        bool cond = false;

                        pair<pair<fillType, string>, vector<pair<int, int>>> *toAdd;
                        for (int i = 0; i < data.size(); ++i)
                        {
                            if (data[i].first.first == arrayName)
                            {
                                toAdd = &data[i];
                                cond = true;
                                break;
                            }
                        }

                        if (!cond)
                        {
                            auto localIt = tableOfUniqNames.find(make_pair(symb->identifier(), declaratedInStmt(symb)->lineNumber()));
                            if (localIt == tableOfUniqNames.end())
                                printInternalError(convertFileName(__FILE__).c_str(), __LINE__);
                                                        
                            data.push_back(make_pair(make_pair(arrayName, getShortName(localIt->second)), vector<pair<int, int>>()));
                            toAdd = &data.back();
                        }

                        SgExpression *listEx = list->lhs()->lhs();
                        int idx = 0;
                        while (listEx)
                        {           
                            SgExpression *width = listEx->lhs();
                            const int left = width->lhs()->valueInteger();
                            const int right = width->rhs()->valueInteger();
                            if (toAdd->second.size() <= idx)
                                toAdd->second.push_back(make_pair(left, right));
                            else
                            {
                                toAdd->second[idx].first = std::max(toAdd->second[idx].first, left);
                                toAdd->second[idx].second = std::max(toAdd->second[idx].second, right);
                            }
                            idx++;
                            listEx = listEx->rhs();
                        }

                        list = list->rhs();
                    }
                }
                exprList = exprList->rhs();
            }
        }
    }
}

template void fillShadowAcrossFromComment(const int type, SgStatement *st, vector<pair<pair<string, string>, vector<pair<int, int>>>> &data);
template void fillShadowAcrossFromComment(const int type, SgStatement *st, vector<pair<pair<SgSymbol*, string>, vector<pair<int, int>>>> &data);

template<typename fillType>
void fillRemoteFromComment(SgStatement *st, map<pair<fillType, string>, Expression*> &remote, bool isFull)
{
    if (st)
    {
        if (st->variant() == SPF_PARALLEL_DIR)
        {
            SgExpression *exprList = st->expr(0);
            while (exprList)
            {
                if (exprList->lhs()->variant() == REMOTE_ACCESS_OP)
                {
                    //recExpressionPrint(exprList);
                    SgExpression *list = exprList->lhs()->lhs();
                    while (list)
                    {
                        fillType arrayName, *dummy = NULL;
                        arrayName = getData(list->lhs(), dummy);

                        const char *str = list->lhs()->lhs()->unparse();
                        if (isFull)
                            remote.insert(make_pair(make_pair(arrayName, string(str)), new Expression(list->lhs())));
                        else
                            remote.insert(make_pair(make_pair(arrayName, string(str)), new Expression(list->lhs()->lhs())));
                        list = list->rhs();
                    }
                }
                exprList = exprList->rhs();
            }
        }
    }
}

template void fillRemoteFromComment(SgStatement *st, map<pair<string, string>, Expression*> &remote, bool isFull);
template void fillRemoteFromComment(SgStatement *st, map<pair<SgSymbol*, string>, Expression*> &remote, bool isFull);

void fillAcrossInfoFromDirectives(const LoopGraph *loopInfo, vector<pair<pair<string, string>, vector<pair<int, int>>>> &acrossInfo)
{
    SgForStmt *currentLoop = (SgForStmt*)loopInfo->loop;
    for (int i = 0; i < currentLoop->numberOfAttributes(); ++i)
    {
        SgAttribute *attr = currentLoop->getAttribute(i);

        int type = currentLoop->attributeType(i);
        if (type == SPF_ANALYSIS_DIR || type == SPF_PARALLEL_DIR || type == SPF_TRANSFORM_DIR)
        {
            SgStatement *data = (SgStatement *)(attr->getAttributeData());
            if (data)
                fillShadowAcrossFromComment(ACROSS_OP, data, acrossInfo);
        }
    }
}

void fillInfoFromDirectives(const LoopGraph *loopInfo, ParallelDirective *directive)
{
    SgForStmt *currentLoop = (SgForStmt*)loopInfo->loop;

    for (int i = 0; i < currentLoop->numberOfAttributes(); ++i)
    {
        SgAttribute *attr = currentLoop->getAttribute(i);
        int type = currentLoop->attributeType(i);

        if (type == SPF_ANALYSIS_DIR || type == SPF_PARALLEL_DIR || type == SPF_TRANSFORM_DIR)
        {
            SgStatement *data = (SgStatement *)(attr->getAttributeData());
            if (data)
            {
                fillPrivatesFromComment(data, directive->privates);
                fillReductionsFromComment(data, directive->reduction);
                fillReductionsFromComment(data, directive->reductionLoc);
                fillShadowAcrossFromComment(SHADOW_OP, data, directive->shadowRenew);
                fillShadowAcrossFromComment(ACROSS_OP, data, directive->across);
                fillRemoteFromComment(data, directive->remoteAccess);
            }
        }
    }
}
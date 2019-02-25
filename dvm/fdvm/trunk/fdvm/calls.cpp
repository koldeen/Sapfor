/*********************************************************************/
/*  Fortran DVM+OpenMP+ACC                                           */
/*                                                                   */
/*                   Call Site Processing                            */
/*********************************************************************/
#include "leak_detector.h"

#include "dvm.h"
#include "acc_data.h"
#include "calls.h"

#ifdef __SPF
SgFile *current_file;    //current file
int current_file_id;     //number of current file 
extern std::pair<std::string, int> currProcessing;
#endif

using std::map;
using std::string;
using std::vector;
using std::pair;

//---------------------------------------------------------------------------------

#define NEW  1

graph_node *cur_node;
graph_node *node_list;
int deb_reg = 0;
int do_dummy = 0;
int do_stmtfn = 0;
int gcount = 0;
//-----------------------------------------------------------------------------------------
graph_node *GraphNode(SgSymbol *s, SgStatement *header_st, int flag_new);
graph_node *NodeForSymbInGraph(SgSymbol *s, SgStatement *stheader);
graph_node *NewGraphNode(SgSymbol *s, SgStatement *header_st);
edge *CreateOutcomingEdge(graph_node *gnode, int inlined);
edge *CreateIncomingEdge(graph_node *gnode, int inlined);
edge *NewEdge(graph_node *from, graph_node *to, int inlined);
int isDummyArgument(SgSymbol *s);
int isHeaderStmtSymbol(SgSymbol *s);
int isStatementFunction(SgSymbol *s);
int isHeaderNode(graph_node *gnode);
int isDeadNode(graph_node *gnode);
int isNoBodyNode(graph_node *gnode);
graph_node_list  *addToNodeList(graph_node_list *pnode, graph_node *gnode);
graph_node_list  *delFromNodeList(graph_node_list *pnode, graph_node *gnode);
graph_node_list  *isInNodeList(graph_node_list *pnode, graph_node *gnode);
void PrintGraphNode(graph_node *gnode);
void PrintGraphNodeWithAllEdges(graph_node *gnode);
void PrintWholeGraph();
void PrintWholeGraph_kind_2();
void BuildingHeaderNodeList();
void RemovingDeadSubprograms();
void NoBodySubprograms();
void DeleteIncomingEdgeFrom(graph_node *gnode, graph_node *from);
void DeleteOutcomingEdgeTo(graph_node *gnode, graph_node *gto);
void ScanSymbolTable(SgFile *f);
void ScanTypeTable(SgFile *f);
void printSymb(SgSymbol *s);
void printType(SgType *t);
//-------------------------------------------------------------------------------------
extern SgExpression *private_list;
extern map <string, vector<vector<SgType*> > > interfaceProcedures;

void MarkAsUserProcedure(SgSymbol *s)
{
    SYMB_ATTR(s->thesymb) = SYMB_ATTR(s->thesymb) | USER_PROCEDURE_BIT;
}

#ifndef __SPF
SgSymbol * GetProcedureHeaderSymbol(SgSymbol *s)
{
    if (!ATTR_NODE(s))
        return(NULL);
    return(GRAPHNODE(s)->symb);
}

int IsPureProcedure(SgSymbol *s)
{
    SgSymbol *shedr;
    shedr = GetProcedureHeaderSymbol(s);
    if (shedr)
        return(shedr->attributes() & PURE_BIT);
    else
        return 0;
}

int IsElementalProcedure(SgSymbol *s)
{
    SgSymbol *shedr;
    shedr = GetProcedureHeaderSymbol(s);
    if (shedr)
        return(shedr->attributes() & ELEMENTAL_BIT);
    else
        return 0;
}

int IsRecursiveProcedure(SgSymbol *s)
{
    SgSymbol *shedr;
    shedr = GetProcedureHeaderSymbol(s);
    if (shedr)
        return(shedr->attributes() & RECURSIVE_BIT);
    else
        return 0;
}

int isUserFunction(SgSymbol *s)
{
    return(s->attributes() & USER_PROCEDURE_BIT);
}

int IsNoBodyProcedure(SgSymbol *s)
{ //SgSymbol *shedr;
    if (!ATTR_NODE(s))
        return 0;
    return(GRAPHNODE(s)->st_header == NULL);
}


void MarkAsCalled(SgSymbol *s)
{
    graph_node *gnode;
    edge *gedge;
    if (!ATTR_NODE(s))
        return;
    gnode = GRAPHNODE(s);
    if (gnode->st_header)   //  for nobody procedure (for intrinsic functions and ...) gnode->st_header== NULL
        gnode->count++;
    for (gedge = gnode->to_called; gedge; gedge = gedge->next)
        MarkAsCalled(gedge->to->symb);
    return;

}

void MakeFunctionCopy(SgSymbol *s)
{
    SgSymbol *s_header;
    graph_node *gnode;

    if (!ATTR_NODE(s))
        return;
    GRAPHNODE(s)->count++;


    gnode = GRAPHNODE(s);
    s_header = gnode->symb;
    gnode->count++;

    /*
      if(!gnode->st_copy)
      {   printf("make copy of %s\n",s_header->identifier());
      gnode->st_copy = s_header->copySubprogram(*mod_gpu->lexNext()).body();
      }
      */
    //s_copy = &s_header->copySubprogram(*mod_gpu);  *mod_gpu->lexNext()
    //gnode->st_copy = s_header->copySubprogram(*mod_gpu).body(); 
    //gnode->st_copy->unparsestdout();
    //HeaderStatement(&s_header->copySubprogram(*mod_gpu)); //(s_copy); //(s_header->copySubprogram(*mod_gpu)); 
}

SgStatement *HeaderStatement(SgSymbol *s)
{
    return(s->body());
}


void InsertCalledProcedureCopies()
{
    graph_node *ndl;
    int n = 0;
    if (!mod_gpu)
        return;

    SgStatement *after = mod_gpu->lexNext();
    SgStatement *first_kernel_const = after->lexNext();

    for (ndl = node_list; ndl; ndl = ndl->next)
    if (ndl->count)
    {
        if (ndl->st_header)
        {
            ndl->st_copy = InsertProcedureCopy(ndl->st_header, ndl->st_header->symbol(), after); //C_Cuda ? mod_gpu : mod_gpu->lexNext());
            n++;
        }
        ndl->count = 0;
        //ndl->st_copy = NULL;
    }

    if (options.isOn(C_CUDA) && mod_gpu->lexNext()->variant() == COMMENT_STAT)
        mod_gpu->lexNext()->extractStmt(); //extracting empty statement (COMMENT_STAT) 

    if (options.isOn(RTC) && options.isOn(C_CUDA) && n != 0)
        ACC_RTC_AddFunctionsToKernelConsts(first_kernel_const);

}

SgSymbol* getReturnSymbol(SgStatement *st_header, SgSymbol *s)
{
    if (st_header->expr(0) == NULL)
        return s;
    else
        return st_header->expr(0)->symbol();    
}

void replaceAttribute(SgStatement *header)
{
        SgExpression *e = new SgExpression(ACC_ATTRIBUTES_OP, new SgExpression(ACC_DEVICE_OP), NULL, NULL);
        header->setExpression(2, *e);
}

void ReplaceInterfaceBlocks(SgStatement *header)
{
    SgStatement *last = header->lastNodeOfStmt();
    SgStatement *stmt;
    for (stmt=header->lexNext(); stmt && stmt!=last; stmt=stmt->lexNext())
    {   
        if(isSgExecutableStatement(stmt))
            return;
        if(stmt->variant() == INTERFACE_STMT || stmt->variant() == INTERFACE_ASSIGNMENT || stmt->variant() == INTERFACE_OPERATOR)
	{   
            SgStatement *st_end = stmt->lastNodeOfStmt(); // END INTERFACE
            stmt = stmt->lexNext();
            while(stmt!=st_end)
            {
               if(stmt->variant() == FUNC_HEDR || stmt->variant() == PROC_HEDR )
               {
                   replaceAttribute(stmt);
                   stmt = stmt->lastNodeOfStmt()->lexNext();
               }
               else
                   stmt = stmt->lexNext();
            }                                    
        }           
    } 
}

int HasDerivedTypeVariables(SgStatement *header)
{
    SgSymbol *s;
    SgSymbol *s_last = LastSymbolOfFunction(header);
    for (s = header->symbol()->next(); s != s_last->next(); s = s->next())
    {                   
        if( s->type() && s->type()->variant()==T_DERIVED_TYPE)     
        {  // !!! not implemented
           err_p("Derived type variables", header->symbol()->identifier(), 999);
           return 1;
        }
    }
    return 0;
}

SgStatement *InsertProcedureCopy(SgStatement *st_header, SgSymbol *sproc, SgStatement *after)
{
    //insert copy of procedure after statement 'after'
    SgStatement *new_header, *end_st;
    
    SgSymbol *new_sproc = &sproc->copySubprogram(*after);
    new_header = after->lexNext(); // new procedure header  //new_sproc->body()
    SYMB_SCOPE(new_sproc->thesymb) = mod_gpu->thebif;
    new_header->setControlParent(mod_gpu);

    if (options.isOn(C_CUDA))
    {
        int flagHasDerivedTypeVariables = HasDerivedTypeVariables(new_header); 

        SgFunctionRefExp *fe = new SgFunctionRefExp(*new_sproc);
        new_header->setSymbol(*new_sproc);
        new_header->setExpression(0, *fe);
        fe->setSymbol(*new_sproc);
        SgSymbol *returnSymbol = getReturnSymbol(new_header, new_sproc);
        if (new_sproc->variant() == PROCEDURE_NAME)
            new_sproc->setType(C_VoidType());
        else                     // FUNCTION_NAME
        {
            //new_sproc->setType(C_Type(new_sproc->type()));
            new_sproc->setType(C_Type(returnSymbol->type()));
        }
        fe->setType(new_sproc->type());
        BIF_LL3(new_header->thebif) = NULL;
        new_header->addDeclSpec(BIT_CUDA_DEVICE);
        //new_header->addDeclSpec(BIT_STATIC); 
        end_st = new_header->lastNodeOfStmt();
        ConvertArrayReferences(new_header->lexNext(), end_st);  //!!!! 
        fe->setLhs(FunctionDummyList(new_sproc));
        private_list = NULL;

        ExtractDeclarationStatements(new_header);
        SgSymbol *s_last = LastSymbolOfFunction(new_header);
        if (new_sproc->variant() == FUNCTION_NAME)
        {
            SgSymbol *sfun = &new_sproc->copy();
            fe->setSymbol(sfun);
            SYMB_IDENT(new_sproc->thesymb) = FunctionResultIdentifier(new_sproc);

            InsertReturnBeforeEnd(new_header, end_st);
        }

        swapDimentionsInprivateList();
        std::vector < std::stack < SgStatement*> > zero = std::vector < std::stack < SgStatement*> >(0);
        cur_func = after;
        Translate_Fortran_To_C(new_header, end_st, zero, 0);   //TranslateProcedure_Fortran_To_C(after->lexNext());
        if (new_sproc->variant() == FUNCTION_NAME)
        {
            new_header->insertStmtAfter(*Declaration_Statement(new_sproc), *new_header);
            ChangeReturnStmts(new_header, end_st, returnSymbol);
        }
        else
        {
            //SYMB_CODE(new_sproc->thesymb) = FUNCTION_NAME;
            new_header->setVariant(FUNC_HEDR);
        }
        if(!flagHasDerivedTypeVariables) //!!! derived data type is not supported          
            MakeFunctionDeclarations(new_header, s_last);
        
        newVars.clear();
        private_list = NULL;
        // generate prototype of function and insert it before 'after'
        if (options.isOn(RTC) == false)
            doPrototype(new_header, mod_gpu);

    }
    else
    {
        replaceAttribute(new_header);
        new_header->addComment("\n");  // add comment (empty line) to new procedure header
        ReplaceInterfaceBlocks(new_header);
    }

    return(new_header);
}

SgStatement *FunctionPrototype(SgSymbol *sf)
{
    SgExpression *fref = new SgFunctionRefExp(*sf);
    fref->setSymbol(*sf);
    fref->setType(*sf->type());
    SgStatement *st = new SgStatement(VAR_DECL);
    st->setExpression(0, *new SgExprListExp(*fref));

    return (st);
}


void doPrototype(SgStatement *func_hedr, SgStatement *block_header)
{
    SgSymbol *sf = func_hedr->expr(0)->symbol();
    SgStatement *st = FunctionPrototype(sf);
    if (func_hedr->expr(0)->lhs())
        st->expr(0)->lhs()->setLhs(func_hedr->expr(0)->lhs()->copy());
    st->addDeclSpec(BIT_CUDA_DEVICE);
    st->addDeclSpec(BIT_STATIC);

    block_header->insertStmtAfter(*st, *block_header);        //before->insertStmtAfter(*st,*before->controlParent());
}

SgExpression *FunctionDummyList(SgSymbol *s)
{
    SgExpression *arg_list = NULL, *ae = NULL;

    int n = ((SgFunctionSymb *)s)->numberOfParameters();
    
    //insert at 0-th position inf-argument
    //check for optional arguments, if some argunemt exist with optional then add argument-mask
    
    //int useOption = false;
    //for (i = 0; i < n; i++)
    //{
    //    useOption |= ((SgFunctionSymb *)s)->parameter(i)->attributes() & OPTIONAL_BIT;
    //}
    //if(useOption)
    //{
    //    std::string nameForArgsInfo = "arg_info";   // name for new arguments 
    //    SgSymbol* argInfo = new SgSymbol(VARIABLE_NAME,nameForArgsInfo.c_str());
    //    argInfo->setType(C_LongType());
    //    ae = new SgVarRefExp(argInfo);
    //    ae = new SgExprListExp(*ae);
    //    arg_list = AddListToList(arg_list, ae);
    //}

    for (int i = 0; i < n; i++)
    {
        SgSymbol *sarg = ((SgFunctionSymb *)s)->parameter(i);

        if (!isSgArrayType(sarg->type()))
        {
            sarg->setType(C_Type(sarg->type()));
            if (sarg->attributes() & OPTIONAL_BIT)
            {
                sarg->setType(new SgDerivedTemplateType(new SgTypeRefExp(*sarg->type()), new SgSymbol(TYPE_NAME, "optArg")));
            }
            ae = new SgVarRefExp(sarg);
            //ae->setType(C_ReferenceType(sarg->type()));
            if (sarg->attributes() & IN_BIT)
                ae = new SgExprListExp(*ae);
            else
                ae = new SgExprListExp(SgAddrOp(*ae));
            arg_list = AddListToList(arg_list, ae);

        }
        else
        {
            int needChanged = true;
            SgArrayType* arrT = (SgArrayType*)sarg->type();
            int dims = arrT->dimension();
            SgExpression *dimList = arrT->getDimList();
            
            while (dimList)
            {
                if (dimList->lhs()->variant() != DDOT)
                {
                    needChanged = false;
                    break;
                }
                else if (dimList->lhs()->rhs())
                {
                    needChanged = false;
                    break;
                }
                dimList = dimList->rhs();
            }

            SgType *t = C_PointerType(C_Type(sarg->type()->baseType()));
            sarg->setType(t);
            ae = new SgVarRefExp(sarg);
            ae->setType(t);
            if (needChanged)
            {
                sarg->setType(new SgDerivedTemplateType(new SgTypeRefExp(*t), new SgSymbol(TYPE_NAME, "s_array")));
                ae = new SgVarRefExp(sarg);
                ae = new SgExprListExp(*ae);
                arg_list = AddListToList(arg_list, ae);
                continue;
            }

            //ae->setType(C_ReferenceType(sarg->type())); 
            ae = new SgExprListExp(*new SgPointerDerefExp(*ae));
            arg_list = AddListToList(arg_list, ae);
            //SgSymbol *arr_info = new SgSymbol(VAR_REF, ("inf_" + std::string(sarg->identifier())).c_str());
            //arr_info->setType(C_PointerType(C_Type(new SgType(T_INT))));
            //ae = new SgVarRefExp(arr_info);
            //ae = new SgExprListExp(*new SgPointerDerefExp(*ae));
            //arg_list = AddListToList(arg_list, ae);
        }
    }
    return (arg_list);
}

char *FunctionResultIdentifier(SgSymbol *sfun)
{
    char *name;
    name = (char *)malloc((unsigned)(strlen(sfun->identifier()) + 4 + 1));
    sprintf(name, "%s_res", sfun->identifier());
    return(NameCheck(name, sfun));
}

SgSymbol *isSameNameInProcedure(char *name, SgSymbol *sfun)
{
    SgSymbol *s;
    for (s = sfun->next(); s; s = s->next())
    if (!strcmp(s->identifier(), name))
        return(s);
    return(NULL);
}

char *NameCheck(char *name, SgSymbol *sfun)
{
    SgSymbol *s;
    while ((s = isSameNameInProcedure(name, sfun)) != 0)
    {
        name = (char *)malloc((unsigned)(strlen(name) + 2));
        sprintf(name, "%s_", s->identifier());
    }
    return(name);
}

void InsertReturnBeforeEnd(SgStatement *new_header, SgStatement *end_st)
{
    SgStatement *prev = end_st->lexPrev();
    if (prev->variant() == RETURN_STAT)
        return;
    prev->insertStmtAfter(*new SgStatement(RETURN_STAT), *new_header);
}

void ChangeReturnStmts(SgStatement *new_header, SgStatement *end_st, SgSymbol *sres)
{
    SgStatement *stmt;
    for (stmt = new_header->lexNext(); stmt != end_st; stmt = stmt->lexNext())
    if (stmt->variant() == RETURN_STAT)
        stmt->setExpression(0, *new SgVarRefExp(sres));

}

template<typename callStatType>
static void createIntefacePrototype(callStatType *funcDecl)
{
    string funcName = funcDecl->name().identifier();
    const int parNum = funcDecl->numberOfParameters();
    vector<SgType*> prototype(parNum);
    for (int i = 0; i < parNum; ++i)
    {
        SgSymbol *par = funcDecl->parameter(i);
        SgType *type = par->type();
        prototype[i] = type;
    }
    map <string, vector<vector<SgType*> > >::iterator it = interfaceProcedures.find(funcName);
    if (it == interfaceProcedures.end())
    {
        vector<vector<SgType*> > prototypes = vector<vector<SgType*> >();
        prototypes.push_back(prototype);

        interfaceProcedures.insert(it, make_pair(funcName, prototypes));
    }
    else
        it->second.push_back(prototype);
}

bool CreateIntefacePrototype(SgStatement *header)
{
    bool retVal = true;
    if (header->variant() == FUNC_HEDR)
    {        
        SgFuncHedrStmt *funcDecl = isSgFuncHedrStmt(header);        
        if (funcDecl)
            createIntefacePrototype(funcDecl);
        else
            retVal = false;
    }
    else if (header->variant() == PROC_HEDR)
    {
        SgProcHedrStmt *procDecl = isSgProcHedrStmt(header);
        if (procDecl)
            createIntefacePrototype(procDecl);
        else
            retVal = false;
    }
    else
        retVal = false;

    return retVal;
}

void ExtractDeclarationStatements(SgStatement *header)
{
    SgStatement *cur_st;
    SgStatement *stmt = header->lexNext();
    SgExprListExp *e;
    SgExpression *list, *it;
    
    while (stmt && !isSgExecutableStatement(stmt)) //is Fortran specification statement
    {   
        cur_st = stmt;     
        stmt = stmt->lexNext();
        if(cur_st->variant() == INTERFACE_STMT || cur_st->variant() == INTERFACE_ASSIGNMENT || cur_st->variant() == INTERFACE_OPERATOR)
        {
            SgStatement *last = cur_st->lastNodeOfStmt();
            SgStatement *start = cur_st;
            while (start != last)
            {
                // save prototypes of FUNC and PROC 
                if (start->variant() == FUNC_HEDR)
                {
                    SgFuncHedrStmt *funcDecl = isSgFuncHedrStmt(start);
                    if (funcDecl)
                    {
                        createIntefacePrototype(funcDecl);
                        start = funcDecl->lastNodeOfStmt();
                    }
                }
                else if (start->variant() == PROC_HEDR)
                {
                    SgProcHedrStmt *procDecl = isSgProcHedrStmt(start);
                    if (procDecl)
                    {
                        createIntefacePrototype(procDecl);
                        start = procDecl->lastNodeOfStmt();
                    }
                }
                start = start->lexNext();
            }
            stmt = cur_st->lastNodeOfStmt()->lexNext();
            cur_st->extractStmt();
            continue;
        }
        list = cur_st->expr(0);
        for(; list; list = list->rhs())
        {
            if(IS_DUMMY(list->lhs()->symbol()) || !isSgArrayType(list->lhs()->symbol()->type()))
                continue;
            //add local array in private list
            e = new SgExprListExp(*new SgVarRefExp(*list->lhs()->symbol()));
            e->setRhs(private_list);
            private_list = e;
        }        
        cur_st->extractStmt();
    }
}

/*
std::string ArrParametrs(SgSymbol* arr)
{
    return ("inf_" + std::string(arr->identifier())).c_str();
}
SgExpression* InheritUpperBound(SgSymbol* arr, int i)
{
    SgExpression *dim = ((SgArrayType *)(arr->type()))->sizeInDim(i);
    SgExpression *lb = dim->lhs();
    SgExpression *ub = dim->rhs();
    if(dim->variant() != DDOT || ub != NULL)
    {
        return UpperBound(arr,i);
    }
    if(lb == NULL)
    {
        return  &(*(new SgArrayRefExp(*new SgSymbol(VARIABLE_NAME, ArrParametrs(arr).c_str()), *new SgValueExp((i-1)+7)))
            - *(new SgArrayRefExp(*new SgSymbol(VARIABLE_NAME,  ArrParametrs(arr).c_str()), *new SgValueExp(i-1)))
            + *new SgValueExp(1)) ; 
    }
    else if(1)
    {
        return  &(*(new SgArrayRefExp(*new SgSymbol(VARIABLE_NAME, ArrParametrs(arr).c_str()), *new SgValueExp((i-1)+7)))
            - *(new SgArrayRefExp(*new SgSymbol(VARIABLE_NAME,  ArrParametrs(arr).c_str()), *new SgValueExp(i-1)))
            + *lb) ;
    }

}
SgExpression* InheritLowerBound(SgSymbol* arr, int i)
{
    SgExpression *dim = ((SgArrayType *)(arr->type()))->sizeInDim(i);
    SgExpression *lb = dim->lhs();
    SgExpression *ub = dim->rhs();
    if(dim->variant() != DDOT || ub != NULL)
    {
        return UpperBound(arr,i);
    }
    if(lb == NULL)
    {
        return new SgValueExp(1) ; 
    }
    else
    {
        return lb;
    }

}
*/
void CorrectSubscript(SgExpression *e)
{
    int dims = ((SgArrayType *)(e->symbol()->type()))->dimension();
    std::deque<std::pair<SgExpression*, SgExpression*> > koefs;
//    SgExpression *infUpperBound = NULL;                ;
//    SgExpression *infLowerBound = NULL;
    SgExpression *tmp = e->lhs();
    if (tmp == NULL)
    {
        return;
    }
    for (int i = 0; i < dims; ++i)
    {
        SgExpression *dimsize = ((SgArrayType *)(e->symbol()->type()))->sizeInDim(i);
        if (dimsize->variant() == STAR_RANGE)
        {
            break;
        }
    }
    for (int i = 0; i < dims; ++i)
    {
        std::pair<SgExpression*, SgExpression*> tmp_pair;
        SgExpression * koef = new SgValueExp(1);
        SgExpression *dimsize = ((SgArrayType *)(e->symbol()->type()))->sizeInDim(i);
        SgExpression *check = dimsize->lhs();
        for (int j = 0; j < i; ++j)
        {
//            SgExpression *dimsize = ((SgArrayType *)(e->symbol()->type()))->sizeInDim(j);
//            if (isSgSubscriptExp(dimsize) && !dimsize->rhs())
//            {
//                infLowerBound = (new SgArrayRefExp(*new SgSymbol(VARIABLE_NAME, ArrParametrs(e->symbol()).c_str()), *new SgValueExp(j)));
//                infUpperBound = (new SgArrayRefExp(*new SgSymbol(VARIABLE_NAME, ArrParametrs(e->symbol()).c_str()), *new SgValueExp(j+7)));
//
//                koef = Calculate(&(*koef * (*infUpperBound - *infLowerBound + *new SgValueExp(1))));
//
//            }
//            else
//            {
            SgExpression * up = UpperBound(e->symbol(), j);
            if(up->variant() == FUNC_CALL)
            {
                up = new SgExpression(RECORD_REF);
                up->setLhs(new SgVarRefExp(e->symbol()));
                //up->setRhs(new SgVarRefExp(*new SgSymbol(FIELD_NAME,(std::string("ub[")+std::to_string(j)+std::string("]")).c_str())));
                up->setRhs(new SgFunctionCallExp(*new SgSymbol(MEMBER_FUNC,"ub"), *new SgExprListExp(*new SgValueExp(j))));
            }
            SgExpression * low = LowerBound(e->symbol(), j);
            koef = Calculate(&(*koef * (*up - *LowerBound(e->symbol(), j) + *new SgValueExp(1))));
//            }
        }
        tmp_pair.first = koef;

        tmp_pair.second = Calculate(&(*tmp->lhs() - *LowerBound(e->symbol(), i)));
        tmp = tmp->rhs();
        koefs.push_back(tmp_pair);

    }
    SgExpression *line = koefs.front().second;
    koefs.pop_front();
    tmp = e->lhs();
    for (int i = 0; i < dims - 1; ++i)
    {
        line = &(*koefs.front().second * *koefs.front().first + *line);
        koefs.pop_front();
        tmp = tmp->rhs();
    }
    e->setLhs((new SgExprListExp(*line)));
}

void replaceVectorRef(SgExpression *e)
{
    SgType *type;
    if (e == NULL)
        return;
    if (isSgArrayRefExp(e))
    {
        type = isSgArrayType(e->symbol()->type());
        if (IS_DUMMY(e->symbol()) && type)
        {
            CorrectSubscript(e);
        }
        return;
    }

    replaceVectorRef(e->lhs());
    replaceVectorRef(e->rhs());
}

void ConvertArrayReferences(SgStatement *first, SgStatement *last)
{
    SgStatement *st;
    for (st = first; st != last; st = st->lexNext())
    {
        if (st->expr(0))
            replaceVectorRef(st->expr(0));
        if (st->expr(1))
            replaceVectorRef(st->expr(1));
        if (st->expr(2))
            replaceVectorRef(st->expr(2));
    }
}

void convertArrayDecl(SgSymbol* s)
{
    SgExprListExp *resDims, *tmp; 
    std::stack<SgExpression*>dims;
    if(isSgArrayType(s->type()))    
    {
        SgExpression *dimList = isSgArrayType(s->type())->getDimList();
        while (dimList)
        {
            if(dimList->lhs()->variant() == DDOT)
            {
                dims.push(Calculate(&(*(dimList->lhs()->rhs()) - *(dimList->lhs()->lhs()) + *new SgValueExp(1))));
            }
            else
            {       
                dims.push(Calculate(&(*(dimList->lhs()))));
            }
            dimList = dimList->rhs();
        }
        SgType* t = C_Type(isSgArrayType(s->type())->baseType());
        SgArrayType *arr = new SgArrayType(*t); 
        while (!dims.empty())
        {
            arr->addDimension(dims.top());
            dims.pop();
        }
        s->setType(arr);
    }


}

void MakeFunctionDeclarations(SgStatement *header, SgSymbol *s_last)
{
    SgSymbol *s;
    SgStatement *cur_stat = header;
    SgStatement *st;
    SgExpression *el;
    char* name = header->expr(0)->symbol()->identifier();

    for (s = header->symbol()->next(); s != s_last->next(); s = s->next())
    {
        if (isSgFunctionSymb(s) != NULL)
            continue;

        int flags = s->attributes();

        if (IS_DUMMY(s))
        {
            if (flags & (IN_BIT | OUT_BIT | INOUT_BIT))
                continue;
            else
                err_p("Dummy argument need to have INTENT attribute in PURE procedure", name, 617);
        }

        if (flags & SAVE_BIT)
            err_p("SAVE not be used in PURE procedure", name, 618);
        if (flags & COMMON_BIT)
            err_p("COMMON not be used in PURE procedure", name, 619);

        if (s->scope() != header)
        {    
            //printf("%s: %d \n",s->identifier(),s->scope()->variant());  //printf("%s: %d %s \n",s->identifier(),s->scope()->variant(),s->scope()->symbol()->identifier());
            continue;
        }
        if (!isSgArrayType(s->type()))  //scalar variable
            s->setType(C_Type(s->type()));
        else
        {
            continue;
        }

        if (isSgConstantSymb(s))
        {   
            SgExpression *ce = ((SgConstantSymb *)s)->constantValue();            
            convertExpr(ce, ce);
            st = makeSymbolDeclarationWithInit(s, ce);
            st->addDeclSpec(BIT_CONST);
        }
        else  if(isSgVariableSymb(s))
            st = makeSymbolDeclaration(s);         //st = Declaration_Statement(s);
        else
            continue;
        cur_stat->insertStmtAfter(*st);
        cur_stat = st;
    }
                //printf("\n"); if(private_list) private_list->unparsestdout(); printf("\n");  
    for (el = private_list; el; el = el->rhs())
    {
        convertArrayDecl(el->lhs()->symbol());
        st = makeSymbolDeclaration(el->lhs()->symbol());
        cur_stat->insertStmtAfter(*st);
        cur_stat = st;
    }
}

SgSymbol *LastSymbolOfFunction(SgStatement *header)
{
    SgSymbol *s = header->symbol();
    while (s->next())
    {   //printf("       %s: %d %s\n", s->next()->identifier(),s->next()->scope()->variant(), s->next()->scope()->symbol() ? s->next()->scope()->symbol()->identifier() : "N");
        s = s->next();
    }
    return(s);
}


//---------------------------------------------------------------------------------------
void ProjectStructure(SgProject &project)
{
    int n = project.numberOfFiles();
    SgFile *file;

    int i;
    // building program structure 
    // looking through the file list of project (first time)
    for (i = n - 1; i >= 0; i--)
    {
        file = &(project.file(i));
        current_file = file;
        current_file_id = i;
        FileStructure(file);
        //printf("%s %d\n",project.fileName(i),i);  PrintWholeGraph();   
    }
    for (i = n - 1; i >= 0; i--)
    {
        file = &(project.file(i));
        current_file = file;
        current_file_id = i;
        doCallGraph(file);
    }
    //ScanSymbolTable(file);
    //PrintWholeGraph();
}
#endif

void FileStructure(SgFile *file)
{// looking through the file and creating graph node for header of each program unit 
    SgStatement *stat;

    // grab the first statement in the file.
    stat = file->firstStatement(); // file header   
    for (stat = stat->lexNext(); stat; stat = stat->lexNext())
    {
#if __SPF
		currProcessing.second = stat->lineNumber();
#endif		
        if (stat->variant() == INTERFACE_STMT || stat->variant() == INTERFACE_ASSIGNMENT || stat->variant() == INTERFACE_OPERATOR)
        {
            stat = stat->lastNodeOfStmt(); //InterfaceBlock(stat);  
            continue;
        }

        if (stat->variant() == FUNC_HEDR || stat->variant() == PROC_HEDR || stat->variant() == PROG_HEDR || stat->variant() == MODULE_STMT)
        {                                      //printf("%d %s \n",stat->lineNumber(),stat->symbol()->identifier());
            //creating graph node for header of function (procedure, program)
            cur_node = GraphNode(stat->symbol(), stat, NEW);

        }

    }

}


void doCallGraph(SgFile *file)
{// scanning the file to search procedure calls
    SgStatement *stat = NULL, *end_of_unit = NULL;
    //char *func_name;  
    //int *ir;
    //int has_main_program_unit = 0;

    // grab the first statement in the file.
    stat = file->firstStatement(); // file header  
	for (stat = stat->lexNext(); stat; stat = end_of_unit->lexNext())
	{
#if __SPF
		currProcessing.second = stat->lineNumber();
#endif
		end_of_unit = ProgramUnit(stat);
	}

    // add the attribute (last statement of file) to first statement of file
    SgStatement **last = new (SgStatement *);
#if __SPF
    addToCollection(__LINE__, __FILE__, last, 1);
#endif
    *last = end_of_unit;
    file->firstStatement()->addAttribute(LAST_STATEMENT, (void*)last, sizeof(SgStatement *));

}

SgStatement *ProgramUnit(SgStatement *first)
{
    SgStatement *stat, *end_of_unit;

    // program unit: main program, external subprogram, module or block data

    for (stat = first; stat; stat = end_of_unit->lexNext())
    {
        //end of program unit with CONTAINS statement
        if (stat->variant() == CONTROL_END)
        {
            if (stat->controlParent() == first)  //end of program unit with CONTAINS statement
                return(stat);
            else
            {
                end_of_unit = stat;
                continue;
            }
        }
        if (stat->variant() == BLOCK_DATA) //BLOCK_DATA header 
            return(stat->lastNodeOfStmt());

        // PROGRAM, SUBROUTINE, FUNCTION  or MODULE header

        //scanning the Symbols Table of the function 
        //     ScanSymbTable(func->symbol(), (f->functions(i+1))->symbol());

        end_of_unit = Subprogram(stat);  // end_of unit may be END or CONTAINS statement
        //printf("---%d  %d %s \n",stat->lineNumber(),end_of_unit->lineNumber(),stat->symbol()->identifier());
        GRAPHNODE(stat->symbol())->st_last = end_of_unit;
        if (end_of_unit->variant() == CONTROL_END && end_of_unit->controlParent() == first) //end of program unit without CONTAINS statement  
            return(end_of_unit);
    }
    return NULL;
}

SgStatement *Subprogram(SgStatement *func)
{
    // Build a directed acyclic call multigrahp (call DAMG) 
    // which represents calls between routines of the program

    SgStatement *stmt, *last, *first;


    DECL(func->symbol()) = 1;
    HEDR(func->symbol()) = func->thebif;

    //if( func->variant() == PROG_HEDR)
    //   PROGRAM_HEADER(func->symbol()) = func->thebif;

    //creating graph node for header of function (procedure, program)
    cur_node = GraphNode(func->symbol(), func, 0);

    first = func->lexNext();
    //printf("\n%s  header_id= %d \n", func->symbol()->identifier(), func->symbol()->id());
    //!!!debug
    //if(fsymb)
    //printf("\n%s   %s \n", header(func->variant()),fsymb->identifier()); 
    //else {
    //printf("Function name error  \n");
    //return;
    //}

    last = func->lastNodeOfStmt();

    // follow the statements of the function in lexical order
    // until last statement
    for (stmt = first; stmt && (stmt != last); stmt = stmt->lexNext())
    {

        switch (stmt->variant()) {

        case CONTAINS_STMT:
            last = stmt;
            goto END_;
            break;

        case ENTRY_STAT:
            // !!!!!!!
            break;

        case DATA_DECL:
        case CONTROL_END:
        case STOP_STAT:
        case PAUSE_NODE:
        case GOTO_NODE:             // GO TO             
            break;

        case VAR_DECL:
        case SWITCH_NODE:           // SELECT CASE ...
        case ARITHIF_NODE:          // Arithmetical IF
        case IF_NODE:               // IF... THEN
        case WHILE_NODE:            // DO WHILE (...) 
        case CASE_NODE:             // CASE ...
        case ELSEIF_NODE:           // ELSE IF...
        case LOGIF_NODE:            // Logical IF
            FunctionCallSearch(stmt->expr(0));
            break;
        case STMTFN_STAT:
            DECL(stmt->expr(0)->symbol()) = 2;
            break;
        case COMGOTO_NODE:          // Computed GO TO
        case OPEN_STAT:
        case CLOSE_STAT:
        case INQUIRE_STAT:
        case BACKSPACE_STAT:
        case ENDFILE_STAT:
        case REWIND_STAT:
            FunctionCallSearch(stmt->expr(1));
            break;

        case PROC_STAT:  {           // CALL
                             SgExpression *el;
                             int inlined;
                             //printf("\n%s  call_id= %d \n", stmt->symbol()->identifier(), stmt->symbol()->id());
                             //!!!temporary
                             //inlined = (func->variant() == PROG_HEDR) ? 0 : 1;
                             inlined = 1;
                             Call_Site(stmt->symbol(), inlined);
                             // looking through the arguments list
                             for (el = stmt->expr(0); el; el = el->rhs())
                                 Arg_FunctionCallSearch(el->lhs());   // argument
        }
            break;

        case ASSIGN_STAT:             // Assign statement
        case WRITE_STAT:
        case READ_STAT:
        case PRINT_STAT:
        case FOR_NODE:
            FunctionCallSearch(stmt->expr(0));   // left part
            FunctionCallSearch(stmt->expr(1));   // right part
            break;
        default:
            FunctionCallSearch(stmt->expr(0));
            FunctionCallSearch(stmt->expr(1));
            FunctionCallSearch(stmt->expr(2));
            break;
        }

    } // end of processing statement/directive 

END_:
    // for debugging
    if (deb_reg > 1)
        PrintGraphNode(cur_node);

    return(last);

}

void FunctionCallSearch(SgExpression *e)
{
    SgExpression *el;
    if (!e)
        return;

    if (isSgFunctionCallExp(e)) {
        Call_Site(e->symbol(), 1);
        for (el = e->lhs(); el; el = el->rhs())
            Arg_FunctionCallSearch(el->lhs());
        return;
    }
    FunctionCallSearch(e->lhs());
    FunctionCallSearch(e->rhs());
    return;
}

void Arg_FunctionCallSearch(SgExpression *e)
{
    FunctionCallSearch(e);
    return;
}

void FunctionCallSearch_Left(SgExpression *e)
{
    FunctionCallSearch(e);
}


void Call_Site(SgSymbol *s, int inlined)
{
    graph_node * gnode;
    //printf("\n%s  id= %d \n", s->identifier(), s->id());
    if (!do_dummy  && isDummyArgument(s)) return;
    if (!do_stmtfn && isStatementFunction(s)) return;
    // if(isIntrinsicFunction(s)) return; 
    //printf("\nLINE %d", cur_st->lineNumber());
    gnode = GraphNode(s, NULL, 0);
    CreateOutcomingEdge(gnode, inlined); // for node 'cur_node' edge: [cur_node]-> gnode
    CreateIncomingEdge(gnode, inlined); // for node 'gnode'    edge:  cur_node ->[gnode]
    if (gnode->st_header)
        MarkAsUserProcedure(s);
}

graph_node *GraphNode(SgSymbol *s, SgStatement *header_st, int flag_new)
{
    graph_node * gnode;
    graph_node **pnode = new (graph_node *);

#if __SPF
    addToCollection(__LINE__, __FILE__, pnode, 1);
#endif

    gnode = flag_new == NEW ? NULL : NodeForSymbInGraph(s, header_st);
    if (!gnode)
        gnode = NewGraphNode(s, header_st);

    *pnode = gnode;
    if (!ATTR_NODE(s)){
        s->addAttribute(GRAPH_NODE, (void*)pnode, sizeof(graph_node *));
        if (deb_reg > 1)
            printf("\n attribute NODE[%d] for %s[%d]\n", GRAPHNODE(s)->id, s->identifier(), s->id());
    }
    return(gnode);
}

graph_node *NodeForSymbInGraph(SgSymbol *s, SgStatement *stheader)
{
    graph_node *ndl;
    for (ndl = node_list; ndl; ndl = ndl->next) {
        if (s == ndl->symb) return(ndl);
        if (!strcmp(ndl->symb->identifier(), s->identifier()))
            //if((ndl->st_header == NULL) && !strcmp(ndl->symb->identifier(),s->identifier()) ) && (ndl->symb->scope() == s->scope()))
        {
            if (stheader)
            {
                ndl->st_header = stheader;
                ndl->symb = s;
            }
            /*  else   //if(s->thesymb->decl == NULL)
              {   Err_g("Call graph error '%s' ", s->identifier(), 1);
              (void) fprintf( stderr,"%s %d    %d  in line %d\n",s->identifier(),s->id(),ndl->symb->id(),cur_st->lineNumber());
              }
              */
            return(ndl);
        }
    }
    return(NULL);
}

graph_node *NewGraphNode(SgSymbol *s, SgStatement *header_st)
{
    graph_node * gnode;

    gnode = new graph_node;
    gnode->id = ++gcount;
    gnode->next = node_list;
    node_list = gnode;
    gnode->file = current_file;
    gnode->file_id = current_file_id;
    gnode->st_header = header_st;
    gnode->symb = s;
    gnode->name = new char[strlen(s->identifier()) + 1];
#if __SPF
    addToCollection(__LINE__, __FILE__, gnode->name, 2);
#endif
    strcpy(gnode->name, s->identifier());
    gnode->to_called = NULL;
    gnode->from_calling = NULL;
    if (header_st && (header_st->variant() == FUNC_HEDR || header_st->variant() == PROC_HEDR))
    {
        if (header_st->controlParent()->variant() == MODULE_STMT)
            gnode->type = 3;
        else if (header_st->controlParent()->variant() == GLOBAL)
            gnode->type = 1;
        else
            gnode->type = 2;
    }
    else
        gnode->type = 0;
    if (header_st && header_st->expr(2))
    {
        if (header_st->expr(2)->variant() == PURE_OP)
            SYMB_ATTR(s->thesymb) = SYMB_ATTR(s->thesymb) | PURE_BIT;
        else if (header_st->expr(2)->variant() == ELEMENTAL_OP)
            SYMB_ATTR(s->thesymb) = SYMB_ATTR(s->thesymb) | ELEMENTAL_BIT;
    }
    gnode->split = 0;
    gnode->tmplt = 0;
    gnode->clone = 0;
    gnode->count = 0;

    //printf("%s --- %d %d\n",gnode->name,gnode->id,gnode->type);
    return(gnode);
}

edge *CreateOutcomingEdge(graph_node *gnode, int inlined)
{
    edge *out_edge, *edgl;
    //SgSymbol *sunit;
    //sunit = cur_func->symbol();

    // testing outcoming edge list of current (calling) routine graph-node: cur_node 
    for (edgl = cur_node->to_called; edgl; edgl = edgl->next)
    if ((edgl->to->symb == gnode->symb) && (edgl->inlined == inlined)) //there is outcoming edge: [cur_node]->gnode 
        return(edgl);
    // creating new edge: [cur_node]->gnode 
    out_edge = NewEdge(NULL, gnode, inlined);   //NULL -> cur_node
    out_edge->next = cur_node->to_called;
    cur_node->to_called = out_edge;
    return(out_edge);
}

edge *CreateIncomingEdge(graph_node *gnode, int inlined)
{
    edge *in_edge, *edgl;
    //SgSymbol *sunit;
    //sunit = cur_func->symbol();

    // testing incoming edge list of called routine graph-node: gnode 
    for (edgl = gnode->from_calling; edgl; edgl = edgl->next)
    if ((edgl->from->symb == cur_node->symb) && (edgl->inlined == inlined)) //there is incoming edge: : cur_node->[gnode] 
        return(edgl);
    // creating new edge: cur_node->[gnode]
    in_edge = NewEdge(cur_node, NULL, inlined);   //NULL -> gnode
    in_edge->next = gnode->from_calling;
    gnode->from_calling = in_edge;
    return(in_edge);
}

edge *NewEdge(graph_node *from, graph_node *to, int inlined)
{
    edge *nedg;
    nedg = new edge;
    nedg->from = from;
    nedg->to = to;
    nedg->inlined = inlined;
    return(nedg);
}

/**********************************************************************/

/*    Testing and Help Functions                                      */

/**********************************************************************/


int isDummyArgument(SgSymbol *s)
{
    if (s->thesymb->entry.var_decl.local == IO)  // is dummy argument
        return(1);
    else
        return(0);
}

int isHeaderStmtSymbol(SgSymbol *s)
{
    return(DECL(s) == 1 && (s->variant() == FUNCTION_NAME || s->variant() == PROCEDURE_NAME || s->variant() == PROGRAM_NAME));
}

int isStatementFunction(SgSymbol *s)
{
    if (DECL(s) == 2)
        //if(s->scope() == cur_func && s->variant()==FUNCTION_NAME) 
        return (1); //is statement function symbol
    else return (0);
}

int isHeaderNode(graph_node *gnode)
{
    //header node represent a "top level" routine:
    //main program, or any subprogram which was called 
    //without inline expansion somewhere in the original program 
    edge * edgl;
    if (gnode->symb->variant() == PROGRAM_NAME)
        return(1);
    for (edgl = gnode->from_calling; edgl; edgl = edgl->next)
    if (!edgl->inlined) return(1);
    return(0);
}

int isDeadNode(graph_node *gnode)
{
    // dead node represent a "dead" routine:
    // a subprogram which was not called
    if (gnode->from_calling || gnode->symb->variant() == PROGRAM_NAME)
        return(0);
    else
        return(1);
}

int isNoBodyNode(graph_node *gnode)
{
    // nobody node represent a "nobody" routine: intrinsic or absent

    if (gnode->st_header)
        return(0);
    else
        return(1);
}


graph_node_list  *addToNodeList(graph_node_list *pnode, graph_node *gnode)
{
    // adding the node to the beginning of node list 
    // pnode-> gnode -> gnode-> ... -> gnode     
    graph_node_list * ndl;
    if (!pnode) {
        pnode = new graph_node_list;
        pnode->node = gnode;
        pnode->next = NULL;
    }
    else {
        ndl = new graph_node_list;
        ndl->node = gnode;
        ndl->next = pnode;
        pnode = ndl;
    }
    return (pnode);
}

graph_node_list  *delFromNodeList(graph_node_list *pnode, graph_node *gnode)
{
    // deleting the node from the node list 

    graph_node_list * ndl, *l;
    if (!pnode) return (NULL);
    if (pnode->node == gnode) return(pnode->next);
    l = pnode;
    for (ndl = pnode->next; ndl; ndl = ndl->next)
    {
        if (ndl->node == gnode)
        {
            l->next = ndl->next;
            return(pnode);
        }
        else
            l = ndl;
    }
    return (pnode);
}

graph_node_list  *isInNodeList(graph_node_list *pnode, graph_node *gnode)
{
    // testing: is there node in the node list 

    graph_node_list * ndl;
    if (!pnode) return (NULL);
    for (ndl = pnode; ndl; ndl = ndl->next)
    {
        if (ndl->node == gnode)
            return(ndl);
    }
    return (NULL);
}


void PrintGraphNode(graph_node *gnode)
{
    edge * edgl;
    printf("\n%s(%d)[%d]  ->   ", gnode->symb->identifier(), gnode->symb->id(), gnode->id);
    for (edgl = gnode->to_called; edgl; edgl = edgl->next)
        printf("   %s(%d)", edgl->to->symb->identifier(), edgl->to->symb->id());
}

void PrintGraphNodeWithAllEdges(graph_node *gnode)
{
    edge * edgl;
    printf("\n");
    for (edgl = gnode->from_calling; edgl; edgl = edgl->next)
        printf("   %s(%d)", edgl->from->symb->identifier(), edgl->from->symb->id());
    if (!gnode->from_calling)
        printf("          ");
    printf("   ->%s(%d)->   ", gnode->symb->identifier(), gnode->symb->id());
    for (edgl = gnode->to_called; edgl; edgl = edgl->next)
        printf("   %s(%d)", edgl->to->symb->identifier(), edgl->to->symb->id());
}

void PrintWholeGraph()
{
    graph_node *ndl;
    printf("\n%s\n", "C a l l  G r a p h");
    for (ndl = node_list; ndl; ndl = ndl->next)
        PrintGraphNode(ndl);
    printf("\n");
}

void PrintWholeGraph_kind_2()
{
    graph_node *ndl;
    printf("\n%s\n", "C a l l  G r a p h  2");
    for (ndl = node_list; ndl; ndl = ndl->next)
        PrintGraphNodeWithAllEdges(ndl);
    printf("\n");
}


void DeleteIncomingEdgeFrom(graph_node *gnode, graph_node *from)
{
    // deleting edge that is incoming to node 'gnode' from node 'from' 
    edge *edgl, *ledge;
    ledge = NULL;
    for (edgl = gnode->from_calling; edgl; edgl = edgl->next) {
        if (edgl->from == from) {
            if (deb_reg > 1)
                printf("\n%s(%d)-%s(%d) edge dead  ", from->symb->identifier(), from->symb->id(), gnode->symb->identifier(), gnode->symb->id());

            if (ledge)
                ledge->next = edgl->next;
            else
                gnode->from_calling = edgl->next;
        }
        else
            ledge = edgl;
    }
}

void DeleteOutcomingEdgeTo(graph_node *gnode, graph_node *gto)
{
    // deleting edge that is outcoming from node 'gnode' to node 'gto' 
    edge *edgl, *ledge;
    ledge = NULL;
    for (edgl = gnode->to_called; edgl; edgl = edgl->next) {
        if (edgl->to == gto) {
            if (deb_reg > 1)
                printf("\n%s(%d)-%s(%d) edge empty  ", gnode->symb->identifier(), gnode->symb->id(), gto->symb->identifier(), gto->symb->id());

            if (ledge)
                ledge->next = edgl->next;
            else
                gnode->to_called = edgl->next;
        }
        else
            ledge = edgl;
    }
}

#ifndef __SPF
void ScanSymbolTable(SgFile *f)
{
    SgSymbol *s;
    for (s = f->firstSymbol(); s; s = s->next())
        //if(isHeaderStmtSymbol(s))
        printSymb(s);
}

void ScanTypeTable(SgFile *f)
{
    SgType *t;
    for (t = f->firstType(); t; t = t->next())
    {   // printf("TYPE[%d] : ", t->id());
        printType(t);
    }
}

void ReseatEdges(graph_node *gnode, graph_node *newnode)
{//reseat all edges representing inlined calls to gnode to point to newnode 
    edge *edgl, *tol, *ledge, *curedg;
    graph_node *from;
    ledge = NULL;
    // for(edgl=gnode->from_calling; edgl; edgl=edgl->next)
    // looking through the incoming edge list of gnode
    edgl = gnode->from_calling;
    while (edgl)
    {
        if (edgl->inlined)
        {
            from = edgl->from;
            // reseating outcoming edge to 'gnode' to point to 'newnode'
            for (tol = from->to_called; tol; tol = tol->next)
            if (tol->to == gnode && tol->inlined)
            {
                tol->to = newnode; break;
            }
            // removing "inlined" incoming edge of gnode
            if (ledge)
                ledge->next = edgl->next;
            else
                gnode->from_calling = edgl->next;

            curedg = edgl;    // set curedg to point at removed edge  
            edgl = edgl->next;  // to next node of list

            // adding removed edge  to 'newnode' 
            curedg->next = newnode->from_calling;
            newnode->from_calling = curedg;

        }
        else
        {
            ledge = edgl;
            edgl = edgl->next;
        }
    } //end while  
}

void CopyOutcomingEdges(graph_node *gnode, graph_node *gnew)
{
    edge *out_edge, *in_edge, *edgl;
    graph_node *s;
    // looking through the outcoming edge list of gnode
    for (edgl = gnode->to_called; edgl; edgl = edgl->next)
    {
        s = edgl->to; // successor of gnode
        // creating new edge of gnew (copy of edgl)
        out_edge = NewEdge(NULL, edgl->to, edgl->inlined);
        out_edge->next = gnew->to_called;
        gnew->to_called = out_edge;
        // creating new edge of  s (successor  of gnode)
        in_edge = NewEdge(gnew, NULL, edgl->inlined);
        in_edge->next = s->from_calling;
        s->from_calling = in_edge;
    }
    return;
}

void CopyIncomingEdges(graph_node *gnode, graph_node *gnew)
{
    edge *in_edge, *out_edge, *edgl;
    graph_node *p;
    // looking through the incoming edge list of gnode
    for (edgl = gnode->from_calling; edgl; edgl = edgl->next)
    {
        p = edgl->from; // predecessor of gnode
        // creating new edge of gnew (copy of edgl) 
        in_edge = NewEdge(edgl->from, NULL, edgl->inlined);
        in_edge->next = gnew->from_calling;
        gnew->from_calling = in_edge;
        // creating new edge of p (predecessor of gnode)
        out_edge = NewEdge(NULL, gnew, edgl->inlined);
        out_edge->next = p->to_called;
        p->to_called = out_edge;

    }
    return;
}

void printSymb(SgSymbol *s)
{
    const char *head;
    head = isHeaderStmtSymbol(s) ? "HEADER  " : "        ";
    printf("SYMB[%3d]  scope=STMT[%3d] : %s    %s", s->id(), (s->scope()) ? (s->scope())->id() : -1, s->identifier(), head);
    printType(s->type());
    printf("\n");
}

void printType(SgType *t)
{
    SgArrayType *arrayt;

    if (!t) {
        printf("no type "); return;
    }
    else   printf("TYPE[%d]:", t->id());
    if ((arrayt = isSgArrayType(t)) != 0)
    {
        SgExpression *e = arrayt->getDimList();
        if (!e)
            printf(" dimension() ");
        else
            printf(" dimension(%s) ", UnparseExpr(arrayt->getDimList()));
        /*
          int i;
          int n = arrayt->dimension();
          printf("dimension(");
          for(i = 0; i < n; i++)
          { if(arrayt->sizeInDim(i))
          { printf("%s", UnparseExpr(arrayt->sizeInDim(i))); //(arrayt->sizeInDim(i))->unparsestdout();
          if(i < n-1)  printf(", ");
          }
          }
          printf(") ");
          */
    }
    else
    {
        switch (t->variant())
        {
        case  T_INT:      printf("integer "); break;
        case  T_FLOAT:    printf("real "); break;
        case  T_DOUBLE:   printf("double precision "); break;
        case  T_CHAR:     printf("character "); break;
        case  T_STRING:   printf("Character ");
            UnparseLLND(TYPE_RANGES(t->thetype));
            /*if(t->length()) printf("[%d]",t->length()->variant());*/
            /*((SgArrayType *) t)->getDimList()->unparsestdout();*/
            break;
        case  T_BOOL:     printf("logical "); break;
        case  T_COMPLEX:  printf("complex "); break;
        case  T_DCOMPLEX:  printf("double complex "); break;

        default: break;
        }
    }

    if (t->hasBaseType())
    {
        printf("of ");
        printType(t->baseType());
    }
}
#endif

#undef NEW
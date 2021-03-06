#include "leak_detector.h"
#include "TypedSymbol.h"

using namespace std;

TypedSymbol::TypedSymbol(SgExpression* orig_exp)
{
    if (orig_exp->variant() == VAR_REF || orig_exp->variant() == ARRAY_REF)
        orig = OriginalSymbol(orig_exp->symbol());

    type = VAR_TYPE::VAR_UNDEFINED;

    if (orig_exp->variant() == VAR_REF)
        type = VAR_TYPE::VAR_SCALAR;

    if (orig_exp->variant() == ARRAY_REF)
    {
        type = VAR_TYPE::VAR_ARR;
        DIST::Array* arr = getArrayFromDeclarated(declaratedInStmt(orig), orig->identifier());
        if (arr == NULL) //for strings charecter(*)
            type = VAR_TYPE::VAR_SCALAR;
        else if (!arr->GetNonDistributeFlag())
            type = VAR_TYPE::VAR_DISTR_ARR;
    }
}

bool operator== (const TypedSymbol& lhs, const TypedSymbol& rhs)
{    
    return string(OriginalSymbol(lhs.orig)->identifier()) == string(OriginalSymbol(rhs.orig)->identifier()) && 
           OriginalSymbol(lhs.orig)->scope()->id() == OriginalSymbol(rhs.orig)->scope()->id();
}

bool operator< (const TypedSymbol& lhs, const TypedSymbol& rhs)
{
    return OriginalSymbol(lhs.orig)->id() < OriginalSymbol(rhs.orig)->id();
}
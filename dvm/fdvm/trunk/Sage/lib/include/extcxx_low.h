/*********************************************************************/
/*                  pC++/Sage++  Copyright (C) 1993                  */
/*  Indiana University  University of Oregon  University of Rennes   */
/*********************************************************************/


/* DO NOT EDIT THIS FILE! */
/* This file was automatically created by /u/sage/bin/mkC++extern */
/* Source file: /u/sage/project/sage/lib/newsrc/low_level.c */
/* Created on Tue Jul 12 12:46:22 EST 1994       (phb)  */
extern "C" {
     POINTER newNode(...);
     PTR_BFND FindNearBifNode(...);
     PTR_BFND Get_Last_Node_Of_Project(...);
     PTR_BFND Get_bif_with_id(...);
     PTR_BFND GetcountInStmtNode1(...);
     PTR_BFND LibGetScopeForDeclare(...);
     PTR_BFND LibWhereIsSymbDeclare(...);
     PTR_BFND LibcreateCollectionWithType(...);
     PTR_BFND LibdeleteStmt(...);
     PTR_BFND LibextractStmt(...);
     PTR_BFND LibextractStmtBody(...);
     PTR_BFND LibfirstElementMethod(...);
     PTR_BFND LibgetInnermostLoop(...);
     PTR_BFND LibgetNextNestedLoop(...);
     PTR_BFND LibgetPreviousNestedLoop(...);
     PTR_BFND LiblastDeclaration(...);
     PTR_BFND LocalRedoBifNextChain(...);
     PTR_BFND Redo_Bif_Next_Chain_Internal(...);
     PTR_BFND childfInBlobList(...);
     PTR_BFND computeControlParent(...);
     PTR_BFND deleteBfnd(...);
     PTR_BFND deleteBfndFromBlobAndLabel(...);
     PTR_BFND duplicateOneStmt(...);
     PTR_BFND duplicateStmts(...);
     PTR_BFND duplicateStmtsBlock(...);
     PTR_BFND duplicateStmtsNoExtract(...);
     PTR_BFND extractBifSectionBetween(...);
     PTR_BFND getBodyOfSymb(...);
     PTR_BFND getFirstStmt(...);
     PTR_BFND getFuncScope(...);
     PTR_BFND getFunctionHeader(...);
     PTR_BFND getFunctionHeaderAllFile(...);
     PTR_BFND getFunctionNumHeader(...);
     PTR_BFND getGlobalFunctionHeader(...);
     PTR_BFND getLastNodeList(...);
     PTR_BFND getLastNodeOfStmt(...);
     PTR_BFND getLastNodeOfStmtNoControlEnd(...);
     PTR_BFND getMainProgram(...);
     PTR_BFND getNodeBefore(...);
     PTR_BFND getObjectStmt(...);
     PTR_BFND getScopeForLabel(...);
     PTR_BFND getStatementNumber(...);
     PTR_BFND getStructNumHeader(...);
     PTR_BFND getWhereToInsertInBfnd(...);
     PTR_BFND lastBifInBlobList(...);
     PTR_BFND lastBifInBlobList1(...);
     PTR_BFND lastBifInBlobList2(...);
     PTR_BFND makeDeclStmt(...);
     PTR_BFND makeDeclStmtWPar(...);
     PTR_BFND rec_num_near_search(...);
     PTR_BLOB appendBlob(...);
     PTR_BLOB deleteBfndFrom(...);
     PTR_BLOB getLabelUDChain(...);
     PTR_BLOB lastBlobInBlobList(...);
     PTR_BLOB lastBlobInBlobList1(...);
     PTR_BLOB lastBlobInBlobList2(...);
     PTR_BLOB lookForBifInBlobList(...);
     PTR_CMNT Get_cmnt_with_id(...);
     PTR_FILE GetFileWithNum(...);
     PTR_FILE GetPointerOnFile(...);
     PTR_LABEL Get_label_with_id(...);
     PTR_LABEL getLastLabel(...);
     PTR_LLND Follow_Llnd(...);
     PTR_LLND Follow_Llnd0(...);
     PTR_LLND Get_First_Parameter_For_Call(...);
     PTR_LLND Get_Second_Parameter_For_Call(...);
     PTR_LLND Get_Th_Parameter_For_Call(...);
     PTR_LLND Get_ll_with_id(...);
     PTR_LLND LibIsSymbolInExpression(...);
     PTR_LLND LibarrayRefs(...);
     PTR_LLND LibsymbRefs(...);
     PTR_LLND Make_Function_Call(...);
     PTR_LLND addLabelRefToExprList(...);
     PTR_LLND addSymbRefToExprList(...);
     PTR_LLND addToExprList(...);
     PTR_LLND addToList(...);
     PTR_LLND copyLlNode(...);
     PTR_LLND deleteNodeInExprList(...);
     PTR_LLND deleteNodeWithItemInExprList(...);
     PTR_LLND findPtrRefExp(...);
     PTR_LLND getPositionInExprList(...);
     PTR_LLND getPositionInList(...);
     PTR_LLND giveLlSymbInDeclList(...);
     PTR_LLND makeDeclExp(...);
     PTR_LLND makeDeclExpWPar(...);
     PTR_LLND makeInt(...);
     PTR_LLND newExpr(...);
     PTR_SYMB GetThOfFieldList(...);
     PTR_SYMB GetThOfFieldListForType(...);
     PTR_SYMB GetThParam(...);
     PTR_SYMB Get_Symb_with_id(...);
     PTR_SYMB doesClassInherit(...);
     PTR_SYMB duplicateParamList(...);
     PTR_SYMB duplicateSymbol(...);
     PTR_SYMB duplicateSymbolAcrossFiles(...);
     PTR_SYMB duplicateSymbolLevel1(...);
     PTR_SYMB duplicateSymbolLevel2(...);
     PTR_SYMB getClassNextFieldOrMember(...);
     PTR_SYMB getFieldOfStructWithName(...);
     PTR_SYMB getFirstFieldOfStruct(...);
     PTR_SYMB getSymbolWithName(...);
     PTR_SYMB getSymbolWithNameInScope(...);
     PTR_SYMB lookForNameInParamList(...);
     PTR_SYMB newSymbol(...);
     PTR_SYMB duplicateSymbolOfRoutine(...);
     PTR_TYPE FollowTypeBaseAndDerived(...);
     PTR_TYPE GetAtomicType(...);
     PTR_TYPE Get_type_with_id(...);
     PTR_TYPE addToBaseTypeList(...);
     PTR_TYPE createDerivedCollectionType(...);
     PTR_TYPE duplicateType(...);
     PTR_TYPE duplicateTypeAcrossFiles(...);
     PTR_TYPE getDerivedTypeWithName(...);
     PTR_TYPE lookForInternalBasetype(...);
     PTR_TYPE lookForTypeDescript(...);
     char *allocateFreeListNodeExpression(...);
     char* Get_Function_Name_For_Call(...);
     char* Remove_Carriage_Return(...);
     char* UnparseTypeBuffer(...);
     char* filter(...);
     char* mymalloc(...);
     char* xmalloc(...);
     int Apply_To_Bif(...);
     int Check_Lang_C(...);
     int Check_Lang_Fortran(...);
     int GetFileNum(...);
     int GetFileNumWithPt(...);
     int Init_Tool_Box(...);
     int IsRefToSymb(...);
     int Is_String_Val_With_Val(...);
     int LibClanguage(...);
     int LibFortranlanguage(...);
     int LibIsSymbolInScope(...);
     int LibIsSymbolReferenced(...);
     int LibisEnddoLoop(...);
     int LibisMethodOfElement(...);
     int LibnumberOfFiles(...);
     int LibperfectlyNested(...);
     int Message(...);
     int Replace_String_In_Expression(...);
     int appendBfndListToList1(...);
     int appendBfndListToList2(...);
     int appendBfndToList(...);
     int appendBfndToList1(...);
     int appendBfndToList2(...);
     int arraySymbol(...);
     int blobListLength(...);
     int buildLinearRep(...);
     int buildLinearRepSign(...);
     int convertToEnddoLoop(...);
     int countInStmtNode1(...);
     int countInStmtNode2(...);
     int exprListLength(...);
     int findBif(...);
     int findBifInList1(...);
     int findBifInList2(...);
     int firstBfndInList1(...);
     int firstBfndInList2(...);
     int firstInBfndList2(...);
     int getElementEvaluate(...);
     int getLastLabelId(...);
     int getNumberOfFunction(...);
     int getNumberOfStruct(...);
     int getTypeNumDimension(...);
     int hasNodeASymb(...);
     int hasTypeBaseType(...);
     int hasTypeSymbol(...);
     int inScope(...);
     int insertBfndInList1(...);
     int insertBfndInList2(...);
     int insertBfndListIn(...);
     int insertBfndListInList1(...);
     int isABifNode(...);
     int isAControlEnd(...);
     int isADeclBif(...);
     int isAEnumDeclBif(...);
     int isALoNode(...);
     int isAStructDeclBif(...);
     int isASymbNode(...);
     int isATypeNode(...);
     int isAUnionDeclBif(...);
     int isAtomicType(...);
     int isElementType(...);
     int isEnumType(...);
     int isInStmt(...);
     int isIntegerType(...);
     int isItInSection(...);
     int isNodeAConst(...);
     int isPointerType(...);
     int isStructType(...);
     int isTypeEquivalent(...);
     int isUnionType(...);
     int lenghtOfFieldList(...);
     int lenghtOfFieldListForType(...);
     int lenghtOfParamList(...);
     int localToFunction(...);
     int lookForTypeInType(...);
     int makeLinearExpr(...);
     int makeLinearExpr_Sign(...);
     int numberOfBifsInBlobList(...);
     int open_proj_toolbox(...);
     int open_proj_files_toolbox(...);
     int patternMatchExpression(...);
     int pointerType(...);
     int replaceTypeInType(...);
     int sameName(...);
     int* evaluateExpression(...);
     void Count_Bif_Next_Chain(...);
     void LibAddComment(...);
     void LibSetAllComments(...);
     //Kolganov 15.11.2017
     void LibDelAllComments(...);
     void LibconvertLogicIf(...);
     void LibreplaceSymbByExp(...);
     void LibreplaceSymbByExpInStmts(...);
     void LibreplaceWithStmt(...);
     void LibsaveDepFile(...);
     void Redo_Bif_Next_Chain(...);
     void Reset_Bif_Next(...);
     void Reset_Bif_Next_Chain(...);
     void Reset_Tool_Box(...);
     void SetCurrentFileTo(...);
     void UnparseBif(...);
     void UnparseLLND(...);
     void UnparseProgram(...);
     void addControlEndToList2(...);
     void addControlEndToStmt(...);
     void addElementEvaluate(...);
     void addSymbToFieldList(...);
     void allocateValueEvaluate(...);
     void appendSymbToArgList(...);
     void declareAVar(...);
     void declareAVarWPar(...);
     void duplicateAllSymbolDeclaredInStmt(...);
     void insertBfndBeforeIn(...);
     void insertSymbInArgList(...);
     void libFreeExpression(...);
     void make_a_malloc_stack(...);
     void myfree(...);
     void replaceSymbInExpression(...);
     void replaceSymbInExpressionSameName(...);
     void replaceSymbInStmts(...);
     void replaceSymbInStmtsSameName(...);
     void replaceTypeForSymb(...);
     void replaceTypeInExpression(...);
     void replaceTypeInStmts(...);
     void replaceTypeUsedInStmt(...);
     void resetDoVarForSymb(...);
     void resetFreeListForExpressionNode(...);
     void resetPresetEvaluate(...);
     void setFreeListForExpressionNode(...);
     void updateControlParent(...);
     void updateTypesAndSymbolsInBody(...);
     void writeDepFileInDebugdep(...);
     void updateTypeAndSymbolInStmts(...);
     void updateTypesAndSymbolsInBodyOfRoutine(...);
     char* UnparseBif_Char(...); 
	 char *UnparseLLND_Char(...);
     void UnparseProgram_ThroughAllocBuffer(...);
}

#pragma once

extern int staticShadowAnalysis;
extern int staticPrivateAnalysis;
extern int keepDvmDirectives;
extern int keepSpfDirs;
extern int consoleMode;
extern int parallizeFreeLoops;
extern int automaticDeprecateArrays;

extern "C" int out_free_form;

enum passes {
    UNROLL_LOOPS, //ordinal == 0
    CONVERT_TO_ENDDO,
    CORRECT_CODE_STYLE,
    CREATE_NESTED_LOOPS,
    REVERSE_CREATED_NESTED_LOOPS,
    UNPARSE_FILE,

    LOOP_ANALYZER_DATA_DIST_S1,
    LOOP_ANALYZER_DATA_DIST_S2,
    LOOP_ANALYZER_COMP_DIST,
    CREATE_TEMPLATE_LINKS,
    CREATE_DISTR_DIRS,
    CREATE_PARALLEL_DIRS,
    INSERT_PARALLEL_DIRS,
    INSERT_SHADOW_DIRS,
    EXTRACT_SHADOW_DIRS,
    CREATE_REMOTES,
    REMOVE_AND_CALC_SHADOW,
    TRANSFORM_SHADOW_IF_FULL,

    CALL_GRAPH,
    CALL_GRAPH2,
    LOOP_GRAPH,

    CODE_CHECKER_PASSES,
    VERIFY_ENDDO,
    VERIFY_INCLUDE,
    VERIFY_EQUIVALENCE,
    VERIFY_COMMON,
    PREPROC_SPF,
    EXTRACT_PARALLEL_DIRS,
    CORRECT_VAR_DECL,
    PREPROC_ALLOCATES,
    CHECK_FUNC_TO_INCLUDE,

    FIND_FUNC_TO_INCLUDE,
    ONLY_ARRAY_GRAPH,

    PRIVATE_ANALYSIS_SPF,
    PRIVATE_CALL_GRAPH_STAGE1,
    PRIVATE_CALL_GRAPH_STAGE2,
    PRIVATE_CALL_GRAPH_STAGE3,
    PRIVATE_CALL_GRAPH_STAGE4,

    FILL_PAR_REGIONS_LINES,
    CHECK_PAR_REGIONS,
    PRINT_PAR_REGIONS_ERRORS,
    RESOLVE_PAR_REGIONS,
    LOOP_DATA_DEPENDENCIES,
    INSERT_INCLUDES,
    REMOVE_DVM_DIRS,
    REMOVE_DVM_DIRS_TO_COMMENTS,
    VERIFY_DVM_DIRS,

    SUBST_EXPR,
    REVERT_SUBST_EXPR,
    SUBST_EXPR_AND_UNPARSE,

    GET_ALL_ARRAY_DECL,
    FILE_LINE_INFO,
    BUILD_INCLUDE_DEPENDENCIES,

    MACRO_EXPANSION,
    SWAP_ARRAY_DIMENSION,

    CONVERT_ASSIGN_TO_LOOP,
    CONVERT_LOOP_TO_ASSIGN,
    RESTORE_LOOP_FROM_ASSIGN,
    RESTORE_LOOP_FROM_ASSIGN_BACK,

    FILL_COMMON_BLOCKS,
    PREDICT_SCHEME,
    DEF_USE_STAGE1,
    DEF_USE_STAGE2,
    REVERT_SPF_DIRS,
    CLEAR_SPF_DIRS,

    CREATE_INTER_TREE,
    INSERT_INTER_TREE,

    SHADOW_GROUPING,
    INLINE_PROCEDURES,
    FILL_PARALLEL_REG_FOR_SUBS,
    ADD_TEMPL_TO_USE_ONLY,
    GCOV_PARSER,
    PRIVATE_ARRAYS_BREEDING,
    LOOPS_SPLITTER,
    CHECK_PAR_REG_DIR,

    EMPTY_PASS
};

enum algorithms {
    CREATE_DISTIBUTION,
    CREATE_ALIGNS,
    EMPTY_ALGO
};

enum optionNames {
    STATIC_SHADOW_ANALYSIS,
    STATIC_PRIVATE_ANALYSIS,
    FREE_FORM,
    KEEP_DVM_DIRECTIVES,
    KEEP_SPF_DIRECTIVES,
    PARALLIZE_FREE_LOOPS,
    EMPTY_OPTION
};

extern const char *passNames[EMPTY_PASS + 1];
extern bool passNamesWasInit;
static void setPassValues()
{
    if (passNamesWasInit)
        return;

    passNamesWasInit = true;
    passNames[UNROLL_LOOPS] = "UNROLL_LOOPS";
    passNames[CONVERT_TO_ENDDO] = "CONVERT_TO_ENDDO";
    passNames[CORRECT_CODE_STYLE] = "CORRECT_CODE_STYLE";
    passNames[LOOP_ANALYZER_DATA_DIST_S1] = "LOOP_ANALYZER_DATA_DIST_S1";
    passNames[LOOP_ANALYZER_DATA_DIST_S2] = "LOOP_ANALYZER_DATA_DIST_S2";
    passNames[LOOP_ANALYZER_COMP_DIST] = "LOOP_ANALYZER_COMP_DIST";
    passNames[CALL_GRAPH] = "CALL_GRAPH";
    passNames[LOOP_GRAPH] = "LOOP_GRAPH";
    passNames[VERIFY_ENDDO] = "VERIFY_ENDDO";
    passNames[VERIFY_INCLUDE] = "VERIFY_INCLUDE";
    passNames[VERIFY_EQUIVALENCE] = "VERIFY_EQUIVALENCE";
    passNames[VERIFY_COMMON] = "VERIFY_COMMON";
    passNames[FIND_FUNC_TO_INCLUDE] = "FIND_FUNC_TO_INCLUDE";
    passNames[CREATE_DISTR_DIRS] = "CREATE_DISTR_DIRS";
    passNames[CREATE_PARALLEL_DIRS] = "CREATE_PARALLEL_DIRS";
    passNames[INSERT_PARALLEL_DIRS] = "INSERT_PARALLEL_DIRS";
    passNames[ONLY_ARRAY_GRAPH] = "ONLY_ARRAY_GRAPH";
    passNames[PREPROC_SPF] = "PREPROC_SPF";
    passNames[EXTRACT_PARALLEL_DIRS] = "EXTRACT_PARALLEL_DIRS";
    passNames[CORRECT_VAR_DECL] = "CORRECT_VAR_DECL";
    passNames[PREPROC_ALLOCATES] = "PREPROC_ALLOCATES";
    passNames[CREATE_REMOTES] = "CREATE_REMOTES";
    passNames[PRIVATE_ANALYSIS_SPF] = "PRIVATE_ANALYSIS_SPF";
    passNames[PRIVATE_CALL_GRAPH_STAGE1] = "PRIVATE_CALL_GRAPH_STAGE1";
    passNames[PRIVATE_CALL_GRAPH_STAGE2] = "PRIVATE_CALL_GRAPH_STAGE2";
    passNames[PRIVATE_CALL_GRAPH_STAGE3] = "PRIVATE_CALL_GRAPH_STAGE3";
    passNames[FILL_PAR_REGIONS_LINES] = "FILL_PAR_REGIONS_LINES";
    passNames[CHECK_PAR_REGIONS] = "CHECK_PAR_REGIONS";
    passNames[RESOLVE_PAR_REGIONS] = "RESOLVE_PAR_REGIONS";
    passNames[LOOP_DATA_DEPENDENCIES] = "LOOP_DATA_DEPENDENCIES";
    passNames[INSERT_INCLUDES] = "INSERT_INCLUDES";
    passNames[REMOVE_DVM_DIRS] = "REMOVE_DVM_DIRS";
    passNames[VERIFY_DVM_DIRS] = "VERIFY_DVM_DIRS";
    passNames[SUBST_EXPR] = "SUBST_EXPR";
    passNames[CALL_GRAPH2] = "CALL_GRAPH2";
    passNames[REVERT_SUBST_EXPR] = "REVERT_SUBST_EXPR";
    passNames[CREATE_NESTED_LOOPS] = "CREATE_NESTED_LOOPS";
    passNames[UNPARSE_FILE] = "UNPARSE_FILE";
    passNames[CREATE_TEMPLATE_LINKS] = "CREATE_TEMPLATE_LINKS";
    passNames[CODE_CHECKER_PASSES] = "CODE_CHECKER_PASSES";
    passNames[CHECK_FUNC_TO_INCLUDE] = "CHECK_FUNC_TO_INCLUDE";
    passNames[GET_ALL_ARRAY_DECL] = "GET_ALL_ARRAY_DECL";
    passNames[INSERT_SHADOW_DIRS] = "INSERT_SHADOW_DIRS";
    passNames[EXTRACT_SHADOW_DIRS] = "EXTRACT_SHADOW_DIRS";
    passNames[FILE_LINE_INFO] = "FILE_LINE_INFO";
    passNames[SUBST_EXPR_AND_UNPARSE] = "SUBST_EXPR_AND_UNPARSE";
    passNames[BUILD_INCLUDE_DEPENDENCIES] = "BUILD_INCLUDE_DEPENDENCIES";
    passNames[EMPTY_PASS] = "EMPTY_PASS";
    passNames[REMOVE_AND_CALC_SHADOW] = "REMOVE_AND_CALC_SHADOW";
    passNames[TRANSFORM_SHADOW_IF_FULL] = "TRANSFORM_SHADOW_IF_FULL";
    passNames[MACRO_EXPANSION] = "MACRO_EXPANSION";
    passNames[SWAP_ARRAY_DIMENSION] = "SWAP_ARRAY_DIMENSION";
    passNames[REVERSE_CREATED_NESTED_LOOPS] = "REVERSE_CREATED_NESTED_LOOPS";
    passNames[CONVERT_ASSIGN_TO_LOOP] = "CONVERT_ASSIGN_TO_LOOP";
    passNames[CONVERT_LOOP_TO_ASSIGN] = "CONVERT_LOOP_TO_ASSIGN";
    passNames[PRIVATE_CALL_GRAPH_STAGE4] = "PRIVATE_CALL_GRAPH_STAGE4";
    passNames[FILL_COMMON_BLOCKS] = "FILL_COMMON_BLOCKS";
    passNames[PREDICT_SCHEME] = "PREDICT_SCHEME";
    passNames[DEF_USE_STAGE1] = "DEF_USE_STAGE1";
    passNames[DEF_USE_STAGE2] = "DEF_USE_STAGE2";
    passNames[REMOVE_DVM_DIRS_TO_COMMENTS] = "REMOVE_DVM_DIRS_TO_COMMENTS";
    passNames[REVERT_SPF_DIRS] = "REVERT_SPF_DIRS";
    passNames[CLEAR_SPF_DIRS] = "CLEAR_SPF_DIRS";
    passNames[RESTORE_LOOP_FROM_ASSIGN] = "RESTORE_LOOP_FROM_ASSIGN";
    passNames[RESTORE_LOOP_FROM_ASSIGN_BACK] = "RESTORE_LOOP_FROM_ASSIGN_BACK";
    passNames[INLINE_PROCEDURES] = "INLINE_PROCEDURES";
    passNames[SHADOW_GROUPING] = "SHADOW_GROUPING";
    passNames[PRINT_PAR_REGIONS_ERRORS] = "PRINT_PAR_REGIONS_ERRORS";
    passNames[FILL_PARALLEL_REG_FOR_SUBS] = "FILL_PARALLEL_REG_FOR_SUBS";
    passNames[ADD_TEMPL_TO_USE_ONLY] = "ADD_TEMPL_IN_USE";
    passNames[GCOV_PARSER] = "GCOV_PARSER";
    passNames[PRIVATE_ARRAYS_BREEDING] = "PRIVATE_ARRAYS_BREEDING";
    passNames[LOOPS_SPLITTER] = "LOOPS_SPLITTER";
    passNames[CHECK_PAR_REG_DIR] = "CHECK_PAR_REG_DIR";
    passNames[CREATE_INTER_TREE] = "CREATE_INTER_TREE";
    passNames[INSERT_INTER_TREE] = "INSERT_INTER_TREE";
}
void runPass(const int curr_regime, const char *proj_name = "dvm.proj", const char *folderName = NULL);

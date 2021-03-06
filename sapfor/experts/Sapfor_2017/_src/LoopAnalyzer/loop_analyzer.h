#pragma once

#include <map>
#include <string>
#include <tuple>
#include <vector>
#include <set>
#include "../GraphLoop/graph_loops.h"
#include "../GraphCall/graph_calls.h"
#include "../ParallelizationRegions/ParRegions.h"
#include "../SageAnalysisTool/depInterfaceExt.h"
#include "../Utils/AstWrapper.h"
#include "../Utils/SgUtils.h"

#include "dvm.h"

typedef std::pair<std::pair<int, int>, std::pair<int, int>> attrType;
namespace DIST = Distribution;

enum REGIME { DATA_DISTR, COMP_DISTR, REMOTE_ACC, PRIVATE_STEP4, UNDEF };
enum REMOTE_BOOL { REMOTE_NONE = 0, REMOTE_TRUE = 1, REMOTE_FALSE = 3};


//directive_creator.cpp
std::vector<std::vector<std::pair<std::string, std::vector<Expression*>>>>
createRealignRules(SgStatement* spStat, const uint64_t regId, SgFile* file, const std::string& templClone,
                  const std::map<DIST::Array*, std::set<DIST::Array*>>& arrayLinksByFuncCalls, const std::set<DIST::Array*>& usedArrays);

SgStatement* createStatFromExprs(const std::vector<Expression*>& exprs);

// loop_analyzer.cpp
bool checkExistence(SgExpression *exp, SgSymbol *doName);

void loopAnalyzer(SgFile *file, 
                  std::vector<ParallelRegion*> &regions,
                  std::map<std::tuple<int, std::string, std::string>, DIST::Array*> &createdArrays,
                  std::vector<Messages> &messagesForFile,
                  REGIME regime,
                  const std::map<std::string, std::vector<FuncInfo*>> &allFuncInfo,
                  const std::map<std::tuple<int, std::string, std::string>, std::pair<DIST::Array*, DIST::ArrayAccessInfo*>> &declaredArrays,
                  const std::map<SgStatement*, std::set<std::tuple<int, std::string, std::string>>> &declaratedArraysSt,
                  const std::map<DIST::Array*, std::set<DIST::Array*>> &arrayLinksByFuncCalls, 
                  const std::map<SgStatement*, std::vector<DefUseList>> &defUseByPlace,
                  bool skipDeps, std::vector<LoopGraph*> *loopGraph = NULL);
void arrayAccessAnalyzer(SgFile *file, std::vector<Messages> &messagesForFile, 
                         const std::map<std::tuple<int, std::string, std::string>, std::pair<DIST::Array*, DIST::ArrayAccessInfo*>> &declaredArrays, 
                         REGIME regime);

void processLoopInformationForFunction(std::map<LoopGraph*, std::map<DIST::Array*, const ArrayInfo*>> &loopInfo);
void addToDistributionGraph(const std::map<LoopGraph*, std::map<DIST::Array*, const ArrayInfo*>> &loopInfo, const std::map<DIST::Array*, std::set<DIST::Array*>> &arrayLinksByFuncCalls);

void printBlanks(const int sizeOfBlank, const int countOfBlanks);
bool isIntrinsic(const char *funName);

std::tuple<int, std::string, std::string> getUniqName(const std::map<std::string, SgStatement*> &commonBlocks, SgStatement *decl, SgSymbol *symb);
std::string getShortName(const std::tuple<int, std::string, std::string> &uniqKey);

void getAllDeclaredArrays(SgFile *file, std::map<std::tuple<int, std::string, std::string>, std::pair<DIST::Array*, DIST::ArrayAccessInfo*>> &declaredArrays,
                            std::map<SgStatement*, std::set<std::tuple<int, std::string, std::string>>> &declaratedArraysSt, std::vector<Messages> &currMessages,
                            const std::vector<ParallelRegion*> &regions, const std::map<std::string, int>& keyValueFromGUI);
void insertSpfAnalysisBeforeParalleLoops(const std::vector<LoopGraph*> &loops);
void recalculateArraySizes(std::set<DIST::Array*> &arraysDone, const std::set<DIST::Array*> &allArrays, const std::map<DIST::Array*, std::set<DIST::Array*>> &arrayLinksByFuncCalls, const std::map<std::string, std::vector<FuncInfo*>>& allFuncInfo);
int getSizeOfType(SgType* t);

// dep_analyzer.cpp
void tryToFindDependencies(LoopGraph *currLoop, const std::map<int, std::pair<SgForStmt*, std::pair<std::set<std::string>, std::set<std::string>>>> &allLoops,
                           std::set<SgStatement*> &funcWasInit, SgFile *file, std::vector<ParallelRegion*> regions, std::vector<Messages> *currMessages,
                           std::map<SgExpression*, std::string> &collection, const std::map<std::string, FuncInfo*> &allFuncs,
                           const std::map<SgStatement*, std::vector<DefUseList>> &defUseByPlace);
depGraph *getDependenciesGraph(LoopGraph *currLoop, SgFile *file, const std::set<std::string> *privVars = NULL);

// allocations_prepoc.cpp
void preprocess_allocates(SgFile *file);
void moveAllocatesInterproc(const std::map<DIST::Array*, std::set<DIST::Array*>>& arrayLinksByFuncCalls);

// insert_directive.cpp
void insertTempalteDeclarationToMainFile(SgFile *file, const DataDirective &dataDir,
                                         const std::map<std::string, std::string> &templateDeclInIncludes,
                                         const std::vector<std::string> &distrRules, const std::vector<std::vector<dist>> &distrRulesSt, 
                                         const DIST::Arrays<int> &allArrays,
                                         const bool extractDir, const uint64_t regionId,
                                         const std::set<std::string> &includedToThisFile);

void insertDirectiveToFile(SgFile *file, const char *fin_name, const std::vector<std::pair<int, std::pair<std::string, 
                           std::vector<Expression*>>>> &toInsert, const bool extractDir, std::vector<Messages> &messagesForFile);

void insertDistributionToFile(SgFile *file, const char *fin_name, const DataDirective &dataDir,
                              const std::set<std::string> &distrArrays, const std::vector<std::string> &distrRules,
                              const std::vector<std::vector<dist>> &distrRulesSt,
                              const std::vector<std::string> &alignRules, 
                              const std::map<std::string, std::vector<LoopGraph*>> &loopGraph,
                              const DIST::Arrays<int> &allArrays,
                              DIST::GraphCSR<int, double, attrType> &reducedG,
                              std::map<std::string, std::map<int, std::set<std::string>>> &commentsToInclude,
                              std::map<std::string, std::string> &templateDeclInIncludes,
                              const bool extractDir, std::vector<Messages> &messagesForFile,
                              const std::map<DIST::Array*, std::set<DIST::Array*>> &arrayLinksByFuncCalls,
                              const std::map<std::string, FuncInfo*>& funcsInFile,
                              const uint64_t regionId);

void insertShadowSpecToFile(SgFile *file, const char *fin_name, const std::set<std::string> &distrArrays,
                            DIST::GraphCSR<int, double, attrType> &reducedG,
                            std::map<std::string, std::map<int, std::set<std::string>>> &commentsToInclude,
                            const bool extractDir, std::vector<Messages> &messagesForFile,
                            const std::map<std::tuple<int, std::string, std::string>, std::pair<DIST::Array*, DIST::ArrayAccessInfo*>> &declaredArrays);

void insertDistributionToFile(const char *origFile, const char *outFile, const std::map<int, std::set<std::string>> &commentsToInclude);
void removeDvmDirectives(SgFile *file, const bool toComment);

void insertDistributeDirsToParallelRegions(const std::vector<ParallelRegionLines> *currLines,
                                           const std::vector<Statement*> &reDistrRulesBefore,
                                           const std::vector<Statement*> &reDistrRulesAfter,
                                           const std::vector<Statement*> &reAlignRules);

void insertTemplateModuleUse(SgFile* file, const std::set<uint64_t> &regNum, const std::map<DIST::Array*, std::set<DIST::Array*>>& arrayLinksByFuncCalls);
void removeStatementsFromAllproject(const std::set<int>& variants);
void correctTemplateModuleDeclaration(const std::string& folderName);

// spf_directive_preproc.cpp
bool preprocess_spf_dirs(SgFile *file, const std::map<std::string, CommonBlock> &commonBlocks, std::vector<Messages> &messagesForFile, const std::set<std::string>& allFileNames);
bool check_par_reg_dirs(SgFile *file, std::vector<Messages> &messagesForFile);

void revertion_spf_dirs(SgFile *file, 
                        std::map<std::tuple<int, std::string, std::string>, std::pair<DIST::Array*, DIST::ArrayAccessInfo*>> declaredArrays,
                        std::map<SgStatement*, std::set<std::tuple<int, std::string, std::string>>> declaratedArraysSt);
void addAcrossToLoops(LoopGraph *topLoop, const std::map<SgSymbol*, std::tuple<int, int, int>> &acrossToAdd, 
                      const std::map<int, SgForStmt*> &allLoops, 
                      std::vector<Messages> &currMessages);
void addPrivatesToLoops(LoopGraph *currLoop, const std::vector<const depNode*> &privatesToAdd, 
                        const std::map<int, SgForStmt*> &allLoops, 
                        std::vector<Messages> &currMessages);
void addReductionsToLoops(LoopGraph *currLoop, const std::vector<const depNode*> &reductionsToAdd, 
                          const std::map<int, SgForStmt*> &allLoops, 
                          std::vector<Messages> &currMessages);
void fillVars(SgExpression *exp, const std::set<int> &types, std::set<SgSymbol*> &identifierList, std::vector<SgExpression*> &funcCalls);

// remote_access.cpp
bool isNeedToConvertIfCondition(SgExpression* ex);
void addRemotesToDir(const std::pair<SgForStmt*, LoopGraph*> *under_dvm_dir, const std::map<std::string, SgArrayRefExp*> &uniqRemotes);
void createRemoteInParallel(const std::tuple<SgForStmt*, const LoopGraph*, const ParallelDirective*> &under_dvm_dir,
                            const DIST::Arrays<int> &allArrays,
                            const std::map<SgForStmt*, std::map<SgSymbol*, ArrayInfo>> &loopInfo,
                            DIST::GraphCSR<int, double, attrType> &reducedG,
                            const DataDirective &data,
                            const std::vector<int> &currVar,
                            const std::map<int, std::pair<SgForStmt*, std::pair<std::set<std::string>, std::set<std::string>>>> &allLoops,
                            std::map<std::string, SgArrayRefExp*> &uniqRemotes,
                            std::vector<Messages> &messages,
                            const uint64_t regionId,
                            const std::map<DIST::Array*, std::set<DIST::Array*>> &arrayLinksByFuncCalls,
                            std::set<DIST::Array*>& doneInLoops);
void createRemoteInParallel(const std::tuple<SgForStmt*, const LoopGraph*, const ParallelDirective*>& under_dvm_dir,
                            const std::set<DIST::Array*>& doneInLoops,
                            std::map<std::string, SgArrayRefExp*>& uniqRemotes, std::vector<Messages>& messages);

template<int NUM> bool createRemoteDir(SgStatement *st, const std::map<int, LoopGraph*> &sortedLoopGraph, const DIST::Arrays<int> &allArrays, 
                                       const DataDirective &data, const std::vector<int> &currVar, const uint64_t regionId, std::vector<Messages> &currMessages,
                                       const std::map<DIST::Array*, std::set<DIST::Array*>> &arrayLinksByFuncCalls);

// shadow.cpp
void devourShadowByRemote(SgFile *file, const std::map<DIST::Array*, std::set<DIST::Array*>> &arrayLinksByFuncCalls);
void transformShadowIfFull(SgFile *file, const std::map<DIST::Array*, std::set<DIST::Array*>> &arrayLinksByFuncCalls);

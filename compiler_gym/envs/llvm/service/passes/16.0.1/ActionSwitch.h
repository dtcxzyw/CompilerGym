#define HANDLE_ACTION(action, handlePass)                               \
  switch (action) {                                                     \
    case LlvmAction::ADD_DISCRIMINATORS:                                \
      handlePass(llvm::createAddDiscriminatorsPass());                  \
      break;                                                            \
    case LlvmAction::ADCE:                                              \
      handlePass(llvm::createAggressiveDCEPass());                      \
      break;                                                            \
    case LlvmAction::ALIGNMENT_FROM_ASSUMPTIONS:                        \
      handlePass(llvm::createAlignmentFromAssumptionsPass());           \
      break;                                                            \
    case LlvmAction::ALWAYS_INLINE:                                     \
      handlePass(llvm::createAlwaysInlinerLegacyPass());                \
      break;                                                            \
    case LlvmAction::ANNOTATION2METADATA:                               \
      handlePass(llvm::createAnnotation2MetadataLegacy());              \
      break;                                                            \
    case LlvmAction::ASSUME_BUILDER:                                    \
      handlePass(llvm::createAssumeBuilderPassLegacyPass());            \
      break;                                                            \
    case LlvmAction::ASSUME_SIMPLIFY:                                   \
      handlePass(llvm::createAssumeSimplifyPassLegacyPass());           \
      break;                                                            \
    case LlvmAction::ATTRIBUTOR_CGSCC:                                  \
      handlePass(llvm::createAttributorCGSCCLegacyPass());              \
      break;                                                            \
    case LlvmAction::ATTRIBUTOR:                                        \
      handlePass(llvm::createAttributorLegacyPass());                   \
      break;                                                            \
    case LlvmAction::BARRIER:                                           \
      handlePass(llvm::createBarrierNoopPass());                        \
      break;                                                            \
    case LlvmAction::BDCE:                                              \
      handlePass(llvm::createBitTrackingDCEPass());                     \
      break;                                                            \
    case LlvmAction::BREAK_CRIT_EDGES:                                  \
      handlePass(llvm::createBreakCriticalEdgesPass());                 \
      break;                                                            \
    case LlvmAction::SIMPLIFYCFG:                                       \
      handlePass(llvm::createCFGSimplificationPass());                  \
      break;                                                            \
    case LlvmAction::CALLSITE_SPLITTING:                                \
      handlePass(llvm::createCallSiteSplittingPass());                  \
      break;                                                            \
    case LlvmAction::CALLED_VALUE_PROPAGATION:                          \
      handlePass(llvm::createCalledValuePropagationPass());             \
      break;                                                            \
    case LlvmAction::CANON_FREEZE:                                      \
      handlePass(llvm::createCanonicalizeFreezeInLoops());              \
      break;                                                            \
    case LlvmAction::CONSTHOIST:                                        \
      handlePass(llvm::createConstantHoistingPass());                   \
      break;                                                            \
    case LlvmAction::CONSTMERGE:                                        \
      handlePass(llvm::createConstantMergePass());                      \
      break;                                                            \
    case LlvmAction::CORRELATED_PROPAGATION:                            \
      handlePass(llvm::createCorrelatedValuePropagationPass());         \
      break;                                                            \
    case LlvmAction::CROSS_DSO_CFI:                                     \
      handlePass(llvm::createCrossDSOCFIPass());                        \
      break;                                                            \
    case LlvmAction::DFA_JUMP_THREADING:                                \
      handlePass(llvm::createDFAJumpThreadingLegacyPass());             \
      break;                                                            \
    case LlvmAction::DEADARGELIM:                                       \
      handlePass(llvm::createDeadArgEliminationPass());                 \
      break;                                                            \
    case LlvmAction::DCE:                                               \
      handlePass(llvm::createDeadCodeEliminationPass());                \
      break;                                                            \
    case LlvmAction::DSE:                                               \
      handlePass(llvm::createDeadStoreEliminationPass());               \
      break;                                                            \
    case LlvmAction::DIV_REM_PAIRS:                                     \
      handlePass(llvm::createDivRemPairsPass());                        \
      break;                                                            \
    case LlvmAction::EARLY_CSE_MEMSSA:                                  \
      handlePass(llvm::createEarlyCSEMemSSAPass());                     \
      break;                                                            \
    case LlvmAction::EARLY_CSE:                                         \
      handlePass(llvm::createEarlyCSEPass());                           \
      break;                                                            \
    case LlvmAction::ELIM_AVAIL_EXTERN:                                 \
      handlePass(llvm::createEliminateAvailableExternallyPass());       \
      break;                                                            \
    case LlvmAction::FIX_IRREDUCIBLE:                                   \
      handlePass(llvm::createFixIrreducible());                         \
      break;                                                            \
    case LlvmAction::FLATTENCFG:                                        \
      handlePass(llvm::createFlattenCFGLegacyPass());                   \
      break;                                                            \
    case LlvmAction::FLOAT2INT:                                         \
      handlePass(llvm::createFloat2IntPass());                          \
      break;                                                            \
    case LlvmAction::FORCEATTRS:                                        \
      handlePass(llvm::createForceFunctionAttrsLegacyPass());           \
      break;                                                            \
    case LlvmAction::INLINE:                                            \
      handlePass(llvm::createFunctionInliningPass());                   \
      break;                                                            \
    case LlvmAction::GVN_HOIST:                                         \
      handlePass(llvm::createGVNHoistPass());                           \
      break;                                                            \
    case LlvmAction::GVN:                                               \
      handlePass(llvm::createGVNPass());                                \
      break;                                                            \
    case LlvmAction::GLOBALDCE:                                         \
      handlePass(llvm::createGlobalDCEPass());                          \
      break;                                                            \
    case LlvmAction::GLOBALOPT:                                         \
      handlePass(llvm::createGlobalOptimizerPass());                    \
      break;                                                            \
    case LlvmAction::GLOBALSPLIT:                                       \
      handlePass(llvm::createGlobalSplitPass());                        \
      break;                                                            \
    case LlvmAction::GUARD_WIDENING:                                    \
      handlePass(llvm::createGuardWideningPass());                      \
      break;                                                            \
    case LlvmAction::HOTCOLDSPLIT:                                      \
      handlePass(llvm::createHotColdSplittingPass());                   \
      break;                                                            \
    case LlvmAction::IPSCCP:                                            \
      handlePass(llvm::createIPSCCPPass());                             \
      break;                                                            \
    case LlvmAction::IROUTLINER:                                        \
      handlePass(llvm::createIROutlinerLegacyPass());                   \
      break;                                                            \
    case LlvmAction::INDVARS:                                           \
      handlePass(llvm::createIndVarSimplifyPass());                     \
      break;                                                            \
    case LlvmAction::IRCE:                                              \
      handlePass(llvm::createInductiveRangeCheckEliminationPass());     \
      break;                                                            \
    case LlvmAction::INFER_ADDRESS_SPACES:                              \
      handlePass(llvm::createInferAddressSpacesPass());                 \
      break;                                                            \
    case LlvmAction::INFERATTRS:                                        \
      handlePass(llvm::createInferFunctionAttrsLegacyPass());           \
      break;                                                            \
    case LlvmAction::INJECT_TLI_MAPPINGS:                               \
      handlePass(llvm::createInjectTLIMappingsLegacyPass());            \
      break;                                                            \
    case LlvmAction::INSTSIMPLIFY:                                      \
      handlePass(llvm::createInstSimplifyLegacyPass());                 \
      break;                                                            \
    case LlvmAction::INSTCOMBINE:                                       \
      handlePass(llvm::createInstructionCombiningPass());               \
      break;                                                            \
    case LlvmAction::INSTNAMER:                                         \
      handlePass(llvm::createInstructionNamerPass());                   \
      break;                                                            \
    case LlvmAction::JUMP_THREADING:                                    \
      handlePass(llvm::createJumpThreadingPass());                      \
      break;                                                            \
    case LlvmAction::LCSSA:                                             \
      handlePass(llvm::createLCSSAPass());                              \
      break;                                                            \
    case LlvmAction::LICM:                                              \
      handlePass(llvm::createLICMPass());                               \
      break;                                                            \
    case LlvmAction::LIBCALLS_SHRINKWRAP:                               \
      handlePass(llvm::createLibCallsShrinkWrapPass());                 \
      break;                                                            \
    case LlvmAction::LOAD_STORE_VECTORIZER:                             \
      handlePass(llvm::createLoadStoreVectorizerPass());                \
      break;                                                            \
    case LlvmAction::LOOP_DATA_PREFETCH:                                \
      handlePass(llvm::createLoopDataPrefetchPass());                   \
      break;                                                            \
    case LlvmAction::LOOP_DELETION:                                     \
      handlePass(llvm::createLoopDeletionPass());                       \
      break;                                                            \
    case LlvmAction::LOOP_DISTRIBUTE:                                   \
      handlePass(llvm::createLoopDistributePass());                     \
      break;                                                            \
    case LlvmAction::LOOP_EXTRACT:                                      \
      handlePass(llvm::createLoopExtractorLegacyPass());                \
      break;                                                            \
    case LlvmAction::LOOP_FLATTEN:                                      \
      handlePass(llvm::createLoopFlattenLegacyPass());                  \
      break;                                                            \
    case LlvmAction::LOOP_FUSION:                                       \
      handlePass(llvm::createLoopFusePass());                           \
      break;                                                            \
    case LlvmAction::LOOP_GUARD_WIDENING:                               \
      handlePass(llvm::createLoopGuardWideningPass());                  \
      break;                                                            \
    case LlvmAction::LOOP_IDIOM:                                        \
      handlePass(llvm::createLoopIdiomPass());                          \
      break;                                                            \
    case LlvmAction::LOOP_INSTSIMPLIFY:                                 \
      handlePass(llvm::createLoopInstSimplifyPass());                   \
      break;                                                            \
    case LlvmAction::LOOP_INTERCHANGE:                                  \
      handlePass(llvm::createLoopInterchangeLegacyPass());              \
      break;                                                            \
    case LlvmAction::LOOP_LOAD_ELIM:                                    \
      handlePass(llvm::createLoopLoadEliminationPass());                \
      break;                                                            \
    case LlvmAction::LOOP_PREDICATION:                                  \
      handlePass(llvm::createLoopPredicationPass());                    \
      break;                                                            \
    case LlvmAction::LOOP_REROLL:                                       \
      handlePass(llvm::createLoopRerollLegacyPass());                   \
      break;                                                            \
    case LlvmAction::LOOP_ROTATE:                                       \
      handlePass(llvm::createLoopRotatePass());                         \
      break;                                                            \
    case LlvmAction::LOOP_SIMPLIFYCFG:                                  \
      handlePass(llvm::createLoopSimplifyCFGPass());                    \
      break;                                                            \
    case LlvmAction::LOOP_SIMPLIFY:                                     \
      handlePass(llvm::createLoopSimplifyPass());                       \
      break;                                                            \
    case LlvmAction::LOOP_SINK:                                         \
      handlePass(llvm::createLoopSinkPass());                           \
      break;                                                            \
    case LlvmAction::LOOP_REDUCE:                                       \
      handlePass(llvm::createLoopStrengthReducePass());                 \
      break;                                                            \
    case LlvmAction::LOOP_UNROLL_AND_JAM:                               \
      handlePass(llvm::createLoopUnrollAndJamPass());                   \
      break;                                                            \
    case LlvmAction::LOOP_UNROLL:                                       \
      handlePass(llvm::createLoopUnrollPass());                         \
      break;                                                            \
    case LlvmAction::LOOP_VECTORIZE:                                    \
      handlePass(llvm::createLoopVectorizePass());                      \
      break;                                                            \
    case LlvmAction::LOOP_VERSIONING_LICM:                              \
      handlePass(llvm::createLoopVersioningLICMLegacyPass());           \
      break;                                                            \
    case LlvmAction::LOOP_VERSIONING:                                   \
      handlePass(llvm::createLoopVersioningLegacyPass());               \
      break;                                                            \
    case LlvmAction::LOWERATOMIC:                                       \
      handlePass(llvm::createLowerAtomicPass());                        \
      break;                                                            \
    case LlvmAction::LOWER_CONSTANT_INTRINSICS:                         \
      handlePass(llvm::createLowerConstantIntrinsicsPass());            \
      break;                                                            \
    case LlvmAction::LOWER_EXPECT:                                      \
      handlePass(llvm::createLowerExpectIntrinsicPass());               \
      break;                                                            \
    case LlvmAction::LOWER_GLOBAL_DTORS:                                \
      handlePass(llvm::createLowerGlobalDtorsLegacyPass());             \
      break;                                                            \
    case LlvmAction::LOWER_GUARD_INTRINSIC:                             \
      handlePass(llvm::createLowerGuardIntrinsicPass());                \
      break;                                                            \
    case LlvmAction::LOWERINVOKE:                                       \
      handlePass(llvm::createLowerInvokePass());                        \
      break;                                                            \
    case LlvmAction::LOWER_MATRIX_INTRINSICS_MINIMAL:                   \
      handlePass(llvm::createLowerMatrixIntrinsicsMinimalLegacyPass()); \
      break;                                                            \
    case LlvmAction::LOWER_MATRIX_INTRINSICS:                           \
      handlePass(llvm::createLowerMatrixIntrinsicsPass());              \
      break;                                                            \
    case LlvmAction::LOWERSWITCH:                                       \
      handlePass(llvm::createLowerSwitchLegacyPass());                  \
      break;                                                            \
    case LlvmAction::LOWER_WIDENABLE_CONDITION:                         \
      handlePass(llvm::createLowerWidenableConditionPass());            \
      break;                                                            \
    case LlvmAction::MEMCPYOPT:                                         \
      handlePass(llvm::createMemCpyOptPass());                          \
      break;                                                            \
    case LlvmAction::MERGEFUNC:                                         \
      handlePass(llvm::createMergeFunctionsPass());                     \
      break;                                                            \
    case LlvmAction::MERGEICMPS:                                        \
      handlePass(llvm::createMergeICmpsLegacyPass());                   \
      break;                                                            \
    case LlvmAction::MLDST_MOTION:                                      \
      handlePass(llvm::createMergedLoadStoreMotionPass());              \
      break;                                                            \
    case LlvmAction::NARY_REASSOCIATE:                                  \
      handlePass(llvm::createNaryReassociatePass());                    \
      break;                                                            \
    case LlvmAction::NEWGVN:                                            \
      handlePass(llvm::createNewGVNPass());                             \
      break;                                                            \
    case LlvmAction::OBJC_ARC_CONTRACT:                                 \
      handlePass(llvm::createObjCARCContractLegacyPass());              \
      break;                                                            \
    case LlvmAction::PARTIAL_INLINER:                                   \
      handlePass(llvm::createPartialInliningPass());                    \
      break;                                                            \
    case LlvmAction::PARTIALLY_INLINE_LIBCALLS:                         \
      handlePass(llvm::createPartiallyInlineLibCallsPass());            \
      break;                                                            \
    case LlvmAction::FUNCTION_ATTRS:                                    \
      handlePass(llvm::createPostOrderFunctionAttrsLegacyPass());       \
      break;                                                            \
    case LlvmAction::MEM2REG:                                           \
      handlePass(llvm::createPromoteMemoryToRegisterPass());            \
      break;                                                            \
    case LlvmAction::REASSOCIATE:                                       \
      handlePass(llvm::createReassociatePass());                        \
      break;                                                            \
    case LlvmAction::REDUNDANT_DBG_INST_ELIM:                           \
      handlePass(llvm::createRedundantDbgInstEliminationPass());        \
      break;                                                            \
    case LlvmAction::REG2MEM:                                           \
      handlePass(llvm::createRegToMemLegacy());                         \
      break;                                                            \
    case LlvmAction::RPO_FUNCTION_ATTRS:                                \
      handlePass(llvm::createReversePostOrderFunctionAttrsPass());      \
      break;                                                            \
    case LlvmAction::REWRITE_STATEPOINTS_FOR_GC:                        \
      handlePass(llvm::createRewriteStatepointsForGCLegacyPass());      \
      break;                                                            \
    case LlvmAction::SCCP:                                              \
      handlePass(llvm::createSCCPPass());                               \
      break;                                                            \
    case LlvmAction::SLP_VECTORIZER:                                    \
      handlePass(llvm::createSLPVectorizerPass());                      \
      break;                                                            \
    case LlvmAction::SROA:                                              \
      handlePass(llvm::createSROAPass());                               \
      break;                                                            \
    case LlvmAction::SCALARIZE_MASKED_MEM_INTRIN:                       \
      handlePass(llvm::createScalarizeMaskedMemIntrinLegacyPass());     \
      break;                                                            \
    case LlvmAction::SCALARIZER:                                        \
      handlePass(llvm::createScalarizerPass());                         \
      break;                                                            \
    case LlvmAction::SEPARATE_CONST_OFFSET_FROM_GEP:                    \
      handlePass(llvm::createSeparateConstOffsetFromGEPLegacyPass());   \
      break;                                                            \
    case LlvmAction::SIMPLE_LOOP_UNSWITCH:                              \
      handlePass(llvm::createSimpleLoopUnswitchLegacyPass());           \
      break;                                                            \
    case LlvmAction::SINK:                                              \
      handlePass(llvm::createSinkingPass());                            \
      break;                                                            \
    case LlvmAction::SPECULATIVE_EXECUTION:                             \
      handlePass(llvm::createSpeculativeExecutionPass());               \
      break;                                                            \
    case LlvmAction::SLSR:                                              \
      handlePass(llvm::createStraightLineStrengthReduceLegacyPass());   \
      break;                                                            \
    case LlvmAction::STRIP_DEAD_PROTOTYPES:                             \
      handlePass(llvm::createStripDeadPrototypesPass());                \
      break;                                                            \
    case LlvmAction::STRIP_DEBUG_DECLARE:                               \
      handlePass(llvm::createStripDebugDeclarePass());                  \
      break;                                                            \
    case LlvmAction::STRIP_GC_RELOCATES:                                \
      handlePass(llvm::createStripGCRelocatesLegacy());                 \
      break;                                                            \
    case LlvmAction::STRIP_NONDEBUG:                                    \
      handlePass(llvm::createStripNonDebugSymbolsPass());               \
      break;                                                            \
    case LlvmAction::STRIP_NONLINETABLE_DEBUGINFO:                      \
      handlePass(llvm::createStripNonLineTableDebugLegacyPass());       \
      break;                                                            \
    case LlvmAction::STRIP:                                             \
      handlePass(llvm::createStripSymbolsPass());                       \
      break;                                                            \
    case LlvmAction::STRUCTURIZECFG:                                    \
      handlePass(llvm::createStructurizeCFGLegacyPass());               \
      break;                                                            \
    case LlvmAction::TLSHOIST:                                          \
      handlePass(llvm::createTLSVariableHoistLegacyPass());             \
      break;                                                            \
    case LlvmAction::TAILCALLELIM:                                      \
      handlePass(llvm::createTailCallEliminationPass());                \
      break;                                                            \
    case LlvmAction::MERGERETURN:                                       \
      handlePass(llvm::createUnifyFunctionExitNodesLegacyPass());       \
      break;                                                            \
    case LlvmAction::UNIFY_LOOP_EXITS:                                  \
      handlePass(llvm::createUnifyLoopExitsLegacyPass());               \
      break;                                                            \
    case LlvmAction::VECTOR_COMBINE:                                    \
      handlePass(llvm::createVectorCombineLegacyPass());                \
      break;                                                            \
  }

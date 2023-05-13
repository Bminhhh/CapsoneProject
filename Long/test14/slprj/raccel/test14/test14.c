#include "test14.h"
#include "rtwtypes.h"
#include <string.h>
#include <stddef.h>
#include "test14_private.h"
#include "rt_logging_mmi.h"
#include "test14_capi.h"
#include "test14_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 1 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "10.6 (R2022b) 13-May-2022" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; void MdlStart ( void ) { CXPtMax * _rtXPerturbMax ; CXPtMin *
_rtXPerturbMin ; NeModelParameters modelParameters ; NeModelParameters
modelParameters_p ; NeslSimulationData * simulationData ; NeslSimulator * tmp
; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree *
diagnosticTree ; NeuDiagnosticTree * diagnosticTree_e ; NeuDiagnosticTree *
diagnosticTree_p ; char * msg ; char * msg_e ; char * msg_p ; real_T tmp_m [
12 ] ; real_T time ; real_T tmp_e ; int32_T tmp_i ; int_T tmp_g [ 4 ] ;
boolean_T tmp_p ; boolean_T val ; { bool externalInputIsInDatasetFormat =
false ; void * pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} _rtXPerturbMax = ( ( CXPtMax * ) ssGetJacobianPerturbationBoundsMaxVec (
rtS ) ) ; _rtXPerturbMin = ( ( CXPtMin * )
ssGetJacobianPerturbationBoundsMinVec ( rtS ) ) ; { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Steering Dynamics:1" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Steering Dynamics:1" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "test14/To Workspace" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars (
"Steering Dynamics:1" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; rtDW . lrcusptm13 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"4ab60e34-634d-4dcc-a5ad-4fea073c9420" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . lrcusptm13 . AQHandles , hDT , & srcInfo ) ; if ( rtDW . lrcusptm13 .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . lrcusptm13 . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
lrcusptm13 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . lrcusptm13 .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . lrcusptm13 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . lrcusptm13 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . lrcusptm13 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"simout" ) ; sdiRegisterWksVariable ( rtDW . lrcusptm13 . AQHandles , varName
, "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Steering Dynamics:2" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Steering Dynamics:2" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "test14/To Workspace1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars (
"Steering Dynamics:2" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; rtDW . m2vfa514pt . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"fd952b36-ded0-4f8e-aaa1-baaed4966742" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . m2vfa514pt . AQHandles , hDT , & srcInfo ) ; if ( rtDW . m2vfa514pt .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . m2vfa514pt . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
m2vfa514pt . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . m2vfa514pt .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . m2vfa514pt . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . m2vfa514pt . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . m2vfa514pt . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"data" ) ; sdiRegisterWksVariable ( rtDW . m2vfa514pt . AQHandles , varName ,
"array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Steering angle left (rad)" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "Steering angle left (rad)" )
; sdiLabelU propName = sdiGetLabelFromChars ( "Steering angle left (rad)" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
"test14/Steering Dynamics/Sensing /To Workspace" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars (
"Steering angle left (rad)" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; rtDW . lrcusptm13y . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"17bf1f92-3655-4077-8375-80c44a0ceca2" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . lrcusptm13y . AQHandles , hDT , & srcInfo ) ; if ( rtDW . lrcusptm13y
. AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . lrcusptm13y . AQHandles
, "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
lrcusptm13y . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . lrcusptm13y .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . lrcusptm13y . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName
( rtDW . lrcusptm13y . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . lrcusptm13y . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"left" ) ; sdiRegisterWksVariable ( rtDW . lrcusptm13y . AQHandles , varName
, "struct" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Steering angle right (rad)" )
; sdiLabelU origSigName = sdiGetLabelFromChars ( "Steering angle right (rad)"
) ; sdiLabelU propName = sdiGetLabelFromChars ( "Steering angle right (rad)"
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"test14/Steering Dynamics/Sensing /To Workspace1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars (
"Steering angle right (rad)" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims .
nDims = 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems
= 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo .
SID = ( sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo .
portIndex = 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID
= 0 ; rtDW . m2vfa514pte . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"08fd78fd-dd40-47f4-882c-fcdf4931948c" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "rad" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . m2vfa514pte . AQHandles , hDT , & srcInfo ) ; if ( rtDW . m2vfa514pte
. AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . m2vfa514pte . AQHandles
, "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
m2vfa514pte . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . m2vfa514pte .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . m2vfa514pte . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName
( rtDW . m2vfa514pte . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . m2vfa514pte . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"right" ) ; sdiRegisterWksVariable ( rtDW . m2vfa514pte . AQHandles , varName
, "struct" ) ; sdiFreeLabel ( varName ) ; } } } } } tmp =
nesl_lease_simulator (
"test14/Steering Dynamics/World/Solver Configuration_1" , 0 , 0 ) ; rtDW .
puakpty0gl = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW . puakpty0gl ) ;
if ( tmp_p ) { test14_9449aeaa_1_gateway ( ) ; tmp = nesl_lease_simulator (
"test14/Steering Dynamics/World/Solver Configuration_1" , 0 , 0 ) ; rtDW .
puakpty0gl = ( void * ) tmp ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"test14/Steering Dynamics/World/Solver Configuration_100" , ( void * * ) ( &
rtDW . puakpty0gl ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; simulationData = nesl_create_simulation_data ( ) ;
rtDW . bgy1ywvlrc = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . bvsbzhcijz = ( void * ) diagnosticManager
; modelParameters . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters .
mSolverAbsTol = 0.001 ; modelParameters . mSolverRelTol = 0.001 ;
modelParameters . mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_MAYBE ;
modelParameters . mStartTime = 0.0 ; modelParameters . mLoadInitialState =
false ; modelParameters . mUseSimState = false ; modelParameters .
mLinTrimCompile = false ; modelParameters . mLoggingMode = SSC_LOGGING_NONE ;
modelParameters . mRTWModifiedTimeStamp = 6.05419172E+8 ; modelParameters .
mZcDisabled = false ; tmp_e = 0.001 ; modelParameters . mSolverTolerance =
tmp_e ; tmp_e = 0.0 ; modelParameters . mFixedStepSize = tmp_e ; tmp_p = true
; modelParameters . mVariableStepSolver = tmp_p ; tmp_p = false ;
modelParameters . mIsUsingODEN = tmp_p ; tmp_p =
slIsRapidAcceleratorSimulating ( ) ; val = ssGetGlobalInitialStatesAvailable
( rtS ) ; if ( tmp_p ) { val = ( val && ssIsFirstInitCond ( rtS ) ) ; }
modelParameters . mLoadInitialState = val ; modelParameters . mZcDisabled =
false ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . bvsbzhcijz ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . puakpty0gl
, & modelParameters , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . bgy1ywvlrc ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 20 ;
simulationData -> mData -> mContStates . mX = & rtX . j0i3i5ib1k [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . joypi0icuk ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
o2ji33fn0m ; tmp_p = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS
) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp_p
; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
tmp_p = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp_p ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_g [ 0 ] = 0 ;
tmp_m [ 0 ] = rtB . c10gnxoqj0 [ 0 ] ; tmp_m [ 1 ] = rtB . c10gnxoqj0 [ 1 ] ;
tmp_m [ 2 ] = rtB . c10gnxoqj0 [ 2 ] ; tmp_m [ 3 ] = rtB . c10gnxoqj0 [ 3 ] ;
tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = rtB . c0bnf5ncua [ 0 ] ; tmp_m [ 5 ] = rtB .
c0bnf5ncua [ 1 ] ; tmp_m [ 6 ] = rtB . c0bnf5ncua [ 2 ] ; tmp_m [ 7 ] = rtB .
c0bnf5ncua [ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . ov4daa2idk [ 0 ] ;
tmp_m [ 9 ] = rtB . ov4daa2idk [ 1 ] ; tmp_m [ 10 ] = rtB . ov4daa2idk [ 2 ]
; tmp_m [ 11 ] = rtB . ov4daa2idk [ 3 ] ; tmp_g [ 3 ] = 12 ; simulationData
-> mData -> mInputValues . mN = 12 ; simulationData -> mData -> mInputValues
. mX = & tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mNumjacDxLo . mN = 20 ; simulationData -> mData ->
mNumjacDxLo . mX = & _rtXPerturbMin -> j0i3i5ib1k [ 0 ] ; simulationData ->
mData -> mNumjacDxHi . mN = 20 ; simulationData -> mData -> mNumjacDxHi . mX
= & _rtXPerturbMax -> j0i3i5ib1k [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . bvsbzhcijz ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . puakpty0gl ,
NESL_SIM_NUMJAC_DX_BOUNDS , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus
( rtS , msg_p ) ; } } tmp = nesl_lease_simulator (
"test14/Steering Dynamics/World/Solver Configuration_1" , 1 , 0 ) ; rtDW .
ho0c1mkpts = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW . ho0c1mkpts ) ;
if ( tmp_p ) { test14_9449aeaa_1_gateway ( ) ; tmp = nesl_lease_simulator (
"test14/Steering Dynamics/World/Solver Configuration_1" , 1 , 0 ) ; rtDW .
ho0c1mkpts = ( void * ) tmp ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"test14/Steering Dynamics/World/Solver Configuration_110" , ( void * * ) ( &
rtDW . ho0c1mkpts ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; simulationData = nesl_create_simulation_data ( ) ;
rtDW . fevgbksbvp = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . iocl5xhili = ( void * ) diagnosticManager
; modelParameters_p . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters_p .
mSolverAbsTol = 0.001 ; modelParameters_p . mSolverRelTol = 0.001 ;
modelParameters_p . mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_MAYBE ;
modelParameters_p . mStartTime = 0.0 ; modelParameters_p . mLoadInitialState
= false ; modelParameters_p . mUseSimState = false ; modelParameters_p .
mLinTrimCompile = false ; modelParameters_p . mLoggingMode = SSC_LOGGING_NONE
; modelParameters_p . mRTWModifiedTimeStamp = 6.05419172E+8 ;
modelParameters_p . mZcDisabled = false ; tmp_e = 0.001 ; modelParameters_p .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_p . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters_p . mVariableStepSolver = tmp_p ;
tmp_p = false ; modelParameters_p . mIsUsingODEN = tmp_p ; tmp_p =
slIsRapidAcceleratorSimulating ( ) ; val = ssGetGlobalInitialStatesAvailable
( rtS ) ; if ( tmp_p ) { val = ( val && ssIsFirstInitCond ( rtS ) ) ; }
modelParameters_p . mLoadInitialState = val ; modelParameters_p . mZcDisabled
= false ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . iocl5xhili ;
diagnosticTree_e = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * )
rtDW . ho0c1mkpts , & modelParameters_p , diagnosticManager ) ; if ( tmp_i !=
0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p
) { msg_e = rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS
, msg_e ) ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo *
) calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS
, "from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "tuvar" ; fromwksInfo -> origDataTypeId
= 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo -> origWidth = 1 ;
fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo -> data = ( void
* ) rtP . FromWs_Data0 ; fromwksInfo -> nDataPoints = 6 ; fromwksInfo -> time
= ( double * ) rtP . FromWs_Time0 ; rtDW . ldnb01qrhc . TimePtr = fromwksInfo
-> time ; rtDW . ldnb01qrhc . DataPtr = fromwksInfo -> data ; rtDW .
ldnb01qrhc . RSimInfoPtr = fromwksInfo ; } rtDW . fr32snlede . PrevIndex = 0
; { int_T * zcTimeIndices = & rtDW . ctj0zkrtsp [ 0 ] ; const double *
timePoints = ( double * ) rtDW . ldnb01qrhc . TimePtr ; boolean_T
justHadZcTime = false ; int_T zcIdx = 0 ; int_T i ; for ( i = 0 ; i < 6 - 1 ;
i ++ ) { if ( ! justHadZcTime && timePoints [ i ] == timePoints [ i + 1 ] ) {
zcTimeIndices [ zcIdx ++ ] = i ; justHadZcTime = true ; } else {
justHadZcTime = false ; } } rtDW . do5crktz43 = 0 ; } } } void MdlOutputs (
int_T tid ) { real_T kpmxiw2lqf ; NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; NeuDiagnosticTree * diagnosticTree_p ; char * msg ; char * msg_p ; real_T
tmp_m [ 32 ] ; real_T tmp_p [ 12 ] ; real_T gnlyfftxej [ 2 ] ; real_T
aedid5wn52 ; real_T h0r2fp0exj ; real_T time ; real_T time_e ; real_T time_i
; real_T time_p ; int32_T tmp_i ; int_T tmp_g [ 5 ] ; int_T tmp_e [ 4 ] ;
boolean_T tmp ; simulationData = ( NeslSimulationData * ) rtDW . bgy1ywvlrc ;
time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time ; simulationData -> mData ->
mContStates . mN = 20 ; simulationData -> mData -> mContStates . mX = & rtX .
j0i3i5ib1k [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . joypi0icuk ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . o2ji33fn0m ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . c10gnxoqj0 [ 0 ] ; tmp_p [ 1 ] = rtB . c10gnxoqj0 [ 1 ] ;
tmp_p [ 2 ] = rtB . c10gnxoqj0 [ 2 ] ; tmp_p [ 3 ] = rtB . c10gnxoqj0 [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . c0bnf5ncua [ 0 ] ; tmp_p [ 5 ] = rtB .
c0bnf5ncua [ 1 ] ; tmp_p [ 6 ] = rtB . c0bnf5ncua [ 2 ] ; tmp_p [ 7 ] = rtB .
c0bnf5ncua [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . ov4daa2idk [ 0 ] ;
tmp_p [ 9 ] = rtB . ov4daa2idk [ 1 ] ; tmp_p [ 10 ] = rtB . ov4daa2idk [ 2 ]
; tmp_p [ 11 ] = rtB . ov4daa2idk [ 3 ] ; tmp_e [ 3 ] = 12 ; simulationData
-> mData -> mInputValues . mN = 12 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 20 ; simulationData -> mData ->
mOutputs . mX = & rtB . atirkgn1ea [ 0 ] ; simulationData -> mData ->
mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ;
simulationData -> mData -> mCstateHasChanged = false ; time_p = ssGetTaskTime
( rtS , 0 ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData ->
mData -> mTime . mX = & time_p ; simulationData -> mData -> mSampleHits . mN
= 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; simulationData ->
mData -> mIsFundamentalSampleHit = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . bvsbzhcijz ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . puakpty0gl ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . fevgbksbvp ; time_e = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_e ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . cnz2wgesei ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . haca43xgma ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; simulationData ->
mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_g [ 0 ]
= 0 ; tmp_m [ 0 ] = rtB . c10gnxoqj0 [ 0 ] ; tmp_m [ 1 ] = rtB . c10gnxoqj0 [
1 ] ; tmp_m [ 2 ] = rtB . c10gnxoqj0 [ 2 ] ; tmp_m [ 3 ] = rtB . c10gnxoqj0 [
3 ] ; tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = rtB . c0bnf5ncua [ 0 ] ; tmp_m [ 5 ] =
rtB . c0bnf5ncua [ 1 ] ; tmp_m [ 6 ] = rtB . c0bnf5ncua [ 2 ] ; tmp_m [ 7 ] =
rtB . c0bnf5ncua [ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . ov4daa2idk [ 0
] ; tmp_m [ 9 ] = rtB . ov4daa2idk [ 1 ] ; tmp_m [ 10 ] = rtB . ov4daa2idk [
2 ] ; tmp_m [ 11 ] = rtB . ov4daa2idk [ 3 ] ; tmp_g [ 3 ] = 12 ; memcpy ( &
tmp_m [ 12 ] , & rtB . atirkgn1ea [ 0 ] , 20U * sizeof ( real_T ) ) ; tmp_g [
4 ] = 32 ; simulationData -> mData -> mInputValues . mN = 32 ; simulationData
-> mData -> mInputValues . mX = & tmp_m [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_g [ 0 ] ; simulationData -> mData -> mOutputs . mN = 2 ; simulationData
-> mData -> mOutputs . mX = & gnlyfftxej [ 0 ] ; simulationData -> mData ->
mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ;
simulationData -> mData -> mCstateHasChanged = false ; time_i = ssGetTaskTime
( rtS , 0 ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData ->
mData -> mTime . mX = & time_i ; simulationData -> mData -> mSampleHits . mN
= 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; simulationData ->
mData -> mIsFundamentalSampleHit = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . iocl5xhili ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ho0c1mkpts ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg_p
= rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus ( rtS , msg_p )
; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
aedid5wn52 = gnlyfftxej [ 1 ] + rtP . Constant2_Value ; aedid5wn52 *= rtP .
Gain_Gain ; { if ( rtDW . lrcusptm13 . AQHandles && ssGetLogOutput ( rtS ) )
{ sdiWriteSignal ( rtDW . lrcusptm13 . AQHandles , ssGetTaskTime ( rtS , 0 )
, ( char * ) & aedid5wn52 + 0 ) ; } } h0r2fp0exj = gnlyfftxej [ 0 ] + rtP .
Constant1_Value ; { if ( rtDW . m2vfa514pt . AQHandles && ssGetLogOutput (
rtS ) ) { sdiWriteSignal ( rtDW . m2vfa514pt . AQHandles , ssGetTaskTime (
rtS , 0 ) , ( char * ) & h0r2fp0exj + 0 ) ; } } rtB . f3gw0iwbif = rtP .
Gain_Gain_me4xmstywp * h0r2fp0exj ; rtB . mwr55aev3g = rtP .
Gain_Gain_gy5drqpmw4 * aedid5wn52 ; rtB . hnxoawnn02 = rtP .
Gain_Gain_a4u1vvqkej * gnlyfftxej [ 0 ] ; rtB . ikvmnm2cux = rtP .
Gain_Gain_ls3lvpjamw * gnlyfftxej [ 1 ] ; { if ( rtDW . lrcusptm13y .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . lrcusptm13y .
AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & gnlyfftxej [ 0 ] + 0 ) ;
} } { if ( rtDW . m2vfa514pte . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . m2vfa514pte . AQHandles , ssGetTaskTime ( rtS , 0 ) ,
( char * ) & gnlyfftxej [ 1 ] + 0 ) ; } } rtB . c10gnxoqj0 [ 0 ] = rtP .
Constant3_Value ; rtB . c10gnxoqj0 [ 1 ] = 0.0 ; rtB . c10gnxoqj0 [ 2 ] = 0.0
; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . nrx51v3ffl [ 0 ] = ! ( rtB .
c10gnxoqj0 [ 0 ] == rtDW . nrx51v3ffl [ 1 ] ) ; rtDW . nrx51v3ffl [ 1 ] = rtB
. c10gnxoqj0 [ 0 ] ; } rtB . c10gnxoqj0 [ 0 ] = rtDW . nrx51v3ffl [ 1 ] ; rtB
. c10gnxoqj0 [ 3 ] = rtDW . nrx51v3ffl [ 0 ] ; rtB . c0bnf5ncua [ 0 ] = rtP .
Constant3_Value ; rtB . c0bnf5ncua [ 1 ] = 0.0 ; rtB . c0bnf5ncua [ 2 ] = 0.0
; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . p5h3pbeepy [ 0 ] = ! ( rtB .
c0bnf5ncua [ 0 ] == rtDW . p5h3pbeepy [ 1 ] ) ; rtDW . p5h3pbeepy [ 1 ] = rtB
. c0bnf5ncua [ 0 ] ; } rtB . c0bnf5ncua [ 0 ] = rtDW . p5h3pbeepy [ 1 ] ; rtB
. c0bnf5ncua [ 3 ] = rtDW . p5h3pbeepy [ 0 ] ; rtB . ov4daa2idk [ 0 ] = 0.0 ;
rtB . ov4daa2idk [ 1 ] = 0.0 ; rtB . ov4daa2idk [ 2 ] = 0.0 ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . mgc35v2eh3 [ 0 ] = ! ( rtB . ov4daa2idk
[ 0 ] == rtDW . mgc35v2eh3 [ 1 ] ) ; rtDW . mgc35v2eh3 [ 1 ] = rtB .
ov4daa2idk [ 0 ] ; } rtB . ov4daa2idk [ 0 ] = rtDW . mgc35v2eh3 [ 1 ] ; rtB .
ov4daa2idk [ 3 ] = rtDW . mgc35v2eh3 [ 0 ] ; { real_T * pDataValues = (
real_T * ) rtDW . ldnb01qrhc . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . ldnb01qrhc . TimePtr ; int_T currTimeIndex = rtDW . fr32snlede .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . ldnb01qrhc . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . fr32snlede . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { kpmxiw2lqf =
pDataValues [ currTimeIndex ] ; } else { kpmxiw2lqf = pDataValues [
currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . ctj0zkrtsp [ 0 ] ; int_T *
zcTimeIndicesIdx = & rtDW . do5crktz43 ; int_T zcIdx = zcTimeIndices [ *
zcTimeIndicesIdx ] ; int_T numZcTimes = 2 ; if ( * zcTimeIndicesIdx <
numZcTimes ) { if ( ssIsMajorTimeStep ( rtS ) ) { if ( t > pTimeValues [
zcIdx ] ) { while ( * zcTimeIndicesIdx < ( numZcTimes - 1 ) && ( t >
pTimeValues [ zcIdx ] ) ) { ( * zcTimeIndicesIdx ) ++ ; zcIdx = zcTimeIndices
[ * zcTimeIndicesIdx ] ; } } } else { if ( t >= pTimeValues [ zcIdx ] && (
ssGetTimeOfLastOutput ( rtS ) < pTimeValues [ zcIdx ] ) ) { t2 = pTimeValues
[ zcIdx ] ; if ( zcIdx == 0 ) { TimeIndex = 0 ; t1 = t2 - 1 ; } else { t1 =
pTimeValues [ zcIdx - 1 ] ; TimeIndex = zcIdx - 1 ; } f1 = ( t2 - t ) / ( t2
- t1 ) ; f2 = 1.0 - f1 ; } } } d1 = pDataValues [ TimeIndex ] ; d2 =
pDataValues [ TimeIndex + 1 ] ; if ( zcIdx == 0 ) { d2 = d1 ; } kpmxiw2lqf =
( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues += numPoints ; }
} } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID3 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 12 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e [ 4 ] ; boolean_T
tmp ; simulationData = ( NeslSimulationData * ) rtDW . bgy1ywvlrc ; time =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 20 ; simulationData -> mData -> mContStates . mX = & rtX . j0i3i5ib1k [ 0 ]
; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . joypi0icuk ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
o2ji33fn0m ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . c10gnxoqj0 [ 0 ] ; tmp_p [ 1 ] = rtB . c10gnxoqj0 [ 1 ] ;
tmp_p [ 2 ] = rtB . c10gnxoqj0 [ 2 ] ; tmp_p [ 3 ] = rtB . c10gnxoqj0 [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . c0bnf5ncua [ 0 ] ; tmp_p [ 5 ] = rtB .
c0bnf5ncua [ 1 ] ; tmp_p [ 6 ] = rtB . c0bnf5ncua [ 2 ] ; tmp_p [ 7 ] = rtB .
c0bnf5ncua [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . ov4daa2idk [ 0 ] ;
tmp_p [ 9 ] = rtB . ov4daa2idk [ 1 ] ; tmp_p [ 10 ] = rtB . ov4daa2idk [ 2 ]
; tmp_p [ 11 ] = rtB . ov4daa2idk [ 3 ] ; tmp_e [ 3 ] = 12 ; simulationData
-> mData -> mInputValues . mN = 12 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . bvsbzhcijz ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . puakpty0gl ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID3 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; XDot * _rtXdot ;
char * msg ; real_T tmp_p [ 12 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e
[ 4 ] ; boolean_T tmp ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ;
simulationData = ( NeslSimulationData * ) rtDW . bgy1ywvlrc ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 20 ;
simulationData -> mData -> mContStates . mX = & rtX . j0i3i5ib1k [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . joypi0icuk ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
o2ji33fn0m ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . c10gnxoqj0 [ 0 ] ; tmp_p [ 1 ] = rtB . c10gnxoqj0 [ 1 ] ;
tmp_p [ 2 ] = rtB . c10gnxoqj0 [ 2 ] ; tmp_p [ 3 ] = rtB . c10gnxoqj0 [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . c0bnf5ncua [ 0 ] ; tmp_p [ 5 ] = rtB .
c0bnf5ncua [ 1 ] ; tmp_p [ 6 ] = rtB . c0bnf5ncua [ 2 ] ; tmp_p [ 7 ] = rtB .
c0bnf5ncua [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . ov4daa2idk [ 0 ] ;
tmp_p [ 9 ] = rtB . ov4daa2idk [ 1 ] ; tmp_p [ 10 ] = rtB . ov4daa2idk [ 2 ]
; tmp_p [ 11 ] = rtB . ov4daa2idk [ 3 ] ; tmp_e [ 3 ] = 12 ; simulationData
-> mData -> mInputValues . mN = 12 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 20 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> j0i3i5ib1k [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . bvsbzhcijz ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . puakpty0gl ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlProjection ( void ) { NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; real_T tmp_p [ 12 ] ; real_T time ; int32_T tmp_i ; int_T
tmp_e [ 4 ] ; boolean_T tmp ; simulationData = ( NeslSimulationData * ) rtDW
. bgy1ywvlrc ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 20 ; simulationData -> mData -> mContStates . mX
= & rtX . j0i3i5ib1k [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0
; simulationData -> mData -> mDiscStates . mX = & rtDW . joypi0icuk ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . o2ji33fn0m ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . c10gnxoqj0 [ 0 ] ; tmp_p [ 1 ] = rtB . c10gnxoqj0 [ 1 ] ;
tmp_p [ 2 ] = rtB . c10gnxoqj0 [ 2 ] ; tmp_p [ 3 ] = rtB . c10gnxoqj0 [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . c0bnf5ncua [ 0 ] ; tmp_p [ 5 ] = rtB .
c0bnf5ncua [ 1 ] ; tmp_p [ 6 ] = rtB . c0bnf5ncua [ 2 ] ; tmp_p [ 7 ] = rtB .
c0bnf5ncua [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . ov4daa2idk [ 0 ] ;
tmp_p [ 9 ] = rtB . ov4daa2idk [ 1 ] ; tmp_p [ 10 ] = rtB . ov4daa2idk [ 2 ]
; tmp_p [ 11 ] = rtB . ov4daa2idk [ 3 ] ; tmp_e [ 3 ] = 12 ; simulationData
-> mData -> mInputValues . mN = 12 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . bvsbzhcijz ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . puakpty0gl ,
NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlZeroCrossings ( void ) { { const double * timePtr = ( double
* ) rtDW . ldnb01qrhc . TimePtr ; int_T * zcTimeIndices = & rtDW . ctj0zkrtsp
[ 0 ] ; int_T zcTimeIndicesIdx = rtDW . do5crktz43 ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> hy04sctgyy = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } } void MdlTerminate ( void ) {
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . bvsbzhcijz
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . bgy1ywvlrc
) ; nesl_erase_simulator (
"test14/Steering Dynamics/World/Solver Configuration_1" ) ;
nesl_destroy_registry ( ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . iocl5xhili ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . fevgbksbvp ) ; nesl_erase_simulator (
"test14/Steering Dynamics/World/Solver Configuration_1" ) ;
nesl_destroy_registry ( ) ; rt_FREE ( rtDW . ldnb01qrhc . RSimInfoPtr ) ; {
if ( rtDW . lrcusptm13 . AQHandles ) { sdiTerminateStreaming ( & rtDW .
lrcusptm13 . AQHandles ) ; } } { if ( rtDW . m2vfa514pt . AQHandles ) {
sdiTerminateStreaming ( & rtDW . m2vfa514pt . AQHandles ) ; } } { if ( rtDW .
lrcusptm13y . AQHandles ) { sdiTerminateStreaming ( & rtDW . lrcusptm13y .
AQHandles ) ; } } { if ( rtDW . m2vfa514pte . AQHandles ) {
sdiTerminateStreaming ( & rtDW . m2vfa514pte . AQHandles ) ; } } } static
void mr_test14_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_test14_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_test14_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_test14_restoreDataFromMxArray ( void * destData , const mxArray * srcArray
, mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * ) destData , (
const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ,
numBytes ) ; } static void mr_test14_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_test14_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_test14_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i ,
int j , uint_T numBits ) ; static uint_T mr_test14_extractBitFieldFromMxArray
( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const
uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i ,
j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_test14_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i ,
int j , mwIndex offset , const void * srcData , size_t numBytes ) ; static
void mr_test14_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T
* varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j
) ) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const
uint8_T * ) srcData , numBytes ) ; } static void
mr_test14_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static
void mr_test14_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) {
const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber
( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T *
) & varData [ offset * numBytes ] , numBytes ) ; } static void
mr_test14_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_test14_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_test14_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray ,
mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T
mr_test14_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray ,
mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T fieldVal
= ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray , i , j
) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; } mxArray *
mr_test14_GetDWork ( ) { static const char * ssDWFieldNames [ 3 ] = { "rtB" ,
"rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 ,
3 , ssDWFieldNames ) ; mr_test14_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const
void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char *
rtdwDataFieldNames [ 12 ] = { "rtDW.nrx51v3ffl" , "rtDW.p5h3pbeepy" ,
"rtDW.mgc35v2eh3" , "rtDW.joypi0icuk" , "rtDW.cnz2wgesei" , "rtDW.o2ji33fn0m"
, "rtDW.haca43xgma" , "rtDW.ctj0zkrtsp" , "rtDW.do5crktz43" ,
"rtDW.fr32snlede" , "rtDW.ixolmoocom" , "rtDW.f33l2mygmj" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 12 , rtdwDataFieldNames ) ;
mr_test14_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & ( rtDW .
nrx51v3ffl ) , sizeof ( rtDW . nrx51v3ffl ) ) ; mr_test14_cacheDataAsMxArray
( rtdwData , 0 , 1 , ( const void * ) & ( rtDW . p5h3pbeepy ) , sizeof ( rtDW
. p5h3pbeepy ) ) ; mr_test14_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const
void * ) & ( rtDW . mgc35v2eh3 ) , sizeof ( rtDW . mgc35v2eh3 ) ) ;
mr_test14_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & ( rtDW .
joypi0icuk ) , sizeof ( rtDW . joypi0icuk ) ) ; mr_test14_cacheDataAsMxArray
( rtdwData , 0 , 4 , ( const void * ) & ( rtDW . cnz2wgesei ) , sizeof ( rtDW
. cnz2wgesei ) ) ; mr_test14_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const
void * ) & ( rtDW . o2ji33fn0m ) , sizeof ( rtDW . o2ji33fn0m ) ) ;
mr_test14_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & ( rtDW .
haca43xgma ) , sizeof ( rtDW . haca43xgma ) ) ; mr_test14_cacheDataAsMxArray
( rtdwData , 0 , 7 , ( const void * ) & ( rtDW . ctj0zkrtsp ) , sizeof ( rtDW
. ctj0zkrtsp ) ) ; mr_test14_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const
void * ) & ( rtDW . do5crktz43 ) , sizeof ( rtDW . do5crktz43 ) ) ;
mr_test14_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & ( rtDW .
fr32snlede ) , sizeof ( rtDW . fr32snlede ) ) ; mr_test14_cacheDataAsMxArray
( rtdwData , 0 , 10 , ( const void * ) & ( rtDW . ixolmoocom ) , sizeof (
rtDW . ixolmoocom ) ) ; mr_test14_cacheDataAsMxArray ( rtdwData , 0 , 11 , (
const void * ) & ( rtDW . f33l2mygmj ) , sizeof ( rtDW . f33l2mygmj ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_test14_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_test14_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0 , 0 ,
sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0
, 1 ) ; mr_test14_restoreDataFromMxArray ( ( void * ) & ( rtDW . nrx51v3ffl )
, rtdwData , 0 , 0 , sizeof ( rtDW . nrx51v3ffl ) ) ;
mr_test14_restoreDataFromMxArray ( ( void * ) & ( rtDW . p5h3pbeepy ) ,
rtdwData , 0 , 1 , sizeof ( rtDW . p5h3pbeepy ) ) ;
mr_test14_restoreDataFromMxArray ( ( void * ) & ( rtDW . mgc35v2eh3 ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . mgc35v2eh3 ) ) ;
mr_test14_restoreDataFromMxArray ( ( void * ) & ( rtDW . joypi0icuk ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . joypi0icuk ) ) ;
mr_test14_restoreDataFromMxArray ( ( void * ) & ( rtDW . cnz2wgesei ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . cnz2wgesei ) ) ;
mr_test14_restoreDataFromMxArray ( ( void * ) & ( rtDW . o2ji33fn0m ) ,
rtdwData , 0 , 5 , sizeof ( rtDW . o2ji33fn0m ) ) ;
mr_test14_restoreDataFromMxArray ( ( void * ) & ( rtDW . haca43xgma ) ,
rtdwData , 0 , 6 , sizeof ( rtDW . haca43xgma ) ) ;
mr_test14_restoreDataFromMxArray ( ( void * ) & ( rtDW . ctj0zkrtsp ) ,
rtdwData , 0 , 7 , sizeof ( rtDW . ctj0zkrtsp ) ) ;
mr_test14_restoreDataFromMxArray ( ( void * ) & ( rtDW . do5crktz43 ) ,
rtdwData , 0 , 8 , sizeof ( rtDW . do5crktz43 ) ) ;
mr_test14_restoreDataFromMxArray ( ( void * ) & ( rtDW . fr32snlede ) ,
rtdwData , 0 , 9 , sizeof ( rtDW . fr32snlede ) ) ;
mr_test14_restoreDataFromMxArray ( ( void * ) & ( rtDW . ixolmoocom ) ,
rtdwData , 0 , 10 , sizeof ( rtDW . ixolmoocom ) ) ;
mr_test14_restoreDataFromMxArray ( ( void * ) & ( rtDW . f33l2mygmj ) ,
rtdwData , 0 , 11 , sizeof ( rtDW . f33l2mygmj ) ) ; } } mxArray *
mr_test14_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 5 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 5 ] = { "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "Scope" , "Scope" , "SimscapeSinkBlock" , } ;
static const char * blockPath [ 5 ] = {
"test14/Steering Dynamics/World/Solver Configuration/EVAL_KEY/STATE_1" ,
"test14/Steering Dynamics/World/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ,
"test14/Steering Dynamics/Scope" , "test14/Steering Dynamics/Sensing /Scope"
, "test14/Steering Dynamics/World/Solver Configuration/EVAL_KEY/SINK_1" , } ;
static const int reason [ 5 ] = { 0 , 0 , 0 , 0 , 0 , } ; for ( subs [ 0 ] =
0 ; subs [ 0 ] < 5 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } } return data
; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 20 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
3 ) ; ssSetNumBlocks ( rtS , 207 ) ; ssSetNumBlockIO ( rtS , 8 ) ;
ssSetNumBlockParams ( rtS , 20 ) ; } void MdlInitializeSampleTimes ( void ) {
ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetSampleTime ( rtS , 2 , - 2.0 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 1976949148U ) ;
ssSetChecksumVal ( rtS , 1 , 946220215U ) ; ssSetChecksumVal ( rtS , 2 ,
1783701592U ) ; ssSetChecksumVal ( rtS , 3 , 2476505108U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; ( void ) memset ( ( char * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0
, sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 23 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
test14_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS , true
) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2
) ; ssSetModelName ( rtS , "test14" ) ; ssSetPath ( rtS , "test14" ) ;
ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 240.0 ) ; { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL ) ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 2 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 2 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static
const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "Discrete" , "Discrete" , "Discrete" } ;
static const char_T * rt_LoggedStateBlockNames [ ] = {
"test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Revolute Joint"
,
"test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Revolute Joint"
, "test14/Steering Dynamics/Revolute" , "test14/Steering Dynamics/Revolute" ,
"test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Revolute6" ,
"test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Revolute6" ,
"test14/Steering Dynamics/Revolute1" , "test14/Steering Dynamics/Revolute1" ,
"test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Revolute8" ,
"test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Revolute8" ,
"test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Prismatic Joint"
,
"test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Prismatic Joint"
, "test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Revolute5" ,
"test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Revolute5" ,
"test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Revolute4" ,
"test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Revolute4" ,
"test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Revolute9" ,
"test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Revolute9" ,
"test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Revolute7" ,
"test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Revolute7" ,
"test14/Steering Dynamics/World/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ,
"test14/Steering Dynamics/World/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ,
"test14/Steering Dynamics/World/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" }
; static const char_T * rt_LoggedStateNames [ ] = {
"test14.Steering_Dynamics.Chassis_Rack.Rack_Case_Chassis.Revolute_Joint.Rz.q"
,
"test14.Steering_Dynamics.Chassis_Rack.Rack_Case_Chassis.Revolute_Joint.Rz.w"
, "test14.Steering_Dynamics.Revolute.Rz.q" ,
"test14.Steering_Dynamics.Revolute.Rz.w" ,
"test14.Steering_Dynamics.Chassis_Rack.Rack_Case_Chassis.Revolute6.Rz.q" ,
"test14.Steering_Dynamics.Chassis_Rack.Rack_Case_Chassis.Revolute6.Rz.w" ,
"test14.Steering_Dynamics.Revolute1.Rz.q" ,
"test14.Steering_Dynamics.Revolute1.Rz.w" ,
"test14.Steering_Dynamics.Chassis_Rack.Rack_Case_Chassis.Revolute8.Rz.q" ,
"test14.Steering_Dynamics.Chassis_Rack.Rack_Case_Chassis.Revolute8.Rz.w" ,
"test14.Steering_Dynamics.Chassis_Rack.Rack_Case_Chassis.Prismatic_Joint.Pz.p"
,
"test14.Steering_Dynamics.Chassis_Rack.Rack_Case_Chassis.Prismatic_Joint.Pz.v"
, "test14.Steering_Dynamics.Chassis_Rack.Rack_Case_Chassis.Revolute5.Rz.q" ,
"test14.Steering_Dynamics.Chassis_Rack.Rack_Case_Chassis.Revolute5.Rz.w" ,
"test14.Steering_Dynamics.Chassis_Rack.Rack_Case_Chassis.Revolute4.Rz.q" ,
"test14.Steering_Dynamics.Chassis_Rack.Rack_Case_Chassis.Revolute4.Rz.w" ,
"test14.Steering_Dynamics.Chassis_Rack.Rack_Case_Chassis.Revolute9.Rz.q" ,
"test14.Steering_Dynamics.Chassis_Rack.Rack_Case_Chassis.Revolute9.Rz.w" ,
"test14.Steering_Dynamics.Chassis_Rack.Rack_Case_Chassis.Revolute7.Rz.q" ,
"test14.Steering_Dynamics.Chassis_Rack.Rack_Case_Chassis.Revolute7.Rz.w" ,
"Discrete" , "Discrete" , "Discrete" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 0 , 1 , 2 } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 23 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 23 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . j0i3i5ib1k [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . j0i3i5ib1k [ 1 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . j0i3i5ib1k [ 2 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . j0i3i5ib1k [ 3 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . j0i3i5ib1k [ 4 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . j0i3i5ib1k [ 5 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . j0i3i5ib1k [ 6 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . j0i3i5ib1k [ 7 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . j0i3i5ib1k [ 8 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . j0i3i5ib1k [ 9 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . j0i3i5ib1k [ 10 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . j0i3i5ib1k [ 11 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . j0i3i5ib1k [ 12 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . j0i3i5ib1k [ 13 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . j0i3i5ib1k [ 14 ] ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . j0i3i5ib1k [ 15 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . j0i3i5ib1k [ 16 ] ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . j0i3i5ib1k [ 17 ] ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . j0i3i5ib1k [ 18 ] ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . j0i3i5ib1k [ 19 ] ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) rtDW . nrx51v3ffl ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) rtDW . p5h3pbeepy ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) rtDW . mgc35v2eh3 ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3
; static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 20 ] ; static real_T absTol [ 20 ] = { 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 } ; static uint8_T absTolControl [ 20 ] = { 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U } ; static real_T contStateJacPerturbBoundMinVec [ 20 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 20 ] ; static uint8_T zcAttributes [ 1 ] = {
( ZC_EVENT_ALL_UP ) } ; { int i ; for ( i = 0 ; i < 20 ; ++ i ) {
contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec [ i
] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize (
rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , -
1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 0.1 )
; ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 0 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 0 ) ; ssSetNonContDerivSigInfos ( rtS ,
( NULL ) ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS ,
"VariableStepAuto" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ;
_ssSetSolverUpdateJacobianAtReset ( rtS , true ) ; ssSetAbsTolVector ( rtS ,
absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 1 ) ; (
void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof ( mdlMethods2 ) ) ;
ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void ) memset ( ( void * ) &
mdlMethods3 , 0 , sizeof ( mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , &
mdlMethods3 ) ; ssSetModelProjection ( rtS , MdlProjection ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 1 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 1 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 1976949148U ) ; ssSetChecksumVal ( rtS , 1 ,
946220215U ) ; ssSetChecksumVal ( rtS , 2 , 1783701592U ) ; ssSetChecksumVal
( rtS , 3 , 2476505108U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 2 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_test14_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP ( rtS
, mr_test14_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_test14_SetDWork ) ; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if (
ssGetErrorStatus ( rtS ) ) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }

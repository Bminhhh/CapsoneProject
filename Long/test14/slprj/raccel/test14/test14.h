#ifndef RTW_HEADER_test14_h_
#define RTW_HEADER_test14_h_
#ifndef test14_COMMON_INCLUDES_
#define test14_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "test14_9449aeaa_1_gateway.h"
#endif
#include "test14_types.h"
#include "mwmathutil.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME test14
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (8) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (20)   
#elif NCSTATES != 20
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T atirkgn1ea [ 20 ] ; real_T f3gw0iwbif ; real_T
mwr55aev3g ; real_T hnxoawnn02 ; real_T ikvmnm2cux ; real_T c10gnxoqj0 [ 4 ]
; real_T c0bnf5ncua [ 4 ] ; real_T ov4daa2idk [ 4 ] ; } B ; typedef struct {
real_T nrx51v3ffl [ 2 ] ; real_T p5h3pbeepy [ 2 ] ; real_T mgc35v2eh3 [ 2 ] ;
real_T joypi0icuk ; real_T cnz2wgesei ; void * puakpty0gl ; void * bgy1ywvlrc
; void * bvsbzhcijz ; void * es413ksfac ; void * gemtqiprb5 ; void *
ho0c1mkpts ; void * fevgbksbvp ; void * iocl5xhili ; void * iuxovi2qjd ; void
* hhtdtemipq ; struct { void * AQHandles ; } lrcusptm13 ; struct { void *
AQHandles ; } m2vfa514pt ; struct { void * LoggedData [ 4 ] ; } avwetncjkl ;
struct { void * LoggedData [ 2 ] ; } ewcm2cqg5h ; struct { void * AQHandles ;
} lrcusptm13y ; struct { void * AQHandles ; } m2vfa514pte ; void * fsf1ew52l4
; void * ekqm450y13 ; void * byuyr4albp ; struct { void * TimePtr ; void *
DataPtr ; void * RSimInfoPtr ; } ldnb01qrhc ; int_T o2ji33fn0m ; int_T
haca43xgma ; int_T ctj0zkrtsp [ 2 ] ; int_T do5crktz43 ; struct { int_T
PrevIndex ; } fr32snlede ; boolean_T ixolmoocom ; boolean_T f33l2mygmj ; } DW
; typedef struct { real_T j0i3i5ib1k [ 20 ] ; } X ; typedef struct { real_T
j0i3i5ib1k [ 20 ] ; } XDot ; typedef struct { boolean_T j0i3i5ib1k [ 20 ] ; }
XDis ; typedef struct { real_T j0i3i5ib1k [ 20 ] ; } CStateAbsTol ; typedef
struct { real_T j0i3i5ib1k [ 20 ] ; } CXPtMin ; typedef struct { real_T
j0i3i5ib1k [ 20 ] ; } CXPtMax ; typedef struct { real_T hy04sctgyy ; } ZCV ;
typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ {
real_T Gain_Gain ; real_T Gain_Gain_me4xmstywp ; real_T Gain_Gain_gy5drqpmw4
; real_T Gain_Gain_a4u1vvqkej ; real_T Gain_Gain_ls3lvpjamw ; real_T
FromWs_Time0 [ 6 ] ; real_T FromWs_Data0 [ 6 ] ; real_T Constant3_Value ;
real_T Constant1_Value ; real_T Constant2_Value ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern mxArray * mr_test14_GetDWork ( ) ; extern void
mr_test14_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_test14_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * test14_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif

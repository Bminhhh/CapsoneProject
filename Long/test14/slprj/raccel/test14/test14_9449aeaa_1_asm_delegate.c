#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "sm_CTarget.h"
void test14_9449aeaa_1_setTargets ( const RuntimeDerivedValuesBundle * rtdv ,
CTarget * targets ) { ( void ) rtdv ; ( void ) targets ; } void
test14_9449aeaa_1_resetAsmStateVector ( const void * mech , double * state )
{ double xx [ 1 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; state [ 0 ] = xx [ 0 ] ;
state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 0 ] ; state [ 3 ] = xx [ 0 ] ;
state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ; state [ 6 ] = xx [ 0 ] ;
state [ 7 ] = xx [ 0 ] ; state [ 8 ] = xx [ 0 ] ; state [ 9 ] = xx [ 0 ] ;
state [ 10 ] = xx [ 0 ] ; state [ 11 ] = xx [ 0 ] ; state [ 12 ] = xx [ 0 ] ;
state [ 13 ] = xx [ 0 ] ; state [ 14 ] = xx [ 0 ] ; state [ 15 ] = xx [ 0 ] ;
state [ 16 ] = xx [ 0 ] ; state [ 17 ] = xx [ 0 ] ; } void
test14_9449aeaa_1_initializeTrackedAngleState ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData , double * state ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 16 ] ; (
void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; xx [ 0
] = - 1.804939452482168e-6 ; xx [ 1 ] = 5.859787810535977e-8 ; xx [ 2 ] =
2.156793422469772e-7 ; xx [ 3 ] = 0.9999999999983462 ; xx [ 4 ] = motionData
[ 91 ] ; xx [ 5 ] = motionData [ 92 ] ; xx [ 6 ] = motionData [ 93 ] ; xx [ 7
] = motionData [ 94 ] ; xx [ 8 ] = motionData [ 98 ] ; xx [ 9 ] = motionData
[ 99 ] ; xx [ 10 ] = motionData [ 100 ] ; xx [ 11 ] = motionData [ 101 ] ;
pm_math_Quaternion_inverseCompose_ra ( xx + 4 , xx + 8 , xx + 12 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 0 , xx + 12 , xx + 4 ) ; xx [ 0 ]
= motionData [ 163 ] ; xx [ 1 ] = motionData [ 164 ] ; xx [ 2 ] = motionData
[ 165 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 12 , xx + 0 , xx + 8 ) ;
state [ 16 ] = sm_core_canonicalAngle ( 2.0 * atan2 ( sqrt ( xx [ 5 ] * xx [
5 ] + xx [ 6 ] * xx [ 6 ] + xx [ 7 ] * xx [ 7 ] ) , fabs ( xx [ 4 ] ) ) * ( (
- ( xx [ 4 ] * xx [ 6 ] ) ) < 0.0 ? - 1.0 : + 1.0 ) ) ; state [ 17 ] = xx [ 9
] - motionData [ 176 ] ; } void test14_9449aeaa_1_computeDiscreteState (
const void * mech , const RuntimeDerivedValuesBundle * rtdv , double * state
) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi =
rtdv -> mInts . mValues ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; (
void ) state ; } void test14_9449aeaa_1_adjustPosition ( const void * mech ,
const double * dofDeltas , double * state ) { ( void ) mech ; state [ 0 ] =
state [ 0 ] + dofDeltas [ 0 ] ; state [ 2 ] = state [ 2 ] + dofDeltas [ 1 ] ;
state [ 4 ] = state [ 4 ] + dofDeltas [ 2 ] ; state [ 6 ] = state [ 6 ] +
dofDeltas [ 3 ] ; state [ 8 ] = state [ 8 ] + dofDeltas [ 4 ] ; state [ 10 ]
= state [ 10 ] + dofDeltas [ 5 ] ; state [ 12 ] = state [ 12 ] + dofDeltas [
6 ] ; state [ 14 ] = state [ 14 ] + dofDeltas [ 7 ] ; } static void
perturbAsmJointPrimitiveState_0_0 ( double mag , double * state ) { state [ 0
] = state [ 0 ] + mag ; } static void perturbAsmJointPrimitiveState_0_0v (
double mag , double * state ) { state [ 0 ] = state [ 0 ] + mag ; state [ 1 ]
= state [ 1 ] - 0.875 * mag ; } static void perturbAsmJointPrimitiveState_1_0
( double mag , double * state ) { state [ 2 ] = state [ 2 ] + mag ; } static
void perturbAsmJointPrimitiveState_1_0v ( double mag , double * state ) {
state [ 2 ] = state [ 2 ] + mag ; state [ 3 ] = state [ 3 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_2_0 ( double mag , double * state )
{ state [ 4 ] = state [ 4 ] + mag ; } static void
perturbAsmJointPrimitiveState_2_0v ( double mag , double * state ) { state [
4 ] = state [ 4 ] + mag ; state [ 5 ] = state [ 5 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_3_0 ( double mag , double * state ) {
state [ 6 ] = state [ 6 ] + mag ; } static void
perturbAsmJointPrimitiveState_3_0v ( double mag , double * state ) { state [
6 ] = state [ 6 ] + mag ; state [ 7 ] = state [ 7 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_4_0 ( double mag , double * state ) {
state [ 8 ] = state [ 8 ] + mag ; } static void
perturbAsmJointPrimitiveState_4_0v ( double mag , double * state ) { state [
8 ] = state [ 8 ] + mag ; state [ 9 ] = state [ 9 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_5_0 ( double mag , double * state ) {
state [ 10 ] = state [ 10 ] + mag ; } static void
perturbAsmJointPrimitiveState_5_0v ( double mag , double * state ) { state [
10 ] = state [ 10 ] + mag ; state [ 11 ] = state [ 11 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_6_0 ( double mag , double * state )
{ state [ 12 ] = state [ 12 ] + mag ; } static void
perturbAsmJointPrimitiveState_6_0v ( double mag , double * state ) { state [
12 ] = state [ 12 ] + mag ; state [ 13 ] = state [ 13 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_7_0 ( double mag , double * state )
{ state [ 14 ] = state [ 14 ] + mag ; } static void
perturbAsmJointPrimitiveState_7_0v ( double mag , double * state ) { state [
14 ] = state [ 14 ] + mag ; state [ 15 ] = state [ 15 ] - 0.875 * mag ; }
void test14_9449aeaa_1_perturbAsmJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primIdx , double mag , boolean_T doPerturbVelocity ,
double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { case 0 :
perturbAsmJointPrimitiveState_0_0 ( mag , state ) ; break ; case 1 :
perturbAsmJointPrimitiveState_0_0v ( mag , state ) ; break ; case 12 :
perturbAsmJointPrimitiveState_1_0 ( mag , state ) ; break ; case 13 :
perturbAsmJointPrimitiveState_1_0v ( mag , state ) ; break ; case 24 :
perturbAsmJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbAsmJointPrimitiveState_2_0v ( mag , state ) ; break ; case 36 :
perturbAsmJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbAsmJointPrimitiveState_3_0v ( mag , state ) ; break ; case 48 :
perturbAsmJointPrimitiveState_4_0 ( mag , state ) ; break ; case 49 :
perturbAsmJointPrimitiveState_4_0v ( mag , state ) ; break ; case 60 :
perturbAsmJointPrimitiveState_5_0 ( mag , state ) ; break ; case 61 :
perturbAsmJointPrimitiveState_5_0v ( mag , state ) ; break ; case 72 :
perturbAsmJointPrimitiveState_6_0 ( mag , state ) ; break ; case 73 :
perturbAsmJointPrimitiveState_6_0v ( mag , state ) ; break ; case 84 :
perturbAsmJointPrimitiveState_7_0 ( mag , state ) ; break ; case 85 :
perturbAsmJointPrimitiveState_7_0v ( mag , state ) ; break ; } } void
test14_9449aeaa_1_computePosDofBlendMatrix ( const void * mech , size_t
stageIdx , size_t primIdx , const double * state , int partialType , double *
matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; ( void )
state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx * 6 +
primIdx ) ) { } } void test14_9449aeaa_1_computeVelDofBlendMatrix ( const
void * mech , size_t stageIdx , size_t primIdx , const double * state , int
partialType , double * matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void
) primIdx ; ( void ) state ; ( void ) partialType ; ( void ) matrix ; switch
( ( stageIdx * 6 + primIdx ) ) { } } void
test14_9449aeaa_1_projectPartiallyTargetedPos ( const void * mech , size_t
stageIdx , size_t primIdx , const double * origState , int partialType ,
double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) origState ; ( void ) partialType ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) ) { } } void test14_9449aeaa_1_propagateMotion (
const void * mech , const RuntimeDerivedValuesBundle * rtdv , const double *
state , double * motionData ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 198 ] ; (
void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; xx [ 0 ] = 0.4995727091999011
; xx [ 1 ] = - 0.49957621763275 ; xx [ 2 ] = - 0.5004162835922631 ; xx [ 3 ]
= 0.5004340657011012 ; xx [ 4 ] = 0.5 ; xx [ 5 ] = xx [ 4 ] * state [ 0 ] ;
xx [ 6 ] = 1.701421996852573e-3 ; xx [ 7 ] = sin ( xx [ 5 ] ) ; xx [ 8 ] =
1.425555872024444e-5 ; xx [ 9 ] = 0.9999985524789362 ; xx [ 10 ] = cos ( xx [
5 ] ) ; xx [ 11 ] = - ( xx [ 6 ] * xx [ 7 ] ) ; xx [ 12 ] = - ( xx [ 8 ] * xx
[ 7 ] ) ; xx [ 13 ] = - ( xx [ 9 ] * xx [ 7 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 0 , xx + 10 , xx + 14 ) ; xx [ 0 ] =
2.206652894183421e-4 ; xx [ 1 ] = 9.518739797527464e-6 ; xx [ 2 ] =
0.6130643393205935 ; pm_math_Quaternion_xform_ra ( xx + 14 , xx + 0 , xx + 10
) ; xx [ 0 ] = - 0.08499731596381738 ; xx [ 1 ] = - 0.7052243478362852 ; xx [
2 ] = - 0.08288208610093117 ; xx [ 3 ] = - 0.6989739875713483 ; xx [ 5 ] = xx
[ 4 ] * state [ 2 ] ; xx [ 7 ] = 0.2357227559798625 ; xx [ 13 ] = sin ( xx [
5 ] ) ; xx [ 18 ] = 0.9718120321650099 ; xx [ 19 ] = 4.019508996436549e-3 ;
xx [ 20 ] = cos ( xx [ 5 ] ) ; xx [ 21 ] = - ( xx [ 7 ] * xx [ 13 ] ) ; xx [
22 ] = xx [ 18 ] * xx [ 13 ] ; xx [ 23 ] = xx [ 19 ] * xx [ 13 ] ;
pm_math_Quaternion_compose_ra ( xx + 0 , xx + 20 , xx + 24 ) ; xx [ 0 ] = -
5.167373958926922e-3 ; xx [ 1 ] = 0.01953060282014866 ; xx [ 2 ] =
0.1060315916205751 ; pm_math_Quaternion_xform_ra ( xx + 24 , xx + 0 , xx + 20
) ; xx [ 0 ] = 0.1355588038247184 + xx [ 20 ] ; xx [ 1 ] =
3.841378580673172e-3 - xx [ 21 ] ; xx [ 2 ] = 1.121139195080949 - xx [ 22 ] ;
xx [ 3 ] = 1.495693379815366e-3 ; xx [ 5 ] = xx [ 4 ] * state [ 4 ] ; xx [ 13
] = cos ( xx [ 5 ] ) ; xx [ 20 ] = 0.1187086636215266 ; xx [ 21 ] = sin ( xx
[ 5 ] ) ; xx [ 5 ] = xx [ 3 ] * xx [ 13 ] + xx [ 20 ] * xx [ 21 ] ; xx [ 22 ]
= - xx [ 5 ] ; xx [ 23 ] = 0.9929181650975998 ; xx [ 28 ] =
4.419672128196023e-3 ; xx [ 29 ] = xx [ 23 ] * xx [ 13 ] + xx [ 28 ] * xx [
21 ] ; xx [ 30 ] = xx [ 20 ] * xx [ 13 ] - xx [ 3 ] * xx [ 21 ] ; xx [ 3 ] =
xx [ 23 ] * xx [ 21 ] - xx [ 28 ] * xx [ 13 ] ; xx [ 13 ] = 2.0 ; xx [ 31 ] =
xx [ 29 ] ; xx [ 32 ] = xx [ 30 ] ; xx [ 33 ] = xx [ 3 ] ; xx [ 20 ] =
0.010001 ; xx [ 21 ] = xx [ 3 ] * xx [ 20 ] ; xx [ 23 ] = 0.1106342046522274
; xx [ 28 ] = xx [ 3 ] * xx [ 23 ] ; xx [ 34 ] = xx [ 20 ] * xx [ 29 ] + xx [
30 ] * xx [ 23 ] ; xx [ 35 ] = - xx [ 21 ] ; xx [ 36 ] = - xx [ 28 ] ; xx [
37 ] = xx [ 34 ] ; pm_math_Vector3_cross_ra ( xx + 31 , xx + 35 , xx + 38 ) ;
xx [ 31 ] = 0.1316810185882336 - ( xx [ 13 ] * ( xx [ 38 ] + xx [ 21 ] * xx [
5 ] ) - xx [ 23 ] ) ; xx [ 21 ] = 9.011414711072623e-3 + xx [ 20 ] + ( xx [
28 ] * xx [ 5 ] + xx [ 39 ] ) * xx [ 13 ] ; xx [ 20 ] = - xx [ 21 ] ; xx [ 28
] = 0.1047270297279631 - ( xx [ 40 ] - xx [ 34 ] * xx [ 5 ] ) * xx [ 13 ] ;
xx [ 32 ] = - 0.9999999999983461 ; xx [ 33 ] = - 2.156793422192216e-7 ; xx [
34 ] = 5.859787807760419e-8 ; xx [ 35 ] = 1.804939452482168e-6 ; xx [ 5 ] =
xx [ 4 ] * state [ 6 ] ; xx [ 36 ] = 3.609878930277421e-6 ; xx [ 37 ] = sin (
xx [ 5 ] ) ; xx [ 38 ] = 0.9999999999933915 ; xx [ 39 ] =
4.313584731630016e-7 ; xx [ 40 ] = cos ( xx [ 5 ] ) ; xx [ 41 ] = xx [ 36 ] *
xx [ 37 ] ; xx [ 42 ] = - ( xx [ 38 ] * xx [ 37 ] ) ; xx [ 43 ] = xx [ 39 ] *
xx [ 37 ] ; pm_math_Quaternion_compose_ra ( xx + 32 , xx + 40 , xx + 44 ) ;
xx [ 32 ] = 7.54929787758902e-8 ; xx [ 33 ] = - 0.0199999879359847 ; xx [ 34
] = - 0.05090199292298809 ; pm_math_Quaternion_xform_ra ( xx + 44 , xx + 32 ,
xx + 40 ) ; xx [ 5 ] = 0.1106342046522229 - xx [ 40 ] ; xx [ 32 ] =
9.999999999962842e-3 + xx [ 41 ] ; xx [ 33 ] = - xx [ 32 ] ; xx [ 34 ] = - xx
[ 42 ] ; xx [ 48 ] = - 1.216632498952289e-6 ; xx [ 49 ] = - 0.99844426994826
; xx [ 50 ] = 0.05575876438621875 ; xx [ 51 ] = 3.580316125383367e-7 ; xx [
35 ] = xx [ 4 ] * state [ 8 ] ; xx [ 37 ] = 5.108363663771844e-7 ; xx [ 40 ]
= sin ( xx [ 35 ] ) ; xx [ 41 ] = 2.027680660063491e-6 ; xx [ 43 ] =
0.9999999999978137 ; xx [ 52 ] = cos ( xx [ 35 ] ) ; xx [ 53 ] = - ( xx [ 37
] * xx [ 40 ] ) ; xx [ 54 ] = xx [ 41 ] * xx [ 40 ] ; xx [ 55 ] = - ( xx [ 43
] * xx [ 40 ] ) ; pm_math_Quaternion_compose_ra ( xx + 48 , xx + 52 , xx + 56
) ; xx [ 35 ] = 1.581919911297324e-3 ; xx [ 40 ] = 3.043703554484884e-3 ; xx
[ 48 ] = 0.4695245943326235 ; xx [ 49 ] = - xx [ 35 ] ; xx [ 50 ] = xx [ 40 ]
; xx [ 51 ] = - xx [ 48 ] ; pm_math_Quaternion_xform_ra ( xx + 56 , xx + 49 ,
xx + 52 ) ; xx [ 49 ] = 1.327625287357436e-7 - xx [ 52 ] ; xx [ 50 ] =
4.885928012311413e-7 - xx [ 53 ] ; xx [ 51 ] = 1.053813650826583 - xx [ 54 ]
; xx [ 52 ] = - 0.9984440686594036 ; xx [ 53 ] = - 1.210096473124015e-6 ; xx
[ 54 ] = - 2.410217961564497e-7 ; xx [ 55 ] = 0.0557623686488803 ; xx [ 60 ]
= xx [ 4 ] * state [ 10 ] ; xx [ 61 ] = 1.171949776569064e-7 ; xx [ 62 ] =
sin ( xx [ 60 ] ) ; xx [ 63 ] = 4.31358898227365e-7 ; xx [ 64 ] = cos ( xx [
60 ] ) ; xx [ 65 ] = xx [ 61 ] * xx [ 62 ] ; xx [ 66 ] = xx [ 63 ] * xx [ 62
] ; xx [ 67 ] = xx [ 62 ] ; pm_math_Quaternion_compose_ra ( xx + 52 , xx + 64
, xx + 68 ) ; xx [ 52 ] = 2.273313047474082e-8 ; xx [ 53 ] =
8.360821906871329e-8 ; xx [ 54 ] = 0.1149560547068914 ;
pm_math_Quaternion_xform_ra ( xx + 68 , xx + 52 , xx + 64 ) ; xx [ 52 ] = - (
xx [ 35 ] + xx [ 64 ] ) ; xx [ 35 ] = xx [ 40 ] - xx [ 65 ] ; xx [ 40 ] = - (
xx [ 48 ] + xx [ 66 ] ) ; xx [ 64 ] = 0.08297193236559158 ; xx [ 65 ] = -
0.6989660525715147 ; xx [ 66 ] = 0.08508706173602215 ; xx [ 67 ] = -
0.7052108250142259 ; xx [ 48 ] = xx [ 4 ] * state [ 12 ] ; xx [ 53 ] =
0.2359713450861992 ; xx [ 54 ] = sin ( xx [ 48 ] ) ; xx [ 55 ] =
0.9717517007293006 ; xx [ 60 ] = 4.019505930177081e-3 ; xx [ 72 ] = cos ( xx
[ 48 ] ) ; xx [ 73 ] = - ( xx [ 53 ] * xx [ 54 ] ) ; xx [ 74 ] = - ( xx [ 55
] * xx [ 54 ] ) ; xx [ 75 ] = - ( xx [ 60 ] * xx [ 54 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 64 , xx + 72 , xx + 76 ) ; xx [ 48 ] =
0.1355588038249296 ; xx [ 64 ] = 9.897538421414293e-3 ; xx [ 65 ] =
0.03896394932685158 ; xx [ 66 ] = 0.1061120224367209 ;
pm_math_Quaternion_xform_ra ( xx + 76 , xx + 64 , xx + 72 ) ; xx [ 54 ] =
0.01615962141932673 ; xx [ 62 ] = 0.5791292142236284 ; xx [ 64 ] =
1.495622320918377e-3 ; xx [ 65 ] = xx [ 4 ] * state [ 14 ] ; xx [ 4 ] = cos (
xx [ 65 ] ) ; xx [ 66 ] = 0.1188356543686412 ; xx [ 67 ] = sin ( xx [ 65 ] )
; xx [ 65 ] = xx [ 64 ] * xx [ 4 ] - xx [ 66 ] * xx [ 67 ] ; xx [ 75 ] =
4.415720941208234e-3 ; xx [ 80 ] = 0.9929029921262297 ; xx [ 81 ] = xx [ 75 ]
* xx [ 67 ] - xx [ 80 ] * xx [ 4 ] ; xx [ 82 ] = xx [ 64 ] * xx [ 67 ] + xx [
66 ] * xx [ 4 ] ; xx [ 64 ] = xx [ 75 ] * xx [ 4 ] + xx [ 80 ] * xx [ 67 ] ;
xx [ 4 ] = - xx [ 64 ] ; xx [ 83 ] = xx [ 81 ] ; xx [ 84 ] = xx [ 82 ] ; xx [
85 ] = xx [ 4 ] ; xx [ 66 ] = 0.01000100000000001 ; xx [ 67 ] = xx [ 64 ] *
xx [ 66 ] ; xx [ 75 ] = 0.1106342046522275 ; xx [ 80 ] = xx [ 64 ] * xx [ 75
] ; xx [ 64 ] = xx [ 66 ] * xx [ 81 ] + xx [ 82 ] * xx [ 75 ] ; xx [ 86 ] =
xx [ 67 ] ; xx [ 87 ] = xx [ 80 ] ; xx [ 88 ] = xx [ 64 ] ;
pm_math_Vector3_cross_ra ( xx + 83 , xx + 86 , xx + 89 ) ; xx [ 83 ] = - (
0.1316778234017356 + xx [ 13 ] * ( xx [ 89 ] + xx [ 67 ] * xx [ 65 ] ) - xx [
75 ] ) ; xx [ 67 ] = - ( 8.979068216552373e-3 + xx [ 66 ] + ( xx [ 80 ] * xx
[ 65 ] + xx [ 90 ] ) * xx [ 13 ] ) ; xx [ 66 ] = 0.1047281200976424 - ( xx [
65 ] * xx [ 64 ] + xx [ 91 ] ) * xx [ 13 ] ; xx [ 84 ] = xx [ 22 ] ; xx [ 85
] = xx [ 29 ] ; xx [ 86 ] = xx [ 30 ] ; xx [ 87 ] = xx [ 3 ] ;
pm_math_Quaternion_compose_ra ( xx + 24 , xx + 84 , xx + 88 ) ; xx [ 92 ] =
xx [ 31 ] ; xx [ 93 ] = xx [ 20 ] ; xx [ 94 ] = xx [ 28 ] ;
pm_math_Quaternion_xform_ra ( xx + 24 , xx + 92 , xx + 95 ) ; xx [ 13 ] = xx
[ 95 ] - xx [ 0 ] ; xx [ 64 ] = xx [ 96 ] + xx [ 1 ] ; xx [ 80 ] = xx [ 97 ]
+ xx [ 2 ] ; pm_math_Quaternion_compose_ra ( xx + 88 , xx + 44 , xx + 95 ) ;
xx [ 99 ] = xx [ 5 ] ; xx [ 100 ] = xx [ 33 ] ; xx [ 101 ] = xx [ 34 ] ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 99 , xx + 102 ) ; xx [ 105 ] =
xx [ 102 ] + xx [ 13 ] ; xx [ 106 ] = xx [ 103 ] + xx [ 64 ] ; xx [ 102 ] =
xx [ 104 ] + xx [ 80 ] ; pm_math_Quaternion_compose_ra ( xx + 95 , xx + 56 ,
xx + 107 ) ; pm_math_Quaternion_xform_ra ( xx + 95 , xx + 49 , xx + 111 ) ;
xx [ 103 ] = xx [ 111 ] + xx [ 105 ] ; xx [ 104 ] = xx [ 112 ] + xx [ 106 ] ;
xx [ 111 ] = xx [ 113 ] + xx [ 102 ] ; pm_math_Quaternion_compose_ra ( xx +
44 , xx + 56 , xx + 112 ) ; pm_math_Quaternion_xform_ra ( xx + 44 , xx + 49 ,
xx + 116 ) ; xx [ 119 ] = xx [ 116 ] + xx [ 5 ] ; xx [ 120 ] = xx [ 117 ] -
xx [ 32 ] ; xx [ 116 ] = xx [ 118 ] - xx [ 42 ] ;
pm_math_Quaternion_compose_ra ( xx + 84 , xx + 112 , xx + 121 ) ; xx [ 125 ]
= xx [ 119 ] ; xx [ 126 ] = xx [ 120 ] ; xx [ 127 ] = xx [ 116 ] ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 125 , xx + 128 ) ;
pm_math_Quaternion_compose_ra ( xx + 107 , xx + 68 , xx + 131 ) ; xx [ 125 ]
= xx [ 52 ] ; xx [ 126 ] = xx [ 35 ] ; xx [ 127 ] = xx [ 40 ] ;
pm_math_Quaternion_xform_ra ( xx + 107 , xx + 125 , xx + 135 ) ; xx [ 138 ] =
xx [ 65 ] ; xx [ 139 ] = xx [ 81 ] ; xx [ 140 ] = xx [ 82 ] ; xx [ 141 ] = xx
[ 4 ] ; pm_math_Quaternion_compose_ra ( xx + 76 , xx + 138 , xx + 142 ) ; xx
[ 146 ] = xx [ 83 ] ; xx [ 147 ] = xx [ 67 ] ; xx [ 148 ] = xx [ 66 ] ;
pm_math_Quaternion_xform_ra ( xx + 76 , xx + 146 , xx + 149 ) ;
pm_math_Quaternion_compose_ra ( xx + 56 , xx + 68 , xx + 152 ) ;
pm_math_Quaternion_xform_ra ( xx + 56 , xx + 125 , xx + 156 ) ; xx [ 117 ] =
xx [ 156 ] + xx [ 49 ] ; xx [ 118 ] = xx [ 157 ] + xx [ 50 ] ; xx [ 156 ] =
xx [ 158 ] + xx [ 51 ] ; pm_math_Quaternion_compose_ra ( xx + 44 , xx + 152 ,
xx + 157 ) ; xx [ 161 ] = xx [ 117 ] ; xx [ 162 ] = xx [ 118 ] ; xx [ 163 ] =
xx [ 156 ] ; pm_math_Quaternion_xform_ra ( xx + 44 , xx + 161 , xx + 164 ) ;
xx [ 161 ] = xx [ 164 ] + xx [ 5 ] ; xx [ 162 ] = xx [ 165 ] - xx [ 32 ] ; xx
[ 32 ] = xx [ 166 ] - xx [ 42 ] ; pm_math_Quaternion_compose_ra ( xx + 84 ,
xx + 157 , xx + 163 ) ; xx [ 167 ] = xx [ 161 ] ; xx [ 168 ] = xx [ 162 ] ;
xx [ 169 ] = xx [ 32 ] ; pm_math_Quaternion_xform_ra ( xx + 84 , xx + 167 ,
xx + 170 ) ; pm_math_Quaternion_compose_ra ( xx + 84 , xx + 44 , xx + 173 ) ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 99 , xx + 167 ) ; xx [ 42 ] = -
( xx [ 7 ] * state [ 3 ] ) ; xx [ 7 ] = xx [ 18 ] * state [ 3 ] ; xx [ 18 ] =
xx [ 19 ] * state [ 3 ] ; xx [ 19 ] = 0.1029642730927401 * state [ 3 ] ; xx [
177 ] = 0.02497328869161739 * state [ 3 ] ; xx [ 178 ] = 4.179086652678059e-4
* state [ 3 ] ; xx [ 179 ] = xx [ 42 ] ; xx [ 180 ] = xx [ 7 ] ; xx [ 181 ] =
xx [ 18 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 179 , xx +
182 ) ; xx [ 185 ] = xx [ 183 ] + state [ 5 ] ; pm_math_Vector3_cross_ra ( xx
+ 179 , xx + 92 , xx + 186 ) ; xx [ 92 ] = xx [ 186 ] - xx [ 19 ] ; xx [ 93 ]
= xx [ 187 ] - xx [ 177 ] ; xx [ 94 ] = xx [ 188 ] - xx [ 178 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 92 , xx + 179 ) ; xx [ 84
] = xx [ 181 ] - xx [ 23 ] * state [ 5 ] ; xx [ 85 ] = xx [ 182 ] ; xx [ 86 ]
= xx [ 185 ] ; xx [ 87 ] = xx [ 184 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 44 , xx + 85 , xx + 92 ) ; xx [ 23 ] = xx [ 92 ] + xx [ 36 ] * state [ 7
] ; xx [ 36 ] = xx [ 93 ] - xx [ 38 ] * state [ 7 ] ; xx [ 38 ] = xx [ 94 ] +
xx [ 39 ] * state [ 7 ] ; pm_math_Vector3_cross_ra ( xx + 85 , xx + 99 , xx +
92 ) ; xx [ 85 ] = xx [ 92 ] + xx [ 179 ] ; xx [ 86 ] = xx [ 93 ] + xx [ 180
] ; xx [ 87 ] = xx [ 94 ] + xx [ 84 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 44 , xx + 85 , xx + 92 ) ; xx [ 39 ] = xx [ 92 ] - 0.05090200154981597 *
state [ 7 ] ; xx [ 85 ] = xx [ 93 ] - 1.837500643263612e-7 * state [ 7 ] ; xx
[ 86 ] = xx [ 94 ] - 3.295443719477511e-9 * state [ 7 ] ; xx [ 92 ] = xx [ 23
] ; xx [ 93 ] = xx [ 36 ] ; xx [ 94 ] = xx [ 38 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 56 , xx + 92 , xx + 99 ) ; xx [ 87
] = xx [ 99 ] - xx [ 37 ] * state [ 9 ] ; xx [ 37 ] = xx [ 100 ] + xx [ 41 ]
* state [ 9 ] ; xx [ 41 ] = xx [ 101 ] - xx [ 43 ] * state [ 9 ] ;
pm_math_Vector3_cross_ra ( xx + 92 , xx + 49 , xx + 99 ) ; xx [ 92 ] = xx [
99 ] + xx [ 39 ] ; xx [ 93 ] = xx [ 100 ] + xx [ 85 ] ; xx [ 94 ] = xx [ 101
] + xx [ 86 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 56 , xx + 92 , xx +
99 ) ; xx [ 43 ] = xx [ 99 ] - 3.042751508538877e-3 * state [ 9 ] ; xx [ 92 ]
= xx [ 100 ] - 1.581680061056172e-3 * state [ 9 ] ; xx [ 93 ] = xx [ 101 ] -
1.652793945804558e-9 * state [ 9 ] ; xx [ 99 ] = xx [ 87 ] ; xx [ 100 ] = xx
[ 37 ] ; xx [ 101 ] = xx [ 41 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
68 , xx + 99 , xx + 186 ) ; pm_math_Vector3_cross_ra ( xx + 99 , xx + 125 ,
xx + 189 ) ; xx [ 99 ] = xx [ 189 ] + xx [ 43 ] ; xx [ 100 ] = xx [ 190 ] +
xx [ 92 ] ; xx [ 101 ] = xx [ 191 ] + xx [ 93 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 68 , xx + 99 , xx + 125 ) ; xx [ 94
] = - ( xx [ 53 ] * state [ 13 ] ) ; xx [ 53 ] = - ( xx [ 55 ] * state [ 13 ]
) ; xx [ 55 ] = - ( xx [ 60 ] * state [ 13 ] ) ; xx [ 60 ] =
0.1029579224453269 * state [ 13 ] ; xx [ 99 ] = 0.02499961344983095 * state [
13 ] ; xx [ 100 ] = 4.235742615152655e-4 * state [ 13 ] ; xx [ 189 ] = xx [
94 ] ; xx [ 190 ] = xx [ 53 ] ; xx [ 191 ] = xx [ 55 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 138 , xx + 189 , xx + 192 ) ;
pm_math_Vector3_cross_ra ( xx + 189 , xx + 146 , xx + 195 ) ; xx [ 146 ] = xx
[ 195 ] + xx [ 60 ] ; xx [ 147 ] = xx [ 196 ] - xx [ 99 ] ; xx [ 148 ] = xx [
197 ] - xx [ 100 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 138 , xx + 146
, xx + 189 ) ; motionData [ 0 ] = xx [ 14 ] ; motionData [ 1 ] = xx [ 15 ] ;
motionData [ 2 ] = xx [ 16 ] ; motionData [ 3 ] = xx [ 17 ] ; motionData [ 4
] = 0.1106597392994804 - xx [ 10 ] ; motionData [ 5 ] = 0.09384137858119018 -
xx [ 11 ] ; motionData [ 6 ] = 0.1633904978457604 - xx [ 12 ] ; motionData [
7 ] = xx [ 24 ] ; motionData [ 8 ] = xx [ 25 ] ; motionData [ 9 ] = xx [ 26 ]
; motionData [ 10 ] = xx [ 27 ] ; motionData [ 11 ] = - xx [ 0 ] ; motionData
[ 12 ] = xx [ 1 ] ; motionData [ 13 ] = xx [ 2 ] ; motionData [ 14 ] = xx [
22 ] ; motionData [ 15 ] = xx [ 29 ] ; motionData [ 16 ] = xx [ 30 ] ;
motionData [ 17 ] = xx [ 3 ] ; motionData [ 18 ] = xx [ 31 ] ; motionData [
19 ] = xx [ 20 ] ; motionData [ 20 ] = xx [ 28 ] ; motionData [ 21 ] = xx [
44 ] ; motionData [ 22 ] = xx [ 45 ] ; motionData [ 23 ] = xx [ 46 ] ;
motionData [ 24 ] = xx [ 47 ] ; motionData [ 25 ] = xx [ 5 ] ; motionData [
26 ] = xx [ 33 ] ; motionData [ 27 ] = xx [ 34 ] ; motionData [ 28 ] = xx [
56 ] ; motionData [ 29 ] = xx [ 57 ] ; motionData [ 30 ] = xx [ 58 ] ;
motionData [ 31 ] = xx [ 59 ] ; motionData [ 32 ] = xx [ 49 ] ; motionData [
33 ] = xx [ 50 ] ; motionData [ 34 ] = xx [ 51 ] ; motionData [ 35 ] = xx [
68 ] ; motionData [ 36 ] = xx [ 69 ] ; motionData [ 37 ] = xx [ 70 ] ;
motionData [ 38 ] = xx [ 71 ] ; motionData [ 39 ] = xx [ 52 ] ; motionData [
40 ] = xx [ 35 ] ; motionData [ 41 ] = xx [ 40 ] ; motionData [ 42 ] = xx [
76 ] ; motionData [ 43 ] = xx [ 77 ] ; motionData [ 44 ] = xx [ 78 ] ;
motionData [ 45 ] = xx [ 79 ] ; motionData [ 46 ] = - ( xx [ 48 ] + xx [ 72 ]
) ; motionData [ 47 ] = - ( xx [ 54 ] + xx [ 73 ] ) ; motionData [ 48 ] = - (
xx [ 62 ] + xx [ 74 ] ) ; motionData [ 49 ] = xx [ 65 ] ; motionData [ 50 ] =
xx [ 81 ] ; motionData [ 51 ] = xx [ 82 ] ; motionData [ 52 ] = xx [ 4 ] ;
motionData [ 53 ] = xx [ 83 ] ; motionData [ 54 ] = xx [ 67 ] ; motionData [
55 ] = xx [ 66 ] ; motionData [ 56 ] = xx [ 88 ] ; motionData [ 57 ] = xx [
89 ] ; motionData [ 58 ] = xx [ 90 ] ; motionData [ 59 ] = xx [ 91 ] ;
motionData [ 60 ] = xx [ 13 ] ; motionData [ 61 ] = xx [ 64 ] ; motionData [
62 ] = xx [ 80 ] ; motionData [ 63 ] = xx [ 95 ] ; motionData [ 64 ] = xx [
96 ] ; motionData [ 65 ] = xx [ 97 ] ; motionData [ 66 ] = xx [ 98 ] ;
motionData [ 67 ] = xx [ 105 ] ; motionData [ 68 ] = xx [ 106 ] ; motionData
[ 69 ] = xx [ 102 ] ; motionData [ 70 ] = xx [ 107 ] ; motionData [ 71 ] = xx
[ 108 ] ; motionData [ 72 ] = xx [ 109 ] ; motionData [ 73 ] = xx [ 110 ] ;
motionData [ 74 ] = xx [ 103 ] ; motionData [ 75 ] = xx [ 104 ] ; motionData
[ 76 ] = xx [ 111 ] ; motionData [ 77 ] = xx [ 112 ] ; motionData [ 78 ] = xx
[ 113 ] ; motionData [ 79 ] = xx [ 114 ] ; motionData [ 80 ] = xx [ 115 ] ;
motionData [ 81 ] = xx [ 119 ] ; motionData [ 82 ] = xx [ 120 ] ; motionData
[ 83 ] = xx [ 116 ] ; motionData [ 84 ] = xx [ 121 ] ; motionData [ 85 ] = xx
[ 122 ] ; motionData [ 86 ] = xx [ 123 ] ; motionData [ 87 ] = xx [ 124 ] ;
motionData [ 88 ] = xx [ 128 ] + xx [ 31 ] ; motionData [ 89 ] = xx [ 129 ] -
xx [ 21 ] ; motionData [ 90 ] = xx [ 130 ] + xx [ 28 ] ; motionData [ 91 ] =
xx [ 131 ] ; motionData [ 92 ] = xx [ 132 ] ; motionData [ 93 ] = xx [ 133 ]
; motionData [ 94 ] = xx [ 134 ] ; motionData [ 95 ] = xx [ 135 ] + xx [ 103
] ; motionData [ 96 ] = xx [ 136 ] + xx [ 104 ] ; motionData [ 97 ] = xx [
137 ] + xx [ 111 ] ; motionData [ 98 ] = xx [ 142 ] ; motionData [ 99 ] = xx
[ 143 ] ; motionData [ 100 ] = xx [ 144 ] ; motionData [ 101 ] = xx [ 145 ] ;
motionData [ 102 ] = xx [ 149 ] - xx [ 72 ] - xx [ 48 ] ; motionData [ 103 ]
= xx [ 150 ] - xx [ 73 ] - xx [ 54 ] ; motionData [ 104 ] = xx [ 151 ] - xx [
74 ] - xx [ 62 ] ; motionData [ 105 ] = xx [ 152 ] ; motionData [ 106 ] = xx
[ 153 ] ; motionData [ 107 ] = xx [ 154 ] ; motionData [ 108 ] = xx [ 155 ] ;
motionData [ 109 ] = xx [ 117 ] ; motionData [ 110 ] = xx [ 118 ] ;
motionData [ 111 ] = xx [ 156 ] ; motionData [ 112 ] = xx [ 157 ] ;
motionData [ 113 ] = xx [ 158 ] ; motionData [ 114 ] = xx [ 159 ] ;
motionData [ 115 ] = xx [ 160 ] ; motionData [ 116 ] = xx [ 161 ] ;
motionData [ 117 ] = xx [ 162 ] ; motionData [ 118 ] = xx [ 32 ] ; motionData
[ 119 ] = xx [ 163 ] ; motionData [ 120 ] = xx [ 164 ] ; motionData [ 121 ] =
xx [ 165 ] ; motionData [ 122 ] = xx [ 166 ] ; motionData [ 123 ] = xx [ 170
] + xx [ 31 ] ; motionData [ 124 ] = xx [ 171 ] - xx [ 21 ] ; motionData [
125 ] = xx [ 172 ] + xx [ 28 ] ; motionData [ 126 ] = xx [ 173 ] ; motionData
[ 127 ] = xx [ 174 ] ; motionData [ 128 ] = xx [ 175 ] ; motionData [ 129 ] =
xx [ 176 ] ; motionData [ 130 ] = xx [ 167 ] + xx [ 31 ] ; motionData [ 131 ]
= xx [ 168 ] - xx [ 21 ] ; motionData [ 132 ] = xx [ 169 ] + xx [ 28 ] ;
motionData [ 133 ] = - ( xx [ 6 ] * state [ 1 ] ) ; motionData [ 134 ] = - (
xx [ 8 ] * state [ 1 ] ) ; motionData [ 135 ] = - ( xx [ 9 ] * state [ 1 ] )
; motionData [ 136 ] = - ( 7.79151330478524e-7 * state [ 1 ] ) ; motionData [
137 ] = - ( 8.2241618240526e-4 * state [ 1 ] ) ; motionData [ 138 ] =
1.304968628300632e-8 * state [ 1 ] ; motionData [ 139 ] = xx [ 42 ] ;
motionData [ 140 ] = xx [ 7 ] ; motionData [ 141 ] = xx [ 18 ] ; motionData [
142 ] = - xx [ 19 ] ; motionData [ 143 ] = - xx [ 177 ] ; motionData [ 144 ]
= - xx [ 178 ] ; motionData [ 145 ] = xx [ 182 ] ; motionData [ 146 ] = xx [
185 ] ; motionData [ 147 ] = xx [ 184 ] ; motionData [ 148 ] = xx [ 179 ] ;
motionData [ 149 ] = xx [ 180 ] ; motionData [ 150 ] = xx [ 84 ] ; motionData
[ 151 ] = xx [ 23 ] ; motionData [ 152 ] = xx [ 36 ] ; motionData [ 153 ] =
xx [ 38 ] ; motionData [ 154 ] = xx [ 39 ] ; motionData [ 155 ] = xx [ 85 ] ;
motionData [ 156 ] = xx [ 86 ] ; motionData [ 157 ] = xx [ 87 ] ; motionData
[ 158 ] = xx [ 37 ] ; motionData [ 159 ] = xx [ 41 ] ; motionData [ 160 ] =
xx [ 43 ] ; motionData [ 161 ] = xx [ 92 ] ; motionData [ 162 ] = xx [ 93 ] ;
motionData [ 163 ] = xx [ 186 ] + xx [ 61 ] * state [ 11 ] ; motionData [ 164
] = xx [ 187 ] + xx [ 63 ] * state [ 11 ] ; motionData [ 165 ] = xx [ 188 ] +
state [ 11 ] ; motionData [ 166 ] = xx [ 125 ] + 3.402090196577556e-8 * state
[ 11 ] ; motionData [ 167 ] = xx [ 126 ] - 9.260858211838302e-9 * state [ 11
] ; motionData [ 168 ] = xx [ 127 ] + 7.674749151547277e-18 * state [ 11 ] ;
motionData [ 169 ] = xx [ 94 ] ; motionData [ 170 ] = xx [ 53 ] ; motionData
[ 171 ] = xx [ 55 ] ; motionData [ 172 ] = xx [ 60 ] ; motionData [ 173 ] = -
xx [ 99 ] ; motionData [ 174 ] = - xx [ 100 ] ; motionData [ 175 ] = xx [ 192
] ; motionData [ 176 ] = xx [ 193 ] + state [ 15 ] ; motionData [ 177 ] = xx
[ 194 ] ; motionData [ 178 ] = xx [ 189 ] ; motionData [ 179 ] = xx [ 190 ] ;
motionData [ 180 ] = xx [ 191 ] - xx [ 75 ] * state [ 15 ] ; } static size_t
computeAssemblyError_0 ( const RuntimeDerivedValuesBundle * rtdv , const int
* modeVector , const double * motionData , double * error ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; double xx [ 15 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
modeVector ; xx [ 0 ] = motionData [ 70 ] ; xx [ 1 ] = motionData [ 71 ] ; xx
[ 2 ] = motionData [ 72 ] ; xx [ 3 ] = motionData [ 73 ] ; xx [ 4 ] = -
9.980207034736295e-7 ; xx [ 5 ] = 0.9984441693056983 ; xx [ 6 ] = -
0.05576056651757455 ; xx [ 7 ] = - 3.115531069039944e-7 ;
pm_math_Quaternion_compose_ra ( xx + 0 , xx + 4 , xx + 8 ) ; xx [ 4 ] = -
1.581919911297324e-3 ; xx [ 5 ] = 3.043703554484884e-3 ; xx [ 6 ] = -
0.4695245943326235 ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 , xx + 12
) ; error [ 0 ] = xx [ 8 ] ; error [ 1 ] = - xx [ 11 ] ; error [ 2 ] = xx [
10 ] ; error [ 3 ] = xx [ 12 ] + motionData [ 74 ] - 0.04065973929946792 ;
error [ 4 ] = 0.06384137858070213 - ( xx [ 13 ] + motionData [ 75 ] ) ;
return 5 ; } static size_t computeAssemblyError_1 ( const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData , double * error ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 21 ] ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; xx [ 0 ] = motionData [
91 ] ; xx [ 1 ] = motionData [ 92 ] ; xx [ 2 ] = motionData [ 93 ] ; xx [ 3 ]
= motionData [ 94 ] ; xx [ 4 ] = 0.5000008239281672 ; xx [ 5 ] = -
0.499999234668057 ; xx [ 6 ] = - 0.5000009810096314 ; xx [ 7 ] = -
0.4999989603908367 ; pm_math_Quaternion_compose_ra ( xx + 0 , xx + 4 , xx + 8
) ; xx [ 4 ] = motionData [ 98 ] ; xx [ 5 ] = motionData [ 99 ] ; xx [ 6 ] =
motionData [ 100 ] ; xx [ 7 ] = motionData [ 101 ] ; xx [ 12 ] = 0.5 ; xx [
13 ] = xx [ 12 ] ; xx [ 14 ] = xx [ 12 ] ; xx [ 15 ] = - xx [ 12 ] ; xx [ 16
] = xx [ 12 ] ; pm_math_Quaternion_compose_ra ( xx + 4 , xx + 13 , xx + 17 )
; pm_math_Quaternion_inverseCompose_ra ( xx + 8 , xx + 17 , xx + 12 ) ; xx [
8 ] = 0.1106342046522872 ; xx [ 9 ] = 0.02999999999998754 ; xx [ 10 ] = -
1.655280357226729e-13 ; pm_math_Quaternion_xform_ra ( xx + 4 , xx + 8 , xx +
15 ) ; xx [ 4 ] = 7.54929787758902e-8 ; xx [ 5 ] = - 0.0199999879359847 ; xx
[ 6 ] = - 0.05090199292298814 ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4
, xx + 7 ) ; error [ 0 ] = xx [ 13 ] ; error [ 1 ] = xx [ 14 ] ; error [ 2 ]
= xx [ 15 ] + motionData [ 102 ] - ( xx [ 7 ] + motionData [ 95 ] ) ; error [
3 ] = xx [ 16 ] + motionData [ 103 ] - ( xx [ 8 ] + motionData [ 96 ] ) ;
error [ 4 ] = xx [ 17 ] + motionData [ 104 ] - ( xx [ 9 ] + motionData [ 97 ]
) ; return 5 ; } static size_t computeAssemblyError_2 ( const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData , double * error ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 18 ] ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; xx [ 0 ] = 0.5 ; xx [ 1
] = - xx [ 0 ] ; xx [ 2 ] = xx [ 0 ] ; xx [ 3 ] = xx [ 1 ] ; xx [ 4 ] = xx [
1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = motionData [ 63 ] ; xx [ 7 ] =
motionData [ 64 ] ; xx [ 8 ] = motionData [ 65 ] ; xx [ 9 ] = motionData [ 66
] ; xx [ 10 ] = 0.4999989603908348 ; xx [ 11 ] = - 0.5000009810096334 ; xx [
12 ] = 0.4999992346680554 ; xx [ 13 ] = 0.5000008239281687 ;
pm_math_Quaternion_compose_ra ( xx + 6 , xx + 10 , xx + 14 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 2 , xx + 14 , xx + 6 ) ; error [
0 ] = xx [ 7 ] ; error [ 1 ] = xx [ 8 ] ; return 2 ; } static size_t
computeAssemblyError_3 ( const RuntimeDerivedValuesBundle * rtdv , const int
* modeVector , const double * motionData , double * error ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; double xx [ 18 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
modeVector ; xx [ 0 ] = 0.5 ; xx [ 1 ] = - xx [ 0 ] ; xx [ 2 ] = xx [ 0 ] ;
xx [ 3 ] = xx [ 1 ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] =
motionData [ 91 ] ; xx [ 7 ] = motionData [ 92 ] ; xx [ 8 ] = motionData [ 93
] ; xx [ 9 ] = motionData [ 94 ] ; xx [ 10 ] = 0.4999992346680592 ; xx [ 11 ]
= 0.5000008239281649 ; xx [ 12 ] = - 0.4999989603908379 ; xx [ 13 ] =
0.5000009810096302 ; pm_math_Quaternion_compose_ra ( xx + 6 , xx + 10 , xx +
14 ) ; pm_math_Quaternion_inverseCompose_ra ( xx + 2 , xx + 14 , xx + 6 ) ;
error [ 0 ] = xx [ 7 ] ; error [ 1 ] = xx [ 8 ] ; return 2 ; } static size_t
computeAssemblyError_4 ( const RuntimeDerivedValuesBundle * rtdv , const int
* modeVector , const double * motionData , double * error ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; double xx [ 37 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
modeVector ; xx [ 0 ] = motionData [ 70 ] ; xx [ 1 ] = motionData [ 71 ] ; xx
[ 2 ] = motionData [ 72 ] ; xx [ 3 ] = motionData [ 73 ] ; xx [ 4 ] = -
1.581861748696638e-3 ; xx [ 5 ] = 3.04347268763923e-3 ; xx [ 6 ] = -
0.3556669982130818 ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 , xx + 7 )
; xx [ 10 ] = motionData [ 0 ] ; xx [ 11 ] = motionData [ 1 ] ; xx [ 12 ] =
motionData [ 2 ] ; xx [ 13 ] = motionData [ 3 ] ; xx [ 4 ] =
3.397648291980224e-4 ; xx [ 5 ] = 1.051662890794458e-5 ; xx [ 6 ] =
0.6830642379941189 ; pm_math_Quaternion_xform_ra ( xx + 10 , xx + 4 , xx + 14
) ; xx [ 4 ] = xx [ 7 ] + motionData [ 74 ] - ( xx [ 14 ] + motionData [ 4 ]
) ; xx [ 5 ] = xx [ 8 ] + motionData [ 75 ] - ( xx [ 15 ] + motionData [ 5 ]
) ; xx [ 6 ] = xx [ 9 ] + motionData [ 76 ] - ( xx [ 16 ] + motionData [ 6 ]
) ; xx [ 14 ] = 0.9984441693056983 ; xx [ 15 ] = 9.980207035347667e-7 ; xx [
16 ] = 3.115531069005801e-7 ; xx [ 17 ] = - 0.05576056651757455 ;
pm_math_Quaternion_compose_ra ( xx + 0 , xx + 14 , xx + 18 ) ; xx [ 0 ] = 2.0
; xx [ 1 ] = xx [ 20 ] * xx [ 21 ] ; xx [ 2 ] = xx [ 18 ] * xx [ 19 ] ; xx [
3 ] = 1.0 ; xx [ 7 ] = xx [ 19 ] * xx [ 19 ] ; xx [ 14 ] = ( xx [ 19 ] * xx [
21 ] + xx [ 18 ] * xx [ 20 ] ) * xx [ 0 ] ; xx [ 15 ] = xx [ 0 ] * ( xx [ 1 ]
- xx [ 2 ] ) ; xx [ 16 ] = xx [ 3 ] - ( xx [ 7 ] + xx [ 20 ] * xx [ 20 ] ) *
xx [ 0 ] ; xx [ 8 ] = pm_math_Vector3_dot_ra ( xx + 4 , xx + 14 ) ; xx [ 9 ]
= 0.03 ; xx [ 17 ] = xx [ 8 ] / xx [ 9 ] ; xx [ 22 ] = - 0.9999996380630076 ;
xx [ 23 ] = 7.136837994664697e-6 ; xx [ 24 ] = - 8.507112303565772e-4 ; xx [
25 ] = 1.064527084355427e-5 ; pm_math_Quaternion_compose_ra ( xx + 10 , xx +
22 , xx + 26 ) ; xx [ 10 ] = xx [ 28 ] * xx [ 28 ] ; xx [ 11 ] = xx [ 27 ] *
xx [ 29 ] ; xx [ 12 ] = xx [ 26 ] * xx [ 28 ] ; xx [ 22 ] = xx [ 3 ] - ( xx [
10 ] + xx [ 29 ] * xx [ 29 ] ) * xx [ 0 ] ; xx [ 23 ] = ( xx [ 27 ] * xx [ 28
] + xx [ 26 ] * xx [ 29 ] ) * xx [ 0 ] ; xx [ 24 ] = xx [ 0 ] * ( xx [ 11 ] -
xx [ 12 ] ) ; xx [ 30 ] = xx [ 0 ] * ( xx [ 19 ] * xx [ 20 ] - xx [ 18 ] * xx
[ 21 ] ) ; xx [ 31 ] = xx [ 3 ] - ( xx [ 7 ] + xx [ 21 ] * xx [ 21 ] ) * xx [
0 ] ; xx [ 32 ] = ( xx [ 1 ] + xx [ 2 ] ) * xx [ 0 ] ; xx [ 1 ] =
0.7071067811865476 ; pm_math_Quaternion_inverseCompose_ra ( xx + 26 , xx + 18
, xx + 33 ) ; xx [ 18 ] = ( xx [ 11 ] + xx [ 12 ] ) * xx [ 0 ] ; xx [ 19 ] =
xx [ 0 ] * ( xx [ 28 ] * xx [ 29 ] - xx [ 26 ] * xx [ 27 ] ) ; xx [ 20 ] = xx
[ 3 ] - ( xx [ 27 ] * xx [ 27 ] + xx [ 10 ] ) * xx [ 0 ] ; error [ 0 ] = ( xx
[ 17 ] + sm_core_canonicalAngle ( atan2 ( pm_math_Vector3_dot_ra ( xx + 22 ,
xx + 30 ) , pm_math_Vector3_dot_ra ( xx + 22 , xx + 14 ) ) - xx [ 17 ] ) ) *
xx [ 9 ] - xx [ 8 ] ; error [ 1 ] = xx [ 1 ] * xx [ 34 ] + xx [ 1 ] * xx [ 36
] ; error [ 2 ] = xx [ 1 ] * xx [ 35 ] - xx [ 1 ] * xx [ 33 ] ; error [ 3 ] =
- ( pm_math_Vector3_dot_ra ( xx + 4 , xx + 30 ) + xx [ 9 ] ) ; error [ 4 ] =
pm_math_Vector3_dot_ra ( xx + 4 , xx + 18 ) ; return 5 ; } size_t
test14_9449aeaa_1_computeAssemblyError ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const int *
modeVector , const double * motionData , double * error ) { ( void ) mech ; (
void ) rtdv ; ( void ) modeVector ; ( void ) motionData ; ( void ) error ;
switch ( constraintIdx ) { case 0 : return computeAssemblyError_0 ( rtdv ,
modeVector , motionData , error ) ; case 1 : return computeAssemblyError_1 (
rtdv , modeVector , motionData , error ) ; case 2 : return
computeAssemblyError_2 ( rtdv , modeVector , motionData , error ) ; case 3 :
return computeAssemblyError_3 ( rtdv , modeVector , motionData , error ) ;
case 4 : return computeAssemblyError_4 ( rtdv , modeVector , motionData ,
error ) ; } return 0 ; } static size_t computeAssemblyJacobian_0 ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * motionData , double * J ) { const double * rtdvd
= rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
double xx [ 68 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; xx
[ 0 ] = 9.87654321 ; xx [ 1 ] = motionData [ 70 ] ; xx [ 2 ] = motionData [
71 ] ; xx [ 3 ] = motionData [ 72 ] ; xx [ 4 ] = motionData [ 73 ] ; xx [ 5 ]
= - 9.980207034736295e-7 ; xx [ 6 ] = 0.9984441693056983 ; xx [ 7 ] = -
0.05576056651757455 ; xx [ 8 ] = - 3.115531069039944e-7 ;
pm_math_Quaternion_compose_ra ( xx + 1 , xx + 5 , xx + 9 ) ; xx [ 1 ] = - xx
[ 10 ] ; xx [ 2 ] = xx [ 9 ] ; xx [ 3 ] = - xx [ 12 ] ; xx [ 4 ] = xx [ 11 ]
; xx [ 9 ] = motionData [ 84 ] ; xx [ 10 ] = motionData [ 85 ] ; xx [ 11 ] =
motionData [ 86 ] ; xx [ 12 ] = motionData [ 87 ] ; xx [ 13 ] =
0.2357227559798625 ; xx [ 14 ] = 0.9718120321650099 ; xx [ 15 ] =
4.019508996436549e-3 ; xx [ 16 ] = - xx [ 13 ] ; xx [ 17 ] = xx [ 14 ] ; xx [
18 ] = xx [ 15 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 16 , xx
+ 19 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 5 , xx + 19 , xx + 22 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 1 , xx + 22 , xx + 25 ) ; xx [ 22 ] =
2.0 ; xx [ 23 ] = 1.0 ; xx [ 29 ] = ( motionData [ 77 ] * motionData [ 80 ] +
motionData [ 78 ] * motionData [ 79 ] ) * xx [ 22 ] ; xx [ 30 ] = xx [ 23 ] -
( motionData [ 80 ] * motionData [ 80 ] + motionData [ 78 ] * motionData [ 78
] ) * xx [ 22 ] ; xx [ 31 ] = xx [ 22 ] * ( motionData [ 79 ] * motionData [
80 ] - motionData [ 77 ] * motionData [ 78 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 5 , xx + 29 , xx + 32 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 1 , xx + 32 , xx + 35 ) ; xx [ 39 ] =
motionData [ 28 ] ; xx [ 40 ] = motionData [ 29 ] ; xx [ 41 ] = motionData [
30 ] ; xx [ 42 ] = motionData [ 31 ] ; xx [ 24 ] = 3.609878930277421e-6 ; xx
[ 32 ] = 0.9999999999933915 ; xx [ 33 ] = 4.313584731630016e-7 ; xx [ 43 ] =
xx [ 24 ] ; xx [ 44 ] = - xx [ 32 ] ; xx [ 45 ] = xx [ 33 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 39 , xx + 43 , xx + 46 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 5 , xx + 46 , xx + 49 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 1 , xx + 49 , xx + 5 ) ; xx [ 49 ] =
0.0 ; xx [ 50 ] = - 1.224652940634476e-16 ; xx [ 51 ] = xx [ 23 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 1 , xx + 49 , xx + 52 ) ; xx [ 1 ] = -
0.08499731596381738 ; xx [ 2 ] = - 0.7052243478362852 ; xx [ 3 ] = -
0.08288208610093117 ; xx [ 4 ] = - 0.6989739875713483 ; xx [ 5 ] = 0.5 ; xx [
23 ] = xx [ 5 ] * state [ 2 ] ; xx [ 25 ] = sin ( xx [ 23 ] ) ; xx [ 49 ] =
cos ( xx [ 23 ] ) ; xx [ 50 ] = - ( xx [ 13 ] * xx [ 25 ] ) ; xx [ 51 ] = xx
[ 14 ] * xx [ 25 ] ; xx [ 52 ] = xx [ 15 ] * xx [ 25 ] ;
pm_math_Quaternion_compose_ra ( xx + 1 , xx + 49 , xx + 56 ) ;
pm_math_Quaternion_compose_ra ( xx + 56 , xx + 9 , xx + 1 ) ; xx [ 9 ] = -
1.581919911297324e-3 ; xx [ 10 ] = 3.043703554484884e-3 ; xx [ 11 ] = -
0.4695245943326235 ; pm_math_Vector3_cross_ra ( xx + 19 , xx + 9 , xx + 12 )
; pm_math_Quaternion_xform_ra ( xx + 1 , xx + 12 , xx + 19 ) ; xx [ 1 ] =
motionData [ 88 ] ; xx [ 2 ] = motionData [ 89 ] ; xx [ 3 ] = motionData [ 90
] ; pm_math_Vector3_cross_ra ( xx + 16 , xx + 1 , xx + 12 ) ;
pm_math_Quaternion_xform_ra ( xx + 56 , xx + 12 , xx + 1 ) ; xx [ 12 ] = -
0.1029642730927401 ; xx [ 13 ] = - 0.02497328869161739 ; xx [ 14 ] = -
4.179086652678059e-4 ; pm_math_Quaternion_xform_ra ( xx + 56 , xx + 12 , xx +
15 ) ; xx [ 49 ] = motionData [ 7 ] ; xx [ 50 ] = motionData [ 8 ] ; xx [ 51
] = motionData [ 9 ] ; xx [ 52 ] = motionData [ 10 ] ; xx [ 4 ] =
1.495693379815366e-3 ; xx [ 12 ] = xx [ 5 ] * state [ 4 ] ; xx [ 13 ] = cos (
xx [ 12 ] ) ; xx [ 14 ] = 0.1187086636215266 ; xx [ 18 ] = sin ( xx [ 12 ] )
; xx [ 12 ] = xx [ 4 ] * xx [ 13 ] + xx [ 14 ] * xx [ 18 ] ; xx [ 23 ] =
0.9929181650975998 ; xx [ 25 ] = 4.419672128196023e-3 ; xx [ 34 ] = xx [ 23 ]
* xx [ 13 ] + xx [ 25 ] * xx [ 18 ] ; xx [ 35 ] = xx [ 14 ] * xx [ 13 ] - xx
[ 4 ] * xx [ 18 ] ; xx [ 4 ] = xx [ 23 ] * xx [ 18 ] - xx [ 25 ] * xx [ 13 ]
; xx [ 56 ] = - xx [ 12 ] ; xx [ 57 ] = xx [ 34 ] ; xx [ 58 ] = xx [ 35 ] ;
xx [ 59 ] = xx [ 4 ] ; pm_math_Quaternion_compose_ra ( xx + 49 , xx + 56 , xx
+ 60 ) ; xx [ 56 ] = motionData [ 77 ] ; xx [ 57 ] = motionData [ 78 ] ; xx [
58 ] = motionData [ 79 ] ; xx [ 59 ] = motionData [ 80 ] ;
pm_math_Quaternion_compose_ra ( xx + 60 , xx + 56 , xx + 64 ) ;
pm_math_Vector3_cross_ra ( xx + 29 , xx + 9 , xx + 56 ) ;
pm_math_Quaternion_xform_ra ( xx + 64 , xx + 56 , xx + 29 ) ; xx [ 56 ] = xx
[ 34 ] ; xx [ 57 ] = xx [ 35 ] ; xx [ 58 ] = xx [ 4 ] ; xx [ 13 ] = xx [ 35 ]
* motionData [ 81 ] ; xx [ 14 ] = xx [ 4 ] * motionData [ 83 ] + xx [ 34 ] *
motionData [ 81 ] ; xx [ 18 ] = xx [ 35 ] * motionData [ 83 ] ; xx [ 59 ] = -
xx [ 13 ] ; xx [ 60 ] = xx [ 14 ] ; xx [ 61 ] = - xx [ 18 ] ;
pm_math_Vector3_cross_ra ( xx + 56 , xx + 59 , xx + 62 ) ; xx [ 23 ] =
0.1106342046522274 ; xx [ 25 ] = xx [ 35 ] * xx [ 23 ] ; xx [ 56 ] = xx [ 23
] * xx [ 34 ] ; xx [ 57 ] = motionData [ 83 ] + xx [ 22 ] * ( xx [ 62 ] + xx
[ 13 ] * xx [ 12 ] ) + ( xx [ 25 ] * xx [ 12 ] - xx [ 4 ] * xx [ 56 ] ) * xx
[ 22 ] ; xx [ 58 ] = ( xx [ 63 ] - xx [ 14 ] * xx [ 12 ] ) * xx [ 22 ] - xx [
22 ] * ( xx [ 4 ] * xx [ 25 ] + xx [ 56 ] * xx [ 12 ] ) ; xx [ 59 ] = xx [ 22
] * ( xx [ 64 ] + xx [ 18 ] * xx [ 12 ] ) - ( motionData [ 81 ] - ( xx [ 56 ]
* xx [ 34 ] + xx [ 35 ] * xx [ 25 ] ) * xx [ 22 ] ) - xx [ 23 ] ;
pm_math_Quaternion_xform_ra ( xx + 49 , xx + 57 , xx + 12 ) ; xx [ 49 ] =
motionData [ 56 ] ; xx [ 50 ] = motionData [ 57 ] ; xx [ 51 ] = motionData [
58 ] ; xx [ 52 ] = motionData [ 59 ] ; xx [ 56 ] = - 0.9999999999983461 ; xx
[ 57 ] = - 2.156793422192216e-7 ; xx [ 58 ] = 5.859787807760419e-8 ; xx [ 59
] = 1.804939452482168e-6 ; xx [ 4 ] = xx [ 5 ] * state [ 6 ] ; xx [ 18 ] =
sin ( xx [ 4 ] ) ; xx [ 60 ] = cos ( xx [ 4 ] ) ; xx [ 61 ] = xx [ 24 ] * xx
[ 18 ] ; xx [ 62 ] = - ( xx [ 32 ] * xx [ 18 ] ) ; xx [ 63 ] = xx [ 33 ] * xx
[ 18 ] ; pm_math_Quaternion_compose_ra ( xx + 56 , xx + 60 , xx + 22 ) ;
pm_math_Quaternion_compose_ra ( xx + 49 , xx + 22 , xx + 32 ) ;
pm_math_Quaternion_compose_ra ( xx + 32 , xx + 39 , xx + 56 ) ;
pm_math_Vector3_cross_ra ( xx + 46 , xx + 9 , xx + 32 ) ;
pm_math_Quaternion_xform_ra ( xx + 56 , xx + 32 , xx + 9 ) ; xx [ 32 ] =
motionData [ 32 ] ; xx [ 33 ] = motionData [ 33 ] ; xx [ 34 ] = motionData [
34 ] ; pm_math_Vector3_cross_ra ( xx + 43 , xx + 32 , xx + 39 ) ;
pm_math_Quaternion_xform_ra ( xx + 22 , xx + 39 , xx + 32 ) ; xx [ 39 ] = -
0.05090200154981597 ; xx [ 40 ] = - 1.837500643263612e-7 ; xx [ 41 ] = -
3.295443719477511e-9 ; pm_math_Quaternion_xform_ra ( xx + 22 , xx + 39 , xx +
42 ) ; xx [ 22 ] = xx [ 32 ] + xx [ 42 ] ; xx [ 23 ] = xx [ 33 ] + xx [ 43 ]
; xx [ 24 ] = xx [ 34 ] + xx [ 44 ] ; pm_math_Quaternion_xform_ra ( xx + 49 ,
xx + 22 , xx + 32 ) ; xx [ 22 ] = motionData [ 63 ] ; xx [ 23 ] = motionData
[ 64 ] ; xx [ 24 ] = motionData [ 65 ] ; xx [ 25 ] = motionData [ 66 ] ; xx [
39 ] = - 1.216632498952289e-6 ; xx [ 40 ] = - 0.99844426994826 ; xx [ 41 ] =
0.05575876438621875 ; xx [ 42 ] = 3.580316125383367e-7 ; xx [ 4 ] = xx [ 5 ]
* state [ 8 ] ; xx [ 5 ] = sin ( xx [ 4 ] ) ; xx [ 43 ] = cos ( xx [ 4 ] ) ;
xx [ 44 ] = - ( 5.108363663771844e-7 * xx [ 5 ] ) ; xx [ 45 ] =
2.027680660063491e-6 * xx [ 5 ] ; xx [ 46 ] = - ( 0.9999999999978137 * xx [ 5
] ) ; pm_math_Quaternion_compose_ra ( xx + 39 , xx + 43 , xx + 47 ) ;
pm_math_Quaternion_compose_ra ( xx + 22 , xx + 47 , xx + 39 ) ; xx [ 4 ] =
3.042751508538877e-3 ; xx [ 5 ] = 1.581680061056172e-3 ; xx [ 18 ] =
1.652793945804558e-9 ; xx [ 43 ] = xx [ 4 ] ; xx [ 44 ] = xx [ 5 ] ; xx [ 45
] = xx [ 18 ] ; pm_math_Quaternion_xform_ra ( xx + 39 , xx + 43 , xx + 56 ) ;
xx [ 39 ] = - xx [ 4 ] ; xx [ 40 ] = - xx [ 5 ] ; xx [ 41 ] = - xx [ 18 ] ;
pm_math_Quaternion_xform_ra ( xx + 47 , xx + 39 , xx + 42 ) ;
pm_math_Quaternion_xform_ra ( xx + 22 , xx + 42 , xx + 39 ) ; J [ 1 ] = xx [
26 ] ; J [ 2 ] = xx [ 36 ] ; J [ 3 ] = xx [ 6 ] ; J [ 4 ] = xx [ 53 ] ; J [ 9
] = xx [ 27 ] ; J [ 10 ] = xx [ 37 ] ; J [ 11 ] = xx [ 7 ] ; J [ 12 ] = xx [
54 ] ; J [ 17 ] = xx [ 28 ] ; J [ 18 ] = xx [ 38 ] ; J [ 19 ] = xx [ 8 ] ; J
[ 20 ] = xx [ 55 ] ; J [ 25 ] = xx [ 19 ] + xx [ 1 ] + xx [ 15 ] ; J [ 26 ] =
xx [ 29 ] + xx [ 12 ] ; J [ 27 ] = xx [ 9 ] + xx [ 32 ] ; J [ 28 ] = xx [ 56
] + xx [ 39 ] ; J [ 33 ] = - ( xx [ 20 ] + xx [ 2 ] + xx [ 16 ] ) ; J [ 34 ]
= - ( xx [ 30 ] + xx [ 13 ] ) ; J [ 35 ] = - ( xx [ 10 ] + xx [ 33 ] ) ; J [
36 ] = - ( xx [ 57 ] + xx [ 40 ] ) ; return 5 ; } static size_t
computeAssemblyJacobian_1 ( const RuntimeDerivedValuesBundle * rtdv , const
double * state , const int * modeVector , const double * motionData , double
* J ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi
= rtdv -> mInts . mValues ; double xx [ 108 ] ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) modeVector ; xx [ 0 ] = 9.87654321 ; xx [ 1 ] = motionData [
91 ] ; xx [ 2 ] = motionData [ 92 ] ; xx [ 3 ] = motionData [ 93 ] ; xx [ 4 ]
= motionData [ 94 ] ; xx [ 5 ] = 0.5000008239281672 ; xx [ 6 ] = -
0.499999234668057 ; xx [ 7 ] = - 0.5000009810096314 ; xx [ 8 ] = -
0.4999989603908367 ; pm_math_Quaternion_compose_ra ( xx + 1 , xx + 5 , xx + 9
) ; xx [ 5 ] = motionData [ 98 ] ; xx [ 6 ] = motionData [ 99 ] ; xx [ 7 ] =
motionData [ 100 ] ; xx [ 8 ] = motionData [ 101 ] ; xx [ 13 ] = 0.5 ; xx [
14 ] = xx [ 13 ] ; xx [ 15 ] = xx [ 13 ] ; xx [ 16 ] = - xx [ 13 ] ; xx [ 17
] = xx [ 13 ] ; pm_math_Quaternion_compose_ra ( xx + 5 , xx + 14 , xx + 18 )
; pm_math_Quaternion_inverseCompose_ra ( xx + 9 , xx + 18 , xx + 5 ) ; xx [ 9
] = motionData [ 119 ] ; xx [ 10 ] = motionData [ 120 ] ; xx [ 11 ] =
motionData [ 121 ] ; xx [ 12 ] = motionData [ 122 ] ; xx [ 22 ] =
0.2357227559798625 ; xx [ 23 ] = 0.9718120321650099 ; xx [ 24 ] =
4.019508996436549e-3 ; xx [ 25 ] = - xx [ 22 ] ; xx [ 26 ] = xx [ 23 ] ; xx [
27 ] = xx [ 24 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 25 , xx
+ 28 ) ; pm_math_Quaternion_xform_ra ( xx + 1 , xx + 28 , xx + 31 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 18 , xx + 31 , xx + 34 ) ; xx [ 31
] = - xx [ 34 ] ; xx [ 32 ] = - xx [ 35 ] ; xx [ 33 ] = - xx [ 36 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx + 31 , xx + 34 ) ; xx [ 31 ] =
2.0 ; xx [ 32 ] = 1.0 ; xx [ 38 ] = ( motionData [ 112 ] * motionData [ 115 ]
+ motionData [ 113 ] * motionData [ 114 ] ) * xx [ 31 ] ; xx [ 39 ] = xx [ 32
] - ( motionData [ 115 ] * motionData [ 115 ] + motionData [ 113 ] *
motionData [ 113 ] ) * xx [ 31 ] ; xx [ 40 ] = xx [ 31 ] * ( motionData [ 114
] * motionData [ 115 ] - motionData [ 112 ] * motionData [ 113 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 1 , xx + 38 , xx + 41 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 18 , xx + 41 , xx + 44 ) ; xx [ 41
] = - xx [ 44 ] ; xx [ 42 ] = - xx [ 45 ] ; xx [ 43 ] = - xx [ 46 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx + 41 , xx + 44 ) ; xx [ 48 ] =
motionData [ 105 ] ; xx [ 49 ] = motionData [ 106 ] ; xx [ 50 ] = motionData
[ 107 ] ; xx [ 51 ] = motionData [ 108 ] ; xx [ 33 ] = 3.609878930277421e-6 ;
xx [ 41 ] = 0.9999999999933915 ; xx [ 42 ] = 4.313584731630016e-7 ; xx [ 52 ]
= xx [ 33 ] ; xx [ 53 ] = - xx [ 41 ] ; xx [ 54 ] = xx [ 42 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 48 , xx + 52 , xx + 55 ) ;
pm_math_Quaternion_xform_ra ( xx + 1 , xx + 55 , xx + 58 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 18 , xx + 58 , xx + 61 ) ; xx [ 58
] = - xx [ 61 ] ; xx [ 59 ] = - xx [ 62 ] ; xx [ 60 ] = - xx [ 63 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx + 58 , xx + 61 ) ; xx [ 65 ] =
motionData [ 35 ] ; xx [ 66 ] = motionData [ 36 ] ; xx [ 67 ] = motionData [
37 ] ; xx [ 68 ] = motionData [ 38 ] ; xx [ 43 ] = 5.108363663771844e-7 ; xx
[ 58 ] = 2.027680660063491e-6 ; xx [ 59 ] = 0.9999999999978137 ; xx [ 69 ] =
- xx [ 43 ] ; xx [ 70 ] = xx [ 58 ] ; xx [ 71 ] = - xx [ 59 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 65 , xx + 69 , xx + 72 ) ;
pm_math_Quaternion_xform_ra ( xx + 1 , xx + 72 , xx + 75 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 18 , xx + 75 , xx + 1 ) ; xx [ 75 ]
= - xx [ 1 ] ; xx [ 76 ] = - xx [ 2 ] ; xx [ 77 ] = - xx [ 3 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx + 75 , xx + 1 ) ; xx [ 60 ] =
1.171949776569064e-7 ; xx [ 75 ] = 4.31358898227365e-7 ; xx [ 76 ] =
motionData [ 93 ] - xx [ 75 ] * motionData [ 94 ] ; xx [ 77 ] = motionData [
92 ] ; xx [ 78 ] = motionData [ 93 ] ; xx [ 79 ] = motionData [ 94 ] ; xx [
80 ] = xx [ 60 ] * motionData [ 94 ] - motionData [ 92 ] ; xx [ 81 ] = xx [
75 ] * motionData [ 92 ] - xx [ 60 ] * motionData [ 93 ] ; xx [ 82 ] = xx [
76 ] ; xx [ 83 ] = xx [ 80 ] ; xx [ 84 ] = xx [ 81 ] ;
pm_math_Vector3_cross_ra ( xx + 77 , xx + 82 , xx + 85 ) ; xx [ 77 ] = xx [
60 ] + ( xx [ 76 ] * motionData [ 91 ] + xx [ 85 ] ) * xx [ 31 ] ; xx [ 78 ]
= xx [ 75 ] + ( xx [ 80 ] * motionData [ 91 ] + xx [ 86 ] ) * xx [ 31 ] ; xx
[ 79 ] = xx [ 32 ] + ( xx [ 81 ] * motionData [ 91 ] + xx [ 87 ] ) * xx [ 31
] ; pm_math_Quaternion_inverseXform_ra ( xx + 18 , xx + 77 , xx + 80 ) ; xx [
18 ] = - xx [ 80 ] ; xx [ 19 ] = - xx [ 81 ] ; xx [ 20 ] = - xx [ 82 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx + 18 , xx + 76 ) ; xx [ 18 ] =
motionData [ 49 ] ; xx [ 19 ] = motionData [ 50 ] ; xx [ 20 ] = motionData [
51 ] ; xx [ 21 ] = motionData [ 52 ] ; xx [ 80 ] = 0.2359713450861992 ; xx [
81 ] = 0.9717517007293006 ; xx [ 82 ] = 4.019505930177081e-3 ; xx [ 83 ] = -
xx [ 80 ] ; xx [ 84 ] = - xx [ 81 ] ; xx [ 85 ] = - xx [ 82 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 18 , xx + 83 , xx + 86 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 14 , xx + 86 , xx + 89 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx + 89 , xx + 14 ) ; xx [ 89 ] =
0.0 ; xx [ 90 ] = xx [ 89 ] ; xx [ 91 ] = xx [ 89 ] ; xx [ 92 ] = - xx [ 32 ]
; pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx + 90 , xx + 93 ) ; xx [ 4 ] =
- 0.08499731596381738 ; xx [ 5 ] = - 0.7052243478362852 ; xx [ 6 ] = -
0.08288208610093117 ; xx [ 7 ] = - 0.6989739875713483 ; xx [ 1 ] = xx [ 13 ]
* state [ 2 ] ; xx [ 8 ] = sin ( xx [ 1 ] ) ; xx [ 89 ] = cos ( xx [ 1 ] ) ;
xx [ 90 ] = - ( xx [ 22 ] * xx [ 8 ] ) ; xx [ 91 ] = xx [ 23 ] * xx [ 8 ] ;
xx [ 92 ] = xx [ 24 ] * xx [ 8 ] ; pm_math_Quaternion_compose_ra ( xx + 4 ,
xx + 89 , xx + 96 ) ; pm_math_Quaternion_compose_ra ( xx + 96 , xx + 9 , xx +
4 ) ; xx [ 8 ] = 7.54929787758902e-8 ; xx [ 9 ] = - 0.0199999879359847 ; xx [
10 ] = - 0.05090199292298814 ; pm_math_Vector3_cross_ra ( xx + 28 , xx + 8 ,
xx + 22 ) ; pm_math_Quaternion_xform_ra ( xx + 4 , xx + 22 , xx + 28 ) ; xx [
4 ] = motionData [ 123 ] ; xx [ 5 ] = motionData [ 124 ] ; xx [ 6 ] =
motionData [ 125 ] ; pm_math_Vector3_cross_ra ( xx + 25 , xx + 4 , xx + 22 )
; pm_math_Quaternion_xform_ra ( xx + 96 , xx + 22 , xx + 4 ) ; xx [ 22 ] = -
0.1029642730927401 ; xx [ 23 ] = - 0.02497328869161739 ; xx [ 24 ] = -
4.179086652678059e-4 ; pm_math_Quaternion_xform_ra ( xx + 96 , xx + 22 , xx +
25 ) ; xx [ 89 ] = motionData [ 7 ] ; xx [ 90 ] = motionData [ 8 ] ; xx [ 91
] = motionData [ 9 ] ; xx [ 92 ] = motionData [ 10 ] ; xx [ 1 ] =
1.495693379815366e-3 ; xx [ 7 ] = xx [ 13 ] * state [ 4 ] ; xx [ 11 ] = cos (
xx [ 7 ] ) ; xx [ 12 ] = 0.1187086636215266 ; xx [ 14 ] = sin ( xx [ 7 ] ) ;
xx [ 7 ] = xx [ 1 ] * xx [ 11 ] + xx [ 12 ] * xx [ 14 ] ; xx [ 17 ] =
0.9929181650975998 ; xx [ 22 ] = 4.419672128196023e-3 ; xx [ 23 ] = xx [ 17 ]
* xx [ 11 ] + xx [ 22 ] * xx [ 14 ] ; xx [ 24 ] = xx [ 12 ] * xx [ 11 ] - xx
[ 1 ] * xx [ 14 ] ; xx [ 1 ] = xx [ 17 ] * xx [ 14 ] - xx [ 22 ] * xx [ 11 ]
; xx [ 96 ] = - xx [ 7 ] ; xx [ 97 ] = xx [ 23 ] ; xx [ 98 ] = xx [ 24 ] ; xx
[ 99 ] = xx [ 1 ] ; pm_math_Quaternion_compose_ra ( xx + 89 , xx + 96 , xx +
100 ) ; xx [ 96 ] = motionData [ 112 ] ; xx [ 97 ] = motionData [ 113 ] ; xx
[ 98 ] = motionData [ 114 ] ; xx [ 99 ] = motionData [ 115 ] ;
pm_math_Quaternion_compose_ra ( xx + 100 , xx + 96 , xx + 104 ) ;
pm_math_Vector3_cross_ra ( xx + 38 , xx + 8 , xx + 96 ) ;
pm_math_Quaternion_xform_ra ( xx + 104 , xx + 96 , xx + 37 ) ; xx [ 96 ] = xx
[ 23 ] ; xx [ 97 ] = xx [ 24 ] ; xx [ 98 ] = xx [ 1 ] ; xx [ 11 ] = xx [ 24 ]
* motionData [ 116 ] ; xx [ 12 ] = xx [ 1 ] * motionData [ 118 ] + xx [ 23 ]
* motionData [ 116 ] ; xx [ 14 ] = xx [ 24 ] * motionData [ 118 ] ; xx [ 99 ]
= - xx [ 11 ] ; xx [ 100 ] = xx [ 12 ] ; xx [ 101 ] = - xx [ 14 ] ;
pm_math_Vector3_cross_ra ( xx + 96 , xx + 99 , xx + 102 ) ; xx [ 17 ] =
0.1106342046522274 ; xx [ 22 ] = xx [ 24 ] * xx [ 17 ] ; xx [ 32 ] = xx [ 17
] * xx [ 23 ] ; xx [ 96 ] = motionData [ 118 ] + xx [ 31 ] * ( xx [ 102 ] +
xx [ 11 ] * xx [ 7 ] ) + ( xx [ 22 ] * xx [ 7 ] - xx [ 1 ] * xx [ 32 ] ) * xx
[ 31 ] ; xx [ 97 ] = ( xx [ 103 ] - xx [ 12 ] * xx [ 7 ] ) * xx [ 31 ] - xx [
31 ] * ( xx [ 1 ] * xx [ 22 ] + xx [ 32 ] * xx [ 7 ] ) ; xx [ 98 ] = xx [ 31
] * ( xx [ 104 ] + xx [ 14 ] * xx [ 7 ] ) - ( motionData [ 116 ] - ( xx [ 32
] * xx [ 23 ] + xx [ 24 ] * xx [ 22 ] ) * xx [ 31 ] ) - xx [ 17 ] ;
pm_math_Quaternion_xform_ra ( xx + 89 , xx + 96 , xx + 22 ) ; xx [ 89 ] =
motionData [ 56 ] ; xx [ 90 ] = motionData [ 57 ] ; xx [ 91 ] = motionData [
58 ] ; xx [ 92 ] = motionData [ 59 ] ; xx [ 96 ] = - 0.9999999999983461 ; xx
[ 97 ] = - 2.156793422192216e-7 ; xx [ 98 ] = 5.859787807760419e-8 ; xx [ 99
] = 1.804939452482168e-6 ; xx [ 1 ] = xx [ 13 ] * state [ 6 ] ; xx [ 7 ] =
sin ( xx [ 1 ] ) ; xx [ 100 ] = cos ( xx [ 1 ] ) ; xx [ 101 ] = xx [ 33 ] *
xx [ 7 ] ; xx [ 102 ] = - ( xx [ 41 ] * xx [ 7 ] ) ; xx [ 103 ] = xx [ 42 ] *
xx [ 7 ] ; pm_math_Quaternion_compose_ra ( xx + 96 , xx + 100 , xx + 104 ) ;
pm_math_Quaternion_compose_ra ( xx + 89 , xx + 104 , xx + 96 ) ;
pm_math_Quaternion_compose_ra ( xx + 96 , xx + 48 , xx + 100 ) ;
pm_math_Vector3_cross_ra ( xx + 55 , xx + 8 , xx + 32 ) ;
pm_math_Quaternion_xform_ra ( xx + 100 , xx + 32 , xx + 40 ) ; xx [ 32 ] =
motionData [ 109 ] ; xx [ 33 ] = motionData [ 110 ] ; xx [ 34 ] = motionData
[ 111 ] ; pm_math_Vector3_cross_ra ( xx + 52 , xx + 32 , xx + 47 ) ;
pm_math_Quaternion_xform_ra ( xx + 104 , xx + 47 , xx + 32 ) ; xx [ 47 ] = -
0.05090200154981597 ; xx [ 48 ] = - 1.837500643263612e-7 ; xx [ 49 ] = -
3.295443719477511e-9 ; pm_math_Quaternion_xform_ra ( xx + 104 , xx + 47 , xx
+ 50 ) ; xx [ 47 ] = xx [ 32 ] + xx [ 50 ] ; xx [ 48 ] = xx [ 33 ] + xx [ 51
] ; xx [ 49 ] = xx [ 34 ] + xx [ 52 ] ; pm_math_Quaternion_xform_ra ( xx + 89
, xx + 47 , xx + 32 ) ; xx [ 47 ] = motionData [ 63 ] ; xx [ 48 ] =
motionData [ 64 ] ; xx [ 49 ] = motionData [ 65 ] ; xx [ 50 ] = motionData [
66 ] ; xx [ 51 ] = - 1.216632498952289e-6 ; xx [ 52 ] = - 0.99844426994826 ;
xx [ 53 ] = 0.05575876438621875 ; xx [ 54 ] = 3.580316125383367e-7 ; xx [ 1 ]
= xx [ 13 ] * state [ 8 ] ; xx [ 7 ] = sin ( xx [ 1 ] ) ; xx [ 89 ] = cos (
xx [ 1 ] ) ; xx [ 90 ] = - ( xx [ 43 ] * xx [ 7 ] ) ; xx [ 91 ] = xx [ 58 ] *
xx [ 7 ] ; xx [ 92 ] = - ( xx [ 59 ] * xx [ 7 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 51 , xx + 89 , xx + 55 ) ;
pm_math_Quaternion_compose_ra ( xx + 47 , xx + 55 , xx + 51 ) ;
pm_math_Quaternion_compose_ra ( xx + 51 , xx + 65 , xx + 89 ) ;
pm_math_Vector3_cross_ra ( xx + 72 , xx + 8 , xx + 51 ) ;
pm_math_Quaternion_xform_ra ( xx + 89 , xx + 51 , xx + 7 ) ; xx [ 10 ] =
motionData [ 39 ] ; xx [ 11 ] = motionData [ 40 ] ; xx [ 12 ] = motionData [
41 ] ; pm_math_Vector3_cross_ra ( xx + 69 , xx + 10 , xx + 51 ) ;
pm_math_Quaternion_xform_ra ( xx + 55 , xx + 51 , xx + 10 ) ; xx [ 51 ] = -
3.042751508538877e-3 ; xx [ 52 ] = - 1.581680061056172e-3 ; xx [ 53 ] = -
1.652793945804558e-9 ; pm_math_Quaternion_xform_ra ( xx + 55 , xx + 51 , xx +
64 ) ; xx [ 51 ] = xx [ 10 ] + xx [ 64 ] ; xx [ 52 ] = xx [ 11 ] + xx [ 65 ]
; xx [ 53 ] = xx [ 12 ] + xx [ 66 ] ; pm_math_Quaternion_xform_ra ( xx + 47 ,
xx + 51 , xx + 10 ) ; xx [ 47 ] = motionData [ 70 ] ; xx [ 48 ] = motionData
[ 71 ] ; xx [ 49 ] = motionData [ 72 ] ; xx [ 50 ] = motionData [ 73 ] ; xx [
51 ] = - 0.9984440686594036 ; xx [ 52 ] = - 1.210096473124015e-6 ; xx [ 53 ]
= - 2.410217961564497e-7 ; xx [ 54 ] = 0.0557623686488803 ; xx [ 1 ] = xx [
13 ] * state [ 10 ] ; xx [ 14 ] = sin ( xx [ 1 ] ) ; xx [ 55 ] = cos ( xx [ 1
] ) ; xx [ 56 ] = xx [ 60 ] * xx [ 14 ] ; xx [ 57 ] = xx [ 75 ] * xx [ 14 ] ;
xx [ 58 ] = xx [ 14 ] ; pm_math_Quaternion_compose_ra ( xx + 51 , xx + 55 ,
xx + 64 ) ; pm_math_Quaternion_compose_ra ( xx + 47 , xx + 64 , xx + 51 ) ;
xx [ 55 ] = 0.01999996597895712 ; xx [ 56 ] = 8.14584366991918e-8 ; xx [ 57 ]
= - 2.343930703864273e-9 ; pm_math_Quaternion_xform_ra ( xx + 51 , xx + 55 ,
xx + 58 ) ; xx [ 51 ] = 3.402090196577556e-8 ; xx [ 52 ] = -
9.260858211838302e-9 ; xx [ 53 ] = 7.674749151547277e-18 ;
pm_math_Quaternion_xform_ra ( xx + 64 , xx + 51 , xx + 54 ) ;
pm_math_Quaternion_xform_ra ( xx + 47 , xx + 54 , xx + 51 ) ; xx [ 47 ] =
0.08297193236559158 ; xx [ 48 ] = - 0.6989660525715147 ; xx [ 49 ] =
0.08508706173602215 ; xx [ 50 ] = - 0.7052108250142259 ; xx [ 1 ] = xx [ 13 ]
* state [ 12 ] ; xx [ 14 ] = sin ( xx [ 1 ] ) ; xx [ 54 ] = cos ( xx [ 1 ] )
; xx [ 55 ] = - ( xx [ 80 ] * xx [ 14 ] ) ; xx [ 56 ] = - ( xx [ 81 ] * xx [
14 ] ) ; xx [ 57 ] = - ( xx [ 82 ] * xx [ 14 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 47 , xx + 54 , xx + 64 ) ;
pm_math_Quaternion_compose_ra ( xx + 64 , xx + 18 , xx + 47 ) ; xx [ 1 ] =
0.1106342046522872 ; xx [ 14 ] = 1.655280357226729e-13 ; xx [ 17 ] = xx [ 1 ]
; xx [ 18 ] = 0.02999999999998754 ; xx [ 19 ] = - xx [ 14 ] ;
pm_math_Vector3_cross_ra ( xx + 86 , xx + 17 , xx + 54 ) ;
pm_math_Quaternion_xform_ra ( xx + 47 , xx + 54 , xx + 17 ) ; xx [ 47 ] =
motionData [ 53 ] ; xx [ 48 ] = motionData [ 54 ] ; xx [ 49 ] = motionData [
55 ] ; pm_math_Vector3_cross_ra ( xx + 83 , xx + 47 , xx + 54 ) ;
pm_math_Quaternion_xform_ra ( xx + 64 , xx + 54 , xx + 47 ) ; xx [ 54 ] =
0.1029579224453269 ; xx [ 55 ] = - 0.02499961344983095 ; xx [ 56 ] = -
4.235742615152655e-4 ; pm_math_Quaternion_xform_ra ( xx + 64 , xx + 54 , xx +
68 ) ; xx [ 54 ] = motionData [ 42 ] ; xx [ 55 ] = motionData [ 43 ] ; xx [
56 ] = motionData [ 44 ] ; xx [ 57 ] = motionData [ 45 ] ; xx [ 20 ] =
1.495622320918377e-3 ; xx [ 21 ] = xx [ 13 ] * state [ 14 ] ; xx [ 13 ] = cos
( xx [ 21 ] ) ; xx [ 43 ] = 0.1188356543686412 ; xx [ 44 ] = sin ( xx [ 21 ]
) ; xx [ 21 ] = xx [ 20 ] * xx [ 13 ] - xx [ 43 ] * xx [ 44 ] ; xx [ 50 ] =
4.415720941208234e-3 ; xx [ 61 ] = 0.9929029921262297 ; xx [ 64 ] = xx [ 50 ]
* xx [ 44 ] - xx [ 61 ] * xx [ 13 ] ; xx [ 65 ] = xx [ 20 ] * xx [ 44 ] + xx
[ 43 ] * xx [ 13 ] ; xx [ 20 ] = xx [ 50 ] * xx [ 13 ] + xx [ 61 ] * xx [ 44
] ; xx [ 71 ] = xx [ 21 ] ; xx [ 72 ] = xx [ 64 ] ; xx [ 73 ] = xx [ 65 ] ;
xx [ 74 ] = - xx [ 20 ] ; pm_math_Quaternion_compose_ra ( xx + 54 , xx + 71 ,
xx + 79 ) ; xx [ 13 ] = xx [ 1 ] * xx [ 80 ] - xx [ 14 ] * xx [ 82 ] ; xx [
43 ] = xx [ 14 ] * xx [ 81 ] ; xx [ 71 ] = - ( xx [ 1 ] * xx [ 81 ] ) ; xx [
72 ] = xx [ 13 ] ; xx [ 73 ] = xx [ 43 ] ; pm_math_Vector3_cross_ra ( xx + 80
, xx + 71 , xx + 74 ) ; xx [ 44 ] = 0.1106342046522275 ; xx [ 50 ] = xx [ 44
] * xx [ 64 ] ; xx [ 61 ] = xx [ 65 ] * xx [ 44 ] ; xx [ 71 ] = ( xx [ 20 ] *
xx [ 50 ] - xx [ 61 ] * xx [ 21 ] ) * xx [ 31 ] ; xx [ 72 ] = xx [ 31 ] * (
xx [ 20 ] * xx [ 61 ] + xx [ 50 ] * xx [ 21 ] ) ; xx [ 73 ] = ( xx [ 50 ] *
xx [ 64 ] + xx [ 65 ] * xx [ 61 ] ) * xx [ 31 ] - xx [ 44 ] ;
pm_math_Quaternion_xform_ra ( xx + 54 , xx + 71 , xx + 64 ) ; J [ 1 ] = xx [
35 ] ; J [ 2 ] = xx [ 45 ] ; J [ 3 ] = xx [ 62 ] ; J [ 4 ] = xx [ 2 ] ; J [ 5
] = xx [ 77 ] ; J [ 6 ] = xx [ 15 ] ; J [ 7 ] = xx [ 94 ] ; J [ 9 ] = xx [ 36
] ; J [ 10 ] = xx [ 46 ] ; J [ 11 ] = xx [ 63 ] ; J [ 12 ] = xx [ 3 ] ; J [
13 ] = xx [ 78 ] ; J [ 14 ] = xx [ 16 ] ; J [ 15 ] = xx [ 95 ] ; J [ 17 ] = -
( xx [ 28 ] + xx [ 4 ] + xx [ 25 ] ) ; J [ 18 ] = - ( xx [ 37 ] + xx [ 22 ] )
; J [ 19 ] = - ( xx [ 40 ] + xx [ 32 ] ) ; J [ 20 ] = - ( xx [ 7 ] + xx [ 10
] ) ; J [ 21 ] = - ( xx [ 58 ] + xx [ 51 ] ) ; J [ 22 ] = xx [ 17 ] + xx [ 47
] + xx [ 68 ] ; J [ 23 ] = ( xx [ 74 ] - xx [ 1 ] * xx [ 79 ] * xx [ 81 ] ) *
xx [ 31 ] + xx [ 64 ] - xx [ 14 ] ; J [ 25 ] = - ( xx [ 29 ] + xx [ 5 ] + xx
[ 26 ] ) ; J [ 26 ] = - ( xx [ 38 ] + xx [ 23 ] ) ; J [ 27 ] = - ( xx [ 41 ]
+ xx [ 33 ] ) ; J [ 28 ] = - ( xx [ 8 ] + xx [ 11 ] ) ; J [ 29 ] = - ( xx [
59 ] + xx [ 52 ] ) ; J [ 30 ] = xx [ 18 ] + xx [ 48 ] + xx [ 69 ] ; J [ 31 ]
= ( xx [ 79 ] * xx [ 13 ] + xx [ 75 ] ) * xx [ 31 ] + xx [ 65 ] ; J [ 33 ] =
- ( xx [ 30 ] + xx [ 6 ] + xx [ 27 ] ) ; J [ 34 ] = - ( xx [ 39 ] + xx [ 24 ]
) ; J [ 35 ] = - ( xx [ 42 ] + xx [ 34 ] ) ; J [ 36 ] = - ( xx [ 9 ] + xx [
12 ] ) ; J [ 37 ] = - ( xx [ 60 ] + xx [ 53 ] ) ; J [ 38 ] = xx [ 19 ] + xx [
49 ] + xx [ 70 ] ; J [ 39 ] = xx [ 31 ] * ( xx [ 76 ] + xx [ 79 ] * xx [ 43 ]
) + xx [ 66 ] - xx [ 1 ] ; return 5 ; } static size_t
computeAssemblyJacobian_2 ( const RuntimeDerivedValuesBundle * rtdv , const
double * state , const int * modeVector , const double * motionData , double
* J ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi
= rtdv -> mInts . mValues ; double xx [ 23 ] ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) state ; ( void ) modeVector ; xx [ 0 ] = 9.87654321 ; xx [ 1
] = 0.5 ; xx [ 2 ] = - xx [ 1 ] ; xx [ 3 ] = xx [ 1 ] ; xx [ 4 ] = xx [ 2 ] ;
xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 2 ] ; xx [ 7 ] = motionData [ 63 ] ; xx
[ 8 ] = motionData [ 64 ] ; xx [ 9 ] = motionData [ 65 ] ; xx [ 10 ] =
motionData [ 66 ] ; xx [ 11 ] = 0.4999989603908348 ; xx [ 12 ] = -
0.5000009810096334 ; xx [ 13 ] = 0.4999992346680554 ; xx [ 14 ] =
0.5000008239281687 ; pm_math_Quaternion_compose_ra ( xx + 7 , xx + 11 , xx +
15 ) ; pm_math_Quaternion_inverseCompose_ra ( xx + 3 , xx + 15 , xx + 7 ) ;
xx [ 1 ] = motionData [ 126 ] ; xx [ 2 ] = motionData [ 127 ] ; xx [ 3 ] =
motionData [ 128 ] ; xx [ 4 ] = motionData [ 129 ] ; xx [ 15 ] = -
0.2357227559798625 ; xx [ 16 ] = 0.9718120321650099 ; xx [ 17 ] =
4.019508996436549e-3 ; pm_math_Quaternion_inverseXform_ra ( xx + 1 , xx + 15
, xx + 18 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 11 , xx + 18 , xx + 1
) ; pm_math_Quaternion_compDeriv_ra ( xx + 7 , xx + 1 , xx + 15 ) ; xx [ 1 ]
= 2.0 ; xx [ 2 ] = ( motionData [ 21 ] * motionData [ 24 ] + motionData [ 22
] * motionData [ 23 ] ) * xx [ 1 ] ; xx [ 3 ] = 1.0 - ( motionData [ 24 ] *
motionData [ 24 ] + motionData [ 22 ] * motionData [ 22 ] ) * xx [ 1 ] ; xx [
4 ] = xx [ 1 ] * ( motionData [ 23 ] * motionData [ 24 ] - motionData [ 21 ]
* motionData [ 22 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 11 , xx + 2
, xx + 19 ) ; pm_math_Quaternion_compDeriv_ra ( xx + 7 , xx + 19 , xx + 1 ) ;
xx [ 11 ] = 6.661338147750939e-16 ; xx [ 12 ] = 6.883382752675971e-15 ; xx [
13 ] = - 1.0 ; pm_math_Quaternion_compDeriv_ra ( xx + 7 , xx + 11 , xx + 19 )
; J [ 1 ] = xx [ 16 ] ; J [ 2 ] = xx [ 2 ] ; J [ 3 ] = xx [ 20 ] ; J [ 9 ] =
xx [ 17 ] ; J [ 10 ] = xx [ 3 ] ; J [ 11 ] = xx [ 21 ] ; return 2 ; } static
size_t computeAssemblyJacobian_3 ( const RuntimeDerivedValuesBundle * rtdv ,
const double * state , const int * modeVector , const double * motionData ,
double * J ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; double xx [ 33 ] ; ( void ) rtdvd ; (
void ) rtdvi ; ( void ) state ; ( void ) modeVector ; xx [ 0 ] = 9.87654321 ;
xx [ 1 ] = 0.5 ; xx [ 2 ] = - xx [ 1 ] ; xx [ 3 ] = xx [ 1 ] ; xx [ 4 ] = xx
[ 2 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 2 ] ; xx [ 7 ] = motionData [
91 ] ; xx [ 8 ] = motionData [ 92 ] ; xx [ 9 ] = motionData [ 93 ] ; xx [ 10
] = motionData [ 94 ] ; xx [ 11 ] = 0.4999992346680592 ; xx [ 12 ] =
0.5000008239281649 ; xx [ 13 ] = - 0.4999989603908379 ; xx [ 14 ] =
0.5000009810096302 ; pm_math_Quaternion_compose_ra ( xx + 7 , xx + 11 , xx +
15 ) ; pm_math_Quaternion_inverseCompose_ra ( xx + 3 , xx + 15 , xx + 7 ) ;
xx [ 1 ] = motionData [ 119 ] ; xx [ 2 ] = motionData [ 120 ] ; xx [ 3 ] =
motionData [ 121 ] ; xx [ 4 ] = motionData [ 122 ] ; xx [ 15 ] = -
0.2357227559798625 ; xx [ 16 ] = 0.9718120321650099 ; xx [ 17 ] =
4.019508996436549e-3 ; pm_math_Quaternion_inverseXform_ra ( xx + 1 , xx + 15
, xx + 18 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 11 , xx + 18 , xx + 1
) ; pm_math_Quaternion_compDeriv_ra ( xx + 7 , xx + 1 , xx + 15 ) ; xx [ 1 ]
= 2.0 ; xx [ 2 ] = ( motionData [ 112 ] * motionData [ 115 ] + motionData [
113 ] * motionData [ 114 ] ) * xx [ 1 ] ; xx [ 3 ] = 1.0 - ( motionData [ 115
] * motionData [ 115 ] + motionData [ 113 ] * motionData [ 113 ] ) * xx [ 1 ]
; xx [ 4 ] = xx [ 1 ] * ( motionData [ 114 ] * motionData [ 115 ] -
motionData [ 112 ] * motionData [ 113 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 11 , xx + 2 , xx + 19 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 7 , xx + 19 , xx + 1 ) ; xx [ 19 ] =
motionData [ 105 ] ; xx [ 20 ] = motionData [ 106 ] ; xx [ 21 ] = motionData
[ 107 ] ; xx [ 22 ] = motionData [ 108 ] ; xx [ 23 ] = 3.609878930277421e-6 ;
xx [ 24 ] = - 0.9999999999933915 ; xx [ 25 ] = 4.313584731630016e-7 ;
pm_math_Quaternion_inverseXform_ra ( xx + 19 , xx + 23 , xx + 26 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 11 , xx + 26 , xx + 19 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 7 , xx + 19 , xx + 22 ) ; xx [ 26 ] =
motionData [ 35 ] ; xx [ 27 ] = motionData [ 36 ] ; xx [ 28 ] = motionData [
37 ] ; xx [ 29 ] = motionData [ 38 ] ; xx [ 19 ] = - 5.108363663771844e-7 ;
xx [ 20 ] = 2.027680660063491e-6 ; xx [ 21 ] = - 0.9999999999978137 ;
pm_math_Quaternion_inverseXform_ra ( xx + 26 , xx + 19 , xx + 30 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 11 , xx + 30 , xx + 19 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 7 , xx + 19 , xx + 11 ) ; xx [ 19 ] =
1.0000000000001 ; xx [ 20 ] = - 2.065661895447022e-16 ; xx [ 21 ] = -
2.220446049250313e-16 ; pm_math_Quaternion_compDeriv_ra ( xx + 7 , xx + 19 ,
xx + 26 ) ; J [ 1 ] = xx [ 16 ] ; J [ 2 ] = xx [ 2 ] ; J [ 3 ] = xx [ 23 ] ;
J [ 4 ] = xx [ 12 ] ; J [ 5 ] = xx [ 27 ] ; J [ 9 ] = xx [ 17 ] ; J [ 10 ] =
xx [ 3 ] ; J [ 11 ] = xx [ 24 ] ; J [ 12 ] = xx [ 13 ] ; J [ 13 ] = xx [ 28 ]
; return 2 ; } static size_t computeAssemblyJacobian_4 ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * motionData , double * J ) { const double * rtdvd
= rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
double xx [ 113 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ;
xx [ 0 ] = 0.03 ; xx [ 1 ] = 0.4995727091999011 ; xx [ 2 ] = -
0.49957621763275 ; xx [ 3 ] = - 0.5004162835922631 ; xx [ 4 ] =
0.5004340657011012 ; xx [ 5 ] = 0.5 ; xx [ 6 ] = xx [ 5 ] * state [ 0 ] ; xx
[ 7 ] = 1.701421996852573e-3 ; xx [ 8 ] = sin ( xx [ 6 ] ) ; xx [ 9 ] =
1.425555872024444e-5 ; xx [ 10 ] = 0.9999985524789362 ; xx [ 11 ] = cos ( xx
[ 6 ] ) ; xx [ 12 ] = - ( xx [ 7 ] * xx [ 8 ] ) ; xx [ 13 ] = - ( xx [ 9 ] *
xx [ 8 ] ) ; xx [ 14 ] = - ( xx [ 10 ] * xx [ 8 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 1 , xx + 11 , xx + 15 ) ; xx [ 1 ] = -
2.127839120481132e-5 ; xx [ 2 ] = - 0.9999999996714876 ; xx [ 3 ] =
1.429178292607163e-5 ; pm_math_Quaternion_xform_ra ( xx + 15 , xx + 1 , xx +
11 ) ; xx [ 1 ] = 2.0 ; xx [ 19 ] = motionData [ 70 ] ; xx [ 20 ] =
motionData [ 71 ] ; xx [ 21 ] = motionData [ 72 ] ; xx [ 22 ] = motionData [
73 ] ; xx [ 23 ] = 0.9984441693056983 ; xx [ 24 ] = 9.980207035347667e-7 ; xx
[ 25 ] = 3.115531069005801e-7 ; xx [ 26 ] = - 0.05576056651757455 ;
pm_math_Quaternion_compose_ra ( xx + 19 , xx + 23 , xx + 27 ) ; xx [ 2 ] =
1.0 ; xx [ 3 ] = xx [ 28 ] * xx [ 28 ] ; xx [ 4 ] = xx [ 29 ] * xx [ 30 ] ;
xx [ 6 ] = xx [ 27 ] * xx [ 28 ] ; xx [ 23 ] = xx [ 1 ] * ( xx [ 28 ] * xx [
29 ] - xx [ 27 ] * xx [ 30 ] ) ; xx [ 24 ] = xx [ 2 ] - ( xx [ 3 ] + xx [ 30
] * xx [ 30 ] ) * xx [ 1 ] ; xx [ 25 ] = ( xx [ 4 ] + xx [ 6 ] ) * xx [ 1 ] ;
xx [ 31 ] = motionData [ 0 ] ; xx [ 32 ] = motionData [ 1 ] ; xx [ 33 ] =
motionData [ 2 ] ; xx [ 34 ] = motionData [ 3 ] ; xx [ 35 ] = -
0.9999996380630076 ; xx [ 36 ] = 7.136837994664697e-6 ; xx [ 37 ] = -
8.507112303565772e-4 ; xx [ 38 ] = 1.064527084355427e-5 ;
pm_math_Quaternion_compose_ra ( xx + 31 , xx + 35 , xx + 39 ) ; xx [ 8 ] = xx
[ 41 ] * xx [ 41 ] ; xx [ 14 ] = xx [ 40 ] * xx [ 42 ] ; xx [ 26 ] = xx [ 39
] * xx [ 41 ] ; xx [ 35 ] = xx [ 2 ] - ( xx [ 8 ] + xx [ 42 ] * xx [ 42 ] ) *
xx [ 1 ] ; xx [ 36 ] = ( xx [ 40 ] * xx [ 41 ] + xx [ 39 ] * xx [ 42 ] ) * xx
[ 1 ] ; xx [ 37 ] = xx [ 1 ] * ( xx [ 14 ] - xx [ 26 ] ) ; xx [ 43 ] = ( xx [
28 ] * xx [ 30 ] + xx [ 27 ] * xx [ 29 ] ) * xx [ 1 ] ; xx [ 44 ] = xx [ 1 ]
* ( xx [ 4 ] - xx [ 6 ] ) ; xx [ 45 ] = xx [ 2 ] - ( xx [ 3 ] + xx [ 29 ] *
xx [ 29 ] ) * xx [ 1 ] ; xx [ 3 ] = pm_math_Vector3_dot_ra ( xx + 35 , xx +
43 ) ; xx [ 4 ] = pm_math_Vector3_dot_ra ( xx + 35 , xx + 23 ) ; xx [ 6 ] =
xx [ 4 ] * xx [ 4 ] + xx [ 3 ] * xx [ 3 ] ; xx [ 46 ] = 7.791513304785308e-7
; xx [ 47 ] = 8.224161824052596e-4 ; xx [ 48 ] = - 1.304968628300633e-8 ;
pm_math_Quaternion_xform_ra ( xx + 15 , xx + 46 , xx + 49 ) ; xx [ 46 ] = -
7.79151330478524e-7 ; xx [ 47 ] = - 8.2241618240526e-4 ; xx [ 48 ] =
1.304968628300632e-8 ; pm_math_Quaternion_xform_ra ( xx + 15 , xx + 46 , xx +
52 ) ; xx [ 46 ] = xx [ 49 ] + xx [ 52 ] ; xx [ 47 ] = xx [ 50 ] + xx [ 53 ]
; xx [ 48 ] = xx [ 51 ] + xx [ 54 ] ; xx [ 49 ] = - 0.08499731596381738 ; xx
[ 50 ] = - 0.7052243478362852 ; xx [ 51 ] = - 0.08288208610093117 ; xx [ 52 ]
= - 0.6989739875713483 ; xx [ 38 ] = xx [ 5 ] * state [ 2 ] ; xx [ 53 ] =
0.2357227559798625 ; xx [ 54 ] = sin ( xx [ 38 ] ) ; xx [ 55 ] =
0.9718120321650099 ; xx [ 56 ] = 4.019508996436549e-3 ; xx [ 57 ] = cos ( xx
[ 38 ] ) ; xx [ 58 ] = - ( xx [ 53 ] * xx [ 54 ] ) ; xx [ 59 ] = xx [ 55 ] *
xx [ 54 ] ; xx [ 60 ] = xx [ 56 ] * xx [ 54 ] ; pm_math_Quaternion_compose_ra
( xx + 49 , xx + 57 , xx + 61 ) ; xx [ 49 ] = motionData [ 84 ] ; xx [ 50 ] =
motionData [ 85 ] ; xx [ 51 ] = motionData [ 86 ] ; xx [ 52 ] = motionData [
87 ] ; pm_math_Quaternion_compose_ra ( xx + 61 , xx + 49 , xx + 57 ) ; xx [
65 ] = - xx [ 53 ] ; xx [ 66 ] = xx [ 55 ] ; xx [ 67 ] = xx [ 56 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 49 , xx + 65 , xx + 53 ) ; xx [ 49
] = 0.1113476250339316 ; xx [ 50 ] = 0.9937815184412861 ; xx [ 51 ] =
1.958191149099144e-6 ; pm_math_Vector3_cross_ra ( xx + 53 , xx + 49 , xx + 68
) ; pm_math_Quaternion_xform_ra ( xx + 57 , xx + 68 , xx + 71 ) ; xx [ 38 ] =
5.108363663771844e-7 ; xx [ 52 ] = 2.027680660063491e-6 ; xx [ 56 ] =
0.9999999999978137 ; xx [ 68 ] = xx [ 38 ] ; xx [ 69 ] = - xx [ 52 ] ; xx [
70 ] = xx [ 56 ] ; pm_math_Vector3_cross_ra ( xx + 53 , xx + 68 , xx + 74 ) ;
pm_math_Quaternion_xform_ra ( xx + 57 , xx + 74 , xx + 77 ) ; xx [ 74 ] = -
1.581861748696638e-3 ; xx [ 75 ] = 3.04347268763923e-3 ; xx [ 76 ] = -
0.3556669982130818 ; pm_math_Vector3_cross_ra ( xx + 53 , xx + 74 , xx + 80 )
; pm_math_Quaternion_xform_ra ( xx + 57 , xx + 80 , xx + 83 ) ; xx [ 57 ] =
motionData [ 88 ] ; xx [ 58 ] = motionData [ 89 ] ; xx [ 59 ] = motionData [
90 ] ; pm_math_Vector3_cross_ra ( xx + 65 , xx + 57 , xx + 80 ) ;
pm_math_Quaternion_xform_ra ( xx + 61 , xx + 80 , xx + 57 ) ; xx [ 65 ] = -
0.1029642730927401 ; xx [ 66 ] = - 0.02497328869161739 ; xx [ 67 ] = -
4.179086652678059e-4 ; pm_math_Quaternion_xform_ra ( xx + 61 , xx + 65 , xx +
80 ) ; xx [ 60 ] = xx [ 83 ] + xx [ 57 ] + xx [ 80 ] ; xx [ 61 ] = xx [ 84 ]
+ xx [ 58 ] + xx [ 81 ] ; xx [ 62 ] = xx [ 85 ] + xx [ 59 ] + xx [ 82 ] ;
pm_math_Quaternion_xform_ra ( xx + 19 , xx + 74 , xx + 57 ) ; xx [ 19 ] =
3.397648291980224e-4 ; xx [ 20 ] = 1.051662890794458e-5 ; xx [ 21 ] =
0.6830642379941189 ; pm_math_Quaternion_xform_ra ( xx + 31 , xx + 19 , xx +
63 ) ; xx [ 19 ] = xx [ 57 ] + motionData [ 74 ] - ( xx [ 63 ] + motionData [
4 ] ) ; xx [ 20 ] = xx [ 58 ] + motionData [ 75 ] - ( xx [ 64 ] + motionData
[ 5 ] ) ; xx [ 21 ] = xx [ 59 ] + motionData [ 76 ] - ( xx [ 65 ] +
motionData [ 6 ] ) ; xx [ 63 ] = motionData [ 7 ] ; xx [ 64 ] = motionData [
8 ] ; xx [ 65 ] = motionData [ 9 ] ; xx [ 66 ] = motionData [ 10 ] ; xx [ 22
] = 1.495693379815366e-3 ; xx [ 57 ] = xx [ 5 ] * state [ 4 ] ; xx [ 58 ] =
cos ( xx [ 57 ] ) ; xx [ 59 ] = 0.1187086636215266 ; xx [ 67 ] = sin ( xx [
57 ] ) ; xx [ 57 ] = xx [ 22 ] * xx [ 58 ] + xx [ 59 ] * xx [ 67 ] ; xx [ 80
] = 0.9929181650975998 ; xx [ 81 ] = 4.419672128196023e-3 ; xx [ 82 ] = xx [
80 ] * xx [ 58 ] + xx [ 81 ] * xx [ 67 ] ; xx [ 83 ] = xx [ 59 ] * xx [ 58 ]
- xx [ 22 ] * xx [ 67 ] ; xx [ 22 ] = xx [ 80 ] * xx [ 67 ] - xx [ 81 ] * xx
[ 58 ] ; xx [ 84 ] = - xx [ 57 ] ; xx [ 85 ] = xx [ 82 ] ; xx [ 86 ] = xx [
83 ] ; xx [ 87 ] = xx [ 22 ] ; pm_math_Quaternion_compose_ra ( xx + 63 , xx +
84 , xx + 88 ) ; xx [ 84 ] = motionData [ 77 ] ; xx [ 85 ] = motionData [ 78
] ; xx [ 86 ] = motionData [ 79 ] ; xx [ 87 ] = motionData [ 80 ] ;
pm_math_Quaternion_compose_ra ( xx + 88 , xx + 84 , xx + 92 ) ; xx [ 84 ] = (
motionData [ 77 ] * motionData [ 80 ] + motionData [ 78 ] * motionData [ 79 ]
) * xx [ 1 ] ; xx [ 85 ] = xx [ 2 ] - ( motionData [ 80 ] * motionData [ 80 ]
+ motionData [ 78 ] * motionData [ 78 ] ) * xx [ 1 ] ; xx [ 86 ] = xx [ 1 ] *
( motionData [ 79 ] * motionData [ 80 ] - motionData [ 77 ] * motionData [ 78
] ) ; pm_math_Vector3_cross_ra ( xx + 84 , xx + 49 , xx + 87 ) ;
pm_math_Quaternion_xform_ra ( xx + 92 , xx + 87 , xx + 96 ) ;
pm_math_Vector3_cross_ra ( xx + 84 , xx + 68 , xx + 87 ) ;
pm_math_Quaternion_xform_ra ( xx + 92 , xx + 87 , xx + 99 ) ;
pm_math_Vector3_cross_ra ( xx + 84 , xx + 74 , xx + 87 ) ;
pm_math_Quaternion_xform_ra ( xx + 92 , xx + 87 , xx + 102 ) ; xx [ 87 ] = xx
[ 82 ] ; xx [ 88 ] = xx [ 83 ] ; xx [ 89 ] = xx [ 22 ] ; xx [ 58 ] = xx [ 83
] * motionData [ 81 ] ; xx [ 59 ] = xx [ 22 ] * motionData [ 83 ] + xx [ 82 ]
* motionData [ 81 ] ; xx [ 67 ] = xx [ 83 ] * motionData [ 83 ] ; xx [ 90 ] =
- xx [ 58 ] ; xx [ 91 ] = xx [ 59 ] ; xx [ 92 ] = - xx [ 67 ] ;
pm_math_Vector3_cross_ra ( xx + 87 , xx + 90 , xx + 93 ) ; xx [ 80 ] =
0.1106342046522274 ; xx [ 81 ] = xx [ 83 ] * xx [ 80 ] ; xx [ 87 ] = xx [ 80
] * xx [ 82 ] ; xx [ 88 ] = motionData [ 83 ] + xx [ 1 ] * ( xx [ 93 ] + xx [
58 ] * xx [ 57 ] ) + ( xx [ 81 ] * xx [ 57 ] - xx [ 22 ] * xx [ 87 ] ) * xx [
1 ] ; xx [ 89 ] = ( xx [ 94 ] - xx [ 59 ] * xx [ 57 ] ) * xx [ 1 ] - xx [ 1 ]
* ( xx [ 22 ] * xx [ 81 ] + xx [ 87 ] * xx [ 57 ] ) ; xx [ 90 ] = xx [ 1 ] *
( xx [ 95 ] + xx [ 67 ] * xx [ 57 ] ) - ( motionData [ 81 ] - ( xx [ 87 ] *
xx [ 82 ] + xx [ 83 ] * xx [ 81 ] ) * xx [ 1 ] ) - xx [ 80 ] ;
pm_math_Quaternion_xform_ra ( xx + 63 , xx + 88 , xx + 57 ) ; xx [ 63 ] = xx
[ 102 ] + xx [ 57 ] ; xx [ 64 ] = xx [ 103 ] + xx [ 58 ] ; xx [ 65 ] = xx [
104 ] + xx [ 59 ] ; xx [ 80 ] = motionData [ 56 ] ; xx [ 81 ] = motionData [
57 ] ; xx [ 82 ] = motionData [ 58 ] ; xx [ 83 ] = motionData [ 59 ] ; xx [
87 ] = - 0.9999999999983461 ; xx [ 88 ] = - 2.156793422192216e-7 ; xx [ 89 ]
= 5.859787807760419e-8 ; xx [ 90 ] = 1.804939452482168e-6 ; xx [ 22 ] = xx [
5 ] * state [ 6 ] ; xx [ 57 ] = 3.609878930277421e-6 ; xx [ 58 ] = sin ( xx [
22 ] ) ; xx [ 59 ] = 0.9999999999933915 ; xx [ 66 ] = 4.313584731630016e-7 ;
xx [ 91 ] = cos ( xx [ 22 ] ) ; xx [ 92 ] = xx [ 57 ] * xx [ 58 ] ; xx [ 93 ]
= - ( xx [ 59 ] * xx [ 58 ] ) ; xx [ 94 ] = xx [ 66 ] * xx [ 58 ] ;
pm_math_Quaternion_compose_ra ( xx + 87 , xx + 91 , xx + 102 ) ;
pm_math_Quaternion_compose_ra ( xx + 80 , xx + 102 , xx + 87 ) ; xx [ 91 ] =
motionData [ 28 ] ; xx [ 92 ] = motionData [ 29 ] ; xx [ 93 ] = motionData [
30 ] ; xx [ 94 ] = motionData [ 31 ] ; pm_math_Quaternion_compose_ra ( xx +
87 , xx + 91 , xx + 106 ) ; xx [ 87 ] = xx [ 57 ] ; xx [ 88 ] = - xx [ 59 ] ;
xx [ 89 ] = xx [ 66 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 91 , xx +
87 , xx + 57 ) ; pm_math_Vector3_cross_ra ( xx + 57 , xx + 49 , xx + 90 ) ;
pm_math_Quaternion_xform_ra ( xx + 106 , xx + 90 , xx + 49 ) ;
pm_math_Vector3_cross_ra ( xx + 57 , xx + 68 , xx + 90 ) ;
pm_math_Quaternion_xform_ra ( xx + 106 , xx + 90 , xx + 66 ) ;
pm_math_Vector3_cross_ra ( xx + 57 , xx + 74 , xx + 90 ) ;
pm_math_Quaternion_xform_ra ( xx + 106 , xx + 90 , xx + 74 ) ; xx [ 90 ] =
motionData [ 32 ] ; xx [ 91 ] = motionData [ 33 ] ; xx [ 92 ] = motionData [
34 ] ; pm_math_Vector3_cross_ra ( xx + 87 , xx + 90 , xx + 93 ) ;
pm_math_Quaternion_xform_ra ( xx + 102 , xx + 93 , xx + 87 ) ; xx [ 90 ] = -
0.05090200154981597 ; xx [ 91 ] = - 1.837500643263612e-7 ; xx [ 92 ] = -
3.295443719477511e-9 ; pm_math_Quaternion_xform_ra ( xx + 102 , xx + 90 , xx
+ 93 ) ; xx [ 90 ] = xx [ 87 ] + xx [ 93 ] ; xx [ 91 ] = xx [ 88 ] + xx [ 94
] ; xx [ 92 ] = xx [ 89 ] + xx [ 95 ] ; pm_math_Quaternion_xform_ra ( xx + 80
, xx + 90 , xx + 87 ) ; xx [ 80 ] = xx [ 74 ] + xx [ 87 ] ; xx [ 81 ] = xx [
75 ] + xx [ 88 ] ; xx [ 82 ] = xx [ 76 ] + xx [ 89 ] ; xx [ 87 ] = motionData
[ 63 ] ; xx [ 88 ] = motionData [ 64 ] ; xx [ 89 ] = motionData [ 65 ] ; xx [
90 ] = motionData [ 66 ] ; xx [ 91 ] = - 1.216632498952289e-6 ; xx [ 92 ] = -
0.99844426994826 ; xx [ 93 ] = 0.05575876438621875 ; xx [ 94 ] =
3.580316125383367e-7 ; xx [ 22 ] = xx [ 5 ] * state [ 8 ] ; xx [ 5 ] = sin (
xx [ 22 ] ) ; xx [ 102 ] = cos ( xx [ 22 ] ) ; xx [ 103 ] = - ( xx [ 38 ] *
xx [ 5 ] ) ; xx [ 104 ] = xx [ 52 ] * xx [ 5 ] ; xx [ 105 ] = - ( xx [ 56 ] *
xx [ 5 ] ) ; pm_math_Quaternion_compose_ra ( xx + 91 , xx + 102 , xx + 106 )
; pm_math_Quaternion_compose_ra ( xx + 87 , xx + 106 , xx + 91 ) ; xx [ 74 ]
= 0.993781518443084 ; xx [ 75 ] = - 0.1113476250326879 ; xx [ 76 ] = -
7.334371656786521e-7 ; pm_math_Quaternion_xform_ra ( xx + 91 , xx + 74 , xx +
102 ) ; xx [ 5 ] = 3.042751508538877e-3 ; xx [ 22 ] = 1.581680061056172e-3 ;
xx [ 74 ] = xx [ 5 ] ; xx [ 75 ] = xx [ 22 ] ; xx [ 76 ] =
1.652793945804559e-9 ; pm_math_Quaternion_xform_ra ( xx + 91 , xx + 74 , xx +
110 ) ; xx [ 74 ] = - xx [ 5 ] ; xx [ 75 ] = - xx [ 22 ] ; xx [ 76 ] = -
1.652793945804558e-9 ; pm_math_Quaternion_xform_ra ( xx + 106 , xx + 74 , xx
+ 91 ) ; pm_math_Quaternion_xform_ra ( xx + 87 , xx + 91 , xx + 74 ) ; xx [
87 ] = xx [ 110 ] + xx [ 74 ] ; xx [ 88 ] = xx [ 111 ] + xx [ 75 ] ; xx [ 89
] = xx [ 112 ] + xx [ 76 ] ; xx [ 5 ] = 9.87654321 ; xx [ 22 ] =
0.7071067811865476 ; xx [ 38 ] = xx [ 22 ] * xx [ 27 ] ; xx [ 27 ] = xx [ 22
] * xx [ 29 ] ; xx [ 29 ] = xx [ 22 ] * xx [ 28 ] ; xx [ 28 ] = xx [ 22 ] *
xx [ 30 ] ; xx [ 90 ] = xx [ 38 ] + xx [ 27 ] ; xx [ 91 ] = xx [ 29 ] + xx [
28 ] ; xx [ 92 ] = xx [ 27 ] - xx [ 38 ] ; xx [ 93 ] = xx [ 28 ] - xx [ 29 ]
; pm_math_Quaternion_inverseCompose_ra ( xx + 39 , xx + 90 , xx + 27 ) ; xx [
74 ] = - xx [ 7 ] ; xx [ 75 ] = - xx [ 9 ] ; xx [ 76 ] = - xx [ 10 ] ;
pm_math_Quaternion_xform_ra ( xx + 31 , xx + 74 , xx + 105 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 90 , xx + 105 , xx + 31 ) ; xx [ 74
] = - xx [ 31 ] ; xx [ 75 ] = - xx [ 32 ] ; xx [ 76 ] = - xx [ 33 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 27 , xx + 74 , xx + 31 ) ; xx [ 90 ] =
0.7060068630535433 ; xx [ 91 ] = - 0.03942796900017329 ; xx [ 92 ] = -
0.7060064224509141 ; xx [ 93 ] = - 0.03942938041458775 ;
pm_math_Quaternion_inverseXform_ra ( xx + 90 , xx + 53 , xx + 74 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 27 , xx + 74 , xx + 52 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 90 , xx + 84 , xx + 74 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 27 , xx + 74 , xx + 83 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 90 , xx + 57 , xx + 74 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 27 , xx + 74 , xx + 56 ) ; xx [ 74 ] =
- xx [ 2 ] ; xx [ 75 ] = 5.72890733875446e-18 ; xx [ 76 ] = -
1.110223024625157e-16 ; pm_math_Quaternion_compDeriv_ra ( xx + 27 , xx + 74 ,
xx + 90 ) ; xx [ 7 ] = 1.694065894508601e-21 ; xx [ 9 ] =
2.168404344971009e-19 ; xx [ 10 ] = xx [ 9 ] * xx [ 18 ] ; xx [ 22 ] = xx [ 9
] * xx [ 16 ] + xx [ 7 ] * xx [ 17 ] ; xx [ 27 ] = xx [ 10 ] ; xx [ 28 ] = xx
[ 7 ] * xx [ 18 ] ; xx [ 29 ] = - xx [ 22 ] ; pm_math_Vector3_cross_ra ( xx +
16 , xx + 27 , xx + 74 ) ; xx [ 27 ] = xx [ 7 ] + xx [ 1 ] * ( xx [ 74 ] + xx
[ 15 ] * xx [ 10 ] ) ; xx [ 28 ] = ( xx [ 7 ] * xx [ 15 ] * xx [ 18 ] + xx [
75 ] ) * xx [ 1 ] - xx [ 9 ] ; xx [ 29 ] = ( xx [ 76 ] - xx [ 15 ] * xx [ 22
] ) * xx [ 1 ] ; xx [ 15 ] = ( xx [ 14 ] + xx [ 26 ] ) * xx [ 1 ] ; xx [ 16 ]
= xx [ 1 ] * ( xx [ 41 ] * xx [ 42 ] - xx [ 39 ] * xx [ 40 ] ) ; xx [ 17 ] =
xx [ 2 ] - ( xx [ 40 ] * xx [ 40 ] + xx [ 8 ] ) * xx [ 1 ] ; J [ 0 ] = xx [ 0
] * ( pm_math_Vector3_dot_ra ( xx + 11 , xx + 23 ) * xx [ 3 ] -
pm_math_Vector3_dot_ra ( xx + 11 , xx + 43 ) * xx [ 4 ] ) / xx [ 6 ] +
pm_math_Vector3_dot_ra ( xx + 46 , xx + 43 ) ; J [ 1 ] = xx [ 0 ] * (
pm_math_Vector3_dot_ra ( xx + 35 , xx + 71 ) * xx [ 3 ] -
pm_math_Vector3_dot_ra ( xx + 35 , xx + 77 ) * xx [ 4 ] ) / xx [ 6 ] -
pm_math_Vector3_dot_ra ( xx + 60 , xx + 43 ) - pm_math_Vector3_dot_ra ( xx +
19 , xx + 77 ) ; J [ 2 ] = xx [ 0 ] * ( pm_math_Vector3_dot_ra ( xx + 35 , xx
+ 96 ) * xx [ 3 ] - pm_math_Vector3_dot_ra ( xx + 35 , xx + 99 ) * xx [ 4 ] )
/ xx [ 6 ] - pm_math_Vector3_dot_ra ( xx + 63 , xx + 43 ) -
pm_math_Vector3_dot_ra ( xx + 19 , xx + 99 ) ; J [ 3 ] = xx [ 0 ] * (
pm_math_Vector3_dot_ra ( xx + 35 , xx + 49 ) * xx [ 3 ] -
pm_math_Vector3_dot_ra ( xx + 35 , xx + 66 ) * xx [ 4 ] ) / xx [ 6 ] -
pm_math_Vector3_dot_ra ( xx + 80 , xx + 43 ) - pm_math_Vector3_dot_ra ( xx +
19 , xx + 66 ) ; J [ 4 ] = xx [ 0 ] * pm_math_Vector3_dot_ra ( xx + 35 , xx +
102 ) * xx [ 3 ] / xx [ 6 ] - pm_math_Vector3_dot_ra ( xx + 87 , xx + 43 ) ;
J [ 8 ] = xx [ 32 ] ; J [ 9 ] = xx [ 53 ] ; J [ 10 ] = xx [ 84 ] ; J [ 11 ] =
xx [ 57 ] ; J [ 12 ] = xx [ 91 ] ; J [ 16 ] = xx [ 33 ] ; J [ 17 ] = xx [ 54
] ; J [ 18 ] = xx [ 85 ] ; J [ 19 ] = xx [ 58 ] ; J [ 20 ] = xx [ 92 ] ; J [
24 ] = pm_math_Vector3_dot_ra ( xx + 46 , xx + 23 ) ; J [ 25 ] = - (
pm_math_Vector3_dot_ra ( xx + 60 , xx + 23 ) + pm_math_Vector3_dot_ra ( xx +
19 , xx + 71 ) ) ; J [ 26 ] = - ( pm_math_Vector3_dot_ra ( xx + 63 , xx + 23
) + pm_math_Vector3_dot_ra ( xx + 19 , xx + 96 ) ) ; J [ 27 ] = - (
pm_math_Vector3_dot_ra ( xx + 80 , xx + 23 ) + pm_math_Vector3_dot_ra ( xx +
19 , xx + 49 ) ) ; J [ 28 ] = - ( pm_math_Vector3_dot_ra ( xx + 87 , xx + 23
) + pm_math_Vector3_dot_ra ( xx + 19 , xx + 102 ) ) ; J [ 32 ] =
pm_math_Vector3_dot_ra ( xx + 19 , xx + 27 ) - pm_math_Vector3_dot_ra ( xx +
46 , xx + 15 ) ; J [ 33 ] = pm_math_Vector3_dot_ra ( xx + 60 , xx + 15 ) ; J
[ 34 ] = pm_math_Vector3_dot_ra ( xx + 63 , xx + 15 ) ; J [ 35 ] =
pm_math_Vector3_dot_ra ( xx + 80 , xx + 15 ) ; J [ 36 ] =
pm_math_Vector3_dot_ra ( xx + 87 , xx + 15 ) ; return 5 ; } size_t
test14_9449aeaa_1_computeAssemblyJacobian ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , boolean_T
forVelocitySatisfaction , const double * state , const int * modeVector ,
const double * motionData , double * J ) { ( void ) mech ; ( void ) rtdv ; (
void ) state ; ( void ) modeVector ; ( void ) forVelocitySatisfaction ; (
void ) motionData ; ( void ) J ; switch ( constraintIdx ) { case 0 : return
computeAssemblyJacobian_0 ( rtdv , state , modeVector , motionData , J ) ;
case 1 : return computeAssemblyJacobian_1 ( rtdv , state , modeVector ,
motionData , J ) ; case 2 : return computeAssemblyJacobian_2 ( rtdv , state ,
modeVector , motionData , J ) ; case 3 : return computeAssemblyJacobian_3 (
rtdv , state , modeVector , motionData , J ) ; case 4 : return
computeAssemblyJacobian_4 ( rtdv , state , modeVector , motionData , J ) ; }
return 0 ; } size_t test14_9449aeaa_1_computeFullAssemblyJacobian ( const
void * mech , const RuntimeDerivedValuesBundle * rtdv , const double * state
, const int * modeVector , const double * motionData , double * J ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 253 ] ; ( void ) mech ; ( void ) rtdvd ; ( void
) rtdvi ; ( void ) modeVector ; xx [ 0 ] = 9.87654321 ; xx [ 1 ] = motionData
[ 70 ] ; xx [ 2 ] = motionData [ 71 ] ; xx [ 3 ] = motionData [ 72 ] ; xx [ 4
] = motionData [ 73 ] ; xx [ 5 ] = 0.9984441693056983 ; xx [ 6 ] = -
0.05576056651757455 ; xx [ 7 ] = - 9.980207034736295e-7 ; xx [ 8 ] = xx [ 5 ]
; xx [ 9 ] = xx [ 6 ] ; xx [ 10 ] = - 3.115531069039944e-7 ;
pm_math_Quaternion_compose_ra ( xx + 1 , xx + 7 , xx + 11 ) ; xx [ 15 ] = -
xx [ 12 ] ; xx [ 16 ] = xx [ 11 ] ; xx [ 17 ] = - xx [ 14 ] ; xx [ 18 ] = xx
[ 13 ] ; xx [ 11 ] = motionData [ 84 ] ; xx [ 12 ] = motionData [ 85 ] ; xx [
13 ] = motionData [ 86 ] ; xx [ 14 ] = motionData [ 87 ] ; xx [ 19 ] =
0.2357227559798625 ; xx [ 20 ] = 0.9718120321650099 ; xx [ 21 ] =
4.019508996436549e-3 ; xx [ 22 ] = - xx [ 19 ] ; xx [ 23 ] = xx [ 20 ] ; xx [
24 ] = xx [ 21 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 11 , xx + 22 ,
xx + 25 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 7 , xx + 25 , xx + 28 )
; pm_math_Quaternion_compDeriv_ra ( xx + 15 , xx + 28 , xx + 31 ) ; xx [ 28 ]
= 2.0 ; xx [ 29 ] = 1.0 ; xx [ 35 ] = ( motionData [ 77 ] * motionData [ 80 ]
+ motionData [ 78 ] * motionData [ 79 ] ) * xx [ 28 ] ; xx [ 36 ] = xx [ 29 ]
- ( motionData [ 80 ] * motionData [ 80 ] + motionData [ 78 ] * motionData [
78 ] ) * xx [ 28 ] ; xx [ 37 ] = xx [ 28 ] * ( motionData [ 79 ] * motionData
[ 80 ] - motionData [ 77 ] * motionData [ 78 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 7 , xx + 35 , xx + 38 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 15 , xx + 38 , xx + 41 ) ; xx [ 45 ] =
motionData [ 28 ] ; xx [ 46 ] = motionData [ 29 ] ; xx [ 47 ] = motionData [
30 ] ; xx [ 48 ] = motionData [ 31 ] ; xx [ 30 ] = 3.609878930277421e-6 ; xx
[ 38 ] = 0.9999999999933915 ; xx [ 39 ] = 4.313584731630016e-7 ; xx [ 49 ] =
xx [ 30 ] ; xx [ 50 ] = - xx [ 38 ] ; xx [ 51 ] = xx [ 39 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 45 , xx + 49 , xx + 52 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 7 , xx + 52 , xx + 55 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 15 , xx + 55 , xx + 7 ) ; xx [ 40 ] =
0.0 ; xx [ 55 ] = xx [ 40 ] ; xx [ 56 ] = - 1.224652940634476e-16 ; xx [ 57 ]
= xx [ 29 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 15 , xx + 55 , xx + 58 )
; xx [ 15 ] = - 0.08499731596381738 ; xx [ 16 ] = - 0.7052243478362852 ; xx [
17 ] = - 0.08288208610093117 ; xx [ 18 ] = - 0.6989739875713483 ; xx [ 7 ] =
0.5 ; xx [ 31 ] = xx [ 7 ] * state [ 2 ] ; xx [ 41 ] = sin ( xx [ 31 ] ) ; xx
[ 55 ] = cos ( xx [ 31 ] ) ; xx [ 56 ] = - ( xx [ 19 ] * xx [ 41 ] ) ; xx [
57 ] = xx [ 20 ] * xx [ 41 ] ; xx [ 58 ] = xx [ 21 ] * xx [ 41 ] ;
pm_math_Quaternion_compose_ra ( xx + 15 , xx + 55 , xx + 62 ) ;
pm_math_Quaternion_compose_ra ( xx + 62 , xx + 11 , xx + 15 ) ; xx [ 11 ] = -
1.581919911297324e-3 ; xx [ 12 ] = 3.043703554484884e-3 ; xx [ 13 ] = -
0.4695245943326235 ; pm_math_Vector3_cross_ra ( xx + 25 , xx + 11 , xx + 19 )
; pm_math_Quaternion_xform_ra ( xx + 15 , xx + 19 , xx + 55 ) ; xx [ 19 ] =
motionData [ 88 ] ; xx [ 20 ] = motionData [ 89 ] ; xx [ 21 ] = motionData [
90 ] ; pm_math_Vector3_cross_ra ( xx + 22 , xx + 19 , xx + 66 ) ;
pm_math_Quaternion_xform_ra ( xx + 62 , xx + 66 , xx + 19 ) ; xx [ 66 ] = -
0.1029642730927401 ; xx [ 67 ] = - 0.02497328869161739 ; xx [ 68 ] = -
4.179086652678059e-4 ; pm_math_Quaternion_xform_ra ( xx + 62 , xx + 66 , xx +
69 ) ; xx [ 14 ] = xx [ 19 ] + xx [ 69 ] ; xx [ 72 ] = motionData [ 7 ] ; xx
[ 73 ] = motionData [ 8 ] ; xx [ 74 ] = motionData [ 9 ] ; xx [ 75 ] =
motionData [ 10 ] ; xx [ 31 ] = 1.495693379815366e-3 ; xx [ 41 ] = xx [ 7 ] *
state [ 4 ] ; xx [ 58 ] = cos ( xx [ 41 ] ) ; xx [ 66 ] = 0.1187086636215266
; xx [ 67 ] = sin ( xx [ 41 ] ) ; xx [ 41 ] = xx [ 31 ] * xx [ 58 ] + xx [ 66
] * xx [ 67 ] ; xx [ 68 ] = 0.9929181650975998 ; xx [ 76 ] =
4.419672128196023e-3 ; xx [ 77 ] = xx [ 68 ] * xx [ 58 ] + xx [ 76 ] * xx [
67 ] ; xx [ 78 ] = xx [ 66 ] * xx [ 58 ] - xx [ 31 ] * xx [ 67 ] ; xx [ 31 ]
= xx [ 68 ] * xx [ 67 ] - xx [ 76 ] * xx [ 58 ] ; xx [ 79 ] = - xx [ 41 ] ;
xx [ 80 ] = xx [ 77 ] ; xx [ 81 ] = xx [ 78 ] ; xx [ 82 ] = xx [ 31 ] ;
pm_math_Quaternion_compose_ra ( xx + 72 , xx + 79 , xx + 83 ) ; xx [ 79 ] =
motionData [ 77 ] ; xx [ 80 ] = motionData [ 78 ] ; xx [ 81 ] = motionData [
79 ] ; xx [ 82 ] = motionData [ 80 ] ; pm_math_Quaternion_compose_ra ( xx +
83 , xx + 79 , xx + 87 ) ; pm_math_Vector3_cross_ra ( xx + 35 , xx + 11 , xx
+ 66 ) ; pm_math_Quaternion_xform_ra ( xx + 87 , xx + 66 , xx + 79 ) ; xx [
66 ] = xx [ 77 ] ; xx [ 67 ] = xx [ 78 ] ; xx [ 68 ] = xx [ 31 ] ; xx [ 58 ]
= xx [ 78 ] * motionData [ 81 ] ; xx [ 76 ] = xx [ 31 ] * motionData [ 83 ] +
xx [ 77 ] * motionData [ 81 ] ; xx [ 82 ] = xx [ 78 ] * motionData [ 83 ] ;
xx [ 91 ] = - xx [ 58 ] ; xx [ 92 ] = xx [ 76 ] ; xx [ 93 ] = - xx [ 82 ] ;
pm_math_Vector3_cross_ra ( xx + 66 , xx + 91 , xx + 94 ) ; xx [ 91 ] =
0.1106342046522274 ; xx [ 92 ] = xx [ 78 ] * xx [ 91 ] ; xx [ 93 ] = xx [ 91
] * xx [ 77 ] ; xx [ 97 ] = ( xx [ 92 ] * xx [ 41 ] - xx [ 31 ] * xx [ 93 ] )
* xx [ 28 ] ; xx [ 98 ] = xx [ 28 ] * ( xx [ 31 ] * xx [ 92 ] + xx [ 93 ] *
xx [ 41 ] ) ; xx [ 99 ] = ( xx [ 93 ] * xx [ 77 ] + xx [ 78 ] * xx [ 92 ] ) *
xx [ 28 ] ; xx [ 100 ] = motionData [ 83 ] + xx [ 28 ] * ( xx [ 94 ] + xx [
58 ] * xx [ 41 ] ) + xx [ 97 ] ; xx [ 101 ] = ( xx [ 95 ] - xx [ 76 ] * xx [
41 ] ) * xx [ 28 ] - xx [ 98 ] ; xx [ 102 ] = xx [ 28 ] * ( xx [ 96 ] + xx [
82 ] * xx [ 41 ] ) - ( motionData [ 81 ] - xx [ 99 ] ) - xx [ 91 ] ;
pm_math_Quaternion_xform_ra ( xx + 72 , xx + 100 , xx + 92 ) ; xx [ 100 ] =
motionData [ 56 ] ; xx [ 101 ] = motionData [ 57 ] ; xx [ 102 ] = motionData
[ 58 ] ; xx [ 103 ] = motionData [ 59 ] ; xx [ 104 ] = - 0.9999999999983461 ;
xx [ 105 ] = - 2.156793422192216e-7 ; xx [ 106 ] = 5.859787807760419e-8 ; xx
[ 107 ] = 1.804939452482168e-6 ; xx [ 58 ] = xx [ 7 ] * state [ 6 ] ; xx [ 76
] = sin ( xx [ 58 ] ) ; xx [ 108 ] = cos ( xx [ 58 ] ) ; xx [ 109 ] = xx [ 30
] * xx [ 76 ] ; xx [ 110 ] = - ( xx [ 38 ] * xx [ 76 ] ) ; xx [ 111 ] = xx [
39 ] * xx [ 76 ] ; pm_math_Quaternion_compose_ra ( xx + 104 , xx + 108 , xx +
112 ) ; pm_math_Quaternion_compose_ra ( xx + 100 , xx + 112 , xx + 104 ) ;
pm_math_Quaternion_compose_ra ( xx + 104 , xx + 45 , xx + 108 ) ;
pm_math_Vector3_cross_ra ( xx + 52 , xx + 11 , xx + 45 ) ;
pm_math_Quaternion_xform_ra ( xx + 108 , xx + 45 , xx + 11 ) ; xx [ 45 ] =
motionData [ 32 ] ; xx [ 46 ] = motionData [ 33 ] ; xx [ 47 ] = motionData [
34 ] ; pm_math_Vector3_cross_ra ( xx + 49 , xx + 45 , xx + 116 ) ;
pm_math_Quaternion_xform_ra ( xx + 112 , xx + 116 , xx + 45 ) ; xx [ 116 ] =
- 0.05090200154981597 ; xx [ 117 ] = - 1.837500643263612e-7 ; xx [ 118 ] = -
3.295443719477511e-9 ; pm_math_Quaternion_xform_ra ( xx + 112 , xx + 116 , xx
+ 119 ) ; xx [ 116 ] = xx [ 45 ] + xx [ 119 ] ; xx [ 117 ] = xx [ 46 ] + xx [
120 ] ; xx [ 118 ] = xx [ 47 ] + xx [ 121 ] ; pm_math_Quaternion_xform_ra (
xx + 100 , xx + 116 , xx + 45 ) ; xx [ 122 ] = motionData [ 63 ] ; xx [ 123 ]
= motionData [ 64 ] ; xx [ 124 ] = motionData [ 65 ] ; xx [ 125 ] =
motionData [ 66 ] ; xx [ 126 ] = - 1.216632498952289e-6 ; xx [ 127 ] = -
0.99844426994826 ; xx [ 128 ] = 0.05575876438621875 ; xx [ 129 ] =
3.580316125383367e-7 ; xx [ 30 ] = xx [ 7 ] * state [ 8 ] ; xx [ 38 ] =
5.108363663771844e-7 ; xx [ 39 ] = sin ( xx [ 30 ] ) ; xx [ 48 ] =
2.027680660063491e-6 ; xx [ 58 ] = 0.9999999999978137 ; xx [ 130 ] = cos ( xx
[ 30 ] ) ; xx [ 131 ] = - ( xx [ 38 ] * xx [ 39 ] ) ; xx [ 132 ] = xx [ 48 ]
* xx [ 39 ] ; xx [ 133 ] = - ( xx [ 58 ] * xx [ 39 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 126 , xx + 130 , xx + 134 ) ;
pm_math_Quaternion_compose_ra ( xx + 122 , xx + 134 , xx + 126 ) ; xx [ 30 ]
= 3.042751508538877e-3 ; xx [ 39 ] = 1.581680061056172e-3 ; xx [ 76 ] =
1.652793945804558e-9 ; xx [ 116 ] = xx [ 30 ] ; xx [ 117 ] = xx [ 39 ] ; xx [
118 ] = xx [ 76 ] ; pm_math_Quaternion_xform_ra ( xx + 126 , xx + 116 , xx +
130 ) ; xx [ 116 ] = - xx [ 30 ] ; xx [ 117 ] = - xx [ 39 ] ; xx [ 118 ] = -
xx [ 76 ] ; pm_math_Quaternion_xform_ra ( xx + 134 , xx + 116 , xx + 138 ) ;
pm_math_Quaternion_xform_ra ( xx + 122 , xx + 138 , xx + 116 ) ; xx [ 57 ] =
xx [ 20 ] + xx [ 70 ] ; xx [ 141 ] = motionData [ 91 ] ; xx [ 142 ] =
motionData [ 92 ] ; xx [ 143 ] = motionData [ 93 ] ; xx [ 144 ] = motionData
[ 94 ] ; xx [ 145 ] = 0.5000008239281672 ; xx [ 146 ] = - 0.499999234668057 ;
xx [ 147 ] = - 0.5000009810096314 ; xx [ 148 ] = - 0.4999989603908367 ;
pm_math_Quaternion_compose_ra ( xx + 141 , xx + 145 , xx + 149 ) ; xx [ 145 ]
= motionData [ 98 ] ; xx [ 146 ] = motionData [ 99 ] ; xx [ 147 ] =
motionData [ 100 ] ; xx [ 148 ] = motionData [ 101 ] ; xx [ 13 ] = - xx [ 7 ]
; xx [ 153 ] = xx [ 7 ] ; xx [ 154 ] = xx [ 7 ] ; xx [ 155 ] = xx [ 13 ] ; xx
[ 156 ] = xx [ 7 ] ; pm_math_Quaternion_compose_ra ( xx + 145 , xx + 153 , xx
+ 157 ) ; pm_math_Quaternion_inverseCompose_ra ( xx + 149 , xx + 157 , xx +
145 ) ; xx [ 149 ] = motionData [ 119 ] ; xx [ 150 ] = motionData [ 120 ] ;
xx [ 151 ] = motionData [ 121 ] ; xx [ 152 ] = motionData [ 122 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 149 , xx + 22 , xx + 161 ) ;
pm_math_Quaternion_xform_ra ( xx + 141 , xx + 161 , xx + 164 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 157 , xx + 164 , xx + 167 ) ; xx [
164 ] = - xx [ 167 ] ; xx [ 165 ] = - xx [ 168 ] ; xx [ 166 ] = - xx [ 169 ]
; pm_math_Quaternion_compDeriv_ra ( xx + 145 , xx + 164 , xx + 167 ) ; xx [
164 ] = ( motionData [ 112 ] * motionData [ 115 ] + motionData [ 113 ] *
motionData [ 114 ] ) * xx [ 28 ] ; xx [ 165 ] = xx [ 29 ] - ( motionData [
115 ] * motionData [ 115 ] + motionData [ 113 ] * motionData [ 113 ] ) * xx [
28 ] ; xx [ 166 ] = xx [ 28 ] * ( motionData [ 114 ] * motionData [ 115 ] -
motionData [ 112 ] * motionData [ 113 ] ) ; pm_math_Quaternion_xform_ra ( xx
+ 141 , xx + 164 , xx + 171 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 157
, xx + 171 , xx + 174 ) ; xx [ 171 ] = - xx [ 174 ] ; xx [ 172 ] = - xx [ 175
] ; xx [ 173 ] = - xx [ 176 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 145 ,
xx + 171 , xx + 174 ) ; xx [ 178 ] = motionData [ 105 ] ; xx [ 179 ] =
motionData [ 106 ] ; xx [ 180 ] = motionData [ 107 ] ; xx [ 181 ] =
motionData [ 108 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 178 , xx + 49
, xx + 171 ) ; pm_math_Quaternion_xform_ra ( xx + 141 , xx + 171 , xx + 182 )
; pm_math_Quaternion_inverseXform_ra ( xx + 157 , xx + 182 , xx + 185 ) ; xx
[ 182 ] = - xx [ 185 ] ; xx [ 183 ] = - xx [ 186 ] ; xx [ 184 ] = - xx [ 187
] ; pm_math_Quaternion_compDeriv_ra ( xx + 145 , xx + 182 , xx + 185 ) ; xx [
189 ] = motionData [ 35 ] ; xx [ 190 ] = motionData [ 36 ] ; xx [ 191 ] =
motionData [ 37 ] ; xx [ 192 ] = motionData [ 38 ] ; xx [ 182 ] = - xx [ 38 ]
; xx [ 183 ] = xx [ 48 ] ; xx [ 184 ] = - xx [ 58 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 189 , xx + 182 , xx + 193 ) ;
pm_math_Quaternion_xform_ra ( xx + 141 , xx + 193 , xx + 196 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 157 , xx + 196 , xx + 199 ) ; xx [
196 ] = - xx [ 199 ] ; xx [ 197 ] = - xx [ 200 ] ; xx [ 198 ] = - xx [ 201 ]
; pm_math_Quaternion_compDeriv_ra ( xx + 145 , xx + 196 , xx + 199 ) ; xx [
76 ] = 1.171949776569064e-7 ; xx [ 81 ] = 4.31358898227365e-7 ; xx [ 82 ] =
motionData [ 93 ] - xx [ 81 ] * motionData [ 94 ] ; xx [ 196 ] = motionData [
92 ] ; xx [ 197 ] = motionData [ 93 ] ; xx [ 198 ] = motionData [ 94 ] ; xx [
95 ] = xx [ 76 ] * motionData [ 94 ] - motionData [ 92 ] ; xx [ 96 ] = xx [
81 ] * motionData [ 92 ] - xx [ 76 ] * motionData [ 93 ] ; xx [ 203 ] = xx [
82 ] ; xx [ 204 ] = xx [ 95 ] ; xx [ 205 ] = xx [ 96 ] ;
pm_math_Vector3_cross_ra ( xx + 196 , xx + 203 , xx + 206 ) ; xx [ 196 ] = xx
[ 76 ] + ( xx [ 82 ] * motionData [ 91 ] + xx [ 206 ] ) * xx [ 28 ] ; xx [
197 ] = xx [ 81 ] + ( xx [ 95 ] * motionData [ 91 ] + xx [ 207 ] ) * xx [ 28
] ; xx [ 198 ] = xx [ 29 ] + ( xx [ 96 ] * motionData [ 91 ] + xx [ 208 ] ) *
xx [ 28 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 157 , xx + 196 , xx +
203 ) ; xx [ 157 ] = - xx [ 203 ] ; xx [ 158 ] = - xx [ 204 ] ; xx [ 159 ] =
- xx [ 205 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 145 , xx + 157 , xx +
203 ) ; xx [ 157 ] = motionData [ 49 ] ; xx [ 158 ] = motionData [ 50 ] ; xx
[ 159 ] = motionData [ 51 ] ; xx [ 160 ] = motionData [ 52 ] ; xx [ 82 ] =
0.2359713450861992 ; xx [ 95 ] = 0.9717517007293006 ; xx [ 96 ] =
4.019505930177081e-3 ; xx [ 196 ] = - xx [ 82 ] ; xx [ 197 ] = - xx [ 95 ] ;
xx [ 198 ] = - xx [ 96 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 157 , xx
+ 196 , xx + 207 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 153 , xx + 207
, xx + 210 ) ; pm_math_Quaternion_compDeriv_ra ( xx + 145 , xx + 210 , xx +
153 ) ; xx [ 132 ] = - xx [ 29 ] ; xx [ 210 ] = xx [ 40 ] ; xx [ 211 ] = xx [
40 ] ; xx [ 212 ] = xx [ 132 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 145 ,
xx + 210 , xx + 213 ) ; pm_math_Quaternion_compose_ra ( xx + 62 , xx + 149 ,
xx + 145 ) ; xx [ 149 ] = 7.54929787758902e-8 ; xx [ 150 ] = -
0.0199999879359847 ; xx [ 151 ] = - 0.05090199292298814 ;
pm_math_Vector3_cross_ra ( xx + 161 , xx + 149 , xx + 210 ) ;
pm_math_Quaternion_xform_ra ( xx + 145 , xx + 210 , xx + 216 ) ; xx [ 145 ] =
motionData [ 123 ] ; xx [ 146 ] = motionData [ 124 ] ; xx [ 147 ] =
motionData [ 125 ] ; pm_math_Vector3_cross_ra ( xx + 22 , xx + 145 , xx + 210
) ; pm_math_Quaternion_xform_ra ( xx + 62 , xx + 210 , xx + 145 ) ; xx [ 62 ]
= motionData [ 112 ] ; xx [ 63 ] = motionData [ 113 ] ; xx [ 64 ] =
motionData [ 114 ] ; xx [ 65 ] = motionData [ 115 ] ;
pm_math_Quaternion_compose_ra ( xx + 83 , xx + 62 , xx + 210 ) ;
pm_math_Vector3_cross_ra ( xx + 164 , xx + 149 , xx + 62 ) ;
pm_math_Quaternion_xform_ra ( xx + 210 , xx + 62 , xx + 83 ) ; xx [ 40 ] = xx
[ 78 ] * motionData [ 116 ] ; xx [ 62 ] = xx [ 31 ] * motionData [ 118 ] + xx
[ 77 ] * motionData [ 116 ] ; xx [ 31 ] = xx [ 78 ] * motionData [ 118 ] ; xx
[ 63 ] = - xx [ 40 ] ; xx [ 64 ] = xx [ 62 ] ; xx [ 65 ] = - xx [ 31 ] ;
pm_math_Vector3_cross_ra ( xx + 66 , xx + 63 , xx + 210 ) ; xx [ 63 ] =
motionData [ 118 ] + xx [ 28 ] * ( xx [ 210 ] + xx [ 40 ] * xx [ 41 ] ) + xx
[ 97 ] ; xx [ 64 ] = ( xx [ 211 ] - xx [ 62 ] * xx [ 41 ] ) * xx [ 28 ] - xx
[ 98 ] ; xx [ 65 ] = xx [ 28 ] * ( xx [ 212 ] + xx [ 31 ] * xx [ 41 ] ) - (
motionData [ 116 ] - xx [ 99 ] ) - xx [ 91 ] ; pm_math_Quaternion_xform_ra (
xx + 72 , xx + 63 , xx + 66 ) ; pm_math_Quaternion_compose_ra ( xx + 104 , xx
+ 178 , xx + 62 ) ; pm_math_Vector3_cross_ra ( xx + 171 , xx + 149 , xx + 72
) ; pm_math_Quaternion_xform_ra ( xx + 62 , xx + 72 , xx + 97 ) ; xx [ 62 ] =
motionData [ 109 ] ; xx [ 63 ] = motionData [ 110 ] ; xx [ 64 ] = motionData
[ 111 ] ; pm_math_Vector3_cross_ra ( xx + 49 , xx + 62 , xx + 72 ) ;
pm_math_Quaternion_xform_ra ( xx + 112 , xx + 72 , xx + 49 ) ; xx [ 62 ] = xx
[ 49 ] + xx [ 119 ] ; xx [ 63 ] = xx [ 50 ] + xx [ 120 ] ; xx [ 64 ] = xx [
51 ] + xx [ 121 ] ; pm_math_Quaternion_xform_ra ( xx + 100 , xx + 62 , xx +
49 ) ; pm_math_Quaternion_compose_ra ( xx + 126 , xx + 189 , xx + 62 ) ;
pm_math_Vector3_cross_ra ( xx + 193 , xx + 149 , xx + 72 ) ;
pm_math_Quaternion_xform_ra ( xx + 62 , xx + 72 , xx + 100 ) ; xx [ 62 ] =
motionData [ 39 ] ; xx [ 63 ] = motionData [ 40 ] ; xx [ 64 ] = motionData [
41 ] ; pm_math_Vector3_cross_ra ( xx + 182 , xx + 62 , xx + 72 ) ;
pm_math_Quaternion_xform_ra ( xx + 134 , xx + 72 , xx + 62 ) ; xx [ 72 ] = xx
[ 62 ] + xx [ 138 ] ; xx [ 73 ] = xx [ 63 ] + xx [ 139 ] ; xx [ 74 ] = xx [
64 ] + xx [ 140 ] ; pm_math_Quaternion_xform_ra ( xx + 122 , xx + 72 , xx +
62 ) ; xx [ 72 ] = - 0.9984440686594036 ; xx [ 73 ] = - 1.210096473124015e-6
; xx [ 74 ] = - 2.410217961564497e-7 ; xx [ 75 ] = 0.0557623686488803 ; xx [
31 ] = xx [ 7 ] * state [ 10 ] ; xx [ 40 ] = sin ( xx [ 31 ] ) ; xx [ 103 ] =
cos ( xx [ 31 ] ) ; xx [ 104 ] = xx [ 76 ] * xx [ 40 ] ; xx [ 105 ] = xx [ 81
] * xx [ 40 ] ; xx [ 106 ] = xx [ 40 ] ; pm_math_Quaternion_compose_ra ( xx +
72 , xx + 103 , xx + 112 ) ; pm_math_Quaternion_compose_ra ( xx + 1 , xx +
112 , xx + 72 ) ; xx [ 76 ] = 0.01999996597895712 ; xx [ 77 ] =
8.14584366991918e-8 ; xx [ 78 ] = - 2.343930703864273e-9 ;
pm_math_Quaternion_xform_ra ( xx + 72 , xx + 76 , xx + 103 ) ; xx [ 72 ] =
3.402090196577556e-8 ; xx [ 73 ] = - 9.260858211838302e-9 ; xx [ 74 ] =
7.674749151547277e-18 ; pm_math_Quaternion_xform_ra ( xx + 112 , xx + 72 , xx
+ 75 ) ; pm_math_Quaternion_xform_ra ( xx + 1 , xx + 75 , xx + 72 ) ; xx [ 75
] = 0.08297193236559158 ; xx [ 76 ] = - 0.6989660525715147 ; xx [ 77 ] =
0.08508706173602215 ; xx [ 78 ] = - 0.7052108250142259 ; xx [ 31 ] = xx [ 7 ]
* state [ 12 ] ; xx [ 40 ] = sin ( xx [ 31 ] ) ; xx [ 112 ] = cos ( xx [ 31 ]
) ; xx [ 113 ] = - ( xx [ 82 ] * xx [ 40 ] ) ; xx [ 114 ] = - ( xx [ 95 ] *
xx [ 40 ] ) ; xx [ 115 ] = - ( xx [ 96 ] * xx [ 40 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 75 , xx + 112 , xx + 133 ) ;
pm_math_Quaternion_compose_ra ( xx + 133 , xx + 157 , xx + 75 ) ; xx [ 31 ] =
0.1106342046522872 ; xx [ 40 ] = 1.655280357226729e-13 ; xx [ 112 ] = xx [ 31
] ; xx [ 113 ] = 0.02999999999998754 ; xx [ 114 ] = - xx [ 40 ] ;
pm_math_Vector3_cross_ra ( xx + 207 , xx + 112 , xx + 119 ) ;
pm_math_Quaternion_xform_ra ( xx + 75 , xx + 119 , xx + 112 ) ; xx [ 75 ] =
motionData [ 53 ] ; xx [ 76 ] = motionData [ 54 ] ; xx [ 77 ] = motionData [
55 ] ; pm_math_Vector3_cross_ra ( xx + 196 , xx + 75 , xx + 119 ) ;
pm_math_Quaternion_xform_ra ( xx + 133 , xx + 119 , xx + 75 ) ; xx [ 119 ] =
0.1029579224453269 ; xx [ 120 ] = - 0.02499961344983095 ; xx [ 121 ] = -
4.235742615152655e-4 ; pm_math_Quaternion_xform_ra ( xx + 133 , xx + 119 , xx
+ 137 ) ; xx [ 133 ] = motionData [ 42 ] ; xx [ 134 ] = motionData [ 43 ] ;
xx [ 135 ] = motionData [ 44 ] ; xx [ 136 ] = motionData [ 45 ] ; xx [ 41 ] =
1.495622320918377e-3 ; xx [ 65 ] = xx [ 7 ] * state [ 14 ] ; xx [ 78 ] = cos
( xx [ 65 ] ) ; xx [ 81 ] = 0.1188356543686412 ; xx [ 82 ] = sin ( xx [ 65 ]
) ; xx [ 65 ] = xx [ 41 ] * xx [ 78 ] - xx [ 81 ] * xx [ 82 ] ; xx [ 86 ] =
4.415720941208234e-3 ; xx [ 91 ] = 0.9929029921262297 ; xx [ 95 ] = xx [ 86 ]
* xx [ 82 ] - xx [ 91 ] * xx [ 78 ] ; xx [ 96 ] = xx [ 41 ] * xx [ 82 ] + xx
[ 81 ] * xx [ 78 ] ; xx [ 41 ] = xx [ 86 ] * xx [ 78 ] + xx [ 91 ] * xx [ 82
] ; xx [ 148 ] = xx [ 65 ] ; xx [ 149 ] = xx [ 95 ] ; xx [ 150 ] = xx [ 96 ]
; xx [ 151 ] = - xx [ 41 ] ; pm_math_Quaternion_compose_ra ( xx + 133 , xx +
148 , xx + 156 ) ; xx [ 78 ] = xx [ 31 ] * xx [ 157 ] - xx [ 40 ] * xx [ 159
] ; xx [ 81 ] = xx [ 40 ] * xx [ 158 ] ; xx [ 119 ] = - ( xx [ 31 ] * xx [
158 ] ) ; xx [ 120 ] = xx [ 78 ] ; xx [ 121 ] = xx [ 81 ] ;
pm_math_Vector3_cross_ra ( xx + 157 , xx + 119 , xx + 148 ) ; xx [ 82 ] =
0.1106342046522275 ; xx [ 86 ] = xx [ 82 ] * xx [ 95 ] ; xx [ 91 ] = xx [ 96
] * xx [ 82 ] ; xx [ 119 ] = ( xx [ 41 ] * xx [ 86 ] - xx [ 91 ] * xx [ 65 ]
) * xx [ 28 ] ; xx [ 120 ] = xx [ 28 ] * ( xx [ 41 ] * xx [ 91 ] + xx [ 86 ]
* xx [ 65 ] ) ; xx [ 121 ] = ( xx [ 86 ] * xx [ 95 ] + xx [ 96 ] * xx [ 91 ]
) * xx [ 28 ] - xx [ 82 ] ; pm_math_Quaternion_xform_ra ( xx + 133 , xx + 119
, xx + 151 ) ; xx [ 133 ] = xx [ 7 ] ; xx [ 134 ] = xx [ 13 ] ; xx [ 135 ] =
xx [ 13 ] ; xx [ 136 ] = xx [ 13 ] ; xx [ 177 ] = 0.4999989603908348 ; xx [
178 ] = - 0.5000009810096334 ; xx [ 179 ] = 0.4999992346680554 ; xx [ 180 ] =
0.5000008239281687 ; pm_math_Quaternion_compose_ra ( xx + 122 , xx + 177 , xx
+ 181 ) ; pm_math_Quaternion_inverseCompose_ra ( xx + 133 , xx + 181 , xx +
119 ) ; xx [ 181 ] = motionData [ 126 ] ; xx [ 182 ] = motionData [ 127 ] ;
xx [ 183 ] = motionData [ 128 ] ; xx [ 184 ] = motionData [ 129 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 181 , xx + 22 , xx + 123 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 177 , xx + 123 , xx + 22 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 119 , xx + 22 , xx + 181 ) ; xx [ 22 ]
= ( motionData [ 21 ] * motionData [ 24 ] + motionData [ 22 ] * motionData [
23 ] ) * xx [ 28 ] ; xx [ 23 ] = xx [ 29 ] - ( motionData [ 24 ] * motionData
[ 24 ] + motionData [ 22 ] * motionData [ 22 ] ) * xx [ 28 ] ; xx [ 24 ] = xx
[ 28 ] * ( motionData [ 23 ] * motionData [ 24 ] - motionData [ 21 ] *
motionData [ 22 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 177 , xx + 22
, xx + 123 ) ; pm_math_Quaternion_compDeriv_ra ( xx + 119 , xx + 123 , xx +
177 ) ; xx [ 22 ] = 6.661338147750939e-16 ; xx [ 23 ] = 6.883382752675971e-15
; xx [ 24 ] = - 1.0 ; pm_math_Quaternion_compDeriv_ra ( xx + 119 , xx + 22 ,
xx + 188 ) ; xx [ 119 ] = 0.4999992346680592 ; xx [ 120 ] =
0.5000008239281649 ; xx [ 121 ] = - 0.4999989603908379 ; xx [ 122 ] =
0.5000009810096302 ; pm_math_Quaternion_compose_ra ( xx + 141 , xx + 119 , xx
+ 196 ) ; pm_math_Quaternion_inverseCompose_ra ( xx + 133 , xx + 196 , xx +
140 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 119 , xx + 161 , xx + 22 )
; pm_math_Quaternion_compDeriv_ra ( xx + 140 , xx + 22 , xx + 133 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 119 , xx + 164 , xx + 22 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 140 , xx + 22 , xx + 159 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 119 , xx + 171 , xx + 22 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 140 , xx + 22 , xx + 163 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 119 , xx + 193 , xx + 22 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 140 , xx + 22 , xx + 119 ) ; xx [ 22 ]
= 1.0000000000001 ; xx [ 23 ] = - 2.065661895447022e-16 ; xx [ 24 ] = -
2.220446049250313e-16 ; pm_math_Quaternion_compDeriv_ra ( xx + 140 , xx + 22
, xx + 170 ) ; xx [ 13 ] = 0.03 ; xx [ 122 ] = 0.4995727091999011 ; xx [ 123
] = - 0.49957621763275 ; xx [ 124 ] = - 0.5004162835922631 ; xx [ 125 ] =
0.5004340657011012 ; xx [ 22 ] = xx [ 7 ] * state [ 0 ] ; xx [ 7 ] =
1.701421996852573e-3 ; xx [ 23 ] = sin ( xx [ 22 ] ) ; xx [ 24 ] =
1.425555872024444e-5 ; xx [ 41 ] = 0.9999985524789362 ; xx [ 140 ] = cos ( xx
[ 22 ] ) ; xx [ 141 ] = - ( xx [ 7 ] * xx [ 23 ] ) ; xx [ 142 ] = - ( xx [ 24
] * xx [ 23 ] ) ; xx [ 143 ] = - ( xx [ 41 ] * xx [ 23 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 122 , xx + 140 , xx + 191 ) ; xx [ 122 ]
= - 2.127839120481132e-5 ; xx [ 123 ] = - 0.9999999996714876 ; xx [ 124 ] =
1.429178292607163e-5 ; pm_math_Quaternion_xform_ra ( xx + 191 , xx + 122 , xx
+ 140 ) ; xx [ 122 ] = xx [ 5 ] ; xx [ 123 ] = 9.980207035347667e-7 ; xx [
124 ] = 3.115531069005801e-7 ; xx [ 125 ] = xx [ 6 ] ;
pm_math_Quaternion_compose_ra ( xx + 1 , xx + 122 , xx + 195 ) ; xx [ 5 ] =
xx [ 196 ] * xx [ 196 ] ; xx [ 6 ] = xx [ 197 ] * xx [ 198 ] ; xx [ 22 ] = xx
[ 195 ] * xx [ 196 ] ; xx [ 122 ] = xx [ 28 ] * ( xx [ 196 ] * xx [ 197 ] -
xx [ 195 ] * xx [ 198 ] ) ; xx [ 123 ] = xx [ 29 ] - ( xx [ 5 ] + xx [ 198 ]
* xx [ 198 ] ) * xx [ 28 ] ; xx [ 124 ] = ( xx [ 6 ] + xx [ 22 ] ) * xx [ 28
] ; xx [ 206 ] = motionData [ 0 ] ; xx [ 207 ] = motionData [ 1 ] ; xx [ 208
] = motionData [ 2 ] ; xx [ 209 ] = motionData [ 3 ] ; xx [ 210 ] = -
0.9999996380630076 ; xx [ 211 ] = 7.136837994664697e-6 ; xx [ 212 ] = -
8.507112303565772e-4 ; xx [ 213 ] = 1.064527084355427e-5 ;
pm_math_Quaternion_compose_ra ( xx + 206 , xx + 210 , xx + 219 ) ; xx [ 23 ]
= xx [ 221 ] * xx [ 221 ] ; xx [ 65 ] = xx [ 220 ] * xx [ 222 ] ; xx [ 82 ] =
xx [ 219 ] * xx [ 221 ] ; xx [ 210 ] = xx [ 29 ] - ( xx [ 23 ] + xx [ 222 ] *
xx [ 222 ] ) * xx [ 28 ] ; xx [ 211 ] = ( xx [ 220 ] * xx [ 221 ] + xx [ 219
] * xx [ 222 ] ) * xx [ 28 ] ; xx [ 212 ] = xx [ 28 ] * ( xx [ 65 ] - xx [ 82
] ) ; xx [ 223 ] = ( xx [ 196 ] * xx [ 198 ] + xx [ 195 ] * xx [ 197 ] ) * xx
[ 28 ] ; xx [ 224 ] = xx [ 28 ] * ( xx [ 6 ] - xx [ 22 ] ) ; xx [ 225 ] = xx
[ 29 ] - ( xx [ 5 ] + xx [ 197 ] * xx [ 197 ] ) * xx [ 28 ] ; xx [ 5 ] =
pm_math_Vector3_dot_ra ( xx + 210 , xx + 223 ) ; xx [ 6 ] =
pm_math_Vector3_dot_ra ( xx + 210 , xx + 122 ) ; xx [ 22 ] = xx [ 6 ] * xx [
6 ] + xx [ 5 ] * xx [ 5 ] ; xx [ 226 ] = 7.791513304785308e-7 ; xx [ 227 ] =
8.224161824052596e-4 ; xx [ 228 ] = - 1.304968628300633e-8 ;
pm_math_Quaternion_xform_ra ( xx + 191 , xx + 226 , xx + 229 ) ; xx [ 226 ] =
- 7.79151330478524e-7 ; xx [ 227 ] = - 8.2241618240526e-4 ; xx [ 228 ] =
1.304968628300632e-8 ; pm_math_Quaternion_xform_ra ( xx + 191 , xx + 226 , xx
+ 232 ) ; xx [ 226 ] = xx [ 229 ] + xx [ 232 ] ; xx [ 227 ] = xx [ 230 ] + xx
[ 233 ] ; xx [ 228 ] = xx [ 231 ] + xx [ 234 ] ; xx [ 229 ] =
0.1113476250339316 ; xx [ 230 ] = 0.9937815184412861 ; xx [ 231 ] =
1.958191149099144e-6 ; pm_math_Vector3_cross_ra ( xx + 25 , xx + 229 , xx +
232 ) ; pm_math_Quaternion_xform_ra ( xx + 15 , xx + 232 , xx + 235 ) ; xx [
232 ] = xx [ 38 ] ; xx [ 233 ] = - xx [ 48 ] ; xx [ 234 ] = xx [ 58 ] ;
pm_math_Vector3_cross_ra ( xx + 25 , xx + 232 , xx + 238 ) ;
pm_math_Quaternion_xform_ra ( xx + 15 , xx + 238 , xx + 241 ) ; xx [ 238 ] =
- 1.581861748696638e-3 ; xx [ 239 ] = 3.04347268763923e-3 ; xx [ 240 ] = -
0.3556669982130818 ; pm_math_Vector3_cross_ra ( xx + 25 , xx + 238 , xx + 244
) ; pm_math_Quaternion_xform_ra ( xx + 15 , xx + 244 , xx + 247 ) ; xx [ 15 ]
= xx [ 247 ] + xx [ 14 ] ; xx [ 16 ] = xx [ 248 ] + xx [ 57 ] ; xx [ 17 ] =
xx [ 249 ] + xx [ 21 ] + xx [ 71 ] ; pm_math_Quaternion_xform_ra ( xx + 1 ,
xx + 238 , xx + 18 ) ; xx [ 1 ] = 3.397648291980224e-4 ; xx [ 2 ] =
1.051662890794458e-5 ; xx [ 3 ] = 0.6830642379941189 ;
pm_math_Quaternion_xform_ra ( xx + 206 , xx + 1 , xx + 244 ) ; xx [ 1 ] = xx
[ 18 ] + motionData [ 74 ] - ( xx [ 244 ] + motionData [ 4 ] ) ; xx [ 2 ] =
xx [ 19 ] + motionData [ 75 ] - ( xx [ 245 ] + motionData [ 5 ] ) ; xx [ 3 ]
= xx [ 20 ] + motionData [ 76 ] - ( xx [ 246 ] + motionData [ 6 ] ) ;
pm_math_Vector3_cross_ra ( xx + 35 , xx + 229 , xx + 18 ) ;
pm_math_Quaternion_xform_ra ( xx + 87 , xx + 18 , xx + 244 ) ;
pm_math_Vector3_cross_ra ( xx + 35 , xx + 232 , xx + 18 ) ;
pm_math_Quaternion_xform_ra ( xx + 87 , xx + 18 , xx + 247 ) ;
pm_math_Vector3_cross_ra ( xx + 35 , xx + 238 , xx + 18 ) ;
pm_math_Quaternion_xform_ra ( xx + 87 , xx + 18 , xx + 250 ) ; xx [ 18 ] = xx
[ 250 ] + xx [ 92 ] ; xx [ 19 ] = xx [ 251 ] + xx [ 93 ] ; xx [ 20 ] = xx [
252 ] + xx [ 94 ] ; pm_math_Vector3_cross_ra ( xx + 52 , xx + 229 , xx + 86 )
; pm_math_Quaternion_xform_ra ( xx + 108 , xx + 86 , xx + 89 ) ;
pm_math_Vector3_cross_ra ( xx + 52 , xx + 232 , xx + 86 ) ;
pm_math_Quaternion_xform_ra ( xx + 108 , xx + 86 , xx + 94 ) ;
pm_math_Vector3_cross_ra ( xx + 52 , xx + 238 , xx + 86 ) ;
pm_math_Quaternion_xform_ra ( xx + 108 , xx + 86 , xx + 229 ) ; xx [ 86 ] =
xx [ 229 ] + xx [ 45 ] ; xx [ 87 ] = xx [ 230 ] + xx [ 46 ] ; xx [ 88 ] = xx
[ 231 ] + xx [ 47 ] ; xx [ 106 ] = 0.993781518443084 ; xx [ 107 ] = -
0.1113476250326879 ; xx [ 108 ] = - 7.334371656786521e-7 ;
pm_math_Quaternion_xform_ra ( xx + 126 , xx + 106 , xx + 109 ) ; xx [ 106 ] =
xx [ 30 ] ; xx [ 107 ] = xx [ 39 ] ; xx [ 108 ] = 1.652793945804559e-9 ;
pm_math_Quaternion_xform_ra ( xx + 126 , xx + 106 , xx + 229 ) ; xx [ 106 ] =
xx [ 229 ] + xx [ 116 ] ; xx [ 107 ] = xx [ 230 ] + xx [ 117 ] ; xx [ 108 ] =
xx [ 231 ] + xx [ 118 ] ; xx [ 4 ] = 0.7071067811865476 ; xx [ 21 ] = xx [ 4
] * xx [ 195 ] ; xx [ 30 ] = xx [ 4 ] * xx [ 197 ] ; xx [ 38 ] = xx [ 4 ] *
xx [ 196 ] ; xx [ 39 ] = xx [ 4 ] * xx [ 198 ] ; xx [ 125 ] = xx [ 21 ] + xx
[ 30 ] ; xx [ 126 ] = xx [ 38 ] + xx [ 39 ] ; xx [ 127 ] = xx [ 30 ] - xx [
21 ] ; xx [ 128 ] = xx [ 39 ] - xx [ 38 ] ;
pm_math_Quaternion_inverseCompose_ra ( xx + 219 , xx + 125 , xx + 195 ) ; xx
[ 229 ] = - xx [ 7 ] ; xx [ 230 ] = - xx [ 24 ] ; xx [ 231 ] = - xx [ 41 ] ;
pm_math_Quaternion_xform_ra ( xx + 206 , xx + 229 , xx + 232 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 125 , xx + 232 , xx + 206 ) ; xx [
125 ] = - xx [ 206 ] ; xx [ 126 ] = - xx [ 207 ] ; xx [ 127 ] = - xx [ 208 ]
; pm_math_Quaternion_compDeriv_ra ( xx + 195 , xx + 125 , xx + 206 ) ; xx [
125 ] = 0.7060068630535433 ; xx [ 126 ] = - 0.03942796900017329 ; xx [ 127 ]
= - 0.7060064224509141 ; xx [ 128 ] = - 0.03942938041458775 ;
pm_math_Quaternion_inverseXform_ra ( xx + 125 , xx + 25 , xx + 229 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 195 , xx + 229 , xx + 24 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 125 , xx + 35 , xx + 229 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 195 , xx + 229 , xx + 35 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 125 , xx + 52 , xx + 229 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 195 , xx + 229 , xx + 125 ) ; xx [ 52
] = xx [ 132 ] ; xx [ 53 ] = 5.72890733875446e-18 ; xx [ 54 ] = -
1.110223024625157e-16 ; pm_math_Quaternion_compDeriv_ra ( xx + 195 , xx + 52
, xx + 229 ) ; xx [ 4 ] = 1.694065894508601e-21 ; xx [ 7 ] =
2.168404344971009e-19 ; xx [ 21 ] = xx [ 7 ] * xx [ 194 ] ; xx [ 24 ] = xx [
7 ] * xx [ 192 ] + xx [ 4 ] * xx [ 193 ] ; xx [ 52 ] = xx [ 21 ] ; xx [ 53 ]
= xx [ 4 ] * xx [ 194 ] ; xx [ 54 ] = - xx [ 24 ] ; pm_math_Vector3_cross_ra
( xx + 192 , xx + 52 , xx + 195 ) ; xx [ 52 ] = xx [ 4 ] + xx [ 28 ] * ( xx [
195 ] + xx [ 191 ] * xx [ 21 ] ) ; xx [ 53 ] = ( xx [ 4 ] * xx [ 191 ] * xx [
194 ] + xx [ 196 ] ) * xx [ 28 ] - xx [ 7 ] ; xx [ 54 ] = ( xx [ 197 ] - xx [
191 ] * xx [ 24 ] ) * xx [ 28 ] ; xx [ 191 ] = ( xx [ 65 ] + xx [ 82 ] ) * xx
[ 28 ] ; xx [ 192 ] = xx [ 28 ] * ( xx [ 221 ] * xx [ 222 ] - xx [ 219 ] * xx
[ 220 ] ) ; xx [ 193 ] = xx [ 29 ] - ( xx [ 220 ] * xx [ 220 ] + xx [ 23 ] )
* xx [ 28 ] ; J [ 1 ] = xx [ 32 ] ; J [ 2 ] = xx [ 42 ] ; J [ 3 ] = xx [ 8 ]
; J [ 4 ] = xx [ 59 ] ; J [ 9 ] = xx [ 33 ] ; J [ 10 ] = xx [ 43 ] ; J [ 11 ]
= xx [ 9 ] ; J [ 12 ] = xx [ 60 ] ; J [ 17 ] = xx [ 34 ] ; J [ 18 ] = xx [ 44
] ; J [ 19 ] = xx [ 10 ] ; J [ 20 ] = xx [ 61 ] ; J [ 25 ] = xx [ 55 ] + xx [
14 ] ; J [ 26 ] = xx [ 79 ] + xx [ 92 ] ; J [ 27 ] = xx [ 11 ] + xx [ 45 ] ;
J [ 28 ] = xx [ 130 ] + xx [ 116 ] ; J [ 33 ] = - ( xx [ 56 ] + xx [ 57 ] ) ;
J [ 34 ] = - ( xx [ 80 ] + xx [ 93 ] ) ; J [ 35 ] = - ( xx [ 12 ] + xx [ 46 ]
) ; J [ 36 ] = - ( xx [ 131 ] + xx [ 117 ] ) ; J [ 41 ] = xx [ 168 ] ; J [ 42
] = xx [ 175 ] ; J [ 43 ] = xx [ 186 ] ; J [ 44 ] = xx [ 200 ] ; J [ 45 ] =
xx [ 204 ] ; J [ 46 ] = xx [ 154 ] ; J [ 47 ] = xx [ 214 ] ; J [ 49 ] = xx [
169 ] ; J [ 50 ] = xx [ 176 ] ; J [ 51 ] = xx [ 187 ] ; J [ 52 ] = xx [ 201 ]
; J [ 53 ] = xx [ 205 ] ; J [ 54 ] = xx [ 155 ] ; J [ 55 ] = xx [ 215 ] ; J [
57 ] = - ( xx [ 216 ] + xx [ 145 ] + xx [ 69 ] ) ; J [ 58 ] = - ( xx [ 83 ] +
xx [ 66 ] ) ; J [ 59 ] = - ( xx [ 97 ] + xx [ 49 ] ) ; J [ 60 ] = - ( xx [
100 ] + xx [ 62 ] ) ; J [ 61 ] = - ( xx [ 103 ] + xx [ 72 ] ) ; J [ 62 ] = xx
[ 112 ] + xx [ 75 ] + xx [ 137 ] ; J [ 63 ] = ( xx [ 148 ] - xx [ 31 ] * xx [
156 ] * xx [ 158 ] ) * xx [ 28 ] + xx [ 151 ] - xx [ 40 ] ; J [ 65 ] = - ( xx
[ 217 ] + xx [ 146 ] + xx [ 70 ] ) ; J [ 66 ] = - ( xx [ 84 ] + xx [ 67 ] ) ;
J [ 67 ] = - ( xx [ 98 ] + xx [ 50 ] ) ; J [ 68 ] = - ( xx [ 101 ] + xx [ 63
] ) ; J [ 69 ] = - ( xx [ 104 ] + xx [ 73 ] ) ; J [ 70 ] = xx [ 113 ] + xx [
76 ] + xx [ 138 ] ; J [ 71 ] = ( xx [ 156 ] * xx [ 78 ] + xx [ 149 ] ) * xx [
28 ] + xx [ 152 ] ; J [ 73 ] = - ( xx [ 218 ] + xx [ 147 ] + xx [ 71 ] ) ; J
[ 74 ] = - ( xx [ 85 ] + xx [ 68 ] ) ; J [ 75 ] = - ( xx [ 99 ] + xx [ 51 ] )
; J [ 76 ] = - ( xx [ 102 ] + xx [ 64 ] ) ; J [ 77 ] = - ( xx [ 105 ] + xx [
74 ] ) ; J [ 78 ] = xx [ 114 ] + xx [ 77 ] + xx [ 139 ] ; J [ 79 ] = xx [ 28
] * ( xx [ 150 ] + xx [ 156 ] * xx [ 81 ] ) + xx [ 153 ] - xx [ 31 ] ; J [ 81
] = xx [ 182 ] ; J [ 82 ] = xx [ 178 ] ; J [ 83 ] = xx [ 189 ] ; J [ 89 ] =
xx [ 183 ] ; J [ 90 ] = xx [ 179 ] ; J [ 91 ] = xx [ 190 ] ; J [ 97 ] = xx [
134 ] ; J [ 98 ] = xx [ 160 ] ; J [ 99 ] = xx [ 164 ] ; J [ 100 ] = xx [ 120
] ; J [ 101 ] = xx [ 171 ] ; J [ 105 ] = xx [ 135 ] ; J [ 106 ] = xx [ 161 ]
; J [ 107 ] = xx [ 165 ] ; J [ 108 ] = xx [ 121 ] ; J [ 109 ] = xx [ 172 ] ;
J [ 112 ] = xx [ 13 ] * ( pm_math_Vector3_dot_ra ( xx + 140 , xx + 122 ) * xx
[ 5 ] - pm_math_Vector3_dot_ra ( xx + 140 , xx + 223 ) * xx [ 6 ] ) / xx [ 22
] + pm_math_Vector3_dot_ra ( xx + 226 , xx + 223 ) ; J [ 113 ] = xx [ 13 ] *
( pm_math_Vector3_dot_ra ( xx + 210 , xx + 235 ) * xx [ 5 ] -
pm_math_Vector3_dot_ra ( xx + 210 , xx + 241 ) * xx [ 6 ] ) / xx [ 22 ] -
pm_math_Vector3_dot_ra ( xx + 15 , xx + 223 ) - pm_math_Vector3_dot_ra ( xx +
1 , xx + 241 ) ; J [ 114 ] = xx [ 13 ] * ( pm_math_Vector3_dot_ra ( xx + 210
, xx + 244 ) * xx [ 5 ] - pm_math_Vector3_dot_ra ( xx + 210 , xx + 247 ) * xx
[ 6 ] ) / xx [ 22 ] - pm_math_Vector3_dot_ra ( xx + 18 , xx + 223 ) -
pm_math_Vector3_dot_ra ( xx + 1 , xx + 247 ) ; J [ 115 ] = xx [ 13 ] * (
pm_math_Vector3_dot_ra ( xx + 210 , xx + 89 ) * xx [ 5 ] -
pm_math_Vector3_dot_ra ( xx + 210 , xx + 94 ) * xx [ 6 ] ) / xx [ 22 ] -
pm_math_Vector3_dot_ra ( xx + 86 , xx + 223 ) - pm_math_Vector3_dot_ra ( xx +
1 , xx + 94 ) ; J [ 116 ] = xx [ 13 ] * pm_math_Vector3_dot_ra ( xx + 210 ,
xx + 109 ) * xx [ 5 ] / xx [ 22 ] - pm_math_Vector3_dot_ra ( xx + 106 , xx +
223 ) ; J [ 120 ] = xx [ 207 ] ; J [ 121 ] = xx [ 25 ] ; J [ 122 ] = xx [ 36
] ; J [ 123 ] = xx [ 126 ] ; J [ 124 ] = xx [ 230 ] ; J [ 128 ] = xx [ 208 ]
; J [ 129 ] = xx [ 26 ] ; J [ 130 ] = xx [ 37 ] ; J [ 131 ] = xx [ 127 ] ; J
[ 132 ] = xx [ 231 ] ; J [ 136 ] = pm_math_Vector3_dot_ra ( xx + 226 , xx +
122 ) ; J [ 137 ] = - ( pm_math_Vector3_dot_ra ( xx + 15 , xx + 122 ) +
pm_math_Vector3_dot_ra ( xx + 1 , xx + 235 ) ) ; J [ 138 ] = - (
pm_math_Vector3_dot_ra ( xx + 18 , xx + 122 ) + pm_math_Vector3_dot_ra ( xx +
1 , xx + 244 ) ) ; J [ 139 ] = - ( pm_math_Vector3_dot_ra ( xx + 86 , xx +
122 ) + pm_math_Vector3_dot_ra ( xx + 1 , xx + 89 ) ) ; J [ 140 ] = - (
pm_math_Vector3_dot_ra ( xx + 106 , xx + 122 ) + pm_math_Vector3_dot_ra ( xx
+ 1 , xx + 109 ) ) ; J [ 144 ] = pm_math_Vector3_dot_ra ( xx + 1 , xx + 52 )
- pm_math_Vector3_dot_ra ( xx + 226 , xx + 191 ) ; J [ 145 ] =
pm_math_Vector3_dot_ra ( xx + 15 , xx + 191 ) ; J [ 146 ] =
pm_math_Vector3_dot_ra ( xx + 18 , xx + 191 ) ; J [ 147 ] =
pm_math_Vector3_dot_ra ( xx + 86 , xx + 191 ) ; J [ 148 ] =
pm_math_Vector3_dot_ra ( xx + 106 , xx + 191 ) ; return 19 ; } static
boolean_T isInKinematicSingularity_0 ( const RuntimeDerivedValuesBundle *
rtdv , const int * modeVector , const double * motionData ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; ( void )
motionData ; return 0 ; } static boolean_T isInKinematicSingularity_1 ( const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) modeVector ; ( void ) motionData ; return 0 ; } static boolean_T
isInKinematicSingularity_2 ( const RuntimeDerivedValuesBundle * rtdv , const
int * modeVector , const double * motionData ) { const double * rtdvd = rtdv
-> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void
) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; ( void ) motionData ; return
0 ; } static boolean_T isInKinematicSingularity_3 ( const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) modeVector ; ( void ) motionData ; return 0 ; } static boolean_T
isInKinematicSingularity_4 ( const RuntimeDerivedValuesBundle * rtdv , const
int * modeVector , const double * motionData ) { const double * rtdvd = rtdv
-> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void
) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; ( void ) motionData ; return
0 ; } boolean_T test14_9449aeaa_1_isInKinematicSingularity ( const void *
mech , const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const
int * modeVector , const double * motionData ) { ( void ) mech ; ( void )
rtdv ; ( void ) modeVector ; ( void ) motionData ; switch ( constraintIdx ) {
case 0 : return isInKinematicSingularity_0 ( rtdv , modeVector , motionData )
; case 1 : return isInKinematicSingularity_1 ( rtdv , modeVector , motionData
) ; case 2 : return isInKinematicSingularity_2 ( rtdv , modeVector ,
motionData ) ; case 3 : return isInKinematicSingularity_3 ( rtdv , modeVector
, motionData ) ; case 4 : return isInKinematicSingularity_4 ( rtdv ,
modeVector , motionData ) ; } return 0 ; } void
test14_9449aeaa_1_convertStateVector ( const void * asmMech , const
RuntimeDerivedValuesBundle * rtdv , const void * simMech , const double *
asmState , const int * asmModeVector , const int * simModeVector , double *
simState ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int *
rtdvi = rtdv -> mInts . mValues ; double xx [ 58 ] ; ( void ) asmMech ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) simMech ; ( void ) asmModeVector ; (
void ) simModeVector ; xx [ 0 ] = - 0.08499731596381738 ; xx [ 1 ] = -
0.7052243478362852 ; xx [ 2 ] = - 0.08288208610093117 ; xx [ 3 ] = -
0.6989739875713483 ; xx [ 4 ] = 0.5 ; xx [ 5 ] = xx [ 4 ] * asmState [ 2 ] ;
xx [ 6 ] = 0.2357227559798625 ; xx [ 7 ] = sin ( xx [ 5 ] ) ; xx [ 8 ] =
0.9718120321650099 ; xx [ 9 ] = 4.019508996436549e-3 ; xx [ 10 ] = cos ( xx [
5 ] ) ; xx [ 11 ] = - ( xx [ 6 ] * xx [ 7 ] ) ; xx [ 12 ] = xx [ 8 ] * xx [ 7
] ; xx [ 13 ] = xx [ 9 ] * xx [ 7 ] ; pm_math_Quaternion_compose_ra ( xx + 0
, xx + 10 , xx + 14 ) ; xx [ 0 ] = 1.495693379815366e-3 ; xx [ 1 ] = xx [ 4 ]
* asmState [ 4 ] ; xx [ 2 ] = cos ( xx [ 1 ] ) ; xx [ 3 ] =
0.1187086636215266 ; xx [ 5 ] = sin ( xx [ 1 ] ) ; xx [ 1 ] = xx [ 0 ] * xx [
2 ] + xx [ 3 ] * xx [ 5 ] ; xx [ 7 ] = 0.9929181650975998 ; xx [ 10 ] =
4.419672128196023e-3 ; xx [ 11 ] = xx [ 7 ] * xx [ 2 ] + xx [ 10 ] * xx [ 5 ]
; xx [ 12 ] = xx [ 3 ] * xx [ 2 ] - xx [ 0 ] * xx [ 5 ] ; xx [ 0 ] = xx [ 7 ]
* xx [ 5 ] - xx [ 10 ] * xx [ 2 ] ; xx [ 18 ] = - xx [ 1 ] ; xx [ 19 ] = xx [
11 ] ; xx [ 20 ] = xx [ 12 ] ; xx [ 21 ] = xx [ 0 ] ;
pm_math_Quaternion_compose_ra ( xx + 14 , xx + 18 , xx + 22 ) ; xx [ 26 ] = -
0.9999999999983461 ; xx [ 27 ] = - 2.156793422192216e-7 ; xx [ 28 ] =
5.859787807760419e-8 ; xx [ 29 ] = 1.804939452482168e-6 ; xx [ 2 ] = xx [ 4 ]
* asmState [ 6 ] ; xx [ 3 ] = 3.609878930277421e-6 ; xx [ 5 ] = sin ( xx [ 2
] ) ; xx [ 7 ] = 0.9999999999933915 ; xx [ 10 ] = 4.313584731630016e-7 ; xx [
30 ] = cos ( xx [ 2 ] ) ; xx [ 31 ] = xx [ 3 ] * xx [ 5 ] ; xx [ 32 ] = - (
xx [ 7 ] * xx [ 5 ] ) ; xx [ 33 ] = xx [ 10 ] * xx [ 5 ] ;
pm_math_Quaternion_compose_ra ( xx + 26 , xx + 30 , xx + 34 ) ;
pm_math_Quaternion_compose_ra ( xx + 22 , xx + 34 , xx + 26 ) ; xx [ 30 ] = -
1.216632498952289e-6 ; xx [ 31 ] = - 0.99844426994826 ; xx [ 32 ] =
0.05575876438621875 ; xx [ 33 ] = 3.580316125383367e-7 ; xx [ 2 ] = xx [ 4 ]
* asmState [ 8 ] ; xx [ 4 ] = sin ( xx [ 2 ] ) ; xx [ 5 ] =
0.9999999999978137 ; xx [ 38 ] = cos ( xx [ 2 ] ) ; xx [ 39 ] = - (
5.108363663771844e-7 * xx [ 4 ] ) ; xx [ 40 ] = 2.027680660063491e-6 * xx [ 4
] ; xx [ 41 ] = - ( xx [ 5 ] * xx [ 4 ] ) ; pm_math_Quaternion_compose_ra (
xx + 30 , xx + 38 , xx + 42 ) ; xx [ 30 ] = - 1.581919911297324e-3 ; xx [ 31
] = 3.043703554484884e-3 ; xx [ 32 ] = - 0.4695245943326235 ;
pm_math_Quaternion_xform_ra ( xx + 42 , xx + 30 , xx + 38 ) ; xx [ 30 ] =
1.327625287357436e-7 - xx [ 38 ] ; xx [ 31 ] = 4.885928012311413e-7 - xx [ 39
] ; xx [ 32 ] = 1.053813650826583 - xx [ 40 ] ; pm_math_Quaternion_xform_ra (
xx + 26 , xx + 30 , xx + 38 ) ; xx [ 26 ] = 7.54929787758902e-8 ; xx [ 27 ] =
- 0.0199999879359847 ; xx [ 28 ] = - 0.05090199292298809 ;
pm_math_Quaternion_xform_ra ( xx + 34 , xx + 26 , xx + 46 ) ; xx [ 26 ] =
0.1106342046522229 - xx [ 46 ] ; xx [ 27 ] = - ( 9.999999999962842e-3 + xx [
47 ] ) ; xx [ 28 ] = - xx [ 48 ] ; pm_math_Quaternion_xform_ra ( xx + 22 , xx
+ 26 , xx + 46 ) ; xx [ 2 ] = 2.0 ; xx [ 22 ] = xx [ 11 ] ; xx [ 23 ] = xx [
12 ] ; xx [ 24 ] = xx [ 0 ] ; xx [ 4 ] = 0.010001 ; xx [ 13 ] = xx [ 0 ] * xx
[ 4 ] ; xx [ 25 ] = 0.1106342046522274 ; xx [ 29 ] = xx [ 0 ] * xx [ 25 ] ;
xx [ 0 ] = xx [ 4 ] * xx [ 11 ] + xx [ 12 ] * xx [ 25 ] ; xx [ 49 ] = - xx [
13 ] ; xx [ 50 ] = - xx [ 29 ] ; xx [ 51 ] = xx [ 0 ] ;
pm_math_Vector3_cross_ra ( xx + 22 , xx + 49 , xx + 52 ) ; xx [ 22 ] =
0.1316810185882336 - ( xx [ 2 ] * ( xx [ 52 ] + xx [ 13 ] * xx [ 1 ] ) - xx [
25 ] ) ; xx [ 23 ] = - ( 9.011414711072623e-3 + xx [ 4 ] + ( xx [ 29 ] * xx [
1 ] + xx [ 53 ] ) * xx [ 2 ] ) ; xx [ 24 ] = 0.1047270297279631 - ( xx [ 54 ]
- xx [ 0 ] * xx [ 1 ] ) * xx [ 2 ] ; pm_math_Quaternion_xform_ra ( xx + 14 ,
xx + 22 , xx + 0 ) ; xx [ 11 ] = - 5.167373958926922e-3 ; xx [ 12 ] =
0.01953060282014866 ; xx [ 13 ] = 0.1060315916205751 ;
pm_math_Quaternion_xform_ra ( xx + 14 , xx + 11 , xx + 49 ) ; xx [ 11 ] = - (
xx [ 6 ] * asmState [ 3 ] ) ; xx [ 12 ] = xx [ 8 ] * asmState [ 3 ] ; xx [ 13
] = xx [ 9 ] * asmState [ 3 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 18
, xx + 11 , xx + 14 ) ; xx [ 52 ] = xx [ 14 ] ; xx [ 53 ] = xx [ 15 ] +
asmState [ 5 ] ; xx [ 54 ] = xx [ 16 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 34 , xx + 52 , xx + 14 ) ; xx [ 55 ] = xx [ 14 ] + xx [ 3 ] * asmState [
7 ] ; xx [ 56 ] = xx [ 15 ] - xx [ 7 ] * asmState [ 7 ] ; xx [ 57 ] = xx [ 16
] + xx [ 10 ] * asmState [ 7 ] ; pm_math_Vector3_cross_ra ( xx + 55 , xx + 30
, xx + 6 ) ; pm_math_Vector3_cross_ra ( xx + 52 , xx + 26 , xx + 14 ) ;
pm_math_Vector3_cross_ra ( xx + 11 , xx + 22 , xx + 26 ) ; xx [ 9 ] = xx [ 26
] - 0.1029642730927401 * asmState [ 3 ] ; xx [ 10 ] = xx [ 27 ] -
0.02497328869161739 * asmState [ 3 ] ; xx [ 11 ] = xx [ 28 ] -
4.179086652678059e-4 * asmState [ 3 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 18 , xx + 9 , xx + 22 ) ; xx [ 9 ] = xx [ 14 ] + xx [ 22 ] ; xx [ 10 ] =
xx [ 15 ] + xx [ 23 ] ; xx [ 11 ] = xx [ 16 ] + xx [ 24 ] - xx [ 25 ] *
asmState [ 5 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 34 , xx + 9 , xx +
12 ) ; xx [ 9 ] = xx [ 6 ] + xx [ 12 ] - 0.05090200154981597 * asmState [ 7 ]
; xx [ 10 ] = xx [ 7 ] + xx [ 13 ] - 1.837500643263612e-7 * asmState [ 7 ] ;
xx [ 11 ] = xx [ 8 ] + xx [ 14 ] - 3.295443719477511e-9 * asmState [ 7 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 42 , xx + 9 , xx + 6 ) ; xx [ 9 ] =
xx [ 6 ] - 3.042751508538877e-3 * asmState [ 9 ] ; xx [ 10 ] = xx [ 7 ] -
1.581680061056172e-3 * asmState [ 9 ] ; xx [ 11 ] = xx [ 8 ] -
1.652793945804558e-9 * asmState [ 9 ] ; xx [ 6 ] = - 5.108363663908206e-7 ;
xx [ 7 ] = 2.027680659941788e-6 ; xx [ 8 ] = - xx [ 5 ] ; simState [ 0 ] =
asmState [ 0 ] ; simState [ 1 ] = asmState [ 1 ] ; simState [ 2 ] = asmState
[ 2 ] ; simState [ 3 ] = asmState [ 3 ] ; simState [ 4 ] = asmState [ 4 ] ;
simState [ 5 ] = asmState [ 5 ] ; simState [ 6 ] = asmState [ 12 ] ; simState
[ 7 ] = asmState [ 13 ] ; simState [ 8 ] = asmState [ 14 ] ; simState [ 9 ] =
asmState [ 15 ] ; simState [ 10 ] = - ( xx [ 40 ] + xx [ 48 ] + xx [ 2 ] - xx
[ 51 ] + 0.8441003091415679 ) ; simState [ 11 ] = pm_math_Vector3_dot_ra ( xx
+ 9 , xx + 6 ) ; simState [ 12 ] = asmState [ 10 ] ; simState [ 13 ] =
asmState [ 11 ] ; simState [ 14 ] = asmState [ 8 ] ; simState [ 15 ] =
asmState [ 9 ] ; simState [ 16 ] = asmState [ 16 ] ; simState [ 17 ] =
asmState [ 17 ] ; simState [ 18 ] = asmState [ 6 ] ; simState [ 19 ] =
asmState [ 7 ] ; }

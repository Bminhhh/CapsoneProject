#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
void test14_9449aeaa_1_resetSimStateVector ( const void * mech , double *
state ) { double xx [ 1 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; state [ 0 ] = xx
[ 0 ] ; state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 0 ] ; state [ 3 ] = xx [
0 ] ; state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ; state [ 6 ] = xx [ 0
] ; state [ 7 ] = xx [ 0 ] ; state [ 8 ] = xx [ 0 ] ; state [ 9 ] = xx [ 0 ]
; state [ 10 ] = xx [ 0 ] ; state [ 11 ] = xx [ 0 ] ; state [ 12 ] = xx [ 0 ]
; state [ 13 ] = xx [ 0 ] ; state [ 14 ] = xx [ 0 ] ; state [ 15 ] = xx [ 0 ]
; state [ 16 ] = xx [ 0 ] ; state [ 17 ] = xx [ 0 ] ; state [ 18 ] = xx [ 0 ]
; state [ 19 ] = xx [ 0 ] ; } static void perturbSimJointPrimitiveState_0_0 (
double mag , double * state ) { state [ 0 ] = state [ 0 ] + mag ; } static
void perturbSimJointPrimitiveState_0_0v ( double mag , double * state ) {
state [ 0 ] = state [ 0 ] + mag ; state [ 1 ] = state [ 1 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_1_0 ( double mag , double * state )
{ state [ 2 ] = state [ 2 ] + mag ; } static void
perturbSimJointPrimitiveState_1_0v ( double mag , double * state ) { state [
2 ] = state [ 2 ] + mag ; state [ 3 ] = state [ 3 ] - 0.875 * mag ; } static
void perturbSimJointPrimitiveState_2_0 ( double mag , double * state ) {
state [ 4 ] = state [ 4 ] + mag ; } static void
perturbSimJointPrimitiveState_2_0v ( double mag , double * state ) { state [
4 ] = state [ 4 ] + mag ; state [ 5 ] = state [ 5 ] - 0.875 * mag ; } static
void perturbSimJointPrimitiveState_3_0 ( double mag , double * state ) {
state [ 6 ] = state [ 6 ] + mag ; } static void
perturbSimJointPrimitiveState_3_0v ( double mag , double * state ) { state [
6 ] = state [ 6 ] + mag ; state [ 7 ] = state [ 7 ] - 0.875 * mag ; } static
void perturbSimJointPrimitiveState_4_0 ( double mag , double * state ) {
state [ 8 ] = state [ 8 ] + mag ; } static void
perturbSimJointPrimitiveState_4_0v ( double mag , double * state ) { state [
8 ] = state [ 8 ] + mag ; state [ 9 ] = state [ 9 ] - 0.875 * mag ; } static
void perturbSimJointPrimitiveState_5_0 ( double mag , double * state ) {
state [ 10 ] = state [ 10 ] + mag ; } static void
perturbSimJointPrimitiveState_5_0v ( double mag , double * state ) { state [
10 ] = state [ 10 ] + mag ; state [ 11 ] = state [ 11 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_6_0 ( double mag , double * state )
{ state [ 12 ] = state [ 12 ] + mag ; } static void
perturbSimJointPrimitiveState_6_0v ( double mag , double * state ) { state [
12 ] = state [ 12 ] + mag ; state [ 13 ] = state [ 13 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_7_0 ( double mag , double * state )
{ state [ 14 ] = state [ 14 ] + mag ; } static void
perturbSimJointPrimitiveState_7_0v ( double mag , double * state ) { state [
14 ] = state [ 14 ] + mag ; state [ 15 ] = state [ 15 ] - 0.875 * mag ; }
void test14_9449aeaa_1_perturbSimJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primIdx , double mag , boolean_T doPerturbVelocity ,
double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { case 0 :
perturbSimJointPrimitiveState_0_0 ( mag , state ) ; break ; case 1 :
perturbSimJointPrimitiveState_0_0v ( mag , state ) ; break ; case 12 :
perturbSimJointPrimitiveState_1_0 ( mag , state ) ; break ; case 13 :
perturbSimJointPrimitiveState_1_0v ( mag , state ) ; break ; case 24 :
perturbSimJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbSimJointPrimitiveState_2_0v ( mag , state ) ; break ; case 36 :
perturbSimJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbSimJointPrimitiveState_3_0v ( mag , state ) ; break ; case 48 :
perturbSimJointPrimitiveState_4_0 ( mag , state ) ; break ; case 49 :
perturbSimJointPrimitiveState_4_0v ( mag , state ) ; break ; case 60 :
perturbSimJointPrimitiveState_5_0 ( mag , state ) ; break ; case 61 :
perturbSimJointPrimitiveState_5_0v ( mag , state ) ; break ; case 72 :
perturbSimJointPrimitiveState_6_0 ( mag , state ) ; break ; case 73 :
perturbSimJointPrimitiveState_6_0v ( mag , state ) ; break ; case 84 :
perturbSimJointPrimitiveState_7_0 ( mag , state ) ; break ; case 85 :
perturbSimJointPrimitiveState_7_0v ( mag , state ) ; break ; } } void
test14_9449aeaa_1_perturbFlexibleBodyState ( const void * mech , size_t
stageIdx , double mag , boolean_T doPerturbVelocity , double * state ) { (
void ) mech ; ( void ) stageIdx ; ( void ) mag ; ( void ) doPerturbVelocity ;
( void ) state ; switch ( stageIdx * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { }
} void test14_9449aeaa_1_constructStateVector ( const void * mech , const
double * solverState , const double * u , const double * uDot , double *
discreteState , double * fullState ) { ( void ) mech ; ( void ) u ; ( void )
uDot ; ( void ) discreteState ; fullState [ 0 ] = solverState [ 0 ] ;
fullState [ 1 ] = solverState [ 1 ] ; fullState [ 2 ] = solverState [ 2 ] ;
fullState [ 3 ] = solverState [ 3 ] ; fullState [ 4 ] = solverState [ 4 ] ;
fullState [ 5 ] = solverState [ 5 ] ; fullState [ 6 ] = solverState [ 6 ] ;
fullState [ 7 ] = solverState [ 7 ] ; fullState [ 8 ] = solverState [ 8 ] ;
fullState [ 9 ] = solverState [ 9 ] ; fullState [ 10 ] = solverState [ 10 ] ;
fullState [ 11 ] = solverState [ 11 ] ; fullState [ 12 ] = solverState [ 12 ]
; fullState [ 13 ] = solverState [ 13 ] ; fullState [ 14 ] = solverState [ 14
] ; fullState [ 15 ] = solverState [ 15 ] ; fullState [ 16 ] = solverState [
16 ] ; fullState [ 17 ] = solverState [ 17 ] ; fullState [ 18 ] = solverState
[ 18 ] ; fullState [ 19 ] = solverState [ 19 ] ; } void
test14_9449aeaa_1_extractSolverStateVector ( const void * mech , const double
* fullState , double * solverState ) { ( void ) mech ; solverState [ 0 ] =
fullState [ 0 ] ; solverState [ 1 ] = fullState [ 1 ] ; solverState [ 2 ] =
fullState [ 2 ] ; solverState [ 3 ] = fullState [ 3 ] ; solverState [ 4 ] =
fullState [ 4 ] ; solverState [ 5 ] = fullState [ 5 ] ; solverState [ 6 ] =
fullState [ 6 ] ; solverState [ 7 ] = fullState [ 7 ] ; solverState [ 8 ] =
fullState [ 8 ] ; solverState [ 9 ] = fullState [ 9 ] ; solverState [ 10 ] =
fullState [ 10 ] ; solverState [ 11 ] = fullState [ 11 ] ; solverState [ 12 ]
= fullState [ 12 ] ; solverState [ 13 ] = fullState [ 13 ] ; solverState [ 14
] = fullState [ 14 ] ; solverState [ 15 ] = fullState [ 15 ] ; solverState [
16 ] = fullState [ 16 ] ; solverState [ 17 ] = fullState [ 17 ] ; solverState
[ 18 ] = fullState [ 18 ] ; solverState [ 19 ] = fullState [ 19 ] ; }
boolean_T test14_9449aeaa_1_isPositionViolation ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; int ii [ 1 ] ;
double xx [ 94 ] ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
eqnEnableFlags ; ( void ) modeVector ; xx [ 0 ] = 0.08297193236559158 ; xx [
1 ] = - 0.6989660525715147 ; xx [ 2 ] = 0.08508706173602215 ; xx [ 3 ] = -
0.7052108250142259 ; xx [ 4 ] = 0.5 ; xx [ 5 ] = xx [ 4 ] * state [ 6 ] ; xx
[ 6 ] = sin ( xx [ 5 ] ) ; xx [ 7 ] = cos ( xx [ 5 ] ) ; xx [ 8 ] = - (
0.2359713450861992 * xx [ 6 ] ) ; xx [ 9 ] = - ( 0.9717517007293006 * xx [ 6
] ) ; xx [ 10 ] = - ( 4.019505930177081e-3 * xx [ 6 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 0 , xx + 7 , xx + 11 ) ; xx [ 0 ] =
1.495622320918377e-3 ; xx [ 1 ] = xx [ 4 ] * state [ 8 ] ; xx [ 2 ] = cos (
xx [ 1 ] ) ; xx [ 3 ] = 0.1188356543686412 ; xx [ 5 ] = sin ( xx [ 1 ] ) ; xx
[ 1 ] = xx [ 0 ] * xx [ 2 ] - xx [ 3 ] * xx [ 5 ] ; xx [ 6 ] =
4.415720941208234e-3 ; xx [ 7 ] = 0.9929029921262297 ; xx [ 8 ] = xx [ 6 ] *
xx [ 5 ] - xx [ 7 ] * xx [ 2 ] ; xx [ 9 ] = xx [ 0 ] * xx [ 5 ] + xx [ 3 ] *
xx [ 2 ] ; xx [ 0 ] = xx [ 6 ] * xx [ 2 ] + xx [ 7 ] * xx [ 5 ] ; xx [ 2 ] =
- xx [ 0 ] ; xx [ 15 ] = xx [ 1 ] ; xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] = xx [ 9
] ; xx [ 18 ] = xx [ 2 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 15
, xx + 19 ) ; xx [ 3 ] = - xx [ 4 ] ; xx [ 15 ] = xx [ 4 ] ; xx [ 16 ] = xx [
4 ] ; xx [ 17 ] = xx [ 3 ] ; xx [ 18 ] = xx [ 4 ] ;
pm_math_Quaternion_compose_ra ( xx + 19 , xx + 15 , xx + 23 ) ; xx [ 5 ] =
2.0 ; xx [ 6 ] = 1.0 ; xx [ 15 ] = ( xx [ 24 ] * xx [ 26 ] + xx [ 23 ] * xx [
25 ] ) * xx [ 5 ] ; xx [ 16 ] = xx [ 5 ] * ( xx [ 25 ] * xx [ 26 ] - xx [ 23
] * xx [ 24 ] ) ; xx [ 17 ] = xx [ 6 ] - ( xx [ 24 ] * xx [ 24 ] + xx [ 25 ]
* xx [ 25 ] ) * xx [ 5 ] ; xx [ 23 ] = - 0.9984441693056983 ; xx [ 24 ] =
9.980207034736295e-7 ; xx [ 25 ] = 3.115531069039944e-7 ; xx [ 26 ] = -
0.05576056651757455 ; xx [ 27 ] = - 0.9984440686594036 ; xx [ 28 ] = -
1.210096473124015e-6 ; xx [ 29 ] = - 2.410217961564497e-7 ; xx [ 30 ] =
0.0557623686488803 ; xx [ 7 ] = xx [ 4 ] * state [ 12 ] ; xx [ 10 ] = sin (
xx [ 7 ] ) ; xx [ 31 ] = cos ( xx [ 7 ] ) ; xx [ 32 ] = 1.171949776569064e-7
* xx [ 10 ] ; xx [ 33 ] = 4.31358898227365e-7 * xx [ 10 ] ; xx [ 34 ] = xx [
10 ] ; pm_math_Quaternion_compose_ra ( xx + 27 , xx + 31 , xx + 35 ) ;
pm_math_Quaternion_compose_ra ( xx + 23 , xx + 35 , xx + 27 ) ; xx [ 31 ] =
0.5000008239281672 ; xx [ 32 ] = - 0.499999234668057 ; xx [ 33 ] = -
0.5000009810096314 ; xx [ 34 ] = - 0.4999989603908367 ;
pm_math_Quaternion_compose_ra ( xx + 27 , xx + 31 , xx + 39 ) ; xx [ 43 ] =
xx [ 5 ] * ( xx [ 40 ] * xx [ 41 ] - xx [ 39 ] * xx [ 42 ] ) ; xx [ 44 ] = xx
[ 6 ] - ( xx [ 40 ] * xx [ 40 ] + xx [ 42 ] * xx [ 42 ] ) * xx [ 5 ] ; xx [
45 ] = ( xx [ 41 ] * xx [ 42 ] + xx [ 39 ] * xx [ 40 ] ) * xx [ 5 ] ; xx [ 39
] = 0.1106342046522872 ; xx [ 40 ] = 0.02999999999998754 ; xx [ 41 ] = -
1.655280357226729e-13 ; pm_math_Quaternion_xform_ra ( xx + 19 , xx + 39 , xx
+ 46 ) ; xx [ 18 ] = xx [ 8 ] ; xx [ 19 ] = xx [ 9 ] ; xx [ 20 ] = xx [ 2 ] ;
xx [ 2 ] = 0.01000100000000001 ; xx [ 7 ] = xx [ 0 ] * xx [ 2 ] ; xx [ 10 ] =
0.1106342046522275 ; xx [ 21 ] = xx [ 0 ] * xx [ 10 ] ; xx [ 0 ] = xx [ 2 ] *
xx [ 8 ] + xx [ 9 ] * xx [ 10 ] ; xx [ 8 ] = xx [ 7 ] ; xx [ 9 ] = xx [ 21 ]
; xx [ 10 ] = xx [ 0 ] ; pm_math_Vector3_cross_ra ( xx + 18 , xx + 8 , xx +
39 ) ; xx [ 8 ] = - ( 0.02104361874950805 + xx [ 5 ] * ( xx [ 39 ] + xx [ 7 ]
* xx [ 1 ] ) ) ; xx [ 9 ] = - ( 0.01898006821655238 + ( xx [ 21 ] * xx [ 1 ]
+ xx [ 40 ] ) * xx [ 5 ] ) ; xx [ 10 ] = 0.1047281200976424 - ( xx [ 1 ] * xx
[ 0 ] + xx [ 41 ] ) * xx [ 5 ] ; pm_math_Quaternion_xform_ra ( xx + 11 , xx +
8 , xx + 0 ) ; xx [ 7 ] = 9.897538421414293e-3 ; xx [ 8 ] =
0.03896394932685158 ; xx [ 9 ] = 0.1061120224367209 ;
pm_math_Quaternion_xform_ra ( xx + 11 , xx + 7 , xx + 18 ) ; xx [ 7 ] =
7.54929787758902e-8 ; xx [ 8 ] = - 0.0199999879359847 ; xx [ 9 ] = xx [ 7 ] ;
xx [ 10 ] = xx [ 8 ] ; xx [ 11 ] = - 0.05090199292298814 ;
pm_math_Quaternion_xform_ra ( xx + 27 , xx + 9 , xx + 12 ) ; xx [ 9 ] =
1.581919911297324e-3 ; xx [ 39 ] = 2.273313047474082e-8 ; xx [ 40 ] =
8.360821906871329e-8 ; xx [ 41 ] = 0.1149560547068914 ;
pm_math_Quaternion_xform_ra ( xx + 35 , xx + 39 , xx + 49 ) ; xx [ 10 ] =
3.043703554484884e-3 ; xx [ 11 ] = 0.4695245943326235 ; xx [ 35 ] = - ( xx [
9 ] + xx [ 49 ] ) ; xx [ 36 ] = xx [ 10 ] - xx [ 50 ] ; xx [ 37 ] = - ( xx [
11 ] + xx [ 51 ] ) ; pm_math_Quaternion_xform_ra ( xx + 23 , xx + 35 , xx +
38 ) ; xx [ 21 ] = 0.277038885939381 - state [ 10 ] ; xx [ 49 ] = -
0.08499731596381738 ; xx [ 50 ] = - 0.7052243478362852 ; xx [ 51 ] = -
0.08288208610093117 ; xx [ 52 ] = - 0.6989739875713483 ; xx [ 22 ] = xx [ 4 ]
* state [ 2 ] ; xx [ 35 ] = sin ( xx [ 22 ] ) ; xx [ 53 ] = cos ( xx [ 22 ] )
; xx [ 54 ] = - ( 0.2357227559798625 * xx [ 35 ] ) ; xx [ 55 ] =
0.9718120321650099 * xx [ 35 ] ; xx [ 56 ] = 4.019508996436549e-3 * xx [ 35 ]
; pm_math_Quaternion_compose_ra ( xx + 49 , xx + 53 , xx + 57 ) ; xx [ 22 ] =
1.495693379815366e-3 ; xx [ 35 ] = xx [ 4 ] * state [ 4 ] ; xx [ 36 ] = cos (
xx [ 35 ] ) ; xx [ 37 ] = 0.1187086636215266 ; xx [ 41 ] = sin ( xx [ 35 ] )
; xx [ 35 ] = xx [ 22 ] * xx [ 36 ] + xx [ 37 ] * xx [ 41 ] ; xx [ 42 ] =
0.9929181650975998 ; xx [ 49 ] = 4.419672128196023e-3 ; xx [ 50 ] = xx [ 42 ]
* xx [ 36 ] + xx [ 49 ] * xx [ 41 ] ; xx [ 51 ] = xx [ 37 ] * xx [ 36 ] - xx
[ 22 ] * xx [ 41 ] ; xx [ 22 ] = xx [ 42 ] * xx [ 41 ] - xx [ 49 ] * xx [ 36
] ; xx [ 52 ] = - xx [ 35 ] ; xx [ 53 ] = xx [ 50 ] ; xx [ 54 ] = xx [ 51 ] ;
xx [ 55 ] = xx [ 22 ] ; pm_math_Quaternion_compose_ra ( xx + 57 , xx + 52 ,
xx + 61 ) ; xx [ 52 ] = xx [ 4 ] ; xx [ 53 ] = xx [ 3 ] ; xx [ 54 ] = xx [ 3
] ; xx [ 55 ] = xx [ 3 ] ; pm_math_Quaternion_compose_ra ( xx + 61 , xx + 52
, xx + 65 ) ; xx [ 52 ] = ( xx [ 66 ] * xx [ 68 ] + xx [ 65 ] * xx [ 67 ] ) *
xx [ 5 ] ; xx [ 53 ] = xx [ 5 ] * ( xx [ 67 ] * xx [ 68 ] - xx [ 65 ] * xx [
66 ] ) ; xx [ 54 ] = xx [ 6 ] - ( xx [ 66 ] * xx [ 66 ] + xx [ 67 ] * xx [ 67
] ) * xx [ 5 ] ; xx [ 65 ] = - 1.216632498952289e-6 ; xx [ 66 ] =
0.99844426994826 ; xx [ 67 ] = - 0.05575876438621875 ; xx [ 68 ] = -
3.580316125383367e-7 ; xx [ 3 ] = xx [ 4 ] * state [ 14 ] ; xx [ 36 ] = sin (
xx [ 3 ] ) ; xx [ 69 ] = cos ( xx [ 3 ] ) ; xx [ 70 ] = - (
1.171949768652286e-7 * xx [ 36 ] ) ; xx [ 71 ] = - ( 4.313588970662109e-7 *
xx [ 36 ] ) ; xx [ 72 ] = - xx [ 36 ] ; pm_math_Quaternion_compose_ra ( xx +
65 , xx + 69 , xx + 73 ) ; pm_math_Quaternion_compose_ra ( xx + 23 , xx + 73
, xx + 65 ) ; pm_math_Quaternion_compose_ra ( xx + 65 , xx + 31 , xx + 69 ) ;
xx [ 31 ] = xx [ 5 ] * ( xx [ 70 ] * xx [ 71 ] - xx [ 69 ] * xx [ 72 ] ) ; xx
[ 32 ] = xx [ 6 ] - ( xx [ 70 ] * xx [ 70 ] + xx [ 72 ] * xx [ 72 ] ) * xx [
5 ] ; xx [ 33 ] = ( xx [ 71 ] * xx [ 72 ] + xx [ 69 ] * xx [ 70 ] ) * xx [ 5
] ; xx [ 3 ] = 9.999999999962842e-3 ; xx [ 34 ] = xx [ 3 ] * xx [ 64 ] ; xx [
36 ] = 0.1106342046522229 ; xx [ 37 ] = xx [ 3 ] * xx [ 62 ] + xx [ 36 ] * xx
[ 63 ] ; xx [ 69 ] = xx [ 34 ] ; xx [ 70 ] = xx [ 36 ] * xx [ 64 ] ; xx [ 71
] = - xx [ 37 ] ; pm_math_Vector3_cross_ra ( xx + 62 , xx + 69 , xx + 77 ) ;
xx [ 69 ] = xx [ 50 ] ; xx [ 70 ] = xx [ 51 ] ; xx [ 71 ] = xx [ 22 ] ; xx [
3 ] = 0.010001 ; xx [ 41 ] = xx [ 22 ] * xx [ 3 ] ; xx [ 42 ] =
0.1106342046522274 ; xx [ 49 ] = xx [ 22 ] * xx [ 42 ] ; xx [ 22 ] = xx [ 3 ]
* xx [ 50 ] + xx [ 51 ] * xx [ 42 ] ; xx [ 80 ] = - xx [ 41 ] ; xx [ 81 ] = -
xx [ 49 ] ; xx [ 82 ] = xx [ 22 ] ; pm_math_Vector3_cross_ra ( xx + 69 , xx +
80 , xx + 83 ) ; xx [ 69 ] = 0.242315223240461 - xx [ 5 ] * ( xx [ 83 ] + xx
[ 41 ] * xx [ 35 ] ) ; xx [ 70 ] = - ( 0.01901241471107262 + ( xx [ 49 ] * xx
[ 35 ] + xx [ 84 ] ) * xx [ 5 ] ) ; xx [ 71 ] = 0.1047270297279631 - ( xx [
85 ] - xx [ 22 ] * xx [ 35 ] ) * xx [ 5 ] ; pm_math_Quaternion_xform_ra ( xx
+ 57 , xx + 69 , xx + 49 ) ; xx [ 69 ] = - 5.167373958926922e-3 ; xx [ 70 ] =
0.01953060282014866 ; xx [ 71 ] = 0.1060315916205751 ;
pm_math_Quaternion_xform_ra ( xx + 57 , xx + 69 , xx + 80 ) ; xx [ 55 ] = xx
[ 7 ] ; xx [ 56 ] = xx [ 8 ] ; xx [ 57 ] = - 0.05090199292298809 ;
pm_math_Quaternion_xform_ra ( xx + 65 , xx + 55 , xx + 58 ) ; xx [ 55 ] =
1.327625287357436e-7 ; xx [ 56 ] = 4.885928012311413e-7 ; xx [ 57 ] =
1.053813650826583 ; pm_math_Quaternion_xform_ra ( xx + 73 , xx + 55 , xx + 69
) ; xx [ 55 ] = - ( xx [ 9 ] + xx [ 69 ] ) ; xx [ 56 ] = xx [ 10 ] - xx [ 70
] ; xx [ 57 ] = - ( xx [ 11 ] + xx [ 71 ] ) ; pm_math_Quaternion_xform_ra (
xx + 23 , xx + 55 , xx + 7 ) ; xx [ 22 ] = 0.4999989603908348 ; xx [ 23 ] = -
0.5000009810096334 ; xx [ 24 ] = 0.4999992346680554 ; xx [ 25 ] =
0.5000008239281687 ; pm_math_Quaternion_compose_ra ( xx + 65 , xx + 22 , xx +
69 ) ; xx [ 22 ] = 0.4999992346680592 ; xx [ 23 ] = 0.5000008239281649 ; xx [
24 ] = - 0.4999989603908379 ; xx [ 25 ] = 0.5000009810096302 ;
pm_math_Quaternion_compose_ra ( xx + 27 , xx + 22 , xx + 65 ) ; xx [ 3 ] =
1.224649036341985e-16 ; xx [ 22 ] = 0.4995727091999011 ; xx [ 23 ] = -
0.49957621763275 ; xx [ 24 ] = - 0.5004162835922631 ; xx [ 25 ] =
0.5004340657011012 ; xx [ 10 ] = xx [ 4 ] * state [ 0 ] ; xx [ 4 ] = sin ( xx
[ 10 ] ) ; xx [ 26 ] = cos ( xx [ 10 ] ) ; xx [ 27 ] = - (
1.701421996852573e-3 * xx [ 4 ] ) ; xx [ 28 ] = - ( 1.425555872024444e-5 * xx
[ 4 ] ) ; xx [ 29 ] = - ( 0.9999985524789362 * xx [ 4 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 22 , xx + 26 , xx + 73 ) ; xx [ 22 ] =
3.397648291980224e-4 ; xx [ 23 ] = 1.051662890794458e-5 ; xx [ 24 ] =
0.6830642379941189 ; pm_math_Quaternion_xform_ra ( xx + 73 , xx + 22 , xx +
25 ) ; xx [ 22 ] = 2.206652894183421e-4 ; xx [ 23 ] = 9.518739797527464e-6 ;
xx [ 24 ] = 0.6130643393205935 ; pm_math_Quaternion_xform_ra ( xx + 73 , xx +
22 , xx + 28 ) ; xx [ 4 ] = 2.749954992318224e-39 ; xx [ 10 ] = xx [ 3 ] * (
0.03000000000048807 + xx [ 26 ] - xx [ 29 ] ) - xx [ 4 ] * (
0.07000000000001244 + xx [ 25 ] - xx [ 28 ] ) + xx [ 21 ] - ( xx [ 27 ] - xx
[ 30 ] ) - 0.5190575030373279 ; xx [ 11 ] = 0.03 ; xx [ 22 ] = xx [ 10 ] / xx
[ 11 ] ; xx [ 23 ] = - 0.9999996380630076 ; xx [ 24 ] = 7.136837994664697e-6
; xx [ 25 ] = - 8.507112303565772e-4 ; xx [ 26 ] = 1.064527084355427e-5 ;
pm_math_Quaternion_compose_ra ( xx + 73 , xx + 23 , xx + 27 ) ; xx [ 23 ] = (
xx [ 28 ] * xx [ 29 ] + xx [ 27 ] * xx [ 30 ] ) * xx [ 5 ] ; xx [ 24 ] = ( xx
[ 27 ] * xx [ 27 ] + xx [ 28 ] * xx [ 28 ] ) * xx [ 5 ] - xx [ 6 ] ; xx [ 6 ]
= xx [ 5 ] * ( xx [ 28 ] * xx [ 30 ] - xx [ 27 ] * xx [ 29 ] ) ; xx [ 83 ] =
fabs ( pm_math_Vector3_dot_ra ( xx + 15 , xx + 43 ) ) ; xx [ 84 ] = fabs ( xx
[ 46 ] + xx [ 0 ] - xx [ 18 ] - ( xx [ 12 ] + xx [ 38 ] ) -
0.1781291906912097 ) ; xx [ 85 ] = fabs ( xx [ 47 ] + xx [ 1 ] - xx [ 19 ] -
( xx [ 13 ] + xx [ 39 ] ) - 0.07715328610398943 ) ; xx [ 86 ] = fabs ( xx [
48 ] + xx [ 2 ] - xx [ 20 ] - ( xx [ 14 ] + xx [ 40 ] + xx [ 21 ] ) -
0.5791292142236284 ) ; xx [ 87 ] = fabs ( pm_math_Vector3_dot_ra ( xx + 52 ,
xx + 31 ) ) ; xx [ 88 ] = fabs ( xx [ 5 ] * ( xx [ 77 ] + xx [ 61 ] * xx [ 34
] ) + xx [ 49 ] - xx [ 80 ] - ( xx [ 58 ] + xx [ 7 ] ) - 0.06749498603877549
) ; xx [ 89 ] = fabs ( ( xx [ 36 ] * xx [ 61 ] * xx [ 64 ] + xx [ 78 ] ) * xx
[ 5 ] + xx [ 50 ] - xx [ 81 ] - ( xx [ 59 ] + xx [ 8 ] ) -
0.06715228610395237 ) ; xx [ 90 ] = fabs ( ( xx [ 79 ] - xx [ 61 ] * xx [ 37
] ) * xx [ 5 ] + xx [ 51 ] - xx [ 82 ] - ( xx [ 60 ] + xx [ 9 ] + xx [ 21 ] )
+ 1.121139195080949 ) ; xx [ 91 ] = fabs ( ( xx [ 70 ] * xx [ 72 ] + xx [ 69
] * xx [ 71 ] ) * xx [ 5 ] ) ; xx [ 92 ] = fabs ( ( xx [ 66 ] * xx [ 68 ] +
xx [ 65 ] * xx [ 67 ] ) * xx [ 5 ] ) ; xx [ 93 ] = fabs ( ( xx [ 22 ] +
sm_core_canonicalAngle ( atan2 ( xx [ 23 ] - 4.491009114794739e-23 * xx [ 24
] + xx [ 3 ] * xx [ 6 ] , xx [ 4 ] * xx [ 24 ] - xx [ 3 ] * xx [ 23 ] + xx [
6 ] ) - xx [ 22 ] ) ) * xx [ 11 ] - xx [ 10 ] ) ; ii [ 0 ] = 83 ; { int ll ;
for ( ll = 84 ; ll < 94 ; ++ ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ]
= ll ; } ii [ 0 ] -= 83 ; xx [ 0 ] = xx [ 83 + ( ii [ 0 ] ) ] ; return xx [ 0
] > 1.0e-9 ; } boolean_T test14_9449aeaa_1_isVelocityViolation ( const void *
mech , const RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags ,
const double * state , const int * modeVector ) { const double * rtdvd = rtdv
-> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; int ii
[ 1 ] ; double xx [ 105 ] ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ;
( void ) eqnEnableFlags ; ( void ) modeVector ; xx [ 0 ] =
1.495622320918377e-3 ; xx [ 1 ] = 0.5 ; xx [ 2 ] = xx [ 1 ] * state [ 8 ] ;
xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] = 0.1188356543686412 ; xx [ 5 ] = sin
( xx [ 2 ] ) ; xx [ 2 ] = xx [ 0 ] * xx [ 3 ] - xx [ 4 ] * xx [ 5 ] ; xx [ 6
] = 4.415720941208234e-3 ; xx [ 7 ] = 0.9929029921262297 ; xx [ 8 ] = xx [ 6
] * xx [ 5 ] - xx [ 7 ] * xx [ 3 ] ; xx [ 9 ] = xx [ 0 ] * xx [ 5 ] + xx [ 4
] * xx [ 3 ] ; xx [ 0 ] = xx [ 6 ] * xx [ 3 ] + xx [ 7 ] * xx [ 5 ] ; xx [ 3
] = - xx [ 0 ] ; xx [ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 8 ] ; xx [ 6 ] = xx [
9 ] ; xx [ 7 ] = xx [ 3 ] ; xx [ 10 ] = 0.2359713450861992 ; xx [ 11 ] =
0.9717517007293006 ; xx [ 12 ] = 4.019505930177081e-3 ; xx [ 13 ] = - ( xx [
10 ] * state [ 7 ] ) ; xx [ 14 ] = - ( xx [ 11 ] * state [ 7 ] ) ; xx [ 15 ]
= - ( xx [ 12 ] * state [ 7 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 4
, xx + 13 , xx + 16 ) ; xx [ 19 ] = 2.0 ; xx [ 20 ] = 0.08297193236559158 ;
xx [ 21 ] = - 0.6989660525715147 ; xx [ 22 ] = 0.08508706173602215 ; xx [ 23
] = - 0.7052108250142259 ; xx [ 24 ] = xx [ 1 ] * state [ 6 ] ; xx [ 25 ] =
sin ( xx [ 24 ] ) ; xx [ 26 ] = cos ( xx [ 24 ] ) ; xx [ 27 ] = - ( xx [ 10 ]
* xx [ 25 ] ) ; xx [ 28 ] = - ( xx [ 11 ] * xx [ 25 ] ) ; xx [ 29 ] = - ( xx
[ 12 ] * xx [ 25 ] ) ; pm_math_Quaternion_compose_ra ( xx + 20 , xx + 26 , xx
+ 30 ) ; pm_math_Quaternion_compose_ra ( xx + 30 , xx + 4 , xx + 20 ) ; xx [
4 ] = xx [ 16 ] * xx [ 22 ] ; xx [ 5 ] = xx [ 18 ] * xx [ 23 ] + xx [ 16 ] *
xx [ 21 ] ; xx [ 6 ] = xx [ 22 ] * xx [ 18 ] ; xx [ 10 ] = - xx [ 4 ] ; xx [
11 ] = xx [ 5 ] ; xx [ 12 ] = - xx [ 6 ] ; pm_math_Vector3_cross_ra ( xx + 21
, xx + 10 , xx + 24 ) ; xx [ 10 ] = xx [ 18 ] + xx [ 19 ] * ( xx [ 24 ] - xx
[ 20 ] * xx [ 4 ] ) ; xx [ 11 ] = ( xx [ 5 ] * xx [ 20 ] + xx [ 25 ] ) * xx [
19 ] ; xx [ 12 ] = xx [ 19 ] * ( xx [ 26 ] - xx [ 20 ] * xx [ 6 ] ) - xx [ 16
] ; xx [ 4 ] = - 0.9984441693056983 ; xx [ 5 ] = 9.980207034736295e-7 ; xx [
6 ] = 3.115531069039944e-7 ; xx [ 7 ] = - 0.05576056651757455 ; xx [ 24 ] = -
0.9984440686594036 ; xx [ 25 ] = - 1.210096473124015e-6 ; xx [ 26 ] = -
2.410217961564497e-7 ; xx [ 27 ] = 0.0557623686488803 ; xx [ 28 ] = xx [ 1 ]
* state [ 12 ] ; xx [ 29 ] = 1.171949776569064e-7 ; xx [ 34 ] = sin ( xx [ 28
] ) ; xx [ 35 ] = 4.31358898227365e-7 ; xx [ 36 ] = cos ( xx [ 28 ] ) ; xx [
37 ] = xx [ 29 ] * xx [ 34 ] ; xx [ 38 ] = xx [ 35 ] * xx [ 34 ] ; xx [ 39 ]
= xx [ 34 ] ; pm_math_Quaternion_compose_ra ( xx + 24 , xx + 36 , xx + 40 ) ;
pm_math_Quaternion_compose_ra ( xx + 4 , xx + 40 , xx + 24 ) ; xx [ 36 ] =
0.5000008239281672 ; xx [ 37 ] = - 0.499999234668057 ; xx [ 38 ] = -
0.5000009810096314 ; xx [ 39 ] = - 0.4999989603908367 ;
pm_math_Quaternion_compose_ra ( xx + 24 , xx + 36 , xx + 44 ) ; xx [ 28 ] =
1.0 ; xx [ 48 ] = xx [ 19 ] * ( xx [ 45 ] * xx [ 46 ] - xx [ 44 ] * xx [ 47 ]
) ; xx [ 49 ] = xx [ 28 ] - ( xx [ 45 ] * xx [ 45 ] + xx [ 47 ] * xx [ 47 ] )
* xx [ 19 ] ; xx [ 50 ] = ( xx [ 46 ] * xx [ 47 ] + xx [ 44 ] * xx [ 45 ] ) *
xx [ 19 ] ; xx [ 44 ] = xx [ 29 ] * state [ 13 ] ; xx [ 45 ] = xx [ 35 ] *
state [ 13 ] ; xx [ 46 ] = state [ 13 ] ; xx [ 51 ] = 0.9999999999934777 ; xx
[ 52 ] = 3.609878879817785e-6 ; xx [ 53 ] = - 1.171965347546156e-7 ;
pm_math_Vector3_cross_ra ( xx + 44 , xx + 51 , xx + 54 ) ;
pm_math_Quaternion_xform_ra ( xx + 24 , xx + 54 , xx + 57 ) ; xx [ 29 ] = -
xx [ 1 ] ; xx [ 60 ] = xx [ 1 ] ; xx [ 61 ] = xx [ 1 ] ; xx [ 62 ] = xx [ 29
] ; xx [ 63 ] = xx [ 1 ] ; pm_math_Quaternion_compose_ra ( xx + 20 , xx + 60
, xx + 64 ) ; xx [ 54 ] = ( xx [ 65 ] * xx [ 67 ] + xx [ 64 ] * xx [ 66 ] ) *
xx [ 19 ] ; xx [ 55 ] = xx [ 19 ] * ( xx [ 66 ] * xx [ 67 ] - xx [ 64 ] * xx
[ 65 ] ) ; xx [ 56 ] = xx [ 28 ] - ( xx [ 65 ] * xx [ 65 ] + xx [ 66 ] * xx [
66 ] ) * xx [ 19 ] ; xx [ 60 ] = xx [ 16 ] ; xx [ 61 ] = xx [ 17 ] + state [
9 ] ; xx [ 62 ] = xx [ 18 ] ; xx [ 16 ] = 0.1106342046522872 ; xx [ 17 ] =
0.02999999999998754 ; xx [ 18 ] = - 1.655280357226729e-13 ;
pm_math_Vector3_cross_ra ( xx + 60 , xx + 16 , xx + 63 ) ;
pm_math_Quaternion_xform_ra ( xx + 20 , xx + 63 , xx + 16 ) ; xx [ 20 ] =
0.1029579224453269 ; xx [ 21 ] = - 0.02499961344983095 ; xx [ 22 ] = -
4.235742615152655e-4 ; pm_math_Quaternion_xform_ra ( xx + 30 , xx + 20 , xx +
60 ) ; xx [ 20 ] = 0.1106342046522275 ; xx [ 21 ] = xx [ 20 ] * xx [ 8 ] ; xx
[ 22 ] = xx [ 9 ] * xx [ 20 ] ; xx [ 63 ] = xx [ 8 ] ; xx [ 64 ] = xx [ 9 ] ;
xx [ 65 ] = xx [ 3 ] ; xx [ 3 ] = 0.01000100000000001 ; xx [ 23 ] = xx [ 0 ]
* xx [ 3 ] ; xx [ 34 ] = xx [ 0 ] * xx [ 20 ] ; xx [ 35 ] = xx [ 3 ] * xx [ 8
] + xx [ 22 ] ; xx [ 66 ] = xx [ 23 ] ; xx [ 67 ] = xx [ 34 ] ; xx [ 68 ] =
xx [ 35 ] ; pm_math_Vector3_cross_ra ( xx + 63 , xx + 66 , xx + 69 ) ; xx [
63 ] = - ( 0.02104361874950805 + xx [ 19 ] * ( xx [ 69 ] + xx [ 23 ] * xx [ 2
] ) ) ; xx [ 64 ] = - ( 0.01898006821655238 + ( xx [ 34 ] * xx [ 2 ] + xx [
70 ] ) * xx [ 19 ] ) ; xx [ 65 ] = 0.1047281200976424 - ( xx [ 2 ] * xx [ 35
] + xx [ 71 ] ) * xx [ 19 ] ; pm_math_Vector3_cross_ra ( xx + 13 , xx + 63 ,
xx + 66 ) ; xx [ 13 ] = xx [ 19 ] * ( xx [ 0 ] * xx [ 21 ] - xx [ 22 ] * xx [
2 ] ) * state [ 9 ] + xx [ 66 ] ; xx [ 14 ] = xx [ 19 ] * ( xx [ 0 ] * xx [
22 ] + xx [ 21 ] * xx [ 2 ] ) * state [ 9 ] + xx [ 67 ] ; xx [ 15 ] = ( ( xx
[ 21 ] * xx [ 8 ] + xx [ 9 ] * xx [ 22 ] ) * xx [ 19 ] - xx [ 20 ] ) * state
[ 9 ] + xx [ 68 ] ; pm_math_Quaternion_xform_ra ( xx + 30 , xx + 13 , xx + 20
) ; xx [ 0 ] = 7.54929787758902e-8 ; xx [ 2 ] = - 0.0199999879359847 ; xx [
13 ] = xx [ 0 ] ; xx [ 14 ] = xx [ 2 ] ; xx [ 15 ] = - 0.05090199292298814 ;
pm_math_Vector3_cross_ra ( xx + 44 , xx + 13 , xx + 30 ) ;
pm_math_Quaternion_xform_ra ( xx + 24 , xx + 30 , xx + 13 ) ; xx [ 30 ] =
3.402090196577556e-8 ; xx [ 31 ] = - 9.260858211838302e-9 ; xx [ 32 ] =
7.674749151547277e-18 ; pm_math_Quaternion_xform_ra ( xx + 40 , xx + 30 , xx
+ 33 ) ; xx [ 30 ] = xx [ 33 ] * state [ 13 ] ; xx [ 31 ] = xx [ 34 ] * state
[ 13 ] ; xx [ 32 ] = xx [ 35 ] * state [ 13 ] ; pm_math_Quaternion_xform_ra (
xx + 4 , xx + 30 , xx + 33 ) ; xx [ 40 ] = - 0.08499731596381738 ; xx [ 41 ]
= - 0.7052243478362852 ; xx [ 42 ] = - 0.08288208610093117 ; xx [ 43 ] = -
0.6989739875713483 ; xx [ 3 ] = xx [ 1 ] * state [ 2 ] ; xx [ 8 ] =
0.2357227559798625 ; xx [ 9 ] = sin ( xx [ 3 ] ) ; xx [ 23 ] =
0.9718120321650099 ; xx [ 30 ] = 4.019508996436549e-3 ; xx [ 63 ] = cos ( xx
[ 3 ] ) ; xx [ 64 ] = - ( xx [ 8 ] * xx [ 9 ] ) ; xx [ 65 ] = xx [ 23 ] * xx
[ 9 ] ; xx [ 66 ] = xx [ 30 ] * xx [ 9 ] ; pm_math_Quaternion_compose_ra ( xx
+ 40 , xx + 63 , xx + 67 ) ; xx [ 3 ] = 1.495693379815366e-3 ; xx [ 9 ] = xx
[ 1 ] * state [ 4 ] ; xx [ 31 ] = cos ( xx [ 9 ] ) ; xx [ 32 ] =
0.1187086636215266 ; xx [ 40 ] = sin ( xx [ 9 ] ) ; xx [ 9 ] = xx [ 3 ] * xx
[ 31 ] + xx [ 32 ] * xx [ 40 ] ; xx [ 41 ] = 0.9929181650975998 ; xx [ 42 ] =
4.419672128196023e-3 ; xx [ 43 ] = xx [ 41 ] * xx [ 31 ] + xx [ 42 ] * xx [
40 ] ; xx [ 47 ] = xx [ 32 ] * xx [ 31 ] - xx [ 3 ] * xx [ 40 ] ; xx [ 3 ] =
xx [ 41 ] * xx [ 40 ] - xx [ 42 ] * xx [ 31 ] ; xx [ 63 ] = - xx [ 9 ] ; xx [
64 ] = xx [ 43 ] ; xx [ 65 ] = xx [ 47 ] ; xx [ 66 ] = xx [ 3 ] ;
pm_math_Quaternion_compose_ra ( xx + 67 , xx + 63 , xx + 71 ) ; xx [ 40 ] = -
( xx [ 8 ] * state [ 3 ] ) ; xx [ 41 ] = xx [ 23 ] * state [ 3 ] ; xx [ 42 ]
= xx [ 30 ] * state [ 3 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 63 , xx
+ 40 , xx + 30 ) ; xx [ 8 ] = xx [ 30 ] * xx [ 73 ] ; xx [ 23 ] = xx [ 32 ] *
xx [ 74 ] + xx [ 30 ] * xx [ 72 ] ; xx [ 63 ] = xx [ 73 ] * xx [ 32 ] ; xx [
64 ] = xx [ 8 ] ; xx [ 65 ] = - xx [ 23 ] ; xx [ 66 ] = xx [ 63 ] ;
pm_math_Vector3_cross_ra ( xx + 72 , xx + 64 , xx + 75 ) ; xx [ 64 ] = ( xx [
71 ] * xx [ 8 ] + xx [ 75 ] ) * xx [ 19 ] - xx [ 32 ] ; xx [ 65 ] = xx [ 19 ]
* ( xx [ 76 ] - xx [ 23 ] * xx [ 71 ] ) ; xx [ 66 ] = xx [ 30 ] + ( xx [ 71 ]
* xx [ 63 ] + xx [ 77 ] ) * xx [ 19 ] ; xx [ 75 ] = - 1.216632498952289e-6 ;
xx [ 76 ] = 0.99844426994826 ; xx [ 77 ] = - 0.05575876438621875 ; xx [ 78 ]
= - 3.580316125383367e-7 ; xx [ 8 ] = xx [ 1 ] * state [ 14 ] ; xx [ 23 ] =
1.171949768652286e-7 ; xx [ 63 ] = sin ( xx [ 8 ] ) ; xx [ 79 ] =
4.313588970662109e-7 ; xx [ 80 ] = cos ( xx [ 8 ] ) ; xx [ 81 ] = - ( xx [ 23
] * xx [ 63 ] ) ; xx [ 82 ] = - ( xx [ 79 ] * xx [ 63 ] ) ; xx [ 83 ] = - xx
[ 63 ] ; pm_math_Quaternion_compose_ra ( xx + 75 , xx + 80 , xx + 84 ) ;
pm_math_Quaternion_compose_ra ( xx + 4 , xx + 84 , xx + 75 ) ;
pm_math_Quaternion_compose_ra ( xx + 75 , xx + 36 , xx + 80 ) ; xx [ 36 ] =
xx [ 19 ] * ( xx [ 81 ] * xx [ 82 ] - xx [ 80 ] * xx [ 83 ] ) ; xx [ 37 ] =
xx [ 28 ] - ( xx [ 81 ] * xx [ 81 ] + xx [ 83 ] * xx [ 83 ] ) * xx [ 19 ] ;
xx [ 38 ] = ( xx [ 82 ] * xx [ 83 ] + xx [ 80 ] * xx [ 81 ] ) * xx [ 19 ] ;
xx [ 80 ] = - ( xx [ 23 ] * state [ 15 ] ) ; xx [ 81 ] = - ( xx [ 79 ] *
state [ 15 ] ) ; xx [ 82 ] = - state [ 15 ] ; pm_math_Vector3_cross_ra ( xx +
80 , xx + 51 , xx + 88 ) ; pm_math_Quaternion_xform_ra ( xx + 75 , xx + 88 ,
xx + 51 ) ; xx [ 88 ] = xx [ 1 ] ; xx [ 89 ] = xx [ 29 ] ; xx [ 90 ] = xx [
29 ] ; xx [ 91 ] = xx [ 29 ] ; pm_math_Quaternion_compose_ra ( xx + 71 , xx +
88 , xx + 92 ) ; xx [ 88 ] = ( xx [ 93 ] * xx [ 95 ] + xx [ 92 ] * xx [ 94 ]
) * xx [ 19 ] ; xx [ 89 ] = xx [ 19 ] * ( xx [ 94 ] * xx [ 95 ] - xx [ 92 ] *
xx [ 93 ] ) ; xx [ 90 ] = xx [ 28 ] - ( xx [ 93 ] * xx [ 93 ] + xx [ 94 ] *
xx [ 94 ] ) * xx [ 19 ] ; xx [ 8 ] = 9.999999999962842e-3 ; xx [ 23 ] =
0.1106342046522229 ; xx [ 91 ] = xx [ 8 ] * xx [ 32 ] ; xx [ 92 ] = xx [ 23 ]
* xx [ 32 ] ; xx [ 93 ] = - ( xx [ 8 ] * xx [ 30 ] + ( xx [ 31 ] + state [ 5
] ) * xx [ 23 ] ) ; pm_math_Quaternion_xform_ra ( xx + 71 , xx + 91 , xx + 29
) ; xx [ 71 ] = - 0.1029642730927401 ; xx [ 72 ] = - 0.02497328869161739 ; xx
[ 73 ] = - 4.179086652678059e-4 ; pm_math_Quaternion_xform_ra ( xx + 67 , xx
+ 71 , xx + 91 ) ; xx [ 8 ] = 0.1106342046522274 ; xx [ 23 ] = xx [ 47 ] * xx
[ 8 ] ; xx [ 32 ] = xx [ 8 ] * xx [ 43 ] ; xx [ 71 ] = xx [ 43 ] ; xx [ 72 ]
= xx [ 47 ] ; xx [ 73 ] = xx [ 3 ] ; xx [ 39 ] = 0.010001 ; xx [ 63 ] = xx [
3 ] * xx [ 39 ] ; xx [ 74 ] = xx [ 3 ] * xx [ 8 ] ; xx [ 79 ] = xx [ 39 ] *
xx [ 43 ] + xx [ 23 ] ; xx [ 94 ] = - xx [ 63 ] ; xx [ 95 ] = - xx [ 74 ] ;
xx [ 96 ] = xx [ 79 ] ; pm_math_Vector3_cross_ra ( xx + 71 , xx + 94 , xx +
97 ) ; xx [ 71 ] = 0.242315223240461 - xx [ 19 ] * ( xx [ 97 ] + xx [ 63 ] *
xx [ 9 ] ) ; xx [ 72 ] = - ( 0.01901241471107262 + ( xx [ 74 ] * xx [ 9 ] +
xx [ 98 ] ) * xx [ 19 ] ) ; xx [ 73 ] = 0.1047270297279631 - ( xx [ 99 ] - xx
[ 79 ] * xx [ 9 ] ) * xx [ 19 ] ; pm_math_Vector3_cross_ra ( xx + 40 , xx +
71 , xx + 94 ) ; xx [ 39 ] = xx [ 19 ] * ( xx [ 23 ] * xx [ 9 ] - xx [ 3 ] *
xx [ 32 ] ) * state [ 5 ] + xx [ 94 ] ; xx [ 40 ] = xx [ 95 ] - xx [ 19 ] * (
xx [ 3 ] * xx [ 23 ] + xx [ 32 ] * xx [ 9 ] ) * state [ 5 ] ; xx [ 41 ] = ( (
xx [ 32 ] * xx [ 43 ] + xx [ 47 ] * xx [ 23 ] ) * xx [ 19 ] - xx [ 8 ] ) *
state [ 5 ] + xx [ 96 ] ; pm_math_Quaternion_xform_ra ( xx + 67 , xx + 39 ,
xx + 71 ) ; xx [ 39 ] = xx [ 0 ] ; xx [ 40 ] = xx [ 2 ] ; xx [ 41 ] = -
0.05090199292298809 ; pm_math_Vector3_cross_ra ( xx + 80 , xx + 39 , xx + 67
) ; pm_math_Quaternion_xform_ra ( xx + 75 , xx + 67 , xx + 39 ) ; xx [ 67 ] =
- 3.402090709722037e-8 ; xx [ 68 ] = 9.260862306846759e-9 ; xx [ 69 ] = -
7.675930370624308e-18 ; pm_math_Quaternion_xform_ra ( xx + 84 , xx + 67 , xx
+ 94 ) ; xx [ 67 ] = xx [ 94 ] * state [ 15 ] ; xx [ 68 ] = xx [ 95 ] * state
[ 15 ] ; xx [ 69 ] = xx [ 96 ] * state [ 15 ] ; pm_math_Quaternion_xform_ra (
xx + 4 , xx + 67 , xx + 83 ) ; xx [ 2 ] = - 3.609878937216315e-6 ; xx [ 3 ] =
0.9999999999933915 ; xx [ 4 ] = - 4.313584738291354e-7 ;
pm_math_Vector3_cross_ra ( xx + 80 , xx + 2 , xx + 5 ) ;
pm_math_Quaternion_xform_ra ( xx + 75 , xx + 5 , xx + 2 ) ; xx [ 3 ] =
3.609878923338528e-6 ; xx [ 4 ] = - 0.9999999999933913 ; xx [ 5 ] =
4.313584749393584e-7 ; pm_math_Vector3_cross_ra ( xx + 44 , xx + 3 , xx + 6 )
; pm_math_Quaternion_xform_ra ( xx + 24 , xx + 6 , xx + 3 ) ; xx [ 0 ] =
2.749954992318224e-39 ; xx [ 4 ] = 0.4995727091999011 ; xx [ 5 ] = -
0.49957621763275 ; xx [ 6 ] = - 0.5004162835922631 ; xx [ 7 ] =
0.5004340657011012 ; xx [ 8 ] = xx [ 1 ] * state [ 0 ] ; xx [ 1 ] =
1.701421996852573e-3 ; xx [ 9 ] = sin ( xx [ 8 ] ) ; xx [ 23 ] =
1.425555872024444e-5 ; xx [ 24 ] = 0.9999985524789362 ; xx [ 42 ] = cos ( xx
[ 8 ] ) ; xx [ 43 ] = - ( xx [ 1 ] * xx [ 9 ] ) ; xx [ 44 ] = - ( xx [ 23 ] *
xx [ 9 ] ) ; xx [ 45 ] = - ( xx [ 24 ] * xx [ 9 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 4 , xx + 42 , xx + 67 ) ; xx [ 4 ] = -
0.9999996380630076 ; xx [ 5 ] = 7.136837994664697e-6 ; xx [ 6 ] = -
8.507112303565772e-4 ; xx [ 7 ] = 1.064527084355427e-5 ;
pm_math_Quaternion_compose_ra ( xx + 67 , xx + 4 , xx + 42 ) ; xx [ 4 ] = (
xx [ 42 ] * xx [ 42 ] + xx [ 43 ] * xx [ 43 ] ) * xx [ 19 ] - xx [ 28 ] ; xx
[ 5 ] = 1.224649036341985e-16 ; xx [ 6 ] = ( xx [ 43 ] * xx [ 44 ] + xx [ 42
] * xx [ 45 ] ) * xx [ 19 ] ; xx [ 7 ] = xx [ 19 ] * ( xx [ 43 ] * xx [ 45 ]
- xx [ 42 ] * xx [ 44 ] ) ; xx [ 8 ] = xx [ 0 ] * xx [ 4 ] - xx [ 5 ] * xx [
6 ] + xx [ 7 ] ; xx [ 25 ] = - ( xx [ 1 ] * state [ 1 ] ) ; xx [ 26 ] = - (
xx [ 23 ] * state [ 1 ] ) ; xx [ 27 ] = - ( xx [ 24 ] * state [ 1 ] ) ; xx [
42 ] = 0.9999985523541615 ; xx [ 43 ] = - 2.130267675773651e-5 ; xx [ 44 ] =
- 1.701421692958279e-3 ; pm_math_Vector3_cross_ra ( xx + 25 , xx + 42 , xx +
45 ) ; pm_math_Quaternion_xform_ra ( xx + 67 , xx + 45 , xx + 42 ) ; xx [ 1 ]
= 4.491009114794739e-23 ; xx [ 9 ] = xx [ 6 ] - xx [ 1 ] * xx [ 4 ] + xx [ 5
] * xx [ 7 ] ; xx [ 45 ] = 3.397648291980224e-4 ; xx [ 46 ] =
1.051662890794458e-5 ; xx [ 47 ] = 0.6830642379941189 ;
pm_math_Vector3_cross_ra ( xx + 25 , xx + 45 , xx + 74 ) ;
pm_math_Quaternion_xform_ra ( xx + 67 , xx + 74 , xx + 23 ) ; xx [ 26 ] = -
7.79151330478524e-7 ; xx [ 27 ] = - 8.2241618240526e-4 ; xx [ 28 ] =
1.304968628300632e-8 ; pm_math_Quaternion_xform_ra ( xx + 67 , xx + 26 , xx +
45 ) ; xx [ 94 ] = fabs ( pm_math_Vector3_dot_ra ( xx + 10 , xx + 48 ) +
pm_math_Vector3_dot_ra ( xx + 57 , xx + 54 ) ) ; xx [ 95 ] = fabs ( xx [ 16 ]
+ xx [ 60 ] * state [ 7 ] + xx [ 20 ] - ( xx [ 13 ] + xx [ 33 ] ) ) ; xx [ 96
] = fabs ( xx [ 17 ] + xx [ 61 ] * state [ 7 ] + xx [ 21 ] - ( xx [ 14 ] + xx
[ 34 ] ) ) ; xx [ 97 ] = fabs ( xx [ 18 ] + xx [ 62 ] * state [ 7 ] + xx [ 22
] - ( xx [ 15 ] + xx [ 35 ] - state [ 11 ] ) ) ; xx [ 98 ] = fabs (
pm_math_Vector3_dot_ra ( xx + 64 , xx + 36 ) + pm_math_Vector3_dot_ra ( xx +
51 , xx + 88 ) ) ; xx [ 99 ] = fabs ( xx [ 29 ] + xx [ 91 ] * state [ 3 ] +
xx [ 71 ] - ( xx [ 39 ] + xx [ 83 ] ) ) ; xx [ 100 ] = fabs ( xx [ 30 ] + xx
[ 92 ] * state [ 3 ] + xx [ 72 ] - ( xx [ 40 ] + xx [ 84 ] ) ) ; xx [ 101 ] =
fabs ( xx [ 31 ] + xx [ 93 ] * state [ 3 ] + xx [ 73 ] - ( xx [ 41 ] + xx [
85 ] - state [ 11 ] ) ) ; xx [ 102 ] = fabs ( xx [ 2 ] ) ; xx [ 103 ] = fabs
( xx [ 3 ] ) ; xx [ 104 ] = fabs ( 0.03 * ( xx [ 8 ] * ( xx [ 43 ] - xx [ 1 ]
* xx [ 42 ] + xx [ 5 ] * xx [ 44 ] ) - ( xx [ 0 ] * xx [ 42 ] - xx [ 5 ] * xx
[ 43 ] + xx [ 44 ] ) * xx [ 9 ] ) / ( xx [ 9 ] * xx [ 9 ] + xx [ 8 ] * xx [ 8
] ) + ( xx [ 23 ] + xx [ 45 ] * state [ 1 ] ) * xx [ 0 ] - ( xx [ 24 ] + xx [
46 ] * state [ 1 ] ) * xx [ 5 ] + state [ 11 ] + xx [ 25 ] + xx [ 47 ] *
state [ 1 ] ) ; ii [ 0 ] = 94 ; { int ll ; for ( ll = 95 ; ll < 105 ; ++ ll )
if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; } ii [ 0 ] -= 94 ; xx [ 0
] = xx [ 94 + ( ii [ 0 ] ) ] ; return xx [ 0 ] > 1.0e-9 ; } PmfMessageId
test14_9449aeaa_1_projectStateSim ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const int *
modeVector , double * state , void * neDiagMgr0 ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
NeuDiagnosticManager * neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ;
int ii [ 11 ] ; double xx [ 505 ] ; ( void ) mech ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector ; ( void ) neDiagMgr ;
xx [ 0 ] = 0.0 ; xx [ 1 ] = 1.495622320918377e-3 ; xx [ 2 ] = 0.5 ; xx [ 3 ]
= xx [ 2 ] * state [ 8 ] ; xx [ 4 ] = cos ( xx [ 3 ] ) ; xx [ 5 ] =
0.1188356543686412 ; xx [ 6 ] = sin ( xx [ 3 ] ) ; xx [ 3 ] = xx [ 1 ] * xx [
4 ] - xx [ 5 ] * xx [ 6 ] ; xx [ 7 ] = 4.415720941208234e-3 ; xx [ 8 ] =
0.9929029921262297 ; xx [ 9 ] = xx [ 7 ] * xx [ 6 ] - xx [ 8 ] * xx [ 4 ] ;
xx [ 10 ] = xx [ 1 ] * xx [ 6 ] + xx [ 5 ] * xx [ 4 ] ; xx [ 11 ] = xx [ 7 ]
* xx [ 4 ] + xx [ 8 ] * xx [ 6 ] ; xx [ 4 ] = - xx [ 11 ] ; xx [ 12 ] = xx [
3 ] ; xx [ 13 ] = xx [ 9 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 4 ] ;
xx [ 6 ] = 0.2359713450861992 ; xx [ 16 ] = 0.9717517007293006 ; xx [ 17 ] =
4.019505930177081e-3 ; xx [ 18 ] = - xx [ 6 ] ; xx [ 19 ] = - xx [ 16 ] ; xx
[ 20 ] = - xx [ 17 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 12 , xx + 18
, xx + 21 ) ; xx [ 24 ] = 2.0 ; xx [ 25 ] = 0.08297193236559158 ; xx [ 26 ] =
- 0.6989660525715147 ; xx [ 27 ] = 0.08508706173602215 ; xx [ 28 ] = -
0.7052108250142259 ; xx [ 29 ] = xx [ 2 ] * state [ 6 ] ; xx [ 30 ] = sin (
xx [ 29 ] ) ; xx [ 31 ] = cos ( xx [ 29 ] ) ; xx [ 32 ] = - ( xx [ 6 ] * xx [
30 ] ) ; xx [ 33 ] = - ( xx [ 16 ] * xx [ 30 ] ) ; xx [ 34 ] = - ( xx [ 17 ]
* xx [ 30 ] ) ; pm_math_Quaternion_compose_ra ( xx + 25 , xx + 31 , xx + 35 )
; pm_math_Quaternion_compose_ra ( xx + 35 , xx + 12 , xx + 29 ) ; xx [ 12 ] =
xx [ 21 ] * xx [ 31 ] ; xx [ 13 ] = xx [ 23 ] * xx [ 32 ] + xx [ 21 ] * xx [
30 ] ; xx [ 14 ] = xx [ 31 ] * xx [ 23 ] ; xx [ 39 ] = - xx [ 12 ] ; xx [ 40
] = xx [ 13 ] ; xx [ 41 ] = - xx [ 14 ] ; pm_math_Vector3_cross_ra ( xx + 30
, xx + 39 , xx + 42 ) ; xx [ 39 ] = xx [ 23 ] + xx [ 24 ] * ( xx [ 42 ] - xx
[ 29 ] * xx [ 12 ] ) ; xx [ 40 ] = ( xx [ 13 ] * xx [ 29 ] + xx [ 43 ] ) * xx
[ 24 ] ; xx [ 41 ] = xx [ 24 ] * ( xx [ 44 ] - xx [ 29 ] * xx [ 14 ] ) - xx [
21 ] ; xx [ 12 ] = - 0.9984441693056983 ; xx [ 13 ] = 9.980207034736295e-7 ;
xx [ 14 ] = 3.115531069039944e-7 ; xx [ 15 ] = - 0.05576056651757455 ; xx [
42 ] = - 0.9984440686594036 ; xx [ 43 ] = - 1.210096473124015e-6 ; xx [ 44 ]
= - 2.410217961564497e-7 ; xx [ 45 ] = 0.0557623686488803 ; xx [ 33 ] = xx [
2 ] * state [ 12 ] ; xx [ 34 ] = 1.171949776569064e-7 ; xx [ 46 ] = sin ( xx
[ 33 ] ) ; xx [ 47 ] = 4.31358898227365e-7 ; xx [ 48 ] = cos ( xx [ 33 ] ) ;
xx [ 49 ] = xx [ 34 ] * xx [ 46 ] ; xx [ 50 ] = xx [ 47 ] * xx [ 46 ] ; xx [
51 ] = xx [ 46 ] ; pm_math_Quaternion_compose_ra ( xx + 42 , xx + 48 , xx +
52 ) ; pm_math_Quaternion_compose_ra ( xx + 12 , xx + 52 , xx + 48 ) ; xx [
56 ] = 0.5000008239281672 ; xx [ 57 ] = - 0.499999234668057 ; xx [ 58 ] = -
0.5000009810096314 ; xx [ 59 ] = - 0.4999989603908367 ;
pm_math_Quaternion_compose_ra ( xx + 48 , xx + 56 , xx + 60 ) ; xx [ 33 ] =
1.0 ; xx [ 64 ] = xx [ 24 ] * ( xx [ 61 ] * xx [ 62 ] - xx [ 60 ] * xx [ 63 ]
) ; xx [ 65 ] = xx [ 33 ] - ( xx [ 61 ] * xx [ 61 ] + xx [ 63 ] * xx [ 63 ] )
* xx [ 24 ] ; xx [ 66 ] = ( xx [ 62 ] * xx [ 63 ] + xx [ 60 ] * xx [ 61 ] ) *
xx [ 24 ] ; xx [ 46 ] = 3.609878930371553e-6 ; xx [ 60 ] = 0.9999999999934914
; xx [ 61 ] = - xx [ 46 ] ; xx [ 62 ] = xx [ 60 ] ; xx [ 63 ] = -
4.313584751648768e-7 ; pm_math_Quaternion_xform_ra ( xx + 48 , xx + 61 , xx +
67 ) ; xx [ 70 ] = - xx [ 2 ] ; xx [ 71 ] = xx [ 2 ] ; xx [ 72 ] = xx [ 2 ] ;
xx [ 73 ] = xx [ 70 ] ; xx [ 74 ] = xx [ 2 ] ; pm_math_Quaternion_compose_ra
( xx + 29 , xx + 71 , xx + 75 ) ; xx [ 79 ] = ( xx [ 76 ] * xx [ 78 ] + xx [
75 ] * xx [ 77 ] ) * xx [ 24 ] ; xx [ 80 ] = xx [ 24 ] * ( xx [ 77 ] * xx [
78 ] - xx [ 75 ] * xx [ 76 ] ) ; xx [ 81 ] = xx [ 33 ] - ( xx [ 76 ] * xx [
76 ] + xx [ 77 ] * xx [ 77 ] ) * xx [ 24 ] ; xx [ 75 ] = 0.1106342046522872 ;
xx [ 76 ] = 1.655280357226729e-13 ; xx [ 82 ] = xx [ 75 ] ; xx [ 83 ] =
0.02999999999998754 ; xx [ 84 ] = - xx [ 76 ] ; pm_math_Vector3_cross_ra ( xx
+ 21 , xx + 82 , xx + 85 ) ; pm_math_Quaternion_xform_ra ( xx + 29 , xx + 85
, xx + 21 ) ; xx [ 77 ] = 0.1316778234017356 ; xx [ 85 ] = xx [ 9 ] ; xx [ 86
] = xx [ 10 ] ; xx [ 87 ] = xx [ 4 ] ; xx [ 4 ] = 0.01000100000000001 ; xx [
78 ] = xx [ 11 ] * xx [ 4 ] ; xx [ 88 ] = 0.1106342046522275 ; xx [ 89 ] = xx
[ 11 ] * xx [ 88 ] ; xx [ 90 ] = xx [ 10 ] * xx [ 88 ] ; xx [ 91 ] = xx [ 4 ]
* xx [ 9 ] + xx [ 90 ] ; xx [ 92 ] = xx [ 78 ] ; xx [ 93 ] = xx [ 89 ] ; xx [
94 ] = xx [ 91 ] ; pm_math_Vector3_cross_ra ( xx + 85 , xx + 92 , xx + 95 ) ;
xx [ 85 ] = 8.979068216552373e-3 ; xx [ 86 ] = 0.1047281200976424 ; xx [ 92 ]
= - ( xx [ 77 ] + xx [ 24 ] * ( xx [ 95 ] + xx [ 78 ] * xx [ 3 ] ) - xx [ 88
] ) ; xx [ 93 ] = - ( xx [ 85 ] + xx [ 4 ] + ( xx [ 89 ] * xx [ 3 ] + xx [ 96
] ) * xx [ 24 ] ) ; xx [ 94 ] = xx [ 86 ] - ( xx [ 3 ] * xx [ 91 ] + xx [ 97
] ) * xx [ 24 ] ; pm_math_Vector3_cross_ra ( xx + 18 , xx + 92 , xx + 95 ) ;
pm_math_Quaternion_xform_ra ( xx + 35 , xx + 95 , xx + 98 ) ; xx [ 95 ] =
0.1029579224453269 ; xx [ 96 ] = - 0.02499961344983095 ; xx [ 97 ] = -
4.235742615152655e-4 ; pm_math_Quaternion_xform_ra ( xx + 35 , xx + 95 , xx +
101 ) ; xx [ 78 ] = xx [ 75 ] * xx [ 30 ] - xx [ 76 ] * xx [ 32 ] ; xx [ 87 ]
= xx [ 76 ] * xx [ 31 ] ; xx [ 104 ] = - ( xx [ 75 ] * xx [ 31 ] ) ; xx [ 105
] = xx [ 78 ] ; xx [ 106 ] = xx [ 87 ] ; pm_math_Vector3_cross_ra ( xx + 30 ,
xx + 104 , xx + 107 ) ; xx [ 89 ] = xx [ 88 ] * xx [ 9 ] ; xx [ 104 ] = ( xx
[ 11 ] * xx [ 89 ] - xx [ 90 ] * xx [ 3 ] ) * xx [ 24 ] ; xx [ 105 ] = xx [
24 ] * ( xx [ 11 ] * xx [ 90 ] + xx [ 89 ] * xx [ 3 ] ) ; xx [ 106 ] = ( xx [
89 ] * xx [ 9 ] + xx [ 10 ] * xx [ 90 ] ) * xx [ 24 ] - xx [ 88 ] ;
pm_math_Quaternion_xform_ra ( xx + 35 , xx + 104 , xx + 9 ) ; xx [ 89 ] =
0.01999996597895712 ; xx [ 90 ] = 8.14584366991918e-8 ; xx [ 91 ] = -
2.343930703864273e-9 ; pm_math_Quaternion_xform_ra ( xx + 48 , xx + 89 , xx +
104 ) ; xx [ 110 ] = 3.402090196577556e-8 ; xx [ 111 ] = -
9.260858211838302e-9 ; xx [ 112 ] = 7.674749151547277e-18 ;
pm_math_Quaternion_xform_ra ( xx + 52 , xx + 110 , xx + 113 ) ;
pm_math_Quaternion_xform_ra ( xx + 12 , xx + 113 , xx + 116 ) ; xx [ 119 ] =
- 0.08499731596381738 ; xx [ 120 ] = - 0.7052243478362852 ; xx [ 121 ] = -
0.08288208610093117 ; xx [ 122 ] = - 0.6989739875713483 ; xx [ 3 ] = xx [ 2 ]
* state [ 2 ] ; xx [ 113 ] = 0.2357227559798625 ; xx [ 114 ] = sin ( xx [ 3 ]
) ; xx [ 115 ] = 0.9718120321650099 ; xx [ 123 ] = 4.019508996436549e-3 ; xx
[ 124 ] = cos ( xx [ 3 ] ) ; xx [ 125 ] = - ( xx [ 113 ] * xx [ 114 ] ) ; xx
[ 126 ] = xx [ 115 ] * xx [ 114 ] ; xx [ 127 ] = xx [ 123 ] * xx [ 114 ] ;
pm_math_Quaternion_compose_ra ( xx + 119 , xx + 124 , xx + 128 ) ; xx [ 3 ] =
1.495693379815366e-3 ; xx [ 114 ] = xx [ 2 ] * state [ 4 ] ; xx [ 124 ] = cos
( xx [ 114 ] ) ; xx [ 125 ] = 0.1187086636215266 ; xx [ 126 ] = sin ( xx [
114 ] ) ; xx [ 114 ] = xx [ 3 ] * xx [ 124 ] + xx [ 125 ] * xx [ 126 ] ; xx [
127 ] = 0.9929181650975998 ; xx [ 132 ] = 4.419672128196023e-3 ; xx [ 133 ] =
xx [ 127 ] * xx [ 124 ] + xx [ 132 ] * xx [ 126 ] ; xx [ 134 ] = xx [ 125 ] *
xx [ 124 ] - xx [ 3 ] * xx [ 126 ] ; xx [ 135 ] = xx [ 127 ] * xx [ 126 ] -
xx [ 132 ] * xx [ 124 ] ; xx [ 136 ] = - xx [ 114 ] ; xx [ 137 ] = xx [ 133 ]
; xx [ 138 ] = xx [ 134 ] ; xx [ 139 ] = xx [ 135 ] ;
pm_math_Quaternion_compose_ra ( xx + 128 , xx + 136 , xx + 140 ) ; xx [ 144 ]
= - xx [ 113 ] ; xx [ 145 ] = xx [ 115 ] ; xx [ 146 ] = xx [ 123 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 136 , xx + 144 , xx + 147 ) ; xx [
124 ] = xx [ 147 ] * xx [ 142 ] ; xx [ 126 ] = xx [ 149 ] * xx [ 143 ] + xx [
147 ] * xx [ 141 ] ; xx [ 136 ] = xx [ 142 ] * xx [ 149 ] ; xx [ 137 ] = xx [
124 ] ; xx [ 138 ] = - xx [ 126 ] ; xx [ 139 ] = xx [ 136 ] ;
pm_math_Vector3_cross_ra ( xx + 141 , xx + 137 , xx + 150 ) ; xx [ 137 ] = (
xx [ 140 ] * xx [ 124 ] + xx [ 150 ] ) * xx [ 24 ] - xx [ 149 ] ; xx [ 138 ]
= xx [ 24 ] * ( xx [ 151 ] - xx [ 126 ] * xx [ 140 ] ) ; xx [ 139 ] = xx [
147 ] + ( xx [ 140 ] * xx [ 136 ] + xx [ 152 ] ) * xx [ 24 ] ; xx [ 150 ] = -
1.216632498952289e-6 ; xx [ 151 ] = 0.99844426994826 ; xx [ 152 ] = -
0.05575876438621875 ; xx [ 153 ] = - 3.580316125383367e-7 ; xx [ 124 ] = xx [
2 ] * state [ 14 ] ; xx [ 126 ] = 1.171949768652286e-7 ; xx [ 136 ] = sin (
xx [ 124 ] ) ; xx [ 154 ] = 4.313588970662109e-7 ; xx [ 155 ] = cos ( xx [
124 ] ) ; xx [ 156 ] = - ( xx [ 126 ] * xx [ 136 ] ) ; xx [ 157 ] = - ( xx [
154 ] * xx [ 136 ] ) ; xx [ 158 ] = - xx [ 136 ] ;
pm_math_Quaternion_compose_ra ( xx + 150 , xx + 155 , xx + 159 ) ;
pm_math_Quaternion_compose_ra ( xx + 12 , xx + 159 , xx + 155 ) ;
pm_math_Quaternion_compose_ra ( xx + 155 , xx + 56 , xx + 163 ) ; xx [ 167 ]
= xx [ 24 ] * ( xx [ 164 ] * xx [ 165 ] - xx [ 163 ] * xx [ 166 ] ) ; xx [
168 ] = xx [ 33 ] - ( xx [ 164 ] * xx [ 164 ] + xx [ 166 ] * xx [ 166 ] ) *
xx [ 24 ] ; xx [ 169 ] = ( xx [ 165 ] * xx [ 166 ] + xx [ 163 ] * xx [ 164 ]
) * xx [ 24 ] ; xx [ 163 ] = xx [ 46 ] ; xx [ 164 ] = - xx [ 60 ] ; xx [ 165
] = 4.313584740037256e-7 ; pm_math_Quaternion_xform_ra ( xx + 155 , xx + 163
, xx + 170 ) ; xx [ 173 ] = xx [ 2 ] ; xx [ 174 ] = xx [ 70 ] ; xx [ 175 ] =
xx [ 70 ] ; xx [ 176 ] = xx [ 70 ] ; pm_math_Quaternion_compose_ra ( xx + 140
, xx + 173 , xx + 177 ) ; xx [ 181 ] = ( xx [ 178 ] * xx [ 180 ] + xx [ 177 ]
* xx [ 179 ] ) * xx [ 24 ] ; xx [ 182 ] = xx [ 24 ] * ( xx [ 179 ] * xx [ 180
] - xx [ 177 ] * xx [ 178 ] ) ; xx [ 183 ] = xx [ 33 ] - ( xx [ 178 ] * xx [
178 ] + xx [ 179 ] * xx [ 179 ] ) * xx [ 24 ] ; xx [ 46 ] =
9.999999999962842e-3 ; xx [ 60 ] = 0.1106342046522229 ; xx [ 177 ] = xx [ 46
] * xx [ 149 ] ; xx [ 178 ] = xx [ 60 ] * xx [ 149 ] ; xx [ 179 ] = - ( xx [
46 ] * xx [ 147 ] + xx [ 60 ] * xx [ 148 ] ) ; pm_math_Quaternion_xform_ra (
xx + 140 , xx + 177 , xx + 147 ) ; xx [ 70 ] = 0.1316810185882336 ; xx [ 124
] = 0.010001 ; xx [ 136 ] = xx [ 135 ] * xx [ 124 ] ; xx [ 166 ] =
0.1106342046522274 ; xx [ 177 ] = xx [ 135 ] * xx [ 166 ] ; xx [ 178 ] = xx [
134 ] * xx [ 166 ] ; xx [ 179 ] = xx [ 124 ] * xx [ 133 ] + xx [ 178 ] ; xx [
184 ] = - xx [ 136 ] ; xx [ 185 ] = - xx [ 177 ] ; xx [ 186 ] = xx [ 179 ] ;
pm_math_Vector3_cross_ra ( xx + 133 , xx + 184 , xx + 187 ) ; xx [ 180 ] =
9.011414711072623e-3 ; xx [ 184 ] = 0.1047270297279631 ; xx [ 190 ] = xx [ 70
] - ( xx [ 24 ] * ( xx [ 187 ] + xx [ 136 ] * xx [ 114 ] ) - xx [ 166 ] ) ;
xx [ 191 ] = - ( xx [ 180 ] + xx [ 124 ] + ( xx [ 177 ] * xx [ 114 ] + xx [
188 ] ) * xx [ 24 ] ) ; xx [ 192 ] = xx [ 184 ] - ( xx [ 189 ] - xx [ 179 ] *
xx [ 114 ] ) * xx [ 24 ] ; pm_math_Vector3_cross_ra ( xx + 144 , xx + 190 ,
xx + 185 ) ; pm_math_Quaternion_xform_ra ( xx + 128 , xx + 185 , xx + 193 ) ;
xx [ 185 ] = - 0.1029642730927401 ; xx [ 186 ] = - 0.02497328869161739 ; xx [
187 ] = - 4.179086652678059e-4 ; pm_math_Quaternion_xform_ra ( xx + 128 , xx
+ 185 , xx + 196 ) ; xx [ 136 ] = xx [ 166 ] * xx [ 133 ] ; xx [ 199 ] = ( xx
[ 178 ] * xx [ 114 ] - xx [ 135 ] * xx [ 136 ] ) * xx [ 24 ] ; xx [ 200 ] = -
( xx [ 24 ] * ( xx [ 135 ] * xx [ 178 ] + xx [ 136 ] * xx [ 114 ] ) ) ; xx [
201 ] = ( xx [ 136 ] * xx [ 133 ] + xx [ 134 ] * xx [ 178 ] ) * xx [ 24 ] -
xx [ 166 ] ; pm_math_Quaternion_xform_ra ( xx + 128 , xx + 199 , xx + 133 ) ;
xx [ 114 ] = xx [ 60 ] * xx [ 142 ] ; xx [ 136 ] = xx [ 60 ] * xx [ 141 ] ;
xx [ 177 ] = - 0.01999996597895718 ; xx [ 178 ] = - 8.145843665889382e-8 ; xx
[ 179 ] = 2.343930688030639e-9 ; pm_math_Quaternion_xform_ra ( xx + 155 , xx
+ 177 , xx + 199 ) ; xx [ 202 ] = - 3.402090709722037e-8 ; xx [ 203 ] =
9.260862306846759e-9 ; xx [ 204 ] = - 7.675930370624308e-18 ;
pm_math_Quaternion_xform_ra ( xx + 159 , xx + 202 , xx + 205 ) ;
pm_math_Quaternion_xform_ra ( xx + 12 , xx + 205 , xx + 208 ) ; xx [ 205 ] =
0.9999999999935776 ; xx [ 206 ] = 3.609878886663269e-6 ; xx [ 207 ] = -
1.17196534017851e-7 ; pm_math_Quaternion_xform_ra ( xx + 155 , xx + 205 , xx
+ 211 ) ; xx [ 212 ] = 0.9999999999935774 ; xx [ 213 ] = 3.609878872785481e-6
; xx [ 214 ] = - 1.17196534809527e-7 ; pm_math_Quaternion_xform_ra ( xx + 48
, xx + 212 , xx + 215 ) ; xx [ 188 ] = 0.03 ; xx [ 189 ] =
2.749954992318224e-39 ; xx [ 216 ] = 0.4995727091999011 ; xx [ 217 ] = -
0.49957621763275 ; xx [ 218 ] = - 0.5004162835922631 ; xx [ 219 ] =
0.5004340657011012 ; xx [ 220 ] = xx [ 2 ] * state [ 0 ] ; xx [ 221 ] =
1.701421996852573e-3 ; xx [ 222 ] = sin ( xx [ 220 ] ) ; xx [ 223 ] =
1.425555872024444e-5 ; xx [ 224 ] = 0.9999985524789362 ; xx [ 225 ] = cos (
xx [ 220 ] ) ; xx [ 226 ] = - ( xx [ 221 ] * xx [ 222 ] ) ; xx [ 227 ] = - (
xx [ 223 ] * xx [ 222 ] ) ; xx [ 228 ] = - ( xx [ 224 ] * xx [ 222 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 216 , xx + 225 , xx + 229 ) ; xx [ 225 ]
= - 0.9999996380630076 ; xx [ 226 ] = 7.136837994664697e-6 ; xx [ 227 ] = -
8.507112303565772e-4 ; xx [ 228 ] = 1.064527084355427e-5 ;
pm_math_Quaternion_compose_ra ( xx + 229 , xx + 225 , xx + 233 ) ; xx [ 220 ]
= xx [ 33 ] - ( xx [ 235 ] * xx [ 235 ] + xx [ 236 ] * xx [ 236 ] ) * xx [ 24
] ; xx [ 222 ] = 1.224649036341985e-16 ; xx [ 237 ] = ( xx [ 234 ] * xx [ 235
] + xx [ 233 ] * xx [ 236 ] ) * xx [ 24 ] ; xx [ 238 ] = xx [ 24 ] * ( xx [
234 ] * xx [ 236 ] - xx [ 233 ] * xx [ 235 ] ) ; xx [ 233 ] = xx [ 189 ] * xx
[ 220 ] - xx [ 222 ] * xx [ 237 ] + xx [ 238 ] ; xx [ 234 ] = -
2.127839120481132e-5 ; xx [ 235 ] = - 0.9999999996714876 ; xx [ 236 ] =
1.429178292607163e-5 ; pm_math_Quaternion_xform_ra ( xx + 229 , xx + 234 , xx
+ 239 ) ; xx [ 242 ] = 4.491009114794739e-23 ; xx [ 243 ] = xx [ 237 ] - xx [
242 ] * xx [ 220 ] + xx [ 222 ] * xx [ 238 ] ; xx [ 244 ] =
7.791513304785308e-7 ; xx [ 245 ] = 8.224161824052596e-4 ; xx [ 246 ] = -
1.304968628300633e-8 ; pm_math_Quaternion_xform_ra ( xx + 229 , xx + 244 , xx
+ 247 ) ; xx [ 250 ] = - 7.79151330478524e-7 ; xx [ 251 ] = -
8.2241618240526e-4 ; xx [ 252 ] = 1.304968628300632e-8 ;
pm_math_Quaternion_xform_ra ( xx + 229 , xx + 250 , xx + 253 ) ; xx [ 256 ] =
xx [ 0 ] ; xx [ 257 ] = xx [ 0 ] ; xx [ 258 ] = xx [ 0 ] ; xx [ 259 ] =
pm_math_Vector3_dot_ra ( xx + 39 , xx + 64 ) ; xx [ 260 ] = xx [ 0 ] ; xx [
261 ] = xx [ 0 ] ; xx [ 262 ] = pm_math_Vector3_dot_ra ( xx + 67 , xx + 79 )
; xx [ 263 ] = xx [ 0 ] ; xx [ 264 ] = xx [ 0 ] ; xx [ 265 ] = xx [ 0 ] ; xx
[ 266 ] = xx [ 0 ] ; xx [ 267 ] = xx [ 21 ] + xx [ 98 ] + xx [ 101 ] ; xx [
268 ] = ( xx [ 107 ] - xx [ 75 ] * xx [ 29 ] * xx [ 31 ] ) * xx [ 24 ] + xx [
9 ] - xx [ 76 ] ; xx [ 269 ] = xx [ 0 ] ; xx [ 270 ] = - ( xx [ 104 ] + xx [
116 ] ) ; xx [ 271 ] = xx [ 0 ] ; xx [ 272 ] = xx [ 0 ] ; xx [ 273 ] = xx [ 0
] ; xx [ 274 ] = xx [ 0 ] ; xx [ 275 ] = xx [ 22 ] + xx [ 99 ] + xx [ 102 ] ;
xx [ 276 ] = ( xx [ 29 ] * xx [ 78 ] + xx [ 108 ] ) * xx [ 24 ] + xx [ 10 ] ;
xx [ 277 ] = xx [ 0 ] ; xx [ 278 ] = - ( xx [ 105 ] + xx [ 117 ] ) ; xx [ 279
] = xx [ 0 ] ; xx [ 280 ] = xx [ 0 ] ; xx [ 281 ] = xx [ 0 ] ; xx [ 282 ] =
xx [ 0 ] ; xx [ 283 ] = xx [ 23 ] + xx [ 100 ] + xx [ 103 ] ; xx [ 284 ] = xx
[ 24 ] * ( xx [ 109 ] + xx [ 29 ] * xx [ 87 ] ) + xx [ 11 ] - xx [ 75 ] ; xx
[ 285 ] = xx [ 33 ] ; xx [ 286 ] = - ( xx [ 106 ] + xx [ 118 ] ) ; xx [ 287 ]
= xx [ 0 ] ; xx [ 288 ] = xx [ 0 ] ; xx [ 289 ] = pm_math_Vector3_dot_ra ( xx
+ 137 , xx + 167 ) ; xx [ 290 ] = xx [ 0 ] ; xx [ 291 ] = xx [ 0 ] ; xx [ 292
] = xx [ 0 ] ; xx [ 293 ] = xx [ 0 ] ; xx [ 294 ] = xx [ 0 ] ; xx [ 295 ] =
pm_math_Vector3_dot_ra ( xx + 170 , xx + 181 ) ; xx [ 296 ] = xx [ 0 ] ; xx [
297 ] = xx [ 147 ] + xx [ 193 ] + xx [ 196 ] ; xx [ 298 ] = xx [ 133 ] - ( xx
[ 140 ] * xx [ 114 ] + xx [ 143 ] * xx [ 136 ] ) * xx [ 24 ] ; xx [ 299 ] =
xx [ 0 ] ; xx [ 300 ] = xx [ 0 ] ; xx [ 301 ] = xx [ 0 ] ; xx [ 302 ] = xx [
0 ] ; xx [ 303 ] = - ( xx [ 199 ] + xx [ 208 ] ) ; xx [ 304 ] = xx [ 0 ] ; xx
[ 305 ] = xx [ 148 ] + xx [ 194 ] + xx [ 197 ] ; xx [ 306 ] = xx [ 24 ] * (
xx [ 140 ] * xx [ 136 ] - xx [ 143 ] * xx [ 114 ] ) + xx [ 134 ] ; xx [ 307 ]
= xx [ 0 ] ; xx [ 308 ] = xx [ 0 ] ; xx [ 309 ] = xx [ 0 ] ; xx [ 310 ] = xx
[ 0 ] ; xx [ 311 ] = - ( xx [ 200 ] + xx [ 209 ] ) ; xx [ 312 ] = xx [ 0 ] ;
xx [ 313 ] = xx [ 149 ] + xx [ 195 ] + xx [ 198 ] ; xx [ 314 ] = xx [ 135 ] +
( xx [ 141 ] * xx [ 136 ] + xx [ 142 ] * xx [ 114 ] ) * xx [ 24 ] - xx [ 60 ]
; xx [ 315 ] = xx [ 0 ] ; xx [ 316 ] = xx [ 0 ] ; xx [ 317 ] = xx [ 33 ] ; xx
[ 318 ] = xx [ 0 ] ; xx [ 319 ] = - ( xx [ 201 ] + xx [ 210 ] ) ; xx [ 320 ]
= xx [ 0 ] ; xx [ 321 ] = xx [ 0 ] ; xx [ 322 ] = xx [ 0 ] ; xx [ 323 ] = xx
[ 0 ] ; xx [ 324 ] = xx [ 0 ] ; xx [ 325 ] = xx [ 0 ] ; xx [ 326 ] = xx [ 0 ]
; xx [ 327 ] = xx [ 211 ] ; xx [ 328 ] = xx [ 0 ] ; xx [ 329 ] = xx [ 0 ] ;
xx [ 330 ] = xx [ 0 ] ; xx [ 331 ] = xx [ 0 ] ; xx [ 332 ] = xx [ 0 ] ; xx [
333 ] = xx [ 0 ] ; xx [ 334 ] = xx [ 215 ] ; xx [ 335 ] = xx [ 0 ] ; xx [ 336
] = xx [ 188 ] * ( xx [ 233 ] * ( xx [ 240 ] - xx [ 242 ] * xx [ 239 ] + xx [
222 ] * xx [ 241 ] ) - ( xx [ 189 ] * xx [ 239 ] - xx [ 222 ] * xx [ 240 ] +
xx [ 241 ] ) * xx [ 243 ] ) / ( xx [ 243 ] * xx [ 243 ] + xx [ 233 ] * xx [
233 ] ) + ( xx [ 247 ] + xx [ 253 ] ) * xx [ 189 ] - ( xx [ 248 ] + xx [ 254
] ) * xx [ 222 ] + xx [ 249 ] + xx [ 255 ] ; xx [ 337 ] = xx [ 0 ] ; xx [ 338
] = xx [ 0 ] ; xx [ 339 ] = xx [ 0 ] ; xx [ 340 ] = xx [ 0 ] ; xx [ 341 ] =
xx [ 33 ] ; xx [ 342 ] = xx [ 0 ] ; xx [ 343 ] = xx [ 0 ] ;
pm_math_Quaternion_xform_ra ( xx + 29 , xx + 82 , xx + 9 ) ;
pm_math_Quaternion_xform_ra ( xx + 35 , xx + 92 , xx + 21 ) ; xx [ 29 ] =
9.897538421414293e-3 ; xx [ 30 ] = 0.03896394932685158 ; xx [ 31 ] =
0.1061120224367209 ; pm_math_Quaternion_xform_ra ( xx + 35 , xx + 29 , xx +
39 ) ; xx [ 32 ] = 7.54929787758902e-8 ; xx [ 35 ] = - 0.0199999879359847 ;
xx [ 36 ] = xx [ 32 ] ; xx [ 37 ] = xx [ 35 ] ; xx [ 38 ] = -
0.05090199292298814 ; pm_math_Quaternion_xform_ra ( xx + 48 , xx + 36 , xx +
67 ) ; xx [ 78 ] = 1.581919911297324e-3 ; xx [ 92 ] = 2.273313047474082e-8 ;
xx [ 93 ] = 8.360821906871329e-8 ; xx [ 94 ] = 0.1149560547068914 ;
pm_math_Quaternion_xform_ra ( xx + 52 , xx + 92 , xx + 98 ) ; xx [ 52 ] =
3.043703554484884e-3 ; xx [ 53 ] = 0.4695245943326235 ; xx [ 101 ] = - ( xx [
78 ] + xx [ 98 ] ) ; xx [ 102 ] = xx [ 52 ] - xx [ 99 ] ; xx [ 103 ] = - ( xx
[ 53 ] + xx [ 100 ] ) ; pm_math_Quaternion_xform_ra ( xx + 12 , xx + 101 , xx
+ 98 ) ; xx [ 54 ] = 0.1781291906912097 ; xx [ 55 ] = 0.07715328610398943 ;
xx [ 87 ] = 0.277038885939381 ; xx [ 101 ] = xx [ 87 ] - state [ 10 ] ; xx [
102 ] = 0.5791292142236284 ; xx [ 103 ] = xx [ 46 ] * xx [ 143 ] ; xx [ 104 ]
= xx [ 46 ] * xx [ 141 ] + xx [ 114 ] ; xx [ 105 ] = xx [ 103 ] ; xx [ 106 ]
= xx [ 60 ] * xx [ 143 ] ; xx [ 107 ] = - xx [ 104 ] ;
pm_math_Vector3_cross_ra ( xx + 141 , xx + 105 , xx + 116 ) ;
pm_math_Quaternion_xform_ra ( xx + 128 , xx + 190 , xx + 105 ) ; xx [ 133 ] =
- 5.167373958926922e-3 ; xx [ 134 ] = 0.01953060282014866 ; xx [ 135 ] =
0.1060315916205751 ; pm_math_Quaternion_xform_ra ( xx + 128 , xx + 133 , xx +
136 ) ; xx [ 128 ] = xx [ 32 ] ; xx [ 129 ] = xx [ 35 ] ; xx [ 130 ] = -
0.05090199292298809 ; pm_math_Quaternion_xform_ra ( xx + 155 , xx + 128 , xx
+ 147 ) ; xx [ 170 ] = 1.327625287357436e-7 ; xx [ 171 ] =
4.885928012311413e-7 ; xx [ 172 ] = 1.053813650826583 ;
pm_math_Quaternion_xform_ra ( xx + 159 , xx + 170 , xx + 190 ) ; xx [ 159 ] =
- ( xx [ 78 ] + xx [ 190 ] ) ; xx [ 160 ] = xx [ 52 ] - xx [ 191 ] ; xx [ 161
] = - ( xx [ 53 ] + xx [ 192 ] ) ; pm_math_Quaternion_xform_ra ( xx + 12 , xx
+ 159 , xx + 190 ) ; xx [ 32 ] = 0.06749498603877549 ; xx [ 35 ] =
0.06715228610395237 ; xx [ 108 ] = 1.121139195080949 ; xx [ 159 ] =
0.4999989603908348 ; xx [ 160 ] = - 0.5000009810096334 ; xx [ 161 ] =
0.4999992346680554 ; xx [ 162 ] = 0.5000008239281687 ;
pm_math_Quaternion_compose_ra ( xx + 155 , xx + 159 , xx + 193 ) ; xx [ 155 ]
= 0.4999992346680592 ; xx [ 156 ] = 0.5000008239281649 ; xx [ 157 ] = -
0.4999989603908379 ; xx [ 158 ] = 0.5000009810096302 ;
pm_math_Quaternion_compose_ra ( xx + 48 , xx + 155 , xx + 197 ) ; xx [ 48 ] =
0.03000000000048807 ; xx [ 49 ] = 3.397648291980224e-4 ; xx [ 50 ] =
1.051662890794458e-5 ; xx [ 51 ] = 0.6830642379941189 ;
pm_math_Quaternion_xform_ra ( xx + 229 , xx + 49 , xx + 208 ) ; xx [ 237 ] =
2.206652894183421e-4 ; xx [ 238 ] = 9.518739797527464e-6 ; xx [ 239 ] =
0.6130643393205935 ; pm_math_Quaternion_xform_ra ( xx + 229 , xx + 237 , xx +
247 ) ; xx [ 109 ] = 0.07000000000001244 ; xx [ 114 ] = 0.5190575030373279 ;
xx [ 131 ] = xx [ 222 ] * ( xx [ 48 ] + xx [ 209 ] - xx [ 248 ] ) - xx [ 189
] * ( xx [ 109 ] + xx [ 208 ] - xx [ 247 ] ) + xx [ 101 ] - ( xx [ 210 ] - xx
[ 249 ] ) - xx [ 114 ] ; xx [ 139 ] = xx [ 131 ] / xx [ 188 ] ; xx [ 344 ] =
- pm_math_Vector3_dot_ra ( xx + 79 , xx + 64 ) ; xx [ 345 ] = - ( xx [ 9 ] +
xx [ 21 ] - xx [ 39 ] - ( xx [ 67 ] + xx [ 98 ] ) - xx [ 54 ] ) ; xx [ 346 ]
= - ( xx [ 10 ] + xx [ 22 ] - xx [ 40 ] - ( xx [ 68 ] + xx [ 99 ] ) - xx [ 55
] ) ; xx [ 347 ] = - ( xx [ 11 ] + xx [ 23 ] - xx [ 41 ] - ( xx [ 69 ] + xx [
100 ] + xx [ 101 ] ) - xx [ 102 ] ) ; xx [ 348 ] = - pm_math_Vector3_dot_ra (
xx + 181 , xx + 167 ) ; xx [ 349 ] = - ( xx [ 24 ] * ( xx [ 116 ] + xx [ 140
] * xx [ 103 ] ) + xx [ 105 ] - xx [ 136 ] - ( xx [ 147 ] + xx [ 190 ] ) - xx
[ 32 ] ) ; xx [ 350 ] = - ( ( xx [ 60 ] * xx [ 140 ] * xx [ 143 ] + xx [ 117
] ) * xx [ 24 ] + xx [ 106 ] - xx [ 137 ] - ( xx [ 148 ] + xx [ 191 ] ) - xx
[ 35 ] ) ; xx [ 351 ] = - ( ( xx [ 118 ] - xx [ 140 ] * xx [ 104 ] ) * xx [
24 ] + xx [ 107 ] - xx [ 138 ] - ( xx [ 149 ] + xx [ 192 ] + xx [ 101 ] ) +
xx [ 108 ] ) ; xx [ 352 ] = - ( ( xx [ 194 ] * xx [ 196 ] + xx [ 193 ] * xx [
195 ] ) * xx [ 24 ] ) ; xx [ 353 ] = - ( ( xx [ 198 ] * xx [ 200 ] + xx [ 197
] * xx [ 199 ] ) * xx [ 24 ] ) ; xx [ 354 ] = xx [ 131 ] - ( xx [ 139 ] +
sm_core_canonicalAngle ( atan2 ( xx [ 243 ] , xx [ 233 ] ) - xx [ 139 ] ) ) *
xx [ 188 ] ; xx [ 9 ] = 1.0e-8 ; memcpy ( xx + 355 , xx + 256 , 88 * sizeof (
double ) ) ; factorAndSolveWide ( 11 , 8 , xx + 355 , xx + 443 , xx + 454 ,
ii + 0 , xx + 344 , xx [ 9 ] , xx + 190 ) ; xx [ 10 ] = state [ 0 ] + xx [
190 ] ; xx [ 11 ] = state [ 8 ] + xx [ 194 ] ; xx [ 21 ] = xx [ 11 ] * xx [ 2
] ; xx [ 22 ] = cos ( xx [ 21 ] ) ; xx [ 23 ] = sin ( xx [ 21 ] ) ; xx [ 21 ]
= xx [ 1 ] * xx [ 22 ] - xx [ 5 ] * xx [ 23 ] ; xx [ 39 ] = xx [ 7 ] * xx [
23 ] - xx [ 8 ] * xx [ 22 ] ; xx [ 40 ] = xx [ 1 ] * xx [ 23 ] + xx [ 5 ] *
xx [ 22 ] ; xx [ 41 ] = xx [ 7 ] * xx [ 22 ] + xx [ 8 ] * xx [ 23 ] ; xx [ 22
] = - xx [ 41 ] ; xx [ 64 ] = xx [ 21 ] ; xx [ 65 ] = xx [ 39 ] ; xx [ 66 ] =
xx [ 40 ] ; xx [ 67 ] = xx [ 22 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
64 , xx + 18 , xx + 79 ) ; xx [ 23 ] = state [ 6 ] + xx [ 193 ] ; xx [ 68 ] =
xx [ 23 ] * xx [ 2 ] ; xx [ 69 ] = sin ( xx [ 68 ] ) ; xx [ 98 ] = cos ( xx [
68 ] ) ; xx [ 99 ] = - ( xx [ 6 ] * xx [ 69 ] ) ; xx [ 100 ] = - ( xx [ 16 ]
* xx [ 69 ] ) ; xx [ 101 ] = - ( xx [ 17 ] * xx [ 69 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 25 , xx + 98 , xx + 103 ) ;
pm_math_Quaternion_compose_ra ( xx + 103 , xx + 64 , xx + 98 ) ; xx [ 64 ] =
xx [ 79 ] * xx [ 100 ] ; xx [ 65 ] = xx [ 81 ] * xx [ 101 ] + xx [ 79 ] * xx
[ 99 ] ; xx [ 66 ] = xx [ 100 ] * xx [ 81 ] ; xx [ 67 ] = - xx [ 64 ] ; xx [
68 ] = xx [ 65 ] ; xx [ 69 ] = - xx [ 66 ] ; pm_math_Vector3_cross_ra ( xx +
99 , xx + 67 , xx + 116 ) ; xx [ 67 ] = xx [ 81 ] + xx [ 24 ] * ( xx [ 116 ]
- xx [ 98 ] * xx [ 64 ] ) ; xx [ 68 ] = ( xx [ 65 ] * xx [ 98 ] + xx [ 117 ]
) * xx [ 24 ] ; xx [ 69 ] = xx [ 24 ] * ( xx [ 118 ] - xx [ 98 ] * xx [ 66 ]
) - xx [ 79 ] ; xx [ 64 ] = state [ 12 ] + xx [ 196 ] ; xx [ 65 ] = xx [ 64 ]
* xx [ 2 ] ; xx [ 66 ] = sin ( xx [ 65 ] ) ; xx [ 136 ] = cos ( xx [ 65 ] ) ;
xx [ 137 ] = xx [ 34 ] * xx [ 66 ] ; xx [ 138 ] = xx [ 47 ] * xx [ 66 ] ; xx
[ 139 ] = xx [ 66 ] ; pm_math_Quaternion_compose_ra ( xx + 42 , xx + 136 , xx
+ 140 ) ; pm_math_Quaternion_compose_ra ( xx + 12 , xx + 140 , xx + 136 ) ;
pm_math_Quaternion_compose_ra ( xx + 136 , xx + 56 , xx + 208 ) ; xx [ 116 ]
= xx [ 24 ] * ( xx [ 209 ] * xx [ 210 ] - xx [ 208 ] * xx [ 211 ] ) ; xx [
117 ] = xx [ 33 ] - ( xx [ 209 ] * xx [ 209 ] + xx [ 211 ] * xx [ 211 ] ) *
xx [ 24 ] ; xx [ 118 ] = ( xx [ 210 ] * xx [ 211 ] + xx [ 208 ] * xx [ 209 ]
) * xx [ 24 ] ; pm_math_Quaternion_xform_ra ( xx + 136 , xx + 61 , xx + 147 )
; pm_math_Quaternion_compose_ra ( xx + 98 , xx + 71 , xx + 208 ) ; xx [ 167 ]
= ( xx [ 209 ] * xx [ 211 ] + xx [ 208 ] * xx [ 210 ] ) * xx [ 24 ] ; xx [
168 ] = xx [ 24 ] * ( xx [ 210 ] * xx [ 211 ] - xx [ 208 ] * xx [ 209 ] ) ;
xx [ 169 ] = xx [ 33 ] - ( xx [ 209 ] * xx [ 209 ] + xx [ 210 ] * xx [ 210 ]
) * xx [ 24 ] ; pm_math_Vector3_cross_ra ( xx + 79 , xx + 82 , xx + 181 ) ;
pm_math_Quaternion_xform_ra ( xx + 98 , xx + 181 , xx + 79 ) ; xx [ 181 ] =
xx [ 39 ] ; xx [ 182 ] = xx [ 40 ] ; xx [ 183 ] = xx [ 22 ] ; xx [ 22 ] = xx
[ 41 ] * xx [ 4 ] ; xx [ 65 ] = xx [ 41 ] * xx [ 88 ] ; xx [ 66 ] = xx [ 40 ]
* xx [ 88 ] ; xx [ 107 ] = xx [ 4 ] * xx [ 39 ] + xx [ 66 ] ; xx [ 208 ] = xx
[ 22 ] ; xx [ 209 ] = xx [ 65 ] ; xx [ 210 ] = xx [ 107 ] ;
pm_math_Vector3_cross_ra ( xx + 181 , xx + 208 , xx + 229 ) ; xx [ 181 ] = -
( xx [ 77 ] + xx [ 24 ] * ( xx [ 229 ] + xx [ 22 ] * xx [ 21 ] ) - xx [ 88 ]
) ; xx [ 182 ] = - ( xx [ 85 ] + xx [ 4 ] + ( xx [ 65 ] * xx [ 21 ] + xx [
230 ] ) * xx [ 24 ] ) ; xx [ 183 ] = xx [ 86 ] - ( xx [ 21 ] * xx [ 107 ] +
xx [ 231 ] ) * xx [ 24 ] ; pm_math_Vector3_cross_ra ( xx + 18 , xx + 181 , xx
+ 208 ) ; pm_math_Quaternion_xform_ra ( xx + 103 , xx + 208 , xx + 229 ) ;
pm_math_Quaternion_xform_ra ( xx + 103 , xx + 95 , xx + 208 ) ; xx [ 22 ] =
xx [ 75 ] * xx [ 99 ] - xx [ 76 ] * xx [ 101 ] ; xx [ 65 ] = xx [ 76 ] * xx [
100 ] ; xx [ 247 ] = - ( xx [ 75 ] * xx [ 100 ] ) ; xx [ 248 ] = xx [ 22 ] ;
xx [ 249 ] = xx [ 65 ] ; pm_math_Vector3_cross_ra ( xx + 99 , xx + 247 , xx +
253 ) ; xx [ 107 ] = xx [ 88 ] * xx [ 39 ] ; xx [ 247 ] = ( xx [ 41 ] * xx [
107 ] - xx [ 66 ] * xx [ 21 ] ) * xx [ 24 ] ; xx [ 248 ] = xx [ 24 ] * ( xx [
41 ] * xx [ 66 ] + xx [ 107 ] * xx [ 21 ] ) ; xx [ 249 ] = ( xx [ 107 ] * xx
[ 39 ] + xx [ 40 ] * xx [ 66 ] ) * xx [ 24 ] - xx [ 88 ] ;
pm_math_Quaternion_xform_ra ( xx + 103 , xx + 247 , xx + 39 ) ;
pm_math_Quaternion_xform_ra ( xx + 136 , xx + 89 , xx + 247 ) ;
pm_math_Quaternion_xform_ra ( xx + 140 , xx + 110 , xx + 256 ) ;
pm_math_Quaternion_xform_ra ( xx + 12 , xx + 256 , xx + 259 ) ; xx [ 21 ] =
state [ 2 ] + xx [ 191 ] ; xx [ 66 ] = xx [ 21 ] * xx [ 2 ] ; xx [ 107 ] =
sin ( xx [ 66 ] ) ; xx [ 262 ] = cos ( xx [ 66 ] ) ; xx [ 263 ] = - ( xx [
113 ] * xx [ 107 ] ) ; xx [ 264 ] = xx [ 115 ] * xx [ 107 ] ; xx [ 265 ] = xx
[ 123 ] * xx [ 107 ] ; pm_math_Quaternion_compose_ra ( xx + 119 , xx + 262 ,
xx + 266 ) ; xx [ 66 ] = state [ 4 ] + xx [ 192 ] ; xx [ 107 ] = xx [ 66 ] *
xx [ 2 ] ; xx [ 131 ] = cos ( xx [ 107 ] ) ; xx [ 201 ] = sin ( xx [ 107 ] )
; xx [ 107 ] = xx [ 3 ] * xx [ 131 ] + xx [ 125 ] * xx [ 201 ] ; xx [ 211 ] =
xx [ 127 ] * xx [ 131 ] + xx [ 132 ] * xx [ 201 ] ; xx [ 215 ] = xx [ 125 ] *
xx [ 131 ] - xx [ 3 ] * xx [ 201 ] ; xx [ 220 ] = xx [ 127 ] * xx [ 201 ] -
xx [ 132 ] * xx [ 131 ] ; xx [ 262 ] = - xx [ 107 ] ; xx [ 263 ] = xx [ 211 ]
; xx [ 264 ] = xx [ 215 ] ; xx [ 265 ] = xx [ 220 ] ;
pm_math_Quaternion_compose_ra ( xx + 266 , xx + 262 , xx + 270 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 262 , xx + 144 , xx + 256 ) ; xx [
131 ] = xx [ 256 ] * xx [ 272 ] ; xx [ 201 ] = xx [ 258 ] * xx [ 273 ] + xx [
256 ] * xx [ 271 ] ; xx [ 232 ] = xx [ 272 ] * xx [ 258 ] ; xx [ 262 ] = xx [
131 ] ; xx [ 263 ] = - xx [ 201 ] ; xx [ 264 ] = xx [ 232 ] ;
pm_math_Vector3_cross_ra ( xx + 271 , xx + 262 , xx + 274 ) ; xx [ 262 ] = (
xx [ 270 ] * xx [ 131 ] + xx [ 274 ] ) * xx [ 24 ] - xx [ 258 ] ; xx [ 263 ]
= xx [ 24 ] * ( xx [ 275 ] - xx [ 201 ] * xx [ 270 ] ) ; xx [ 264 ] = xx [
256 ] + ( xx [ 270 ] * xx [ 232 ] + xx [ 276 ] ) * xx [ 24 ] ; xx [ 131 ] =
state [ 14 ] + xx [ 197 ] ; xx [ 201 ] = xx [ 131 ] * xx [ 2 ] ; xx [ 232 ] =
sin ( xx [ 201 ] ) ; xx [ 274 ] = cos ( xx [ 201 ] ) ; xx [ 275 ] = - ( xx [
126 ] * xx [ 232 ] ) ; xx [ 276 ] = - ( xx [ 154 ] * xx [ 232 ] ) ; xx [ 277
] = - xx [ 232 ] ; pm_math_Quaternion_compose_ra ( xx + 150 , xx + 274 , xx +
278 ) ; pm_math_Quaternion_compose_ra ( xx + 12 , xx + 278 , xx + 274 ) ;
pm_math_Quaternion_compose_ra ( xx + 274 , xx + 56 , xx + 282 ) ; xx [ 286 ]
= xx [ 24 ] * ( xx [ 283 ] * xx [ 284 ] - xx [ 282 ] * xx [ 285 ] ) ; xx [
287 ] = xx [ 33 ] - ( xx [ 283 ] * xx [ 283 ] + xx [ 285 ] * xx [ 285 ] ) *
xx [ 24 ] ; xx [ 288 ] = ( xx [ 284 ] * xx [ 285 ] + xx [ 282 ] * xx [ 283 ]
) * xx [ 24 ] ; pm_math_Quaternion_xform_ra ( xx + 274 , xx + 163 , xx + 282
) ; pm_math_Quaternion_compose_ra ( xx + 270 , xx + 173 , xx + 289 ) ; xx [
293 ] = ( xx [ 290 ] * xx [ 292 ] + xx [ 289 ] * xx [ 291 ] ) * xx [ 24 ] ;
xx [ 294 ] = xx [ 24 ] * ( xx [ 291 ] * xx [ 292 ] - xx [ 289 ] * xx [ 290 ]
) ; xx [ 295 ] = xx [ 33 ] - ( xx [ 290 ] * xx [ 290 ] + xx [ 291 ] * xx [
291 ] ) * xx [ 24 ] ; xx [ 289 ] = xx [ 46 ] * xx [ 258 ] ; xx [ 290 ] = xx [
60 ] * xx [ 258 ] ; xx [ 291 ] = - ( xx [ 46 ] * xx [ 256 ] + xx [ 60 ] * xx
[ 257 ] ) ; pm_math_Quaternion_xform_ra ( xx + 270 , xx + 289 , xx + 256 ) ;
xx [ 289 ] = xx [ 211 ] ; xx [ 290 ] = xx [ 215 ] ; xx [ 291 ] = xx [ 220 ] ;
xx [ 201 ] = xx [ 220 ] * xx [ 124 ] ; xx [ 232 ] = xx [ 220 ] * xx [ 166 ] ;
xx [ 233 ] = xx [ 215 ] * xx [ 166 ] ; xx [ 240 ] = xx [ 124 ] * xx [ 211 ] +
xx [ 233 ] ; xx [ 296 ] = - xx [ 201 ] ; xx [ 297 ] = - xx [ 232 ] ; xx [ 298
] = xx [ 240 ] ; pm_math_Vector3_cross_ra ( xx + 289 , xx + 296 , xx + 299 )
; xx [ 289 ] = xx [ 70 ] - ( xx [ 24 ] * ( xx [ 299 ] + xx [ 201 ] * xx [ 107
] ) - xx [ 166 ] ) ; xx [ 290 ] = - ( xx [ 180 ] + xx [ 124 ] + ( xx [ 232 ]
* xx [ 107 ] + xx [ 300 ] ) * xx [ 24 ] ) ; xx [ 291 ] = xx [ 184 ] - ( xx [
301 ] - xx [ 240 ] * xx [ 107 ] ) * xx [ 24 ] ; pm_math_Vector3_cross_ra ( xx
+ 144 , xx + 289 , xx + 296 ) ; pm_math_Quaternion_xform_ra ( xx + 266 , xx +
296 , xx + 299 ) ; pm_math_Quaternion_xform_ra ( xx + 266 , xx + 185 , xx +
296 ) ; xx [ 201 ] = xx [ 166 ] * xx [ 211 ] ; xx [ 302 ] = ( xx [ 233 ] * xx
[ 107 ] - xx [ 220 ] * xx [ 201 ] ) * xx [ 24 ] ; xx [ 303 ] = - ( xx [ 24 ]
* ( xx [ 220 ] * xx [ 233 ] + xx [ 201 ] * xx [ 107 ] ) ) ; xx [ 304 ] = ( xx
[ 201 ] * xx [ 211 ] + xx [ 215 ] * xx [ 233 ] ) * xx [ 24 ] - xx [ 166 ] ;
pm_math_Quaternion_xform_ra ( xx + 266 , xx + 302 , xx + 305 ) ; xx [ 107 ] =
xx [ 60 ] * xx [ 272 ] ; xx [ 201 ] = xx [ 60 ] * xx [ 271 ] ;
pm_math_Quaternion_xform_ra ( xx + 274 , xx + 177 , xx + 302 ) ;
pm_math_Quaternion_xform_ra ( xx + 278 , xx + 202 , xx + 308 ) ;
pm_math_Quaternion_xform_ra ( xx + 12 , xx + 308 , xx + 311 ) ;
pm_math_Quaternion_xform_ra ( xx + 274 , xx + 205 , xx + 308 ) ;
pm_math_Quaternion_xform_ra ( xx + 136 , xx + 212 , xx + 314 ) ; xx [ 211 ] =
xx [ 10 ] * xx [ 2 ] ; xx [ 215 ] = sin ( xx [ 211 ] ) ; xx [ 315 ] = cos (
xx [ 211 ] ) ; xx [ 316 ] = - ( xx [ 221 ] * xx [ 215 ] ) ; xx [ 317 ] = - (
xx [ 223 ] * xx [ 215 ] ) ; xx [ 318 ] = - ( xx [ 224 ] * xx [ 215 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 216 , xx + 315 , xx + 319 ) ;
pm_math_Quaternion_compose_ra ( xx + 319 , xx + 225 , xx + 315 ) ; xx [ 211 ]
= xx [ 33 ] - ( xx [ 317 ] * xx [ 317 ] + xx [ 318 ] * xx [ 318 ] ) * xx [ 24
] ; xx [ 215 ] = ( xx [ 316 ] * xx [ 317 ] + xx [ 315 ] * xx [ 318 ] ) * xx [
24 ] ; xx [ 220 ] = xx [ 24 ] * ( xx [ 316 ] * xx [ 318 ] - xx [ 315 ] * xx [
317 ] ) ; xx [ 232 ] = xx [ 189 ] * xx [ 211 ] - xx [ 222 ] * xx [ 215 ] + xx
[ 220 ] ; pm_math_Quaternion_xform_ra ( xx + 319 , xx + 234 , xx + 315 ) ; xx
[ 233 ] = xx [ 215 ] - xx [ 242 ] * xx [ 211 ] + xx [ 222 ] * xx [ 220 ] ;
pm_math_Quaternion_xform_ra ( xx + 319 , xx + 244 , xx + 323 ) ;
pm_math_Quaternion_xform_ra ( xx + 319 , xx + 250 , xx + 326 ) ; xx [ 329 ] =
xx [ 0 ] ; xx [ 330 ] = xx [ 0 ] ; xx [ 331 ] = xx [ 0 ] ; xx [ 332 ] =
pm_math_Vector3_dot_ra ( xx + 67 , xx + 116 ) ; xx [ 333 ] = xx [ 0 ] ; xx [
334 ] = xx [ 0 ] ; xx [ 335 ] = pm_math_Vector3_dot_ra ( xx + 147 , xx + 167
) ; xx [ 336 ] = xx [ 0 ] ; xx [ 337 ] = xx [ 0 ] ; xx [ 338 ] = xx [ 0 ] ;
xx [ 339 ] = xx [ 0 ] ; xx [ 340 ] = xx [ 79 ] + xx [ 229 ] + xx [ 208 ] ; xx
[ 341 ] = ( xx [ 253 ] - xx [ 75 ] * xx [ 98 ] * xx [ 100 ] ) * xx [ 24 ] +
xx [ 39 ] - xx [ 76 ] ; xx [ 342 ] = xx [ 0 ] ; xx [ 343 ] = - ( xx [ 247 ] +
xx [ 259 ] ) ; xx [ 344 ] = xx [ 0 ] ; xx [ 345 ] = xx [ 0 ] ; xx [ 346 ] =
xx [ 0 ] ; xx [ 347 ] = xx [ 0 ] ; xx [ 348 ] = xx [ 80 ] + xx [ 230 ] + xx [
209 ] ; xx [ 349 ] = ( xx [ 98 ] * xx [ 22 ] + xx [ 254 ] ) * xx [ 24 ] + xx
[ 40 ] ; xx [ 350 ] = xx [ 0 ] ; xx [ 351 ] = - ( xx [ 248 ] + xx [ 260 ] ) ;
xx [ 352 ] = xx [ 0 ] ; xx [ 353 ] = xx [ 0 ] ; xx [ 354 ] = xx [ 0 ] ; xx [
355 ] = xx [ 0 ] ; xx [ 356 ] = xx [ 81 ] + xx [ 231 ] + xx [ 210 ] ; xx [
357 ] = xx [ 24 ] * ( xx [ 255 ] + xx [ 98 ] * xx [ 65 ] ) + xx [ 41 ] - xx [
75 ] ; xx [ 358 ] = xx [ 33 ] ; xx [ 359 ] = - ( xx [ 249 ] + xx [ 261 ] ) ;
xx [ 360 ] = xx [ 0 ] ; xx [ 361 ] = xx [ 0 ] ; xx [ 362 ] =
pm_math_Vector3_dot_ra ( xx + 262 , xx + 286 ) ; xx [ 363 ] = xx [ 0 ] ; xx [
364 ] = xx [ 0 ] ; xx [ 365 ] = xx [ 0 ] ; xx [ 366 ] = xx [ 0 ] ; xx [ 367 ]
= xx [ 0 ] ; xx [ 368 ] = pm_math_Vector3_dot_ra ( xx + 282 , xx + 293 ) ; xx
[ 369 ] = xx [ 0 ] ; xx [ 370 ] = xx [ 256 ] + xx [ 299 ] + xx [ 296 ] ; xx [
371 ] = xx [ 305 ] - ( xx [ 270 ] * xx [ 107 ] + xx [ 273 ] * xx [ 201 ] ) *
xx [ 24 ] ; xx [ 372 ] = xx [ 0 ] ; xx [ 373 ] = xx [ 0 ] ; xx [ 374 ] = xx [
0 ] ; xx [ 375 ] = xx [ 0 ] ; xx [ 376 ] = - ( xx [ 302 ] + xx [ 311 ] ) ; xx
[ 377 ] = xx [ 0 ] ; xx [ 378 ] = xx [ 257 ] + xx [ 300 ] + xx [ 297 ] ; xx [
379 ] = xx [ 24 ] * ( xx [ 270 ] * xx [ 201 ] - xx [ 273 ] * xx [ 107 ] ) +
xx [ 306 ] ; xx [ 380 ] = xx [ 0 ] ; xx [ 381 ] = xx [ 0 ] ; xx [ 382 ] = xx
[ 0 ] ; xx [ 383 ] = xx [ 0 ] ; xx [ 384 ] = - ( xx [ 303 ] + xx [ 312 ] ) ;
xx [ 385 ] = xx [ 0 ] ; xx [ 386 ] = xx [ 258 ] + xx [ 301 ] + xx [ 298 ] ;
xx [ 387 ] = xx [ 307 ] + ( xx [ 271 ] * xx [ 201 ] + xx [ 272 ] * xx [ 107 ]
) * xx [ 24 ] - xx [ 60 ] ; xx [ 388 ] = xx [ 0 ] ; xx [ 389 ] = xx [ 0 ] ;
xx [ 390 ] = xx [ 33 ] ; xx [ 391 ] = xx [ 0 ] ; xx [ 392 ] = - ( xx [ 304 ]
+ xx [ 313 ] ) ; xx [ 393 ] = xx [ 0 ] ; xx [ 394 ] = xx [ 0 ] ; xx [ 395 ] =
xx [ 0 ] ; xx [ 396 ] = xx [ 0 ] ; xx [ 397 ] = xx [ 0 ] ; xx [ 398 ] = xx [
0 ] ; xx [ 399 ] = xx [ 0 ] ; xx [ 400 ] = xx [ 308 ] ; xx [ 401 ] = xx [ 0 ]
; xx [ 402 ] = xx [ 0 ] ; xx [ 403 ] = xx [ 0 ] ; xx [ 404 ] = xx [ 0 ] ; xx
[ 405 ] = xx [ 0 ] ; xx [ 406 ] = xx [ 0 ] ; xx [ 407 ] = xx [ 314 ] ; xx [
408 ] = xx [ 0 ] ; xx [ 409 ] = xx [ 188 ] * ( xx [ 232 ] * ( xx [ 316 ] - xx
[ 242 ] * xx [ 315 ] + xx [ 222 ] * xx [ 317 ] ) - ( xx [ 189 ] * xx [ 315 ]
- xx [ 222 ] * xx [ 316 ] + xx [ 317 ] ) * xx [ 233 ] ) / ( xx [ 233 ] * xx [
233 ] + xx [ 232 ] * xx [ 232 ] ) + ( xx [ 323 ] + xx [ 326 ] ) * xx [ 189 ]
- ( xx [ 324 ] + xx [ 327 ] ) * xx [ 222 ] + xx [ 325 ] + xx [ 328 ] ; xx [
410 ] = xx [ 0 ] ; xx [ 411 ] = xx [ 0 ] ; xx [ 412 ] = xx [ 0 ] ; xx [ 413 ]
= xx [ 0 ] ; xx [ 414 ] = xx [ 33 ] ; xx [ 415 ] = xx [ 0 ] ; xx [ 416 ] = xx
[ 0 ] ; pm_math_Quaternion_xform_ra ( xx + 98 , xx + 82 , xx + 39 ) ;
pm_math_Quaternion_xform_ra ( xx + 103 , xx + 181 , xx + 67 ) ;
pm_math_Quaternion_xform_ra ( xx + 103 , xx + 29 , xx + 79 ) ;
pm_math_Quaternion_xform_ra ( xx + 136 , xx + 36 , xx + 98 ) ;
pm_math_Quaternion_xform_ra ( xx + 140 , xx + 92 , xx + 103 ) ; xx [ 140 ] =
- ( xx [ 78 ] + xx [ 103 ] ) ; xx [ 141 ] = xx [ 52 ] - xx [ 104 ] ; xx [ 142
] = - ( xx [ 53 ] + xx [ 105 ] ) ; pm_math_Quaternion_xform_ra ( xx + 12 , xx
+ 140 , xx + 103 ) ; xx [ 22 ] = state [ 10 ] + xx [ 195 ] ; xx [ 65 ] = xx [
87 ] - xx [ 22 ] ; xx [ 101 ] = xx [ 46 ] * xx [ 273 ] ; xx [ 106 ] = xx [ 46
] * xx [ 271 ] + xx [ 107 ] ; xx [ 140 ] = xx [ 101 ] ; xx [ 141 ] = xx [ 60
] * xx [ 273 ] ; xx [ 142 ] = - xx [ 106 ] ; pm_math_Vector3_cross_ra ( xx +
271 , xx + 140 , xx + 147 ) ; pm_math_Quaternion_xform_ra ( xx + 266 , xx +
289 , xx + 140 ) ; pm_math_Quaternion_xform_ra ( xx + 266 , xx + 133 , xx +
181 ) ; pm_math_Quaternion_xform_ra ( xx + 274 , xx + 128 , xx + 190 ) ;
pm_math_Quaternion_xform_ra ( xx + 278 , xx + 170 , xx + 193 ) ; xx [ 196 ] =
- ( xx [ 78 ] + xx [ 193 ] ) ; xx [ 197 ] = xx [ 52 ] - xx [ 194 ] ; xx [ 198
] = - ( xx [ 53 ] + xx [ 195 ] ) ; pm_math_Quaternion_xform_ra ( xx + 12 , xx
+ 196 , xx + 193 ) ; pm_math_Quaternion_compose_ra ( xx + 274 , xx + 159 , xx
+ 196 ) ; pm_math_Quaternion_compose_ra ( xx + 136 , xx + 155 , xx + 208 ) ;
pm_math_Quaternion_xform_ra ( xx + 319 , xx + 49 , xx + 136 ) ;
pm_math_Quaternion_xform_ra ( xx + 319 , xx + 237 , xx + 229 ) ; xx [ 107 ] =
xx [ 222 ] * ( xx [ 48 ] + xx [ 137 ] - xx [ 230 ] ) - xx [ 189 ] * ( xx [
109 ] + xx [ 136 ] - xx [ 229 ] ) + xx [ 65 ] - ( xx [ 138 ] - xx [ 231 ] ) -
xx [ 114 ] ; xx [ 136 ] = xx [ 107 ] / xx [ 188 ] ; xx [ 253 ] = -
pm_math_Vector3_dot_ra ( xx + 167 , xx + 116 ) ; xx [ 254 ] = - ( xx [ 39 ] +
xx [ 67 ] - xx [ 79 ] - ( xx [ 98 ] + xx [ 103 ] ) - xx [ 54 ] ) ; xx [ 255 ]
= - ( xx [ 40 ] + xx [ 68 ] - xx [ 80 ] - ( xx [ 99 ] + xx [ 104 ] ) - xx [
55 ] ) ; xx [ 256 ] = - ( xx [ 41 ] + xx [ 69 ] - xx [ 81 ] - ( xx [ 100 ] +
xx [ 105 ] + xx [ 65 ] ) - xx [ 102 ] ) ; xx [ 257 ] = -
pm_math_Vector3_dot_ra ( xx + 293 , xx + 286 ) ; xx [ 258 ] = - ( xx [ 24 ] *
( xx [ 147 ] + xx [ 270 ] * xx [ 101 ] ) + xx [ 140 ] - xx [ 181 ] - ( xx [
190 ] + xx [ 193 ] ) - xx [ 32 ] ) ; xx [ 259 ] = - ( ( xx [ 60 ] * xx [ 270
] * xx [ 273 ] + xx [ 148 ] ) * xx [ 24 ] + xx [ 141 ] - xx [ 182 ] - ( xx [
191 ] + xx [ 194 ] ) - xx [ 35 ] ) ; xx [ 260 ] = - ( ( xx [ 149 ] - xx [ 270
] * xx [ 106 ] ) * xx [ 24 ] + xx [ 142 ] - xx [ 183 ] - ( xx [ 192 ] + xx [
195 ] + xx [ 65 ] ) + xx [ 108 ] ) ; xx [ 261 ] = - ( ( xx [ 197 ] * xx [ 199
] + xx [ 196 ] * xx [ 198 ] ) * xx [ 24 ] ) ; xx [ 262 ] = - ( ( xx [ 209 ] *
xx [ 211 ] + xx [ 208 ] * xx [ 210 ] ) * xx [ 24 ] ) ; xx [ 263 ] = xx [ 107
] - ( xx [ 136 ] + sm_core_canonicalAngle ( atan2 ( xx [ 233 ] , xx [ 232 ] )
- xx [ 136 ] ) ) * xx [ 188 ] ; memcpy ( xx + 417 , xx + 329 , 88 * sizeof (
double ) ) ; factorAndSolveWide ( 11 , 8 , xx + 417 , xx + 264 , xx + 275 ,
ii + 0 , xx + 253 , xx [ 9 ] , xx + 190 ) ; xx [ 39 ] = xx [ 10 ] + xx [ 190
] ; xx [ 10 ] = xx [ 21 ] + xx [ 191 ] ; xx [ 21 ] = xx [ 66 ] + xx [ 192 ] ;
xx [ 40 ] = xx [ 23 ] + xx [ 193 ] ; xx [ 23 ] = xx [ 11 ] + xx [ 194 ] ; xx
[ 11 ] = xx [ 22 ] + xx [ 195 ] ; xx [ 22 ] = xx [ 64 ] + xx [ 196 ] ; xx [
41 ] = xx [ 131 ] + xx [ 197 ] ; xx [ 253 ] = xx [ 39 ] ; xx [ 254 ] = state
[ 1 ] ; xx [ 255 ] = xx [ 10 ] ; xx [ 256 ] = state [ 3 ] ; xx [ 257 ] = xx [
21 ] ; xx [ 258 ] = state [ 5 ] ; xx [ 259 ] = xx [ 40 ] ; xx [ 260 ] = state
[ 7 ] ; xx [ 261 ] = xx [ 23 ] ; xx [ 262 ] = state [ 9 ] ; xx [ 263 ] = xx [
11 ] ; xx [ 264 ] = state [ 11 ] ; xx [ 265 ] = xx [ 22 ] ; xx [ 266 ] =
state [ 13 ] ; xx [ 267 ] = xx [ 41 ] ; xx [ 268 ] = state [ 15 ] ; xx [ 269
] = state [ 16 ] ; xx [ 270 ] = state [ 17 ] ; xx [ 271 ] = state [ 18 ] ; xx
[ 272 ] = state [ 19 ] ; xx [ 64 ] = xx [ 40 ] * xx [ 2 ] ; xx [ 40 ] = sin (
xx [ 64 ] ) ; xx [ 65 ] = cos ( xx [ 64 ] ) ; xx [ 66 ] = - ( xx [ 6 ] * xx [
40 ] ) ; xx [ 67 ] = - ( xx [ 16 ] * xx [ 40 ] ) ; xx [ 68 ] = - ( xx [ 17 ]
* xx [ 40 ] ) ; pm_math_Quaternion_compose_ra ( xx + 25 , xx + 65 , xx + 98 )
; xx [ 40 ] = xx [ 23 ] * xx [ 2 ] ; xx [ 23 ] = cos ( xx [ 40 ] ) ; xx [ 64
] = sin ( xx [ 40 ] ) ; xx [ 40 ] = xx [ 1 ] * xx [ 23 ] - xx [ 5 ] * xx [ 64
] ; xx [ 65 ] = xx [ 7 ] * xx [ 64 ] - xx [ 8 ] * xx [ 23 ] ; xx [ 66 ] = xx
[ 1 ] * xx [ 64 ] + xx [ 5 ] * xx [ 23 ] ; xx [ 67 ] = xx [ 7 ] * xx [ 23 ] +
xx [ 8 ] * xx [ 64 ] ; xx [ 23 ] = - xx [ 67 ] ; xx [ 103 ] = xx [ 40 ] ; xx
[ 104 ] = xx [ 65 ] ; xx [ 105 ] = xx [ 66 ] ; xx [ 106 ] = xx [ 23 ] ;
pm_math_Quaternion_compose_ra ( xx + 98 , xx + 103 , xx + 136 ) ;
pm_math_Quaternion_compose_ra ( xx + 136 , xx + 71 , xx + 103 ) ; xx [ 79 ] =
( xx [ 104 ] * xx [ 106 ] + xx [ 103 ] * xx [ 105 ] ) * xx [ 24 ] ; xx [ 80 ]
= xx [ 24 ] * ( xx [ 105 ] * xx [ 106 ] - xx [ 103 ] * xx [ 104 ] ) ; xx [ 81
] = xx [ 33 ] - ( xx [ 104 ] * xx [ 104 ] + xx [ 105 ] * xx [ 105 ] ) * xx [
24 ] ; xx [ 64 ] = xx [ 22 ] * xx [ 2 ] ; xx [ 22 ] = sin ( xx [ 64 ] ) ; xx
[ 103 ] = cos ( xx [ 64 ] ) ; xx [ 104 ] = xx [ 34 ] * xx [ 22 ] ; xx [ 105 ]
= xx [ 47 ] * xx [ 22 ] ; xx [ 106 ] = xx [ 22 ] ;
pm_math_Quaternion_compose_ra ( xx + 42 , xx + 103 , xx + 140 ) ;
pm_math_Quaternion_compose_ra ( xx + 12 , xx + 140 , xx + 103 ) ;
pm_math_Quaternion_compose_ra ( xx + 103 , xx + 56 , xx + 190 ) ; xx [ 116 ]
= xx [ 24 ] * ( xx [ 191 ] * xx [ 192 ] - xx [ 190 ] * xx [ 193 ] ) ; xx [
117 ] = xx [ 33 ] - ( xx [ 191 ] * xx [ 191 ] + xx [ 193 ] * xx [ 193 ] ) *
xx [ 24 ] ; xx [ 118 ] = ( xx [ 192 ] * xx [ 193 ] + xx [ 190 ] * xx [ 191 ]
) * xx [ 24 ] ; pm_math_Quaternion_xform_ra ( xx + 136 , xx + 82 , xx + 147 )
; xx [ 22 ] = 0.02104361874950805 ; xx [ 136 ] = xx [ 65 ] ; xx [ 137 ] = xx
[ 66 ] ; xx [ 138 ] = xx [ 23 ] ; xx [ 23 ] = xx [ 67 ] * xx [ 4 ] ; xx [ 64
] = xx [ 67 ] * xx [ 88 ] ; xx [ 67 ] = xx [ 4 ] * xx [ 65 ] + xx [ 66 ] * xx
[ 88 ] ; xx [ 167 ] = xx [ 23 ] ; xx [ 168 ] = xx [ 64 ] ; xx [ 169 ] = xx [
67 ] ; pm_math_Vector3_cross_ra ( xx + 136 , xx + 167 , xx + 181 ) ; xx [ 65
] = 0.01898006821655238 ; xx [ 136 ] = - ( xx [ 22 ] + xx [ 24 ] * ( xx [ 181
] + xx [ 23 ] * xx [ 40 ] ) ) ; xx [ 137 ] = - ( xx [ 65 ] + ( xx [ 64 ] * xx
[ 40 ] + xx [ 182 ] ) * xx [ 24 ] ) ; xx [ 138 ] = xx [ 86 ] - ( xx [ 40 ] *
xx [ 67 ] + xx [ 183 ] ) * xx [ 24 ] ; pm_math_Quaternion_xform_ra ( xx + 98
, xx + 136 , xx + 66 ) ; pm_math_Quaternion_xform_ra ( xx + 98 , xx + 29 , xx
+ 136 ) ; pm_math_Quaternion_xform_ra ( xx + 103 , xx + 36 , xx + 29 ) ;
pm_math_Quaternion_xform_ra ( xx + 140 , xx + 92 , xx + 98 ) ; xx [ 92 ] = -
( xx [ 78 ] + xx [ 98 ] ) ; xx [ 93 ] = xx [ 52 ] - xx [ 99 ] ; xx [ 94 ] = -
( xx [ 53 ] + xx [ 100 ] ) ; pm_math_Quaternion_xform_ra ( xx + 12 , xx + 92
, xx + 98 ) ; xx [ 23 ] = xx [ 87 ] - xx [ 11 ] ; xx [ 11 ] = xx [ 10 ] * xx
[ 2 ] ; xx [ 10 ] = sin ( xx [ 11 ] ) ; xx [ 139 ] = cos ( xx [ 11 ] ) ; xx [
140 ] = - ( xx [ 113 ] * xx [ 10 ] ) ; xx [ 141 ] = xx [ 115 ] * xx [ 10 ] ;
xx [ 142 ] = xx [ 123 ] * xx [ 10 ] ; pm_math_Quaternion_compose_ra ( xx +
119 , xx + 139 , xx + 190 ) ; xx [ 10 ] = xx [ 21 ] * xx [ 2 ] ; xx [ 11 ] =
cos ( xx [ 10 ] ) ; xx [ 21 ] = sin ( xx [ 10 ] ) ; xx [ 10 ] = xx [ 3 ] * xx
[ 11 ] + xx [ 125 ] * xx [ 21 ] ; xx [ 40 ] = xx [ 127 ] * xx [ 11 ] + xx [
132 ] * xx [ 21 ] ; xx [ 64 ] = xx [ 125 ] * xx [ 11 ] - xx [ 3 ] * xx [ 21 ]
; xx [ 69 ] = xx [ 127 ] * xx [ 21 ] - xx [ 132 ] * xx [ 11 ] ; xx [ 139 ] =
- xx [ 10 ] ; xx [ 140 ] = xx [ 40 ] ; xx [ 141 ] = xx [ 64 ] ; xx [ 142 ] =
xx [ 69 ] ; pm_math_Quaternion_compose_ra ( xx + 190 , xx + 139 , xx + 194 )
; pm_math_Quaternion_compose_ra ( xx + 194 , xx + 173 , xx + 139 ) ; xx [ 92
] = ( xx [ 140 ] * xx [ 142 ] + xx [ 139 ] * xx [ 141 ] ) * xx [ 24 ] ; xx [
93 ] = xx [ 24 ] * ( xx [ 141 ] * xx [ 142 ] - xx [ 139 ] * xx [ 140 ] ) ; xx
[ 94 ] = xx [ 33 ] - ( xx [ 140 ] * xx [ 140 ] + xx [ 141 ] * xx [ 141 ] ) *
xx [ 24 ] ; xx [ 11 ] = xx [ 41 ] * xx [ 2 ] ; xx [ 21 ] = sin ( xx [ 11 ] )
; xx [ 139 ] = cos ( xx [ 11 ] ) ; xx [ 140 ] = - ( xx [ 126 ] * xx [ 21 ] )
; xx [ 141 ] = - ( xx [ 154 ] * xx [ 21 ] ) ; xx [ 142 ] = - xx [ 21 ] ;
pm_math_Quaternion_compose_ra ( xx + 150 , xx + 139 , xx + 198 ) ;
pm_math_Quaternion_compose_ra ( xx + 12 , xx + 198 , xx + 139 ) ;
pm_math_Quaternion_compose_ra ( xx + 139 , xx + 56 , xx + 208 ) ; xx [ 167 ]
= xx [ 24 ] * ( xx [ 209 ] * xx [ 210 ] - xx [ 208 ] * xx [ 211 ] ) ; xx [
168 ] = xx [ 33 ] - ( xx [ 209 ] * xx [ 209 ] + xx [ 211 ] * xx [ 211 ] ) *
xx [ 24 ] ; xx [ 169 ] = ( xx [ 210 ] * xx [ 211 ] + xx [ 208 ] * xx [ 209 ]
) * xx [ 24 ] ; xx [ 11 ] = xx [ 46 ] * xx [ 197 ] ; xx [ 21 ] = xx [ 46 ] *
xx [ 195 ] + xx [ 60 ] * xx [ 196 ] ; xx [ 181 ] = xx [ 11 ] ; xx [ 182 ] =
xx [ 60 ] * xx [ 197 ] ; xx [ 183 ] = - xx [ 21 ] ; pm_math_Vector3_cross_ra
( xx + 195 , xx + 181 , xx + 208 ) ; xx [ 41 ] = 0.242315223240461 ; xx [ 181
] = xx [ 40 ] ; xx [ 182 ] = xx [ 64 ] ; xx [ 183 ] = xx [ 69 ] ; xx [ 87 ] =
xx [ 69 ] * xx [ 124 ] ; xx [ 101 ] = xx [ 69 ] * xx [ 166 ] ; xx [ 69 ] = xx
[ 124 ] * xx [ 40 ] + xx [ 64 ] * xx [ 166 ] ; xx [ 229 ] = - xx [ 87 ] ; xx
[ 230 ] = - xx [ 101 ] ; xx [ 231 ] = xx [ 69 ] ; pm_math_Vector3_cross_ra (
xx + 181 , xx + 229 , xx + 247 ) ; xx [ 40 ] = 0.01901241471107262 ; xx [ 181
] = xx [ 41 ] - xx [ 24 ] * ( xx [ 247 ] + xx [ 87 ] * xx [ 10 ] ) ; xx [ 182
] = - ( xx [ 40 ] + ( xx [ 101 ] * xx [ 10 ] + xx [ 248 ] ) * xx [ 24 ] ) ;
xx [ 183 ] = xx [ 184 ] - ( xx [ 249 ] - xx [ 69 ] * xx [ 10 ] ) * xx [ 24 ]
; pm_math_Quaternion_xform_ra ( xx + 190 , xx + 181 , xx + 229 ) ;
pm_math_Quaternion_xform_ra ( xx + 190 , xx + 133 , xx + 181 ) ;
pm_math_Quaternion_xform_ra ( xx + 139 , xx + 128 , xx + 133 ) ;
pm_math_Quaternion_xform_ra ( xx + 198 , xx + 170 , xx + 190 ) ; xx [ 170 ] =
- ( xx [ 78 ] + xx [ 190 ] ) ; xx [ 171 ] = xx [ 52 ] - xx [ 191 ] ; xx [ 172
] = - ( xx [ 53 ] + xx [ 192 ] ) ; pm_math_Quaternion_xform_ra ( xx + 12 , xx
+ 170 , xx + 190 ) ; pm_math_Quaternion_compose_ra ( xx + 139 , xx + 159 , xx
+ 198 ) ; pm_math_Quaternion_compose_ra ( xx + 103 , xx + 155 , xx + 139 ) ;
xx [ 10 ] = xx [ 39 ] * xx [ 2 ] ; xx [ 39 ] = sin ( xx [ 10 ] ) ; xx [ 103 ]
= cos ( xx [ 10 ] ) ; xx [ 104 ] = - ( xx [ 221 ] * xx [ 39 ] ) ; xx [ 105 ]
= - ( xx [ 223 ] * xx [ 39 ] ) ; xx [ 106 ] = - ( xx [ 224 ] * xx [ 39 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 216 , xx + 103 , xx + 155 ) ;
pm_math_Quaternion_xform_ra ( xx + 155 , xx + 49 , xx + 103 ) ;
pm_math_Quaternion_xform_ra ( xx + 155 , xx + 237 , xx + 159 ) ; xx [ 10 ] =
xx [ 222 ] * ( xx [ 48 ] + xx [ 104 ] - xx [ 160 ] ) - xx [ 189 ] * ( xx [
109 ] + xx [ 103 ] - xx [ 159 ] ) + xx [ 23 ] - ( xx [ 105 ] - xx [ 161 ] ) -
xx [ 114 ] ; xx [ 39 ] = xx [ 10 ] / xx [ 188 ] ;
pm_math_Quaternion_compose_ra ( xx + 155 , xx + 225 , xx + 103 ) ; xx [ 48 ]
= ( xx [ 104 ] * xx [ 105 ] + xx [ 103 ] * xx [ 106 ] ) * xx [ 24 ] ; xx [ 52
] = ( xx [ 103 ] * xx [ 103 ] + xx [ 104 ] * xx [ 104 ] ) * xx [ 24 ] - xx [
33 ] ; xx [ 53 ] = xx [ 24 ] * ( xx [ 104 ] * xx [ 106 ] - xx [ 103 ] * xx [
105 ] ) ; xx [ 273 ] = fabs ( pm_math_Vector3_dot_ra ( xx + 79 , xx + 116 ) )
; xx [ 274 ] = fabs ( xx [ 147 ] + xx [ 66 ] - xx [ 136 ] - ( xx [ 29 ] + xx
[ 98 ] ) - xx [ 54 ] ) ; xx [ 275 ] = fabs ( xx [ 148 ] + xx [ 67 ] - xx [
137 ] - ( xx [ 30 ] + xx [ 99 ] ) - xx [ 55 ] ) ; xx [ 276 ] = fabs ( xx [
149 ] + xx [ 68 ] - xx [ 138 ] - ( xx [ 31 ] + xx [ 100 ] + xx [ 23 ] ) - xx
[ 102 ] ) ; xx [ 277 ] = fabs ( pm_math_Vector3_dot_ra ( xx + 92 , xx + 167 )
) ; xx [ 278 ] = fabs ( xx [ 24 ] * ( xx [ 208 ] + xx [ 194 ] * xx [ 11 ] ) +
xx [ 229 ] - xx [ 181 ] - ( xx [ 133 ] + xx [ 190 ] ) - xx [ 32 ] ) ; xx [
279 ] = fabs ( ( xx [ 60 ] * xx [ 194 ] * xx [ 197 ] + xx [ 209 ] ) * xx [ 24
] + xx [ 230 ] - xx [ 182 ] - ( xx [ 134 ] + xx [ 191 ] ) - xx [ 35 ] ) ; xx
[ 280 ] = fabs ( ( xx [ 210 ] - xx [ 194 ] * xx [ 21 ] ) * xx [ 24 ] + xx [
231 ] - xx [ 183 ] - ( xx [ 135 ] + xx [ 192 ] + xx [ 23 ] ) + xx [ 108 ] ) ;
xx [ 281 ] = fabs ( ( xx [ 199 ] * xx [ 201 ] + xx [ 198 ] * xx [ 200 ] ) *
xx [ 24 ] ) ; xx [ 282 ] = fabs ( ( xx [ 140 ] * xx [ 142 ] + xx [ 139 ] * xx
[ 141 ] ) * xx [ 24 ] ) ; xx [ 283 ] = fabs ( ( xx [ 39 ] +
sm_core_canonicalAngle ( atan2 ( xx [ 48 ] - xx [ 242 ] * xx [ 52 ] + xx [
222 ] * xx [ 53 ] , xx [ 189 ] * xx [ 52 ] - xx [ 222 ] * xx [ 48 ] + xx [ 53
] ) - xx [ 39 ] ) ) * xx [ 188 ] - xx [ 10 ] ) ; ii [ 0 ] = 273 ; { int ll ;
for ( ll = 274 ; ll < 284 ; ++ ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0
] = ll ; } ii [ 0 ] -= 273 ; xx [ 10 ] = xx [ 273 + ( ii [ 0 ] ) ] ; xx [ 11
] = 1.0e-9 ; if ( xx [ 10 ] > xx [ 11 ] ) { switch ( ii [ 0 ] ) { case 0 :
case 1 : case 2 : case 3 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Revolute9' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 4 : case 5 : case 6 : case 7 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Revolute7' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 8 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Parallel' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 9 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Parallel1' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 10 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'test14/Steering Dynamics/Rack and Pinion Constraint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } } } xx [ 10 ] = xx [ 2 ] * xx [ 261 ] ; xx [ 21 ] = cos (
xx [ 10 ] ) ; xx [ 23 ] = sin ( xx [ 10 ] ) ; xx [ 10 ] = xx [ 1 ] * xx [ 21
] - xx [ 5 ] * xx [ 23 ] ; xx [ 29 ] = xx [ 7 ] * xx [ 23 ] - xx [ 8 ] * xx [
21 ] ; xx [ 30 ] = xx [ 1 ] * xx [ 23 ] + xx [ 5 ] * xx [ 21 ] ; xx [ 31 ] =
xx [ 7 ] * xx [ 21 ] + xx [ 8 ] * xx [ 23 ] ; xx [ 21 ] = - xx [ 31 ] ; xx [
52 ] = xx [ 10 ] ; xx [ 53 ] = xx [ 29 ] ; xx [ 54 ] = xx [ 30 ] ; xx [ 55 ]
= xx [ 21 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 52 , xx + 18 , xx +
66 ) ; xx [ 23 ] = xx [ 2 ] * xx [ 259 ] ; xx [ 32 ] = sin ( xx [ 23 ] ) ; xx
[ 78 ] = cos ( xx [ 23 ] ) ; xx [ 79 ] = - ( xx [ 6 ] * xx [ 32 ] ) ; xx [ 80
] = - ( xx [ 16 ] * xx [ 32 ] ) ; xx [ 81 ] = - ( xx [ 17 ] * xx [ 32 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 25 , xx + 78 , xx + 98 ) ;
pm_math_Quaternion_compose_ra ( xx + 98 , xx + 52 , xx + 78 ) ; xx [ 23 ] =
xx [ 66 ] * xx [ 80 ] ; xx [ 32 ] = xx [ 68 ] * xx [ 81 ] + xx [ 66 ] * xx [
79 ] ; xx [ 35 ] = xx [ 80 ] * xx [ 68 ] ; xx [ 92 ] = - xx [ 23 ] ; xx [ 93
] = xx [ 32 ] ; xx [ 94 ] = - xx [ 35 ] ; pm_math_Vector3_cross_ra ( xx + 79
, xx + 92 , xx + 102 ) ; xx [ 92 ] = xx [ 68 ] + xx [ 24 ] * ( xx [ 102 ] -
xx [ 78 ] * xx [ 23 ] ) ; xx [ 93 ] = ( xx [ 32 ] * xx [ 78 ] + xx [ 103 ] )
* xx [ 24 ] ; xx [ 94 ] = xx [ 24 ] * ( xx [ 104 ] - xx [ 78 ] * xx [ 35 ] )
- xx [ 66 ] ; xx [ 23 ] = xx [ 2 ] * xx [ 265 ] ; xx [ 32 ] = sin ( xx [ 23 ]
) ; xx [ 102 ] = cos ( xx [ 23 ] ) ; xx [ 103 ] = xx [ 34 ] * xx [ 32 ] ; xx
[ 104 ] = xx [ 47 ] * xx [ 32 ] ; xx [ 105 ] = xx [ 32 ] ;
pm_math_Quaternion_compose_ra ( xx + 42 , xx + 102 , xx + 106 ) ;
pm_math_Quaternion_compose_ra ( xx + 12 , xx + 106 , xx + 102 ) ;
pm_math_Quaternion_compose_ra ( xx + 102 , xx + 56 , xx + 133 ) ; xx [ 116 ]
= xx [ 24 ] * ( xx [ 134 ] * xx [ 135 ] - xx [ 133 ] * xx [ 136 ] ) ; xx [
117 ] = xx [ 33 ] - ( xx [ 134 ] * xx [ 134 ] + xx [ 136 ] * xx [ 136 ] ) *
xx [ 24 ] ; xx [ 118 ] = ( xx [ 135 ] * xx [ 136 ] + xx [ 133 ] * xx [ 134 ]
) * xx [ 24 ] ; pm_math_Quaternion_xform_ra ( xx + 102 , xx + 61 , xx + 133 )
; pm_math_Quaternion_compose_ra ( xx + 78 , xx + 71 , xx + 61 ) ; xx [ 71 ] =
( xx [ 62 ] * xx [ 64 ] + xx [ 61 ] * xx [ 63 ] ) * xx [ 24 ] ; xx [ 72 ] =
xx [ 24 ] * ( xx [ 63 ] * xx [ 64 ] - xx [ 61 ] * xx [ 62 ] ) ; xx [ 73 ] =
xx [ 33 ] - ( xx [ 62 ] * xx [ 62 ] + xx [ 63 ] * xx [ 63 ] ) * xx [ 24 ] ;
pm_math_Vector3_cross_ra ( xx + 66 , xx + 82 , xx + 61 ) ;
pm_math_Quaternion_xform_ra ( xx + 78 , xx + 61 , xx + 66 ) ; xx [ 61 ] = xx
[ 29 ] ; xx [ 62 ] = xx [ 30 ] ; xx [ 63 ] = xx [ 21 ] ; xx [ 21 ] = xx [ 31
] * xx [ 4 ] ; xx [ 23 ] = xx [ 31 ] * xx [ 88 ] ; xx [ 32 ] = xx [ 30 ] * xx
[ 88 ] ; xx [ 35 ] = xx [ 4 ] * xx [ 29 ] + xx [ 32 ] ; xx [ 136 ] = xx [ 21
] ; xx [ 137 ] = xx [ 23 ] ; xx [ 138 ] = xx [ 35 ] ;
pm_math_Vector3_cross_ra ( xx + 61 , xx + 136 , xx + 139 ) ; xx [ 39 ] = xx [
24 ] * ( xx [ 139 ] + xx [ 21 ] * xx [ 10 ] ) ; xx [ 21 ] = ( xx [ 23 ] * xx
[ 10 ] + xx [ 140 ] ) * xx [ 24 ] ; xx [ 23 ] = xx [ 86 ] - ( xx [ 10 ] * xx
[ 35 ] + xx [ 141 ] ) * xx [ 24 ] ; xx [ 61 ] = - ( xx [ 77 ] + xx [ 39 ] -
xx [ 88 ] ) ; xx [ 62 ] = - ( xx [ 85 ] + xx [ 4 ] + xx [ 21 ] ) ; xx [ 63 ]
= xx [ 23 ] ; pm_math_Vector3_cross_ra ( xx + 18 , xx + 61 , xx + 85 ) ;
pm_math_Quaternion_xform_ra ( xx + 98 , xx + 85 , xx + 18 ) ;
pm_math_Quaternion_xform_ra ( xx + 98 , xx + 95 , xx + 85 ) ; xx [ 4 ] = xx [
75 ] * xx [ 79 ] - xx [ 76 ] * xx [ 81 ] ; xx [ 35 ] = xx [ 76 ] * xx [ 80 ]
; xx [ 95 ] = - ( xx [ 75 ] * xx [ 80 ] ) ; xx [ 96 ] = xx [ 4 ] ; xx [ 97 ]
= xx [ 35 ] ; pm_math_Vector3_cross_ra ( xx + 79 , xx + 95 , xx + 136 ) ; xx
[ 48 ] = xx [ 88 ] * xx [ 29 ] ; xx [ 64 ] = xx [ 31 ] * xx [ 48 ] - xx [ 32
] * xx [ 10 ] ; xx [ 69 ] = xx [ 64 ] * xx [ 24 ] ; xx [ 74 ] = xx [ 31 ] *
xx [ 32 ] + xx [ 48 ] * xx [ 10 ] ; xx [ 10 ] = xx [ 24 ] * xx [ 74 ] ; xx [
31 ] = ( xx [ 48 ] * xx [ 29 ] + xx [ 30 ] * xx [ 32 ] ) * xx [ 24 ] - xx [
88 ] ; xx [ 95 ] = xx [ 69 ] ; xx [ 96 ] = xx [ 10 ] ; xx [ 97 ] = xx [ 31 ]
; pm_math_Quaternion_xform_ra ( xx + 98 , xx + 95 , xx + 139 ) ;
pm_math_Quaternion_xform_ra ( xx + 102 , xx + 89 , xx + 95 ) ;
pm_math_Quaternion_xform_ra ( xx + 106 , xx + 110 , xx + 88 ) ;
pm_math_Quaternion_xform_ra ( xx + 12 , xx + 88 , xx + 106 ) ; xx [ 29 ] = xx
[ 2 ] * xx [ 255 ] ; xx [ 30 ] = sin ( xx [ 29 ] ) ; xx [ 109 ] = cos ( xx [
29 ] ) ; xx [ 110 ] = - ( xx [ 113 ] * xx [ 30 ] ) ; xx [ 111 ] = xx [ 115 ]
* xx [ 30 ] ; xx [ 112 ] = xx [ 123 ] * xx [ 30 ] ;
pm_math_Quaternion_compose_ra ( xx + 119 , xx + 109 , xx + 155 ) ; xx [ 29 ]
= xx [ 2 ] * xx [ 257 ] ; xx [ 30 ] = cos ( xx [ 29 ] ) ; xx [ 32 ] = sin (
xx [ 29 ] ) ; xx [ 29 ] = xx [ 3 ] * xx [ 30 ] + xx [ 125 ] * xx [ 32 ] ; xx
[ 48 ] = xx [ 127 ] * xx [ 30 ] + xx [ 132 ] * xx [ 32 ] ; xx [ 77 ] = xx [
125 ] * xx [ 30 ] - xx [ 3 ] * xx [ 32 ] ; xx [ 91 ] = xx [ 127 ] * xx [ 32 ]
- xx [ 132 ] * xx [ 30 ] ; xx [ 109 ] = - xx [ 29 ] ; xx [ 110 ] = xx [ 48 ]
; xx [ 111 ] = xx [ 77 ] ; xx [ 112 ] = xx [ 91 ] ;
pm_math_Quaternion_compose_ra ( xx + 155 , xx + 109 , xx + 159 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 109 , xx + 144 , xx + 147 ) ; xx [
30 ] = xx [ 147 ] * xx [ 161 ] ; xx [ 32 ] = xx [ 149 ] * xx [ 162 ] + xx [
147 ] * xx [ 160 ] ; xx [ 114 ] = xx [ 161 ] * xx [ 149 ] ; xx [ 167 ] = xx [
30 ] ; xx [ 168 ] = - xx [ 32 ] ; xx [ 169 ] = xx [ 114 ] ;
pm_math_Vector3_cross_ra ( xx + 160 , xx + 167 , xx + 170 ) ; xx [ 167 ] = (
xx [ 159 ] * xx [ 30 ] + xx [ 170 ] ) * xx [ 24 ] - xx [ 149 ] ; xx [ 168 ] =
xx [ 24 ] * ( xx [ 171 ] - xx [ 32 ] * xx [ 159 ] ) ; xx [ 169 ] = xx [ 147 ]
+ ( xx [ 159 ] * xx [ 114 ] + xx [ 172 ] ) * xx [ 24 ] ; xx [ 30 ] = xx [ 2 ]
* xx [ 267 ] ; xx [ 32 ] = sin ( xx [ 30 ] ) ; xx [ 190 ] = cos ( xx [ 30 ] )
; xx [ 191 ] = - ( xx [ 126 ] * xx [ 32 ] ) ; xx [ 192 ] = - ( xx [ 154 ] *
xx [ 32 ] ) ; xx [ 193 ] = - xx [ 32 ] ; pm_math_Quaternion_compose_ra ( xx +
150 , xx + 190 , xx + 194 ) ; pm_math_Quaternion_compose_ra ( xx + 12 , xx +
194 , xx + 190 ) ; pm_math_Quaternion_compose_ra ( xx + 190 , xx + 56 , xx +
198 ) ; xx [ 56 ] = xx [ 24 ] * ( xx [ 199 ] * xx [ 200 ] - xx [ 198 ] * xx [
201 ] ) ; xx [ 57 ] = xx [ 33 ] - ( xx [ 199 ] * xx [ 199 ] + xx [ 201 ] * xx
[ 201 ] ) * xx [ 24 ] ; xx [ 58 ] = ( xx [ 200 ] * xx [ 201 ] + xx [ 198 ] *
xx [ 199 ] ) * xx [ 24 ] ; pm_math_Quaternion_xform_ra ( xx + 190 , xx + 163
, xx + 170 ) ; pm_math_Quaternion_compose_ra ( xx + 159 , xx + 173 , xx + 198
) ; xx [ 163 ] = ( xx [ 199 ] * xx [ 201 ] + xx [ 198 ] * xx [ 200 ] ) * xx [
24 ] ; xx [ 164 ] = xx [ 24 ] * ( xx [ 200 ] * xx [ 201 ] - xx [ 198 ] * xx [
199 ] ) ; xx [ 165 ] = xx [ 33 ] - ( xx [ 199 ] * xx [ 199 ] + xx [ 200 ] *
xx [ 200 ] ) * xx [ 24 ] ; xx [ 173 ] = xx [ 46 ] * xx [ 149 ] ; xx [ 174 ] =
xx [ 60 ] * xx [ 149 ] ; xx [ 175 ] = - ( xx [ 46 ] * xx [ 147 ] + xx [ 60 ]
* xx [ 148 ] ) ; pm_math_Quaternion_xform_ra ( xx + 159 , xx + 173 , xx + 147
) ; xx [ 173 ] = xx [ 48 ] ; xx [ 174 ] = xx [ 77 ] ; xx [ 175 ] = xx [ 91 ]
; xx [ 30 ] = xx [ 91 ] * xx [ 124 ] ; xx [ 32 ] = xx [ 91 ] * xx [ 166 ] ;
xx [ 59 ] = xx [ 77 ] * xx [ 166 ] ; xx [ 114 ] = xx [ 124 ] * xx [ 48 ] + xx
[ 59 ] ; xx [ 181 ] = - xx [ 30 ] ; xx [ 182 ] = - xx [ 32 ] ; xx [ 183 ] =
xx [ 114 ] ; pm_math_Vector3_cross_ra ( xx + 173 , xx + 181 , xx + 198 ) ; xx
[ 131 ] = xx [ 24 ] * ( xx [ 198 ] + xx [ 30 ] * xx [ 29 ] ) ; xx [ 30 ] = (
xx [ 32 ] * xx [ 29 ] + xx [ 199 ] ) * xx [ 24 ] ; xx [ 32 ] = xx [ 184 ] - (
xx [ 200 ] - xx [ 114 ] * xx [ 29 ] ) * xx [ 24 ] ; xx [ 173 ] = xx [ 70 ] -
( xx [ 131 ] - xx [ 166 ] ) ; xx [ 174 ] = - ( xx [ 180 ] + xx [ 124 ] + xx [
30 ] ) ; xx [ 175 ] = xx [ 32 ] ; pm_math_Vector3_cross_ra ( xx + 144 , xx +
173 , xx + 180 ) ; pm_math_Quaternion_xform_ra ( xx + 155 , xx + 180 , xx +
142 ) ; pm_math_Quaternion_xform_ra ( xx + 155 , xx + 185 , xx + 180 ) ; xx [
70 ] = xx [ 166 ] * xx [ 48 ] ; xx [ 114 ] = xx [ 59 ] * xx [ 29 ] - xx [ 91
] * xx [ 70 ] ; xx [ 124 ] = xx [ 114 ] * xx [ 24 ] ; xx [ 145 ] = xx [ 91 ]
* xx [ 59 ] + xx [ 70 ] * xx [ 29 ] ; xx [ 29 ] = xx [ 24 ] * xx [ 145 ] ; xx
[ 91 ] = ( xx [ 70 ] * xx [ 48 ] + xx [ 77 ] * xx [ 59 ] ) * xx [ 24 ] - xx [
166 ] ; xx [ 183 ] = xx [ 124 ] ; xx [ 184 ] = - xx [ 29 ] ; xx [ 185 ] = xx
[ 91 ] ; pm_math_Quaternion_xform_ra ( xx + 155 , xx + 183 , xx + 198 ) ; xx
[ 48 ] = xx [ 60 ] * xx [ 161 ] ; xx [ 59 ] = xx [ 60 ] * xx [ 160 ] ;
pm_math_Quaternion_xform_ra ( xx + 190 , xx + 177 , xx + 183 ) ;
pm_math_Quaternion_xform_ra ( xx + 194 , xx + 202 , xx + 176 ) ;
pm_math_Quaternion_xform_ra ( xx + 12 , xx + 176 , xx + 194 ) ;
pm_math_Quaternion_xform_ra ( xx + 190 , xx + 205 , xx + 201 ) ;
pm_math_Quaternion_xform_ra ( xx + 102 , xx + 212 , xx + 202 ) ; xx [ 70 ] =
xx [ 2 ] * xx [ 253 ] ; xx [ 77 ] = sin ( xx [ 70 ] ) ; xx [ 203 ] = cos ( xx
[ 70 ] ) ; xx [ 204 ] = - ( xx [ 221 ] * xx [ 77 ] ) ; xx [ 205 ] = - ( xx [
223 ] * xx [ 77 ] ) ; xx [ 206 ] = - ( xx [ 224 ] * xx [ 77 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 216 , xx + 203 , xx + 207 ) ;
pm_math_Quaternion_compose_ra ( xx + 207 , xx + 225 , xx + 203 ) ; xx [ 70 ]
= xx [ 33 ] - ( xx [ 205 ] * xx [ 205 ] + xx [ 206 ] * xx [ 206 ] ) * xx [ 24
] ; xx [ 77 ] = ( xx [ 204 ] * xx [ 205 ] + xx [ 203 ] * xx [ 206 ] ) * xx [
24 ] ; xx [ 146 ] = xx [ 222 ] * xx [ 77 ] ; xx [ 166 ] = xx [ 24 ] * ( xx [
204 ] * xx [ 206 ] - xx [ 203 ] * xx [ 205 ] ) ; xx [ 179 ] = xx [ 189 ] * xx
[ 70 ] - xx [ 146 ] + xx [ 166 ] ; pm_math_Quaternion_xform_ra ( xx + 207 ,
xx + 234 , xx + 211 ) ; xx [ 186 ] = xx [ 222 ] * xx [ 166 ] ; xx [ 187 ] =
xx [ 77 ] - xx [ 242 ] * xx [ 70 ] + xx [ 186 ] ; xx [ 70 ] = xx [ 187 ] * xx
[ 187 ] + xx [ 179 ] * xx [ 179 ] ; pm_math_Quaternion_xform_ra ( xx + 207 ,
xx + 244 , xx + 214 ) ; pm_math_Quaternion_xform_ra ( xx + 207 , xx + 250 ,
xx + 217 ) ; xx [ 273 ] = xx [ 0 ] ; xx [ 274 ] = xx [ 0 ] ; xx [ 275 ] = xx
[ 0 ] ; xx [ 276 ] = pm_math_Vector3_dot_ra ( xx + 92 , xx + 116 ) ; xx [ 277
] = xx [ 0 ] ; xx [ 278 ] = xx [ 0 ] ; xx [ 279 ] = pm_math_Vector3_dot_ra (
xx + 133 , xx + 71 ) ; xx [ 280 ] = xx [ 0 ] ; xx [ 281 ] = xx [ 0 ] ; xx [
282 ] = xx [ 0 ] ; xx [ 283 ] = xx [ 0 ] ; xx [ 284 ] = xx [ 66 ] + xx [ 18 ]
+ xx [ 85 ] ; xx [ 285 ] = ( xx [ 136 ] - xx [ 75 ] * xx [ 78 ] * xx [ 80 ] )
* xx [ 24 ] + xx [ 139 ] - xx [ 76 ] ; xx [ 286 ] = xx [ 0 ] ; xx [ 287 ] = -
( xx [ 95 ] + xx [ 106 ] ) ; xx [ 288 ] = xx [ 0 ] ; xx [ 289 ] = xx [ 0 ] ;
xx [ 290 ] = xx [ 0 ] ; xx [ 291 ] = xx [ 0 ] ; xx [ 292 ] = xx [ 67 ] + xx [
19 ] + xx [ 86 ] ; xx [ 293 ] = ( xx [ 78 ] * xx [ 4 ] + xx [ 137 ] ) * xx [
24 ] + xx [ 140 ] ; xx [ 294 ] = xx [ 0 ] ; xx [ 295 ] = - ( xx [ 96 ] + xx [
107 ] ) ; xx [ 296 ] = xx [ 0 ] ; xx [ 297 ] = xx [ 0 ] ; xx [ 298 ] = xx [ 0
] ; xx [ 299 ] = xx [ 0 ] ; xx [ 300 ] = xx [ 68 ] + xx [ 20 ] + xx [ 87 ] ;
xx [ 301 ] = xx [ 24 ] * ( xx [ 138 ] + xx [ 78 ] * xx [ 35 ] ) + xx [ 141 ]
- xx [ 75 ] ; xx [ 302 ] = xx [ 33 ] ; xx [ 303 ] = - ( xx [ 97 ] + xx [ 108
] ) ; xx [ 304 ] = xx [ 0 ] ; xx [ 305 ] = xx [ 0 ] ; xx [ 306 ] =
pm_math_Vector3_dot_ra ( xx + 167 , xx + 56 ) ; xx [ 307 ] = xx [ 0 ] ; xx [
308 ] = xx [ 0 ] ; xx [ 309 ] = xx [ 0 ] ; xx [ 310 ] = xx [ 0 ] ; xx [ 311 ]
= xx [ 0 ] ; xx [ 312 ] = pm_math_Vector3_dot_ra ( xx + 170 , xx + 163 ) ; xx
[ 313 ] = xx [ 0 ] ; xx [ 314 ] = xx [ 147 ] + xx [ 142 ] + xx [ 180 ] ; xx [
315 ] = xx [ 198 ] - ( xx [ 159 ] * xx [ 48 ] + xx [ 162 ] * xx [ 59 ] ) * xx
[ 24 ] ; xx [ 316 ] = xx [ 0 ] ; xx [ 317 ] = xx [ 0 ] ; xx [ 318 ] = xx [ 0
] ; xx [ 319 ] = xx [ 0 ] ; xx [ 320 ] = - ( xx [ 183 ] + xx [ 194 ] ) ; xx [
321 ] = xx [ 0 ] ; xx [ 322 ] = xx [ 148 ] + xx [ 143 ] + xx [ 181 ] ; xx [
323 ] = xx [ 24 ] * ( xx [ 159 ] * xx [ 59 ] - xx [ 162 ] * xx [ 48 ] ) + xx
[ 199 ] ; xx [ 324 ] = xx [ 0 ] ; xx [ 325 ] = xx [ 0 ] ; xx [ 326 ] = xx [ 0
] ; xx [ 327 ] = xx [ 0 ] ; xx [ 328 ] = - ( xx [ 184 ] + xx [ 195 ] ) ; xx [
329 ] = xx [ 0 ] ; xx [ 330 ] = xx [ 149 ] + xx [ 144 ] + xx [ 182 ] ; xx [
331 ] = xx [ 200 ] + ( xx [ 160 ] * xx [ 59 ] + xx [ 161 ] * xx [ 48 ] ) * xx
[ 24 ] - xx [ 60 ] ; xx [ 332 ] = xx [ 0 ] ; xx [ 333 ] = xx [ 0 ] ; xx [ 334
] = xx [ 33 ] ; xx [ 335 ] = xx [ 0 ] ; xx [ 336 ] = - ( xx [ 185 ] + xx [
196 ] ) ; xx [ 337 ] = xx [ 0 ] ; xx [ 338 ] = xx [ 0 ] ; xx [ 339 ] = xx [ 0
] ; xx [ 340 ] = xx [ 0 ] ; xx [ 341 ] = xx [ 0 ] ; xx [ 342 ] = xx [ 0 ] ;
xx [ 343 ] = xx [ 0 ] ; xx [ 344 ] = xx [ 201 ] ; xx [ 345 ] = xx [ 0 ] ; xx
[ 346 ] = xx [ 0 ] ; xx [ 347 ] = xx [ 0 ] ; xx [ 348 ] = xx [ 0 ] ; xx [ 349
] = xx [ 0 ] ; xx [ 350 ] = xx [ 0 ] ; xx [ 351 ] = xx [ 202 ] ; xx [ 352 ] =
xx [ 0 ] ; xx [ 353 ] = xx [ 188 ] * ( xx [ 179 ] * ( xx [ 212 ] - xx [ 242 ]
* xx [ 211 ] + xx [ 222 ] * xx [ 213 ] ) - ( xx [ 189 ] * xx [ 211 ] - xx [
222 ] * xx [ 212 ] + xx [ 213 ] ) * xx [ 187 ] ) / xx [ 70 ] + ( xx [ 214 ] +
xx [ 217 ] ) * xx [ 189 ] - ( xx [ 215 ] + xx [ 218 ] ) * xx [ 222 ] + xx [
216 ] + xx [ 219 ] ; xx [ 354 ] = xx [ 0 ] ; xx [ 355 ] = xx [ 0 ] ; xx [ 356
] = xx [ 0 ] ; xx [ 357 ] = xx [ 0 ] ; xx [ 358 ] = xx [ 33 ] ; xx [ 359 ] =
xx [ 0 ] ; xx [ 360 ] = xx [ 0 ] ; xx [ 18 ] = - ( xx [ 6 ] * xx [ 260 ] ) ;
xx [ 19 ] = - ( xx [ 16 ] * xx [ 260 ] ) ; xx [ 20 ] = - ( xx [ 17 ] * xx [
260 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 52 , xx + 18 , xx + 66 )
; xx [ 0 ] = xx [ 66 ] * xx [ 80 ] ; xx [ 4 ] = xx [ 68 ] * xx [ 81 ] + xx [
66 ] * xx [ 79 ] ; xx [ 35 ] = xx [ 80 ] * xx [ 68 ] ; xx [ 92 ] = - xx [ 0 ]
; xx [ 93 ] = xx [ 4 ] ; xx [ 94 ] = - xx [ 35 ] ; pm_math_Vector3_cross_ra (
xx + 79 , xx + 92 , xx + 95 ) ; xx [ 92 ] = xx [ 68 ] + xx [ 24 ] * ( xx [ 95
] - xx [ 78 ] * xx [ 0 ] ) ; xx [ 93 ] = ( xx [ 4 ] * xx [ 78 ] + xx [ 96 ] )
* xx [ 24 ] ; xx [ 94 ] = xx [ 24 ] * ( xx [ 97 ] - xx [ 78 ] * xx [ 35 ] ) -
xx [ 66 ] ; xx [ 95 ] = xx [ 34 ] * xx [ 266 ] ; xx [ 96 ] = xx [ 47 ] * xx [
266 ] ; xx [ 97 ] = xx [ 266 ] ; xx [ 106 ] = 0.9999999999934777 ; xx [ 107 ]
= 3.609878879817785e-6 ; xx [ 108 ] = - 1.171965347546156e-7 ;
pm_math_Vector3_cross_ra ( xx + 95 , xx + 106 , xx + 133 ) ;
pm_math_Quaternion_xform_ra ( xx + 102 , xx + 133 , xx + 136 ) ;
pm_math_Vector3_cross_ra ( xx + 95 , xx + 36 , xx + 133 ) ;
pm_math_Quaternion_xform_ra ( xx + 102 , xx + 133 , xx + 139 ) ; xx [ 133 ] =
xx [ 88 ] * xx [ 266 ] ; xx [ 134 ] = xx [ 89 ] * xx [ 266 ] ; xx [ 135 ] =
xx [ 90 ] * xx [ 266 ] ; pm_math_Quaternion_xform_ra ( xx + 12 , xx + 133 ,
xx + 142 ) ; xx [ 133 ] = xx [ 66 ] ; xx [ 134 ] = xx [ 67 ] + xx [ 262 ] ;
xx [ 135 ] = xx [ 68 ] ; pm_math_Vector3_cross_ra ( xx + 133 , xx + 82 , xx +
66 ) ; pm_math_Quaternion_xform_ra ( xx + 78 , xx + 66 , xx + 133 ) ;
pm_math_Vector3_cross_ra ( xx + 18 , xx + 61 , xx + 66 ) ; xx [ 18 ] = xx [
24 ] * xx [ 64 ] * xx [ 262 ] + xx [ 66 ] ; xx [ 19 ] = xx [ 24 ] * xx [ 262
] * xx [ 74 ] + xx [ 67 ] ; xx [ 20 ] = xx [ 262 ] * xx [ 31 ] + xx [ 68 ] ;
pm_math_Quaternion_xform_ra ( xx + 98 , xx + 18 , xx + 61 ) ; xx [ 18 ] = - (
xx [ 113 ] * xx [ 256 ] ) ; xx [ 19 ] = xx [ 115 ] * xx [ 256 ] ; xx [ 20 ] =
xx [ 123 ] * xx [ 256 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 109 , xx
+ 18 , xx + 66 ) ; xx [ 0 ] = xx [ 66 ] * xx [ 161 ] ; xx [ 4 ] = xx [ 68 ] *
xx [ 162 ] + xx [ 66 ] * xx [ 160 ] ; xx [ 35 ] = xx [ 161 ] * xx [ 68 ] ; xx
[ 74 ] = xx [ 0 ] ; xx [ 75 ] = - xx [ 4 ] ; xx [ 76 ] = xx [ 35 ] ;
pm_math_Vector3_cross_ra ( xx + 160 , xx + 74 , xx + 147 ) ; xx [ 74 ] = ( xx
[ 159 ] * xx [ 0 ] + xx [ 147 ] ) * xx [ 24 ] - xx [ 68 ] ; xx [ 75 ] = xx [
24 ] * ( xx [ 148 ] - xx [ 4 ] * xx [ 159 ] ) ; xx [ 76 ] = xx [ 66 ] + ( xx
[ 159 ] * xx [ 35 ] + xx [ 149 ] ) * xx [ 24 ] ; xx [ 147 ] = - ( xx [ 126 ]
* xx [ 268 ] ) ; xx [ 148 ] = - ( xx [ 154 ] * xx [ 268 ] ) ; xx [ 149 ] = -
xx [ 268 ] ; pm_math_Vector3_cross_ra ( xx + 147 , xx + 106 , xx + 167 ) ;
pm_math_Quaternion_xform_ra ( xx + 190 , xx + 167 , xx + 170 ) ;
pm_math_Vector3_cross_ra ( xx + 147 , xx + 128 , xx + 167 ) ;
pm_math_Quaternion_xform_ra ( xx + 190 , xx + 167 , xx + 183 ) ; xx [ 167 ] =
xx [ 176 ] * xx [ 268 ] ; xx [ 168 ] = xx [ 177 ] * xx [ 268 ] ; xx [ 169 ] =
xx [ 178 ] * xx [ 268 ] ; pm_math_Quaternion_xform_ra ( xx + 12 , xx + 167 ,
xx + 194 ) ; xx [ 167 ] = xx [ 46 ] * xx [ 68 ] ; xx [ 168 ] = xx [ 60 ] * xx
[ 68 ] ; xx [ 169 ] = - ( xx [ 46 ] * xx [ 66 ] + ( xx [ 67 ] + xx [ 258 ] )
* xx [ 60 ] ) ; pm_math_Quaternion_xform_ra ( xx + 159 , xx + 167 , xx + 66 )
; pm_math_Vector3_cross_ra ( xx + 18 , xx + 173 , xx + 167 ) ; xx [ 18 ] = xx
[ 24 ] * xx [ 114 ] * xx [ 258 ] + xx [ 167 ] ; xx [ 19 ] = xx [ 168 ] - xx [
24 ] * xx [ 258 ] * xx [ 145 ] ; xx [ 20 ] = xx [ 258 ] * xx [ 91 ] + xx [
169 ] ; pm_math_Quaternion_xform_ra ( xx + 155 , xx + 18 , xx + 167 ) ; xx [
18 ] = - 3.609878937216315e-6 ; xx [ 19 ] = 0.9999999999933915 ; xx [ 20 ] =
- 4.313584738291354e-7 ; pm_math_Vector3_cross_ra ( xx + 147 , xx + 18 , xx +
173 ) ; pm_math_Quaternion_xform_ra ( xx + 190 , xx + 173 , xx + 147 ) ; xx [
173 ] = 3.609878923338528e-6 ; xx [ 174 ] = - 0.9999999999933913 ; xx [ 175 ]
= 4.313584749393584e-7 ; pm_math_Vector3_cross_ra ( xx + 95 , xx + 173 , xx +
197 ) ; pm_math_Quaternion_xform_ra ( xx + 102 , xx + 197 , xx + 95 ) ; xx [
197 ] = - ( xx [ 221 ] * xx [ 254 ] ) ; xx [ 198 ] = - ( xx [ 223 ] * xx [
254 ] ) ; xx [ 199 ] = - ( xx [ 224 ] * xx [ 254 ] ) ; xx [ 200 ] =
0.9999985523541615 ; xx [ 201 ] = - 2.130267675773651e-5 ; xx [ 202 ] = -
1.701421692958279e-3 ; pm_math_Vector3_cross_ra ( xx + 197 , xx + 200 , xx +
211 ) ; pm_math_Quaternion_xform_ra ( xx + 207 , xx + 211 , xx + 214 ) ;
pm_math_Vector3_cross_ra ( xx + 197 , xx + 49 , xx + 211 ) ;
pm_math_Quaternion_xform_ra ( xx + 207 , xx + 211 , xx + 197 ) ; xx [ 225 ] =
- ( pm_math_Vector3_dot_ra ( xx + 92 , xx + 116 ) + pm_math_Vector3_dot_ra (
xx + 136 , xx + 71 ) ) ; xx [ 226 ] = xx [ 139 ] + xx [ 142 ] - ( xx [ 133 ]
+ xx [ 85 ] * xx [ 260 ] + xx [ 61 ] ) ; xx [ 227 ] = xx [ 140 ] + xx [ 143 ]
- ( xx [ 134 ] + xx [ 86 ] * xx [ 260 ] + xx [ 62 ] ) ; xx [ 228 ] = xx [ 141
] + xx [ 144 ] - xx [ 264 ] - ( xx [ 135 ] + xx [ 87 ] * xx [ 260 ] + xx [ 63
] ) ; xx [ 229 ] = - ( pm_math_Vector3_dot_ra ( xx + 74 , xx + 56 ) +
pm_math_Vector3_dot_ra ( xx + 170 , xx + 163 ) ) ; xx [ 230 ] = xx [ 183 ] +
xx [ 194 ] - ( xx [ 66 ] + xx [ 180 ] * xx [ 256 ] + xx [ 167 ] ) ; xx [ 231
] = xx [ 184 ] + xx [ 195 ] - ( xx [ 67 ] + xx [ 181 ] * xx [ 256 ] + xx [
168 ] ) ; xx [ 232 ] = xx [ 185 ] + xx [ 196 ] - xx [ 264 ] - ( xx [ 68 ] +
xx [ 182 ] * xx [ 256 ] + xx [ 169 ] ) ; xx [ 233 ] = - xx [ 147 ] ; xx [ 234
] = - xx [ 95 ] ; xx [ 235 ] = - ( xx [ 188 ] * ( xx [ 179 ] * ( xx [ 215 ] -
xx [ 242 ] * xx [ 214 ] + xx [ 222 ] * xx [ 216 ] ) - ( xx [ 189 ] * xx [ 214
] - xx [ 222 ] * xx [ 215 ] + xx [ 216 ] ) * xx [ 187 ] ) / xx [ 70 ] + ( xx
[ 197 ] + xx [ 217 ] * xx [ 254 ] ) * xx [ 189 ] - ( xx [ 198 ] + xx [ 218 ]
* xx [ 254 ] ) * xx [ 222 ] + xx [ 264 ] + xx [ 199 ] + xx [ 254 ] * xx [ 219
] ) ; memcpy ( xx + 361 , xx + 273 , 88 * sizeof ( double ) ) ;
factorAndSolveWide ( 11 , 8 , xx + 361 , xx + 449 , xx + 460 , ii + 0 , xx +
225 , xx [ 9 ] , xx + 133 ) ; xx [ 0 ] = xx [ 254 ] + xx [ 133 ] ; xx [ 4 ] =
xx [ 256 ] + xx [ 134 ] ; xx [ 9 ] = xx [ 258 ] + xx [ 135 ] ; xx [ 35 ] = xx
[ 260 ] + xx [ 136 ] ; xx [ 48 ] = xx [ 262 ] + xx [ 137 ] ; xx [ 59 ] = xx [
264 ] + xx [ 138 ] ; xx [ 61 ] = xx [ 266 ] + xx [ 139 ] ; xx [ 62 ] = xx [
268 ] + xx [ 140 ] ; xx [ 273 ] = xx [ 253 ] ; xx [ 274 ] = xx [ 0 ] ; xx [
275 ] = xx [ 255 ] ; xx [ 276 ] = xx [ 4 ] ; xx [ 277 ] = xx [ 257 ] ; xx [
278 ] = xx [ 9 ] ; xx [ 279 ] = xx [ 259 ] ; xx [ 280 ] = xx [ 35 ] ; xx [
281 ] = xx [ 261 ] ; xx [ 282 ] = xx [ 48 ] ; xx [ 283 ] = xx [ 263 ] ; xx [
284 ] = xx [ 59 ] ; xx [ 285 ] = xx [ 265 ] ; xx [ 286 ] = xx [ 61 ] ; xx [
287 ] = xx [ 267 ] ; xx [ 288 ] = xx [ 62 ] ; xx [ 289 ] = xx [ 269 ] ; xx [
290 ] = xx [ 270 ] ; xx [ 291 ] = xx [ 271 ] ; xx [ 292 ] = xx [ 272 ] ; xx [
66 ] = - ( xx [ 35 ] * xx [ 6 ] ) ; xx [ 67 ] = - ( xx [ 35 ] * xx [ 16 ] ) ;
xx [ 68 ] = - ( xx [ 35 ] * xx [ 17 ] ) ; pm_math_Quaternion_inverseXform_ra
( xx + 52 , xx + 66 , xx + 74 ) ; xx [ 52 ] = xx [ 74 ] * xx [ 80 ] ; xx [ 53
] = xx [ 76 ] * xx [ 81 ] + xx [ 74 ] * xx [ 79 ] ; xx [ 54 ] = xx [ 80 ] *
xx [ 76 ] ; xx [ 92 ] = - xx [ 52 ] ; xx [ 93 ] = xx [ 53 ] ; xx [ 94 ] = -
xx [ 54 ] ; pm_math_Vector3_cross_ra ( xx + 79 , xx + 92 , xx + 95 ) ; xx [
92 ] = xx [ 76 ] + xx [ 24 ] * ( xx [ 95 ] - xx [ 78 ] * xx [ 52 ] ) ; xx [
93 ] = ( xx [ 53 ] * xx [ 78 ] + xx [ 96 ] ) * xx [ 24 ] ; xx [ 94 ] = xx [
24 ] * ( xx [ 97 ] - xx [ 78 ] * xx [ 54 ] ) - xx [ 74 ] ; xx [ 52 ] = xx [
61 ] * xx [ 34 ] ; xx [ 53 ] = xx [ 61 ] * xx [ 47 ] ; xx [ 54 ] = xx [ 61 ]
; pm_math_Vector3_cross_ra ( xx + 52 , xx + 106 , xx + 95 ) ;
pm_math_Quaternion_xform_ra ( xx + 102 , xx + 95 , xx + 133 ) ; xx [ 95 ] =
xx [ 74 ] ; xx [ 96 ] = xx [ 75 ] + xx [ 48 ] ; xx [ 97 ] = xx [ 76 ] ;
pm_math_Vector3_cross_ra ( xx + 95 , xx + 82 , xx + 74 ) ;
pm_math_Quaternion_xform_ra ( xx + 78 , xx + 74 , xx + 82 ) ; xx [ 74 ] = - (
xx [ 22 ] + xx [ 39 ] ) ; xx [ 75 ] = - ( xx [ 65 ] + xx [ 21 ] ) ; xx [ 76 ]
= xx [ 23 ] ; pm_math_Vector3_cross_ra ( xx + 66 , xx + 74 , xx + 21 ) ; xx [
63 ] = xx [ 48 ] * xx [ 69 ] + xx [ 21 ] ; xx [ 64 ] = xx [ 48 ] * xx [ 10 ]
+ xx [ 22 ] ; xx [ 65 ] = xx [ 48 ] * xx [ 31 ] + xx [ 23 ] ;
pm_math_Quaternion_xform_ra ( xx + 98 , xx + 63 , xx + 21 ) ;
pm_math_Vector3_cross_ra ( xx + 52 , xx + 36 , xx + 63 ) ;
pm_math_Quaternion_xform_ra ( xx + 102 , xx + 63 , xx + 36 ) ; xx [ 63 ] = xx
[ 61 ] * xx [ 88 ] ; xx [ 64 ] = xx [ 61 ] * xx [ 89 ] ; xx [ 65 ] = xx [ 61
] * xx [ 90 ] ; pm_math_Quaternion_xform_ra ( xx + 12 , xx + 63 , xx + 66 ) ;
xx [ 63 ] = - ( xx [ 4 ] * xx [ 113 ] ) ; xx [ 64 ] = xx [ 4 ] * xx [ 115 ] ;
xx [ 65 ] = xx [ 4 ] * xx [ 123 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
109 , xx + 63 , xx + 74 ) ; xx [ 10 ] = xx [ 74 ] * xx [ 161 ] ; xx [ 31 ] =
xx [ 76 ] * xx [ 162 ] + xx [ 74 ] * xx [ 160 ] ; xx [ 39 ] = xx [ 161 ] * xx
[ 76 ] ; xx [ 78 ] = xx [ 10 ] ; xx [ 79 ] = - xx [ 31 ] ; xx [ 80 ] = xx [
39 ] ; pm_math_Vector3_cross_ra ( xx + 160 , xx + 78 , xx + 88 ) ; xx [ 78 ]
= ( xx [ 159 ] * xx [ 10 ] + xx [ 88 ] ) * xx [ 24 ] - xx [ 76 ] ; xx [ 79 ]
= xx [ 24 ] * ( xx [ 89 ] - xx [ 31 ] * xx [ 159 ] ) ; xx [ 80 ] = xx [ 74 ]
+ ( xx [ 159 ] * xx [ 39 ] + xx [ 90 ] ) * xx [ 24 ] ; xx [ 88 ] = - ( xx [
62 ] * xx [ 126 ] ) ; xx [ 89 ] = - ( xx [ 62 ] * xx [ 154 ] ) ; xx [ 90 ] =
- xx [ 62 ] ; pm_math_Vector3_cross_ra ( xx + 88 , xx + 106 , xx + 95 ) ;
pm_math_Quaternion_xform_ra ( xx + 190 , xx + 95 , xx + 98 ) ; xx [ 95 ] = xx
[ 46 ] * xx [ 76 ] ; xx [ 96 ] = xx [ 60 ] * xx [ 76 ] ; xx [ 97 ] = - ( xx [
46 ] * xx [ 74 ] + ( xx [ 75 ] + xx [ 9 ] ) * xx [ 60 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 159 , xx + 95 , xx + 74 ) ; xx [ 95 ] = xx
[ 41 ] - xx [ 131 ] ; xx [ 96 ] = - ( xx [ 40 ] + xx [ 30 ] ) ; xx [ 97 ] =
xx [ 32 ] ; pm_math_Vector3_cross_ra ( xx + 63 , xx + 95 , xx + 30 ) ; xx [
39 ] = xx [ 9 ] * xx [ 124 ] + xx [ 30 ] ; xx [ 40 ] = xx [ 31 ] - xx [ 9 ] *
xx [ 29 ] ; xx [ 41 ] = xx [ 9 ] * xx [ 91 ] + xx [ 32 ] ;
pm_math_Quaternion_xform_ra ( xx + 155 , xx + 39 , xx + 29 ) ;
pm_math_Vector3_cross_ra ( xx + 88 , xx + 128 , xx + 39 ) ;
pm_math_Quaternion_xform_ra ( xx + 190 , xx + 39 , xx + 63 ) ; xx [ 39 ] = xx
[ 62 ] * xx [ 176 ] ; xx [ 40 ] = xx [ 62 ] * xx [ 177 ] ; xx [ 41 ] = xx [
62 ] * xx [ 178 ] ; pm_math_Quaternion_xform_ra ( xx + 12 , xx + 39 , xx + 60
) ; pm_math_Vector3_cross_ra ( xx + 88 , xx + 18 , xx + 39 ) ;
pm_math_Quaternion_xform_ra ( xx + 190 , xx + 39 , xx + 18 ) ;
pm_math_Vector3_cross_ra ( xx + 52 , xx + 173 , xx + 39 ) ;
pm_math_Quaternion_xform_ra ( xx + 102 , xx + 39 , xx + 52 ) ; xx [ 9 ] = (
xx [ 203 ] * xx [ 203 ] + xx [ 204 ] * xx [ 204 ] ) * xx [ 24 ] - xx [ 33 ] ;
xx [ 10 ] = xx [ 189 ] * xx [ 9 ] - xx [ 146 ] + xx [ 166 ] ; xx [ 39 ] = - (
xx [ 0 ] * xx [ 221 ] ) ; xx [ 40 ] = - ( xx [ 0 ] * xx [ 223 ] ) ; xx [ 41 ]
= - ( xx [ 0 ] * xx [ 224 ] ) ; pm_math_Vector3_cross_ra ( xx + 39 , xx + 200
, xx + 53 ) ; pm_math_Quaternion_xform_ra ( xx + 207 , xx + 53 , xx + 88 ) ;
xx [ 19 ] = xx [ 77 ] - xx [ 242 ] * xx [ 9 ] + xx [ 186 ] ;
pm_math_Vector3_cross_ra ( xx + 39 , xx + 49 , xx + 53 ) ;
pm_math_Quaternion_xform_ra ( xx + 207 , xx + 53 , xx + 39 ) ; xx [ 101 ] =
fabs ( pm_math_Vector3_dot_ra ( xx + 92 , xx + 116 ) + pm_math_Vector3_dot_ra
( xx + 133 , xx + 71 ) ) ; xx [ 102 ] = fabs ( xx [ 82 ] + xx [ 35 ] * xx [
85 ] + xx [ 21 ] - ( xx [ 36 ] + xx [ 66 ] ) ) ; xx [ 103 ] = fabs ( xx [ 83
] + xx [ 35 ] * xx [ 86 ] + xx [ 22 ] - ( xx [ 37 ] + xx [ 67 ] ) ) ; xx [
104 ] = fabs ( xx [ 84 ] + xx [ 35 ] * xx [ 87 ] + xx [ 23 ] - ( xx [ 38 ] +
xx [ 68 ] - xx [ 59 ] ) ) ; xx [ 105 ] = fabs ( pm_math_Vector3_dot_ra ( xx +
78 , xx + 56 ) + pm_math_Vector3_dot_ra ( xx + 98 , xx + 163 ) ) ; xx [ 106 ]
= fabs ( xx [ 74 ] + xx [ 4 ] * xx [ 180 ] + xx [ 29 ] - ( xx [ 63 ] + xx [
60 ] ) ) ; xx [ 107 ] = fabs ( xx [ 75 ] + xx [ 4 ] * xx [ 181 ] + xx [ 30 ]
- ( xx [ 64 ] + xx [ 61 ] ) ) ; xx [ 108 ] = fabs ( xx [ 76 ] + xx [ 4 ] * xx
[ 182 ] + xx [ 31 ] - ( xx [ 65 ] + xx [ 62 ] - xx [ 59 ] ) ) ; xx [ 109 ] =
fabs ( xx [ 18 ] ) ; xx [ 110 ] = fabs ( xx [ 52 ] ) ; xx [ 111 ] = fabs ( xx
[ 188 ] * ( xx [ 10 ] * ( xx [ 89 ] - xx [ 242 ] * xx [ 88 ] + xx [ 222 ] *
xx [ 90 ] ) - ( xx [ 189 ] * xx [ 88 ] - xx [ 222 ] * xx [ 89 ] + xx [ 90 ] )
* xx [ 19 ] ) / ( xx [ 19 ] * xx [ 19 ] + xx [ 10 ] * xx [ 10 ] ) + ( xx [ 39
] + xx [ 0 ] * xx [ 217 ] ) * xx [ 189 ] - ( xx [ 40 ] + xx [ 0 ] * xx [ 218
] ) * xx [ 222 ] + xx [ 59 ] + xx [ 41 ] + xx [ 0 ] * xx [ 219 ] ) ; ii [ 0 ]
= 101 ; { int ll ; for ( ll = 102 ; ll < 112 ; ++ ll ) if ( xx [ ll ] > xx [
ii [ 0 ] ] ) ii [ 0 ] = ll ; } ii [ 0 ] -= 101 ; xx [ 0 ] = xx [ 101 + ( ii [
0 ] ) ] ; if ( xx [ 0 ] > xx [ 11 ] ) { switch ( ii [ 0 ] ) { case 0 : case 1
: case 2 : case 3 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Revolute9' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 4 : case 5 : case 6 : case 7 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Revolute7' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 8 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Parallel' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 9 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Parallel1' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 10 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'test14/Steering Dynamics/Rack and Pinion Constraint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } } } xx [ 0 ] = - 1.804939452482168e-6 ; xx [ 4 ] =
2.156793422469772e-7 ; xx [ 18 ] = xx [ 0 ] ; xx [ 19 ] =
5.859787810535977e-8 ; xx [ 20 ] = xx [ 4 ] ; xx [ 21 ] = 0.9999999999983462
; xx [ 9 ] = xx [ 2 ] * xx [ 285 ] ; xx [ 10 ] = sin ( xx [ 9 ] ) ; xx [ 29 ]
= cos ( xx [ 9 ] ) ; xx [ 30 ] = xx [ 34 ] * xx [ 10 ] ; xx [ 31 ] = xx [ 47
] * xx [ 10 ] ; xx [ 32 ] = xx [ 10 ] ; pm_math_Quaternion_compose_ra ( xx +
42 , xx + 29 , xx + 35 ) ; pm_math_Quaternion_compose_ra ( xx + 12 , xx + 35
, xx + 29 ) ; xx [ 9 ] = xx [ 2 ] * xx [ 279 ] ; xx [ 10 ] = sin ( xx [ 9 ] )
; xx [ 35 ] = cos ( xx [ 9 ] ) ; xx [ 36 ] = - ( xx [ 6 ] * xx [ 10 ] ) ; xx
[ 37 ] = - ( xx [ 16 ] * xx [ 10 ] ) ; xx [ 38 ] = - ( xx [ 17 ] * xx [ 10 ]
) ; pm_math_Quaternion_compose_ra ( xx + 25 , xx + 35 , xx + 39 ) ; xx [ 9 ]
= xx [ 2 ] * xx [ 281 ] ; xx [ 10 ] = cos ( xx [ 9 ] ) ; xx [ 11 ] = sin ( xx
[ 9 ] ) ; xx [ 25 ] = xx [ 1 ] * xx [ 10 ] - xx [ 5 ] * xx [ 11 ] ; xx [ 26 ]
= xx [ 7 ] * xx [ 11 ] - xx [ 8 ] * xx [ 10 ] ; xx [ 27 ] = xx [ 1 ] * xx [
11 ] + xx [ 5 ] * xx [ 10 ] ; xx [ 28 ] = - ( xx [ 7 ] * xx [ 10 ] + xx [ 8 ]
* xx [ 11 ] ) ; pm_math_Quaternion_compose_ra ( xx + 39 , xx + 25 , xx + 7 )
; pm_math_Quaternion_inverseCompose_ra ( xx + 29 , xx + 7 , xx + 35 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 18 , xx + 35 , xx + 7 ) ; xx [ 18
] = xx [ 34 ] * xx [ 286 ] ; xx [ 19 ] = xx [ 47 ] * xx [ 286 ] ; xx [ 20 ] =
xx [ 286 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 35 , xx + 18 , xx + 21
) ; xx [ 18 ] = - ( xx [ 6 ] * xx [ 280 ] ) ; xx [ 19 ] = - ( xx [ 16 ] * xx
[ 280 ] ) ; xx [ 20 ] = - ( xx [ 17 ] * xx [ 280 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 18 , xx + 29 ) ; xx [ 16
] = - 0.9999999999983461 ; xx [ 17 ] = xx [ 4 ] ; xx [ 18 ] = -
5.859787807760419e-8 ; xx [ 19 ] = xx [ 0 ] ; xx [ 0 ] = xx [ 2 ] * xx [ 287
] ; xx [ 1 ] = sin ( xx [ 0 ] ) ; xx [ 25 ] = cos ( xx [ 0 ] ) ; xx [ 26 ] =
- ( xx [ 126 ] * xx [ 1 ] ) ; xx [ 27 ] = - ( xx [ 154 ] * xx [ 1 ] ) ; xx [
28 ] = - xx [ 1 ] ; pm_math_Quaternion_compose_ra ( xx + 150 , xx + 25 , xx +
31 ) ; pm_math_Quaternion_compose_ra ( xx + 12 , xx + 31 , xx + 25 ) ; xx [ 0
] = xx [ 2 ] * xx [ 275 ] ; xx [ 1 ] = sin ( xx [ 0 ] ) ; xx [ 11 ] = cos (
xx [ 0 ] ) ; xx [ 12 ] = - ( xx [ 113 ] * xx [ 1 ] ) ; xx [ 13 ] = xx [ 115 ]
* xx [ 1 ] ; xx [ 14 ] = xx [ 123 ] * xx [ 1 ] ;
pm_math_Quaternion_compose_ra ( xx + 119 , xx + 11 , xx + 31 ) ; xx [ 0 ] =
xx [ 2 ] * xx [ 277 ] ; xx [ 1 ] = cos ( xx [ 0 ] ) ; xx [ 2 ] = sin ( xx [ 0
] ) ; xx [ 11 ] = - ( xx [ 3 ] * xx [ 1 ] + xx [ 125 ] * xx [ 2 ] ) ; xx [ 12
] = xx [ 127 ] * xx [ 1 ] + xx [ 132 ] * xx [ 2 ] ; xx [ 13 ] = xx [ 125 ] *
xx [ 1 ] - xx [ 3 ] * xx [ 2 ] ; xx [ 14 ] = xx [ 127 ] * xx [ 2 ] - xx [ 132
] * xx [ 1 ] ; pm_math_Quaternion_compose_ra ( xx + 31 , xx + 11 , xx + 0 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 25 , xx + 0 , xx + 31 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 16 , xx + 31 , xx + 0 ) ; xx [ 4
] = - ( xx [ 113 ] * xx [ 276 ] ) ; xx [ 5 ] = xx [ 115 ] * xx [ 276 ] ; xx [
6 ] = xx [ 123 ] * xx [ 276 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 11
, xx + 4 , xx + 15 ) ; xx [ 4 ] = - ( xx [ 126 ] * xx [ 288 ] ) ; xx [ 5 ] =
- ( xx [ 154 ] * xx [ 288 ] ) ; xx [ 6 ] = - xx [ 288 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 31 , xx + 4 , xx + 11 ) ; state [ 0
] = xx [ 273 ] ; state [ 1 ] = xx [ 274 ] ; state [ 2 ] = xx [ 275 ] ; state
[ 3 ] = xx [ 276 ] ; state [ 4 ] = xx [ 277 ] ; state [ 5 ] = xx [ 278 ] ;
state [ 6 ] = xx [ 279 ] ; state [ 7 ] = xx [ 280 ] ; state [ 8 ] = xx [ 281
] ; state [ 9 ] = xx [ 282 ] ; state [ 10 ] = xx [ 283 ] ; state [ 11 ] = xx
[ 284 ] ; state [ 12 ] = xx [ 285 ] ; state [ 13 ] = xx [ 286 ] ; state [ 14
] = xx [ 287 ] ; state [ 15 ] = xx [ 288 ] ; state [ 16 ] = xx [ 289 ] +
sm_core_canonicalAngle ( xx [ 24 ] * atan2 ( sqrt ( xx [ 8 ] * xx [ 8 ] + xx
[ 9 ] * xx [ 9 ] + xx [ 10 ] * xx [ 10 ] ) , fabs ( xx [ 7 ] ) ) * ( ( - ( xx
[ 7 ] * xx [ 9 ] ) ) < 0.0 ? - 1.0 : + 1.0 ) - xx [ 289 ] ) ; state [ 17 ] =
xx [ 22 ] - ( xx [ 30 ] + xx [ 282 ] ) ; state [ 18 ] = xx [ 291 ] +
sm_core_canonicalAngle ( xx [ 24 ] * atan2 ( sqrt ( xx [ 1 ] * xx [ 1 ] + xx
[ 2 ] * xx [ 2 ] + xx [ 3 ] * xx [ 3 ] ) , fabs ( xx [ 0 ] ) ) * ( ( xx [ 0 ]
* xx [ 2 ] ) < 0.0 ? - 1.0 : + 1.0 ) - xx [ 291 ] ) ; state [ 19 ] = xx [ 16
] + xx [ 278 ] - xx [ 12 ] ; return NULL ; } void
test14_9449aeaa_1_computeConstraintError ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , double * error ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 86 ] ; (
void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; xx [ 0
] = 0.08297193236559158 ; xx [ 1 ] = - 0.6989660525715147 ; xx [ 2 ] =
0.08508706173602215 ; xx [ 3 ] = - 0.7052108250142259 ; xx [ 4 ] = 0.5 ; xx [
5 ] = xx [ 4 ] * state [ 6 ] ; xx [ 6 ] = sin ( xx [ 5 ] ) ; xx [ 7 ] = cos (
xx [ 5 ] ) ; xx [ 8 ] = - ( 0.2359713450861992 * xx [ 6 ] ) ; xx [ 9 ] = - (
0.9717517007293006 * xx [ 6 ] ) ; xx [ 10 ] = - ( 4.019505930177081e-3 * xx [
6 ] ) ; pm_math_Quaternion_compose_ra ( xx + 0 , xx + 7 , xx + 11 ) ; xx [ 0
] = 1.495622320918377e-3 ; xx [ 1 ] = xx [ 4 ] * state [ 8 ] ; xx [ 2 ] = cos
( xx [ 1 ] ) ; xx [ 3 ] = 0.1188356543686412 ; xx [ 5 ] = sin ( xx [ 1 ] ) ;
xx [ 1 ] = xx [ 0 ] * xx [ 2 ] - xx [ 3 ] * xx [ 5 ] ; xx [ 6 ] =
4.415720941208234e-3 ; xx [ 7 ] = 0.9929029921262297 ; xx [ 8 ] = xx [ 6 ] *
xx [ 5 ] - xx [ 7 ] * xx [ 2 ] ; xx [ 9 ] = xx [ 0 ] * xx [ 5 ] + xx [ 3 ] *
xx [ 2 ] ; xx [ 0 ] = xx [ 6 ] * xx [ 2 ] + xx [ 7 ] * xx [ 5 ] ; xx [ 2 ] =
- xx [ 0 ] ; xx [ 15 ] = xx [ 1 ] ; xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] = xx [ 9
] ; xx [ 18 ] = xx [ 2 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 15
, xx + 19 ) ; xx [ 3 ] = - xx [ 4 ] ; xx [ 15 ] = xx [ 4 ] ; xx [ 16 ] = xx [
4 ] ; xx [ 17 ] = xx [ 3 ] ; xx [ 18 ] = xx [ 4 ] ;
pm_math_Quaternion_compose_ra ( xx + 19 , xx + 15 , xx + 23 ) ; xx [ 5 ] =
2.0 ; xx [ 6 ] = 1.0 ; xx [ 15 ] = ( xx [ 24 ] * xx [ 26 ] + xx [ 23 ] * xx [
25 ] ) * xx [ 5 ] ; xx [ 16 ] = xx [ 5 ] * ( xx [ 25 ] * xx [ 26 ] - xx [ 23
] * xx [ 24 ] ) ; xx [ 17 ] = xx [ 6 ] - ( xx [ 24 ] * xx [ 24 ] + xx [ 25 ]
* xx [ 25 ] ) * xx [ 5 ] ; xx [ 23 ] = - 0.9984441693056983 ; xx [ 24 ] =
9.980207034736295e-7 ; xx [ 25 ] = 3.115531069039944e-7 ; xx [ 26 ] = -
0.05576056651757455 ; xx [ 27 ] = - 0.9984440686594036 ; xx [ 28 ] = -
1.210096473124015e-6 ; xx [ 29 ] = - 2.410217961564497e-7 ; xx [ 30 ] =
0.0557623686488803 ; xx [ 7 ] = xx [ 4 ] * state [ 12 ] ; xx [ 10 ] = sin (
xx [ 7 ] ) ; xx [ 31 ] = cos ( xx [ 7 ] ) ; xx [ 32 ] = 1.171949776569064e-7
* xx [ 10 ] ; xx [ 33 ] = 4.31358898227365e-7 * xx [ 10 ] ; xx [ 34 ] = xx [
10 ] ; pm_math_Quaternion_compose_ra ( xx + 27 , xx + 31 , xx + 35 ) ;
pm_math_Quaternion_compose_ra ( xx + 23 , xx + 35 , xx + 27 ) ; xx [ 31 ] =
0.5000008239281672 ; xx [ 32 ] = - 0.499999234668057 ; xx [ 33 ] = -
0.5000009810096314 ; xx [ 34 ] = - 0.4999989603908367 ;
pm_math_Quaternion_compose_ra ( xx + 27 , xx + 31 , xx + 39 ) ; xx [ 43 ] =
xx [ 5 ] * ( xx [ 40 ] * xx [ 41 ] - xx [ 39 ] * xx [ 42 ] ) ; xx [ 44 ] = xx
[ 6 ] - ( xx [ 40 ] * xx [ 40 ] + xx [ 42 ] * xx [ 42 ] ) * xx [ 5 ] ; xx [
45 ] = ( xx [ 41 ] * xx [ 42 ] + xx [ 39 ] * xx [ 40 ] ) * xx [ 5 ] ; xx [ 39
] = 0.1106342046522872 ; xx [ 40 ] = 0.02999999999998754 ; xx [ 41 ] = -
1.655280357226729e-13 ; pm_math_Quaternion_xform_ra ( xx + 19 , xx + 39 , xx
+ 46 ) ; xx [ 18 ] = xx [ 8 ] ; xx [ 19 ] = xx [ 9 ] ; xx [ 20 ] = xx [ 2 ] ;
xx [ 2 ] = 0.01000100000000001 ; xx [ 7 ] = xx [ 0 ] * xx [ 2 ] ; xx [ 10 ] =
0.1106342046522275 ; xx [ 21 ] = xx [ 0 ] * xx [ 10 ] ; xx [ 0 ] = xx [ 2 ] *
xx [ 8 ] + xx [ 9 ] * xx [ 10 ] ; xx [ 8 ] = xx [ 7 ] ; xx [ 9 ] = xx [ 21 ]
; xx [ 10 ] = xx [ 0 ] ; pm_math_Vector3_cross_ra ( xx + 18 , xx + 8 , xx +
39 ) ; xx [ 8 ] = - ( 0.02104361874950805 + xx [ 5 ] * ( xx [ 39 ] + xx [ 7 ]
* xx [ 1 ] ) ) ; xx [ 9 ] = - ( 0.01898006821655238 + ( xx [ 21 ] * xx [ 1 ]
+ xx [ 40 ] ) * xx [ 5 ] ) ; xx [ 10 ] = 0.1047281200976424 - ( xx [ 1 ] * xx
[ 0 ] + xx [ 41 ] ) * xx [ 5 ] ; pm_math_Quaternion_xform_ra ( xx + 11 , xx +
8 , xx + 0 ) ; xx [ 7 ] = 9.897538421414293e-3 ; xx [ 8 ] =
0.03896394932685158 ; xx [ 9 ] = 0.1061120224367209 ;
pm_math_Quaternion_xform_ra ( xx + 11 , xx + 7 , xx + 18 ) ; xx [ 7 ] =
7.54929787758902e-8 ; xx [ 8 ] = - 0.0199999879359847 ; xx [ 9 ] = xx [ 7 ] ;
xx [ 10 ] = xx [ 8 ] ; xx [ 11 ] = - 0.05090199292298814 ;
pm_math_Quaternion_xform_ra ( xx + 27 , xx + 9 , xx + 12 ) ; xx [ 9 ] =
1.581919911297324e-3 ; xx [ 39 ] = 2.273313047474082e-8 ; xx [ 40 ] =
8.360821906871329e-8 ; xx [ 41 ] = 0.1149560547068914 ;
pm_math_Quaternion_xform_ra ( xx + 35 , xx + 39 , xx + 49 ) ; xx [ 10 ] =
3.043703554484884e-3 ; xx [ 11 ] = 0.4695245943326235 ; xx [ 35 ] = - ( xx [
9 ] + xx [ 49 ] ) ; xx [ 36 ] = xx [ 10 ] - xx [ 50 ] ; xx [ 37 ] = - ( xx [
11 ] + xx [ 51 ] ) ; pm_math_Quaternion_xform_ra ( xx + 23 , xx + 35 , xx +
38 ) ; xx [ 21 ] = 0.277038885939381 - state [ 10 ] ; xx [ 49 ] = -
0.08499731596381738 ; xx [ 50 ] = - 0.7052243478362852 ; xx [ 51 ] = -
0.08288208610093117 ; xx [ 52 ] = - 0.6989739875713483 ; xx [ 22 ] = xx [ 4 ]
* state [ 2 ] ; xx [ 35 ] = sin ( xx [ 22 ] ) ; xx [ 53 ] = cos ( xx [ 22 ] )
; xx [ 54 ] = - ( 0.2357227559798625 * xx [ 35 ] ) ; xx [ 55 ] =
0.9718120321650099 * xx [ 35 ] ; xx [ 56 ] = 4.019508996436549e-3 * xx [ 35 ]
; pm_math_Quaternion_compose_ra ( xx + 49 , xx + 53 , xx + 57 ) ; xx [ 22 ] =
1.495693379815366e-3 ; xx [ 35 ] = xx [ 4 ] * state [ 4 ] ; xx [ 36 ] = cos (
xx [ 35 ] ) ; xx [ 37 ] = 0.1187086636215266 ; xx [ 41 ] = sin ( xx [ 35 ] )
; xx [ 35 ] = xx [ 22 ] * xx [ 36 ] + xx [ 37 ] * xx [ 41 ] ; xx [ 42 ] =
0.9929181650975998 ; xx [ 49 ] = 4.419672128196023e-3 ; xx [ 50 ] = xx [ 42 ]
* xx [ 36 ] + xx [ 49 ] * xx [ 41 ] ; xx [ 51 ] = xx [ 37 ] * xx [ 36 ] - xx
[ 22 ] * xx [ 41 ] ; xx [ 22 ] = xx [ 42 ] * xx [ 41 ] - xx [ 49 ] * xx [ 36
] ; xx [ 52 ] = - xx [ 35 ] ; xx [ 53 ] = xx [ 50 ] ; xx [ 54 ] = xx [ 51 ] ;
xx [ 55 ] = xx [ 22 ] ; pm_math_Quaternion_compose_ra ( xx + 57 , xx + 52 ,
xx + 61 ) ; xx [ 52 ] = xx [ 4 ] ; xx [ 53 ] = xx [ 3 ] ; xx [ 54 ] = xx [ 3
] ; xx [ 55 ] = xx [ 3 ] ; pm_math_Quaternion_compose_ra ( xx + 61 , xx + 52
, xx + 65 ) ; xx [ 52 ] = ( xx [ 66 ] * xx [ 68 ] + xx [ 65 ] * xx [ 67 ] ) *
xx [ 5 ] ; xx [ 53 ] = xx [ 5 ] * ( xx [ 67 ] * xx [ 68 ] - xx [ 65 ] * xx [
66 ] ) ; xx [ 54 ] = xx [ 6 ] - ( xx [ 66 ] * xx [ 66 ] + xx [ 67 ] * xx [ 67
] ) * xx [ 5 ] ; xx [ 65 ] = - 1.216632498952289e-6 ; xx [ 66 ] =
0.99844426994826 ; xx [ 67 ] = - 0.05575876438621875 ; xx [ 68 ] = -
3.580316125383367e-7 ; xx [ 3 ] = xx [ 4 ] * state [ 14 ] ; xx [ 36 ] = sin (
xx [ 3 ] ) ; xx [ 69 ] = cos ( xx [ 3 ] ) ; xx [ 70 ] = - (
1.171949768652286e-7 * xx [ 36 ] ) ; xx [ 71 ] = - ( 4.313588970662109e-7 *
xx [ 36 ] ) ; xx [ 72 ] = - xx [ 36 ] ; pm_math_Quaternion_compose_ra ( xx +
65 , xx + 69 , xx + 73 ) ; pm_math_Quaternion_compose_ra ( xx + 23 , xx + 73
, xx + 65 ) ; pm_math_Quaternion_compose_ra ( xx + 65 , xx + 31 , xx + 69 ) ;
xx [ 31 ] = xx [ 5 ] * ( xx [ 70 ] * xx [ 71 ] - xx [ 69 ] * xx [ 72 ] ) ; xx
[ 32 ] = xx [ 6 ] - ( xx [ 70 ] * xx [ 70 ] + xx [ 72 ] * xx [ 72 ] ) * xx [
5 ] ; xx [ 33 ] = ( xx [ 71 ] * xx [ 72 ] + xx [ 69 ] * xx [ 70 ] ) * xx [ 5
] ; xx [ 3 ] = 9.999999999962842e-3 ; xx [ 34 ] = xx [ 3 ] * xx [ 64 ] ; xx [
36 ] = 0.1106342046522229 ; xx [ 37 ] = xx [ 3 ] * xx [ 62 ] + xx [ 36 ] * xx
[ 63 ] ; xx [ 69 ] = xx [ 34 ] ; xx [ 70 ] = xx [ 36 ] * xx [ 64 ] ; xx [ 71
] = - xx [ 37 ] ; pm_math_Vector3_cross_ra ( xx + 62 , xx + 69 , xx + 77 ) ;
xx [ 69 ] = xx [ 50 ] ; xx [ 70 ] = xx [ 51 ] ; xx [ 71 ] = xx [ 22 ] ; xx [
3 ] = 0.010001 ; xx [ 41 ] = xx [ 22 ] * xx [ 3 ] ; xx [ 42 ] =
0.1106342046522274 ; xx [ 49 ] = xx [ 22 ] * xx [ 42 ] ; xx [ 22 ] = xx [ 3 ]
* xx [ 50 ] + xx [ 51 ] * xx [ 42 ] ; xx [ 80 ] = - xx [ 41 ] ; xx [ 81 ] = -
xx [ 49 ] ; xx [ 82 ] = xx [ 22 ] ; pm_math_Vector3_cross_ra ( xx + 69 , xx +
80 , xx + 83 ) ; xx [ 69 ] = 0.242315223240461 - xx [ 5 ] * ( xx [ 83 ] + xx
[ 41 ] * xx [ 35 ] ) ; xx [ 70 ] = - ( 0.01901241471107262 + ( xx [ 49 ] * xx
[ 35 ] + xx [ 84 ] ) * xx [ 5 ] ) ; xx [ 71 ] = 0.1047270297279631 - ( xx [
85 ] - xx [ 22 ] * xx [ 35 ] ) * xx [ 5 ] ; pm_math_Quaternion_xform_ra ( xx
+ 57 , xx + 69 , xx + 49 ) ; xx [ 69 ] = - 5.167373958926922e-3 ; xx [ 70 ] =
0.01953060282014866 ; xx [ 71 ] = 0.1060315916205751 ;
pm_math_Quaternion_xform_ra ( xx + 57 , xx + 69 , xx + 80 ) ; xx [ 55 ] = xx
[ 7 ] ; xx [ 56 ] = xx [ 8 ] ; xx [ 57 ] = - 0.05090199292298809 ;
pm_math_Quaternion_xform_ra ( xx + 65 , xx + 55 , xx + 58 ) ; xx [ 55 ] =
1.327625287357436e-7 ; xx [ 56 ] = 4.885928012311413e-7 ; xx [ 57 ] =
1.053813650826583 ; pm_math_Quaternion_xform_ra ( xx + 73 , xx + 55 , xx + 69
) ; xx [ 55 ] = - ( xx [ 9 ] + xx [ 69 ] ) ; xx [ 56 ] = xx [ 10 ] - xx [ 70
] ; xx [ 57 ] = - ( xx [ 11 ] + xx [ 71 ] ) ; pm_math_Quaternion_xform_ra (
xx + 23 , xx + 55 , xx + 7 ) ; xx [ 22 ] = 0.4999989603908348 ; xx [ 23 ] = -
0.5000009810096334 ; xx [ 24 ] = 0.4999992346680554 ; xx [ 25 ] =
0.5000008239281687 ; pm_math_Quaternion_compose_ra ( xx + 65 , xx + 22 , xx +
69 ) ; xx [ 22 ] = 0.4999992346680592 ; xx [ 23 ] = 0.5000008239281649 ; xx [
24 ] = - 0.4999989603908379 ; xx [ 25 ] = 0.5000009810096302 ;
pm_math_Quaternion_compose_ra ( xx + 27 , xx + 22 , xx + 65 ) ; xx [ 3 ] =
1.224649036341985e-16 ; xx [ 22 ] = 0.4995727091999011 ; xx [ 23 ] = -
0.49957621763275 ; xx [ 24 ] = - 0.5004162835922631 ; xx [ 25 ] =
0.5004340657011012 ; xx [ 10 ] = xx [ 4 ] * state [ 0 ] ; xx [ 4 ] = sin ( xx
[ 10 ] ) ; xx [ 26 ] = cos ( xx [ 10 ] ) ; xx [ 27 ] = - (
1.701421996852573e-3 * xx [ 4 ] ) ; xx [ 28 ] = - ( 1.425555872024444e-5 * xx
[ 4 ] ) ; xx [ 29 ] = - ( 0.9999985524789362 * xx [ 4 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 22 , xx + 26 , xx + 73 ) ; xx [ 22 ] =
3.397648291980224e-4 ; xx [ 23 ] = 1.051662890794458e-5 ; xx [ 24 ] =
0.6830642379941189 ; pm_math_Quaternion_xform_ra ( xx + 73 , xx + 22 , xx +
25 ) ; xx [ 22 ] = 2.206652894183421e-4 ; xx [ 23 ] = 9.518739797527464e-6 ;
xx [ 24 ] = 0.6130643393205935 ; pm_math_Quaternion_xform_ra ( xx + 73 , xx +
22 , xx + 28 ) ; xx [ 4 ] = 2.749954992318224e-39 ; xx [ 10 ] = xx [ 3 ] * (
0.03000000000048807 + xx [ 26 ] - xx [ 29 ] ) - xx [ 4 ] * (
0.07000000000001244 + xx [ 25 ] - xx [ 28 ] ) + xx [ 21 ] - ( xx [ 27 ] - xx
[ 30 ] ) - 0.5190575030373279 ; xx [ 11 ] = 0.03 ; xx [ 22 ] = xx [ 10 ] / xx
[ 11 ] ; xx [ 23 ] = - 0.9999996380630076 ; xx [ 24 ] = 7.136837994664697e-6
; xx [ 25 ] = - 8.507112303565772e-4 ; xx [ 26 ] = 1.064527084355427e-5 ;
pm_math_Quaternion_compose_ra ( xx + 73 , xx + 23 , xx + 27 ) ; xx [ 23 ] = (
xx [ 28 ] * xx [ 29 ] + xx [ 27 ] * xx [ 30 ] ) * xx [ 5 ] ; xx [ 24 ] = ( xx
[ 27 ] * xx [ 27 ] + xx [ 28 ] * xx [ 28 ] ) * xx [ 5 ] - xx [ 6 ] ; xx [ 6 ]
= xx [ 5 ] * ( xx [ 28 ] * xx [ 30 ] - xx [ 27 ] * xx [ 29 ] ) ; error [ 0 ]
= pm_math_Vector3_dot_ra ( xx + 15 , xx + 43 ) ; error [ 1 ] = xx [ 46 ] + xx
[ 0 ] - xx [ 18 ] - ( xx [ 12 ] + xx [ 38 ] ) - 0.1781291906912097 ; error [
2 ] = xx [ 47 ] + xx [ 1 ] - xx [ 19 ] - ( xx [ 13 ] + xx [ 39 ] ) -
0.07715328610398943 ; error [ 3 ] = xx [ 48 ] + xx [ 2 ] - xx [ 20 ] - ( xx [
14 ] + xx [ 40 ] + xx [ 21 ] ) - 0.5791292142236284 ; error [ 4 ] =
pm_math_Vector3_dot_ra ( xx + 52 , xx + 31 ) ; error [ 5 ] = xx [ 5 ] * ( xx
[ 77 ] + xx [ 61 ] * xx [ 34 ] ) + xx [ 49 ] - xx [ 80 ] - ( xx [ 58 ] + xx [
7 ] ) - 0.06749498603877549 ; error [ 6 ] = ( xx [ 36 ] * xx [ 61 ] * xx [ 64
] + xx [ 78 ] ) * xx [ 5 ] + xx [ 50 ] - xx [ 81 ] - ( xx [ 59 ] + xx [ 8 ] )
- 0.06715228610395237 ; error [ 7 ] = ( xx [ 79 ] - xx [ 61 ] * xx [ 37 ] ) *
xx [ 5 ] + xx [ 51 ] - xx [ 82 ] - ( xx [ 60 ] + xx [ 9 ] + xx [ 21 ] ) +
1.121139195080949 ; error [ 8 ] = ( xx [ 70 ] * xx [ 72 ] + xx [ 69 ] * xx [
71 ] ) * xx [ 5 ] ; error [ 9 ] = ( xx [ 66 ] * xx [ 68 ] + xx [ 65 ] * xx [
67 ] ) * xx [ 5 ] ; error [ 10 ] = ( xx [ 22 ] + sm_core_canonicalAngle (
atan2 ( xx [ 23 ] - 4.491009114794739e-23 * xx [ 24 ] + xx [ 3 ] * xx [ 6 ] ,
xx [ 4 ] * xx [ 24 ] - xx [ 3 ] * xx [ 23 ] + xx [ 6 ] ) - xx [ 22 ] ) ) * xx
[ 11 ] - xx [ 10 ] ; } void test14_9449aeaa_1_resetModeVector ( const void *
mech , int * modeVector ) { ( void ) mech ; ( void ) modeVector ; } boolean_T
test14_9449aeaa_1_hasJointDisToNormModeChange ( const void * mech , const int
* prevModeVector , const int * modeVector ) { ( void ) mech ; ( void )
prevModeVector ; ( void ) modeVector ; return 0 ; } PmfMessageId
test14_9449aeaa_1_performJointDisToNormModeChange ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const int *
prevModeVector , const int * modeVector , const double * input , double *
state , void * neDiagMgr0 ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; NeuDiagnosticManager
* neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ; ( void ) mech ; ( void
) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) prevModeVector
; ( void ) modeVector ; ( void ) input ; ( void ) state ; ( void ) neDiagMgr
; return NULL ; } void test14_9449aeaa_1_onModeChangedCutJoints ( const void
* mech , const int * prevModeVector , const int * modeVector , double * state
) { ( void ) mech ; ( void ) prevModeVector ; ( void ) modeVector ; ( void )
state ; }

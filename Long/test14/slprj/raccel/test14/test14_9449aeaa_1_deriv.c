#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "test14_9449aeaa_1_geometries.h"
PmfMessageId test14_9449aeaa_1_compDerivs ( const RuntimeDerivedValuesBundle
* rtdv , const int * eqnEnableFlags , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * deriv , double *
errorResult , NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
int ii [ 11 ] ; double xx [ 770 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) modeVector ; ( void ) inputDot ; ( void )
inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr ; xx [ 0 ] = 0.03 ;
xx [ 1 ] = 2.749954992318224e-39 ; xx [ 2 ] = 1.0 ; xx [ 3 ] =
0.4995727091999011 ; xx [ 4 ] = - 0.49957621763275 ; xx [ 5 ] = -
0.5004162835922631 ; xx [ 6 ] = 0.5004340657011012 ; xx [ 7 ] = 0.5 ; xx [ 8
] = xx [ 7 ] * state [ 0 ] ; xx [ 9 ] = 1.701421996852573e-3 ; xx [ 10 ] =
sin ( xx [ 8 ] ) ; xx [ 11 ] = 1.425555872024444e-5 ; xx [ 12 ] =
0.9999985524789362 ; xx [ 13 ] = cos ( xx [ 8 ] ) ; xx [ 14 ] = - ( xx [ 9 ]
* xx [ 10 ] ) ; xx [ 15 ] = - ( xx [ 11 ] * xx [ 10 ] ) ; xx [ 16 ] = - ( xx
[ 12 ] * xx [ 10 ] ) ; pm_math_Quaternion_compose_ra ( xx + 3 , xx + 13 , xx
+ 17 ) ; xx [ 3 ] = 0.9999996380630076 ; xx [ 4 ] = 7.136837994664697e-6 ; xx
[ 5 ] = 8.507112303565772e-4 ; xx [ 6 ] = 1.064527084355427e-5 ; xx [ 13 ] =
- xx [ 3 ] ; xx [ 14 ] = xx [ 4 ] ; xx [ 15 ] = - xx [ 5 ] ; xx [ 16 ] = xx [
6 ] ; pm_math_Quaternion_compose_ra ( xx + 17 , xx + 13 , xx + 21 ) ; xx [ 8
] = 2.0 ; xx [ 10 ] = xx [ 2 ] - ( xx [ 23 ] * xx [ 23 ] + xx [ 24 ] * xx [
24 ] ) * xx [ 8 ] ; xx [ 13 ] = 1.224649036341985e-16 ; xx [ 14 ] = ( xx [ 22
] * xx [ 23 ] + xx [ 21 ] * xx [ 24 ] ) * xx [ 8 ] ; xx [ 15 ] = xx [ 8 ] * (
xx [ 22 ] * xx [ 24 ] - xx [ 21 ] * xx [ 23 ] ) ; xx [ 16 ] = xx [ 1 ] * xx [
10 ] - xx [ 13 ] * xx [ 14 ] + xx [ 15 ] ; xx [ 21 ] = - 2.127839120481132e-5
; xx [ 22 ] = - 0.9999999996714876 ; xx [ 23 ] = 1.429178292607163e-5 ;
pm_math_Quaternion_xform_ra ( xx + 17 , xx + 21 , xx + 24 ) ; xx [ 21 ] =
4.491009114794739e-23 ; xx [ 22 ] = xx [ 14 ] - xx [ 21 ] * xx [ 10 ] + xx [
13 ] * xx [ 15 ] ; xx [ 10 ] = xx [ 16 ] * xx [ 16 ] + xx [ 22 ] * xx [ 22 ]
; xx [ 27 ] = 7.791513304785308e-7 ; xx [ 28 ] = 8.224161824052596e-4 ; xx [
29 ] = - 1.304968628300633e-8 ; pm_math_Quaternion_xform_ra ( xx + 17 , xx +
27 , xx + 30 ) ; xx [ 14 ] = 7.79151330478524e-7 ; xx [ 15 ] =
8.2241618240526e-4 ; xx [ 23 ] = 1.304968628300632e-8 ; xx [ 27 ] = - xx [ 14
] ; xx [ 28 ] = - xx [ 15 ] ; xx [ 29 ] = xx [ 23 ] ;
pm_math_Quaternion_xform_ra ( xx + 17 , xx + 27 , xx + 33 ) ; xx [ 36 ] = xx
[ 0 ] * ( xx [ 16 ] * ( xx [ 25 ] - xx [ 21 ] * xx [ 24 ] + xx [ 13 ] * xx [
26 ] ) - ( xx [ 1 ] * xx [ 24 ] - xx [ 13 ] * xx [ 25 ] + xx [ 26 ] ) * xx [
22 ] ) / xx [ 10 ] + ( xx [ 30 ] + xx [ 33 ] ) * xx [ 1 ] - ( xx [ 31 ] + xx
[ 34 ] ) * xx [ 13 ] + xx [ 32 ] + xx [ 35 ] ; xx [ 24 ] =
1.495622320918377e-3 ; xx [ 25 ] = xx [ 7 ] * state [ 8 ] ; xx [ 26 ] = cos (
xx [ 25 ] ) ; xx [ 30 ] = 0.1188356543686412 ; xx [ 31 ] = sin ( xx [ 25 ] )
; xx [ 25 ] = xx [ 24 ] * xx [ 26 ] - xx [ 30 ] * xx [ 31 ] ; xx [ 32 ] =
4.415720941208234e-3 ; xx [ 33 ] = 0.9929029921262297 ; xx [ 34 ] = xx [ 32 ]
* xx [ 31 ] - xx [ 33 ] * xx [ 26 ] ; xx [ 35 ] = xx [ 24 ] * xx [ 31 ] + xx
[ 30 ] * xx [ 26 ] ; xx [ 24 ] = xx [ 32 ] * xx [ 26 ] + xx [ 33 ] * xx [ 31
] ; xx [ 26 ] = - xx [ 24 ] ; xx [ 30 ] = xx [ 25 ] ; xx [ 31 ] = xx [ 34 ] ;
xx [ 32 ] = xx [ 35 ] ; xx [ 33 ] = xx [ 26 ] ; xx [ 37 ] =
0.2359713450861992 ; xx [ 38 ] = 0.9717517007293006 ; xx [ 39 ] =
4.019505930177081e-3 ; xx [ 40 ] = - xx [ 37 ] ; xx [ 41 ] = - xx [ 38 ] ; xx
[ 42 ] = - xx [ 39 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 30 , xx + 40
, xx + 43 ) ; xx [ 46 ] = 0.08297193236559158 ; xx [ 47 ] = -
0.6989660525715147 ; xx [ 48 ] = 0.08508706173602215 ; xx [ 49 ] = -
0.7052108250142259 ; xx [ 50 ] = xx [ 7 ] * state [ 6 ] ; xx [ 51 ] = sin (
xx [ 50 ] ) ; xx [ 52 ] = cos ( xx [ 50 ] ) ; xx [ 53 ] = - ( xx [ 37 ] * xx
[ 51 ] ) ; xx [ 54 ] = - ( xx [ 38 ] * xx [ 51 ] ) ; xx [ 55 ] = - ( xx [ 39
] * xx [ 51 ] ) ; pm_math_Quaternion_compose_ra ( xx + 46 , xx + 52 , xx + 56
) ; pm_math_Quaternion_compose_ra ( xx + 56 , xx + 30 , xx + 46 ) ; xx [ 50 ]
= xx [ 43 ] * xx [ 48 ] ; xx [ 51 ] = xx [ 45 ] * xx [ 49 ] + xx [ 43 ] * xx
[ 47 ] ; xx [ 52 ] = xx [ 48 ] * xx [ 45 ] ; xx [ 53 ] = - xx [ 50 ] ; xx [
54 ] = xx [ 51 ] ; xx [ 55 ] = - xx [ 52 ] ; pm_math_Vector3_cross_ra ( xx +
47 , xx + 53 , xx + 60 ) ; xx [ 53 ] = xx [ 45 ] + xx [ 8 ] * ( xx [ 60 ] -
xx [ 46 ] * xx [ 50 ] ) ; xx [ 54 ] = ( xx [ 51 ] * xx [ 46 ] + xx [ 61 ] ) *
xx [ 8 ] ; xx [ 55 ] = xx [ 8 ] * ( xx [ 62 ] - xx [ 46 ] * xx [ 52 ] ) - xx
[ 43 ] ; xx [ 60 ] = - 0.9984441693056983 ; xx [ 61 ] = 9.980207034736295e-7
; xx [ 62 ] = 3.115531069039944e-7 ; xx [ 63 ] = - 0.05576056651757455 ; xx [
64 ] = - 0.9984440686594036 ; xx [ 65 ] = - 1.210096473124015e-6 ; xx [ 66 ]
= - 2.410217961564497e-7 ; xx [ 67 ] = 0.0557623686488803 ; xx [ 50 ] = xx [
7 ] * state [ 12 ] ; xx [ 51 ] = 1.171949776569064e-7 ; xx [ 52 ] = sin ( xx
[ 50 ] ) ; xx [ 68 ] = 4.31358898227365e-7 ; xx [ 69 ] = cos ( xx [ 50 ] ) ;
xx [ 70 ] = xx [ 51 ] * xx [ 52 ] ; xx [ 71 ] = xx [ 68 ] * xx [ 52 ] ; xx [
72 ] = xx [ 52 ] ; pm_math_Quaternion_compose_ra ( xx + 64 , xx + 69 , xx +
73 ) ; pm_math_Quaternion_compose_ra ( xx + 60 , xx + 73 , xx + 64 ) ; xx [
69 ] = 0.5000008239281672 ; xx [ 70 ] = - 0.499999234668057 ; xx [ 71 ] = -
0.5000009810096314 ; xx [ 72 ] = - 0.4999989603908367 ;
pm_math_Quaternion_compose_ra ( xx + 64 , xx + 69 , xx + 77 ) ; xx [ 81 ] =
xx [ 8 ] * ( xx [ 78 ] * xx [ 79 ] - xx [ 77 ] * xx [ 80 ] ) ; xx [ 82 ] = xx
[ 2 ] - ( xx [ 78 ] * xx [ 78 ] + xx [ 80 ] * xx [ 80 ] ) * xx [ 8 ] ; xx [
83 ] = ( xx [ 79 ] * xx [ 80 ] + xx [ 77 ] * xx [ 78 ] ) * xx [ 8 ] ; xx [ 50
] = pm_math_Vector3_dot_ra ( xx + 53 , xx + 81 ) ; xx [ 52 ] =
0.2167653807834443 ; xx [ 53 ] = xx [ 25 ] * xx [ 25 ] ; xx [ 54 ] = ( xx [
53 ] + xx [ 34 ] * xx [ 34 ] ) * xx [ 8 ] - xx [ 2 ] ; xx [ 55 ] = xx [ 35 ]
* xx [ 34 ] ; xx [ 77 ] = xx [ 24 ] * xx [ 25 ] ; xx [ 78 ] = xx [ 8 ] * ( xx
[ 55 ] + xx [ 77 ] ) ; xx [ 79 ] = xx [ 35 ] * xx [ 25 ] ; xx [ 80 ] = xx [
24 ] * xx [ 34 ] ; xx [ 84 ] = xx [ 79 ] - xx [ 80 ] ; xx [ 85 ] = xx [ 84 ]
* xx [ 8 ] ; xx [ 86 ] = xx [ 55 ] - xx [ 77 ] ; xx [ 55 ] = xx [ 86 ] * xx [
8 ] ; xx [ 77 ] = ( xx [ 53 ] + xx [ 35 ] * xx [ 35 ] ) * xx [ 8 ] - xx [ 2 ]
; xx [ 87 ] = xx [ 35 ] * xx [ 24 ] ; xx [ 88 ] = xx [ 25 ] * xx [ 34 ] ; xx
[ 89 ] = xx [ 87 ] + xx [ 88 ] ; xx [ 90 ] = xx [ 8 ] * xx [ 89 ] ; xx [ 91 ]
= xx [ 80 ] + xx [ 79 ] ; xx [ 79 ] = xx [ 8 ] * xx [ 91 ] ; xx [ 80 ] = ( xx
[ 88 ] - xx [ 87 ] ) * xx [ 8 ] ; xx [ 87 ] = ( xx [ 53 ] + xx [ 24 ] * xx [
24 ] ) * xx [ 8 ] - xx [ 2 ] ; xx [ 92 ] = xx [ 54 ] ; xx [ 93 ] = xx [ 78 ]
; xx [ 94 ] = xx [ 85 ] ; xx [ 95 ] = xx [ 55 ] ; xx [ 96 ] = xx [ 77 ] ; xx
[ 97 ] = - xx [ 90 ] ; xx [ 98 ] = - xx [ 79 ] ; xx [ 99 ] = xx [ 80 ] ; xx [
100 ] = xx [ 87 ] ; xx [ 53 ] = 1.072390849596845e-4 ; xx [ 88 ] =
1.3742142744129e-3 ; xx [ 101 ] = 2.239740664214466e-3 ; xx [ 102 ] = xx [ 53
] * xx [ 54 ] ; xx [ 103 ] = xx [ 53 ] * xx [ 55 ] ; xx [ 104 ] = - ( xx [ 53
] * xx [ 79 ] ) ; xx [ 105 ] = xx [ 88 ] * xx [ 78 ] ; xx [ 106 ] = xx [ 88 ]
* xx [ 77 ] ; xx [ 107 ] = xx [ 88 ] * xx [ 80 ] ; xx [ 108 ] = xx [ 101 ] *
xx [ 85 ] ; xx [ 109 ] = - ( xx [ 101 ] * xx [ 90 ] ) ; xx [ 110 ] = xx [ 101
] * xx [ 87 ] ; pm_math_Matrix3x3_compose_ra ( xx + 92 , xx + 102 , xx + 111
) ; xx [ 88 ] = 0.01242124240629439 ; xx [ 102 ] = xx [ 88 ] * xx [ 85 ] ; xx
[ 103 ] = xx [ 102 ] * xx [ 78 ] ; xx [ 104 ] = xx [ 88 ] * xx [ 90 ] ; xx [
105 ] = xx [ 104 ] * xx [ 78 ] ; xx [ 106 ] = xx [ 88 ] * xx [ 87 ] ; xx [ 88
] = xx [ 106 ] * xx [ 78 ] ; xx [ 107 ] = xx [ 102 ] * xx [ 77 ] ; xx [ 108 ]
= xx [ 104 ] * xx [ 77 ] ; xx [ 109 ] = xx [ 106 ] * xx [ 77 ] ; xx [ 110 ] =
xx [ 80 ] * xx [ 102 ] ; xx [ 102 ] = xx [ 80 ] * xx [ 104 ] ; xx [ 104 ] =
xx [ 80 ] * xx [ 106 ] ; xx [ 120 ] = xx [ 103 ] ; xx [ 121 ] = - xx [ 105 ]
; xx [ 122 ] = xx [ 88 ] ; xx [ 123 ] = xx [ 107 ] ; xx [ 124 ] = - xx [ 108
] ; xx [ 125 ] = xx [ 109 ] ; xx [ 126 ] = xx [ 110 ] ; xx [ 127 ] = - xx [
102 ] ; xx [ 128 ] = xx [ 104 ] ; xx [ 129 ] = xx [ 34 ] ; xx [ 130 ] = xx [
35 ] ; xx [ 131 ] = xx [ 26 ] ; xx [ 26 ] = 0.01000100000000001 ; xx [ 106 ]
= xx [ 24 ] * xx [ 26 ] ; xx [ 132 ] = 0.1106342046522275 ; xx [ 133 ] = xx [
24 ] * xx [ 132 ] ; xx [ 134 ] = xx [ 35 ] * xx [ 132 ] ; xx [ 135 ] = xx [
26 ] * xx [ 34 ] + xx [ 134 ] ; xx [ 136 ] = xx [ 106 ] ; xx [ 137 ] = xx [
133 ] ; xx [ 138 ] = xx [ 135 ] ; pm_math_Vector3_cross_ra ( xx + 129 , xx +
136 , xx + 139 ) ; xx [ 129 ] = xx [ 133 ] * xx [ 25 ] ; xx [ 136 ] = - (
0.1316778234017356 + xx [ 8 ] * ( xx [ 139 ] + xx [ 106 ] * xx [ 25 ] ) - xx
[ 132 ] ) ; xx [ 137 ] = - ( 8.979068216552373e-3 + xx [ 26 ] + ( xx [ 129 ]
+ xx [ 140 ] ) * xx [ 8 ] ) ; xx [ 138 ] = 0.1047281200976424 - ( xx [ 25 ] *
xx [ 135 ] + xx [ 141 ] ) * xx [ 8 ] ; pm_math_Matrix3x3_postCross_ra ( xx +
120 , xx + 136 , xx + 139 ) ; xx [ 26 ] = 0.2739142822343109 ; xx [ 106 ] =
0.1122730754502179 ; xx [ 120 ] = xx [ 26 ] * xx [ 54 ] ; xx [ 121 ] = xx [
26 ] * xx [ 55 ] ; xx [ 122 ] = - ( xx [ 26 ] * xx [ 79 ] ) ; xx [ 123 ] = xx
[ 26 ] * xx [ 78 ] ; xx [ 124 ] = xx [ 26 ] * xx [ 77 ] ; xx [ 125 ] = xx [
26 ] * xx [ 80 ] ; xx [ 126 ] = xx [ 106 ] * xx [ 85 ] ; xx [ 127 ] = - ( xx
[ 106 ] * xx [ 90 ] ) ; xx [ 128 ] = xx [ 106 ] * xx [ 87 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 92 , xx + 120 , xx + 148 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 148 , xx + 136 , xx + 120 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 120 , xx + 136 , xx + 157 ) ; xx [ 55 ]
= 0.2183900496564113 ; xx [ 77 ] = 0.3739488839825263 ; xx [ 166 ] = xx [ 52
] + xx [ 111 ] - xx [ 139 ] - xx [ 139 ] - xx [ 157 ] ; xx [ 167 ] = xx [ 112
] - xx [ 140 ] - xx [ 142 ] - xx [ 158 ] ; xx [ 168 ] = xx [ 113 ] - xx [ 141
] - xx [ 145 ] - xx [ 159 ] ; xx [ 169 ] = xx [ 114 ] - xx [ 142 ] - xx [ 140
] - xx [ 160 ] ; xx [ 170 ] = xx [ 55 ] + xx [ 115 ] - xx [ 143 ] - xx [ 143
] - xx [ 161 ] ; xx [ 171 ] = xx [ 116 ] - xx [ 144 ] - xx [ 146 ] - xx [ 162
] ; xx [ 172 ] = xx [ 117 ] - xx [ 145 ] - xx [ 141 ] - xx [ 163 ] ; xx [ 173
] = xx [ 118 ] - xx [ 146 ] - xx [ 144 ] - xx [ 164 ] ; xx [ 174 ] = xx [ 77
] + xx [ 119 ] - xx [ 147 ] - xx [ 147 ] - xx [ 165 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 166 , xx + 40 , xx + 78 ) ; xx [ 111 ] = xx
[ 103 ] - xx [ 120 ] ; xx [ 112 ] = - ( xx [ 105 ] + xx [ 123 ] ) ; xx [ 113
] = xx [ 88 ] - xx [ 126 ] ; xx [ 114 ] = xx [ 107 ] - xx [ 121 ] ; xx [ 115
] = - ( xx [ 108 ] + xx [ 124 ] ) ; xx [ 116 ] = xx [ 109 ] - xx [ 127 ] ; xx
[ 117 ] = xx [ 110 ] - xx [ 122 ] ; xx [ 118 ] = - ( xx [ 102 ] + xx [ 125 ]
) ; xx [ 119 ] = xx [ 104 ] - xx [ 128 ] ; xx [ 85 ] = 0.1029579224453269 ;
xx [ 88 ] = 0.02499961344983095 ; xx [ 90 ] = 4.235742615152655e-4 ; xx [ 102
] = xx [ 85 ] ; xx [ 103 ] = - xx [ 88 ] ; xx [ 104 ] = - xx [ 90 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 111 , xx + 102 , xx + 105 ) ; xx [ 108 ] =
xx [ 78 ] + xx [ 105 ] ; xx [ 109 ] = xx [ 79 ] + xx [ 106 ] ; xx [ 110 ] =
xx [ 80 ] + xx [ 107 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 111 , xx
+ 40 , xx + 78 ) ; xx [ 105 ] = 9.519654819926142 ; xx [ 120 ] = xx [ 105 ] +
xx [ 148 ] ; xx [ 121 ] = xx [ 149 ] ; xx [ 122 ] = xx [ 150 ] ; xx [ 123 ] =
xx [ 151 ] ; xx [ 124 ] = xx [ 105 ] + xx [ 152 ] ; xx [ 125 ] = xx [ 153 ] ;
xx [ 126 ] = xx [ 154 ] ; xx [ 127 ] = xx [ 155 ] ; xx [ 128 ] = xx [ 105 ] +
xx [ 156 ] ; pm_math_Matrix3x3_xform_ra ( xx + 120 , xx + 102 , xx + 139 ) ;
xx [ 142 ] = xx [ 78 ] + xx [ 139 ] ; xx [ 143 ] = xx [ 79 ] + xx [ 140 ] ;
xx [ 144 ] = xx [ 80 ] + xx [ 141 ] ; xx [ 78 ] = pm_math_Vector3_dot_ra ( xx
+ 40 , xx + 108 ) + pm_math_Vector3_dot_ra ( xx + 102 , xx + 142 ) ; ii [ 0 ]
= factorSymmetricPosDef ( xx + 78 , 1 , xx + 79 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'test14/Steering Dynamics/Revolute1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 79 ] = 3.609878930371553e-6 ; xx [ 80 ] =
0.9999999999934914 ; xx [ 106 ] = - xx [ 79 ] ; xx [ 107 ] = xx [ 80 ] ; xx [
108 ] = - 4.313584751648768e-7 ; pm_math_Quaternion_xform_ra ( xx + 64 , xx +
106 , xx + 139 ) ; xx [ 106 ] = - xx [ 7 ] ; xx [ 107 ] = xx [ 7 ] ; xx [ 108
] = xx [ 7 ] ; xx [ 109 ] = xx [ 106 ] ; xx [ 110 ] = xx [ 7 ] ;
pm_math_Quaternion_compose_ra ( xx + 46 , xx + 107 , xx + 142 ) ; xx [ 107 ]
= ( xx [ 143 ] * xx [ 145 ] + xx [ 142 ] * xx [ 144 ] ) * xx [ 8 ] ; xx [ 108
] = xx [ 8 ] * ( xx [ 144 ] * xx [ 145 ] - xx [ 142 ] * xx [ 143 ] ) ; xx [
109 ] = xx [ 2 ] - ( xx [ 143 ] * xx [ 143 ] + xx [ 144 ] * xx [ 144 ] ) * xx
[ 8 ] ; xx [ 110 ] = pm_math_Vector3_dot_ra ( xx + 139 , xx + 107 ) ; xx [
130 ] = 1.375867795500073e-4 ; xx [ 131 ] = xx [ 110 ] / xx [ 130 ] ; xx [
139 ] = 7.912209039114072e-5 ; xx [ 140 ] = - 2.153789047902757e-5 ; xx [ 141
] = 1.784909161752764e-14 ; xx [ 135 ] = 5.108363663908206e-7 ; xx [ 142 ] =
2.027680659941788e-6 ; xx [ 143 ] = 0.9999999999978137 ; xx [ 144 ] = - xx [
135 ] ; xx [ 145 ] = xx [ 142 ] ; xx [ 146 ] = - xx [ 143 ] ; xx [ 147 ] =
1.088615360818163e-8 ; xx [ 148 ] = 2.963328989310169e-9 ; xx [ 149 ] =
2.455799033548659e-18 ; xx [ 150 ] = xx [ 147 ] * xx [ 131 ] ; xx [ 151 ] = -
( xx [ 148 ] * xx [ 131 ] ) ; xx [ 152 ] = xx [ 149 ] * xx [ 131 ] ;
pm_math_Quaternion_xform_ra ( xx + 73 , xx + 150 , xx + 153 ) ; xx [ 156 ] =
- 1.216632498952289e-6 ; xx [ 157 ] = 0.99844426994826 ; xx [ 158 ] = -
0.05575876438621875 ; xx [ 159 ] = - 3.580316125383367e-7 ; xx [ 150 ] = xx [
7 ] * state [ 14 ] ; xx [ 151 ] = 1.171949768652286e-7 ; xx [ 152 ] = sin (
xx [ 150 ] ) ; xx [ 160 ] = 4.313588970662109e-7 ; xx [ 161 ] = cos ( xx [
150 ] ) ; xx [ 162 ] = - ( xx [ 151 ] * xx [ 152 ] ) ; xx [ 163 ] = - ( xx [
160 ] * xx [ 152 ] ) ; xx [ 164 ] = - xx [ 152 ] ;
pm_math_Quaternion_compose_ra ( xx + 156 , xx + 161 , xx + 165 ) ; xx [ 150 ]
= xx [ 165 ] * xx [ 165 ] ; xx [ 152 ] = ( xx [ 150 ] + xx [ 166 ] * xx [ 166
] ) * xx [ 8 ] - xx [ 2 ] ; xx [ 156 ] = xx [ 166 ] * xx [ 167 ] ; xx [ 157 ]
= xx [ 165 ] * xx [ 168 ] ; xx [ 158 ] = xx [ 8 ] * ( xx [ 156 ] - xx [ 157 ]
) ; xx [ 159 ] = xx [ 166 ] * xx [ 168 ] ; xx [ 161 ] = xx [ 165 ] * xx [ 167
] ; xx [ 162 ] = ( xx [ 159 ] + xx [ 161 ] ) * xx [ 8 ] ; xx [ 163 ] = ( xx [
156 ] + xx [ 157 ] ) * xx [ 8 ] ; xx [ 156 ] = ( xx [ 150 ] + xx [ 167 ] * xx
[ 167 ] ) * xx [ 8 ] - xx [ 2 ] ; xx [ 157 ] = xx [ 167 ] * xx [ 168 ] ; xx [
164 ] = xx [ 165 ] * xx [ 166 ] ; xx [ 169 ] = xx [ 8 ] * ( xx [ 157 ] - xx [
164 ] ) ; xx [ 170 ] = xx [ 8 ] * ( xx [ 159 ] - xx [ 161 ] ) ; xx [ 159 ] =
( xx [ 157 ] + xx [ 164 ] ) * xx [ 8 ] ; xx [ 157 ] = ( xx [ 150 ] + xx [ 168
] * xx [ 168 ] ) * xx [ 8 ] - xx [ 2 ] ; xx [ 171 ] = xx [ 152 ] ; xx [ 172 ]
= xx [ 158 ] ; xx [ 173 ] = xx [ 162 ] ; xx [ 174 ] = xx [ 163 ] ; xx [ 175 ]
= xx [ 156 ] ; xx [ 176 ] = xx [ 169 ] ; xx [ 177 ] = xx [ 170 ] ; xx [ 178 ]
= xx [ 159 ] ; xx [ 179 ] = xx [ 157 ] ; xx [ 150 ] = 0.3199842737592205 ; xx
[ 161 ] = 2.344649231924292e-13 ; xx [ 164 ] = - 1.94337888324749e-22 ; xx [
180 ] = 0.319984273760018 ; xx [ 181 ] = 5.290089472440635e-23 ; xx [ 182 ] =
0.3199842737600818 ; xx [ 183 ] = xx [ 150 ] ; xx [ 184 ] = xx [ 161 ] ; xx [
185 ] = xx [ 164 ] ; xx [ 186 ] = xx [ 161 ] ; xx [ 187 ] = xx [ 180 ] ; xx [
188 ] = xx [ 181 ] ; xx [ 189 ] = xx [ 164 ] ; xx [ 190 ] = xx [ 181 ] ; xx [
191 ] = xx [ 182 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 183 , xx +
171 , xx + 192 ) ; pm_math_Matrix3x3_compose_ra ( xx + 171 , xx + 192 , xx +
183 ) ; xx [ 161 ] = xx [ 73 ] * xx [ 73 ] ; xx [ 164 ] = ( xx [ 161 ] + xx [
74 ] * xx [ 74 ] ) * xx [ 8 ] - xx [ 2 ] ; xx [ 171 ] = xx [ 74 ] * xx [ 75 ]
; xx [ 172 ] = xx [ 73 ] * xx [ 76 ] ; xx [ 173 ] = xx [ 8 ] * ( xx [ 171 ] -
xx [ 172 ] ) ; xx [ 174 ] = xx [ 74 ] * xx [ 76 ] ; xx [ 175 ] = xx [ 73 ] *
xx [ 75 ] ; xx [ 176 ] = ( xx [ 174 ] + xx [ 175 ] ) * xx [ 8 ] ; xx [ 177 ]
= ( xx [ 171 ] + xx [ 172 ] ) * xx [ 8 ] ; xx [ 171 ] = ( xx [ 161 ] + xx [
75 ] * xx [ 75 ] ) * xx [ 8 ] - xx [ 2 ] ; xx [ 172 ] = xx [ 75 ] * xx [ 76 ]
; xx [ 178 ] = xx [ 73 ] * xx [ 74 ] ; xx [ 179 ] = xx [ 8 ] * ( xx [ 172 ] -
xx [ 178 ] ) ; xx [ 181 ] = xx [ 8 ] * ( xx [ 174 ] - xx [ 175 ] ) ; xx [ 174
] = ( xx [ 172 ] + xx [ 178 ] ) * xx [ 8 ] ; xx [ 172 ] = ( xx [ 161 ] + xx [
76 ] * xx [ 76 ] ) * xx [ 8 ] - xx [ 2 ] ; xx [ 192 ] = xx [ 164 ] ; xx [ 193
] = xx [ 173 ] ; xx [ 194 ] = xx [ 176 ] ; xx [ 195 ] = xx [ 177 ] ; xx [ 196
] = xx [ 171 ] ; xx [ 197 ] = xx [ 179 ] ; xx [ 198 ] = xx [ 181 ] ; xx [ 199
] = xx [ 174 ] ; xx [ 200 ] = xx [ 172 ] ; xx [ 161 ] = 2.344647841508868e-13
; xx [ 175 ] = - 1.943079531149131e-22 ; xx [ 178 ] = 5.289273062307279e-23 ;
xx [ 201 ] = xx [ 150 ] ; xx [ 202 ] = xx [ 161 ] ; xx [ 203 ] = xx [ 175 ] ;
xx [ 204 ] = xx [ 161 ] ; xx [ 205 ] = xx [ 180 ] ; xx [ 206 ] = xx [ 178 ] ;
xx [ 207 ] = xx [ 175 ] ; xx [ 208 ] = xx [ 178 ] ; xx [ 209 ] = xx [ 182 ] ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 201 , xx + 192 , xx + 210 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 192 , xx + 210 , xx + 201 ) ; xx [ 150 ]
= 1.690994682149928 ; xx [ 192 ] = xx [ 183 ] + xx [ 201 ] + xx [ 150 ] ; xx
[ 193 ] = xx [ 184 ] + xx [ 202 ] ; xx [ 194 ] = xx [ 185 ] + xx [ 203 ] ; xx
[ 195 ] = xx [ 186 ] + xx [ 204 ] ; xx [ 196 ] = xx [ 187 ] + xx [ 205 ] + xx
[ 150 ] ; xx [ 197 ] = xx [ 188 ] + xx [ 206 ] ; xx [ 198 ] = xx [ 189 ] + xx
[ 207 ] ; xx [ 199 ] = xx [ 190 ] + xx [ 208 ] ; xx [ 200 ] = xx [ 191 ] + xx
[ 209 ] + xx [ 150 ] ; pm_math_Matrix3x3_xform_ra ( xx + 192 , xx + 144 , xx
+ 183 ) ; xx [ 150 ] = pm_math_Vector3_dot_ra ( xx + 144 , xx + 183 ) ; ii [
0 ] = factorSymmetricPosDef ( xx + 150 , 1 , xx + 161 ) ; if ( ii [ 0 ] != 0
) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Prismatic Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 161 ] = pm_math_Vector3_dot_ra ( xx + 144 , xx + 153 )
/ xx [ 150 ] ; xx [ 153 ] = xx [ 135 ] * xx [ 161 ] ; xx [ 154 ] = - ( xx [
142 ] * xx [ 161 ] ) ; xx [ 155 ] = xx [ 143 ] * xx [ 161 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 73 , xx + 153 , xx + 183 ) ; xx [
153 ] = 0.1106342046522872 ; xx [ 154 ] = 1.655280357226729e-13 ; xx [ 186 ]
= xx [ 153 ] ; xx [ 187 ] = 0.02999999999998754 ; xx [ 188 ] = - xx [ 154 ] ;
pm_math_Vector3_cross_ra ( xx + 43 , xx + 186 , xx + 189 ) ;
pm_math_Quaternion_xform_ra ( xx + 46 , xx + 189 , xx + 43 ) ;
pm_math_Vector3_cross_ra ( xx + 40 , xx + 136 , xx + 189 ) ;
pm_math_Quaternion_xform_ra ( xx + 56 , xx + 189 , xx + 192 ) ;
pm_math_Quaternion_xform_ra ( xx + 56 , xx + 102 , xx + 189 ) ; xx [ 155 ] =
xx [ 43 ] + xx [ 192 ] + xx [ 189 ] ; xx [ 161 ] = 2.328718797025195e-3 ; xx
[ 175 ] = xx [ 153 ] * xx [ 47 ] - xx [ 154 ] * xx [ 49 ] ; xx [ 178 ] = xx [
154 ] * xx [ 48 ] ; xx [ 195 ] = - ( xx [ 153 ] * xx [ 48 ] ) ; xx [ 196 ] =
xx [ 175 ] ; xx [ 197 ] = xx [ 178 ] ; pm_math_Vector3_cross_ra ( xx + 47 ,
xx + 195 , xx + 198 ) ; xx [ 180 ] = xx [ 46 ] * xx [ 48 ] ; xx [ 195 ] = xx
[ 132 ] * xx [ 34 ] ; xx [ 196 ] = xx [ 134 ] * xx [ 25 ] ; xx [ 197 ] = xx [
24 ] * xx [ 195 ] - xx [ 196 ] ; xx [ 201 ] = xx [ 24 ] * xx [ 134 ] + xx [
195 ] * xx [ 25 ] ; xx [ 202 ] = xx [ 35 ] * xx [ 134 ] ; xx [ 203 ] = ( xx [
195 ] * xx [ 34 ] + xx [ 202 ] ) * xx [ 8 ] - xx [ 132 ] ; xx [ 204 ] = xx [
197 ] * xx [ 8 ] ; xx [ 205 ] = xx [ 8 ] * xx [ 201 ] ; xx [ 206 ] = xx [ 203
] ; pm_math_Quaternion_xform_ra ( xx + 56 , xx + 204 , xx + 207 ) ; xx [ 195
] = ( xx [ 198 ] - xx [ 153 ] * xx [ 180 ] ) * xx [ 8 ] + xx [ 207 ] - xx [
154 ] ; xx [ 154 ] = 5.681409681304551e-3 ; xx [ 204 ] = xx [ 195 ] / xx [
154 ] ; xx [ 205 ] = xx [ 161 ] * xx [ 204 ] ; xx [ 206 ] = xx [ 205 ] * xx [
34 ] ; xx [ 210 ] = xx [ 24 ] * xx [ 205 ] ; xx [ 211 ] = 0.03030428875787876
; xx [ 212 ] = xx [ 211 ] * xx [ 204 ] ; xx [ 213 ] = xx [ 212 ] * xx [ 34 ]
; xx [ 214 ] = xx [ 35 ] * xx [ 212 ] ; xx [ 215 ] = ( xx [ 24 ] * xx [ 213 ]
- xx [ 214 ] * xx [ 25 ] ) * xx [ 8 ] ; xx [ 216 ] = xx [ 8 ] * ( xx [ 24 ] *
xx [ 214 ] + xx [ 213 ] * xx [ 25 ] ) ; xx [ 217 ] = ( xx [ 213 ] * xx [ 34 ]
+ xx [ 35 ] * xx [ 214 ] ) * xx [ 8 ] - xx [ 212 ] ; pm_math_Vector3_cross_ra
( xx + 136 , xx + 215 , xx + 212 ) ; xx [ 218 ] = xx [ 8 ] * ( xx [ 35 ] * xx
[ 206 ] + xx [ 210 ] * xx [ 25 ] ) + xx [ 212 ] ; xx [ 219 ] = xx [ 205 ] - (
xx [ 24 ] * xx [ 210 ] + xx [ 206 ] * xx [ 34 ] ) * xx [ 8 ] + xx [ 213 ] ;
xx [ 220 ] = ( xx [ 206 ] * xx [ 25 ] - xx [ 35 ] * xx [ 210 ] ) * xx [ 8 ] +
xx [ 214 ] ; xx [ 205 ] = ( xx [ 155 ] - ( pm_math_Vector3_dot_ra ( xx + 40 ,
xx + 218 ) + pm_math_Vector3_dot_ra ( xx + 102 , xx + 215 ) ) ) / xx [ 78 ] ;
xx [ 212 ] = 0.01999996597895712 ; xx [ 213 ] = 8.14584366991918e-8 ; xx [
214 ] = - 2.343930703864273e-9 ; pm_math_Quaternion_xform_ra ( xx + 64 , xx +
212 , xx + 215 ) ; xx [ 206 ] = 3.402090196577556e-8 ; xx [ 210 ] =
9.260858211838302e-9 ; xx [ 212 ] = 7.674749151547277e-18 ; xx [ 218 ] = xx [
206 ] ; xx [ 219 ] = - xx [ 210 ] ; xx [ 220 ] = xx [ 212 ] ;
pm_math_Quaternion_xform_ra ( xx + 73 , xx + 218 , xx + 221 ) ;
pm_math_Quaternion_xform_ra ( xx + 60 , xx + 221 , xx + 224 ) ; xx [ 213 ] =
xx [ 215 ] + xx [ 224 ] ; xx [ 214 ] = xx [ 213 ] / xx [ 130 ] ; xx [ 221 ] =
- ( xx [ 147 ] * xx [ 214 ] ) ; xx [ 222 ] = xx [ 148 ] * xx [ 214 ] ; xx [
223 ] = - ( xx [ 149 ] * xx [ 214 ] ) ; pm_math_Quaternion_xform_ra ( xx + 73
, xx + 221 , xx + 227 ) ; xx [ 221 ] = pm_math_Vector3_dot_ra ( xx + 144 , xx
+ 227 ) / xx [ 150 ] ; xx [ 227 ] = xx [ 135 ] * xx [ 221 ] ; xx [ 228 ] = -
( xx [ 142 ] * xx [ 221 ] ) ; xx [ 229 ] = xx [ 143 ] * xx [ 221 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 73 , xx + 227 , xx + 221 ) ; xx [
227 ] = xx [ 214 ] + pm_math_Vector3_dot_ra ( xx + 139 , xx + 221 ) ; xx [
214 ] = xx [ 50 ] * xx [ 205 ] - xx [ 110 ] * xx [ 227 ] ; xx [ 221 ] = xx [
44 ] + xx [ 193 ] + xx [ 190 ] ; xx [ 222 ] = ( xx [ 46 ] * xx [ 175 ] + xx [
199 ] ) * xx [ 8 ] + xx [ 208 ] ; xx [ 175 ] = xx [ 222 ] / xx [ 154 ] ; xx [
223 ] = xx [ 161 ] * xx [ 175 ] ; xx [ 228 ] = xx [ 223 ] * xx [ 34 ] ; xx [
229 ] = xx [ 24 ] * xx [ 223 ] ; xx [ 230 ] = xx [ 211 ] * xx [ 175 ] ; xx [
231 ] = xx [ 230 ] * xx [ 34 ] ; xx [ 232 ] = xx [ 35 ] * xx [ 230 ] ; xx [
233 ] = ( xx [ 24 ] * xx [ 231 ] - xx [ 232 ] * xx [ 25 ] ) * xx [ 8 ] ; xx [
234 ] = xx [ 8 ] * ( xx [ 24 ] * xx [ 232 ] + xx [ 231 ] * xx [ 25 ] ) ; xx [
235 ] = ( xx [ 231 ] * xx [ 34 ] + xx [ 35 ] * xx [ 232 ] ) * xx [ 8 ] - xx [
230 ] ; pm_math_Vector3_cross_ra ( xx + 136 , xx + 233 , xx + 230 ) ; xx [
236 ] = xx [ 8 ] * ( xx [ 35 ] * xx [ 228 ] + xx [ 229 ] * xx [ 25 ] ) + xx [
230 ] ; xx [ 237 ] = xx [ 223 ] - ( xx [ 24 ] * xx [ 229 ] + xx [ 228 ] * xx
[ 34 ] ) * xx [ 8 ] + xx [ 231 ] ; xx [ 238 ] = ( xx [ 228 ] * xx [ 25 ] - xx
[ 35 ] * xx [ 229 ] ) * xx [ 8 ] + xx [ 232 ] ; xx [ 223 ] = ( xx [ 221 ] - (
pm_math_Vector3_dot_ra ( xx + 40 , xx + 236 ) + pm_math_Vector3_dot_ra ( xx +
102 , xx + 233 ) ) ) / xx [ 78 ] ; xx [ 228 ] = xx [ 216 ] + xx [ 225 ] ; xx
[ 229 ] = xx [ 228 ] / xx [ 130 ] ; xx [ 230 ] = - ( xx [ 147 ] * xx [ 229 ]
) ; xx [ 231 ] = xx [ 148 ] * xx [ 229 ] ; xx [ 232 ] = - ( xx [ 149 ] * xx [
229 ] ) ; pm_math_Quaternion_xform_ra ( xx + 73 , xx + 230 , xx + 233 ) ; xx
[ 230 ] = pm_math_Vector3_dot_ra ( xx + 144 , xx + 233 ) / xx [ 150 ] ; xx [
231 ] = xx [ 135 ] * xx [ 230 ] ; xx [ 232 ] = - ( xx [ 142 ] * xx [ 230 ] )
; xx [ 233 ] = xx [ 143 ] * xx [ 230 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 73 , xx + 231 , xx + 234 ) ; xx [ 230 ] = xx [ 229 ] +
pm_math_Vector3_dot_ra ( xx + 139 , xx + 234 ) ; xx [ 229 ] = xx [ 50 ] * xx
[ 223 ] - xx [ 110 ] * xx [ 230 ] ; xx [ 43 ] = xx [ 45 ] + xx [ 194 ] + xx [
191 ] ; xx [ 44 ] = xx [ 8 ] * ( xx [ 200 ] + xx [ 46 ] * xx [ 178 ] ) + xx [
209 ] - xx [ 153 ] ; xx [ 45 ] = xx [ 44 ] / xx [ 154 ] ; xx [ 153 ] = xx [
161 ] * xx [ 45 ] ; xx [ 178 ] = xx [ 153 ] * xx [ 34 ] ; xx [ 189 ] = xx [
24 ] * xx [ 153 ] ; xx [ 190 ] = xx [ 211 ] * xx [ 45 ] ; xx [ 191 ] = xx [
190 ] * xx [ 34 ] ; xx [ 192 ] = xx [ 35 ] * xx [ 190 ] ; xx [ 198 ] = ( xx [
24 ] * xx [ 191 ] - xx [ 192 ] * xx [ 25 ] ) * xx [ 8 ] ; xx [ 199 ] = xx [ 8
] * ( xx [ 24 ] * xx [ 192 ] + xx [ 191 ] * xx [ 25 ] ) ; xx [ 200 ] = ( xx [
191 ] * xx [ 34 ] + xx [ 35 ] * xx [ 192 ] ) * xx [ 8 ] - xx [ 190 ] ;
pm_math_Vector3_cross_ra ( xx + 136 , xx + 198 , xx + 190 ) ; xx [ 207 ] = xx
[ 8 ] * ( xx [ 35 ] * xx [ 178 ] + xx [ 189 ] * xx [ 25 ] ) + xx [ 190 ] ; xx
[ 208 ] = xx [ 153 ] - ( xx [ 24 ] * xx [ 189 ] + xx [ 178 ] * xx [ 34 ] ) *
xx [ 8 ] + xx [ 191 ] ; xx [ 209 ] = ( xx [ 178 ] * xx [ 25 ] - xx [ 35 ] *
xx [ 189 ] ) * xx [ 8 ] + xx [ 192 ] ; xx [ 25 ] = ( xx [ 43 ] - (
pm_math_Vector3_dot_ra ( xx + 40 , xx + 207 ) + pm_math_Vector3_dot_ra ( xx +
102 , xx + 198 ) ) ) / xx [ 78 ] ; xx [ 35 ] = xx [ 217 ] + xx [ 226 ] ; xx [
153 ] = xx [ 35 ] / xx [ 130 ] ; xx [ 189 ] = - ( xx [ 147 ] * xx [ 153 ] ) ;
xx [ 190 ] = xx [ 148 ] * xx [ 153 ] ; xx [ 191 ] = - ( xx [ 149 ] * xx [ 153
] ) ; pm_math_Quaternion_xform_ra ( xx + 73 , xx + 189 , xx + 192 ) ; xx [
178 ] = ( xx [ 2 ] - pm_math_Vector3_dot_ra ( xx + 144 , xx + 192 ) ) / xx [
150 ] ; xx [ 189 ] = - ( xx [ 135 ] * xx [ 178 ] ) ; xx [ 190 ] = xx [ 142 ]
* xx [ 178 ] ; xx [ 191 ] = - ( xx [ 143 ] * xx [ 178 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 73 , xx + 189 , xx + 192 ) ; xx [
189 ] = xx [ 153 ] + pm_math_Vector3_dot_ra ( xx + 139 , xx + 192 ) ; xx [
153 ] = xx [ 50 ] * xx [ 25 ] - xx [ 110 ] * xx [ 189 ] ; xx [ 190 ] =
1.088615525016327e-8 ; pm_math_Quaternion_compose_ra ( xx + 60 , xx + 165 ,
xx + 191 ) ; xx [ 198 ] = xx [ 79 ] ; xx [ 199 ] = - xx [ 80 ] ; xx [ 200 ] =
4.313584740037256e-7 ; pm_math_Quaternion_xform_ra ( xx + 191 , xx + 198 , xx
+ 207 ) ; xx [ 231 ] = - 0.08499731596381738 ; xx [ 232 ] = -
0.7052243478362852 ; xx [ 233 ] = - 0.08288208610093117 ; xx [ 234 ] = -
0.6989739875713483 ; xx [ 79 ] = xx [ 7 ] * state [ 2 ] ; xx [ 80 ] =
0.2357227559798625 ; xx [ 198 ] = sin ( xx [ 79 ] ) ; xx [ 199 ] =
0.9718120321650099 ; xx [ 200 ] = 4.019508996436549e-3 ; xx [ 235 ] = cos (
xx [ 79 ] ) ; xx [ 236 ] = - ( xx [ 80 ] * xx [ 198 ] ) ; xx [ 237 ] = xx [
199 ] * xx [ 198 ] ; xx [ 238 ] = xx [ 200 ] * xx [ 198 ] ;
pm_math_Quaternion_compose_ra ( xx + 231 , xx + 235 , xx + 239 ) ; xx [ 79 ]
= 1.495693379815366e-3 ; xx [ 198 ] = xx [ 7 ] * state [ 4 ] ; xx [ 215 ] =
cos ( xx [ 198 ] ) ; xx [ 216 ] = 0.1187086636215266 ; xx [ 217 ] = sin ( xx
[ 198 ] ) ; xx [ 198 ] = xx [ 79 ] * xx [ 215 ] + xx [ 216 ] * xx [ 217 ] ;
xx [ 224 ] = 0.9929181650975998 ; xx [ 225 ] = 4.419672128196023e-3 ; xx [
226 ] = xx [ 224 ] * xx [ 215 ] + xx [ 225 ] * xx [ 217 ] ; xx [ 231 ] = xx [
216 ] * xx [ 215 ] - xx [ 79 ] * xx [ 217 ] ; xx [ 79 ] = xx [ 224 ] * xx [
217 ] - xx [ 225 ] * xx [ 215 ] ; xx [ 232 ] = - xx [ 198 ] ; xx [ 233 ] = xx
[ 226 ] ; xx [ 234 ] = xx [ 231 ] ; xx [ 235 ] = xx [ 79 ] ;
pm_math_Quaternion_compose_ra ( xx + 239 , xx + 232 , xx + 243 ) ; xx [ 247 ]
= xx [ 7 ] ; xx [ 248 ] = xx [ 106 ] ; xx [ 249 ] = xx [ 106 ] ; xx [ 250 ] =
xx [ 106 ] ; pm_math_Quaternion_compose_ra ( xx + 243 , xx + 247 , xx + 251 )
; xx [ 215 ] = ( xx [ 252 ] * xx [ 254 ] + xx [ 251 ] * xx [ 253 ] ) * xx [ 8
] ; xx [ 216 ] = xx [ 8 ] * ( xx [ 253 ] * xx [ 254 ] - xx [ 251 ] * xx [ 252
] ) ; xx [ 217 ] = xx [ 2 ] - ( xx [ 252 ] * xx [ 252 ] + xx [ 253 ] * xx [
253 ] ) * xx [ 8 ] ; xx [ 7 ] = pm_math_Vector3_dot_ra ( xx + 207 , xx + 215
) ; xx [ 106 ] = xx [ 7 ] / xx [ 130 ] ; xx [ 207 ] = 2.963330299648476e-9 ;
xx [ 208 ] = 2.456177005077175e-18 ; xx [ 236 ] = - ( xx [ 190 ] * xx [ 106 ]
) ; xx [ 237 ] = xx [ 207 ] * xx [ 106 ] ; xx [ 238 ] = - ( xx [ 208 ] * xx [
106 ] ) ; pm_math_Quaternion_xform_ra ( xx + 165 , xx + 236 , xx + 247 ) ; xx
[ 209 ] = pm_math_Vector3_dot_ra ( xx + 144 , xx + 247 ) / xx [ 150 ] ; xx [
236 ] = xx [ 135 ] * xx [ 209 ] ; xx [ 237 ] = - ( xx [ 142 ] * xx [ 209 ] )
; xx [ 238 ] = xx [ 143 ] * xx [ 209 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 73 , xx + 236 , xx + 247 ) ; xx [ 224 ] = pm_math_Vector3_dot_ra ( xx +
139 , xx + 247 ) ; xx [ 225 ] = - ( xx [ 224 ] * xx [ 110 ] ) ; xx [ 247 ] =
- 0.01999996597895718 ; xx [ 248 ] = - 8.145843665889382e-8 ; xx [ 249 ] =
2.343930688030639e-9 ; pm_math_Quaternion_xform_ra ( xx + 191 , xx + 247 , xx
+ 250 ) ; xx [ 247 ] = 3.402090709722037e-8 ; xx [ 248 ] =
9.260862306846759e-9 ; xx [ 249 ] = 7.675930370624308e-18 ; xx [ 253 ] = - xx
[ 247 ] ; xx [ 254 ] = xx [ 248 ] ; xx [ 255 ] = - xx [ 249 ] ;
pm_math_Quaternion_xform_ra ( xx + 165 , xx + 253 , xx + 256 ) ;
pm_math_Quaternion_xform_ra ( xx + 60 , xx + 256 , xx + 259 ) ; xx [ 256 ] =
xx [ 250 ] + xx [ 259 ] ; xx [ 257 ] = xx [ 256 ] / xx [ 130 ] ; xx [ 262 ] =
xx [ 190 ] * xx [ 257 ] ; xx [ 263 ] = - ( xx [ 207 ] * xx [ 257 ] ) ; xx [
264 ] = xx [ 208 ] * xx [ 257 ] ; pm_math_Quaternion_xform_ra ( xx + 165 , xx
+ 262 , xx + 265 ) ; xx [ 258 ] = pm_math_Vector3_dot_ra ( xx + 144 , xx +
265 ) / xx [ 150 ] ; xx [ 262 ] = xx [ 135 ] * xx [ 258 ] ; xx [ 263 ] = - (
xx [ 142 ] * xx [ 258 ] ) ; xx [ 264 ] = xx [ 143 ] * xx [ 258 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 73 , xx + 262 , xx + 265 ) ; xx [
268 ] = pm_math_Vector3_dot_ra ( xx + 139 , xx + 265 ) ; xx [ 265 ] = - ( xx
[ 268 ] * xx [ 110 ] ) ; xx [ 266 ] = xx [ 251 ] + xx [ 260 ] ; xx [ 267 ] =
xx [ 266 ] / xx [ 130 ] ; xx [ 269 ] = xx [ 190 ] * xx [ 267 ] ; xx [ 270 ] =
- ( xx [ 207 ] * xx [ 267 ] ) ; xx [ 271 ] = xx [ 208 ] * xx [ 267 ] ;
pm_math_Quaternion_xform_ra ( xx + 165 , xx + 269 , xx + 272 ) ; xx [ 269 ] =
pm_math_Vector3_dot_ra ( xx + 144 , xx + 272 ) / xx [ 150 ] ; xx [ 270 ] = xx
[ 135 ] * xx [ 269 ] ; xx [ 271 ] = - ( xx [ 142 ] * xx [ 269 ] ) ; xx [ 272
] = xx [ 143 ] * xx [ 269 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 73 ,
xx + 270 , xx + 273 ) ; xx [ 276 ] = pm_math_Vector3_dot_ra ( xx + 139 , xx +
273 ) ; xx [ 273 ] = - ( xx [ 276 ] * xx [ 110 ] ) ; xx [ 250 ] = xx [ 252 ]
+ xx [ 261 ] ; xx [ 251 ] = xx [ 250 ] / xx [ 130 ] ; xx [ 259 ] = xx [ 190 ]
* xx [ 251 ] ; xx [ 260 ] = - ( xx [ 207 ] * xx [ 251 ] ) ; xx [ 261 ] = xx [
208 ] * xx [ 251 ] ; pm_math_Quaternion_xform_ra ( xx + 165 , xx + 259 , xx +
277 ) ; xx [ 252 ] = ( xx [ 2 ] - pm_math_Vector3_dot_ra ( xx + 144 , xx +
277 ) ) / xx [ 150 ] ; xx [ 259 ] = - ( xx [ 135 ] * xx [ 252 ] ) ; xx [ 260
] = xx [ 142 ] * xx [ 252 ] ; xx [ 261 ] = - ( xx [ 143 ] * xx [ 252 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 73 , xx + 259 , xx + 277 ) ; xx [
274 ] = pm_math_Vector3_dot_ra ( xx + 139 , xx + 277 ) ; xx [ 275 ] = - ( xx
[ 274 ] * xx [ 110 ] ) ; xx [ 277 ] = 0.9999999999935776 ; xx [ 278 ] =
3.609878886663269e-6 ; xx [ 279 ] = - 1.17196534017851e-7 ;
pm_math_Quaternion_xform_ra ( xx + 191 , xx + 277 , xx + 280 ) ; xx [ 277 ] =
xx [ 280 ] / xx [ 130 ] ; xx [ 281 ] = - ( xx [ 190 ] * xx [ 277 ] ) ; xx [
282 ] = xx [ 207 ] * xx [ 277 ] ; xx [ 283 ] = - ( xx [ 208 ] * xx [ 277 ] )
; pm_math_Quaternion_xform_ra ( xx + 165 , xx + 281 , xx + 284 ) ; xx [ 278 ]
= pm_math_Vector3_dot_ra ( xx + 144 , xx + 284 ) / xx [ 150 ] ; xx [ 281 ] =
xx [ 135 ] * xx [ 278 ] ; xx [ 282 ] = - ( xx [ 142 ] * xx [ 278 ] ) ; xx [
283 ] = xx [ 143 ] * xx [ 278 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
73 , xx + 281 , xx + 284 ) ; xx [ 279 ] = pm_math_Vector3_dot_ra ( xx + 139 ,
xx + 284 ) ; xx [ 284 ] = - ( xx [ 279 ] * xx [ 110 ] ) ; xx [ 285 ] =
0.9999999999935774 ; xx [ 286 ] = 3.609878872785481e-6 ; xx [ 287 ] = -
1.17196534809527e-7 ; pm_math_Quaternion_xform_ra ( xx + 64 , xx + 285 , xx +
288 ) ; xx [ 285 ] = xx [ 288 ] / xx [ 130 ] ; xx [ 289 ] = xx [ 147 ] * xx [
285 ] ; xx [ 290 ] = - ( xx [ 148 ] * xx [ 285 ] ) ; xx [ 291 ] = xx [ 149 ]
* xx [ 285 ] ; pm_math_Quaternion_xform_ra ( xx + 73 , xx + 289 , xx + 292 )
; xx [ 286 ] = pm_math_Vector3_dot_ra ( xx + 144 , xx + 292 ) / xx [ 150 ] ;
xx [ 289 ] = xx [ 135 ] * xx [ 286 ] ; xx [ 290 ] = - ( xx [ 142 ] * xx [ 286
] ) ; xx [ 291 ] = xx [ 143 ] * xx [ 286 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 73 , xx + 289 , xx + 292 ) ; xx [
287 ] = xx [ 285 ] - pm_math_Vector3_dot_ra ( xx + 139 , xx + 292 ) ; xx [
285 ] = xx [ 110 ] * xx [ 287 ] ; xx [ 292 ] = xx [ 2 ] / xx [ 150 ] ; xx [
293 ] = - ( xx [ 135 ] * xx [ 292 ] ) ; xx [ 294 ] = xx [ 142 ] * xx [ 292 ]
; xx [ 295 ] = - ( xx [ 143 ] * xx [ 292 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 73 , xx + 293 , xx + 296 ) ; xx [
299 ] = pm_math_Vector3_dot_ra ( xx + 139 , xx + 296 ) ; xx [ 296 ] = - ( xx
[ 299 ] * xx [ 110 ] ) ; xx [ 297 ] = 0.4098839773319218 ; xx [ 300 ] = - (
xx [ 37 ] * xx [ 205 ] ) ; xx [ 301 ] = - ( xx [ 38 ] * xx [ 205 ] ) ; xx [
302 ] = - ( xx [ 39 ] * xx [ 205 ] ) ; pm_math_Quaternion_inverseXform_ra (
xx + 30 , xx + 300 , xx + 303 ) ; xx [ 298 ] = 5.33393831069763 ;
pm_math_Vector3_cross_ra ( xx + 300 , xx + 136 , xx + 305 ) ; xx [ 300 ] = xx
[ 85 ] * xx [ 205 ] + xx [ 305 ] ; xx [ 301 ] = xx [ 306 ] - xx [ 88 ] * xx [
205 ] ; xx [ 302 ] = xx [ 307 ] - xx [ 90 ] * xx [ 205 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 30 , xx + 300 , xx + 305 ) ; xx [
300 ] = - ( xx [ 37 ] * xx [ 223 ] ) ; xx [ 301 ] = - ( xx [ 38 ] * xx [ 223
] ) ; xx [ 302 ] = - ( xx [ 39 ] * xx [ 223 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 30 , xx + 300 , xx + 308 ) ;
pm_math_Vector3_cross_ra ( xx + 300 , xx + 136 , xx + 310 ) ; xx [ 300 ] = xx
[ 85 ] * xx [ 223 ] + xx [ 310 ] ; xx [ 301 ] = xx [ 311 ] - xx [ 88 ] * xx [
223 ] ; xx [ 302 ] = xx [ 312 ] - xx [ 90 ] * xx [ 223 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 30 , xx + 300 , xx + 310 ) ; xx [
300 ] = xx [ 175 ] - ( xx [ 297 ] * xx [ 309 ] - xx [ 298 ] * xx [ 312 ] ) ;
xx [ 175 ] = xx [ 155 ] * xx [ 223 ] + xx [ 195 ] * xx [ 300 ] + xx [ 230 ] *
xx [ 213 ] ; xx [ 301 ] = - ( xx [ 37 ] * xx [ 25 ] ) ; xx [ 302 ] = - ( xx [
38 ] * xx [ 25 ] ) ; xx [ 303 ] = - ( xx [ 39 ] * xx [ 25 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 30 , xx + 301 , xx + 308 ) ;
pm_math_Vector3_cross_ra ( xx + 301 , xx + 136 , xx + 310 ) ; xx [ 301 ] = xx
[ 85 ] * xx [ 25 ] + xx [ 310 ] ; xx [ 302 ] = xx [ 311 ] - xx [ 88 ] * xx [
25 ] ; xx [ 303 ] = xx [ 312 ] - xx [ 90 ] * xx [ 25 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 30 , xx + 301 , xx + 310 ) ; xx [
301 ] = xx [ 45 ] - ( xx [ 297 ] * xx [ 309 ] - xx [ 298 ] * xx [ 312 ] ) ;
xx [ 45 ] = xx [ 155 ] * xx [ 25 ] + xx [ 195 ] * xx [ 301 ] + xx [ 189 ] *
xx [ 213 ] ; xx [ 302 ] = xx [ 224 ] * xx [ 213 ] ; xx [ 303 ] = xx [ 268 ] *
xx [ 213 ] ; xx [ 305 ] = xx [ 276 ] * xx [ 213 ] ; xx [ 306 ] = xx [ 274 ] *
xx [ 213 ] ; xx [ 308 ] = xx [ 279 ] * xx [ 213 ] ; xx [ 309 ] = - ( xx [ 213
] * xx [ 287 ] ) ; xx [ 310 ] = xx [ 299 ] * xx [ 213 ] ; xx [ 311 ] = xx [
221 ] * xx [ 25 ] + xx [ 222 ] * xx [ 301 ] + xx [ 189 ] * xx [ 228 ] ; xx [
312 ] = xx [ 224 ] * xx [ 228 ] ; xx [ 313 ] = xx [ 268 ] * xx [ 228 ] ; xx [
314 ] = xx [ 276 ] * xx [ 228 ] ; xx [ 315 ] = xx [ 274 ] * xx [ 228 ] ; xx [
316 ] = xx [ 279 ] * xx [ 228 ] ; xx [ 317 ] = - ( xx [ 228 ] * xx [ 287 ] )
; xx [ 318 ] = xx [ 299 ] * xx [ 228 ] ; xx [ 319 ] = xx [ 224 ] * xx [ 35 ]
- xx [ 209 ] ; xx [ 209 ] = xx [ 268 ] * xx [ 35 ] - xx [ 258 ] ; xx [ 224 ]
= xx [ 276 ] * xx [ 35 ] - xx [ 269 ] ; xx [ 258 ] = xx [ 252 ] + xx [ 274 ]
* xx [ 35 ] ; xx [ 268 ] = xx [ 279 ] * xx [ 35 ] - xx [ 278 ] ; xx [ 269 ] =
- ( xx [ 286 ] + xx [ 35 ] * xx [ 287 ] ) ; xx [ 274 ] = xx [ 292 ] + xx [
299 ] * xx [ 35 ] ; xx [ 320 ] = - xx [ 80 ] ; xx [ 321 ] = xx [ 199 ] ; xx [
322 ] = xx [ 200 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 232 , xx + 320
, xx + 323 ) ; xx [ 276 ] = xx [ 323 ] * xx [ 245 ] ; xx [ 279 ] = xx [ 325 ]
* xx [ 246 ] + xx [ 323 ] * xx [ 244 ] ; xx [ 326 ] = xx [ 245 ] * xx [ 325 ]
; xx [ 327 ] = xx [ 276 ] ; xx [ 328 ] = - xx [ 279 ] ; xx [ 329 ] = xx [ 326
] ; pm_math_Vector3_cross_ra ( xx + 244 , xx + 327 , xx + 330 ) ; xx [ 327 ]
= ( xx [ 243 ] * xx [ 276 ] + xx [ 330 ] ) * xx [ 8 ] - xx [ 325 ] ; xx [ 328
] = xx [ 8 ] * ( xx [ 331 ] - xx [ 279 ] * xx [ 243 ] ) ; xx [ 329 ] = xx [
323 ] + ( xx [ 243 ] * xx [ 326 ] + xx [ 332 ] ) * xx [ 8 ] ;
pm_math_Quaternion_compose_ra ( xx + 191 , xx + 69 , xx + 330 ) ; xx [ 69 ] =
xx [ 8 ] * ( xx [ 331 ] * xx [ 332 ] - xx [ 330 ] * xx [ 333 ] ) ; xx [ 70 ]
= xx [ 2 ] - ( xx [ 331 ] * xx [ 331 ] + xx [ 333 ] * xx [ 333 ] ) * xx [ 8 ]
; xx [ 71 ] = ( xx [ 332 ] * xx [ 333 ] + xx [ 330 ] * xx [ 331 ] ) * xx [ 8
] ; xx [ 72 ] = pm_math_Vector3_dot_ra ( xx + 327 , xx + 69 ) ; xx [ 276 ] =
0.2167655641879697 ; xx [ 279 ] = xx [ 198 ] * xx [ 198 ] ; xx [ 326 ] = ( xx
[ 279 ] + xx [ 226 ] * xx [ 226 ] ) * xx [ 8 ] - xx [ 2 ] ; xx [ 327 ] = xx [
231 ] * xx [ 226 ] ; xx [ 328 ] = xx [ 79 ] * xx [ 198 ] ; xx [ 329 ] = xx [
8 ] * ( xx [ 327 ] + xx [ 328 ] ) ; xx [ 330 ] = xx [ 79 ] * xx [ 226 ] ; xx
[ 331 ] = xx [ 231 ] * xx [ 198 ] ; xx [ 332 ] = ( xx [ 330 ] - xx [ 331 ] )
* xx [ 8 ] ; xx [ 333 ] = xx [ 327 ] - xx [ 328 ] ; xx [ 327 ] = xx [ 333 ] *
xx [ 8 ] ; xx [ 328 ] = ( xx [ 279 ] + xx [ 231 ] * xx [ 231 ] ) * xx [ 8 ] -
xx [ 2 ] ; xx [ 334 ] = xx [ 231 ] * xx [ 79 ] ; xx [ 335 ] = xx [ 226 ] * xx
[ 198 ] ; xx [ 336 ] = xx [ 8 ] * ( xx [ 334 ] + xx [ 335 ] ) ; xx [ 337 ] =
xx [ 330 ] + xx [ 331 ] ; xx [ 330 ] = xx [ 8 ] * xx [ 337 ] ; xx [ 331 ] = (
xx [ 334 ] - xx [ 335 ] ) * xx [ 8 ] ; xx [ 334 ] = ( xx [ 279 ] + xx [ 79 ]
* xx [ 79 ] ) * xx [ 8 ] - xx [ 2 ] ; xx [ 338 ] = xx [ 326 ] ; xx [ 339 ] =
xx [ 329 ] ; xx [ 340 ] = xx [ 332 ] ; xx [ 341 ] = xx [ 327 ] ; xx [ 342 ] =
xx [ 328 ] ; xx [ 343 ] = xx [ 336 ] ; xx [ 344 ] = xx [ 330 ] ; xx [ 345 ] =
xx [ 331 ] ; xx [ 346 ] = xx [ 334 ] ; xx [ 279 ] = 1.374214274412899e-3 ; xx
[ 347 ] = xx [ 53 ] * xx [ 326 ] ; xx [ 348 ] = xx [ 53 ] * xx [ 327 ] ; xx [
349 ] = xx [ 53 ] * xx [ 330 ] ; xx [ 350 ] = xx [ 279 ] * xx [ 329 ] ; xx [
351 ] = xx [ 279 ] * xx [ 328 ] ; xx [ 352 ] = xx [ 279 ] * xx [ 331 ] ; xx [
353 ] = xx [ 101 ] * xx [ 332 ] ; xx [ 354 ] = xx [ 101 ] * xx [ 336 ] ; xx [
355 ] = xx [ 101 ] * xx [ 334 ] ; pm_math_Matrix3x3_compose_ra ( xx + 338 ,
xx + 347 , xx + 356 ) ; xx [ 279 ] = 0.01242124240629439 ; xx [ 335 ] = xx [
279 ] * xx [ 332 ] ; xx [ 347 ] = xx [ 335 ] * xx [ 329 ] ; xx [ 348 ] = xx [
279 ] * xx [ 336 ] ; xx [ 349 ] = xx [ 348 ] * xx [ 329 ] ; xx [ 350 ] = xx [
279 ] * xx [ 334 ] ; xx [ 279 ] = xx [ 350 ] * xx [ 329 ] ; xx [ 351 ] = xx [
335 ] * xx [ 328 ] ; xx [ 352 ] = xx [ 348 ] * xx [ 328 ] ; xx [ 353 ] = xx [
350 ] * xx [ 328 ] ; xx [ 354 ] = xx [ 331 ] * xx [ 335 ] ; xx [ 335 ] = xx [
331 ] * xx [ 348 ] ; xx [ 348 ] = xx [ 331 ] * xx [ 350 ] ; xx [ 365 ] = xx [
347 ] ; xx [ 366 ] = xx [ 349 ] ; xx [ 367 ] = xx [ 279 ] ; xx [ 368 ] = xx [
351 ] ; xx [ 369 ] = xx [ 352 ] ; xx [ 370 ] = xx [ 353 ] ; xx [ 371 ] = xx [
354 ] ; xx [ 372 ] = xx [ 335 ] ; xx [ 373 ] = xx [ 348 ] ; xx [ 374 ] = xx [
226 ] ; xx [ 375 ] = xx [ 231 ] ; xx [ 376 ] = xx [ 79 ] ; xx [ 350 ] =
0.010001 ; xx [ 355 ] = xx [ 79 ] * xx [ 350 ] ; xx [ 377 ] =
0.1106342046522274 ; xx [ 378 ] = xx [ 79 ] * xx [ 377 ] ; xx [ 379 ] = xx [
231 ] * xx [ 377 ] ; xx [ 380 ] = xx [ 350 ] * xx [ 226 ] + xx [ 379 ] ; xx [
381 ] = - xx [ 355 ] ; xx [ 382 ] = - xx [ 378 ] ; xx [ 383 ] = xx [ 380 ] ;
pm_math_Vector3_cross_ra ( xx + 374 , xx + 381 , xx + 384 ) ; xx [ 374 ] = xx
[ 378 ] * xx [ 198 ] ; xx [ 381 ] = 0.1316810185882336 - ( xx [ 8 ] * ( xx [
384 ] + xx [ 355 ] * xx [ 198 ] ) - xx [ 377 ] ) ; xx [ 382 ] = - (
9.011414711072623e-3 + xx [ 350 ] + ( xx [ 374 ] + xx [ 385 ] ) * xx [ 8 ] )
; xx [ 383 ] = 0.1047270297279631 - ( xx [ 386 ] - xx [ 380 ] * xx [ 198 ] )
* xx [ 8 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 365 , xx + 381 , xx + 384
) ; xx [ 350 ] = 0.1122730754502181 ; xx [ 365 ] = xx [ 26 ] * xx [ 326 ] ;
xx [ 366 ] = xx [ 26 ] * xx [ 327 ] ; xx [ 367 ] = xx [ 26 ] * xx [ 330 ] ;
xx [ 368 ] = xx [ 26 ] * xx [ 329 ] ; xx [ 369 ] = xx [ 26 ] * xx [ 328 ] ;
xx [ 370 ] = xx [ 26 ] * xx [ 331 ] ; xx [ 371 ] = xx [ 350 ] * xx [ 332 ] ;
xx [ 372 ] = xx [ 350 ] * xx [ 336 ] ; xx [ 373 ] = xx [ 350 ] * xx [ 334 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 338 , xx + 365 , xx + 393 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 393 , xx + 381 , xx + 365 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 365 , xx + 381 , xx + 402 ) ; xx [ 327 ]
= 0.2183899636734285 ; xx [ 328 ] = 0.3739490255580858 ; xx [ 411 ] = xx [
276 ] + xx [ 356 ] - xx [ 384 ] - xx [ 384 ] - xx [ 402 ] ; xx [ 412 ] = xx [
357 ] - xx [ 385 ] - xx [ 387 ] - xx [ 403 ] ; xx [ 413 ] = xx [ 358 ] - xx [
386 ] - xx [ 390 ] - xx [ 404 ] ; xx [ 414 ] = xx [ 359 ] - xx [ 387 ] - xx [
385 ] - xx [ 405 ] ; xx [ 415 ] = xx [ 327 ] + xx [ 360 ] - xx [ 388 ] - xx [
388 ] - xx [ 406 ] ; xx [ 416 ] = xx [ 361 ] - xx [ 389 ] - xx [ 391 ] - xx [
407 ] ; xx [ 417 ] = xx [ 362 ] - xx [ 390 ] - xx [ 386 ] - xx [ 408 ] ; xx [
418 ] = xx [ 363 ] - xx [ 391 ] - xx [ 389 ] - xx [ 409 ] ; xx [ 419 ] = xx [
328 ] + xx [ 364 ] - xx [ 392 ] - xx [ 392 ] - xx [ 410 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 411 , xx + 320 , xx + 329 ) ; xx [ 355 ] =
xx [ 347 ] - xx [ 365 ] ; xx [ 356 ] = xx [ 349 ] - xx [ 368 ] ; xx [ 357 ] =
xx [ 279 ] - xx [ 371 ] ; xx [ 358 ] = xx [ 351 ] - xx [ 366 ] ; xx [ 359 ] =
xx [ 352 ] - xx [ 369 ] ; xx [ 360 ] = xx [ 353 ] - xx [ 372 ] ; xx [ 361 ] =
xx [ 354 ] - xx [ 367 ] ; xx [ 362 ] = xx [ 335 ] - xx [ 370 ] ; xx [ 363 ] =
xx [ 348 ] - xx [ 373 ] ; xx [ 279 ] = 0.1029642730927401 ; xx [ 332 ] =
0.02497328869161739 ; xx [ 334 ] = 4.179086652678059e-4 ; xx [ 347 ] = - xx [
279 ] ; xx [ 348 ] = - xx [ 332 ] ; xx [ 349 ] = - xx [ 334 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 355 , xx + 347 , xx + 350 ) ; xx [ 364 ] =
xx [ 329 ] + xx [ 350 ] ; xx [ 365 ] = xx [ 330 ] + xx [ 351 ] ; xx [ 366 ] =
xx [ 331 ] + xx [ 352 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 355 , xx
+ 320 , xx + 329 ) ; xx [ 384 ] = xx [ 105 ] + xx [ 393 ] ; xx [ 385 ] = xx [
394 ] ; xx [ 386 ] = xx [ 395 ] ; xx [ 387 ] = xx [ 396 ] ; xx [ 388 ] = xx [
105 ] + xx [ 397 ] ; xx [ 389 ] = xx [ 398 ] ; xx [ 390 ] = xx [ 399 ] ; xx [
391 ] = xx [ 400 ] ; xx [ 392 ] = xx [ 105 ] + xx [ 401 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 384 , xx + 347 , xx + 350 ) ; xx [ 367 ] =
xx [ 329 ] + xx [ 350 ] ; xx [ 368 ] = xx [ 330 ] + xx [ 351 ] ; xx [ 369 ] =
xx [ 331 ] + xx [ 352 ] ; xx [ 105 ] = pm_math_Vector3_dot_ra ( xx + 320 , xx
+ 364 ) + pm_math_Vector3_dot_ra ( xx + 347 , xx + 367 ) ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 105 , 1 , xx + 329 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'test14/Steering Dynamics/Revolute' has a degenerate mass distribution on its base side."
, neDiagMgr ) ; } xx [ 329 ] = - 7.912210232529344e-5 ; xx [ 330 ] =
2.153790000275007e-5 ; xx [ 331 ] = - 1.785183876757906e-14 ;
pm_math_Quaternion_inverseXform_ra ( xx + 165 , xx + 236 , xx + 350 ) ; xx [
236 ] = 9.999999999962842e-3 ; xx [ 237 ] = 0.1106342046522229 ; xx [ 364 ] =
xx [ 236 ] * xx [ 325 ] ; xx [ 365 ] = xx [ 237 ] * xx [ 325 ] ; xx [ 366 ] =
- ( xx [ 236 ] * xx [ 323 ] + xx [ 237 ] * xx [ 324 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 243 , xx + 364 , xx + 323 ) ;
pm_math_Vector3_cross_ra ( xx + 320 , xx + 381 , xx + 364 ) ;
pm_math_Quaternion_xform_ra ( xx + 239 , xx + 364 , xx + 367 ) ;
pm_math_Quaternion_xform_ra ( xx + 239 , xx + 347 , xx + 364 ) ; xx [ 238 ] =
xx [ 323 ] + xx [ 367 ] + xx [ 364 ] ; xx [ 335 ] = xx [ 379 ] * xx [ 198 ] ;
xx [ 336 ] = xx [ 377 ] * xx [ 226 ] ; xx [ 353 ] = xx [ 335 ] - xx [ 79 ] *
xx [ 336 ] ; xx [ 354 ] = xx [ 79 ] * xx [ 379 ] + xx [ 336 ] * xx [ 198 ] ;
xx [ 370 ] = xx [ 231 ] * xx [ 379 ] ; xx [ 371 ] = ( xx [ 336 ] * xx [ 226 ]
+ xx [ 370 ] ) * xx [ 8 ] - xx [ 377 ] ; xx [ 393 ] = xx [ 353 ] * xx [ 8 ] ;
xx [ 394 ] = - ( xx [ 8 ] * xx [ 354 ] ) ; xx [ 395 ] = xx [ 371 ] ;
pm_math_Quaternion_xform_ra ( xx + 239 , xx + 393 , xx + 396 ) ; xx [ 336 ] =
xx [ 237 ] * xx [ 245 ] ; xx [ 372 ] = xx [ 237 ] * xx [ 244 ] ; xx [ 373 ] =
xx [ 396 ] - ( xx [ 243 ] * xx [ 336 ] + xx [ 246 ] * xx [ 372 ] ) * xx [ 8 ]
; xx [ 375 ] = 5.681409681304544e-3 ; xx [ 376 ] = xx [ 373 ] / xx [ 375 ] ;
xx [ 380 ] = xx [ 161 ] * xx [ 376 ] ; xx [ 393 ] = xx [ 380 ] * xx [ 226 ] ;
xx [ 394 ] = xx [ 79 ] * xx [ 380 ] ; xx [ 395 ] = 0.03030428875787873 ; xx [
399 ] = xx [ 395 ] * xx [ 376 ] ; xx [ 400 ] = xx [ 231 ] * xx [ 399 ] ; xx [
401 ] = xx [ 399 ] * xx [ 226 ] ; xx [ 402 ] = ( xx [ 400 ] * xx [ 198 ] - xx
[ 79 ] * xx [ 401 ] ) * xx [ 8 ] ; xx [ 403 ] = - ( xx [ 8 ] * ( xx [ 79 ] *
xx [ 400 ] + xx [ 401 ] * xx [ 198 ] ) ) ; xx [ 404 ] = ( xx [ 401 ] * xx [
226 ] + xx [ 231 ] * xx [ 400 ] ) * xx [ 8 ] - xx [ 399 ] ;
pm_math_Vector3_cross_ra ( xx + 381 , xx + 402 , xx + 399 ) ; xx [ 405 ] = xx
[ 8 ] * ( xx [ 231 ] * xx [ 393 ] + xx [ 394 ] * xx [ 198 ] ) + xx [ 399 ] ;
xx [ 406 ] = xx [ 380 ] - ( xx [ 79 ] * xx [ 394 ] + xx [ 393 ] * xx [ 226 ]
) * xx [ 8 ] + xx [ 400 ] ; xx [ 407 ] = ( xx [ 231 ] * xx [ 394 ] - xx [ 393
] * xx [ 198 ] ) * xx [ 8 ] + xx [ 401 ] ; xx [ 380 ] = ( xx [ 238 ] - (
pm_math_Vector3_dot_ra ( xx + 320 , xx + 405 ) + pm_math_Vector3_dot_ra ( xx
+ 347 , xx + 402 ) ) ) / xx [ 105 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 165 , xx + 262 , xx + 399 ) ; xx [ 262 ] = xx [ 257 ] +
pm_math_Vector3_dot_ra ( xx + 329 , xx + 399 ) ; xx [ 257 ] = xx [ 72 ] * xx
[ 380 ] - xx [ 7 ] * xx [ 262 ] ; xx [ 263 ] = xx [ 324 ] + xx [ 368 ] + xx [
365 ] ; xx [ 264 ] = xx [ 8 ] * ( xx [ 243 ] * xx [ 372 ] - xx [ 246 ] * xx [
336 ] ) + xx [ 397 ] ; xx [ 393 ] = xx [ 264 ] / xx [ 375 ] ; xx [ 394 ] = xx
[ 161 ] * xx [ 393 ] ; xx [ 399 ] = xx [ 394 ] * xx [ 226 ] ; xx [ 400 ] = xx
[ 79 ] * xx [ 394 ] ; xx [ 401 ] = xx [ 395 ] * xx [ 393 ] ; xx [ 402 ] = xx
[ 231 ] * xx [ 401 ] ; xx [ 403 ] = xx [ 401 ] * xx [ 226 ] ; xx [ 404 ] = (
xx [ 402 ] * xx [ 198 ] - xx [ 79 ] * xx [ 403 ] ) * xx [ 8 ] ; xx [ 405 ] =
- ( xx [ 8 ] * ( xx [ 79 ] * xx [ 402 ] + xx [ 403 ] * xx [ 198 ] ) ) ; xx [
406 ] = ( xx [ 403 ] * xx [ 226 ] + xx [ 231 ] * xx [ 402 ] ) * xx [ 8 ] - xx
[ 401 ] ; pm_math_Vector3_cross_ra ( xx + 381 , xx + 404 , xx + 401 ) ; xx [
407 ] = xx [ 8 ] * ( xx [ 231 ] * xx [ 399 ] + xx [ 400 ] * xx [ 198 ] ) + xx
[ 401 ] ; xx [ 408 ] = xx [ 394 ] - ( xx [ 79 ] * xx [ 400 ] + xx [ 399 ] *
xx [ 226 ] ) * xx [ 8 ] + xx [ 402 ] ; xx [ 409 ] = ( xx [ 231 ] * xx [ 400 ]
- xx [ 399 ] * xx [ 198 ] ) * xx [ 8 ] + xx [ 403 ] ; xx [ 394 ] = ( xx [ 263
] - ( pm_math_Vector3_dot_ra ( xx + 320 , xx + 407 ) + pm_math_Vector3_dot_ra
( xx + 347 , xx + 404 ) ) ) / xx [ 105 ] ; pm_math_Quaternion_inverseXform_ra
( xx + 165 , xx + 270 , xx + 399 ) ; xx [ 270 ] = xx [ 267 ] +
pm_math_Vector3_dot_ra ( xx + 329 , xx + 399 ) ; xx [ 267 ] = xx [ 72 ] * xx
[ 394 ] - xx [ 7 ] * xx [ 270 ] ; xx [ 271 ] = xx [ 325 ] + xx [ 369 ] + xx [
366 ] ; xx [ 272 ] = xx [ 398 ] + ( xx [ 244 ] * xx [ 372 ] + xx [ 245 ] * xx
[ 336 ] ) * xx [ 8 ] - xx [ 237 ] ; xx [ 323 ] = xx [ 272 ] / xx [ 375 ] ; xx
[ 324 ] = xx [ 161 ] * xx [ 323 ] ; xx [ 325 ] = xx [ 324 ] * xx [ 226 ] ; xx
[ 336 ] = xx [ 79 ] * xx [ 324 ] ; xx [ 364 ] = xx [ 395 ] * xx [ 323 ] ; xx
[ 365 ] = xx [ 231 ] * xx [ 364 ] ; xx [ 366 ] = xx [ 364 ] * xx [ 226 ] ; xx
[ 367 ] = ( xx [ 365 ] * xx [ 198 ] - xx [ 79 ] * xx [ 366 ] ) * xx [ 8 ] ;
xx [ 368 ] = - ( xx [ 8 ] * ( xx [ 79 ] * xx [ 365 ] + xx [ 366 ] * xx [ 198
] ) ) ; xx [ 369 ] = ( xx [ 366 ] * xx [ 226 ] + xx [ 231 ] * xx [ 365 ] ) *
xx [ 8 ] - xx [ 364 ] ; pm_math_Vector3_cross_ra ( xx + 381 , xx + 367 , xx +
364 ) ; xx [ 396 ] = xx [ 8 ] * ( xx [ 231 ] * xx [ 325 ] + xx [ 336 ] * xx [
198 ] ) + xx [ 364 ] ; xx [ 397 ] = xx [ 324 ] - ( xx [ 79 ] * xx [ 336 ] +
xx [ 325 ] * xx [ 226 ] ) * xx [ 8 ] + xx [ 365 ] ; xx [ 398 ] = ( xx [ 231 ]
* xx [ 336 ] - xx [ 325 ] * xx [ 198 ] ) * xx [ 8 ] + xx [ 366 ] ; xx [ 198 ]
= ( xx [ 271 ] - ( pm_math_Vector3_dot_ra ( xx + 320 , xx + 396 ) +
pm_math_Vector3_dot_ra ( xx + 347 , xx + 367 ) ) ) / xx [ 105 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 165 , xx + 259 , xx + 364 ) ; xx [
231 ] = xx [ 251 ] + pm_math_Vector3_dot_ra ( xx + 329 , xx + 364 ) ; xx [
251 ] = xx [ 72 ] * xx [ 198 ] - xx [ 7 ] * xx [ 231 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 165 , xx + 281 , xx + 259 ) ; xx [
281 ] = xx [ 277 ] - pm_math_Vector3_dot_ra ( xx + 329 , xx + 259 ) ; xx [
259 ] = xx [ 7 ] * xx [ 281 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 165
, xx + 289 , xx + 364 ) ; xx [ 260 ] = pm_math_Vector3_dot_ra ( xx + 329 , xx
+ 364 ) ; xx [ 261 ] = - ( xx [ 7 ] * xx [ 260 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 165 , xx + 293 , xx + 289 ) ; xx [
277 ] = pm_math_Vector3_dot_ra ( xx + 329 , xx + 289 ) ; xx [ 282 ] = - ( xx
[ 7 ] * xx [ 277 ] ) ; xx [ 283 ] = 0.4098839773319223 ; xx [ 289 ] = - ( xx
[ 80 ] * xx [ 380 ] ) ; xx [ 290 ] = xx [ 199 ] * xx [ 380 ] ; xx [ 291 ] =
xx [ 200 ] * xx [ 380 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 232 , xx
+ 289 , xx + 293 ) ; xx [ 293 ] = 5.333938310697631 ;
pm_math_Vector3_cross_ra ( xx + 289 , xx + 381 , xx + 364 ) ; xx [ 289 ] = xx
[ 364 ] - xx [ 279 ] * xx [ 380 ] ; xx [ 290 ] = xx [ 365 ] - xx [ 332 ] * xx
[ 380 ] ; xx [ 291 ] = xx [ 366 ] - xx [ 334 ] * xx [ 380 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 232 , xx + 289 , xx + 364 ) ; xx [
289 ] = - ( xx [ 80 ] * xx [ 394 ] ) ; xx [ 290 ] = xx [ 199 ] * xx [ 394 ] ;
xx [ 291 ] = xx [ 200 ] * xx [ 394 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 232 , xx + 289 , xx + 367 ) ; pm_math_Vector3_cross_ra ( xx + 289 , xx +
381 , xx + 396 ) ; xx [ 289 ] = xx [ 396 ] - xx [ 279 ] * xx [ 394 ] ; xx [
290 ] = xx [ 397 ] - xx [ 332 ] * xx [ 394 ] ; xx [ 291 ] = xx [ 398 ] - xx [
334 ] * xx [ 394 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 232 , xx + 289
, xx + 396 ) ; xx [ 289 ] = xx [ 393 ] - ( xx [ 283 ] * xx [ 368 ] - xx [ 293
] * xx [ 398 ] ) ; xx [ 290 ] = xx [ 238 ] * xx [ 394 ] + xx [ 373 ] * xx [
289 ] + xx [ 270 ] * xx [ 256 ] ; xx [ 367 ] = - ( xx [ 80 ] * xx [ 198 ] ) ;
xx [ 368 ] = xx [ 199 ] * xx [ 198 ] ; xx [ 369 ] = xx [ 200 ] * xx [ 198 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 232 , xx + 367 , xx + 396 ) ;
pm_math_Vector3_cross_ra ( xx + 367 , xx + 381 , xx + 398 ) ; xx [ 367 ] = xx
[ 398 ] - xx [ 279 ] * xx [ 198 ] ; xx [ 368 ] = xx [ 399 ] - xx [ 332 ] * xx
[ 198 ] ; xx [ 369 ] = xx [ 400 ] - xx [ 334 ] * xx [ 198 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 232 , xx + 367 , xx + 398 ) ; xx [
291 ] = xx [ 323 ] - ( xx [ 283 ] * xx [ 397 ] - xx [ 293 ] * xx [ 400 ] ) ;
xx [ 295 ] = xx [ 238 ] * xx [ 198 ] + xx [ 373 ] * xx [ 291 ] + xx [ 231 ] *
xx [ 256 ] ; xx [ 323 ] = - ( xx [ 256 ] * xx [ 281 ] ) ; xx [ 324 ] = xx [
260 ] * xx [ 256 ] ; xx [ 325 ] = xx [ 277 ] * xx [ 256 ] ; xx [ 336 ] = xx [
263 ] * xx [ 198 ] + xx [ 264 ] * xx [ 291 ] + xx [ 231 ] * xx [ 266 ] ; xx [
364 ] = - ( xx [ 266 ] * xx [ 281 ] ) ; xx [ 365 ] = xx [ 260 ] * xx [ 266 ]
; xx [ 367 ] = xx [ 277 ] * xx [ 266 ] ; xx [ 368 ] = - ( xx [ 278 ] + xx [
250 ] * xx [ 281 ] ) ; xx [ 278 ] = xx [ 260 ] * xx [ 250 ] - xx [ 286 ] ; xx
[ 286 ] = xx [ 292 ] + xx [ 277 ] * xx [ 250 ] ; xx [ 369 ] = - ( xx [ 260 ]
* xx [ 280 ] ) ; xx [ 260 ] = - ( xx [ 277 ] * xx [ 280 ] ) ; xx [ 277 ] = -
( xx [ 299 ] * xx [ 288 ] ) ; xx [ 299 ] = 0.01235780804768841 ; xx [ 396 ] =
xx [ 50 ] * xx [ 50 ] / xx [ 78 ] + xx [ 110 ] * ( xx [ 131 ] -
pm_math_Vector3_dot_ra ( xx + 139 , xx + 183 ) ) ; xx [ 397 ] = xx [ 214 ] ;
xx [ 398 ] = xx [ 229 ] ; xx [ 399 ] = xx [ 153 ] ; xx [ 400 ] = xx [ 225 ] ;
xx [ 401 ] = xx [ 265 ] ; xx [ 402 ] = xx [ 273 ] ; xx [ 403 ] = xx [ 275 ] ;
xx [ 404 ] = xx [ 284 ] ; xx [ 405 ] = xx [ 285 ] ; xx [ 406 ] = xx [ 296 ] ;
xx [ 407 ] = xx [ 214 ] ; xx [ 408 ] = xx [ 155 ] * xx [ 205 ] + xx [ 195 ] *
( xx [ 204 ] - ( xx [ 297 ] * xx [ 304 ] - xx [ 298 ] * xx [ 307 ] ) ) + xx [
227 ] * xx [ 213 ] ; xx [ 409 ] = xx [ 175 ] ; xx [ 410 ] = xx [ 45 ] ; xx [
411 ] = xx [ 302 ] ; xx [ 412 ] = xx [ 303 ] ; xx [ 413 ] = xx [ 305 ] ; xx [
414 ] = xx [ 306 ] ; xx [ 415 ] = xx [ 308 ] ; xx [ 416 ] = xx [ 309 ] ; xx [
417 ] = xx [ 310 ] ; xx [ 418 ] = xx [ 229 ] ; xx [ 419 ] = xx [ 175 ] ; xx [
420 ] = xx [ 221 ] * xx [ 223 ] + xx [ 222 ] * xx [ 300 ] + xx [ 230 ] * xx [
228 ] ; xx [ 421 ] = xx [ 311 ] ; xx [ 422 ] = xx [ 312 ] ; xx [ 423 ] = xx [
313 ] ; xx [ 424 ] = xx [ 314 ] ; xx [ 425 ] = xx [ 315 ] ; xx [ 426 ] = xx [
316 ] ; xx [ 427 ] = xx [ 317 ] ; xx [ 428 ] = xx [ 318 ] ; xx [ 429 ] = xx [
153 ] ; xx [ 430 ] = xx [ 45 ] ; xx [ 431 ] = xx [ 311 ] ; xx [ 432 ] = xx [
43 ] * xx [ 25 ] + xx [ 44 ] * xx [ 301 ] + xx [ 178 ] + xx [ 189 ] * xx [ 35
] ; xx [ 433 ] = xx [ 319 ] ; xx [ 434 ] = xx [ 209 ] ; xx [ 435 ] = xx [ 224
] ; xx [ 436 ] = xx [ 258 ] ; xx [ 437 ] = xx [ 268 ] ; xx [ 438 ] = xx [ 269
] ; xx [ 439 ] = xx [ 274 ] ; xx [ 440 ] = xx [ 225 ] ; xx [ 441 ] = xx [ 302
] ; xx [ 442 ] = xx [ 312 ] ; xx [ 443 ] = xx [ 319 ] ; xx [ 444 ] = xx [ 72
] * xx [ 72 ] / xx [ 105 ] + xx [ 7 ] * ( xx [ 106 ] - pm_math_Vector3_dot_ra
( xx + 329 , xx + 350 ) ) ; xx [ 445 ] = xx [ 257 ] ; xx [ 446 ] = xx [ 267 ]
; xx [ 447 ] = xx [ 251 ] ; xx [ 448 ] = xx [ 259 ] ; xx [ 449 ] = xx [ 261 ]
; xx [ 450 ] = xx [ 282 ] ; xx [ 451 ] = xx [ 265 ] ; xx [ 452 ] = xx [ 303 ]
; xx [ 453 ] = xx [ 313 ] ; xx [ 454 ] = xx [ 209 ] ; xx [ 455 ] = xx [ 257 ]
; xx [ 456 ] = xx [ 238 ] * xx [ 380 ] + xx [ 373 ] * ( xx [ 376 ] - ( xx [
283 ] * xx [ 294 ] - xx [ 293 ] * xx [ 366 ] ) ) + xx [ 262 ] * xx [ 256 ] ;
xx [ 457 ] = xx [ 290 ] ; xx [ 458 ] = xx [ 295 ] ; xx [ 459 ] = xx [ 323 ] ;
xx [ 460 ] = xx [ 324 ] ; xx [ 461 ] = xx [ 325 ] ; xx [ 462 ] = xx [ 273 ] ;
xx [ 463 ] = xx [ 305 ] ; xx [ 464 ] = xx [ 314 ] ; xx [ 465 ] = xx [ 224 ] ;
xx [ 466 ] = xx [ 267 ] ; xx [ 467 ] = xx [ 290 ] ; xx [ 468 ] = xx [ 263 ] *
xx [ 394 ] + xx [ 264 ] * xx [ 289 ] + xx [ 270 ] * xx [ 266 ] ; xx [ 469 ] =
xx [ 336 ] ; xx [ 470 ] = xx [ 364 ] ; xx [ 471 ] = xx [ 365 ] ; xx [ 472 ] =
xx [ 367 ] ; xx [ 473 ] = xx [ 275 ] ; xx [ 474 ] = xx [ 306 ] ; xx [ 475 ] =
xx [ 315 ] ; xx [ 476 ] = xx [ 258 ] ; xx [ 477 ] = xx [ 251 ] ; xx [ 478 ] =
xx [ 295 ] ; xx [ 479 ] = xx [ 336 ] ; xx [ 480 ] = xx [ 271 ] * xx [ 198 ] +
xx [ 272 ] * xx [ 291 ] + xx [ 252 ] + xx [ 231 ] * xx [ 250 ] ; xx [ 481 ] =
xx [ 368 ] ; xx [ 482 ] = xx [ 278 ] ; xx [ 483 ] = xx [ 286 ] ; xx [ 484 ] =
xx [ 284 ] ; xx [ 485 ] = xx [ 308 ] ; xx [ 486 ] = xx [ 316 ] ; xx [ 487 ] =
xx [ 268 ] ; xx [ 488 ] = xx [ 259 ] ; xx [ 489 ] = xx [ 323 ] ; xx [ 490 ] =
xx [ 364 ] ; xx [ 491 ] = xx [ 368 ] ; xx [ 492 ] = xx [ 280 ] * xx [ 281 ] ;
xx [ 493 ] = xx [ 369 ] ; xx [ 494 ] = xx [ 260 ] ; xx [ 495 ] = xx [ 285 ] ;
xx [ 496 ] = xx [ 309 ] ; xx [ 497 ] = xx [ 317 ] ; xx [ 498 ] = xx [ 269 ] ;
xx [ 499 ] = xx [ 261 ] ; xx [ 500 ] = xx [ 324 ] ; xx [ 501 ] = xx [ 365 ] ;
xx [ 502 ] = xx [ 278 ] ; xx [ 503 ] = xx [ 369 ] ; xx [ 504 ] = xx [ 288 ] *
xx [ 287 ] ; xx [ 505 ] = xx [ 277 ] ; xx [ 506 ] = xx [ 296 ] ; xx [ 507 ] =
xx [ 310 ] ; xx [ 508 ] = xx [ 318 ] ; xx [ 509 ] = xx [ 274 ] ; xx [ 510 ] =
xx [ 282 ] ; xx [ 511 ] = xx [ 325 ] ; xx [ 512 ] = xx [ 367 ] ; xx [ 513 ] =
xx [ 286 ] ; xx [ 514 ] = xx [ 260 ] ; xx [ 515 ] = xx [ 277 ] ; xx [ 516 ] =
xx [ 36 ] * xx [ 36 ] / xx [ 299 ] + xx [ 292 ] ; xx [ 25 ] = xx [ 51 ] *
state [ 13 ] ; xx [ 45 ] = xx [ 68 ] * state [ 13 ] ; xx [ 183 ] = xx [ 25 ]
; xx [ 184 ] = xx [ 45 ] ; xx [ 185 ] = state [ 13 ] ; xx [ 106 ] =
1.177164589793462e-3 ; xx [ 131 ] = 1.240087521872858e-3 ; xx [ 153 ] =
1.375867795493627e-4 ; xx [ 223 ] = xx [ 106 ] * xx [ 25 ] ; xx [ 224 ] = xx
[ 131 ] * xx [ 45 ] ; xx [ 225 ] = xx [ 153 ] * state [ 13 ] ;
pm_math_Vector3_cross_ra ( xx + 183 , xx + 223 , xx + 229 ) ; xx [ 223 ] = xx
[ 206 ] * state [ 13 ] ; xx [ 224 ] = - ( xx [ 210 ] * state [ 13 ] ) ; xx [
225 ] = xx [ 212 ] * state [ 13 ] ; pm_math_Vector3_cross_ra ( xx + 183 , xx
+ 223 , xx + 204 ) ; xx [ 175 ] = xx [ 182 ] * xx [ 204 ] ; xx [ 178 ] = xx [
182 ] * xx [ 205 ] ; xx [ 189 ] = xx [ 182 ] * xx [ 206 ] ; xx [ 204 ] = xx [
175 ] ; xx [ 205 ] = xx [ 178 ] ; xx [ 206 ] = xx [ 189 ] ; xx [ 198 ] = xx [
51 ] * xx [ 229 ] + xx [ 68 ] * xx [ 230 ] + xx [ 231 ] +
pm_math_Vector3_dot_ra ( xx + 218 , xx + 204 ) ; xx [ 204 ] = xx [ 198 ] / xx
[ 130 ] ; xx [ 205 ] = xx [ 151 ] * state [ 15 ] ; xx [ 206 ] = xx [ 160 ] *
state [ 15 ] ; xx [ 218 ] = - xx [ 205 ] ; xx [ 219 ] = - xx [ 206 ] ; xx [
220 ] = - state [ 15 ] ; xx [ 223 ] = - ( xx [ 247 ] * state [ 15 ] ) ; xx [
224 ] = xx [ 248 ] * state [ 15 ] ; xx [ 225 ] = - ( xx [ 249 ] * state [ 15
] ) ; pm_math_Vector3_cross_ra ( xx + 218 , xx + 223 , xx + 229 ) ; xx [ 209
] = xx [ 182 ] * xx [ 229 ] ; xx [ 210 ] = xx [ 182 ] * xx [ 230 ] ; xx [ 212
] = xx [ 182 ] * xx [ 231 ] ; xx [ 223 ] = xx [ 209 ] ; xx [ 224 ] = xx [ 210
] ; xx [ 225 ] = xx [ 212 ] ; xx [ 229 ] = - ( xx [ 106 ] * xx [ 205 ] ) ; xx
[ 230 ] = - ( xx [ 131 ] * xx [ 206 ] ) ; xx [ 231 ] = - ( xx [ 153 ] * state
[ 15 ] ) ; pm_math_Vector3_cross_ra ( xx + 218 , xx + 229 , xx + 247 ) ; xx [
106 ] = pm_math_Vector3_dot_ra ( xx + 253 , xx + 223 ) - ( xx [ 151 ] * xx [
247 ] + xx [ 160 ] * xx [ 248 ] + xx [ 249 ] ) ; xx [ 131 ] = xx [ 106 ] / xx
[ 130 ] ; xx [ 223 ] = xx [ 209 ] + xx [ 190 ] * xx [ 131 ] ; xx [ 224 ] = xx
[ 210 ] - xx [ 207 ] * xx [ 131 ] ; xx [ 225 ] = xx [ 212 ] + xx [ 208 ] * xx
[ 131 ] ; pm_math_Quaternion_xform_ra ( xx + 165 , xx + 223 , xx + 229 ) ; xx
[ 223 ] = xx [ 175 ] - xx [ 147 ] * xx [ 204 ] ; xx [ 224 ] = xx [ 178 ] + xx
[ 148 ] * xx [ 204 ] ; xx [ 225 ] = xx [ 189 ] - xx [ 149 ] * xx [ 204 ] ;
pm_math_Quaternion_xform_ra ( xx + 73 , xx + 223 , xx + 247 ) ; xx [ 223 ] =
xx [ 229 ] + xx [ 247 ] ; xx [ 224 ] = xx [ 230 ] + xx [ 248 ] ; xx [ 225 ] =
xx [ 231 ] + xx [ 249 ] ; xx [ 153 ] = pm_math_Vector3_dot_ra ( xx + 144 , xx
+ 223 ) / xx [ 150 ] ; xx [ 223 ] = xx [ 135 ] * xx [ 153 ] ; xx [ 224 ] = -
( xx [ 142 ] * xx [ 153 ] ) ; xx [ 225 ] = xx [ 143 ] * xx [ 153 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 73 , xx + 223 , xx + 229 ) ; xx [
182 ] = xx [ 204 ] + pm_math_Vector3_dot_ra ( xx + 139 , xx + 229 ) ; xx [
300 ] = 0.9937815184430843 ; xx [ 301 ] = - 0.1113476250326878 ; xx [ 302 ] =
- 7.33437165678652e-7 ; xx [ 303 ] = 0.1113476250339316 ; xx [ 304 ] =
0.9937815184412861 ; xx [ 305 ] = 1.958191148976679e-6 ; xx [ 306 ] = xx [
135 ] ; xx [ 307 ] = - xx [ 142 ] ; xx [ 308 ] = xx [ 143 ] ; xx [ 204 ] = xx
[ 176 ] * xx [ 25 ] - xx [ 164 ] * state [ 13 ] ; xx [ 214 ] = xx [ 45 ] * xx
[ 164 ] - xx [ 25 ] * xx [ 173 ] ; xx [ 164 ] = xx [ 173 ] * state [ 13 ] -
xx [ 176 ] * xx [ 45 ] ; xx [ 173 ] = xx [ 25 ] * xx [ 179 ] - xx [ 177 ] *
state [ 13 ] ; xx [ 176 ] = xx [ 177 ] * xx [ 45 ] - xx [ 25 ] * xx [ 171 ] ;
xx [ 177 ] = xx [ 171 ] * state [ 13 ] - xx [ 45 ] * xx [ 179 ] ; xx [ 171 ]
= xx [ 25 ] * xx [ 172 ] - xx [ 181 ] * state [ 13 ] ; xx [ 179 ] = xx [ 45 ]
* xx [ 181 ] - xx [ 174 ] * xx [ 25 ] ; xx [ 181 ] = xx [ 174 ] * state [ 13
] - xx [ 45 ] * xx [ 172 ] ; xx [ 309 ] = xx [ 204 ] * state [ 13 ] - xx [ 45
] * xx [ 214 ] ; xx [ 310 ] = xx [ 25 ] * xx [ 214 ] - xx [ 164 ] * state [
13 ] ; xx [ 311 ] = xx [ 45 ] * xx [ 164 ] - xx [ 25 ] * xx [ 204 ] ; xx [
312 ] = xx [ 173 ] * state [ 13 ] - xx [ 45 ] * xx [ 176 ] ; xx [ 313 ] = xx
[ 25 ] * xx [ 176 ] - xx [ 177 ] * state [ 13 ] ; xx [ 314 ] = xx [ 45 ] * xx
[ 177 ] - xx [ 25 ] * xx [ 173 ] ; xx [ 315 ] = xx [ 171 ] * state [ 13 ] -
xx [ 45 ] * xx [ 179 ] ; xx [ 316 ] = xx [ 25 ] * xx [ 179 ] - xx [ 181 ] *
state [ 13 ] ; xx [ 317 ] = xx [ 45 ] * xx [ 181 ] - xx [ 25 ] * xx [ 171 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 300 , xx + 309 , xx + 517 ) ; xx [ 171 ]
= 0.9999999999934777 ; xx [ 172 ] = 3.609878879817785e-6 ; xx [ 173 ] = -
1.171965347546156e-7 ; pm_math_Matrix3x3_xform_ra ( xx + 517 , xx + 171 , xx
+ 229 ) ; xx [ 25 ] = xx [ 38 ] * state [ 7 ] ; xx [ 45 ] = xx [ 37 ] * state
[ 7 ] ; xx [ 164 ] = xx [ 57 ] * xx [ 58 ] ; xx [ 174 ] = xx [ 56 ] * xx [ 59
] ; xx [ 176 ] = xx [ 8 ] * ( xx [ 164 ] - xx [ 174 ] ) ; xx [ 177 ] = xx [
56 ] * xx [ 56 ] ; xx [ 179 ] = ( xx [ 177 ] + xx [ 57 ] * xx [ 57 ] ) * xx [
8 ] - xx [ 2 ] ; xx [ 181 ] = xx [ 45 ] * xx [ 176 ] - xx [ 25 ] * xx [ 179 ]
; xx [ 204 ] = xx [ 39 ] * state [ 7 ] ; xx [ 214 ] = xx [ 57 ] * xx [ 59 ] ;
xx [ 227 ] = xx [ 56 ] * xx [ 58 ] ; xx [ 247 ] = ( xx [ 214 ] + xx [ 227 ] )
* xx [ 8 ] ; xx [ 248 ] = xx [ 204 ] * xx [ 179 ] - xx [ 247 ] * xx [ 45 ] ;
xx [ 249 ] = xx [ 247 ] * xx [ 25 ] - xx [ 204 ] * xx [ 176 ] ; xx [ 251 ] =
( xx [ 177 ] + xx [ 58 ] * xx [ 58 ] ) * xx [ 8 ] - xx [ 2 ] ; xx [ 252 ] = (
xx [ 164 ] + xx [ 174 ] ) * xx [ 8 ] ; xx [ 164 ] = xx [ 45 ] * xx [ 251 ] -
xx [ 252 ] * xx [ 25 ] ; xx [ 174 ] = xx [ 58 ] * xx [ 59 ] ; xx [ 253 ] = xx
[ 56 ] * xx [ 57 ] ; xx [ 254 ] = xx [ 8 ] * ( xx [ 174 ] - xx [ 253 ] ) ; xx
[ 255 ] = xx [ 252 ] * xx [ 204 ] - xx [ 45 ] * xx [ 254 ] ; xx [ 257 ] = xx
[ 25 ] * xx [ 254 ] - xx [ 204 ] * xx [ 251 ] ; xx [ 258 ] = ( xx [ 174 ] +
xx [ 253 ] ) * xx [ 8 ] ; xx [ 174 ] = xx [ 8 ] * ( xx [ 214 ] - xx [ 227 ] )
; xx [ 214 ] = xx [ 258 ] * xx [ 45 ] - xx [ 25 ] * xx [ 174 ] ; xx [ 227 ] =
( xx [ 177 ] + xx [ 59 ] * xx [ 59 ] ) * xx [ 8 ] - xx [ 2 ] ; xx [ 177 ] =
xx [ 204 ] * xx [ 174 ] - xx [ 45 ] * xx [ 227 ] ; xx [ 253 ] = xx [ 25 ] *
xx [ 227 ] - xx [ 258 ] * xx [ 204 ] ; xx [ 309 ] = xx [ 25 ] * xx [ 181 ] -
xx [ 204 ] * xx [ 248 ] ; xx [ 310 ] = xx [ 204 ] * xx [ 249 ] - xx [ 45 ] *
xx [ 181 ] ; xx [ 311 ] = xx [ 45 ] * xx [ 248 ] - xx [ 25 ] * xx [ 249 ] ;
xx [ 312 ] = xx [ 25 ] * xx [ 164 ] - xx [ 204 ] * xx [ 255 ] ; xx [ 313 ] =
xx [ 204 ] * xx [ 257 ] - xx [ 45 ] * xx [ 164 ] ; xx [ 314 ] = xx [ 45 ] *
xx [ 255 ] - xx [ 25 ] * xx [ 257 ] ; xx [ 315 ] = xx [ 25 ] * xx [ 214 ] -
xx [ 204 ] * xx [ 177 ] ; xx [ 316 ] = xx [ 204 ] * xx [ 253 ] - xx [ 45 ] *
xx [ 214 ] ; xx [ 317 ] = xx [ 45 ] * xx [ 177 ] - xx [ 25 ] * xx [ 253 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 309 , xx + 92 , xx + 526 ) ; xx [ 92 ] =
- xx [ 527 ] ; xx [ 93 ] = - xx [ 530 ] ; xx [ 94 ] = - xx [ 533 ] ; xx [ 95
] = - xx [ 45 ] ; xx [ 96 ] = - xx [ 25 ] ; xx [ 97 ] = - xx [ 204 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 30 , xx + 95 , xx + 98 ) ; xx [ 164
] = xx [ 98 ] * xx [ 48 ] ; xx [ 177 ] = xx [ 100 ] * xx [ 49 ] + xx [ 98 ] *
xx [ 47 ] ; xx [ 181 ] = xx [ 48 ] * xx [ 100 ] ; xx [ 259 ] = - xx [ 164 ] ;
xx [ 260 ] = xx [ 177 ] ; xx [ 261 ] = - xx [ 181 ] ;
pm_math_Vector3_cross_ra ( xx + 47 , xx + 259 , xx + 267 ) ; xx [ 259 ] = xx
[ 100 ] + xx [ 8 ] * ( xx [ 267 ] - xx [ 46 ] * xx [ 164 ] ) ; xx [ 260 ] = (
xx [ 177 ] * xx [ 46 ] + xx [ 268 ] ) * xx [ 8 ] ; xx [ 261 ] = xx [ 8 ] * (
xx [ 269 ] - xx [ 46 ] * xx [ 181 ] ) - xx [ 98 ] ; pm_math_Vector3_cross_ra
( xx + 183 , xx + 171 , xx + 267 ) ; pm_math_Quaternion_xform_ra ( xx + 64 ,
xx + 267 , xx + 183 ) ; xx [ 164 ] = 3.002298846485513 ; xx [ 177 ] =
85.94366926962347 ; xx [ 181 ] = 0.0 ; xx [ 214 ] = state [ 6 ] + xx [ 8 ] ;
if ( xx [ 181 ] < xx [ 214 ] ) xx [ 214 ] = xx [ 181 ] ; xx [ 248 ] =
1.74532925199433e-3 ; xx [ 249 ] = - ( xx [ 214 ] / xx [ 248 ] ) ; if ( xx [
2 ] < xx [ 249 ] ) xx [ 249 ] = xx [ 2 ] ; xx [ 253 ] = 3.0 ; xx [ 255 ] =
5729.577951308232 ; xx [ 257 ] = xx [ 255 ] * state [ 7 ] ; xx [ 262 ] =
5.729577951308232e5 ; xx [ 265 ] = xx [ 249 ] * xx [ 249 ] * ( xx [ 253 ] -
xx [ 8 ] * xx [ 249 ] ) * ( ( - xx [ 214 ] == xx [ 181 ] ? xx [ 181 ] : - xx
[ 257 ] ) - xx [ 262 ] * xx [ 214 ] ) ; if ( xx [ 181 ] > xx [ 265 ] ) xx [
265 ] = xx [ 181 ] ; xx [ 214 ] = state [ 6 ] + xx [ 2 ] ; if ( xx [ 181 ] >
xx [ 214 ] ) xx [ 214 ] = xx [ 181 ] ; xx [ 249 ] = xx [ 214 ] / xx [ 248 ] ;
if ( xx [ 2 ] < xx [ 249 ] ) xx [ 249 ] = xx [ 2 ] ; xx [ 267 ] = ( xx [ 262
] * xx [ 214 ] + ( xx [ 214 ] == xx [ 181 ] ? xx [ 181 ] : xx [ 257 ] ) ) *
xx [ 249 ] * xx [ 249 ] * ( xx [ 253 ] - xx [ 8 ] * xx [ 249 ] ) ; if ( xx [
181 ] > xx [ 267 ] ) xx [ 267 ] = xx [ 181 ] ; xx [ 214 ] = input [ 1 ] - xx
[ 164 ] * state [ 6 ] - xx [ 177 ] * state [ 7 ] + xx [ 265 ] - xx [ 267 ] ;
xx [ 267 ] = - ( xx [ 52 ] * xx [ 45 ] ) ; xx [ 268 ] = - ( xx [ 55 ] * xx [
25 ] ) ; xx [ 269 ] = - ( xx [ 77 ] * xx [ 204 ] ) ; pm_math_Vector3_cross_ra
( xx + 95 , xx + 267 , xx + 273 ) ; xx [ 25 ] = xx [ 99 ] + state [ 9 ] ; xx
[ 267 ] = xx [ 98 ] ; xx [ 268 ] = xx [ 25 ] ; xx [ 269 ] = xx [ 100 ] ; xx [
284 ] = xx [ 53 ] * xx [ 98 ] ; xx [ 285 ] = xx [ 25 ] * xx [ 161 ] ; xx [
286 ] = xx [ 101 ] * xx [ 100 ] ; pm_math_Vector3_cross_ra ( xx + 267 , xx +
284 , xx + 289 ) ; xx [ 45 ] = xx [ 289 ] - xx [ 53 ] * xx [ 100 ] * state [
9 ] ; pm_math_Vector3_cross_ra ( xx + 95 , xx + 136 , xx + 267 ) ;
pm_math_Vector3_cross_ra ( xx + 95 , xx + 267 , xx + 284 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 30 , xx + 284 , xx + 267 ) ; xx [
52 ] = xx [ 26 ] * xx [ 269 ] ; xx [ 55 ] = xx [ 290 ] - xx [ 132 ] * xx [ 52
] ; xx [ 77 ] = xx [ 55 ] / xx [ 154 ] ; xx [ 204 ] = xx [ 291 ] + xx [ 101 ]
* xx [ 98 ] * state [ 9 ] ; xx [ 284 ] = xx [ 45 ] ; xx [ 285 ] = xx [ 290 ]
- xx [ 161 ] * xx [ 77 ] ; xx [ 286 ] = xx [ 204 ] ;
pm_math_Quaternion_xform_ra ( xx + 30 , xx + 284 , xx + 294 ) ; xx [ 249 ] =
xx [ 132 ] * state [ 9 ] ; xx [ 257 ] = ( xx [ 267 ] - ( xx [ 99 ] + xx [ 25
] ) * xx [ 249 ] ) * xx [ 26 ] ; xx [ 25 ] = xx [ 26 ] * ( xx [ 268 ] + ( xx
[ 98 ] + xx [ 98 ] ) * xx [ 249 ] ) ; xx [ 267 ] = xx [ 257 ] ; xx [ 268 ] =
xx [ 25 ] ; xx [ 269 ] = xx [ 52 ] + xx [ 211 ] * xx [ 77 ] ;
pm_math_Quaternion_xform_ra ( xx + 30 , xx + 267 , xx + 284 ) ;
pm_math_Vector3_cross_ra ( xx + 136 , xx + 284 , xx + 267 ) ; xx [ 323 ] = xx
[ 85 ] * state [ 7 ] ; xx [ 324 ] = - ( xx [ 88 ] * state [ 7 ] ) ; xx [ 325
] = - ( xx [ 90 ] * state [ 7 ] ) ; pm_math_Vector3_cross_ra ( xx + 95 , xx +
323 , xx + 350 ) ; pm_math_Matrix3x3_xform_ra ( xx + 111 , xx + 350 , xx +
323 ) ; xx [ 111 ] = xx [ 273 ] + xx [ 294 ] + xx [ 267 ] + xx [ 323 ] ; xx [
112 ] = xx [ 274 ] + xx [ 295 ] + xx [ 268 ] + xx [ 324 ] ; xx [ 113 ] = xx [
275 ] + xx [ 296 ] + xx [ 269 ] + xx [ 325 ] ; pm_math_Matrix3x3_xform_ra (
xx + 120 , xx + 350 , xx + 114 ) ; xx [ 117 ] = xx [ 284 ] + xx [ 114 ] ; xx
[ 118 ] = xx [ 285 ] + xx [ 115 ] ; xx [ 119 ] = xx [ 286 ] + xx [ 116 ] ; xx
[ 120 ] = ( xx [ 214 ] - ( pm_math_Vector3_dot_ra ( xx + 40 , xx + 111 ) +
pm_math_Vector3_dot_ra ( xx + 102 , xx + 117 ) ) ) / xx [ 78 ] ; xx [ 111 ] =
- ( xx [ 37 ] * xx [ 120 ] ) ; xx [ 112 ] = - ( xx [ 38 ] * xx [ 120 ] ) ; xx
[ 113 ] = - ( xx [ 39 ] * xx [ 120 ] ) ; pm_math_Quaternion_inverseXform_ra (
xx + 30 , xx + 111 , xx + 117 ) ; pm_math_Vector3_cross_ra ( xx + 111 , xx +
136 , xx + 121 ) ; xx [ 111 ] = xx [ 85 ] * xx [ 120 ] + xx [ 350 ] + xx [
121 ] ; xx [ 112 ] = xx [ 351 ] - xx [ 88 ] * xx [ 120 ] + xx [ 122 ] ; xx [
113 ] = xx [ 352 ] - xx [ 90 ] * xx [ 120 ] + xx [ 123 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 30 , xx + 111 , xx + 121 ) ; xx [
111 ] = xx [ 77 ] + xx [ 297 ] * xx [ 118 ] - xx [ 298 ] * xx [ 123 ] ; xx [
77 ] = xx [ 54 ] * state [ 9 ] * state [ 9 ] ; xx [ 54 ] = xx [ 8 ] * xx [ 86
] * state [ 9 ] * state [ 9 ] ; xx [ 86 ] = xx [ 8 ] * xx [ 91 ] * state [ 9
] * state [ 9 ] ; xx [ 91 ] = xx [ 46 ] * xx [ 46 ] ; xx [ 112 ] = xx [ 47 ]
* xx [ 48 ] ; xx [ 113 ] = xx [ 46 ] * xx [ 49 ] ; xx [ 117 ] = xx [ 47 ] *
xx [ 49 ] ; xx [ 118 ] = xx [ 48 ] * xx [ 49 ] ; xx [ 119 ] = xx [ 46 ] * xx
[ 47 ] ; xx [ 535 ] = ( xx [ 91 ] + xx [ 47 ] * xx [ 47 ] ) * xx [ 8 ] - xx [
2 ] ; xx [ 536 ] = xx [ 8 ] * ( xx [ 112 ] - xx [ 113 ] ) ; xx [ 537 ] = ( xx
[ 117 ] + xx [ 180 ] ) * xx [ 8 ] ; xx [ 538 ] = ( xx [ 112 ] + xx [ 113 ] )
* xx [ 8 ] ; xx [ 539 ] = ( xx [ 91 ] + xx [ 48 ] * xx [ 48 ] ) * xx [ 8 ] -
xx [ 2 ] ; xx [ 540 ] = xx [ 8 ] * ( xx [ 118 ] - xx [ 119 ] ) ; xx [ 541 ] =
xx [ 8 ] * ( xx [ 117 ] - xx [ 180 ] ) ; xx [ 542 ] = ( xx [ 118 ] + xx [ 119
] ) * xx [ 8 ] ; xx [ 543 ] = ( xx [ 91 ] + xx [ 49 ] * xx [ 49 ] ) * xx [ 8
] - xx [ 2 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 535 , xx + 98 , xx + 544
) ; xx [ 91 ] = xx [ 8 ] * xx [ 84 ] * state [ 9 ] * state [ 9 ] ; xx [ 84 ]
= xx [ 8 ] * xx [ 89 ] * state [ 9 ] * state [ 9 ] ; xx [ 89 ] = xx [ 87 ] *
state [ 9 ] * state [ 9 ] ; xx [ 535 ] = xx [ 526 ] - ( xx [ 77 ] * xx [ 179
] + xx [ 54 ] * xx [ 176 ] - xx [ 247 ] * xx [ 86 ] ) - xx [ 8 ] * xx [ 546 ]
* state [ 9 ] ; xx [ 536 ] = xx [ 527 ] ; xx [ 537 ] = xx [ 528 ] - ( xx [ 91
] * xx [ 179 ] - xx [ 84 ] * xx [ 176 ] + xx [ 247 ] * xx [ 89 ] ) + xx [ 8 ]
* xx [ 544 ] * state [ 9 ] ; xx [ 538 ] = xx [ 529 ] - ( xx [ 252 ] * xx [ 77
] + xx [ 54 ] * xx [ 251 ] - xx [ 86 ] * xx [ 254 ] ) - xx [ 8 ] * xx [ 549 ]
* state [ 9 ] ; xx [ 539 ] = xx [ 530 ] ; xx [ 540 ] = xx [ 531 ] - ( xx [
252 ] * xx [ 91 ] - xx [ 84 ] * xx [ 251 ] + xx [ 254 ] * xx [ 89 ] ) + xx [
8 ] * xx [ 547 ] * state [ 9 ] ; xx [ 541 ] = xx [ 532 ] - ( xx [ 174 ] * xx
[ 77 ] + xx [ 258 ] * xx [ 54 ] - xx [ 86 ] * xx [ 227 ] ) - xx [ 8 ] * xx [
552 ] * state [ 9 ] ; xx [ 542 ] = xx [ 533 ] ; xx [ 543 ] = xx [ 534 ] - (
xx [ 91 ] * xx [ 174 ] - xx [ 258 ] * xx [ 84 ] + xx [ 89 ] * xx [ 227 ] ) +
xx [ 8 ] * xx [ 550 ] * state [ 9 ] ; pm_math_Matrix3x3_xform_ra ( xx + 535 ,
xx + 186 , xx + 98 ) ; pm_math_Matrix3x3_xform_ra ( xx + 309 , xx + 136 , xx
+ 117 ) ; xx [ 121 ] = 3.111229144988866e-4 ; xx [ 122 ] = -
5.13791368061354e-4 ; xx [ 123 ] = 0.1059487286521934 ;
pm_math_Quaternion_xform_ra ( xx + 56 , xx + 121 , xx + 124 ) ; xx [ 54 ] =
state [ 7 ] * state [ 7 ] ; xx [ 77 ] = state [ 9 ] * state [ 9 ] ; xx [ 121
] = xx [ 77 ] * ( ( xx [ 202 ] + xx [ 24 ] * xx [ 133 ] ) * xx [ 8 ] - xx [
132 ] ) ; xx [ 122 ] = ( xx [ 129 ] - xx [ 134 ] * xx [ 34 ] ) * xx [ 8 ] *
xx [ 77 ] ; xx [ 123 ] = xx [ 8 ] * ( xx [ 133 ] * xx [ 34 ] + xx [ 196 ] ) *
xx [ 77 ] ; pm_math_Quaternion_xform_ra ( xx + 56 , xx + 121 , xx + 127 ) ;
xx [ 121 ] = xx [ 8 ] * xx [ 197 ] * state [ 9 ] ; xx [ 122 ] = xx [ 8 ] * xx
[ 201 ] * state [ 9 ] ; xx [ 123 ] = xx [ 203 ] * state [ 9 ] ;
pm_math_Vector3_cross_ra ( xx + 95 , xx + 121 , xx + 132 ) ;
pm_math_Quaternion_xform_ra ( xx + 56 , xx + 132 , xx + 95 ) ; xx [ 24 ] =
7.54929787758902e-8 ; xx [ 34 ] = - 0.0199999879359847 ; xx [ 56 ] = xx [ 24
] ; xx [ 57 ] = xx [ 34 ] ; xx [ 58 ] = - 0.05090199292298814 ;
pm_math_Matrix3x3_xform_ra ( xx + 517 , xx + 56 , xx + 121 ) ; xx [ 56 ] =
9.26085821183738e-9 ; xx [ 57 ] = 3.402090196577216e-8 ; xx [ 58 ] = -
1.576054485987831e-14 ; pm_math_Quaternion_xform_ra ( xx + 73 , xx + 56 , xx
+ 132 ) ; xx [ 56 ] = state [ 13 ] * state [ 13 ] ; xx [ 57 ] = xx [ 132 ] *
xx [ 56 ] ; xx [ 58 ] = xx [ 133 ] * xx [ 56 ] ; xx [ 59 ] = xx [ 134 ] * xx
[ 56 ] ; pm_math_Quaternion_xform_ra ( xx + 60 , xx + 57 , xx + 132 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 165 , xx + 223 , xx + 56 ) ; xx [
59 ] = xx [ 131 ] + pm_math_Vector3_dot_ra ( xx + 329 , xx + 56 ) ; xx [ 56 ]
= xx [ 152 ] * state [ 15 ] - xx [ 162 ] * xx [ 205 ] ; xx [ 57 ] = xx [ 205
] * xx [ 158 ] - xx [ 206 ] * xx [ 152 ] ; xx [ 58 ] = xx [ 158 ] * state [
15 ] - xx [ 162 ] * xx [ 206 ] ; xx [ 77 ] = xx [ 163 ] * state [ 15 ] - xx [
205 ] * xx [ 169 ] ; xx [ 84 ] = xx [ 205 ] * xx [ 156 ] - xx [ 163 ] * xx [
206 ] ; xx [ 86 ] = xx [ 156 ] * state [ 15 ] - xx [ 206 ] * xx [ 169 ] ; xx
[ 87 ] = xx [ 170 ] * state [ 15 ] - xx [ 205 ] * xx [ 157 ] ; xx [ 89 ] = xx
[ 159 ] * xx [ 205 ] - xx [ 206 ] * xx [ 170 ] ; xx [ 91 ] = xx [ 159 ] *
state [ 15 ] - xx [ 206 ] * xx [ 157 ] ; xx [ 309 ] = - ( xx [ 56 ] * state [
15 ] - xx [ 206 ] * xx [ 57 ] ) ; xx [ 310 ] = - ( xx [ 205 ] * xx [ 57 ] +
xx [ 58 ] * state [ 15 ] ) ; xx [ 311 ] = xx [ 58 ] * xx [ 206 ] + xx [ 56 ]
* xx [ 205 ] ; xx [ 312 ] = - ( xx [ 77 ] * state [ 15 ] - xx [ 206 ] * xx [
84 ] ) ; xx [ 313 ] = - ( xx [ 205 ] * xx [ 84 ] + xx [ 86 ] * state [ 15 ] )
; xx [ 314 ] = xx [ 86 ] * xx [ 206 ] + xx [ 77 ] * xx [ 205 ] ; xx [ 315 ] =
- ( xx [ 87 ] * state [ 15 ] - xx [ 206 ] * xx [ 89 ] ) ; xx [ 316 ] = - ( xx
[ 205 ] * xx [ 89 ] + xx [ 91 ] * state [ 15 ] ) ; xx [ 317 ] = xx [ 91 ] *
xx [ 206 ] + xx [ 87 ] * xx [ 205 ] ; pm_math_Matrix3x3_compose_ra ( xx + 300
, xx + 309 , xx + 526 ) ; pm_math_Matrix3x3_xform_ra ( xx + 526 , xx + 171 ,
xx + 56 ) ; xx [ 77 ] = xx [ 200 ] * state [ 3 ] ; xx [ 84 ] = xx [ 240 ] *
xx [ 242 ] ; xx [ 86 ] = xx [ 239 ] * xx [ 241 ] ; xx [ 87 ] = ( xx [ 84 ] +
xx [ 86 ] ) * xx [ 8 ] ; xx [ 89 ] = xx [ 80 ] * state [ 3 ] ; xx [ 91 ] = xx
[ 239 ] * xx [ 239 ] ; xx [ 112 ] = ( xx [ 91 ] + xx [ 240 ] * xx [ 240 ] ) *
xx [ 8 ] - xx [ 2 ] ; xx [ 113 ] = xx [ 87 ] * xx [ 89 ] + xx [ 77 ] * xx [
112 ] ; xx [ 131 ] = xx [ 199 ] * state [ 3 ] ; xx [ 152 ] = xx [ 240 ] * xx
[ 241 ] ; xx [ 156 ] = xx [ 239 ] * xx [ 242 ] ; xx [ 157 ] = xx [ 8 ] * ( xx
[ 152 ] - xx [ 156 ] ) ; xx [ 158 ] = xx [ 131 ] * xx [ 112 ] + xx [ 89 ] *
xx [ 157 ] ; xx [ 159 ] = xx [ 77 ] * xx [ 157 ] - xx [ 87 ] * xx [ 131 ] ;
xx [ 162 ] = xx [ 241 ] * xx [ 242 ] ; xx [ 163 ] = xx [ 239 ] * xx [ 240 ] ;
xx [ 169 ] = xx [ 8 ] * ( xx [ 162 ] - xx [ 163 ] ) ; xx [ 170 ] = ( xx [ 152
] + xx [ 156 ] ) * xx [ 8 ] ; xx [ 152 ] = xx [ 89 ] * xx [ 169 ] + xx [ 170
] * xx [ 77 ] ; xx [ 156 ] = ( xx [ 91 ] + xx [ 241 ] * xx [ 241 ] ) * xx [ 8
] - xx [ 2 ] ; xx [ 174 ] = xx [ 170 ] * xx [ 131 ] + xx [ 89 ] * xx [ 156 ]
; xx [ 176 ] = xx [ 77 ] * xx [ 156 ] - xx [ 131 ] * xx [ 169 ] ; xx [ 179 ]
= ( xx [ 91 ] + xx [ 242 ] * xx [ 242 ] ) * xx [ 8 ] - xx [ 2 ] ; xx [ 91 ] =
xx [ 8 ] * ( xx [ 84 ] - xx [ 86 ] ) ; xx [ 84 ] = xx [ 89 ] * xx [ 179 ] +
xx [ 77 ] * xx [ 91 ] ; xx [ 86 ] = ( xx [ 162 ] + xx [ 163 ] ) * xx [ 8 ] ;
xx [ 162 ] = xx [ 131 ] * xx [ 91 ] + xx [ 86 ] * xx [ 89 ] ; xx [ 163 ] = xx
[ 86 ] * xx [ 77 ] - xx [ 131 ] * xx [ 179 ] ; xx [ 300 ] = - ( xx [ 77 ] *
xx [ 113 ] + xx [ 131 ] * xx [ 158 ] ) ; xx [ 301 ] = - ( xx [ 89 ] * xx [
158 ] + xx [ 77 ] * xx [ 159 ] ) ; xx [ 302 ] = xx [ 131 ] * xx [ 159 ] - xx
[ 89 ] * xx [ 113 ] ; xx [ 303 ] = - ( xx [ 77 ] * xx [ 152 ] + xx [ 131 ] *
xx [ 174 ] ) ; xx [ 304 ] = - ( xx [ 89 ] * xx [ 174 ] + xx [ 77 ] * xx [ 176
] ) ; xx [ 305 ] = xx [ 131 ] * xx [ 176 ] - xx [ 89 ] * xx [ 152 ] ; xx [
306 ] = - ( xx [ 77 ] * xx [ 84 ] + xx [ 131 ] * xx [ 162 ] ) ; xx [ 307 ] =
- ( xx [ 89 ] * xx [ 162 ] + xx [ 77 ] * xx [ 163 ] ) ; xx [ 308 ] = xx [ 131
] * xx [ 163 ] - xx [ 89 ] * xx [ 84 ] ; pm_math_Matrix3x3_compose_ra ( xx +
300 , xx + 338 , xx + 309 ) ; xx [ 186 ] = xx [ 310 ] ; xx [ 187 ] = xx [ 313
] ; xx [ 188 ] = xx [ 316 ] ; xx [ 201 ] = - xx [ 89 ] ; xx [ 202 ] = xx [
131 ] ; xx [ 203 ] = xx [ 77 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
232 , xx + 201 , xx + 223 ) ; xx [ 84 ] = xx [ 223 ] * xx [ 245 ] ; xx [ 113
] = xx [ 225 ] * xx [ 246 ] + xx [ 223 ] * xx [ 244 ] ; xx [ 152 ] = xx [ 245
] * xx [ 225 ] ; xx [ 267 ] = xx [ 84 ] ; xx [ 268 ] = - xx [ 113 ] ; xx [
269 ] = xx [ 152 ] ; pm_math_Vector3_cross_ra ( xx + 244 , xx + 267 , xx +
284 ) ; xx [ 267 ] = ( xx [ 243 ] * xx [ 84 ] + xx [ 284 ] ) * xx [ 8 ] - xx
[ 225 ] ; xx [ 268 ] = xx [ 8 ] * ( xx [ 285 ] - xx [ 113 ] * xx [ 243 ] ) ;
xx [ 269 ] = xx [ 223 ] + ( xx [ 243 ] * xx [ 152 ] + xx [ 286 ] ) * xx [ 8 ]
; pm_math_Vector3_cross_ra ( xx + 218 , xx + 171 , xx + 284 ) ;
pm_math_Quaternion_xform_ra ( xx + 191 , xx + 284 , xx + 171 ) ; xx [ 84 ] =
state [ 2 ] + xx [ 8 ] ; if ( xx [ 181 ] < xx [ 84 ] ) xx [ 84 ] = xx [ 181 ]
; xx [ 113 ] = - ( xx [ 84 ] / xx [ 248 ] ) ; if ( xx [ 2 ] < xx [ 113 ] ) xx
[ 113 ] = xx [ 2 ] ; xx [ 152 ] = xx [ 255 ] * state [ 3 ] ; xx [ 158 ] = xx
[ 113 ] * xx [ 113 ] * ( xx [ 253 ] - xx [ 8 ] * xx [ 113 ] ) * ( ( - xx [ 84
] == xx [ 181 ] ? xx [ 181 ] : - xx [ 152 ] ) - xx [ 262 ] * xx [ 84 ] ) ; if
( xx [ 181 ] > xx [ 158 ] ) xx [ 158 ] = xx [ 181 ] ; xx [ 84 ] = state [ 2 ]
+ xx [ 2 ] ; if ( xx [ 181 ] > xx [ 84 ] ) xx [ 84 ] = xx [ 181 ] ; xx [ 113
] = xx [ 84 ] / xx [ 248 ] ; if ( xx [ 2 ] < xx [ 113 ] ) xx [ 113 ] = xx [ 2
] ; xx [ 159 ] = ( xx [ 262 ] * xx [ 84 ] + ( xx [ 84 ] == xx [ 181 ] ? xx [
181 ] : xx [ 152 ] ) ) * xx [ 113 ] * xx [ 113 ] * ( xx [ 253 ] - xx [ 8 ] *
xx [ 113 ] ) ; if ( xx [ 181 ] > xx [ 159 ] ) xx [ 159 ] = xx [ 181 ] ; xx [
84 ] = input [ 0 ] - xx [ 164 ] * state [ 2 ] - xx [ 177 ] * state [ 3 ] + xx
[ 158 ] - xx [ 159 ] ; xx [ 162 ] = - ( xx [ 276 ] * xx [ 89 ] ) ; xx [ 163 ]
= xx [ 327 ] * xx [ 131 ] ; xx [ 164 ] = xx [ 328 ] * xx [ 77 ] ;
pm_math_Vector3_cross_ra ( xx + 201 , xx + 162 , xx + 218 ) ; xx [ 77 ] = xx
[ 224 ] + state [ 5 ] ; xx [ 162 ] = xx [ 223 ] ; xx [ 163 ] = xx [ 77 ] ; xx
[ 164 ] = xx [ 225 ] ; xx [ 247 ] = xx [ 53 ] * xx [ 223 ] ; xx [ 248 ] = xx
[ 77 ] * xx [ 161 ] ; xx [ 249 ] = xx [ 101 ] * xx [ 225 ] ;
pm_math_Vector3_cross_ra ( xx + 162 , xx + 247 , xx + 251 ) ; xx [ 89 ] = xx
[ 251 ] - xx [ 53 ] * xx [ 225 ] * state [ 5 ] ; pm_math_Vector3_cross_ra (
xx + 201 , xx + 381 , xx + 162 ) ; pm_math_Vector3_cross_ra ( xx + 201 , xx +
162 , xx + 247 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 232 , xx + 247 ,
xx + 162 ) ; xx [ 53 ] = xx [ 26 ] * xx [ 164 ] ; xx [ 113 ] = xx [ 252 ] -
xx [ 377 ] * xx [ 53 ] ; xx [ 131 ] = xx [ 113 ] / xx [ 375 ] ; xx [ 152 ] =
xx [ 253 ] + xx [ 101 ] * xx [ 223 ] * state [ 5 ] ; xx [ 247 ] = xx [ 89 ] ;
xx [ 248 ] = xx [ 252 ] - xx [ 161 ] * xx [ 131 ] ; xx [ 249 ] = xx [ 152 ] ;
pm_math_Quaternion_xform_ra ( xx + 232 , xx + 247 , xx + 253 ) ; xx [ 101 ] =
xx [ 377 ] * state [ 5 ] ; xx [ 158 ] = ( xx [ 162 ] - ( xx [ 224 ] + xx [ 77
] ) * xx [ 101 ] ) * xx [ 26 ] ; xx [ 77 ] = xx [ 26 ] * ( xx [ 163 ] + ( xx
[ 223 ] + xx [ 223 ] ) * xx [ 101 ] ) ; xx [ 162 ] = xx [ 158 ] ; xx [ 163 ]
= xx [ 77 ] ; xx [ 164 ] = xx [ 53 ] + xx [ 395 ] * xx [ 131 ] ;
pm_math_Quaternion_xform_ra ( xx + 232 , xx + 162 , xx + 247 ) ;
pm_math_Vector3_cross_ra ( xx + 381 , xx + 247 , xx + 162 ) ; xx [ 276 ] = -
( xx [ 279 ] * state [ 3 ] ) ; xx [ 277 ] = - ( xx [ 332 ] * state [ 3 ] ) ;
xx [ 278 ] = - ( xx [ 334 ] * state [ 3 ] ) ; pm_math_Vector3_cross_ra ( xx +
201 , xx + 276 , xx + 284 ) ; pm_math_Matrix3x3_xform_ra ( xx + 355 , xx +
284 , xx + 276 ) ; xx [ 294 ] = xx [ 218 ] + xx [ 253 ] + xx [ 162 ] + xx [
276 ] ; xx [ 295 ] = xx [ 219 ] + xx [ 254 ] + xx [ 163 ] + xx [ 277 ] ; xx [
296 ] = xx [ 220 ] + xx [ 255 ] + xx [ 164 ] + xx [ 278 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 384 , xx + 284 , xx + 162 ) ; xx [ 253 ] =
xx [ 247 ] + xx [ 162 ] ; xx [ 254 ] = xx [ 248 ] + xx [ 163 ] ; xx [ 255 ] =
xx [ 249 ] + xx [ 164 ] ; xx [ 26 ] = ( xx [ 84 ] - ( pm_math_Vector3_dot_ra
( xx + 320 , xx + 294 ) + pm_math_Vector3_dot_ra ( xx + 347 , xx + 253 ) ) )
/ xx [ 105 ] ; xx [ 247 ] = - ( xx [ 80 ] * xx [ 26 ] ) ; xx [ 248 ] = xx [
199 ] * xx [ 26 ] ; xx [ 249 ] = xx [ 200 ] * xx [ 26 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 232 , xx + 247 , xx + 253 ) ;
pm_math_Vector3_cross_ra ( xx + 247 , xx + 381 , xx + 294 ) ; xx [ 247 ] = xx
[ 284 ] - xx [ 279 ] * xx [ 26 ] + xx [ 294 ] ; xx [ 248 ] = xx [ 285 ] - xx
[ 332 ] * xx [ 26 ] + xx [ 295 ] ; xx [ 249 ] = xx [ 286 ] - xx [ 334 ] * xx
[ 26 ] + xx [ 296 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 232 , xx +
247 , xx + 294 ) ; xx [ 101 ] = xx [ 131 ] + xx [ 283 ] * xx [ 254 ] - xx [
293 ] * xx [ 296 ] ; xx [ 131 ] = xx [ 326 ] * state [ 5 ] * state [ 5 ] ; xx
[ 159 ] = xx [ 8 ] * xx [ 333 ] * state [ 5 ] * state [ 5 ] ; xx [ 174 ] = xx
[ 8 ] * xx [ 337 ] * state [ 5 ] * state [ 5 ] ; xx [ 176 ] = xx [ 243 ] * xx
[ 243 ] ; xx [ 177 ] = xx [ 244 ] * xx [ 245 ] ; xx [ 180 ] = xx [ 243 ] * xx
[ 246 ] ; xx [ 196 ] = xx [ 244 ] * xx [ 246 ] ; xx [ 197 ] = xx [ 243 ] * xx
[ 245 ] ; xx [ 205 ] = xx [ 245 ] * xx [ 246 ] ; xx [ 206 ] = xx [ 243 ] * xx
[ 244 ] ; xx [ 336 ] = ( xx [ 176 ] + xx [ 244 ] * xx [ 244 ] ) * xx [ 8 ] -
xx [ 2 ] ; xx [ 337 ] = xx [ 8 ] * ( xx [ 177 ] - xx [ 180 ] ) ; xx [ 338 ] =
( xx [ 196 ] + xx [ 197 ] ) * xx [ 8 ] ; xx [ 339 ] = ( xx [ 177 ] + xx [ 180
] ) * xx [ 8 ] ; xx [ 340 ] = ( xx [ 176 ] + xx [ 245 ] * xx [ 245 ] ) * xx [
8 ] - xx [ 2 ] ; xx [ 341 ] = xx [ 8 ] * ( xx [ 205 ] - xx [ 206 ] ) ; xx [
342 ] = xx [ 8 ] * ( xx [ 196 ] - xx [ 197 ] ) ; xx [ 343 ] = ( xx [ 205 ] +
xx [ 206 ] ) * xx [ 8 ] ; xx [ 344 ] = ( xx [ 176 ] + xx [ 246 ] * xx [ 246 ]
) * xx [ 8 ] - xx [ 2 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 336 , xx +
223 , xx + 355 ) ; pm_math_Matrix3x3_xform_ra ( xx + 300 , xx + 381 , xx +
223 ) ; xx [ 247 ] = - 3.057483106867101e-4 ; xx [ 248 ] = -
5.123764043326115e-4 ; xx [ 249 ] = 0.1059486919109176 ;
pm_math_Quaternion_xform_ra ( xx + 239 , xx + 247 , xx + 253 ) ; xx [ 176 ] =
state [ 3 ] * state [ 3 ] ; xx [ 177 ] = state [ 5 ] * state [ 5 ] ; xx [ 247
] = xx [ 177 ] * ( ( xx [ 370 ] + xx [ 79 ] * xx [ 378 ] ) * xx [ 8 ] - xx [
377 ] ) ; xx [ 248 ] = ( xx [ 374 ] - xx [ 379 ] * xx [ 226 ] ) * xx [ 8 ] *
xx [ 177 ] ; xx [ 249 ] = - ( xx [ 8 ] * ( xx [ 378 ] * xx [ 226 ] + xx [ 335
] ) * xx [ 177 ] ) ; pm_math_Quaternion_xform_ra ( xx + 239 , xx + 247 , xx +
294 ) ; xx [ 247 ] = xx [ 8 ] * xx [ 353 ] * state [ 5 ] ; xx [ 248 ] = - (
xx [ 8 ] * xx [ 354 ] * state [ 5 ] ) ; xx [ 249 ] = xx [ 371 ] * state [ 5 ]
; pm_math_Vector3_cross_ra ( xx + 201 , xx + 247 , xx + 300 ) ;
pm_math_Quaternion_xform_ra ( xx + 239 , xx + 300 , xx + 201 ) ; xx [ 239 ] =
xx [ 24 ] ; xx [ 240 ] = xx [ 34 ] ; xx [ 241 ] = - 0.05090199292298809 ;
pm_math_Matrix3x3_xform_ra ( xx + 526 , xx + 239 , xx + 247 ) ; xx [ 239 ] =
9.260862306845838e-9 ; xx [ 240 ] = 3.402090709721697e-8 ; xx [ 241 ] = -
1.576054750645198e-14 ; pm_math_Quaternion_xform_ra ( xx + 165 , xx + 239 ,
xx + 300 ) ; xx [ 24 ] = state [ 15 ] * state [ 15 ] ; xx [ 239 ] = xx [ 300
] * xx [ 24 ] ; xx [ 240 ] = xx [ 301 ] * xx [ 24 ] ; xx [ 241 ] = xx [ 302 ]
* xx [ 24 ] ; pm_math_Quaternion_xform_ra ( xx + 60 , xx + 239 , xx + 300 ) ;
xx [ 60 ] = - 3.609878937216315e-6 ; xx [ 61 ] = 0.9999999999933915 ; xx [ 62
] = - 4.313584738291354e-7 ; pm_math_Matrix3x3_xform_ra ( xx + 526 , xx + 60
, xx + 239 ) ; xx [ 60 ] = 3.609878923338528e-6 ; xx [ 61 ] = -
0.9999999999933913 ; xx [ 62 ] = 4.313584749393584e-7 ;
pm_math_Matrix3x3_xform_ra ( xx + 517 , xx + 60 , xx + 240 ) ; xx [ 60 ] = -
xx [ 9 ] ; xx [ 61 ] = - xx [ 11 ] ; xx [ 62 ] = - xx [ 12 ] ; xx [ 24 ] = xx
[ 9 ] * state [ 1 ] ; xx [ 9 ] = xx [ 11 ] * state [ 1 ] ; xx [ 11 ] = xx [
12 ] * state [ 1 ] ; xx [ 303 ] = - xx [ 24 ] ; xx [ 304 ] = - xx [ 9 ] ; xx
[ 305 ] = - xx [ 11 ] ; xx [ 306 ] = - ( 0.05271741804498591 * xx [ 24 ] ) ;
xx [ 307 ] = - ( 0.05265622862046129 * xx [ 9 ] ) ; xx [ 308 ] = - (
0.01235715180979249 * xx [ 11 ] ) ; pm_math_Vector3_cross_ra ( xx + 303 , xx
+ 306 , xx + 317 ) ; xx [ 12 ] = xx [ 5 ] * input [ 2 ] ; xx [ 34 ] = xx [ 4
] * input [ 2 ] ; xx [ 306 ] = xx [ 317 ] - ( xx [ 3 ] * xx [ 12 ] + xx [ 6 ]
* xx [ 34 ] ) * xx [ 8 ] ; xx [ 307 ] = xx [ 318 ] - xx [ 8 ] * ( xx [ 3 ] *
xx [ 34 ] - xx [ 6 ] * xx [ 12 ] ) ; xx [ 308 ] = xx [ 319 ] - ( input [ 2 ]
- ( xx [ 4 ] * xx [ 34 ] + xx [ 5 ] * xx [ 12 ] ) * xx [ 8 ] ) ; xx [ 3 ] =
0.7974838207830182 ; xx [ 4 ] = - ( xx [ 14 ] * state [ 1 ] ) ; xx [ 5 ] = -
( xx [ 15 ] * state [ 1 ] ) ; xx [ 6 ] = xx [ 23 ] * state [ 1 ] ;
pm_math_Vector3_cross_ra ( xx + 303 , xx + 4 , xx + 317 ) ; xx [ 4 ] = xx [ 3
] * xx [ 317 ] ; xx [ 5 ] = xx [ 3 ] * xx [ 318 ] ; xx [ 6 ] = xx [ 3 ] * xx
[ 319 ] ; xx [ 3 ] = pm_math_Vector3_dot_ra ( xx + 60 , xx + 306 ) +
pm_math_Vector3_dot_ra ( xx + 27 , xx + 4 ) ; xx [ 4 ] = xx [ 18 ] * xx [ 19
] ; xx [ 5 ] = xx [ 17 ] * xx [ 20 ] ; xx [ 6 ] = xx [ 8 ] * ( xx [ 4 ] - xx
[ 5 ] ) ; xx [ 12 ] = xx [ 17 ] * xx [ 17 ] ; xx [ 14 ] = ( xx [ 12 ] + xx [
18 ] * xx [ 18 ] ) * xx [ 8 ] - xx [ 2 ] ; xx [ 15 ] = xx [ 24 ] * xx [ 6 ] -
xx [ 9 ] * xx [ 14 ] ; xx [ 23 ] = xx [ 18 ] * xx [ 20 ] ; xx [ 27 ] = xx [
17 ] * xx [ 19 ] ; xx [ 28 ] = ( xx [ 23 ] + xx [ 27 ] ) * xx [ 8 ] ; xx [ 29
] = xx [ 11 ] * xx [ 14 ] - xx [ 28 ] * xx [ 24 ] ; xx [ 14 ] = xx [ 28 ] *
xx [ 9 ] - xx [ 11 ] * xx [ 6 ] ; xx [ 6 ] = ( xx [ 12 ] + xx [ 19 ] * xx [
19 ] ) * xx [ 8 ] - xx [ 2 ] ; xx [ 28 ] = ( xx [ 4 ] + xx [ 5 ] ) * xx [ 8 ]
; xx [ 4 ] = xx [ 24 ] * xx [ 6 ] - xx [ 28 ] * xx [ 9 ] ; xx [ 5 ] = xx [ 19
] * xx [ 20 ] ; xx [ 34 ] = xx [ 17 ] * xx [ 18 ] ; xx [ 60 ] = xx [ 8 ] * (
xx [ 5 ] - xx [ 34 ] ) ; xx [ 61 ] = xx [ 28 ] * xx [ 11 ] - xx [ 24 ] * xx [
60 ] ; xx [ 28 ] = xx [ 9 ] * xx [ 60 ] - xx [ 11 ] * xx [ 6 ] ; xx [ 6 ] = (
xx [ 5 ] + xx [ 34 ] ) * xx [ 8 ] ; xx [ 5 ] = xx [ 8 ] * ( xx [ 23 ] - xx [
27 ] ) ; xx [ 23 ] = xx [ 6 ] * xx [ 24 ] - xx [ 9 ] * xx [ 5 ] ; xx [ 27 ] =
( xx [ 12 ] + xx [ 20 ] * xx [ 20 ] ) * xx [ 8 ] - xx [ 2 ] ; xx [ 2 ] = xx [
11 ] * xx [ 5 ] - xx [ 24 ] * xx [ 27 ] ; xx [ 5 ] = xx [ 9 ] * xx [ 27 ] -
xx [ 6 ] * xx [ 11 ] ; xx [ 335 ] = xx [ 9 ] * xx [ 15 ] - xx [ 11 ] * xx [
29 ] ; xx [ 336 ] = xx [ 11 ] * xx [ 14 ] - xx [ 24 ] * xx [ 15 ] ; xx [ 337
] = xx [ 24 ] * xx [ 29 ] - xx [ 9 ] * xx [ 14 ] ; xx [ 338 ] = xx [ 9 ] * xx
[ 4 ] - xx [ 11 ] * xx [ 61 ] ; xx [ 339 ] = xx [ 11 ] * xx [ 28 ] - xx [ 24
] * xx [ 4 ] ; xx [ 340 ] = xx [ 24 ] * xx [ 61 ] - xx [ 9 ] * xx [ 28 ] ; xx
[ 341 ] = xx [ 9 ] * xx [ 23 ] - xx [ 11 ] * xx [ 2 ] ; xx [ 342 ] = xx [ 11
] * xx [ 5 ] - xx [ 24 ] * xx [ 23 ] ; xx [ 343 ] = xx [ 24 ] * xx [ 2 ] - xx
[ 9 ] * xx [ 5 ] ; xx [ 4 ] = 0.9999985523541615 ; xx [ 5 ] = -
2.130267675773651e-5 ; xx [ 6 ] = - 1.701421692958279e-3 ;
pm_math_Matrix3x3_xform_ra ( xx + 335 , xx + 4 , xx + 27 ) ; xx [ 60 ] =
3.397648291980224e-4 ; xx [ 61 ] = 1.051662890794458e-5 ; xx [ 62 ] =
0.6830642379941189 ; pm_math_Matrix3x3_xform_ra ( xx + 335 , xx + 60 , xx +
306 ) ; xx [ 60 ] = - 8.224149921265433e-4 ; xx [ 61 ] = 7.791724056638551e-7
; xx [ 62 ] = 1.399265876074284e-6 ; pm_math_Quaternion_xform_ra ( xx + 17 ,
xx + 60 , xx + 317 ) ; xx [ 2 ] = state [ 1 ] * state [ 1 ] ;
pm_math_Vector3_cross_ra ( xx + 303 , xx + 4 , xx + 60 ) ;
pm_math_Quaternion_xform_ra ( xx + 17 , xx + 60 , xx + 4 ) ; xx [ 9 ] = xx [
5 ] - xx [ 21 ] * xx [ 4 ] + xx [ 13 ] * xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] * xx
[ 4 ] - xx [ 13 ] * xx [ 5 ] + xx [ 6 ] ; xx [ 335 ] = xx [ 110 ] * xx [ 182
] - ( pm_math_Vector3_dot_ra ( xx + 229 , xx + 107 ) + pm_math_Vector3_dot_ra
( xx + 92 , xx + 81 ) + pm_math_Vector3_dot_ra ( xx + 259 , xx + 183 ) * xx [
8 ] + xx [ 50 ] * xx [ 120 ] ) ; xx [ 336 ] = xx [ 195 ] * xx [ 111 ] - ( xx
[ 98 ] + xx [ 117 ] + xx [ 124 ] * xx [ 54 ] + xx [ 127 ] + xx [ 8 ] * xx [
95 ] - ( xx [ 121 ] + xx [ 132 ] ) + xx [ 155 ] * xx [ 120 ] ) - xx [ 182 ] *
xx [ 213 ] ; xx [ 337 ] = xx [ 111 ] * xx [ 222 ] - ( xx [ 99 ] + xx [ 118 ]
+ xx [ 125 ] * xx [ 54 ] + xx [ 128 ] + xx [ 8 ] * xx [ 96 ] - ( xx [ 122 ] +
xx [ 133 ] ) + xx [ 221 ] * xx [ 120 ] ) - xx [ 182 ] * xx [ 228 ] ; xx [ 338
] = xx [ 44 ] * xx [ 111 ] - ( xx [ 100 ] + xx [ 119 ] + xx [ 126 ] * xx [ 54
] + xx [ 129 ] + xx [ 8 ] * xx [ 97 ] - ( xx [ 123 ] + xx [ 134 ] ) + xx [ 43
] * xx [ 120 ] ) + xx [ 153 ] - xx [ 182 ] * xx [ 35 ] ; xx [ 339 ] = xx [ 7
] * xx [ 59 ] - ( pm_math_Vector3_dot_ra ( xx + 56 , xx + 215 ) +
pm_math_Vector3_dot_ra ( xx + 186 , xx + 69 ) + pm_math_Vector3_dot_ra ( xx +
267 , xx + 171 ) * xx [ 8 ] + xx [ 72 ] * xx [ 26 ] ) ; xx [ 340 ] = xx [ 101
] * xx [ 373 ] - ( xx [ 237 ] * ( xx [ 309 ] - ( xx [ 131 ] * xx [ 112 ] + xx
[ 159 ] * xx [ 157 ] + xx [ 87 ] * xx [ 174 ] ) - xx [ 8 ] * xx [ 357 ] *
state [ 5 ] ) - xx [ 236 ] * xx [ 310 ] + xx [ 223 ] + xx [ 253 ] * xx [ 176
] + xx [ 294 ] + xx [ 8 ] * xx [ 201 ] - ( xx [ 247 ] + xx [ 300 ] ) + xx [
238 ] * xx [ 26 ] ) - xx [ 59 ] * xx [ 256 ] ; xx [ 341 ] = xx [ 101 ] * xx [
264 ] - ( xx [ 237 ] * ( xx [ 312 ] - ( xx [ 170 ] * xx [ 131 ] + xx [ 159 ]
* xx [ 156 ] + xx [ 174 ] * xx [ 169 ] ) - xx [ 8 ] * xx [ 360 ] * state [ 5
] ) - xx [ 236 ] * xx [ 313 ] + xx [ 224 ] + xx [ 254 ] * xx [ 176 ] + xx [
295 ] + xx [ 8 ] * xx [ 202 ] - ( xx [ 248 ] + xx [ 301 ] ) + xx [ 263 ] * xx
[ 26 ] ) - xx [ 59 ] * xx [ 266 ] ; xx [ 342 ] = xx [ 101 ] * xx [ 272 ] - (
xx [ 237 ] * ( xx [ 315 ] - ( xx [ 91 ] * xx [ 131 ] + xx [ 86 ] * xx [ 159 ]
+ xx [ 174 ] * xx [ 179 ] ) - xx [ 8 ] * xx [ 363 ] * state [ 5 ] ) - xx [
236 ] * xx [ 316 ] + xx [ 225 ] + xx [ 255 ] * xx [ 176 ] + xx [ 296 ] + xx [
8 ] * xx [ 203 ] - ( xx [ 249 ] + xx [ 302 ] ) + xx [ 271 ] * xx [ 26 ] ) +
xx [ 153 ] - xx [ 59 ] * xx [ 250 ] ; xx [ 343 ] = xx [ 59 ] * xx [ 280 ] -
xx [ 239 ] ; xx [ 344 ] = xx [ 182 ] * xx [ 288 ] - xx [ 240 ] ; xx [ 345 ] =
xx [ 36 ] * xx [ 3 ] / xx [ 299 ] - ( xx [ 0 ] * ( xx [ 16 ] * ( xx [ 28 ] -
xx [ 21 ] * xx [ 27 ] + xx [ 13 ] * xx [ 29 ] ) - ( xx [ 1 ] * xx [ 27 ] - xx
[ 13 ] * xx [ 28 ] + xx [ 29 ] ) * xx [ 22 ] ) / xx [ 10 ] + ( xx [ 306 ] +
xx [ 317 ] * xx [ 2 ] ) * xx [ 1 ] - ( xx [ 307 ] + xx [ 318 ] * xx [ 2 ] ) *
xx [ 13 ] + xx [ 308 ] + xx [ 319 ] * xx [ 2 ] - xx [ 0 ] * xx [ 8 ] * ( xx [
9 ] * xx [ 22 ] + xx [ 11 ] * xx [ 16 ] ) * ( xx [ 16 ] * xx [ 9 ] - xx [ 11
] * xx [ 22 ] ) / xx [ 10 ] / xx [ 10 ] ) + xx [ 153 ] ; memcpy ( xx + 517 ,
xx + 396 , 121 * sizeof ( double ) ) ; factorAndSolveSymmetric ( xx + 517 ,
11 , xx + 91 , ii + 0 , xx + 335 , xx + 8 , xx + 638 ) ; xx [ 0 ] = ( xx [
373 ] * xx [ 13 ] + xx [ 264 ] * xx [ 14 ] + xx [ 272 ] * xx [ 15 ] - xx [
113 ] ) / xx [ 375 ] ; xx [ 4 ] = xx [ 89 ] ; xx [ 5 ] = xx [ 252 ] + xx [
161 ] * xx [ 0 ] ; xx [ 6 ] = xx [ 152 ] ; pm_math_Quaternion_xform_ra ( xx +
232 , xx + 4 , xx + 19 ) ; xx [ 4 ] = xx [ 158 ] ; xx [ 5 ] = xx [ 77 ] ; xx
[ 6 ] = xx [ 53 ] - xx [ 395 ] * xx [ 0 ] ; pm_math_Quaternion_xform_ra ( xx
+ 232 , xx + 4 , xx + 22 ) ; pm_math_Vector3_cross_ra ( xx + 381 , xx + 22 ,
xx + 4 ) ; xx [ 26 ] = xx [ 218 ] + xx [ 19 ] + xx [ 4 ] + xx [ 276 ] ; xx [
27 ] = xx [ 219 ] + xx [ 20 ] + xx [ 5 ] + xx [ 277 ] ; xx [ 28 ] = xx [ 220
] + xx [ 21 ] + xx [ 6 ] + xx [ 278 ] ; xx [ 4 ] = xx [ 22 ] + xx [ 162 ] ;
xx [ 5 ] = xx [ 23 ] + xx [ 163 ] ; xx [ 6 ] = xx [ 24 ] + xx [ 164 ] ; xx [
1 ] = ( xx [ 84 ] - ( pm_math_Vector3_dot_ra ( xx + 320 , xx + 26 ) +
pm_math_Vector3_dot_ra ( xx + 347 , xx + 4 ) ) + xx [ 72 ] * xx [ 12 ] + xx [
238 ] * xx [ 13 ] + xx [ 263 ] * xx [ 14 ] + xx [ 271 ] * xx [ 15 ] ) / xx [
105 ] ; xx [ 4 ] = - ( xx [ 80 ] * xx [ 1 ] ) ; xx [ 5 ] = xx [ 199 ] * xx [
1 ] ; xx [ 6 ] = xx [ 200 ] * xx [ 1 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 232 , xx + 4 , xx + 19 ) ; pm_math_Vector3_cross_ra ( xx + 4 , xx + 381
, xx + 21 ) ; xx [ 4 ] = xx [ 284 ] - xx [ 279 ] * xx [ 1 ] + xx [ 21 ] ; xx
[ 5 ] = xx [ 285 ] - xx [ 332 ] * xx [ 1 ] + xx [ 22 ] ; xx [ 6 ] = xx [ 286
] - xx [ 334 ] * xx [ 1 ] + xx [ 23 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 232 , xx + 4 , xx + 21 ) ; xx [ 2 ] = xx [ 0 ] - ( xx [ 283 ] * xx [ 20
] - xx [ 293 ] * xx [ 23 ] ) ; xx [ 0 ] = ( xx [ 195 ] * xx [ 9 ] + xx [ 222
] * xx [ 10 ] + xx [ 44 ] * xx [ 11 ] - xx [ 55 ] ) / xx [ 154 ] ; xx [ 4 ] =
xx [ 45 ] ; xx [ 5 ] = xx [ 290 ] + xx [ 161 ] * xx [ 0 ] ; xx [ 6 ] = xx [
204 ] ; pm_math_Quaternion_xform_ra ( xx + 30 , xx + 4 , xx + 21 ) ; xx [ 4 ]
= xx [ 257 ] ; xx [ 5 ] = xx [ 25 ] ; xx [ 6 ] = xx [ 52 ] - xx [ 211 ] * xx
[ 0 ] ; pm_math_Quaternion_xform_ra ( xx + 30 , xx + 4 , xx + 24 ) ;
pm_math_Vector3_cross_ra ( xx + 136 , xx + 24 , xx + 4 ) ; xx [ 27 ] = xx [
273 ] + xx [ 21 ] + xx [ 4 ] + xx [ 323 ] ; xx [ 28 ] = xx [ 274 ] + xx [ 22
] + xx [ 5 ] + xx [ 324 ] ; xx [ 29 ] = xx [ 275 ] + xx [ 23 ] + xx [ 6 ] +
xx [ 325 ] ; xx [ 4 ] = xx [ 24 ] + xx [ 114 ] ; xx [ 5 ] = xx [ 25 ] + xx [
115 ] ; xx [ 6 ] = xx [ 26 ] + xx [ 116 ] ; xx [ 19 ] = ( xx [ 214 ] - (
pm_math_Vector3_dot_ra ( xx + 40 , xx + 27 ) + pm_math_Vector3_dot_ra ( xx +
102 , xx + 4 ) ) + xx [ 50 ] * xx [ 8 ] + xx [ 155 ] * xx [ 9 ] + xx [ 221 ]
* xx [ 10 ] + xx [ 43 ] * xx [ 11 ] ) / xx [ 78 ] ; xx [ 4 ] = - ( xx [ 37 ]
* xx [ 19 ] ) ; xx [ 5 ] = - ( xx [ 38 ] * xx [ 19 ] ) ; xx [ 6 ] = - ( xx [
39 ] * xx [ 19 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 30 , xx + 4 ,
xx + 21 ) ; pm_math_Vector3_cross_ra ( xx + 4 , xx + 136 , xx + 23 ) ; xx [ 4
] = xx [ 85 ] * xx [ 19 ] + xx [ 350 ] + xx [ 23 ] ; xx [ 5 ] = xx [ 351 ] -
xx [ 88 ] * xx [ 19 ] + xx [ 24 ] ; xx [ 6 ] = xx [ 352 ] - xx [ 90 ] * xx [
19 ] + xx [ 25 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 30 , xx + 4 , xx
+ 23 ) ; xx [ 4 ] = xx [ 0 ] - ( xx [ 297 ] * xx [ 22 ] - xx [ 298 ] * xx [
25 ] ) ; xx [ 0 ] = ( xx [ 7 ] * xx [ 12 ] - xx [ 256 ] * xx [ 13 ] - xx [
266 ] * xx [ 14 ] - xx [ 250 ] * xx [ 15 ] + xx [ 280 ] * xx [ 16 ] - xx [
106 ] ) / xx [ 130 ] ; xx [ 5 ] = xx [ 209 ] - xx [ 190 ] * xx [ 0 ] ; xx [ 6
] = xx [ 210 ] + xx [ 207 ] * xx [ 0 ] ; xx [ 7 ] = xx [ 212 ] - xx [ 208 ] *
xx [ 0 ] ; pm_math_Quaternion_xform_ra ( xx + 165 , xx + 5 , xx + 23 ) ; xx [
5 ] = ( xx [ 110 ] * xx [ 8 ] - xx [ 213 ] * xx [ 9 ] - xx [ 228 ] * xx [ 10
] - xx [ 35 ] * xx [ 11 ] + xx [ 288 ] * xx [ 17 ] - xx [ 198 ] ) / xx [ 130
] ; xx [ 6 ] = xx [ 175 ] + xx [ 147 ] * xx [ 5 ] ; xx [ 7 ] = xx [ 178 ] -
xx [ 148 ] * xx [ 5 ] ; xx [ 8 ] = xx [ 189 ] + xx [ 149 ] * xx [ 5 ] ;
pm_math_Quaternion_xform_ra ( xx + 73 , xx + 6 , xx + 12 ) ; xx [ 6 ] = xx [
23 ] + xx [ 12 ] ; xx [ 7 ] = xx [ 24 ] + xx [ 13 ] ; xx [ 8 ] = xx [ 25 ] +
xx [ 14 ] ; xx [ 9 ] = ( xx [ 11 ] + xx [ 15 ] + xx [ 18 ] -
pm_math_Vector3_dot_ra ( xx + 144 , xx + 6 ) ) / xx [ 150 ] ; xx [ 6 ] = - (
xx [ 135 ] * xx [ 9 ] ) ; xx [ 7 ] = xx [ 142 ] * xx [ 9 ] ; xx [ 8 ] = - (
xx [ 143 ] * xx [ 9 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 73 , xx +
6 , xx + 10 ) ; xx [ 13 ] = xx [ 5 ] - pm_math_Vector3_dot_ra ( xx + 139 , xx
+ 10 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 165 , xx + 6 , xx + 10 ) ;
xx [ 5 ] = xx [ 0 ] - pm_math_Vector3_dot_ra ( xx + 329 , xx + 10 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 64 , xx + 46 , xx + 14 ) ; xx [ 6
] = xx [ 51 ] * xx [ 13 ] ; xx [ 7 ] = xx [ 68 ] * xx [ 13 ] ; xx [ 8 ] = xx
[ 13 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 14 , xx + 6 , xx + 10 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 191 , xx + 243 , xx + 14 ) ; xx [
6 ] = - ( xx [ 151 ] * xx [ 5 ] ) ; xx [ 7 ] = - ( xx [ 160 ] * xx [ 5 ] ) ;
xx [ 8 ] = - xx [ 5 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 14 , xx + 6
, xx + 23 ) ; deriv [ 0 ] = state [ 1 ] ; deriv [ 1 ] = ( xx [ 36 ] * xx [ 18
] - xx [ 3 ] ) / xx [ 299 ] ; deriv [ 2 ] = state [ 3 ] ; deriv [ 3 ] = xx [
1 ] ; deriv [ 4 ] = state [ 5 ] ; deriv [ 5 ] = xx [ 2 ] ; deriv [ 6 ] =
state [ 7 ] ; deriv [ 7 ] = xx [ 19 ] ; deriv [ 8 ] = state [ 9 ] ; deriv [ 9
] = xx [ 4 ] ; deriv [ 10 ] = state [ 11 ] ; deriv [ 11 ] = xx [ 9 ] ; deriv
[ 12 ] = state [ 13 ] ; deriv [ 13 ] = xx [ 13 ] ; deriv [ 14 ] = state [ 15
] ; deriv [ 15 ] = xx [ 5 ] ; deriv [ 16 ] = state [ 17 ] ; deriv [ 17 ] = xx
[ 11 ] - ( xx [ 22 ] + xx [ 4 ] ) ; deriv [ 18 ] = state [ 19 ] ; deriv [ 19
] = xx [ 20 ] + xx [ 2 ] - xx [ 24 ] ; errorResult [ 0 ] = xx [ 181 ] ;
return NULL ; } PmfMessageId test14_9449aeaa_1_numJacPerturbLoBounds ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
bounds , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 2 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) state ; ( void ) modeVector ; ( void ) input ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = 1.0e-8 ; xx [ 1 ] = 1.0e-9 ; bounds [ 0 ] = xx [ 0 ] ;
bounds [ 1 ] = xx [ 0 ] ; bounds [ 2 ] = xx [ 0 ] ; bounds [ 3 ] = xx [ 0 ] ;
bounds [ 4 ] = xx [ 0 ] ; bounds [ 5 ] = xx [ 0 ] ; bounds [ 6 ] = xx [ 0 ] ;
bounds [ 7 ] = xx [ 0 ] ; bounds [ 8 ] = xx [ 0 ] ; bounds [ 9 ] = xx [ 0 ] ;
bounds [ 10 ] = xx [ 1 ] ; bounds [ 11 ] = xx [ 1 ] ; bounds [ 12 ] = xx [ 0
] ; bounds [ 13 ] = xx [ 0 ] ; bounds [ 14 ] = xx [ 0 ] ; bounds [ 15 ] = xx
[ 0 ] ; bounds [ 16 ] = xx [ 0 ] ; bounds [ 17 ] = xx [ 0 ] ; bounds [ 18 ] =
xx [ 0 ] ; bounds [ 19 ] = xx [ 0 ] ; errorResult [ 0 ] = 0.0 ; return NULL ;
} PmfMessageId test14_9449aeaa_1_numJacPerturbHiBounds ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
bounds , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 2 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) state ; ( void ) modeVector ; ( void ) input ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = 1.0 ; xx [ 1 ] = + pmf_get_inf ( ) ; bounds [ 0 ] = xx
[ 0 ] ; bounds [ 1 ] = xx [ 1 ] ; bounds [ 2 ] = xx [ 0 ] ; bounds [ 3 ] = xx
[ 1 ] ; bounds [ 4 ] = xx [ 0 ] ; bounds [ 5 ] = xx [ 1 ] ; bounds [ 6 ] = xx
[ 0 ] ; bounds [ 7 ] = xx [ 1 ] ; bounds [ 8 ] = xx [ 0 ] ; bounds [ 9 ] = xx
[ 1 ] ; bounds [ 10 ] = xx [ 1 ] ; bounds [ 11 ] = xx [ 1 ] ; bounds [ 12 ] =
xx [ 0 ] ; bounds [ 13 ] = xx [ 1 ] ; bounds [ 14 ] = xx [ 0 ] ; bounds [ 15
] = xx [ 1 ] ; bounds [ 16 ] = xx [ 0 ] ; bounds [ 17 ] = xx [ 1 ] ; bounds [
18 ] = xx [ 0 ] ; bounds [ 19 ] = xx [ 1 ] ; errorResult [ 0 ] = 0.0 ; return
NULL ; }

#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "test14_9449aeaa_1_geometries.h"
PmfMessageId test14_9449aeaa_1_recordLog ( const RuntimeDerivedValuesBundle *
rtdv , const int * eqnEnableFlags , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , double * logVector , double * errorResult , NeuDiagnosticManager
* neDiagMgr ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; int ii [ 11 ] ; double xx [ 771 ] ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector
; ( void ) inputDot ; ( void ) inputDdot ; ( void ) neDiagMgr ; xx [ 0 ] =
57.29577951308232 ; xx [ 1 ] = 0.03 ; xx [ 2 ] = 2.749954992318224e-39 ; xx [
3 ] = 1.0 ; xx [ 4 ] = 0.4995727091999011 ; xx [ 5 ] = - 0.49957621763275 ;
xx [ 6 ] = - 0.5004162835922631 ; xx [ 7 ] = 0.5004340657011012 ; xx [ 8 ] =
0.5 ; xx [ 9 ] = xx [ 8 ] * state [ 0 ] ; xx [ 10 ] = 1.701421996852573e-3 ;
xx [ 11 ] = sin ( xx [ 9 ] ) ; xx [ 12 ] = 1.425555872024444e-5 ; xx [ 13 ] =
0.9999985524789362 ; xx [ 14 ] = cos ( xx [ 9 ] ) ; xx [ 15 ] = - ( xx [ 10 ]
* xx [ 11 ] ) ; xx [ 16 ] = - ( xx [ 12 ] * xx [ 11 ] ) ; xx [ 17 ] = - ( xx
[ 13 ] * xx [ 11 ] ) ; pm_math_Quaternion_compose_ra ( xx + 4 , xx + 14 , xx
+ 18 ) ; xx [ 4 ] = 0.9999996380630076 ; xx [ 5 ] = 7.136837994664697e-6 ; xx
[ 6 ] = 8.507112303565772e-4 ; xx [ 7 ] = 1.064527084355427e-5 ; xx [ 14 ] =
- xx [ 4 ] ; xx [ 15 ] = xx [ 5 ] ; xx [ 16 ] = - xx [ 6 ] ; xx [ 17 ] = xx [
7 ] ; pm_math_Quaternion_compose_ra ( xx + 18 , xx + 14 , xx + 22 ) ; xx [ 9
] = 2.0 ; xx [ 11 ] = xx [ 3 ] - ( xx [ 24 ] * xx [ 24 ] + xx [ 25 ] * xx [
25 ] ) * xx [ 9 ] ; xx [ 14 ] = 1.224649036341985e-16 ; xx [ 15 ] = ( xx [ 23
] * xx [ 24 ] + xx [ 22 ] * xx [ 25 ] ) * xx [ 9 ] ; xx [ 16 ] = xx [ 9 ] * (
xx [ 23 ] * xx [ 25 ] - xx [ 22 ] * xx [ 24 ] ) ; xx [ 17 ] = xx [ 2 ] * xx [
11 ] - xx [ 14 ] * xx [ 15 ] + xx [ 16 ] ; xx [ 22 ] = - 2.127839120481132e-5
; xx [ 23 ] = - 0.9999999996714876 ; xx [ 24 ] = 1.429178292607163e-5 ;
pm_math_Quaternion_xform_ra ( xx + 18 , xx + 22 , xx + 25 ) ; xx [ 22 ] =
4.491009114794739e-23 ; xx [ 23 ] = xx [ 15 ] - xx [ 22 ] * xx [ 11 ] + xx [
14 ] * xx [ 16 ] ; xx [ 11 ] = xx [ 17 ] * xx [ 17 ] + xx [ 23 ] * xx [ 23 ]
; xx [ 28 ] = 7.791513304785308e-7 ; xx [ 29 ] = 8.224161824052596e-4 ; xx [
30 ] = - 1.304968628300633e-8 ; pm_math_Quaternion_xform_ra ( xx + 18 , xx +
28 , xx + 31 ) ; xx [ 15 ] = 7.79151330478524e-7 ; xx [ 16 ] =
8.2241618240526e-4 ; xx [ 24 ] = 1.304968628300632e-8 ; xx [ 28 ] = - xx [ 15
] ; xx [ 29 ] = - xx [ 16 ] ; xx [ 30 ] = xx [ 24 ] ;
pm_math_Quaternion_xform_ra ( xx + 18 , xx + 28 , xx + 34 ) ; xx [ 37 ] = xx
[ 1 ] * ( xx [ 17 ] * ( xx [ 26 ] - xx [ 22 ] * xx [ 25 ] + xx [ 14 ] * xx [
27 ] ) - ( xx [ 2 ] * xx [ 25 ] - xx [ 14 ] * xx [ 26 ] + xx [ 27 ] ) * xx [
23 ] ) / xx [ 11 ] + ( xx [ 31 ] + xx [ 34 ] ) * xx [ 2 ] - ( xx [ 32 ] + xx
[ 35 ] ) * xx [ 14 ] + xx [ 33 ] + xx [ 36 ] ; xx [ 25 ] =
1.495622320918377e-3 ; xx [ 26 ] = xx [ 8 ] * state [ 8 ] ; xx [ 27 ] = cos (
xx [ 26 ] ) ; xx [ 31 ] = 0.1188356543686412 ; xx [ 32 ] = sin ( xx [ 26 ] )
; xx [ 26 ] = xx [ 25 ] * xx [ 27 ] - xx [ 31 ] * xx [ 32 ] ; xx [ 33 ] =
4.415720941208234e-3 ; xx [ 34 ] = 0.9929029921262297 ; xx [ 35 ] = xx [ 33 ]
* xx [ 32 ] - xx [ 34 ] * xx [ 27 ] ; xx [ 36 ] = xx [ 25 ] * xx [ 32 ] + xx
[ 31 ] * xx [ 27 ] ; xx [ 25 ] = xx [ 33 ] * xx [ 27 ] + xx [ 34 ] * xx [ 32
] ; xx [ 27 ] = - xx [ 25 ] ; xx [ 31 ] = xx [ 26 ] ; xx [ 32 ] = xx [ 35 ] ;
xx [ 33 ] = xx [ 36 ] ; xx [ 34 ] = xx [ 27 ] ; xx [ 38 ] =
0.2359713450861992 ; xx [ 39 ] = 0.9717517007293006 ; xx [ 40 ] =
4.019505930177081e-3 ; xx [ 41 ] = - xx [ 38 ] ; xx [ 42 ] = - xx [ 39 ] ; xx
[ 43 ] = - xx [ 40 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 31 , xx + 41
, xx + 44 ) ; xx [ 47 ] = 0.08297193236559158 ; xx [ 48 ] = -
0.6989660525715147 ; xx [ 49 ] = 0.08508706173602215 ; xx [ 50 ] = -
0.7052108250142259 ; xx [ 51 ] = xx [ 8 ] * state [ 6 ] ; xx [ 52 ] = sin (
xx [ 51 ] ) ; xx [ 53 ] = cos ( xx [ 51 ] ) ; xx [ 54 ] = - ( xx [ 38 ] * xx
[ 52 ] ) ; xx [ 55 ] = - ( xx [ 39 ] * xx [ 52 ] ) ; xx [ 56 ] = - ( xx [ 40
] * xx [ 52 ] ) ; pm_math_Quaternion_compose_ra ( xx + 47 , xx + 53 , xx + 57
) ; pm_math_Quaternion_compose_ra ( xx + 57 , xx + 31 , xx + 47 ) ; xx [ 51 ]
= xx [ 44 ] * xx [ 49 ] ; xx [ 52 ] = xx [ 46 ] * xx [ 50 ] + xx [ 44 ] * xx
[ 48 ] ; xx [ 53 ] = xx [ 49 ] * xx [ 46 ] ; xx [ 54 ] = - xx [ 51 ] ; xx [
55 ] = xx [ 52 ] ; xx [ 56 ] = - xx [ 53 ] ; pm_math_Vector3_cross_ra ( xx +
48 , xx + 54 , xx + 61 ) ; xx [ 54 ] = xx [ 46 ] + xx [ 9 ] * ( xx [ 61 ] -
xx [ 47 ] * xx [ 51 ] ) ; xx [ 55 ] = ( xx [ 52 ] * xx [ 47 ] + xx [ 62 ] ) *
xx [ 9 ] ; xx [ 56 ] = xx [ 9 ] * ( xx [ 63 ] - xx [ 47 ] * xx [ 53 ] ) - xx
[ 44 ] ; xx [ 61 ] = - 0.9984441693056983 ; xx [ 62 ] = 9.980207034736295e-7
; xx [ 63 ] = 3.115531069039944e-7 ; xx [ 64 ] = - 0.05576056651757455 ; xx [
65 ] = - 0.9984440686594036 ; xx [ 66 ] = - 1.210096473124015e-6 ; xx [ 67 ]
= - 2.410217961564497e-7 ; xx [ 68 ] = 0.0557623686488803 ; xx [ 51 ] = xx [
8 ] * state [ 12 ] ; xx [ 52 ] = 1.171949776569064e-7 ; xx [ 53 ] = sin ( xx
[ 51 ] ) ; xx [ 69 ] = 4.31358898227365e-7 ; xx [ 70 ] = cos ( xx [ 51 ] ) ;
xx [ 71 ] = xx [ 52 ] * xx [ 53 ] ; xx [ 72 ] = xx [ 69 ] * xx [ 53 ] ; xx [
73 ] = xx [ 53 ] ; pm_math_Quaternion_compose_ra ( xx + 65 , xx + 70 , xx +
74 ) ; pm_math_Quaternion_compose_ra ( xx + 61 , xx + 74 , xx + 65 ) ; xx [
70 ] = 0.5000008239281672 ; xx [ 71 ] = - 0.499999234668057 ; xx [ 72 ] = -
0.5000009810096314 ; xx [ 73 ] = - 0.4999989603908367 ;
pm_math_Quaternion_compose_ra ( xx + 65 , xx + 70 , xx + 78 ) ; xx [ 82 ] =
xx [ 9 ] * ( xx [ 79 ] * xx [ 80 ] - xx [ 78 ] * xx [ 81 ] ) ; xx [ 83 ] = xx
[ 3 ] - ( xx [ 79 ] * xx [ 79 ] + xx [ 81 ] * xx [ 81 ] ) * xx [ 9 ] ; xx [
84 ] = ( xx [ 80 ] * xx [ 81 ] + xx [ 78 ] * xx [ 79 ] ) * xx [ 9 ] ; xx [ 51
] = pm_math_Vector3_dot_ra ( xx + 54 , xx + 82 ) ; xx [ 53 ] =
0.2167653807834443 ; xx [ 54 ] = xx [ 26 ] * xx [ 26 ] ; xx [ 55 ] = ( xx [
54 ] + xx [ 35 ] * xx [ 35 ] ) * xx [ 9 ] - xx [ 3 ] ; xx [ 56 ] = xx [ 36 ]
* xx [ 35 ] ; xx [ 78 ] = xx [ 25 ] * xx [ 26 ] ; xx [ 79 ] = xx [ 9 ] * ( xx
[ 56 ] + xx [ 78 ] ) ; xx [ 80 ] = xx [ 36 ] * xx [ 26 ] ; xx [ 81 ] = xx [
25 ] * xx [ 35 ] ; xx [ 85 ] = xx [ 80 ] - xx [ 81 ] ; xx [ 86 ] = xx [ 85 ]
* xx [ 9 ] ; xx [ 87 ] = xx [ 56 ] - xx [ 78 ] ; xx [ 56 ] = xx [ 87 ] * xx [
9 ] ; xx [ 78 ] = ( xx [ 54 ] + xx [ 36 ] * xx [ 36 ] ) * xx [ 9 ] - xx [ 3 ]
; xx [ 88 ] = xx [ 36 ] * xx [ 25 ] ; xx [ 89 ] = xx [ 26 ] * xx [ 35 ] ; xx
[ 90 ] = xx [ 88 ] + xx [ 89 ] ; xx [ 91 ] = xx [ 9 ] * xx [ 90 ] ; xx [ 92 ]
= xx [ 81 ] + xx [ 80 ] ; xx [ 80 ] = xx [ 9 ] * xx [ 92 ] ; xx [ 81 ] = ( xx
[ 89 ] - xx [ 88 ] ) * xx [ 9 ] ; xx [ 88 ] = ( xx [ 54 ] + xx [ 25 ] * xx [
25 ] ) * xx [ 9 ] - xx [ 3 ] ; xx [ 93 ] = xx [ 55 ] ; xx [ 94 ] = xx [ 79 ]
; xx [ 95 ] = xx [ 86 ] ; xx [ 96 ] = xx [ 56 ] ; xx [ 97 ] = xx [ 78 ] ; xx
[ 98 ] = - xx [ 91 ] ; xx [ 99 ] = - xx [ 80 ] ; xx [ 100 ] = xx [ 81 ] ; xx
[ 101 ] = xx [ 88 ] ; xx [ 54 ] = 1.072390849596845e-4 ; xx [ 89 ] =
1.3742142744129e-3 ; xx [ 102 ] = 2.239740664214466e-3 ; xx [ 103 ] = xx [ 54
] * xx [ 55 ] ; xx [ 104 ] = xx [ 54 ] * xx [ 56 ] ; xx [ 105 ] = - ( xx [ 54
] * xx [ 80 ] ) ; xx [ 106 ] = xx [ 89 ] * xx [ 79 ] ; xx [ 107 ] = xx [ 89 ]
* xx [ 78 ] ; xx [ 108 ] = xx [ 89 ] * xx [ 81 ] ; xx [ 109 ] = xx [ 102 ] *
xx [ 86 ] ; xx [ 110 ] = - ( xx [ 102 ] * xx [ 91 ] ) ; xx [ 111 ] = xx [ 102
] * xx [ 88 ] ; pm_math_Matrix3x3_compose_ra ( xx + 93 , xx + 103 , xx + 112
) ; xx [ 89 ] = 0.01242124240629439 ; xx [ 103 ] = xx [ 89 ] * xx [ 86 ] ; xx
[ 104 ] = xx [ 103 ] * xx [ 79 ] ; xx [ 105 ] = xx [ 89 ] * xx [ 91 ] ; xx [
106 ] = xx [ 105 ] * xx [ 79 ] ; xx [ 107 ] = xx [ 89 ] * xx [ 88 ] ; xx [ 89
] = xx [ 107 ] * xx [ 79 ] ; xx [ 108 ] = xx [ 103 ] * xx [ 78 ] ; xx [ 109 ]
= xx [ 105 ] * xx [ 78 ] ; xx [ 110 ] = xx [ 107 ] * xx [ 78 ] ; xx [ 111 ] =
xx [ 81 ] * xx [ 103 ] ; xx [ 103 ] = xx [ 81 ] * xx [ 105 ] ; xx [ 105 ] =
xx [ 81 ] * xx [ 107 ] ; xx [ 121 ] = xx [ 104 ] ; xx [ 122 ] = - xx [ 106 ]
; xx [ 123 ] = xx [ 89 ] ; xx [ 124 ] = xx [ 108 ] ; xx [ 125 ] = - xx [ 109
] ; xx [ 126 ] = xx [ 110 ] ; xx [ 127 ] = xx [ 111 ] ; xx [ 128 ] = - xx [
103 ] ; xx [ 129 ] = xx [ 105 ] ; xx [ 130 ] = xx [ 35 ] ; xx [ 131 ] = xx [
36 ] ; xx [ 132 ] = xx [ 27 ] ; xx [ 27 ] = 0.01000100000000001 ; xx [ 107 ]
= xx [ 25 ] * xx [ 27 ] ; xx [ 133 ] = 0.1106342046522275 ; xx [ 134 ] = xx [
25 ] * xx [ 133 ] ; xx [ 135 ] = xx [ 36 ] * xx [ 133 ] ; xx [ 136 ] = xx [
27 ] * xx [ 35 ] + xx [ 135 ] ; xx [ 137 ] = xx [ 107 ] ; xx [ 138 ] = xx [
134 ] ; xx [ 139 ] = xx [ 136 ] ; pm_math_Vector3_cross_ra ( xx + 130 , xx +
137 , xx + 140 ) ; xx [ 130 ] = xx [ 134 ] * xx [ 26 ] ; xx [ 137 ] = - (
0.1316778234017356 + xx [ 9 ] * ( xx [ 140 ] + xx [ 107 ] * xx [ 26 ] ) - xx
[ 133 ] ) ; xx [ 138 ] = - ( 8.979068216552373e-3 + xx [ 27 ] + ( xx [ 130 ]
+ xx [ 141 ] ) * xx [ 9 ] ) ; xx [ 139 ] = 0.1047281200976424 - ( xx [ 26 ] *
xx [ 136 ] + xx [ 142 ] ) * xx [ 9 ] ; pm_math_Matrix3x3_postCross_ra ( xx +
121 , xx + 137 , xx + 140 ) ; xx [ 27 ] = 0.2739142822343109 ; xx [ 107 ] =
0.1122730754502179 ; xx [ 121 ] = xx [ 27 ] * xx [ 55 ] ; xx [ 122 ] = xx [
27 ] * xx [ 56 ] ; xx [ 123 ] = - ( xx [ 27 ] * xx [ 80 ] ) ; xx [ 124 ] = xx
[ 27 ] * xx [ 79 ] ; xx [ 125 ] = xx [ 27 ] * xx [ 78 ] ; xx [ 126 ] = xx [
27 ] * xx [ 81 ] ; xx [ 127 ] = xx [ 107 ] * xx [ 86 ] ; xx [ 128 ] = - ( xx
[ 107 ] * xx [ 91 ] ) ; xx [ 129 ] = xx [ 107 ] * xx [ 88 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 93 , xx + 121 , xx + 149 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 149 , xx + 137 , xx + 121 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 121 , xx + 137 , xx + 158 ) ; xx [ 56 ]
= 0.2183900496564113 ; xx [ 78 ] = 0.3739488839825263 ; xx [ 167 ] = xx [ 53
] + xx [ 112 ] - xx [ 140 ] - xx [ 140 ] - xx [ 158 ] ; xx [ 168 ] = xx [ 113
] - xx [ 141 ] - xx [ 143 ] - xx [ 159 ] ; xx [ 169 ] = xx [ 114 ] - xx [ 142
] - xx [ 146 ] - xx [ 160 ] ; xx [ 170 ] = xx [ 115 ] - xx [ 143 ] - xx [ 141
] - xx [ 161 ] ; xx [ 171 ] = xx [ 56 ] + xx [ 116 ] - xx [ 144 ] - xx [ 144
] - xx [ 162 ] ; xx [ 172 ] = xx [ 117 ] - xx [ 145 ] - xx [ 147 ] - xx [ 163
] ; xx [ 173 ] = xx [ 118 ] - xx [ 146 ] - xx [ 142 ] - xx [ 164 ] ; xx [ 174
] = xx [ 119 ] - xx [ 147 ] - xx [ 145 ] - xx [ 165 ] ; xx [ 175 ] = xx [ 78
] + xx [ 120 ] - xx [ 148 ] - xx [ 148 ] - xx [ 166 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 167 , xx + 41 , xx + 79 ) ; xx [ 112 ] = xx
[ 104 ] - xx [ 121 ] ; xx [ 113 ] = - ( xx [ 106 ] + xx [ 124 ] ) ; xx [ 114
] = xx [ 89 ] - xx [ 127 ] ; xx [ 115 ] = xx [ 108 ] - xx [ 122 ] ; xx [ 116
] = - ( xx [ 109 ] + xx [ 125 ] ) ; xx [ 117 ] = xx [ 110 ] - xx [ 128 ] ; xx
[ 118 ] = xx [ 111 ] - xx [ 123 ] ; xx [ 119 ] = - ( xx [ 103 ] + xx [ 126 ]
) ; xx [ 120 ] = xx [ 105 ] - xx [ 129 ] ; xx [ 86 ] = 0.1029579224453269 ;
xx [ 89 ] = 0.02499961344983095 ; xx [ 91 ] = 4.235742615152655e-4 ; xx [ 103
] = xx [ 86 ] ; xx [ 104 ] = - xx [ 89 ] ; xx [ 105 ] = - xx [ 91 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 112 , xx + 103 , xx + 106 ) ; xx [ 109 ] =
xx [ 79 ] + xx [ 106 ] ; xx [ 110 ] = xx [ 80 ] + xx [ 107 ] ; xx [ 111 ] =
xx [ 81 ] + xx [ 108 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 112 , xx
+ 41 , xx + 79 ) ; xx [ 106 ] = 9.519654819926142 ; xx [ 121 ] = xx [ 106 ] +
xx [ 149 ] ; xx [ 122 ] = xx [ 150 ] ; xx [ 123 ] = xx [ 151 ] ; xx [ 124 ] =
xx [ 152 ] ; xx [ 125 ] = xx [ 106 ] + xx [ 153 ] ; xx [ 126 ] = xx [ 154 ] ;
xx [ 127 ] = xx [ 155 ] ; xx [ 128 ] = xx [ 156 ] ; xx [ 129 ] = xx [ 106 ] +
xx [ 157 ] ; pm_math_Matrix3x3_xform_ra ( xx + 121 , xx + 103 , xx + 140 ) ;
xx [ 143 ] = xx [ 79 ] + xx [ 140 ] ; xx [ 144 ] = xx [ 80 ] + xx [ 141 ] ;
xx [ 145 ] = xx [ 81 ] + xx [ 142 ] ; xx [ 79 ] = pm_math_Vector3_dot_ra ( xx
+ 41 , xx + 109 ) + pm_math_Vector3_dot_ra ( xx + 103 , xx + 143 ) ; ii [ 0 ]
= factorSymmetricPosDef ( xx + 79 , 1 , xx + 80 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'test14/Steering Dynamics/Revolute1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 80 ] = 3.609878930371553e-6 ; xx [ 81 ] =
0.9999999999934914 ; xx [ 107 ] = - xx [ 80 ] ; xx [ 108 ] = xx [ 81 ] ; xx [
109 ] = - 4.313584751648768e-7 ; pm_math_Quaternion_xform_ra ( xx + 65 , xx +
107 , xx + 140 ) ; xx [ 107 ] = - xx [ 8 ] ; xx [ 108 ] = xx [ 8 ] ; xx [ 109
] = xx [ 8 ] ; xx [ 110 ] = xx [ 107 ] ; xx [ 111 ] = xx [ 8 ] ;
pm_math_Quaternion_compose_ra ( xx + 47 , xx + 108 , xx + 143 ) ; xx [ 108 ]
= ( xx [ 144 ] * xx [ 146 ] + xx [ 143 ] * xx [ 145 ] ) * xx [ 9 ] ; xx [ 109
] = xx [ 9 ] * ( xx [ 145 ] * xx [ 146 ] - xx [ 143 ] * xx [ 144 ] ) ; xx [
110 ] = xx [ 3 ] - ( xx [ 144 ] * xx [ 144 ] + xx [ 145 ] * xx [ 145 ] ) * xx
[ 9 ] ; xx [ 111 ] = pm_math_Vector3_dot_ra ( xx + 140 , xx + 108 ) ; xx [
131 ] = 1.375867795500073e-4 ; xx [ 132 ] = xx [ 111 ] / xx [ 131 ] ; xx [
140 ] = 7.912209039114072e-5 ; xx [ 141 ] = - 2.153789047902757e-5 ; xx [ 142
] = 1.784909161752764e-14 ; xx [ 136 ] = 5.108363663908206e-7 ; xx [ 143 ] =
2.027680659941788e-6 ; xx [ 144 ] = 0.9999999999978137 ; xx [ 145 ] = - xx [
136 ] ; xx [ 146 ] = xx [ 143 ] ; xx [ 147 ] = - xx [ 144 ] ; xx [ 148 ] =
1.088615360818163e-8 ; xx [ 149 ] = 2.963328989310169e-9 ; xx [ 150 ] =
2.455799033548659e-18 ; xx [ 151 ] = xx [ 148 ] * xx [ 132 ] ; xx [ 152 ] = -
( xx [ 149 ] * xx [ 132 ] ) ; xx [ 153 ] = xx [ 150 ] * xx [ 132 ] ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 151 , xx + 154 ) ; xx [ 157 ] =
- 1.216632498952289e-6 ; xx [ 158 ] = 0.99844426994826 ; xx [ 159 ] = -
0.05575876438621875 ; xx [ 160 ] = - 3.580316125383367e-7 ; xx [ 151 ] = xx [
8 ] * state [ 14 ] ; xx [ 152 ] = 1.171949768652286e-7 ; xx [ 153 ] = sin (
xx [ 151 ] ) ; xx [ 161 ] = 4.313588970662109e-7 ; xx [ 162 ] = cos ( xx [
151 ] ) ; xx [ 163 ] = - ( xx [ 152 ] * xx [ 153 ] ) ; xx [ 164 ] = - ( xx [
161 ] * xx [ 153 ] ) ; xx [ 165 ] = - xx [ 153 ] ;
pm_math_Quaternion_compose_ra ( xx + 157 , xx + 162 , xx + 166 ) ; xx [ 151 ]
= xx [ 166 ] * xx [ 166 ] ; xx [ 153 ] = ( xx [ 151 ] + xx [ 167 ] * xx [ 167
] ) * xx [ 9 ] - xx [ 3 ] ; xx [ 157 ] = xx [ 167 ] * xx [ 168 ] ; xx [ 158 ]
= xx [ 166 ] * xx [ 169 ] ; xx [ 159 ] = xx [ 9 ] * ( xx [ 157 ] - xx [ 158 ]
) ; xx [ 160 ] = xx [ 167 ] * xx [ 169 ] ; xx [ 162 ] = xx [ 166 ] * xx [ 168
] ; xx [ 163 ] = ( xx [ 160 ] + xx [ 162 ] ) * xx [ 9 ] ; xx [ 164 ] = ( xx [
157 ] + xx [ 158 ] ) * xx [ 9 ] ; xx [ 157 ] = ( xx [ 151 ] + xx [ 168 ] * xx
[ 168 ] ) * xx [ 9 ] - xx [ 3 ] ; xx [ 158 ] = xx [ 168 ] * xx [ 169 ] ; xx [
165 ] = xx [ 166 ] * xx [ 167 ] ; xx [ 170 ] = xx [ 9 ] * ( xx [ 158 ] - xx [
165 ] ) ; xx [ 171 ] = xx [ 9 ] * ( xx [ 160 ] - xx [ 162 ] ) ; xx [ 160 ] =
( xx [ 158 ] + xx [ 165 ] ) * xx [ 9 ] ; xx [ 158 ] = ( xx [ 151 ] + xx [ 169
] * xx [ 169 ] ) * xx [ 9 ] - xx [ 3 ] ; xx [ 172 ] = xx [ 153 ] ; xx [ 173 ]
= xx [ 159 ] ; xx [ 174 ] = xx [ 163 ] ; xx [ 175 ] = xx [ 164 ] ; xx [ 176 ]
= xx [ 157 ] ; xx [ 177 ] = xx [ 170 ] ; xx [ 178 ] = xx [ 171 ] ; xx [ 179 ]
= xx [ 160 ] ; xx [ 180 ] = xx [ 158 ] ; xx [ 151 ] = 0.3199842737592205 ; xx
[ 162 ] = 2.344649231924292e-13 ; xx [ 165 ] = - 1.94337888324749e-22 ; xx [
181 ] = 0.319984273760018 ; xx [ 182 ] = 5.290089472440635e-23 ; xx [ 183 ] =
0.3199842737600818 ; xx [ 184 ] = xx [ 151 ] ; xx [ 185 ] = xx [ 162 ] ; xx [
186 ] = xx [ 165 ] ; xx [ 187 ] = xx [ 162 ] ; xx [ 188 ] = xx [ 181 ] ; xx [
189 ] = xx [ 182 ] ; xx [ 190 ] = xx [ 165 ] ; xx [ 191 ] = xx [ 182 ] ; xx [
192 ] = xx [ 183 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 184 , xx +
172 , xx + 193 ) ; pm_math_Matrix3x3_compose_ra ( xx + 172 , xx + 193 , xx +
184 ) ; xx [ 162 ] = xx [ 74 ] * xx [ 74 ] ; xx [ 165 ] = ( xx [ 162 ] + xx [
75 ] * xx [ 75 ] ) * xx [ 9 ] - xx [ 3 ] ; xx [ 172 ] = xx [ 75 ] * xx [ 76 ]
; xx [ 173 ] = xx [ 74 ] * xx [ 77 ] ; xx [ 174 ] = xx [ 9 ] * ( xx [ 172 ] -
xx [ 173 ] ) ; xx [ 175 ] = xx [ 75 ] * xx [ 77 ] ; xx [ 176 ] = xx [ 74 ] *
xx [ 76 ] ; xx [ 177 ] = ( xx [ 175 ] + xx [ 176 ] ) * xx [ 9 ] ; xx [ 178 ]
= ( xx [ 172 ] + xx [ 173 ] ) * xx [ 9 ] ; xx [ 172 ] = ( xx [ 162 ] + xx [
76 ] * xx [ 76 ] ) * xx [ 9 ] - xx [ 3 ] ; xx [ 173 ] = xx [ 76 ] * xx [ 77 ]
; xx [ 179 ] = xx [ 74 ] * xx [ 75 ] ; xx [ 180 ] = xx [ 9 ] * ( xx [ 173 ] -
xx [ 179 ] ) ; xx [ 182 ] = xx [ 9 ] * ( xx [ 175 ] - xx [ 176 ] ) ; xx [ 175
] = ( xx [ 173 ] + xx [ 179 ] ) * xx [ 9 ] ; xx [ 173 ] = ( xx [ 162 ] + xx [
77 ] * xx [ 77 ] ) * xx [ 9 ] - xx [ 3 ] ; xx [ 193 ] = xx [ 165 ] ; xx [ 194
] = xx [ 174 ] ; xx [ 195 ] = xx [ 177 ] ; xx [ 196 ] = xx [ 178 ] ; xx [ 197
] = xx [ 172 ] ; xx [ 198 ] = xx [ 180 ] ; xx [ 199 ] = xx [ 182 ] ; xx [ 200
] = xx [ 175 ] ; xx [ 201 ] = xx [ 173 ] ; xx [ 162 ] = 2.344647841508868e-13
; xx [ 176 ] = - 1.943079531149131e-22 ; xx [ 179 ] = 5.289273062307279e-23 ;
xx [ 202 ] = xx [ 151 ] ; xx [ 203 ] = xx [ 162 ] ; xx [ 204 ] = xx [ 176 ] ;
xx [ 205 ] = xx [ 162 ] ; xx [ 206 ] = xx [ 181 ] ; xx [ 207 ] = xx [ 179 ] ;
xx [ 208 ] = xx [ 176 ] ; xx [ 209 ] = xx [ 179 ] ; xx [ 210 ] = xx [ 183 ] ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 202 , xx + 193 , xx + 211 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 193 , xx + 211 , xx + 202 ) ; xx [ 151 ]
= 1.690994682149928 ; xx [ 193 ] = xx [ 184 ] + xx [ 202 ] + xx [ 151 ] ; xx
[ 194 ] = xx [ 185 ] + xx [ 203 ] ; xx [ 195 ] = xx [ 186 ] + xx [ 204 ] ; xx
[ 196 ] = xx [ 187 ] + xx [ 205 ] ; xx [ 197 ] = xx [ 188 ] + xx [ 206 ] + xx
[ 151 ] ; xx [ 198 ] = xx [ 189 ] + xx [ 207 ] ; xx [ 199 ] = xx [ 190 ] + xx
[ 208 ] ; xx [ 200 ] = xx [ 191 ] + xx [ 209 ] ; xx [ 201 ] = xx [ 192 ] + xx
[ 210 ] + xx [ 151 ] ; pm_math_Matrix3x3_xform_ra ( xx + 193 , xx + 145 , xx
+ 184 ) ; xx [ 151 ] = pm_math_Vector3_dot_ra ( xx + 145 , xx + 184 ) ; ii [
0 ] = factorSymmetricPosDef ( xx + 151 , 1 , xx + 162 ) ; if ( ii [ 0 ] != 0
) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'test14/Steering Dynamics/Chassis + Rack/Rack Case + Chassis/Prismatic Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 162 ] = pm_math_Vector3_dot_ra ( xx + 145 , xx + 154 )
/ xx [ 151 ] ; xx [ 154 ] = xx [ 136 ] * xx [ 162 ] ; xx [ 155 ] = - ( xx [
143 ] * xx [ 162 ] ) ; xx [ 156 ] = xx [ 144 ] * xx [ 162 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx + 154 , xx + 184 ) ; xx [
154 ] = 0.1106342046522872 ; xx [ 155 ] = 1.655280357226729e-13 ; xx [ 187 ]
= xx [ 154 ] ; xx [ 188 ] = 0.02999999999998754 ; xx [ 189 ] = - xx [ 155 ] ;
pm_math_Vector3_cross_ra ( xx + 44 , xx + 187 , xx + 190 ) ;
pm_math_Quaternion_xform_ra ( xx + 47 , xx + 190 , xx + 44 ) ;
pm_math_Vector3_cross_ra ( xx + 41 , xx + 137 , xx + 190 ) ;
pm_math_Quaternion_xform_ra ( xx + 57 , xx + 190 , xx + 193 ) ;
pm_math_Quaternion_xform_ra ( xx + 57 , xx + 103 , xx + 190 ) ; xx [ 156 ] =
xx [ 44 ] + xx [ 193 ] + xx [ 190 ] ; xx [ 162 ] = 2.328718797025195e-3 ; xx
[ 176 ] = xx [ 154 ] * xx [ 48 ] - xx [ 155 ] * xx [ 50 ] ; xx [ 179 ] = xx [
155 ] * xx [ 49 ] ; xx [ 196 ] = - ( xx [ 154 ] * xx [ 49 ] ) ; xx [ 197 ] =
xx [ 176 ] ; xx [ 198 ] = xx [ 179 ] ; pm_math_Vector3_cross_ra ( xx + 48 ,
xx + 196 , xx + 199 ) ; xx [ 181 ] = xx [ 47 ] * xx [ 49 ] ; xx [ 196 ] = xx
[ 133 ] * xx [ 35 ] ; xx [ 197 ] = xx [ 135 ] * xx [ 26 ] ; xx [ 198 ] = xx [
25 ] * xx [ 196 ] - xx [ 197 ] ; xx [ 202 ] = xx [ 25 ] * xx [ 135 ] + xx [
196 ] * xx [ 26 ] ; xx [ 203 ] = xx [ 36 ] * xx [ 135 ] ; xx [ 204 ] = ( xx [
196 ] * xx [ 35 ] + xx [ 203 ] ) * xx [ 9 ] - xx [ 133 ] ; xx [ 205 ] = xx [
198 ] * xx [ 9 ] ; xx [ 206 ] = xx [ 9 ] * xx [ 202 ] ; xx [ 207 ] = xx [ 204
] ; pm_math_Quaternion_xform_ra ( xx + 57 , xx + 205 , xx + 208 ) ; xx [ 196
] = ( xx [ 199 ] - xx [ 154 ] * xx [ 181 ] ) * xx [ 9 ] + xx [ 208 ] - xx [
155 ] ; xx [ 155 ] = 5.681409681304551e-3 ; xx [ 205 ] = xx [ 196 ] / xx [
155 ] ; xx [ 206 ] = xx [ 162 ] * xx [ 205 ] ; xx [ 207 ] = xx [ 206 ] * xx [
35 ] ; xx [ 211 ] = xx [ 25 ] * xx [ 206 ] ; xx [ 212 ] = 0.03030428875787876
; xx [ 213 ] = xx [ 212 ] * xx [ 205 ] ; xx [ 214 ] = xx [ 213 ] * xx [ 35 ]
; xx [ 215 ] = xx [ 36 ] * xx [ 213 ] ; xx [ 216 ] = ( xx [ 25 ] * xx [ 214 ]
- xx [ 215 ] * xx [ 26 ] ) * xx [ 9 ] ; xx [ 217 ] = xx [ 9 ] * ( xx [ 25 ] *
xx [ 215 ] + xx [ 214 ] * xx [ 26 ] ) ; xx [ 218 ] = ( xx [ 214 ] * xx [ 35 ]
+ xx [ 36 ] * xx [ 215 ] ) * xx [ 9 ] - xx [ 213 ] ; pm_math_Vector3_cross_ra
( xx + 137 , xx + 216 , xx + 213 ) ; xx [ 219 ] = xx [ 9 ] * ( xx [ 36 ] * xx
[ 207 ] + xx [ 211 ] * xx [ 26 ] ) + xx [ 213 ] ; xx [ 220 ] = xx [ 206 ] - (
xx [ 25 ] * xx [ 211 ] + xx [ 207 ] * xx [ 35 ] ) * xx [ 9 ] + xx [ 214 ] ;
xx [ 221 ] = ( xx [ 207 ] * xx [ 26 ] - xx [ 36 ] * xx [ 211 ] ) * xx [ 9 ] +
xx [ 215 ] ; xx [ 206 ] = ( xx [ 156 ] - ( pm_math_Vector3_dot_ra ( xx + 41 ,
xx + 219 ) + pm_math_Vector3_dot_ra ( xx + 103 , xx + 216 ) ) ) / xx [ 79 ] ;
xx [ 213 ] = 0.01999996597895712 ; xx [ 214 ] = 8.14584366991918e-8 ; xx [
215 ] = - 2.343930703864273e-9 ; pm_math_Quaternion_xform_ra ( xx + 65 , xx +
213 , xx + 216 ) ; xx [ 207 ] = 3.402090196577556e-8 ; xx [ 211 ] =
9.260858211838302e-9 ; xx [ 213 ] = 7.674749151547277e-18 ; xx [ 219 ] = xx [
207 ] ; xx [ 220 ] = - xx [ 211 ] ; xx [ 221 ] = xx [ 213 ] ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 219 , xx + 222 ) ;
pm_math_Quaternion_xform_ra ( xx + 61 , xx + 222 , xx + 225 ) ; xx [ 214 ] =
xx [ 216 ] + xx [ 225 ] ; xx [ 215 ] = xx [ 214 ] / xx [ 131 ] ; xx [ 222 ] =
- ( xx [ 148 ] * xx [ 215 ] ) ; xx [ 223 ] = xx [ 149 ] * xx [ 215 ] ; xx [
224 ] = - ( xx [ 150 ] * xx [ 215 ] ) ; pm_math_Quaternion_xform_ra ( xx + 74
, xx + 222 , xx + 228 ) ; xx [ 222 ] = pm_math_Vector3_dot_ra ( xx + 145 , xx
+ 228 ) / xx [ 151 ] ; xx [ 228 ] = xx [ 136 ] * xx [ 222 ] ; xx [ 229 ] = -
( xx [ 143 ] * xx [ 222 ] ) ; xx [ 230 ] = xx [ 144 ] * xx [ 222 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx + 228 , xx + 222 ) ; xx [
228 ] = xx [ 215 ] + pm_math_Vector3_dot_ra ( xx + 140 , xx + 222 ) ; xx [
215 ] = xx [ 51 ] * xx [ 206 ] - xx [ 111 ] * xx [ 228 ] ; xx [ 222 ] = xx [
45 ] + xx [ 194 ] + xx [ 191 ] ; xx [ 223 ] = ( xx [ 47 ] * xx [ 176 ] + xx [
200 ] ) * xx [ 9 ] + xx [ 209 ] ; xx [ 176 ] = xx [ 223 ] / xx [ 155 ] ; xx [
224 ] = xx [ 162 ] * xx [ 176 ] ; xx [ 229 ] = xx [ 224 ] * xx [ 35 ] ; xx [
230 ] = xx [ 25 ] * xx [ 224 ] ; xx [ 231 ] = xx [ 212 ] * xx [ 176 ] ; xx [
232 ] = xx [ 231 ] * xx [ 35 ] ; xx [ 233 ] = xx [ 36 ] * xx [ 231 ] ; xx [
234 ] = ( xx [ 25 ] * xx [ 232 ] - xx [ 233 ] * xx [ 26 ] ) * xx [ 9 ] ; xx [
235 ] = xx [ 9 ] * ( xx [ 25 ] * xx [ 233 ] + xx [ 232 ] * xx [ 26 ] ) ; xx [
236 ] = ( xx [ 232 ] * xx [ 35 ] + xx [ 36 ] * xx [ 233 ] ) * xx [ 9 ] - xx [
231 ] ; pm_math_Vector3_cross_ra ( xx + 137 , xx + 234 , xx + 231 ) ; xx [
237 ] = xx [ 9 ] * ( xx [ 36 ] * xx [ 229 ] + xx [ 230 ] * xx [ 26 ] ) + xx [
231 ] ; xx [ 238 ] = xx [ 224 ] - ( xx [ 25 ] * xx [ 230 ] + xx [ 229 ] * xx
[ 35 ] ) * xx [ 9 ] + xx [ 232 ] ; xx [ 239 ] = ( xx [ 229 ] * xx [ 26 ] - xx
[ 36 ] * xx [ 230 ] ) * xx [ 9 ] + xx [ 233 ] ; xx [ 224 ] = ( xx [ 222 ] - (
pm_math_Vector3_dot_ra ( xx + 41 , xx + 237 ) + pm_math_Vector3_dot_ra ( xx +
103 , xx + 234 ) ) ) / xx [ 79 ] ; xx [ 229 ] = xx [ 217 ] + xx [ 226 ] ; xx
[ 230 ] = xx [ 229 ] / xx [ 131 ] ; xx [ 231 ] = - ( xx [ 148 ] * xx [ 230 ]
) ; xx [ 232 ] = xx [ 149 ] * xx [ 230 ] ; xx [ 233 ] = - ( xx [ 150 ] * xx [
230 ] ) ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 231 , xx + 234 ) ; xx
[ 231 ] = pm_math_Vector3_dot_ra ( xx + 145 , xx + 234 ) / xx [ 151 ] ; xx [
232 ] = xx [ 136 ] * xx [ 231 ] ; xx [ 233 ] = - ( xx [ 143 ] * xx [ 231 ] )
; xx [ 234 ] = xx [ 144 ] * xx [ 231 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 74 , xx + 232 , xx + 235 ) ; xx [ 231 ] = xx [ 230 ] +
pm_math_Vector3_dot_ra ( xx + 140 , xx + 235 ) ; xx [ 230 ] = xx [ 51 ] * xx
[ 224 ] - xx [ 111 ] * xx [ 231 ] ; xx [ 44 ] = xx [ 46 ] + xx [ 195 ] + xx [
192 ] ; xx [ 45 ] = xx [ 9 ] * ( xx [ 201 ] + xx [ 47 ] * xx [ 179 ] ) + xx [
210 ] - xx [ 154 ] ; xx [ 46 ] = xx [ 45 ] / xx [ 155 ] ; xx [ 154 ] = xx [
162 ] * xx [ 46 ] ; xx [ 179 ] = xx [ 154 ] * xx [ 35 ] ; xx [ 190 ] = xx [
25 ] * xx [ 154 ] ; xx [ 191 ] = xx [ 212 ] * xx [ 46 ] ; xx [ 192 ] = xx [
191 ] * xx [ 35 ] ; xx [ 193 ] = xx [ 36 ] * xx [ 191 ] ; xx [ 199 ] = ( xx [
25 ] * xx [ 192 ] - xx [ 193 ] * xx [ 26 ] ) * xx [ 9 ] ; xx [ 200 ] = xx [ 9
] * ( xx [ 25 ] * xx [ 193 ] + xx [ 192 ] * xx [ 26 ] ) ; xx [ 201 ] = ( xx [
192 ] * xx [ 35 ] + xx [ 36 ] * xx [ 193 ] ) * xx [ 9 ] - xx [ 191 ] ;
pm_math_Vector3_cross_ra ( xx + 137 , xx + 199 , xx + 191 ) ; xx [ 208 ] = xx
[ 9 ] * ( xx [ 36 ] * xx [ 179 ] + xx [ 190 ] * xx [ 26 ] ) + xx [ 191 ] ; xx
[ 209 ] = xx [ 154 ] - ( xx [ 25 ] * xx [ 190 ] + xx [ 179 ] * xx [ 35 ] ) *
xx [ 9 ] + xx [ 192 ] ; xx [ 210 ] = ( xx [ 179 ] * xx [ 26 ] - xx [ 36 ] *
xx [ 190 ] ) * xx [ 9 ] + xx [ 193 ] ; xx [ 26 ] = ( xx [ 44 ] - (
pm_math_Vector3_dot_ra ( xx + 41 , xx + 208 ) + pm_math_Vector3_dot_ra ( xx +
103 , xx + 199 ) ) ) / xx [ 79 ] ; xx [ 36 ] = xx [ 218 ] + xx [ 227 ] ; xx [
154 ] = xx [ 36 ] / xx [ 131 ] ; xx [ 190 ] = - ( xx [ 148 ] * xx [ 154 ] ) ;
xx [ 191 ] = xx [ 149 ] * xx [ 154 ] ; xx [ 192 ] = - ( xx [ 150 ] * xx [ 154
] ) ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 190 , xx + 193 ) ; xx [
179 ] = ( xx [ 3 ] - pm_math_Vector3_dot_ra ( xx + 145 , xx + 193 ) ) / xx [
151 ] ; xx [ 190 ] = - ( xx [ 136 ] * xx [ 179 ] ) ; xx [ 191 ] = xx [ 143 ]
* xx [ 179 ] ; xx [ 192 ] = - ( xx [ 144 ] * xx [ 179 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx + 190 , xx + 193 ) ; xx [
190 ] = xx [ 154 ] + pm_math_Vector3_dot_ra ( xx + 140 , xx + 193 ) ; xx [
154 ] = xx [ 51 ] * xx [ 26 ] - xx [ 111 ] * xx [ 190 ] ; xx [ 191 ] =
1.088615525016327e-8 ; pm_math_Quaternion_compose_ra ( xx + 61 , xx + 166 ,
xx + 192 ) ; xx [ 199 ] = xx [ 80 ] ; xx [ 200 ] = - xx [ 81 ] ; xx [ 201 ] =
4.313584740037256e-7 ; pm_math_Quaternion_xform_ra ( xx + 192 , xx + 199 , xx
+ 208 ) ; xx [ 232 ] = - 0.08499731596381738 ; xx [ 233 ] = -
0.7052243478362852 ; xx [ 234 ] = - 0.08288208610093117 ; xx [ 235 ] = -
0.6989739875713483 ; xx [ 80 ] = xx [ 8 ] * state [ 2 ] ; xx [ 81 ] =
0.2357227559798625 ; xx [ 199 ] = sin ( xx [ 80 ] ) ; xx [ 200 ] =
0.9718120321650099 ; xx [ 201 ] = 4.019508996436549e-3 ; xx [ 236 ] = cos (
xx [ 80 ] ) ; xx [ 237 ] = - ( xx [ 81 ] * xx [ 199 ] ) ; xx [ 238 ] = xx [
200 ] * xx [ 199 ] ; xx [ 239 ] = xx [ 201 ] * xx [ 199 ] ;
pm_math_Quaternion_compose_ra ( xx + 232 , xx + 236 , xx + 240 ) ; xx [ 80 ]
= 1.495693379815366e-3 ; xx [ 199 ] = xx [ 8 ] * state [ 4 ] ; xx [ 216 ] =
cos ( xx [ 199 ] ) ; xx [ 217 ] = 0.1187086636215266 ; xx [ 218 ] = sin ( xx
[ 199 ] ) ; xx [ 199 ] = xx [ 80 ] * xx [ 216 ] + xx [ 217 ] * xx [ 218 ] ;
xx [ 225 ] = 0.9929181650975998 ; xx [ 226 ] = 4.419672128196023e-3 ; xx [
227 ] = xx [ 225 ] * xx [ 216 ] + xx [ 226 ] * xx [ 218 ] ; xx [ 232 ] = xx [
217 ] * xx [ 216 ] - xx [ 80 ] * xx [ 218 ] ; xx [ 80 ] = xx [ 225 ] * xx [
218 ] - xx [ 226 ] * xx [ 216 ] ; xx [ 233 ] = - xx [ 199 ] ; xx [ 234 ] = xx
[ 227 ] ; xx [ 235 ] = xx [ 232 ] ; xx [ 236 ] = xx [ 80 ] ;
pm_math_Quaternion_compose_ra ( xx + 240 , xx + 233 , xx + 244 ) ; xx [ 248 ]
= xx [ 8 ] ; xx [ 249 ] = xx [ 107 ] ; xx [ 250 ] = xx [ 107 ] ; xx [ 251 ] =
xx [ 107 ] ; pm_math_Quaternion_compose_ra ( xx + 244 , xx + 248 , xx + 252 )
; xx [ 216 ] = ( xx [ 253 ] * xx [ 255 ] + xx [ 252 ] * xx [ 254 ] ) * xx [ 9
] ; xx [ 217 ] = xx [ 9 ] * ( xx [ 254 ] * xx [ 255 ] - xx [ 252 ] * xx [ 253
] ) ; xx [ 218 ] = xx [ 3 ] - ( xx [ 253 ] * xx [ 253 ] + xx [ 254 ] * xx [
254 ] ) * xx [ 9 ] ; xx [ 8 ] = pm_math_Vector3_dot_ra ( xx + 208 , xx + 216
) ; xx [ 107 ] = xx [ 8 ] / xx [ 131 ] ; xx [ 208 ] = 2.963330299648476e-9 ;
xx [ 209 ] = 2.456177005077175e-18 ; xx [ 237 ] = - ( xx [ 191 ] * xx [ 107 ]
) ; xx [ 238 ] = xx [ 208 ] * xx [ 107 ] ; xx [ 239 ] = - ( xx [ 209 ] * xx [
107 ] ) ; pm_math_Quaternion_xform_ra ( xx + 166 , xx + 237 , xx + 248 ) ; xx
[ 210 ] = pm_math_Vector3_dot_ra ( xx + 145 , xx + 248 ) / xx [ 151 ] ; xx [
237 ] = xx [ 136 ] * xx [ 210 ] ; xx [ 238 ] = - ( xx [ 143 ] * xx [ 210 ] )
; xx [ 239 ] = xx [ 144 ] * xx [ 210 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 74 , xx + 237 , xx + 248 ) ; xx [ 225 ] = pm_math_Vector3_dot_ra ( xx +
140 , xx + 248 ) ; xx [ 226 ] = - ( xx [ 225 ] * xx [ 111 ] ) ; xx [ 248 ] =
- 0.01999996597895718 ; xx [ 249 ] = - 8.145843665889382e-8 ; xx [ 250 ] =
2.343930688030639e-9 ; pm_math_Quaternion_xform_ra ( xx + 192 , xx + 248 , xx
+ 251 ) ; xx [ 248 ] = 3.402090709722037e-8 ; xx [ 249 ] =
9.260862306846759e-9 ; xx [ 250 ] = 7.675930370624308e-18 ; xx [ 254 ] = - xx
[ 248 ] ; xx [ 255 ] = xx [ 249 ] ; xx [ 256 ] = - xx [ 250 ] ;
pm_math_Quaternion_xform_ra ( xx + 166 , xx + 254 , xx + 257 ) ;
pm_math_Quaternion_xform_ra ( xx + 61 , xx + 257 , xx + 260 ) ; xx [ 257 ] =
xx [ 251 ] + xx [ 260 ] ; xx [ 258 ] = xx [ 257 ] / xx [ 131 ] ; xx [ 263 ] =
xx [ 191 ] * xx [ 258 ] ; xx [ 264 ] = - ( xx [ 208 ] * xx [ 258 ] ) ; xx [
265 ] = xx [ 209 ] * xx [ 258 ] ; pm_math_Quaternion_xform_ra ( xx + 166 , xx
+ 263 , xx + 266 ) ; xx [ 259 ] = pm_math_Vector3_dot_ra ( xx + 145 , xx +
266 ) / xx [ 151 ] ; xx [ 263 ] = xx [ 136 ] * xx [ 259 ] ; xx [ 264 ] = - (
xx [ 143 ] * xx [ 259 ] ) ; xx [ 265 ] = xx [ 144 ] * xx [ 259 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx + 263 , xx + 266 ) ; xx [
269 ] = pm_math_Vector3_dot_ra ( xx + 140 , xx + 266 ) ; xx [ 266 ] = - ( xx
[ 269 ] * xx [ 111 ] ) ; xx [ 267 ] = xx [ 252 ] + xx [ 261 ] ; xx [ 268 ] =
xx [ 267 ] / xx [ 131 ] ; xx [ 270 ] = xx [ 191 ] * xx [ 268 ] ; xx [ 271 ] =
- ( xx [ 208 ] * xx [ 268 ] ) ; xx [ 272 ] = xx [ 209 ] * xx [ 268 ] ;
pm_math_Quaternion_xform_ra ( xx + 166 , xx + 270 , xx + 273 ) ; xx [ 270 ] =
pm_math_Vector3_dot_ra ( xx + 145 , xx + 273 ) / xx [ 151 ] ; xx [ 271 ] = xx
[ 136 ] * xx [ 270 ] ; xx [ 272 ] = - ( xx [ 143 ] * xx [ 270 ] ) ; xx [ 273
] = xx [ 144 ] * xx [ 270 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 74 ,
xx + 271 , xx + 274 ) ; xx [ 277 ] = pm_math_Vector3_dot_ra ( xx + 140 , xx +
274 ) ; xx [ 274 ] = - ( xx [ 277 ] * xx [ 111 ] ) ; xx [ 251 ] = xx [ 253 ]
+ xx [ 262 ] ; xx [ 252 ] = xx [ 251 ] / xx [ 131 ] ; xx [ 260 ] = xx [ 191 ]
* xx [ 252 ] ; xx [ 261 ] = - ( xx [ 208 ] * xx [ 252 ] ) ; xx [ 262 ] = xx [
209 ] * xx [ 252 ] ; pm_math_Quaternion_xform_ra ( xx + 166 , xx + 260 , xx +
278 ) ; xx [ 253 ] = ( xx [ 3 ] - pm_math_Vector3_dot_ra ( xx + 145 , xx +
278 ) ) / xx [ 151 ] ; xx [ 260 ] = - ( xx [ 136 ] * xx [ 253 ] ) ; xx [ 261
] = xx [ 143 ] * xx [ 253 ] ; xx [ 262 ] = - ( xx [ 144 ] * xx [ 253 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx + 260 , xx + 278 ) ; xx [
275 ] = pm_math_Vector3_dot_ra ( xx + 140 , xx + 278 ) ; xx [ 276 ] = - ( xx
[ 275 ] * xx [ 111 ] ) ; xx [ 278 ] = 0.9999999999935776 ; xx [ 279 ] =
3.609878886663269e-6 ; xx [ 280 ] = - 1.17196534017851e-7 ;
pm_math_Quaternion_xform_ra ( xx + 192 , xx + 278 , xx + 281 ) ; xx [ 278 ] =
xx [ 281 ] / xx [ 131 ] ; xx [ 282 ] = - ( xx [ 191 ] * xx [ 278 ] ) ; xx [
283 ] = xx [ 208 ] * xx [ 278 ] ; xx [ 284 ] = - ( xx [ 209 ] * xx [ 278 ] )
; pm_math_Quaternion_xform_ra ( xx + 166 , xx + 282 , xx + 285 ) ; xx [ 279 ]
= pm_math_Vector3_dot_ra ( xx + 145 , xx + 285 ) / xx [ 151 ] ; xx [ 282 ] =
xx [ 136 ] * xx [ 279 ] ; xx [ 283 ] = - ( xx [ 143 ] * xx [ 279 ] ) ; xx [
284 ] = xx [ 144 ] * xx [ 279 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
74 , xx + 282 , xx + 285 ) ; xx [ 280 ] = pm_math_Vector3_dot_ra ( xx + 140 ,
xx + 285 ) ; xx [ 285 ] = - ( xx [ 280 ] * xx [ 111 ] ) ; xx [ 286 ] =
0.9999999999935774 ; xx [ 287 ] = 3.609878872785481e-6 ; xx [ 288 ] = -
1.17196534809527e-7 ; pm_math_Quaternion_xform_ra ( xx + 65 , xx + 286 , xx +
289 ) ; xx [ 286 ] = xx [ 289 ] / xx [ 131 ] ; xx [ 290 ] = xx [ 148 ] * xx [
286 ] ; xx [ 291 ] = - ( xx [ 149 ] * xx [ 286 ] ) ; xx [ 292 ] = xx [ 150 ]
* xx [ 286 ] ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 290 , xx + 293 )
; xx [ 287 ] = pm_math_Vector3_dot_ra ( xx + 145 , xx + 293 ) / xx [ 151 ] ;
xx [ 290 ] = xx [ 136 ] * xx [ 287 ] ; xx [ 291 ] = - ( xx [ 143 ] * xx [ 287
] ) ; xx [ 292 ] = xx [ 144 ] * xx [ 287 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx + 290 , xx + 293 ) ; xx [
288 ] = xx [ 286 ] - pm_math_Vector3_dot_ra ( xx + 140 , xx + 293 ) ; xx [
286 ] = xx [ 111 ] * xx [ 288 ] ; xx [ 293 ] = xx [ 3 ] / xx [ 151 ] ; xx [
294 ] = - ( xx [ 136 ] * xx [ 293 ] ) ; xx [ 295 ] = xx [ 143 ] * xx [ 293 ]
; xx [ 296 ] = - ( xx [ 144 ] * xx [ 293 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx + 294 , xx + 297 ) ; xx [
300 ] = pm_math_Vector3_dot_ra ( xx + 140 , xx + 297 ) ; xx [ 297 ] = - ( xx
[ 300 ] * xx [ 111 ] ) ; xx [ 298 ] = 0.4098839773319218 ; xx [ 301 ] = - (
xx [ 38 ] * xx [ 206 ] ) ; xx [ 302 ] = - ( xx [ 39 ] * xx [ 206 ] ) ; xx [
303 ] = - ( xx [ 40 ] * xx [ 206 ] ) ; pm_math_Quaternion_inverseXform_ra (
xx + 31 , xx + 301 , xx + 304 ) ; xx [ 299 ] = 5.33393831069763 ;
pm_math_Vector3_cross_ra ( xx + 301 , xx + 137 , xx + 306 ) ; xx [ 301 ] = xx
[ 86 ] * xx [ 206 ] + xx [ 306 ] ; xx [ 302 ] = xx [ 307 ] - xx [ 89 ] * xx [
206 ] ; xx [ 303 ] = xx [ 308 ] - xx [ 91 ] * xx [ 206 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 31 , xx + 301 , xx + 306 ) ; xx [
301 ] = - ( xx [ 38 ] * xx [ 224 ] ) ; xx [ 302 ] = - ( xx [ 39 ] * xx [ 224
] ) ; xx [ 303 ] = - ( xx [ 40 ] * xx [ 224 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 31 , xx + 301 , xx + 309 ) ;
pm_math_Vector3_cross_ra ( xx + 301 , xx + 137 , xx + 311 ) ; xx [ 301 ] = xx
[ 86 ] * xx [ 224 ] + xx [ 311 ] ; xx [ 302 ] = xx [ 312 ] - xx [ 89 ] * xx [
224 ] ; xx [ 303 ] = xx [ 313 ] - xx [ 91 ] * xx [ 224 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 31 , xx + 301 , xx + 311 ) ; xx [
301 ] = xx [ 176 ] - ( xx [ 298 ] * xx [ 310 ] - xx [ 299 ] * xx [ 313 ] ) ;
xx [ 176 ] = xx [ 156 ] * xx [ 224 ] + xx [ 196 ] * xx [ 301 ] + xx [ 231 ] *
xx [ 214 ] ; xx [ 302 ] = - ( xx [ 38 ] * xx [ 26 ] ) ; xx [ 303 ] = - ( xx [
39 ] * xx [ 26 ] ) ; xx [ 304 ] = - ( xx [ 40 ] * xx [ 26 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 31 , xx + 302 , xx + 309 ) ;
pm_math_Vector3_cross_ra ( xx + 302 , xx + 137 , xx + 311 ) ; xx [ 302 ] = xx
[ 86 ] * xx [ 26 ] + xx [ 311 ] ; xx [ 303 ] = xx [ 312 ] - xx [ 89 ] * xx [
26 ] ; xx [ 304 ] = xx [ 313 ] - xx [ 91 ] * xx [ 26 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 31 , xx + 302 , xx + 311 ) ; xx [
302 ] = xx [ 46 ] - ( xx [ 298 ] * xx [ 310 ] - xx [ 299 ] * xx [ 313 ] ) ;
xx [ 46 ] = xx [ 156 ] * xx [ 26 ] + xx [ 196 ] * xx [ 302 ] + xx [ 190 ] *
xx [ 214 ] ; xx [ 303 ] = xx [ 225 ] * xx [ 214 ] ; xx [ 304 ] = xx [ 269 ] *
xx [ 214 ] ; xx [ 306 ] = xx [ 277 ] * xx [ 214 ] ; xx [ 307 ] = xx [ 275 ] *
xx [ 214 ] ; xx [ 309 ] = xx [ 280 ] * xx [ 214 ] ; xx [ 310 ] = - ( xx [ 214
] * xx [ 288 ] ) ; xx [ 311 ] = xx [ 300 ] * xx [ 214 ] ; xx [ 312 ] = xx [
222 ] * xx [ 26 ] + xx [ 223 ] * xx [ 302 ] + xx [ 190 ] * xx [ 229 ] ; xx [
313 ] = xx [ 225 ] * xx [ 229 ] ; xx [ 314 ] = xx [ 269 ] * xx [ 229 ] ; xx [
315 ] = xx [ 277 ] * xx [ 229 ] ; xx [ 316 ] = xx [ 275 ] * xx [ 229 ] ; xx [
317 ] = xx [ 280 ] * xx [ 229 ] ; xx [ 318 ] = - ( xx [ 229 ] * xx [ 288 ] )
; xx [ 319 ] = xx [ 300 ] * xx [ 229 ] ; xx [ 320 ] = xx [ 225 ] * xx [ 36 ]
- xx [ 210 ] ; xx [ 210 ] = xx [ 269 ] * xx [ 36 ] - xx [ 259 ] ; xx [ 225 ]
= xx [ 277 ] * xx [ 36 ] - xx [ 270 ] ; xx [ 259 ] = xx [ 253 ] + xx [ 275 ]
* xx [ 36 ] ; xx [ 269 ] = xx [ 280 ] * xx [ 36 ] - xx [ 279 ] ; xx [ 270 ] =
- ( xx [ 287 ] + xx [ 36 ] * xx [ 288 ] ) ; xx [ 275 ] = xx [ 293 ] + xx [
300 ] * xx [ 36 ] ; xx [ 321 ] = - xx [ 81 ] ; xx [ 322 ] = xx [ 200 ] ; xx [
323 ] = xx [ 201 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 233 , xx + 321
, xx + 324 ) ; xx [ 277 ] = xx [ 324 ] * xx [ 246 ] ; xx [ 280 ] = xx [ 326 ]
* xx [ 247 ] + xx [ 324 ] * xx [ 245 ] ; xx [ 327 ] = xx [ 246 ] * xx [ 326 ]
; xx [ 328 ] = xx [ 277 ] ; xx [ 329 ] = - xx [ 280 ] ; xx [ 330 ] = xx [ 327
] ; pm_math_Vector3_cross_ra ( xx + 245 , xx + 328 , xx + 331 ) ; xx [ 328 ]
= ( xx [ 244 ] * xx [ 277 ] + xx [ 331 ] ) * xx [ 9 ] - xx [ 326 ] ; xx [ 329
] = xx [ 9 ] * ( xx [ 332 ] - xx [ 280 ] * xx [ 244 ] ) ; xx [ 330 ] = xx [
324 ] + ( xx [ 244 ] * xx [ 327 ] + xx [ 333 ] ) * xx [ 9 ] ;
pm_math_Quaternion_compose_ra ( xx + 192 , xx + 70 , xx + 331 ) ; xx [ 70 ] =
xx [ 9 ] * ( xx [ 332 ] * xx [ 333 ] - xx [ 331 ] * xx [ 334 ] ) ; xx [ 71 ]
= xx [ 3 ] - ( xx [ 332 ] * xx [ 332 ] + xx [ 334 ] * xx [ 334 ] ) * xx [ 9 ]
; xx [ 72 ] = ( xx [ 333 ] * xx [ 334 ] + xx [ 331 ] * xx [ 332 ] ) * xx [ 9
] ; xx [ 73 ] = pm_math_Vector3_dot_ra ( xx + 328 , xx + 70 ) ; xx [ 277 ] =
0.2167655641879697 ; xx [ 280 ] = xx [ 199 ] * xx [ 199 ] ; xx [ 327 ] = ( xx
[ 280 ] + xx [ 227 ] * xx [ 227 ] ) * xx [ 9 ] - xx [ 3 ] ; xx [ 328 ] = xx [
232 ] * xx [ 227 ] ; xx [ 329 ] = xx [ 80 ] * xx [ 199 ] ; xx [ 330 ] = xx [
9 ] * ( xx [ 328 ] + xx [ 329 ] ) ; xx [ 331 ] = xx [ 80 ] * xx [ 227 ] ; xx
[ 332 ] = xx [ 232 ] * xx [ 199 ] ; xx [ 333 ] = ( xx [ 331 ] - xx [ 332 ] )
* xx [ 9 ] ; xx [ 334 ] = xx [ 328 ] - xx [ 329 ] ; xx [ 328 ] = xx [ 334 ] *
xx [ 9 ] ; xx [ 329 ] = ( xx [ 280 ] + xx [ 232 ] * xx [ 232 ] ) * xx [ 9 ] -
xx [ 3 ] ; xx [ 335 ] = xx [ 232 ] * xx [ 80 ] ; xx [ 336 ] = xx [ 227 ] * xx
[ 199 ] ; xx [ 337 ] = xx [ 9 ] * ( xx [ 335 ] + xx [ 336 ] ) ; xx [ 338 ] =
xx [ 331 ] + xx [ 332 ] ; xx [ 331 ] = xx [ 9 ] * xx [ 338 ] ; xx [ 332 ] = (
xx [ 335 ] - xx [ 336 ] ) * xx [ 9 ] ; xx [ 335 ] = ( xx [ 280 ] + xx [ 80 ]
* xx [ 80 ] ) * xx [ 9 ] - xx [ 3 ] ; xx [ 339 ] = xx [ 327 ] ; xx [ 340 ] =
xx [ 330 ] ; xx [ 341 ] = xx [ 333 ] ; xx [ 342 ] = xx [ 328 ] ; xx [ 343 ] =
xx [ 329 ] ; xx [ 344 ] = xx [ 337 ] ; xx [ 345 ] = xx [ 331 ] ; xx [ 346 ] =
xx [ 332 ] ; xx [ 347 ] = xx [ 335 ] ; xx [ 280 ] = 1.374214274412899e-3 ; xx
[ 348 ] = xx [ 54 ] * xx [ 327 ] ; xx [ 349 ] = xx [ 54 ] * xx [ 328 ] ; xx [
350 ] = xx [ 54 ] * xx [ 331 ] ; xx [ 351 ] = xx [ 280 ] * xx [ 330 ] ; xx [
352 ] = xx [ 280 ] * xx [ 329 ] ; xx [ 353 ] = xx [ 280 ] * xx [ 332 ] ; xx [
354 ] = xx [ 102 ] * xx [ 333 ] ; xx [ 355 ] = xx [ 102 ] * xx [ 337 ] ; xx [
356 ] = xx [ 102 ] * xx [ 335 ] ; pm_math_Matrix3x3_compose_ra ( xx + 339 ,
xx + 348 , xx + 357 ) ; xx [ 280 ] = 0.01242124240629439 ; xx [ 336 ] = xx [
280 ] * xx [ 333 ] ; xx [ 348 ] = xx [ 336 ] * xx [ 330 ] ; xx [ 349 ] = xx [
280 ] * xx [ 337 ] ; xx [ 350 ] = xx [ 349 ] * xx [ 330 ] ; xx [ 351 ] = xx [
280 ] * xx [ 335 ] ; xx [ 280 ] = xx [ 351 ] * xx [ 330 ] ; xx [ 352 ] = xx [
336 ] * xx [ 329 ] ; xx [ 353 ] = xx [ 349 ] * xx [ 329 ] ; xx [ 354 ] = xx [
351 ] * xx [ 329 ] ; xx [ 355 ] = xx [ 332 ] * xx [ 336 ] ; xx [ 336 ] = xx [
332 ] * xx [ 349 ] ; xx [ 349 ] = xx [ 332 ] * xx [ 351 ] ; xx [ 366 ] = xx [
348 ] ; xx [ 367 ] = xx [ 350 ] ; xx [ 368 ] = xx [ 280 ] ; xx [ 369 ] = xx [
352 ] ; xx [ 370 ] = xx [ 353 ] ; xx [ 371 ] = xx [ 354 ] ; xx [ 372 ] = xx [
355 ] ; xx [ 373 ] = xx [ 336 ] ; xx [ 374 ] = xx [ 349 ] ; xx [ 375 ] = xx [
227 ] ; xx [ 376 ] = xx [ 232 ] ; xx [ 377 ] = xx [ 80 ] ; xx [ 351 ] =
0.010001 ; xx [ 356 ] = xx [ 80 ] * xx [ 351 ] ; xx [ 378 ] =
0.1106342046522274 ; xx [ 379 ] = xx [ 80 ] * xx [ 378 ] ; xx [ 380 ] = xx [
232 ] * xx [ 378 ] ; xx [ 381 ] = xx [ 351 ] * xx [ 227 ] + xx [ 380 ] ; xx [
382 ] = - xx [ 356 ] ; xx [ 383 ] = - xx [ 379 ] ; xx [ 384 ] = xx [ 381 ] ;
pm_math_Vector3_cross_ra ( xx + 375 , xx + 382 , xx + 385 ) ; xx [ 375 ] = xx
[ 379 ] * xx [ 199 ] ; xx [ 382 ] = 0.1316810185882336 - ( xx [ 9 ] * ( xx [
385 ] + xx [ 356 ] * xx [ 199 ] ) - xx [ 378 ] ) ; xx [ 383 ] = - (
9.011414711072623e-3 + xx [ 351 ] + ( xx [ 375 ] + xx [ 386 ] ) * xx [ 9 ] )
; xx [ 384 ] = 0.1047270297279631 - ( xx [ 387 ] - xx [ 381 ] * xx [ 199 ] )
* xx [ 9 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 366 , xx + 382 , xx + 385
) ; xx [ 351 ] = 0.1122730754502181 ; xx [ 366 ] = xx [ 27 ] * xx [ 327 ] ;
xx [ 367 ] = xx [ 27 ] * xx [ 328 ] ; xx [ 368 ] = xx [ 27 ] * xx [ 331 ] ;
xx [ 369 ] = xx [ 27 ] * xx [ 330 ] ; xx [ 370 ] = xx [ 27 ] * xx [ 329 ] ;
xx [ 371 ] = xx [ 27 ] * xx [ 332 ] ; xx [ 372 ] = xx [ 351 ] * xx [ 333 ] ;
xx [ 373 ] = xx [ 351 ] * xx [ 337 ] ; xx [ 374 ] = xx [ 351 ] * xx [ 335 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 339 , xx + 366 , xx + 394 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 394 , xx + 382 , xx + 366 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 366 , xx + 382 , xx + 403 ) ; xx [ 328 ]
= 0.2183899636734285 ; xx [ 329 ] = 0.3739490255580858 ; xx [ 412 ] = xx [
277 ] + xx [ 357 ] - xx [ 385 ] - xx [ 385 ] - xx [ 403 ] ; xx [ 413 ] = xx [
358 ] - xx [ 386 ] - xx [ 388 ] - xx [ 404 ] ; xx [ 414 ] = xx [ 359 ] - xx [
387 ] - xx [ 391 ] - xx [ 405 ] ; xx [ 415 ] = xx [ 360 ] - xx [ 388 ] - xx [
386 ] - xx [ 406 ] ; xx [ 416 ] = xx [ 328 ] + xx [ 361 ] - xx [ 389 ] - xx [
389 ] - xx [ 407 ] ; xx [ 417 ] = xx [ 362 ] - xx [ 390 ] - xx [ 392 ] - xx [
408 ] ; xx [ 418 ] = xx [ 363 ] - xx [ 391 ] - xx [ 387 ] - xx [ 409 ] ; xx [
419 ] = xx [ 364 ] - xx [ 392 ] - xx [ 390 ] - xx [ 410 ] ; xx [ 420 ] = xx [
329 ] + xx [ 365 ] - xx [ 393 ] - xx [ 393 ] - xx [ 411 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 412 , xx + 321 , xx + 330 ) ; xx [ 356 ] =
xx [ 348 ] - xx [ 366 ] ; xx [ 357 ] = xx [ 350 ] - xx [ 369 ] ; xx [ 358 ] =
xx [ 280 ] - xx [ 372 ] ; xx [ 359 ] = xx [ 352 ] - xx [ 367 ] ; xx [ 360 ] =
xx [ 353 ] - xx [ 370 ] ; xx [ 361 ] = xx [ 354 ] - xx [ 373 ] ; xx [ 362 ] =
xx [ 355 ] - xx [ 368 ] ; xx [ 363 ] = xx [ 336 ] - xx [ 371 ] ; xx [ 364 ] =
xx [ 349 ] - xx [ 374 ] ; xx [ 280 ] = 0.1029642730927401 ; xx [ 333 ] =
0.02497328869161739 ; xx [ 335 ] = 4.179086652678059e-4 ; xx [ 348 ] = - xx [
280 ] ; xx [ 349 ] = - xx [ 333 ] ; xx [ 350 ] = - xx [ 335 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 356 , xx + 348 , xx + 351 ) ; xx [ 365 ] =
xx [ 330 ] + xx [ 351 ] ; xx [ 366 ] = xx [ 331 ] + xx [ 352 ] ; xx [ 367 ] =
xx [ 332 ] + xx [ 353 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 356 , xx
+ 321 , xx + 330 ) ; xx [ 385 ] = xx [ 106 ] + xx [ 394 ] ; xx [ 386 ] = xx [
395 ] ; xx [ 387 ] = xx [ 396 ] ; xx [ 388 ] = xx [ 397 ] ; xx [ 389 ] = xx [
106 ] + xx [ 398 ] ; xx [ 390 ] = xx [ 399 ] ; xx [ 391 ] = xx [ 400 ] ; xx [
392 ] = xx [ 401 ] ; xx [ 393 ] = xx [ 106 ] + xx [ 402 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 385 , xx + 348 , xx + 351 ) ; xx [ 368 ] =
xx [ 330 ] + xx [ 351 ] ; xx [ 369 ] = xx [ 331 ] + xx [ 352 ] ; xx [ 370 ] =
xx [ 332 ] + xx [ 353 ] ; xx [ 106 ] = pm_math_Vector3_dot_ra ( xx + 321 , xx
+ 365 ) + pm_math_Vector3_dot_ra ( xx + 348 , xx + 368 ) ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 106 , 1 , xx + 330 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'test14/Steering Dynamics/Revolute' has a degenerate mass distribution on its base side."
, neDiagMgr ) ; } xx [ 330 ] = - 7.912210232529344e-5 ; xx [ 331 ] =
2.153790000275007e-5 ; xx [ 332 ] = - 1.785183876757906e-14 ;
pm_math_Quaternion_inverseXform_ra ( xx + 166 , xx + 237 , xx + 351 ) ; xx [
237 ] = 9.999999999962842e-3 ; xx [ 238 ] = 0.1106342046522229 ; xx [ 365 ] =
xx [ 237 ] * xx [ 326 ] ; xx [ 366 ] = xx [ 238 ] * xx [ 326 ] ; xx [ 367 ] =
- ( xx [ 237 ] * xx [ 324 ] + xx [ 238 ] * xx [ 325 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 244 , xx + 365 , xx + 324 ) ;
pm_math_Vector3_cross_ra ( xx + 321 , xx + 382 , xx + 365 ) ;
pm_math_Quaternion_xform_ra ( xx + 240 , xx + 365 , xx + 368 ) ;
pm_math_Quaternion_xform_ra ( xx + 240 , xx + 348 , xx + 365 ) ; xx [ 239 ] =
xx [ 324 ] + xx [ 368 ] + xx [ 365 ] ; xx [ 336 ] = xx [ 380 ] * xx [ 199 ] ;
xx [ 337 ] = xx [ 378 ] * xx [ 227 ] ; xx [ 354 ] = xx [ 336 ] - xx [ 80 ] *
xx [ 337 ] ; xx [ 355 ] = xx [ 80 ] * xx [ 380 ] + xx [ 337 ] * xx [ 199 ] ;
xx [ 371 ] = xx [ 232 ] * xx [ 380 ] ; xx [ 372 ] = ( xx [ 337 ] * xx [ 227 ]
+ xx [ 371 ] ) * xx [ 9 ] - xx [ 378 ] ; xx [ 394 ] = xx [ 354 ] * xx [ 9 ] ;
xx [ 395 ] = - ( xx [ 9 ] * xx [ 355 ] ) ; xx [ 396 ] = xx [ 372 ] ;
pm_math_Quaternion_xform_ra ( xx + 240 , xx + 394 , xx + 397 ) ; xx [ 337 ] =
xx [ 238 ] * xx [ 246 ] ; xx [ 373 ] = xx [ 238 ] * xx [ 245 ] ; xx [ 374 ] =
xx [ 397 ] - ( xx [ 244 ] * xx [ 337 ] + xx [ 247 ] * xx [ 373 ] ) * xx [ 9 ]
; xx [ 376 ] = 5.681409681304544e-3 ; xx [ 377 ] = xx [ 374 ] / xx [ 376 ] ;
xx [ 381 ] = xx [ 162 ] * xx [ 377 ] ; xx [ 394 ] = xx [ 381 ] * xx [ 227 ] ;
xx [ 395 ] = xx [ 80 ] * xx [ 381 ] ; xx [ 396 ] = 0.03030428875787873 ; xx [
400 ] = xx [ 396 ] * xx [ 377 ] ; xx [ 401 ] = xx [ 232 ] * xx [ 400 ] ; xx [
402 ] = xx [ 400 ] * xx [ 227 ] ; xx [ 403 ] = ( xx [ 401 ] * xx [ 199 ] - xx
[ 80 ] * xx [ 402 ] ) * xx [ 9 ] ; xx [ 404 ] = - ( xx [ 9 ] * ( xx [ 80 ] *
xx [ 401 ] + xx [ 402 ] * xx [ 199 ] ) ) ; xx [ 405 ] = ( xx [ 402 ] * xx [
227 ] + xx [ 232 ] * xx [ 401 ] ) * xx [ 9 ] - xx [ 400 ] ;
pm_math_Vector3_cross_ra ( xx + 382 , xx + 403 , xx + 400 ) ; xx [ 406 ] = xx
[ 9 ] * ( xx [ 232 ] * xx [ 394 ] + xx [ 395 ] * xx [ 199 ] ) + xx [ 400 ] ;
xx [ 407 ] = xx [ 381 ] - ( xx [ 80 ] * xx [ 395 ] + xx [ 394 ] * xx [ 227 ]
) * xx [ 9 ] + xx [ 401 ] ; xx [ 408 ] = ( xx [ 232 ] * xx [ 395 ] - xx [ 394
] * xx [ 199 ] ) * xx [ 9 ] + xx [ 402 ] ; xx [ 381 ] = ( xx [ 239 ] - (
pm_math_Vector3_dot_ra ( xx + 321 , xx + 406 ) + pm_math_Vector3_dot_ra ( xx
+ 348 , xx + 403 ) ) ) / xx [ 106 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 166 , xx + 263 , xx + 400 ) ; xx [ 263 ] = xx [ 258 ] +
pm_math_Vector3_dot_ra ( xx + 330 , xx + 400 ) ; xx [ 258 ] = xx [ 73 ] * xx
[ 381 ] - xx [ 8 ] * xx [ 263 ] ; xx [ 264 ] = xx [ 325 ] + xx [ 369 ] + xx [
366 ] ; xx [ 265 ] = xx [ 9 ] * ( xx [ 244 ] * xx [ 373 ] - xx [ 247 ] * xx [
337 ] ) + xx [ 398 ] ; xx [ 394 ] = xx [ 265 ] / xx [ 376 ] ; xx [ 395 ] = xx
[ 162 ] * xx [ 394 ] ; xx [ 400 ] = xx [ 395 ] * xx [ 227 ] ; xx [ 401 ] = xx
[ 80 ] * xx [ 395 ] ; xx [ 402 ] = xx [ 396 ] * xx [ 394 ] ; xx [ 403 ] = xx
[ 232 ] * xx [ 402 ] ; xx [ 404 ] = xx [ 402 ] * xx [ 227 ] ; xx [ 405 ] = (
xx [ 403 ] * xx [ 199 ] - xx [ 80 ] * xx [ 404 ] ) * xx [ 9 ] ; xx [ 406 ] =
- ( xx [ 9 ] * ( xx [ 80 ] * xx [ 403 ] + xx [ 404 ] * xx [ 199 ] ) ) ; xx [
407 ] = ( xx [ 404 ] * xx [ 227 ] + xx [ 232 ] * xx [ 403 ] ) * xx [ 9 ] - xx
[ 402 ] ; pm_math_Vector3_cross_ra ( xx + 382 , xx + 405 , xx + 402 ) ; xx [
408 ] = xx [ 9 ] * ( xx [ 232 ] * xx [ 400 ] + xx [ 401 ] * xx [ 199 ] ) + xx
[ 402 ] ; xx [ 409 ] = xx [ 395 ] - ( xx [ 80 ] * xx [ 401 ] + xx [ 400 ] *
xx [ 227 ] ) * xx [ 9 ] + xx [ 403 ] ; xx [ 410 ] = ( xx [ 232 ] * xx [ 401 ]
- xx [ 400 ] * xx [ 199 ] ) * xx [ 9 ] + xx [ 404 ] ; xx [ 395 ] = ( xx [ 264
] - ( pm_math_Vector3_dot_ra ( xx + 321 , xx + 408 ) + pm_math_Vector3_dot_ra
( xx + 348 , xx + 405 ) ) ) / xx [ 106 ] ; pm_math_Quaternion_inverseXform_ra
( xx + 166 , xx + 271 , xx + 400 ) ; xx [ 271 ] = xx [ 268 ] +
pm_math_Vector3_dot_ra ( xx + 330 , xx + 400 ) ; xx [ 268 ] = xx [ 73 ] * xx
[ 395 ] - xx [ 8 ] * xx [ 271 ] ; xx [ 272 ] = xx [ 326 ] + xx [ 370 ] + xx [
367 ] ; xx [ 273 ] = xx [ 399 ] + ( xx [ 245 ] * xx [ 373 ] + xx [ 246 ] * xx
[ 337 ] ) * xx [ 9 ] - xx [ 238 ] ; xx [ 324 ] = xx [ 273 ] / xx [ 376 ] ; xx
[ 325 ] = xx [ 162 ] * xx [ 324 ] ; xx [ 326 ] = xx [ 325 ] * xx [ 227 ] ; xx
[ 337 ] = xx [ 80 ] * xx [ 325 ] ; xx [ 365 ] = xx [ 396 ] * xx [ 324 ] ; xx
[ 366 ] = xx [ 232 ] * xx [ 365 ] ; xx [ 367 ] = xx [ 365 ] * xx [ 227 ] ; xx
[ 368 ] = ( xx [ 366 ] * xx [ 199 ] - xx [ 80 ] * xx [ 367 ] ) * xx [ 9 ] ;
xx [ 369 ] = - ( xx [ 9 ] * ( xx [ 80 ] * xx [ 366 ] + xx [ 367 ] * xx [ 199
] ) ) ; xx [ 370 ] = ( xx [ 367 ] * xx [ 227 ] + xx [ 232 ] * xx [ 366 ] ) *
xx [ 9 ] - xx [ 365 ] ; pm_math_Vector3_cross_ra ( xx + 382 , xx + 368 , xx +
365 ) ; xx [ 397 ] = xx [ 9 ] * ( xx [ 232 ] * xx [ 326 ] + xx [ 337 ] * xx [
199 ] ) + xx [ 365 ] ; xx [ 398 ] = xx [ 325 ] - ( xx [ 80 ] * xx [ 337 ] +
xx [ 326 ] * xx [ 227 ] ) * xx [ 9 ] + xx [ 366 ] ; xx [ 399 ] = ( xx [ 232 ]
* xx [ 337 ] - xx [ 326 ] * xx [ 199 ] ) * xx [ 9 ] + xx [ 367 ] ; xx [ 199 ]
= ( xx [ 272 ] - ( pm_math_Vector3_dot_ra ( xx + 321 , xx + 397 ) +
pm_math_Vector3_dot_ra ( xx + 348 , xx + 368 ) ) ) / xx [ 106 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 166 , xx + 260 , xx + 365 ) ; xx [
232 ] = xx [ 252 ] + pm_math_Vector3_dot_ra ( xx + 330 , xx + 365 ) ; xx [
252 ] = xx [ 73 ] * xx [ 199 ] - xx [ 8 ] * xx [ 232 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 166 , xx + 282 , xx + 260 ) ; xx [
282 ] = xx [ 278 ] - pm_math_Vector3_dot_ra ( xx + 330 , xx + 260 ) ; xx [
260 ] = xx [ 8 ] * xx [ 282 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 166
, xx + 290 , xx + 365 ) ; xx [ 261 ] = pm_math_Vector3_dot_ra ( xx + 330 , xx
+ 365 ) ; xx [ 262 ] = - ( xx [ 8 ] * xx [ 261 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 166 , xx + 294 , xx + 290 ) ; xx [
278 ] = pm_math_Vector3_dot_ra ( xx + 330 , xx + 290 ) ; xx [ 283 ] = - ( xx
[ 8 ] * xx [ 278 ] ) ; xx [ 284 ] = 0.4098839773319223 ; xx [ 290 ] = - ( xx
[ 81 ] * xx [ 381 ] ) ; xx [ 291 ] = xx [ 200 ] * xx [ 381 ] ; xx [ 292 ] =
xx [ 201 ] * xx [ 381 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 233 , xx
+ 290 , xx + 294 ) ; xx [ 294 ] = 5.333938310697631 ;
pm_math_Vector3_cross_ra ( xx + 290 , xx + 382 , xx + 365 ) ; xx [ 290 ] = xx
[ 365 ] - xx [ 280 ] * xx [ 381 ] ; xx [ 291 ] = xx [ 366 ] - xx [ 333 ] * xx
[ 381 ] ; xx [ 292 ] = xx [ 367 ] - xx [ 335 ] * xx [ 381 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 233 , xx + 290 , xx + 365 ) ; xx [
290 ] = - ( xx [ 81 ] * xx [ 395 ] ) ; xx [ 291 ] = xx [ 200 ] * xx [ 395 ] ;
xx [ 292 ] = xx [ 201 ] * xx [ 395 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 233 , xx + 290 , xx + 368 ) ; pm_math_Vector3_cross_ra ( xx + 290 , xx +
382 , xx + 397 ) ; xx [ 290 ] = xx [ 397 ] - xx [ 280 ] * xx [ 395 ] ; xx [
291 ] = xx [ 398 ] - xx [ 333 ] * xx [ 395 ] ; xx [ 292 ] = xx [ 399 ] - xx [
335 ] * xx [ 395 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 233 , xx + 290
, xx + 397 ) ; xx [ 290 ] = xx [ 394 ] - ( xx [ 284 ] * xx [ 369 ] - xx [ 294
] * xx [ 399 ] ) ; xx [ 291 ] = xx [ 239 ] * xx [ 395 ] + xx [ 374 ] * xx [
290 ] + xx [ 271 ] * xx [ 257 ] ; xx [ 368 ] = - ( xx [ 81 ] * xx [ 199 ] ) ;
xx [ 369 ] = xx [ 200 ] * xx [ 199 ] ; xx [ 370 ] = xx [ 201 ] * xx [ 199 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 233 , xx + 368 , xx + 397 ) ;
pm_math_Vector3_cross_ra ( xx + 368 , xx + 382 , xx + 399 ) ; xx [ 368 ] = xx
[ 399 ] - xx [ 280 ] * xx [ 199 ] ; xx [ 369 ] = xx [ 400 ] - xx [ 333 ] * xx
[ 199 ] ; xx [ 370 ] = xx [ 401 ] - xx [ 335 ] * xx [ 199 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 233 , xx + 368 , xx + 399 ) ; xx [
292 ] = xx [ 324 ] - ( xx [ 284 ] * xx [ 398 ] - xx [ 294 ] * xx [ 401 ] ) ;
xx [ 296 ] = xx [ 239 ] * xx [ 199 ] + xx [ 374 ] * xx [ 292 ] + xx [ 232 ] *
xx [ 257 ] ; xx [ 324 ] = - ( xx [ 257 ] * xx [ 282 ] ) ; xx [ 325 ] = xx [
261 ] * xx [ 257 ] ; xx [ 326 ] = xx [ 278 ] * xx [ 257 ] ; xx [ 337 ] = xx [
264 ] * xx [ 199 ] + xx [ 265 ] * xx [ 292 ] + xx [ 232 ] * xx [ 267 ] ; xx [
365 ] = - ( xx [ 267 ] * xx [ 282 ] ) ; xx [ 366 ] = xx [ 261 ] * xx [ 267 ]
; xx [ 368 ] = xx [ 278 ] * xx [ 267 ] ; xx [ 369 ] = - ( xx [ 279 ] + xx [
251 ] * xx [ 282 ] ) ; xx [ 279 ] = xx [ 261 ] * xx [ 251 ] - xx [ 287 ] ; xx
[ 287 ] = xx [ 293 ] + xx [ 278 ] * xx [ 251 ] ; xx [ 370 ] = - ( xx [ 261 ]
* xx [ 281 ] ) ; xx [ 261 ] = - ( xx [ 278 ] * xx [ 281 ] ) ; xx [ 278 ] = -
( xx [ 300 ] * xx [ 289 ] ) ; xx [ 300 ] = 0.01235780804768841 ; xx [ 397 ] =
xx [ 51 ] * xx [ 51 ] / xx [ 79 ] + xx [ 111 ] * ( xx [ 132 ] -
pm_math_Vector3_dot_ra ( xx + 140 , xx + 184 ) ) ; xx [ 398 ] = xx [ 215 ] ;
xx [ 399 ] = xx [ 230 ] ; xx [ 400 ] = xx [ 154 ] ; xx [ 401 ] = xx [ 226 ] ;
xx [ 402 ] = xx [ 266 ] ; xx [ 403 ] = xx [ 274 ] ; xx [ 404 ] = xx [ 276 ] ;
xx [ 405 ] = xx [ 285 ] ; xx [ 406 ] = xx [ 286 ] ; xx [ 407 ] = xx [ 297 ] ;
xx [ 408 ] = xx [ 215 ] ; xx [ 409 ] = xx [ 156 ] * xx [ 206 ] + xx [ 196 ] *
( xx [ 205 ] - ( xx [ 298 ] * xx [ 305 ] - xx [ 299 ] * xx [ 308 ] ) ) + xx [
228 ] * xx [ 214 ] ; xx [ 410 ] = xx [ 176 ] ; xx [ 411 ] = xx [ 46 ] ; xx [
412 ] = xx [ 303 ] ; xx [ 413 ] = xx [ 304 ] ; xx [ 414 ] = xx [ 306 ] ; xx [
415 ] = xx [ 307 ] ; xx [ 416 ] = xx [ 309 ] ; xx [ 417 ] = xx [ 310 ] ; xx [
418 ] = xx [ 311 ] ; xx [ 419 ] = xx [ 230 ] ; xx [ 420 ] = xx [ 176 ] ; xx [
421 ] = xx [ 222 ] * xx [ 224 ] + xx [ 223 ] * xx [ 301 ] + xx [ 231 ] * xx [
229 ] ; xx [ 422 ] = xx [ 312 ] ; xx [ 423 ] = xx [ 313 ] ; xx [ 424 ] = xx [
314 ] ; xx [ 425 ] = xx [ 315 ] ; xx [ 426 ] = xx [ 316 ] ; xx [ 427 ] = xx [
317 ] ; xx [ 428 ] = xx [ 318 ] ; xx [ 429 ] = xx [ 319 ] ; xx [ 430 ] = xx [
154 ] ; xx [ 431 ] = xx [ 46 ] ; xx [ 432 ] = xx [ 312 ] ; xx [ 433 ] = xx [
44 ] * xx [ 26 ] + xx [ 45 ] * xx [ 302 ] + xx [ 179 ] + xx [ 190 ] * xx [ 36
] ; xx [ 434 ] = xx [ 320 ] ; xx [ 435 ] = xx [ 210 ] ; xx [ 436 ] = xx [ 225
] ; xx [ 437 ] = xx [ 259 ] ; xx [ 438 ] = xx [ 269 ] ; xx [ 439 ] = xx [ 270
] ; xx [ 440 ] = xx [ 275 ] ; xx [ 441 ] = xx [ 226 ] ; xx [ 442 ] = xx [ 303
] ; xx [ 443 ] = xx [ 313 ] ; xx [ 444 ] = xx [ 320 ] ; xx [ 445 ] = xx [ 73
] * xx [ 73 ] / xx [ 106 ] + xx [ 8 ] * ( xx [ 107 ] - pm_math_Vector3_dot_ra
( xx + 330 , xx + 351 ) ) ; xx [ 446 ] = xx [ 258 ] ; xx [ 447 ] = xx [ 268 ]
; xx [ 448 ] = xx [ 252 ] ; xx [ 449 ] = xx [ 260 ] ; xx [ 450 ] = xx [ 262 ]
; xx [ 451 ] = xx [ 283 ] ; xx [ 452 ] = xx [ 266 ] ; xx [ 453 ] = xx [ 304 ]
; xx [ 454 ] = xx [ 314 ] ; xx [ 455 ] = xx [ 210 ] ; xx [ 456 ] = xx [ 258 ]
; xx [ 457 ] = xx [ 239 ] * xx [ 381 ] + xx [ 374 ] * ( xx [ 377 ] - ( xx [
284 ] * xx [ 295 ] - xx [ 294 ] * xx [ 367 ] ) ) + xx [ 263 ] * xx [ 257 ] ;
xx [ 458 ] = xx [ 291 ] ; xx [ 459 ] = xx [ 296 ] ; xx [ 460 ] = xx [ 324 ] ;
xx [ 461 ] = xx [ 325 ] ; xx [ 462 ] = xx [ 326 ] ; xx [ 463 ] = xx [ 274 ] ;
xx [ 464 ] = xx [ 306 ] ; xx [ 465 ] = xx [ 315 ] ; xx [ 466 ] = xx [ 225 ] ;
xx [ 467 ] = xx [ 268 ] ; xx [ 468 ] = xx [ 291 ] ; xx [ 469 ] = xx [ 264 ] *
xx [ 395 ] + xx [ 265 ] * xx [ 290 ] + xx [ 271 ] * xx [ 267 ] ; xx [ 470 ] =
xx [ 337 ] ; xx [ 471 ] = xx [ 365 ] ; xx [ 472 ] = xx [ 366 ] ; xx [ 473 ] =
xx [ 368 ] ; xx [ 474 ] = xx [ 276 ] ; xx [ 475 ] = xx [ 307 ] ; xx [ 476 ] =
xx [ 316 ] ; xx [ 477 ] = xx [ 259 ] ; xx [ 478 ] = xx [ 252 ] ; xx [ 479 ] =
xx [ 296 ] ; xx [ 480 ] = xx [ 337 ] ; xx [ 481 ] = xx [ 272 ] * xx [ 199 ] +
xx [ 273 ] * xx [ 292 ] + xx [ 253 ] + xx [ 232 ] * xx [ 251 ] ; xx [ 482 ] =
xx [ 369 ] ; xx [ 483 ] = xx [ 279 ] ; xx [ 484 ] = xx [ 287 ] ; xx [ 485 ] =
xx [ 285 ] ; xx [ 486 ] = xx [ 309 ] ; xx [ 487 ] = xx [ 317 ] ; xx [ 488 ] =
xx [ 269 ] ; xx [ 489 ] = xx [ 260 ] ; xx [ 490 ] = xx [ 324 ] ; xx [ 491 ] =
xx [ 365 ] ; xx [ 492 ] = xx [ 369 ] ; xx [ 493 ] = xx [ 281 ] * xx [ 282 ] ;
xx [ 494 ] = xx [ 370 ] ; xx [ 495 ] = xx [ 261 ] ; xx [ 496 ] = xx [ 286 ] ;
xx [ 497 ] = xx [ 310 ] ; xx [ 498 ] = xx [ 318 ] ; xx [ 499 ] = xx [ 270 ] ;
xx [ 500 ] = xx [ 262 ] ; xx [ 501 ] = xx [ 325 ] ; xx [ 502 ] = xx [ 366 ] ;
xx [ 503 ] = xx [ 279 ] ; xx [ 504 ] = xx [ 370 ] ; xx [ 505 ] = xx [ 289 ] *
xx [ 288 ] ; xx [ 506 ] = xx [ 278 ] ; xx [ 507 ] = xx [ 297 ] ; xx [ 508 ] =
xx [ 311 ] ; xx [ 509 ] = xx [ 319 ] ; xx [ 510 ] = xx [ 275 ] ; xx [ 511 ] =
xx [ 283 ] ; xx [ 512 ] = xx [ 326 ] ; xx [ 513 ] = xx [ 368 ] ; xx [ 514 ] =
xx [ 287 ] ; xx [ 515 ] = xx [ 261 ] ; xx [ 516 ] = xx [ 278 ] ; xx [ 517 ] =
xx [ 37 ] * xx [ 37 ] / xx [ 300 ] + xx [ 293 ] ; xx [ 26 ] = xx [ 52 ] *
state [ 13 ] ; xx [ 46 ] = xx [ 69 ] * state [ 13 ] ; xx [ 184 ] = xx [ 26 ]
; xx [ 185 ] = xx [ 46 ] ; xx [ 186 ] = state [ 13 ] ; xx [ 107 ] =
1.177164589793462e-3 ; xx [ 132 ] = 1.240087521872858e-3 ; xx [ 154 ] =
1.375867795493627e-4 ; xx [ 224 ] = xx [ 107 ] * xx [ 26 ] ; xx [ 225 ] = xx
[ 132 ] * xx [ 46 ] ; xx [ 226 ] = xx [ 154 ] * state [ 13 ] ;
pm_math_Vector3_cross_ra ( xx + 184 , xx + 224 , xx + 230 ) ; xx [ 224 ] = xx
[ 207 ] * state [ 13 ] ; xx [ 225 ] = - ( xx [ 211 ] * state [ 13 ] ) ; xx [
226 ] = xx [ 213 ] * state [ 13 ] ; pm_math_Vector3_cross_ra ( xx + 184 , xx
+ 224 , xx + 205 ) ; xx [ 176 ] = xx [ 183 ] * xx [ 205 ] ; xx [ 179 ] = xx [
183 ] * xx [ 206 ] ; xx [ 190 ] = xx [ 183 ] * xx [ 207 ] ; xx [ 205 ] = xx [
176 ] ; xx [ 206 ] = xx [ 179 ] ; xx [ 207 ] = xx [ 190 ] ; xx [ 199 ] = xx [
52 ] * xx [ 230 ] + xx [ 69 ] * xx [ 231 ] + xx [ 232 ] +
pm_math_Vector3_dot_ra ( xx + 219 , xx + 205 ) ; xx [ 205 ] = xx [ 199 ] / xx
[ 131 ] ; xx [ 206 ] = xx [ 152 ] * state [ 15 ] ; xx [ 207 ] = xx [ 161 ] *
state [ 15 ] ; xx [ 219 ] = - xx [ 206 ] ; xx [ 220 ] = - xx [ 207 ] ; xx [
221 ] = - state [ 15 ] ; xx [ 224 ] = - ( xx [ 248 ] * state [ 15 ] ) ; xx [
225 ] = xx [ 249 ] * state [ 15 ] ; xx [ 226 ] = - ( xx [ 250 ] * state [ 15
] ) ; pm_math_Vector3_cross_ra ( xx + 219 , xx + 224 , xx + 230 ) ; xx [ 210
] = xx [ 183 ] * xx [ 230 ] ; xx [ 211 ] = xx [ 183 ] * xx [ 231 ] ; xx [ 213
] = xx [ 183 ] * xx [ 232 ] ; xx [ 224 ] = xx [ 210 ] ; xx [ 225 ] = xx [ 211
] ; xx [ 226 ] = xx [ 213 ] ; xx [ 230 ] = - ( xx [ 107 ] * xx [ 206 ] ) ; xx
[ 231 ] = - ( xx [ 132 ] * xx [ 207 ] ) ; xx [ 232 ] = - ( xx [ 154 ] * state
[ 15 ] ) ; pm_math_Vector3_cross_ra ( xx + 219 , xx + 230 , xx + 248 ) ; xx [
107 ] = pm_math_Vector3_dot_ra ( xx + 254 , xx + 224 ) - ( xx [ 152 ] * xx [
248 ] + xx [ 161 ] * xx [ 249 ] + xx [ 250 ] ) ; xx [ 132 ] = xx [ 107 ] / xx
[ 131 ] ; xx [ 224 ] = xx [ 210 ] + xx [ 191 ] * xx [ 132 ] ; xx [ 225 ] = xx
[ 211 ] - xx [ 208 ] * xx [ 132 ] ; xx [ 226 ] = xx [ 213 ] + xx [ 209 ] * xx
[ 132 ] ; pm_math_Quaternion_xform_ra ( xx + 166 , xx + 224 , xx + 230 ) ; xx
[ 224 ] = xx [ 176 ] - xx [ 148 ] * xx [ 205 ] ; xx [ 225 ] = xx [ 179 ] + xx
[ 149 ] * xx [ 205 ] ; xx [ 226 ] = xx [ 190 ] - xx [ 150 ] * xx [ 205 ] ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 224 , xx + 248 ) ; xx [ 224 ] =
xx [ 230 ] + xx [ 248 ] ; xx [ 225 ] = xx [ 231 ] + xx [ 249 ] ; xx [ 226 ] =
xx [ 232 ] + xx [ 250 ] ; xx [ 154 ] = pm_math_Vector3_dot_ra ( xx + 145 , xx
+ 224 ) / xx [ 151 ] ; xx [ 224 ] = xx [ 136 ] * xx [ 154 ] ; xx [ 225 ] = -
( xx [ 143 ] * xx [ 154 ] ) ; xx [ 226 ] = xx [ 144 ] * xx [ 154 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx + 224 , xx + 230 ) ; xx [
183 ] = xx [ 205 ] + pm_math_Vector3_dot_ra ( xx + 140 , xx + 230 ) ; xx [
301 ] = 0.9937815184430843 ; xx [ 302 ] = - 0.1113476250326878 ; xx [ 303 ] =
- 7.33437165678652e-7 ; xx [ 304 ] = 0.1113476250339316 ; xx [ 305 ] =
0.9937815184412861 ; xx [ 306 ] = 1.958191148976679e-6 ; xx [ 307 ] = xx [
136 ] ; xx [ 308 ] = - xx [ 143 ] ; xx [ 309 ] = xx [ 144 ] ; xx [ 205 ] = xx
[ 177 ] * xx [ 26 ] - xx [ 165 ] * state [ 13 ] ; xx [ 215 ] = xx [ 46 ] * xx
[ 165 ] - xx [ 26 ] * xx [ 174 ] ; xx [ 165 ] = xx [ 174 ] * state [ 13 ] -
xx [ 177 ] * xx [ 46 ] ; xx [ 174 ] = xx [ 26 ] * xx [ 180 ] - xx [ 178 ] *
state [ 13 ] ; xx [ 177 ] = xx [ 178 ] * xx [ 46 ] - xx [ 26 ] * xx [ 172 ] ;
xx [ 178 ] = xx [ 172 ] * state [ 13 ] - xx [ 46 ] * xx [ 180 ] ; xx [ 172 ]
= xx [ 26 ] * xx [ 173 ] - xx [ 182 ] * state [ 13 ] ; xx [ 180 ] = xx [ 46 ]
* xx [ 182 ] - xx [ 175 ] * xx [ 26 ] ; xx [ 182 ] = xx [ 175 ] * state [ 13
] - xx [ 46 ] * xx [ 173 ] ; xx [ 310 ] = xx [ 205 ] * state [ 13 ] - xx [ 46
] * xx [ 215 ] ; xx [ 311 ] = xx [ 26 ] * xx [ 215 ] - xx [ 165 ] * state [
13 ] ; xx [ 312 ] = xx [ 46 ] * xx [ 165 ] - xx [ 26 ] * xx [ 205 ] ; xx [
313 ] = xx [ 174 ] * state [ 13 ] - xx [ 46 ] * xx [ 177 ] ; xx [ 314 ] = xx
[ 26 ] * xx [ 177 ] - xx [ 178 ] * state [ 13 ] ; xx [ 315 ] = xx [ 46 ] * xx
[ 178 ] - xx [ 26 ] * xx [ 174 ] ; xx [ 316 ] = xx [ 172 ] * state [ 13 ] -
xx [ 46 ] * xx [ 180 ] ; xx [ 317 ] = xx [ 26 ] * xx [ 180 ] - xx [ 182 ] *
state [ 13 ] ; xx [ 318 ] = xx [ 46 ] * xx [ 182 ] - xx [ 26 ] * xx [ 172 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 301 , xx + 310 , xx + 518 ) ; xx [ 172 ]
= 0.9999999999934777 ; xx [ 173 ] = 3.609878879817785e-6 ; xx [ 174 ] = -
1.171965347546156e-7 ; pm_math_Matrix3x3_xform_ra ( xx + 518 , xx + 172 , xx
+ 230 ) ; xx [ 26 ] = xx [ 39 ] * state [ 7 ] ; xx [ 46 ] = xx [ 38 ] * state
[ 7 ] ; xx [ 165 ] = xx [ 58 ] * xx [ 59 ] ; xx [ 175 ] = xx [ 57 ] * xx [ 60
] ; xx [ 177 ] = xx [ 9 ] * ( xx [ 165 ] - xx [ 175 ] ) ; xx [ 178 ] = xx [
57 ] * xx [ 57 ] ; xx [ 180 ] = ( xx [ 178 ] + xx [ 58 ] * xx [ 58 ] ) * xx [
9 ] - xx [ 3 ] ; xx [ 182 ] = xx [ 46 ] * xx [ 177 ] - xx [ 26 ] * xx [ 180 ]
; xx [ 205 ] = xx [ 40 ] * state [ 7 ] ; xx [ 215 ] = xx [ 58 ] * xx [ 60 ] ;
xx [ 228 ] = xx [ 57 ] * xx [ 59 ] ; xx [ 248 ] = ( xx [ 215 ] + xx [ 228 ] )
* xx [ 9 ] ; xx [ 249 ] = xx [ 205 ] * xx [ 180 ] - xx [ 248 ] * xx [ 46 ] ;
xx [ 250 ] = xx [ 248 ] * xx [ 26 ] - xx [ 205 ] * xx [ 177 ] ; xx [ 252 ] =
( xx [ 178 ] + xx [ 59 ] * xx [ 59 ] ) * xx [ 9 ] - xx [ 3 ] ; xx [ 253 ] = (
xx [ 165 ] + xx [ 175 ] ) * xx [ 9 ] ; xx [ 165 ] = xx [ 46 ] * xx [ 252 ] -
xx [ 253 ] * xx [ 26 ] ; xx [ 175 ] = xx [ 59 ] * xx [ 60 ] ; xx [ 254 ] = xx
[ 57 ] * xx [ 58 ] ; xx [ 255 ] = xx [ 9 ] * ( xx [ 175 ] - xx [ 254 ] ) ; xx
[ 256 ] = xx [ 253 ] * xx [ 205 ] - xx [ 46 ] * xx [ 255 ] ; xx [ 258 ] = xx
[ 26 ] * xx [ 255 ] - xx [ 205 ] * xx [ 252 ] ; xx [ 259 ] = ( xx [ 175 ] +
xx [ 254 ] ) * xx [ 9 ] ; xx [ 175 ] = xx [ 9 ] * ( xx [ 215 ] - xx [ 228 ] )
; xx [ 215 ] = xx [ 259 ] * xx [ 46 ] - xx [ 26 ] * xx [ 175 ] ; xx [ 228 ] =
( xx [ 178 ] + xx [ 60 ] * xx [ 60 ] ) * xx [ 9 ] - xx [ 3 ] ; xx [ 178 ] =
xx [ 205 ] * xx [ 175 ] - xx [ 46 ] * xx [ 228 ] ; xx [ 254 ] = xx [ 26 ] *
xx [ 228 ] - xx [ 259 ] * xx [ 205 ] ; xx [ 310 ] = xx [ 26 ] * xx [ 182 ] -
xx [ 205 ] * xx [ 249 ] ; xx [ 311 ] = xx [ 205 ] * xx [ 250 ] - xx [ 46 ] *
xx [ 182 ] ; xx [ 312 ] = xx [ 46 ] * xx [ 249 ] - xx [ 26 ] * xx [ 250 ] ;
xx [ 313 ] = xx [ 26 ] * xx [ 165 ] - xx [ 205 ] * xx [ 256 ] ; xx [ 314 ] =
xx [ 205 ] * xx [ 258 ] - xx [ 46 ] * xx [ 165 ] ; xx [ 315 ] = xx [ 46 ] *
xx [ 256 ] - xx [ 26 ] * xx [ 258 ] ; xx [ 316 ] = xx [ 26 ] * xx [ 215 ] -
xx [ 205 ] * xx [ 178 ] ; xx [ 317 ] = xx [ 205 ] * xx [ 254 ] - xx [ 46 ] *
xx [ 215 ] ; xx [ 318 ] = xx [ 46 ] * xx [ 178 ] - xx [ 26 ] * xx [ 254 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 310 , xx + 93 , xx + 527 ) ; xx [ 93 ] =
- xx [ 528 ] ; xx [ 94 ] = - xx [ 531 ] ; xx [ 95 ] = - xx [ 534 ] ; xx [ 96
] = - xx [ 46 ] ; xx [ 97 ] = - xx [ 26 ] ; xx [ 98 ] = - xx [ 205 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 31 , xx + 96 , xx + 99 ) ; xx [ 165
] = xx [ 99 ] * xx [ 49 ] ; xx [ 178 ] = xx [ 101 ] * xx [ 50 ] + xx [ 99 ] *
xx [ 48 ] ; xx [ 182 ] = xx [ 49 ] * xx [ 101 ] ; xx [ 260 ] = - xx [ 165 ] ;
xx [ 261 ] = xx [ 178 ] ; xx [ 262 ] = - xx [ 182 ] ;
pm_math_Vector3_cross_ra ( xx + 48 , xx + 260 , xx + 268 ) ; xx [ 260 ] = xx
[ 101 ] + xx [ 9 ] * ( xx [ 268 ] - xx [ 47 ] * xx [ 165 ] ) ; xx [ 261 ] = (
xx [ 178 ] * xx [ 47 ] + xx [ 269 ] ) * xx [ 9 ] ; xx [ 262 ] = xx [ 9 ] * (
xx [ 270 ] - xx [ 47 ] * xx [ 182 ] ) - xx [ 99 ] ; pm_math_Vector3_cross_ra
( xx + 184 , xx + 172 , xx + 268 ) ; pm_math_Quaternion_xform_ra ( xx + 65 ,
xx + 268 , xx + 274 ) ; xx [ 165 ] = 3.002298846485513 ; xx [ 178 ] =
85.94366926962347 ; xx [ 182 ] = 0.0 ; xx [ 215 ] = state [ 6 ] + xx [ 9 ] ;
if ( xx [ 182 ] < xx [ 215 ] ) xx [ 215 ] = xx [ 182 ] ; xx [ 249 ] =
1.74532925199433e-3 ; xx [ 250 ] = - ( xx [ 215 ] / xx [ 249 ] ) ; if ( xx [
3 ] < xx [ 250 ] ) xx [ 250 ] = xx [ 3 ] ; xx [ 254 ] = 3.0 ; xx [ 256 ] =
5729.577951308232 ; xx [ 258 ] = xx [ 256 ] * state [ 7 ] ; xx [ 263 ] =
5.729577951308232e5 ; xx [ 266 ] = xx [ 250 ] * xx [ 250 ] * ( xx [ 254 ] -
xx [ 9 ] * xx [ 250 ] ) * ( ( - xx [ 215 ] == xx [ 182 ] ? xx [ 182 ] : - xx
[ 258 ] ) - xx [ 263 ] * xx [ 215 ] ) ; if ( xx [ 182 ] > xx [ 266 ] ) xx [
266 ] = xx [ 182 ] ; xx [ 215 ] = state [ 6 ] + xx [ 3 ] ; if ( xx [ 182 ] >
xx [ 215 ] ) xx [ 215 ] = xx [ 182 ] ; xx [ 250 ] = xx [ 215 ] / xx [ 249 ] ;
if ( xx [ 3 ] < xx [ 250 ] ) xx [ 250 ] = xx [ 3 ] ; xx [ 268 ] = ( xx [ 263
] * xx [ 215 ] + ( xx [ 215 ] == xx [ 182 ] ? xx [ 182 ] : xx [ 258 ] ) ) *
xx [ 250 ] * xx [ 250 ] * ( xx [ 254 ] - xx [ 9 ] * xx [ 250 ] ) ; if ( xx [
182 ] > xx [ 268 ] ) xx [ 268 ] = xx [ 182 ] ; xx [ 215 ] = input [ 1 ] - xx
[ 165 ] * state [ 6 ] - xx [ 178 ] * state [ 7 ] + xx [ 266 ] - xx [ 268 ] ;
xx [ 268 ] = - ( xx [ 53 ] * xx [ 46 ] ) ; xx [ 269 ] = - ( xx [ 56 ] * xx [
26 ] ) ; xx [ 270 ] = - ( xx [ 78 ] * xx [ 205 ] ) ; pm_math_Vector3_cross_ra
( xx + 96 , xx + 268 , xx + 285 ) ; xx [ 26 ] = xx [ 100 ] + state [ 9 ] ; xx
[ 268 ] = xx [ 99 ] ; xx [ 269 ] = xx [ 26 ] ; xx [ 270 ] = xx [ 101 ] ; xx [
290 ] = xx [ 54 ] * xx [ 99 ] ; xx [ 291 ] = xx [ 26 ] * xx [ 162 ] ; xx [
292 ] = xx [ 102 ] * xx [ 101 ] ; pm_math_Vector3_cross_ra ( xx + 268 , xx +
290 , xx + 295 ) ; xx [ 46 ] = xx [ 295 ] - xx [ 54 ] * xx [ 101 ] * state [
9 ] ; pm_math_Vector3_cross_ra ( xx + 96 , xx + 137 , xx + 268 ) ;
pm_math_Vector3_cross_ra ( xx + 96 , xx + 268 , xx + 290 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 31 , xx + 290 , xx + 268 ) ; xx [
53 ] = xx [ 27 ] * xx [ 270 ] ; xx [ 56 ] = xx [ 296 ] - xx [ 133 ] * xx [ 53
] ; xx [ 78 ] = xx [ 56 ] / xx [ 155 ] ; xx [ 205 ] = xx [ 297 ] + xx [ 102 ]
* xx [ 99 ] * state [ 9 ] ; xx [ 290 ] = xx [ 46 ] ; xx [ 291 ] = xx [ 296 ]
- xx [ 162 ] * xx [ 78 ] ; xx [ 292 ] = xx [ 205 ] ;
pm_math_Quaternion_xform_ra ( xx + 31 , xx + 290 , xx + 324 ) ; xx [ 250 ] =
xx [ 133 ] * state [ 9 ] ; xx [ 258 ] = ( xx [ 268 ] - ( xx [ 100 ] + xx [ 26
] ) * xx [ 250 ] ) * xx [ 27 ] ; xx [ 266 ] = xx [ 27 ] * ( xx [ 269 ] + ( xx
[ 99 ] + xx [ 99 ] ) * xx [ 250 ] ) ; xx [ 268 ] = xx [ 258 ] ; xx [ 269 ] =
xx [ 266 ] ; xx [ 270 ] = xx [ 53 ] + xx [ 212 ] * xx [ 78 ] ;
pm_math_Quaternion_xform_ra ( xx + 31 , xx + 268 , xx + 290 ) ;
pm_math_Vector3_cross_ra ( xx + 137 , xx + 290 , xx + 268 ) ; xx [ 351 ] = xx
[ 86 ] * state [ 7 ] ; xx [ 352 ] = - ( xx [ 89 ] * state [ 7 ] ) ; xx [ 353
] = - ( xx [ 91 ] * state [ 7 ] ) ; pm_math_Vector3_cross_ra ( xx + 96 , xx +
351 , xx + 365 ) ; pm_math_Matrix3x3_xform_ra ( xx + 112 , xx + 365 , xx +
351 ) ; xx [ 112 ] = xx [ 285 ] + xx [ 324 ] + xx [ 268 ] + xx [ 351 ] ; xx [
113 ] = xx [ 286 ] + xx [ 325 ] + xx [ 269 ] + xx [ 352 ] ; xx [ 114 ] = xx [
287 ] + xx [ 326 ] + xx [ 270 ] + xx [ 353 ] ; pm_math_Matrix3x3_xform_ra (
xx + 121 , xx + 365 , xx + 115 ) ; xx [ 118 ] = xx [ 290 ] + xx [ 115 ] ; xx
[ 119 ] = xx [ 291 ] + xx [ 116 ] ; xx [ 120 ] = xx [ 292 ] + xx [ 117 ] ; xx
[ 121 ] = ( xx [ 215 ] - ( pm_math_Vector3_dot_ra ( xx + 41 , xx + 112 ) +
pm_math_Vector3_dot_ra ( xx + 103 , xx + 118 ) ) ) / xx [ 79 ] ; xx [ 112 ] =
- ( xx [ 38 ] * xx [ 121 ] ) ; xx [ 113 ] = - ( xx [ 39 ] * xx [ 121 ] ) ; xx
[ 114 ] = - ( xx [ 40 ] * xx [ 121 ] ) ; pm_math_Quaternion_inverseXform_ra (
xx + 31 , xx + 112 , xx + 118 ) ; pm_math_Vector3_cross_ra ( xx + 112 , xx +
137 , xx + 122 ) ; xx [ 112 ] = xx [ 86 ] * xx [ 121 ] + xx [ 365 ] + xx [
122 ] ; xx [ 113 ] = xx [ 366 ] - xx [ 89 ] * xx [ 121 ] + xx [ 123 ] ; xx [
114 ] = xx [ 367 ] - xx [ 91 ] * xx [ 121 ] + xx [ 124 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 31 , xx + 112 , xx + 122 ) ; xx [
112 ] = xx [ 78 ] + xx [ 298 ] * xx [ 119 ] - xx [ 299 ] * xx [ 124 ] ; xx [
78 ] = xx [ 55 ] * state [ 9 ] * state [ 9 ] ; xx [ 55 ] = xx [ 9 ] * xx [ 87
] * state [ 9 ] * state [ 9 ] ; xx [ 87 ] = xx [ 9 ] * xx [ 92 ] * state [ 9
] * state [ 9 ] ; xx [ 92 ] = xx [ 47 ] * xx [ 47 ] ; xx [ 113 ] = xx [ 48 ]
* xx [ 49 ] ; xx [ 114 ] = xx [ 47 ] * xx [ 50 ] ; xx [ 118 ] = xx [ 48 ] *
xx [ 50 ] ; xx [ 119 ] = xx [ 49 ] * xx [ 50 ] ; xx [ 120 ] = xx [ 47 ] * xx
[ 48 ] ; xx [ 536 ] = ( xx [ 92 ] + xx [ 48 ] * xx [ 48 ] ) * xx [ 9 ] - xx [
3 ] ; xx [ 537 ] = xx [ 9 ] * ( xx [ 113 ] - xx [ 114 ] ) ; xx [ 538 ] = ( xx
[ 118 ] + xx [ 181 ] ) * xx [ 9 ] ; xx [ 539 ] = ( xx [ 113 ] + xx [ 114 ] )
* xx [ 9 ] ; xx [ 540 ] = ( xx [ 92 ] + xx [ 49 ] * xx [ 49 ] ) * xx [ 9 ] -
xx [ 3 ] ; xx [ 541 ] = xx [ 9 ] * ( xx [ 119 ] - xx [ 120 ] ) ; xx [ 542 ] =
xx [ 9 ] * ( xx [ 118 ] - xx [ 181 ] ) ; xx [ 543 ] = ( xx [ 119 ] + xx [ 120
] ) * xx [ 9 ] ; xx [ 544 ] = ( xx [ 92 ] + xx [ 50 ] * xx [ 50 ] ) * xx [ 9
] - xx [ 3 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 536 , xx + 99 , xx + 545
) ; xx [ 92 ] = xx [ 9 ] * xx [ 85 ] * state [ 9 ] * state [ 9 ] ; xx [ 85 ]
= xx [ 9 ] * xx [ 90 ] * state [ 9 ] * state [ 9 ] ; xx [ 90 ] = xx [ 88 ] *
state [ 9 ] * state [ 9 ] ; xx [ 536 ] = xx [ 527 ] - ( xx [ 78 ] * xx [ 180
] + xx [ 55 ] * xx [ 177 ] - xx [ 248 ] * xx [ 87 ] ) - xx [ 9 ] * xx [ 547 ]
* state [ 9 ] ; xx [ 537 ] = xx [ 528 ] ; xx [ 538 ] = xx [ 529 ] - ( xx [ 92
] * xx [ 180 ] - xx [ 85 ] * xx [ 177 ] + xx [ 248 ] * xx [ 90 ] ) + xx [ 9 ]
* xx [ 545 ] * state [ 9 ] ; xx [ 539 ] = xx [ 530 ] - ( xx [ 253 ] * xx [ 78
] + xx [ 55 ] * xx [ 252 ] - xx [ 87 ] * xx [ 255 ] ) - xx [ 9 ] * xx [ 550 ]
* state [ 9 ] ; xx [ 540 ] = xx [ 531 ] ; xx [ 541 ] = xx [ 532 ] - ( xx [
253 ] * xx [ 92 ] - xx [ 85 ] * xx [ 252 ] + xx [ 255 ] * xx [ 90 ] ) + xx [
9 ] * xx [ 548 ] * state [ 9 ] ; xx [ 542 ] = xx [ 533 ] - ( xx [ 175 ] * xx
[ 78 ] + xx [ 259 ] * xx [ 55 ] - xx [ 87 ] * xx [ 228 ] ) - xx [ 9 ] * xx [
553 ] * state [ 9 ] ; xx [ 543 ] = xx [ 534 ] ; xx [ 544 ] = xx [ 535 ] - (
xx [ 92 ] * xx [ 175 ] - xx [ 259 ] * xx [ 85 ] + xx [ 90 ] * xx [ 228 ] ) +
xx [ 9 ] * xx [ 551 ] * state [ 9 ] ; pm_math_Matrix3x3_xform_ra ( xx + 536 ,
xx + 187 , xx + 99 ) ; pm_math_Matrix3x3_xform_ra ( xx + 310 , xx + 137 , xx
+ 118 ) ; xx [ 122 ] = 3.111229144988866e-4 ; xx [ 123 ] = -
5.13791368061354e-4 ; xx [ 124 ] = 0.1059487286521934 ;
pm_math_Quaternion_xform_ra ( xx + 57 , xx + 122 , xx + 125 ) ; xx [ 55 ] =
state [ 7 ] * state [ 7 ] ; xx [ 78 ] = state [ 9 ] * state [ 9 ] ; xx [ 122
] = xx [ 78 ] * ( ( xx [ 203 ] + xx [ 25 ] * xx [ 134 ] ) * xx [ 9 ] - xx [
133 ] ) ; xx [ 123 ] = ( xx [ 130 ] - xx [ 135 ] * xx [ 35 ] ) * xx [ 9 ] *
xx [ 78 ] ; xx [ 124 ] = xx [ 9 ] * ( xx [ 134 ] * xx [ 35 ] + xx [ 197 ] ) *
xx [ 78 ] ; pm_math_Quaternion_xform_ra ( xx + 57 , xx + 122 , xx + 128 ) ;
xx [ 122 ] = xx [ 9 ] * xx [ 198 ] * state [ 9 ] ; xx [ 123 ] = xx [ 9 ] * xx
[ 202 ] * state [ 9 ] ; xx [ 124 ] = xx [ 204 ] * state [ 9 ] ;
pm_math_Vector3_cross_ra ( xx + 96 , xx + 122 , xx + 133 ) ;
pm_math_Quaternion_xform_ra ( xx + 57 , xx + 133 , xx + 96 ) ; xx [ 25 ] =
7.54929787758902e-8 ; xx [ 35 ] = - 0.0199999879359847 ; xx [ 57 ] = xx [ 25
] ; xx [ 58 ] = xx [ 35 ] ; xx [ 59 ] = - 0.05090199292298814 ;
pm_math_Matrix3x3_xform_ra ( xx + 518 , xx + 57 , xx + 122 ) ; xx [ 57 ] =
9.26085821183738e-9 ; xx [ 58 ] = 3.402090196577216e-8 ; xx [ 59 ] = -
1.576054485987831e-14 ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 57 , xx
+ 133 ) ; xx [ 57 ] = state [ 13 ] * state [ 13 ] ; xx [ 58 ] = xx [ 133 ] *
xx [ 57 ] ; xx [ 59 ] = xx [ 134 ] * xx [ 57 ] ; xx [ 60 ] = xx [ 135 ] * xx
[ 57 ] ; pm_math_Quaternion_xform_ra ( xx + 61 , xx + 58 , xx + 133 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 166 , xx + 224 , xx + 57 ) ; xx [
60 ] = xx [ 132 ] + pm_math_Vector3_dot_ra ( xx + 330 , xx + 57 ) ; xx [ 57 ]
= xx [ 153 ] * state [ 15 ] - xx [ 163 ] * xx [ 206 ] ; xx [ 58 ] = xx [ 206
] * xx [ 159 ] - xx [ 207 ] * xx [ 153 ] ; xx [ 59 ] = xx [ 159 ] * state [
15 ] - xx [ 163 ] * xx [ 207 ] ; xx [ 78 ] = xx [ 164 ] * state [ 15 ] - xx [
206 ] * xx [ 170 ] ; xx [ 85 ] = xx [ 206 ] * xx [ 157 ] - xx [ 164 ] * xx [
207 ] ; xx [ 87 ] = xx [ 157 ] * state [ 15 ] - xx [ 207 ] * xx [ 170 ] ; xx
[ 88 ] = xx [ 171 ] * state [ 15 ] - xx [ 206 ] * xx [ 158 ] ; xx [ 90 ] = xx
[ 160 ] * xx [ 206 ] - xx [ 207 ] * xx [ 171 ] ; xx [ 92 ] = xx [ 160 ] *
state [ 15 ] - xx [ 207 ] * xx [ 158 ] ; xx [ 310 ] = - ( xx [ 57 ] * state [
15 ] - xx [ 207 ] * xx [ 58 ] ) ; xx [ 311 ] = - ( xx [ 206 ] * xx [ 58 ] +
xx [ 59 ] * state [ 15 ] ) ; xx [ 312 ] = xx [ 59 ] * xx [ 207 ] + xx [ 57 ]
* xx [ 206 ] ; xx [ 313 ] = - ( xx [ 78 ] * state [ 15 ] - xx [ 207 ] * xx [
85 ] ) ; xx [ 314 ] = - ( xx [ 206 ] * xx [ 85 ] + xx [ 87 ] * state [ 15 ] )
; xx [ 315 ] = xx [ 87 ] * xx [ 207 ] + xx [ 78 ] * xx [ 206 ] ; xx [ 316 ] =
- ( xx [ 88 ] * state [ 15 ] - xx [ 207 ] * xx [ 90 ] ) ; xx [ 317 ] = - ( xx
[ 206 ] * xx [ 90 ] + xx [ 92 ] * state [ 15 ] ) ; xx [ 318 ] = xx [ 92 ] *
xx [ 207 ] + xx [ 88 ] * xx [ 206 ] ; pm_math_Matrix3x3_compose_ra ( xx + 301
, xx + 310 , xx + 527 ) ; pm_math_Matrix3x3_xform_ra ( xx + 527 , xx + 172 ,
xx + 57 ) ; xx [ 78 ] = xx [ 201 ] * state [ 3 ] ; xx [ 85 ] = xx [ 241 ] *
xx [ 243 ] ; xx [ 87 ] = xx [ 240 ] * xx [ 242 ] ; xx [ 88 ] = ( xx [ 85 ] +
xx [ 87 ] ) * xx [ 9 ] ; xx [ 90 ] = xx [ 81 ] * state [ 3 ] ; xx [ 92 ] = xx
[ 240 ] * xx [ 240 ] ; xx [ 113 ] = ( xx [ 92 ] + xx [ 241 ] * xx [ 241 ] ) *
xx [ 9 ] - xx [ 3 ] ; xx [ 114 ] = xx [ 88 ] * xx [ 90 ] + xx [ 78 ] * xx [
113 ] ; xx [ 132 ] = xx [ 200 ] * state [ 3 ] ; xx [ 153 ] = xx [ 241 ] * xx
[ 242 ] ; xx [ 157 ] = xx [ 240 ] * xx [ 243 ] ; xx [ 158 ] = xx [ 9 ] * ( xx
[ 153 ] - xx [ 157 ] ) ; xx [ 159 ] = xx [ 132 ] * xx [ 113 ] + xx [ 90 ] *
xx [ 158 ] ; xx [ 160 ] = xx [ 78 ] * xx [ 158 ] - xx [ 88 ] * xx [ 132 ] ;
xx [ 163 ] = xx [ 242 ] * xx [ 243 ] ; xx [ 164 ] = xx [ 240 ] * xx [ 241 ] ;
xx [ 170 ] = xx [ 9 ] * ( xx [ 163 ] - xx [ 164 ] ) ; xx [ 171 ] = ( xx [ 153
] + xx [ 157 ] ) * xx [ 9 ] ; xx [ 153 ] = xx [ 90 ] * xx [ 170 ] + xx [ 171
] * xx [ 78 ] ; xx [ 157 ] = ( xx [ 92 ] + xx [ 242 ] * xx [ 242 ] ) * xx [ 9
] - xx [ 3 ] ; xx [ 175 ] = xx [ 171 ] * xx [ 132 ] + xx [ 90 ] * xx [ 157 ]
; xx [ 177 ] = xx [ 78 ] * xx [ 157 ] - xx [ 132 ] * xx [ 170 ] ; xx [ 180 ]
= ( xx [ 92 ] + xx [ 243 ] * xx [ 243 ] ) * xx [ 9 ] - xx [ 3 ] ; xx [ 92 ] =
xx [ 9 ] * ( xx [ 85 ] - xx [ 87 ] ) ; xx [ 85 ] = xx [ 90 ] * xx [ 180 ] +
xx [ 78 ] * xx [ 92 ] ; xx [ 87 ] = ( xx [ 163 ] + xx [ 164 ] ) * xx [ 9 ] ;
xx [ 163 ] = xx [ 132 ] * xx [ 92 ] + xx [ 87 ] * xx [ 90 ] ; xx [ 164 ] = xx
[ 87 ] * xx [ 78 ] - xx [ 132 ] * xx [ 180 ] ; xx [ 301 ] = - ( xx [ 78 ] *
xx [ 114 ] + xx [ 132 ] * xx [ 159 ] ) ; xx [ 302 ] = - ( xx [ 90 ] * xx [
159 ] + xx [ 78 ] * xx [ 160 ] ) ; xx [ 303 ] = xx [ 132 ] * xx [ 160 ] - xx
[ 90 ] * xx [ 114 ] ; xx [ 304 ] = - ( xx [ 78 ] * xx [ 153 ] + xx [ 132 ] *
xx [ 175 ] ) ; xx [ 305 ] = - ( xx [ 90 ] * xx [ 175 ] + xx [ 78 ] * xx [ 177
] ) ; xx [ 306 ] = xx [ 132 ] * xx [ 177 ] - xx [ 90 ] * xx [ 153 ] ; xx [
307 ] = - ( xx [ 78 ] * xx [ 85 ] + xx [ 132 ] * xx [ 163 ] ) ; xx [ 308 ] =
- ( xx [ 90 ] * xx [ 163 ] + xx [ 78 ] * xx [ 164 ] ) ; xx [ 309 ] = xx [ 132
] * xx [ 164 ] - xx [ 90 ] * xx [ 85 ] ; pm_math_Matrix3x3_compose_ra ( xx +
301 , xx + 339 , xx + 310 ) ; xx [ 187 ] = xx [ 311 ] ; xx [ 188 ] = xx [ 314
] ; xx [ 189 ] = xx [ 317 ] ; xx [ 202 ] = - xx [ 90 ] ; xx [ 203 ] = xx [
132 ] ; xx [ 204 ] = xx [ 78 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
233 , xx + 202 , xx + 224 ) ; xx [ 85 ] = xx [ 224 ] * xx [ 246 ] ; xx [ 114
] = xx [ 226 ] * xx [ 247 ] + xx [ 224 ] * xx [ 245 ] ; xx [ 153 ] = xx [ 246
] * xx [ 226 ] ; xx [ 268 ] = xx [ 85 ] ; xx [ 269 ] = - xx [ 114 ] ; xx [
270 ] = xx [ 153 ] ; pm_math_Vector3_cross_ra ( xx + 245 , xx + 268 , xx +
290 ) ; xx [ 268 ] = ( xx [ 244 ] * xx [ 85 ] + xx [ 290 ] ) * xx [ 9 ] - xx
[ 226 ] ; xx [ 269 ] = xx [ 9 ] * ( xx [ 291 ] - xx [ 114 ] * xx [ 244 ] ) ;
xx [ 270 ] = xx [ 224 ] + ( xx [ 244 ] * xx [ 153 ] + xx [ 292 ] ) * xx [ 9 ]
; pm_math_Vector3_cross_ra ( xx + 219 , xx + 172 , xx + 290 ) ;
pm_math_Quaternion_xform_ra ( xx + 192 , xx + 290 , xx + 172 ) ; xx [ 85 ] =
state [ 2 ] + xx [ 9 ] ; if ( xx [ 182 ] < xx [ 85 ] ) xx [ 85 ] = xx [ 182 ]
; xx [ 114 ] = - ( xx [ 85 ] / xx [ 249 ] ) ; if ( xx [ 3 ] < xx [ 114 ] ) xx
[ 114 ] = xx [ 3 ] ; xx [ 153 ] = xx [ 256 ] * state [ 3 ] ; xx [ 159 ] = xx
[ 114 ] * xx [ 114 ] * ( xx [ 254 ] - xx [ 9 ] * xx [ 114 ] ) * ( ( - xx [ 85
] == xx [ 182 ] ? xx [ 182 ] : - xx [ 153 ] ) - xx [ 263 ] * xx [ 85 ] ) ; if
( xx [ 182 ] > xx [ 159 ] ) xx [ 159 ] = xx [ 182 ] ; xx [ 85 ] = state [ 2 ]
+ xx [ 3 ] ; if ( xx [ 182 ] > xx [ 85 ] ) xx [ 85 ] = xx [ 182 ] ; xx [ 114
] = xx [ 85 ] / xx [ 249 ] ; if ( xx [ 3 ] < xx [ 114 ] ) xx [ 114 ] = xx [ 3
] ; xx [ 160 ] = ( xx [ 263 ] * xx [ 85 ] + ( xx [ 85 ] == xx [ 182 ] ? xx [
182 ] : xx [ 153 ] ) ) * xx [ 114 ] * xx [ 114 ] * ( xx [ 254 ] - xx [ 9 ] *
xx [ 114 ] ) ; if ( xx [ 182 ] > xx [ 160 ] ) xx [ 160 ] = xx [ 182 ] ; xx [
85 ] = input [ 0 ] - xx [ 165 ] * state [ 2 ] - xx [ 178 ] * state [ 3 ] + xx
[ 159 ] - xx [ 160 ] ; xx [ 163 ] = - ( xx [ 277 ] * xx [ 90 ] ) ; xx [ 164 ]
= xx [ 328 ] * xx [ 132 ] ; xx [ 165 ] = xx [ 329 ] * xx [ 78 ] ;
pm_math_Vector3_cross_ra ( xx + 202 , xx + 163 , xx + 248 ) ; xx [ 78 ] = xx
[ 225 ] + state [ 5 ] ; xx [ 163 ] = xx [ 224 ] ; xx [ 164 ] = xx [ 78 ] ; xx
[ 165 ] = xx [ 226 ] ; xx [ 252 ] = xx [ 54 ] * xx [ 224 ] ; xx [ 253 ] = xx
[ 78 ] * xx [ 162 ] ; xx [ 254 ] = xx [ 102 ] * xx [ 226 ] ;
pm_math_Vector3_cross_ra ( xx + 163 , xx + 252 , xx + 277 ) ; xx [ 90 ] = xx
[ 277 ] - xx [ 54 ] * xx [ 226 ] * state [ 5 ] ; pm_math_Vector3_cross_ra (
xx + 202 , xx + 382 , xx + 163 ) ; pm_math_Vector3_cross_ra ( xx + 202 , xx +
163 , xx + 252 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 233 , xx + 252 ,
xx + 163 ) ; xx [ 54 ] = xx [ 27 ] * xx [ 165 ] ; xx [ 114 ] = xx [ 278 ] -
xx [ 378 ] * xx [ 54 ] ; xx [ 132 ] = xx [ 114 ] / xx [ 376 ] ; xx [ 153 ] =
xx [ 279 ] + xx [ 102 ] * xx [ 224 ] * state [ 5 ] ; xx [ 252 ] = xx [ 90 ] ;
xx [ 253 ] = xx [ 278 ] - xx [ 162 ] * xx [ 132 ] ; xx [ 254 ] = xx [ 153 ] ;
pm_math_Quaternion_xform_ra ( xx + 233 , xx + 252 , xx + 290 ) ; xx [ 102 ] =
xx [ 378 ] * state [ 5 ] ; xx [ 159 ] = ( xx [ 163 ] - ( xx [ 225 ] + xx [ 78
] ) * xx [ 102 ] ) * xx [ 27 ] ; xx [ 160 ] = xx [ 27 ] * ( xx [ 164 ] + ( xx
[ 224 ] + xx [ 224 ] ) * xx [ 102 ] ) ; xx [ 163 ] = xx [ 159 ] ; xx [ 164 ]
= xx [ 160 ] ; xx [ 165 ] = xx [ 54 ] + xx [ 396 ] * xx [ 132 ] ;
pm_math_Quaternion_xform_ra ( xx + 233 , xx + 163 , xx + 252 ) ;
pm_math_Vector3_cross_ra ( xx + 382 , xx + 252 , xx + 163 ) ; xx [ 324 ] = -
( xx [ 280 ] * state [ 3 ] ) ; xx [ 325 ] = - ( xx [ 333 ] * state [ 3 ] ) ;
xx [ 326 ] = - ( xx [ 335 ] * state [ 3 ] ) ; pm_math_Vector3_cross_ra ( xx +
202 , xx + 324 , xx + 339 ) ; pm_math_Matrix3x3_xform_ra ( xx + 356 , xx +
339 , xx + 324 ) ; xx [ 342 ] = xx [ 248 ] + xx [ 290 ] + xx [ 163 ] + xx [
324 ] ; xx [ 343 ] = xx [ 249 ] + xx [ 291 ] + xx [ 164 ] + xx [ 325 ] ; xx [
344 ] = xx [ 250 ] + xx [ 292 ] + xx [ 165 ] + xx [ 326 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 385 , xx + 339 , xx + 163 ) ; xx [ 290 ] =
xx [ 252 ] + xx [ 163 ] ; xx [ 291 ] = xx [ 253 ] + xx [ 164 ] ; xx [ 292 ] =
xx [ 254 ] + xx [ 165 ] ; xx [ 27 ] = ( xx [ 85 ] - ( pm_math_Vector3_dot_ra
( xx + 321 , xx + 342 ) + pm_math_Vector3_dot_ra ( xx + 348 , xx + 290 ) ) )
/ xx [ 106 ] ; xx [ 252 ] = - ( xx [ 81 ] * xx [ 27 ] ) ; xx [ 253 ] = xx [
200 ] * xx [ 27 ] ; xx [ 254 ] = xx [ 201 ] * xx [ 27 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 233 , xx + 252 , xx + 290 ) ;
pm_math_Vector3_cross_ra ( xx + 252 , xx + 382 , xx + 342 ) ; xx [ 252 ] = xx
[ 339 ] - xx [ 280 ] * xx [ 27 ] + xx [ 342 ] ; xx [ 253 ] = xx [ 340 ] - xx
[ 333 ] * xx [ 27 ] + xx [ 343 ] ; xx [ 254 ] = xx [ 341 ] - xx [ 335 ] * xx
[ 27 ] + xx [ 344 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 233 , xx +
252 , xx + 342 ) ; xx [ 102 ] = xx [ 132 ] + xx [ 284 ] * xx [ 291 ] - xx [
294 ] * xx [ 344 ] ; xx [ 132 ] = xx [ 327 ] * state [ 5 ] * state [ 5 ] ; xx
[ 175 ] = xx [ 9 ] * xx [ 334 ] * state [ 5 ] * state [ 5 ] ; xx [ 177 ] = xx
[ 9 ] * xx [ 338 ] * state [ 5 ] * state [ 5 ] ; xx [ 178 ] = xx [ 244 ] * xx
[ 244 ] ; xx [ 181 ] = xx [ 245 ] * xx [ 246 ] ; xx [ 197 ] = xx [ 244 ] * xx
[ 247 ] ; xx [ 198 ] = xx [ 245 ] * xx [ 247 ] ; xx [ 206 ] = xx [ 244 ] * xx
[ 246 ] ; xx [ 207 ] = xx [ 246 ] * xx [ 247 ] ; xx [ 228 ] = xx [ 244 ] * xx
[ 245 ] ; xx [ 356 ] = ( xx [ 178 ] + xx [ 245 ] * xx [ 245 ] ) * xx [ 9 ] -
xx [ 3 ] ; xx [ 357 ] = xx [ 9 ] * ( xx [ 181 ] - xx [ 197 ] ) ; xx [ 358 ] =
( xx [ 198 ] + xx [ 206 ] ) * xx [ 9 ] ; xx [ 359 ] = ( xx [ 181 ] + xx [ 197
] ) * xx [ 9 ] ; xx [ 360 ] = ( xx [ 178 ] + xx [ 246 ] * xx [ 246 ] ) * xx [
9 ] - xx [ 3 ] ; xx [ 361 ] = xx [ 9 ] * ( xx [ 207 ] - xx [ 228 ] ) ; xx [
362 ] = xx [ 9 ] * ( xx [ 198 ] - xx [ 206 ] ) ; xx [ 363 ] = ( xx [ 207 ] +
xx [ 228 ] ) * xx [ 9 ] ; xx [ 364 ] = ( xx [ 178 ] + xx [ 247 ] * xx [ 247 ]
) * xx [ 9 ] - xx [ 3 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 356 , xx +
224 , xx + 385 ) ; pm_math_Matrix3x3_xform_ra ( xx + 301 , xx + 382 , xx +
224 ) ; xx [ 252 ] = - 3.057483106867101e-4 ; xx [ 253 ] = -
5.123764043326115e-4 ; xx [ 254 ] = 0.1059486919109176 ;
pm_math_Quaternion_xform_ra ( xx + 240 , xx + 252 , xx + 290 ) ; xx [ 178 ] =
state [ 3 ] * state [ 3 ] ; xx [ 181 ] = state [ 5 ] * state [ 5 ] ; xx [ 252
] = xx [ 181 ] * ( ( xx [ 371 ] + xx [ 80 ] * xx [ 379 ] ) * xx [ 9 ] - xx [
378 ] ) ; xx [ 253 ] = ( xx [ 375 ] - xx [ 380 ] * xx [ 227 ] ) * xx [ 9 ] *
xx [ 181 ] ; xx [ 254 ] = - ( xx [ 9 ] * ( xx [ 379 ] * xx [ 227 ] + xx [ 336
] ) * xx [ 181 ] ) ; pm_math_Quaternion_xform_ra ( xx + 240 , xx + 252 , xx +
301 ) ; xx [ 252 ] = xx [ 9 ] * xx [ 354 ] * state [ 5 ] ; xx [ 253 ] = - (
xx [ 9 ] * xx [ 355 ] * state [ 5 ] ) ; xx [ 254 ] = xx [ 372 ] * state [ 5 ]
; pm_math_Vector3_cross_ra ( xx + 202 , xx + 252 , xx + 304 ) ;
pm_math_Quaternion_xform_ra ( xx + 240 , xx + 304 , xx + 202 ) ; xx [ 240 ] =
xx [ 25 ] ; xx [ 241 ] = xx [ 35 ] ; xx [ 242 ] = - 0.05090199292298809 ;
pm_math_Matrix3x3_xform_ra ( xx + 527 , xx + 240 , xx + 252 ) ; xx [ 240 ] =
9.260862306845838e-9 ; xx [ 241 ] = 3.402090709721697e-8 ; xx [ 242 ] = -
1.576054750645198e-14 ; pm_math_Quaternion_xform_ra ( xx + 166 , xx + 240 ,
xx + 304 ) ; xx [ 25 ] = state [ 15 ] * state [ 15 ] ; xx [ 240 ] = xx [ 304
] * xx [ 25 ] ; xx [ 241 ] = xx [ 305 ] * xx [ 25 ] ; xx [ 242 ] = xx [ 306 ]
* xx [ 25 ] ; pm_math_Quaternion_xform_ra ( xx + 61 , xx + 240 , xx + 304 ) ;
xx [ 61 ] = - 3.609878937216315e-6 ; xx [ 62 ] = 0.9999999999933915 ; xx [ 63
] = - 4.313584738291354e-7 ; pm_math_Matrix3x3_xform_ra ( xx + 527 , xx + 61
, xx + 240 ) ; xx [ 61 ] = 3.609878923338528e-6 ; xx [ 62 ] = -
0.9999999999933913 ; xx [ 63 ] = 4.313584749393584e-7 ;
pm_math_Matrix3x3_xform_ra ( xx + 518 , xx + 61 , xx + 241 ) ; xx [ 61 ] = -
xx [ 10 ] ; xx [ 62 ] = - xx [ 12 ] ; xx [ 63 ] = - xx [ 13 ] ; xx [ 25 ] =
xx [ 10 ] * state [ 1 ] ; xx [ 10 ] = xx [ 12 ] * state [ 1 ] ; xx [ 12 ] =
xx [ 13 ] * state [ 1 ] ; xx [ 307 ] = - xx [ 25 ] ; xx [ 308 ] = - xx [ 10 ]
; xx [ 309 ] = - xx [ 12 ] ; xx [ 318 ] = - ( 0.05271741804498591 * xx [ 25 ]
) ; xx [ 319 ] = - ( 0.05265622862046129 * xx [ 10 ] ) ; xx [ 320 ] = - (
0.01235715180979249 * xx [ 12 ] ) ; pm_math_Vector3_cross_ra ( xx + 307 , xx
+ 318 , xx + 327 ) ; xx [ 13 ] = xx [ 6 ] * input [ 2 ] ; xx [ 35 ] = xx [ 5
] * input [ 2 ] ; xx [ 318 ] = xx [ 327 ] - ( xx [ 4 ] * xx [ 13 ] + xx [ 7 ]
* xx [ 35 ] ) * xx [ 9 ] ; xx [ 319 ] = xx [ 328 ] - xx [ 9 ] * ( xx [ 4 ] *
xx [ 35 ] - xx [ 7 ] * xx [ 13 ] ) ; xx [ 320 ] = xx [ 329 ] - ( input [ 2 ]
- ( xx [ 5 ] * xx [ 35 ] + xx [ 6 ] * xx [ 13 ] ) * xx [ 9 ] ) ; xx [ 4 ] =
0.7974838207830182 ; xx [ 5 ] = - ( xx [ 15 ] * state [ 1 ] ) ; xx [ 6 ] = -
( xx [ 16 ] * state [ 1 ] ) ; xx [ 7 ] = xx [ 24 ] * state [ 1 ] ;
pm_math_Vector3_cross_ra ( xx + 307 , xx + 5 , xx + 327 ) ; xx [ 5 ] = xx [ 4
] * xx [ 327 ] ; xx [ 6 ] = xx [ 4 ] * xx [ 328 ] ; xx [ 7 ] = xx [ 4 ] * xx
[ 329 ] ; xx [ 4 ] = pm_math_Vector3_dot_ra ( xx + 61 , xx + 318 ) +
pm_math_Vector3_dot_ra ( xx + 28 , xx + 5 ) ; xx [ 5 ] = xx [ 19 ] * xx [ 20
] ; xx [ 6 ] = xx [ 18 ] * xx [ 21 ] ; xx [ 7 ] = xx [ 9 ] * ( xx [ 5 ] - xx
[ 6 ] ) ; xx [ 13 ] = xx [ 18 ] * xx [ 18 ] ; xx [ 15 ] = ( xx [ 13 ] + xx [
19 ] * xx [ 19 ] ) * xx [ 9 ] - xx [ 3 ] ; xx [ 16 ] = xx [ 25 ] * xx [ 7 ] -
xx [ 10 ] * xx [ 15 ] ; xx [ 24 ] = xx [ 19 ] * xx [ 21 ] ; xx [ 28 ] = xx [
18 ] * xx [ 20 ] ; xx [ 29 ] = ( xx [ 24 ] + xx [ 28 ] ) * xx [ 9 ] ; xx [ 30
] = xx [ 12 ] * xx [ 15 ] - xx [ 29 ] * xx [ 25 ] ; xx [ 15 ] = xx [ 29 ] *
xx [ 10 ] - xx [ 12 ] * xx [ 7 ] ; xx [ 7 ] = ( xx [ 13 ] + xx [ 20 ] * xx [
20 ] ) * xx [ 9 ] - xx [ 3 ] ; xx [ 29 ] = ( xx [ 5 ] + xx [ 6 ] ) * xx [ 9 ]
; xx [ 5 ] = xx [ 25 ] * xx [ 7 ] - xx [ 29 ] * xx [ 10 ] ; xx [ 6 ] = xx [
20 ] * xx [ 21 ] ; xx [ 35 ] = xx [ 18 ] * xx [ 19 ] ; xx [ 61 ] = xx [ 9 ] *
( xx [ 6 ] - xx [ 35 ] ) ; xx [ 62 ] = xx [ 29 ] * xx [ 12 ] - xx [ 25 ] * xx
[ 61 ] ; xx [ 29 ] = xx [ 10 ] * xx [ 61 ] - xx [ 12 ] * xx [ 7 ] ; xx [ 7 ]
= ( xx [ 6 ] + xx [ 35 ] ) * xx [ 9 ] ; xx [ 6 ] = xx [ 9 ] * ( xx [ 24 ] -
xx [ 28 ] ) ; xx [ 24 ] = xx [ 7 ] * xx [ 25 ] - xx [ 10 ] * xx [ 6 ] ; xx [
28 ] = ( xx [ 13 ] + xx [ 21 ] * xx [ 21 ] ) * xx [ 9 ] - xx [ 3 ] ; xx [ 3 ]
= xx [ 12 ] * xx [ 6 ] - xx [ 25 ] * xx [ 28 ] ; xx [ 6 ] = xx [ 10 ] * xx [
28 ] - xx [ 7 ] * xx [ 12 ] ; xx [ 354 ] = xx [ 10 ] * xx [ 16 ] - xx [ 12 ]
* xx [ 30 ] ; xx [ 355 ] = xx [ 12 ] * xx [ 15 ] - xx [ 25 ] * xx [ 16 ] ; xx
[ 356 ] = xx [ 25 ] * xx [ 30 ] - xx [ 10 ] * xx [ 15 ] ; xx [ 357 ] = xx [
10 ] * xx [ 5 ] - xx [ 12 ] * xx [ 62 ] ; xx [ 358 ] = xx [ 12 ] * xx [ 29 ]
- xx [ 25 ] * xx [ 5 ] ; xx [ 359 ] = xx [ 25 ] * xx [ 62 ] - xx [ 10 ] * xx
[ 29 ] ; xx [ 360 ] = xx [ 10 ] * xx [ 24 ] - xx [ 12 ] * xx [ 3 ] ; xx [ 361
] = xx [ 12 ] * xx [ 6 ] - xx [ 25 ] * xx [ 24 ] ; xx [ 362 ] = xx [ 25 ] *
xx [ 3 ] - xx [ 10 ] * xx [ 6 ] ; xx [ 5 ] = 0.9999985523541615 ; xx [ 6 ] =
- 2.130267675773651e-5 ; xx [ 7 ] = - 1.701421692958279e-3 ;
pm_math_Matrix3x3_xform_ra ( xx + 354 , xx + 5 , xx + 28 ) ; xx [ 61 ] =
3.397648291980224e-4 ; xx [ 62 ] = 1.051662890794458e-5 ; xx [ 63 ] =
0.6830642379941189 ; pm_math_Matrix3x3_xform_ra ( xx + 354 , xx + 61 , xx +
318 ) ; xx [ 61 ] = - 8.224149921265433e-4 ; xx [ 62 ] = 7.791724056638551e-7
; xx [ 63 ] = 1.399265876074284e-6 ; pm_math_Quaternion_xform_ra ( xx + 18 ,
xx + 61 , xx + 327 ) ; xx [ 3 ] = state [ 1 ] * state [ 1 ] ;
pm_math_Vector3_cross_ra ( xx + 307 , xx + 5 , xx + 61 ) ;
pm_math_Quaternion_xform_ra ( xx + 18 , xx + 61 , xx + 5 ) ; xx [ 10 ] = xx [
6 ] - xx [ 22 ] * xx [ 5 ] + xx [ 14 ] * xx [ 7 ] ; xx [ 12 ] = xx [ 2 ] * xx
[ 5 ] - xx [ 14 ] * xx [ 6 ] + xx [ 7 ] ; xx [ 354 ] = xx [ 111 ] * xx [ 183
] - ( pm_math_Vector3_dot_ra ( xx + 230 , xx + 108 ) + pm_math_Vector3_dot_ra
( xx + 93 , xx + 82 ) + pm_math_Vector3_dot_ra ( xx + 260 , xx + 274 ) * xx [
9 ] + xx [ 51 ] * xx [ 121 ] ) ; xx [ 355 ] = xx [ 196 ] * xx [ 112 ] - ( xx
[ 99 ] + xx [ 118 ] + xx [ 125 ] * xx [ 55 ] + xx [ 128 ] + xx [ 9 ] * xx [
96 ] - ( xx [ 122 ] + xx [ 133 ] ) + xx [ 156 ] * xx [ 121 ] ) - xx [ 183 ] *
xx [ 214 ] ; xx [ 356 ] = xx [ 112 ] * xx [ 223 ] - ( xx [ 100 ] + xx [ 119 ]
+ xx [ 126 ] * xx [ 55 ] + xx [ 129 ] + xx [ 9 ] * xx [ 97 ] - ( xx [ 123 ] +
xx [ 134 ] ) + xx [ 222 ] * xx [ 121 ] ) - xx [ 183 ] * xx [ 229 ] ; xx [ 357
] = xx [ 45 ] * xx [ 112 ] - ( xx [ 101 ] + xx [ 120 ] + xx [ 127 ] * xx [ 55
] + xx [ 130 ] + xx [ 9 ] * xx [ 98 ] - ( xx [ 124 ] + xx [ 135 ] ) + xx [ 44
] * xx [ 121 ] ) + xx [ 154 ] - xx [ 183 ] * xx [ 36 ] ; xx [ 358 ] = xx [ 8
] * xx [ 60 ] - ( pm_math_Vector3_dot_ra ( xx + 57 , xx + 216 ) +
pm_math_Vector3_dot_ra ( xx + 187 , xx + 70 ) + pm_math_Vector3_dot_ra ( xx +
268 , xx + 172 ) * xx [ 9 ] + xx [ 73 ] * xx [ 27 ] ) ; xx [ 359 ] = xx [ 102
] * xx [ 374 ] - ( xx [ 238 ] * ( xx [ 310 ] - ( xx [ 132 ] * xx [ 113 ] + xx
[ 175 ] * xx [ 158 ] + xx [ 88 ] * xx [ 177 ] ) - xx [ 9 ] * xx [ 387 ] *
state [ 5 ] ) - xx [ 237 ] * xx [ 311 ] + xx [ 224 ] + xx [ 290 ] * xx [ 178
] + xx [ 301 ] + xx [ 9 ] * xx [ 202 ] - ( xx [ 252 ] + xx [ 304 ] ) + xx [
239 ] * xx [ 27 ] ) - xx [ 60 ] * xx [ 257 ] ; xx [ 360 ] = xx [ 102 ] * xx [
265 ] - ( xx [ 238 ] * ( xx [ 313 ] - ( xx [ 171 ] * xx [ 132 ] + xx [ 175 ]
* xx [ 157 ] + xx [ 177 ] * xx [ 170 ] ) - xx [ 9 ] * xx [ 390 ] * state [ 5
] ) - xx [ 237 ] * xx [ 314 ] + xx [ 225 ] + xx [ 291 ] * xx [ 178 ] + xx [
302 ] + xx [ 9 ] * xx [ 203 ] - ( xx [ 253 ] + xx [ 305 ] ) + xx [ 264 ] * xx
[ 27 ] ) - xx [ 60 ] * xx [ 267 ] ; xx [ 361 ] = xx [ 102 ] * xx [ 273 ] - (
xx [ 238 ] * ( xx [ 316 ] - ( xx [ 92 ] * xx [ 132 ] + xx [ 87 ] * xx [ 175 ]
+ xx [ 177 ] * xx [ 180 ] ) - xx [ 9 ] * xx [ 393 ] * state [ 5 ] ) - xx [
237 ] * xx [ 317 ] + xx [ 226 ] + xx [ 292 ] * xx [ 178 ] + xx [ 303 ] + xx [
9 ] * xx [ 204 ] - ( xx [ 254 ] + xx [ 306 ] ) + xx [ 272 ] * xx [ 27 ] ) +
xx [ 154 ] - xx [ 60 ] * xx [ 251 ] ; xx [ 362 ] = xx [ 60 ] * xx [ 281 ] -
xx [ 240 ] ; xx [ 363 ] = xx [ 183 ] * xx [ 289 ] - xx [ 241 ] ; xx [ 364 ] =
xx [ 37 ] * xx [ 4 ] / xx [ 300 ] - ( xx [ 1 ] * ( xx [ 17 ] * ( xx [ 29 ] -
xx [ 22 ] * xx [ 28 ] + xx [ 14 ] * xx [ 30 ] ) - ( xx [ 2 ] * xx [ 28 ] - xx
[ 14 ] * xx [ 29 ] + xx [ 30 ] ) * xx [ 23 ] ) / xx [ 11 ] + ( xx [ 318 ] +
xx [ 327 ] * xx [ 3 ] ) * xx [ 2 ] - ( xx [ 319 ] + xx [ 328 ] * xx [ 3 ] ) *
xx [ 14 ] + xx [ 320 ] + xx [ 329 ] * xx [ 3 ] - xx [ 1 ] * xx [ 9 ] * ( xx [
10 ] * xx [ 23 ] + xx [ 12 ] * xx [ 17 ] ) * ( xx [ 17 ] * xx [ 10 ] - xx [
12 ] * xx [ 23 ] ) / xx [ 11 ] / xx [ 11 ] ) + xx [ 154 ] ; memcpy ( xx + 518
, xx + 397 , 121 * sizeof ( double ) ) ; factorAndSolveSymmetric ( xx + 518 ,
11 , xx + 92 , ii + 0 , xx + 354 , xx + 10 , xx + 639 ) ; xx [ 1 ] = ( xx [
374 ] * xx [ 15 ] + xx [ 265 ] * xx [ 16 ] + xx [ 273 ] * xx [ 17 ] - xx [
114 ] ) / xx [ 376 ] ; xx [ 5 ] = xx [ 90 ] ; xx [ 6 ] = xx [ 278 ] + xx [
162 ] * xx [ 1 ] ; xx [ 7 ] = xx [ 153 ] ; pm_math_Quaternion_xform_ra ( xx +
233 , xx + 5 , xx + 21 ) ; xx [ 5 ] = xx [ 159 ] ; xx [ 6 ] = xx [ 160 ] ; xx
[ 7 ] = xx [ 54 ] - xx [ 396 ] * xx [ 1 ] ; pm_math_Quaternion_xform_ra ( xx
+ 233 , xx + 5 , xx + 27 ) ; pm_math_Vector3_cross_ra ( xx + 382 , xx + 27 ,
xx + 5 ) ; xx [ 57 ] = xx [ 248 ] + xx [ 21 ] + xx [ 5 ] + xx [ 324 ] ; xx [
58 ] = xx [ 249 ] + xx [ 22 ] + xx [ 6 ] + xx [ 325 ] ; xx [ 59 ] = xx [ 250
] + xx [ 23 ] + xx [ 7 ] + xx [ 326 ] ; xx [ 5 ] = xx [ 27 ] + xx [ 163 ] ;
xx [ 6 ] = xx [ 28 ] + xx [ 164 ] ; xx [ 7 ] = xx [ 29 ] + xx [ 165 ] ; xx [
2 ] = ( xx [ 85 ] - ( pm_math_Vector3_dot_ra ( xx + 321 , xx + 57 ) +
pm_math_Vector3_dot_ra ( xx + 348 , xx + 5 ) ) + xx [ 73 ] * xx [ 14 ] + xx [
239 ] * xx [ 15 ] + xx [ 264 ] * xx [ 16 ] + xx [ 272 ] * xx [ 17 ] ) / xx [
106 ] ; xx [ 5 ] = - ( xx [ 81 ] * xx [ 2 ] ) ; xx [ 6 ] = xx [ 200 ] * xx [
2 ] ; xx [ 7 ] = xx [ 201 ] * xx [ 2 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 233 , xx + 5 , xx + 21 ) ; pm_math_Vector3_cross_ra ( xx + 5 , xx + 382
, xx + 23 ) ; xx [ 5 ] = xx [ 339 ] - xx [ 280 ] * xx [ 2 ] + xx [ 23 ] ; xx
[ 6 ] = xx [ 340 ] - xx [ 333 ] * xx [ 2 ] + xx [ 24 ] ; xx [ 7 ] = xx [ 341
] - xx [ 335 ] * xx [ 2 ] + xx [ 25 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 233 , xx + 5 , xx + 23 ) ; xx [ 3 ] = xx [ 1 ] - ( xx [ 284 ] * xx [ 22
] - xx [ 294 ] * xx [ 25 ] ) ; xx [ 1 ] = ( xx [ 196 ] * xx [ 11 ] + xx [ 223
] * xx [ 12 ] + xx [ 45 ] * xx [ 13 ] - xx [ 56 ] ) / xx [ 155 ] ; xx [ 5 ] =
xx [ 46 ] ; xx [ 6 ] = xx [ 296 ] + xx [ 162 ] * xx [ 1 ] ; xx [ 7 ] = xx [
205 ] ; pm_math_Quaternion_xform_ra ( xx + 31 , xx + 5 , xx + 23 ) ; xx [ 5 ]
= xx [ 258 ] ; xx [ 6 ] = xx [ 266 ] ; xx [ 7 ] = xx [ 53 ] - xx [ 212 ] * xx
[ 1 ] ; pm_math_Quaternion_xform_ra ( xx + 31 , xx + 5 , xx + 27 ) ;
pm_math_Vector3_cross_ra ( xx + 137 , xx + 27 , xx + 5 ) ; xx [ 53 ] = xx [
285 ] + xx [ 23 ] + xx [ 5 ] + xx [ 351 ] ; xx [ 54 ] = xx [ 286 ] + xx [ 24
] + xx [ 6 ] + xx [ 352 ] ; xx [ 55 ] = xx [ 287 ] + xx [ 25 ] + xx [ 7 ] +
xx [ 353 ] ; xx [ 5 ] = xx [ 27 ] + xx [ 115 ] ; xx [ 6 ] = xx [ 28 ] + xx [
116 ] ; xx [ 7 ] = xx [ 29 ] + xx [ 117 ] ; xx [ 21 ] = ( xx [ 215 ] - (
pm_math_Vector3_dot_ra ( xx + 41 , xx + 53 ) + pm_math_Vector3_dot_ra ( xx +
103 , xx + 5 ) ) + xx [ 51 ] * xx [ 10 ] + xx [ 156 ] * xx [ 11 ] + xx [ 222
] * xx [ 12 ] + xx [ 44 ] * xx [ 13 ] ) / xx [ 79 ] ; xx [ 5 ] = - ( xx [ 38
] * xx [ 21 ] ) ; xx [ 6 ] = - ( xx [ 39 ] * xx [ 21 ] ) ; xx [ 7 ] = - ( xx
[ 40 ] * xx [ 21 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 31 , xx + 5
, xx + 23 ) ; pm_math_Vector3_cross_ra ( xx + 5 , xx + 137 , xx + 27 ) ; xx [
5 ] = xx [ 86 ] * xx [ 21 ] + xx [ 365 ] + xx [ 27 ] ; xx [ 6 ] = xx [ 366 ]
- xx [ 89 ] * xx [ 21 ] + xx [ 28 ] ; xx [ 7 ] = xx [ 367 ] - xx [ 91 ] * xx
[ 21 ] + xx [ 29 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 31 , xx + 5 ,
xx + 27 ) ; xx [ 5 ] = xx [ 1 ] - ( xx [ 298 ] * xx [ 24 ] - xx [ 299 ] * xx
[ 29 ] ) ; xx [ 1 ] = ( xx [ 8 ] * xx [ 14 ] - xx [ 257 ] * xx [ 15 ] - xx [
267 ] * xx [ 16 ] - xx [ 251 ] * xx [ 17 ] + xx [ 281 ] * xx [ 18 ] - xx [
107 ] ) / xx [ 131 ] ; xx [ 6 ] = xx [ 210 ] - xx [ 191 ] * xx [ 1 ] ; xx [ 7
] = xx [ 211 ] + xx [ 208 ] * xx [ 1 ] ; xx [ 8 ] = xx [ 213 ] - xx [ 209 ] *
xx [ 1 ] ; pm_math_Quaternion_xform_ra ( xx + 166 , xx + 6 , xx + 27 ) ; xx [
6 ] = ( xx [ 111 ] * xx [ 10 ] - xx [ 214 ] * xx [ 11 ] - xx [ 229 ] * xx [
12 ] - xx [ 36 ] * xx [ 13 ] + xx [ 289 ] * xx [ 19 ] - xx [ 199 ] ) / xx [
131 ] ; xx [ 10 ] = xx [ 176 ] + xx [ 148 ] * xx [ 6 ] ; xx [ 11 ] = xx [ 179
] - xx [ 149 ] * xx [ 6 ] ; xx [ 12 ] = xx [ 190 ] + xx [ 150 ] * xx [ 6 ] ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 10 , xx + 14 ) ; xx [ 10 ] = xx
[ 27 ] + xx [ 14 ] ; xx [ 11 ] = xx [ 28 ] + xx [ 15 ] ; xx [ 12 ] = xx [ 29
] + xx [ 16 ] ; xx [ 7 ] = ( xx [ 13 ] + xx [ 17 ] + xx [ 20 ] -
pm_math_Vector3_dot_ra ( xx + 145 , xx + 10 ) ) / xx [ 151 ] ; xx [ 10 ] = -
( xx [ 136 ] * xx [ 7 ] ) ; xx [ 11 ] = xx [ 143 ] * xx [ 7 ] ; xx [ 12 ] = -
( xx [ 144 ] * xx [ 7 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx
+ 10 , xx + 13 ) ; xx [ 8 ] = xx [ 6 ] - pm_math_Vector3_dot_ra ( xx + 140 ,
xx + 13 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 166 , xx + 10 , xx + 13
) ; xx [ 6 ] = xx [ 1 ] - pm_math_Vector3_dot_ra ( xx + 330 , xx + 13 ) ; xx
[ 1 ] = - 1.804939452482168e-6 ; xx [ 10 ] = 2.156793422469772e-7 ; xx [ 11 ]
= xx [ 1 ] ; xx [ 12 ] = 5.859787810535977e-8 ; xx [ 13 ] = xx [ 10 ] ; xx [
14 ] = 0.9999999999983462 ; pm_math_Quaternion_inverseCompose_ra ( xx + 65 ,
xx + 47 , xx + 15 ) ; pm_math_Quaternion_inverseCompose_ra ( xx + 11 , xx +
15 , xx + 27 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 15 , xx + 184 , xx
+ 11 ) ; xx [ 31 ] = xx [ 52 ] * xx [ 8 ] ; xx [ 32 ] = xx [ 69 ] * xx [ 8 ]
; xx [ 33 ] = xx [ 8 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 15 , xx +
31 , xx + 34 ) ; xx [ 13 ] = - 0.9999999999983461 ; xx [ 14 ] = xx [ 10 ] ;
xx [ 15 ] = - 5.859787807760419e-8 ; xx [ 16 ] = xx [ 1 ] ;
pm_math_Quaternion_inverseCompose_ra ( xx + 192 , xx + 244 , xx + 31 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 13 , xx + 31 , xx + 38 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 31 , xx + 219 , xx + 13 ) ; xx [ 15
] = - ( xx [ 152 ] * xx [ 6 ] ) ; xx [ 16 ] = - ( xx [ 161 ] * xx [ 6 ] ) ;
xx [ 17 ] = - xx [ 6 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 31 , xx +
15 , xx + 42 ) ; logVector [ 0 ] = xx [ 0 ] * state [ 0 ] ; logVector [ 1 ] =
xx [ 0 ] * state [ 1 ] ; logVector [ 2 ] = xx [ 0 ] * state [ 2 ] ; logVector
[ 3 ] = xx [ 0 ] * state [ 3 ] ; logVector [ 4 ] = xx [ 0 ] * state [ 4 ] ;
logVector [ 5 ] = xx [ 0 ] * state [ 5 ] ; logVector [ 6 ] = xx [ 0 ] * state
[ 6 ] ; logVector [ 7 ] = xx [ 0 ] * state [ 7 ] ; logVector [ 8 ] = xx [ 0 ]
* state [ 8 ] ; logVector [ 9 ] = xx [ 0 ] * state [ 9 ] ; logVector [ 10 ] =
state [ 10 ] ; logVector [ 11 ] = state [ 11 ] ; logVector [ 12 ] = xx [ 0 ]
* state [ 12 ] ; logVector [ 13 ] = xx [ 0 ] * state [ 13 ] ; logVector [ 14
] = xx [ 0 ] * state [ 14 ] ; logVector [ 15 ] = xx [ 0 ] * state [ 15 ] ;
logVector [ 16 ] = 4636.403097699822 * ( xx [ 37 ] * xx [ 20 ] - xx [ 4 ] ) ;
logVector [ 17 ] = xx [ 0 ] * xx [ 2 ] ; logVector [ 18 ] = xx [ 0 ] * xx [ 3
] ; logVector [ 19 ] = xx [ 0 ] * xx [ 21 ] ; logVector [ 20 ] = xx [ 0 ] *
xx [ 5 ] ; logVector [ 21 ] = xx [ 7 ] ; logVector [ 22 ] = xx [ 0 ] * xx [ 8
] ; logVector [ 23 ] = xx [ 0 ] * xx [ 6 ] ; logVector [ 24 ] = ( state [ 16
] + sm_core_canonicalAngle ( xx [ 9 ] * atan2 ( sqrt ( xx [ 28 ] * xx [ 28 ]
+ xx [ 29 ] * xx [ 29 ] + xx [ 30 ] * xx [ 30 ] ) , fabs ( xx [ 27 ] ) ) * (
( - ( xx [ 27 ] * xx [ 29 ] ) ) < 0.0 ? - 1.0 : + 1.0 ) - state [ 16 ] ) ) *
xx [ 0 ] ; logVector [ 25 ] = - ( xx [ 0 ] * ( xx [ 26 ] - xx [ 12 ] ) ) ;
logVector [ 26 ] = - ( xx [ 0 ] * ( xx [ 24 ] + xx [ 5 ] - xx [ 35 ] ) ) ;
logVector [ 27 ] = ( state [ 18 ] + sm_core_canonicalAngle ( xx [ 9 ] * atan2
( sqrt ( xx [ 39 ] * xx [ 39 ] + xx [ 40 ] * xx [ 40 ] + xx [ 41 ] * xx [ 41
] ) , fabs ( xx [ 38 ] ) ) * ( ( xx [ 38 ] * xx [ 40 ] ) < 0.0 ? - 1.0 : +
1.0 ) - state [ 18 ] ) ) * xx [ 0 ] ; logVector [ 28 ] = xx [ 0 ] * ( xx [ 78
] - xx [ 14 ] ) ; logVector [ 29 ] = xx [ 0 ] * ( xx [ 22 ] + xx [ 3 ] - xx [
43 ] ) ; errorResult [ 0 ] = xx [ 182 ] ; return NULL ; }

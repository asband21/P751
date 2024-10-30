#include "ne_ds.h"
#include "boat_57910a22_49_ds_sys_struct.h"
#include "boat_57910a22_49_ds_obs_exp.h"
#include "boat_57910a22_49_ds.h"
#include "boat_57910a22_49_ds_externals.h"
#include "boat_57910a22_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T boat_57910a22_49_ds_obs_exp ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static real_T
_cg_const_1 [ 36 ] = { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 293.15 , 0.0 , 1.0
, 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 446.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 } ; ( void ) t1 ; out -> mOBS_EXP . mX [ 0 ] = _cg_const_1 [ 0 ] ;
out -> mOBS_EXP . mX [ 1 ] = _cg_const_1 [ 1 ] ; out -> mOBS_EXP . mX [ 2 ] =
_cg_const_1 [ 2 ] ; out -> mOBS_EXP . mX [ 3 ] = _cg_const_1 [ 3 ] ; out ->
mOBS_EXP . mX [ 4 ] = _cg_const_1 [ 4 ] ; out -> mOBS_EXP . mX [ 5 ] =
_cg_const_1 [ 5 ] ; out -> mOBS_EXP . mX [ 6 ] = _cg_const_1 [ 6 ] ; out ->
mOBS_EXP . mX [ 7 ] = _cg_const_1 [ 7 ] ; out -> mOBS_EXP . mX [ 8 ] =
_cg_const_1 [ 8 ] ; out -> mOBS_EXP . mX [ 9 ] = _cg_const_1 [ 9 ] ; out ->
mOBS_EXP . mX [ 10 ] = _cg_const_1 [ 10 ] ; out -> mOBS_EXP . mX [ 11 ] =
_cg_const_1 [ 11 ] ; out -> mOBS_EXP . mX [ 12 ] = _cg_const_1 [ 12 ] ; out
-> mOBS_EXP . mX [ 13 ] = _cg_const_1 [ 13 ] ; out -> mOBS_EXP . mX [ 14 ] =
_cg_const_1 [ 14 ] ; out -> mOBS_EXP . mX [ 15 ] = _cg_const_1 [ 15 ] ; out
-> mOBS_EXP . mX [ 16 ] = _cg_const_1 [ 16 ] ; out -> mOBS_EXP . mX [ 17 ] =
_cg_const_1 [ 17 ] ; out -> mOBS_EXP . mX [ 18 ] = _cg_const_1 [ 18 ] ; out
-> mOBS_EXP . mX [ 19 ] = _cg_const_1 [ 19 ] ; out -> mOBS_EXP . mX [ 20 ] =
_cg_const_1 [ 20 ] ; out -> mOBS_EXP . mX [ 21 ] = _cg_const_1 [ 21 ] ; out
-> mOBS_EXP . mX [ 22 ] = _cg_const_1 [ 22 ] ; out -> mOBS_EXP . mX [ 23 ] =
_cg_const_1 [ 23 ] ; out -> mOBS_EXP . mX [ 24 ] = _cg_const_1 [ 24 ] ; out
-> mOBS_EXP . mX [ 25 ] = _cg_const_1 [ 25 ] ; out -> mOBS_EXP . mX [ 26 ] =
_cg_const_1 [ 26 ] ; out -> mOBS_EXP . mX [ 27 ] = _cg_const_1 [ 27 ] ; out
-> mOBS_EXP . mX [ 28 ] = _cg_const_1 [ 28 ] ; out -> mOBS_EXP . mX [ 29 ] =
_cg_const_1 [ 29 ] ; out -> mOBS_EXP . mX [ 30 ] = _cg_const_1 [ 30 ] ; out
-> mOBS_EXP . mX [ 31 ] = _cg_const_1 [ 31 ] ; out -> mOBS_EXP . mX [ 32 ] =
_cg_const_1 [ 32 ] ; out -> mOBS_EXP . mX [ 33 ] = _cg_const_1 [ 33 ] ; out
-> mOBS_EXP . mX [ 34 ] = _cg_const_1 [ 34 ] ; out -> mOBS_EXP . mX [ 35 ] =
_cg_const_1 [ 35 ] ; ( void ) sys ; ( void ) out ; return 0 ; }

#include "ne_ds.h"
#include "boat_57910a22_49_ds_sys_struct.h"
#include "boat_57910a22_49_ds_obs_all.h"
#include "boat_57910a22_49_ds.h"
#include "boat_57910a22_49_ds_externals.h"
#include "boat_57910a22_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T boat_57910a22_49_ds_obs_all ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t2 , NeDsMethodOutput * out ) { real_T
Controlled_Voltage_Source_i ; Controlled_Voltage_Source_i = ( t2 -> mX . mX [
0ULL ] * - 0.999999999925 + t2 -> mX . mX [ 1ULL ] * 6.8754935410542164E-13 )
+ t2 -> mU . mX [ 0ULL ] * - 9.99999999925E-10 ; out -> mOBS_ALL . mX [ 0ULL
] = Controlled_Voltage_Source_i ; out -> mOBS_ALL . mX [ 1ULL ] = 0.0 ; out
-> mOBS_ALL . mX [ 2ULL ] = t2 -> mU . mX [ 0ULL ] ; out -> mOBS_ALL . mX [
3ULL ] = t2 -> mU . mX [ 0ULL ] ; out -> mOBS_ALL . mX [ 4ULL ] = t2 -> mU .
mX [ 0ULL ] ; out -> mOBS_ALL . mX [ 5ULL ] = 0.0 ; out -> mOBS_ALL . mX [
6ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 7ULL ] = t2 -> mX . mX [ 1ULL ] ; out
-> mOBS_ALL . mX [ 8ULL ] = 1.0 ; out -> mOBS_ALL . mX [ 9ULL ] = 0.0 ; out
-> mOBS_ALL . mX [ 10ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 11ULL ] = 1.0 ; out
-> mOBS_ALL . mX [ 12ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 13ULL ] = 0.0 ; out
-> mOBS_ALL . mX [ 14ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 15ULL ] = -
Controlled_Voltage_Source_i ; out -> mOBS_ALL . mX [ 16ULL ] = 0.0 ; out ->
mOBS_ALL . mX [ 17ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 18ULL ] = t2 -> mU .
mX [ 0ULL ] ; out -> mOBS_ALL . mX [ 19ULL ] = Controlled_Voltage_Source_i *
Controlled_Voltage_Source_i * 0.075 * 0.001 * 1000.0 ; out -> mOBS_ALL . mX [
20ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 21ULL ] = t2 -> mU . mX [ 0ULL ] ; out
-> mOBS_ALL . mX [ 22ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 23ULL ] = t2 -> mX
. mX [ 1ULL ] ; out -> mOBS_ALL . mX [ 24ULL ] = t2 -> mX . mX [ 1ULL ] *
9.5492965855137211 ; out -> mOBS_ALL . mX [ 25ULL ] = t2 -> mX . mX [ 0ULL ]
; out -> mOBS_ALL . mX [ 26ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 27ULL ] = t2
-> mX . mX [ 2ULL ] ; out -> mOBS_ALL . mX [ 28ULL ] = 0.0 ; out -> mOBS_ALL
. mX [ 29ULL ] = t2 -> mX . mX [ 1ULL ] ; out -> mOBS_ALL . mX [ 30ULL ] = t2
-> mX . mX [ 1ULL ] ; out -> mOBS_ALL . mX [ 31ULL ] = 0.0 ; out -> mOBS_ALL
. mX [ 32ULL ] = t2 -> mX . mX [ 2ULL ] ; out -> mOBS_ALL . mX [ 33ULL ] = t2
-> mX . mX [ 1ULL ] ; out -> mOBS_ALL . mX [ 34ULL ] = 0.0 ; out -> mOBS_ALL
. mX [ 35ULL ] = t2 -> mU . mX [ 0ULL ] ; ( void ) sys ; ( void ) out ;
return 0 ; }

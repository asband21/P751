#include "ne_ds.h"
#include "boat_5e274609_49_ds_sys_struct.h"
#include "boat_5e274609_49_ds_obs_act.h"
#include "boat_5e274609_49_ds.h"
#include "boat_5e274609_49_ds_externals.h"
#include "boat_5e274609_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T boat_5e274609_49_ds_obs_act ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t2 , NeDsMethodOutput * out ) { real_T
Controlled_Voltage_Source2_i ; Controlled_Voltage_Source2_i = ( t2 -> mX . mX
[ 0ULL ] * - 0.99999999988031707 + t2 -> mX . mX [ 1ULL ] *
4.6697770078251756E-9 ) + t2 -> mU . mX [ 0ULL ] * - 9.9999999988031716E-10 ;
out -> mOBS_ACT . mX [ 0ULL ] = Controlled_Voltage_Source2_i ; out ->
mOBS_ACT . mX [ 1ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 2ULL ] = t2 -> mU . mX
[ 0ULL ] ; out -> mOBS_ACT . mX [ 3ULL ] = t2 -> mU . mX [ 0ULL ] ; out ->
mOBS_ACT . mX [ 4ULL ] = t2 -> mU . mX [ 0ULL ] ; out -> mOBS_ACT . mX [ 5ULL
] = 0.0 ; out -> mOBS_ACT . mX [ 6ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 7ULL ]
= t2 -> mX . mX [ 1ULL ] ; out -> mOBS_ACT . mX [ 8ULL ] = 1.0 ; out ->
mOBS_ACT . mX [ 9ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 10ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 11ULL ] = 1.0 ; out -> mOBS_ACT . mX [ 12ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 13ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 14ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 15ULL ] = - Controlled_Voltage_Source2_i ; out -> mOBS_ACT .
mX [ 16ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 17ULL ] = 0.0 ; out -> mOBS_ACT .
mX [ 18ULL ] = t2 -> mU . mX [ 0ULL ] ; out -> mOBS_ACT . mX [ 19ULL ] =
Controlled_Voltage_Source2_i * Controlled_Voltage_Source2_i *
0.11968303027555587 * 0.001 * 1000.0 ; out -> mOBS_ACT . mX [ 20ULL ] = 0.0 ;
out -> mOBS_ACT . mX [ 21ULL ] = t2 -> mU . mX [ 0ULL ] ; out -> mOBS_ACT .
mX [ 22ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 23ULL ] = t2 -> mX . mX [ 1ULL ]
; out -> mOBS_ACT . mX [ 24ULL ] = t2 -> mX . mX [ 1ULL ] *
9.5492965855137211 ; out -> mOBS_ACT . mX [ 25ULL ] = t2 -> mX . mX [ 0ULL ]
; out -> mOBS_ACT . mX [ 26ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 27ULL ] = t2
-> mX . mX [ 2ULL ] ; out -> mOBS_ACT . mX [ 28ULL ] = 0.0 ; out -> mOBS_ACT
. mX [ 29ULL ] = t2 -> mX . mX [ 1ULL ] ; out -> mOBS_ACT . mX [ 30ULL ] = t2
-> mX . mX [ 1ULL ] ; out -> mOBS_ACT . mX [ 31ULL ] = 0.0 ; out -> mOBS_ACT
. mX [ 32ULL ] = t2 -> mX . mX [ 2ULL ] ; out -> mOBS_ACT . mX [ 33ULL ] = t2
-> mX . mX [ 1ULL ] ; out -> mOBS_ACT . mX [ 34ULL ] = 0.0 ; out -> mOBS_ACT
. mX [ 35ULL ] = t2 -> mU . mX [ 0ULL ] ; ( void ) sys ; ( void ) out ;
return 0 ; }

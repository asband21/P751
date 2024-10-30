#include "ne_ds.h"
#include "boat_2920769f_49_ds_sys_struct.h"
#include "boat_2920769f_49_ds_log.h"
#include "boat_2920769f_49_ds.h"
#include "boat_2920769f_49_ds_externals.h"
#include "boat_2920769f_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T boat_2920769f_49_ds_log ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t2 , NeDsMethodOutput * out ) { real_T DC_Motor1_i ;
DC_Motor1_i = ( t2 -> mX . mX [ 1ULL ] * 0.999999999925 + t2 -> mX . mX [
0ULL ] * - 6.8754935410542164E-13 ) + t2 -> mU . mX [ 0ULL ] *
9.99999999925E-10 ; out -> mLOG . mX [ 0ULL ] = 0.0 ; out -> mLOG . mX [ 1ULL
] = 0.0 ; out -> mLOG . mX [ 2ULL ] = t2 -> mX . mX [ 0ULL ] ; out -> mLOG .
mX [ 3ULL ] = 1.0 ; out -> mLOG . mX [ 4ULL ] = 0.0 ; out -> mLOG . mX [ 5ULL
] = 0.0 ; out -> mLOG . mX [ 6ULL ] = 1.0 ; out -> mLOG . mX [ 7ULL ] = 0.0 ;
out -> mLOG . mX [ 8ULL ] = 0.0 ; out -> mLOG . mX [ 9ULL ] = 0.0 ; out ->
mLOG . mX [ 10ULL ] = DC_Motor1_i ; out -> mLOG . mX [ 11ULL ] = 0.0 ; out ->
mLOG . mX [ 12ULL ] = 0.0 ; out -> mLOG . mX [ 13ULL ] = t2 -> mU . mX [ 0ULL
] ; out -> mLOG . mX [ 14ULL ] = DC_Motor1_i * DC_Motor1_i * 0.075 * 0.001 *
1000.0 ; out -> mLOG . mX [ 15ULL ] = 0.0 ; out -> mLOG . mX [ 16ULL ] = t2
-> mU . mX [ 0ULL ] ; out -> mLOG . mX [ 17ULL ] = 0.0 ; out -> mLOG . mX [
18ULL ] = t2 -> mX . mX [ 0ULL ] ; out -> mLOG . mX [ 19ULL ] = t2 -> mX . mX
[ 0ULL ] * 9.5492965855137211 ; out -> mLOG . mX [ 20ULL ] = t2 -> mX . mX [
1ULL ] ; out -> mLOG . mX [ 21ULL ] = 0.0 ; out -> mLOG . mX [ 22ULL ] = t2
-> mX . mX [ 2ULL ] ; out -> mLOG . mX [ 23ULL ] = 0.0 ; out -> mLOG . mX [
24ULL ] = t2 -> mX . mX [ 0ULL ] ; out -> mLOG . mX [ 25ULL ] = t2 -> mX . mX
[ 0ULL ] ; out -> mLOG . mX [ 26ULL ] = 0.0 ; out -> mLOG . mX [ 27ULL ] = t2
-> mX . mX [ 2ULL ] ; out -> mLOG . mX [ 28ULL ] = t2 -> mX . mX [ 0ULL ] ;
out -> mLOG . mX [ 29ULL ] = 0.0 ; out -> mLOG . mX [ 30ULL ] = t2 -> mU . mX
[ 0ULL ] ; out -> mLOG . mX [ 31ULL ] = - DC_Motor1_i ; out -> mLOG . mX [
32ULL ] = 0.0 ; out -> mLOG . mX [ 33ULL ] = t2 -> mU . mX [ 0ULL ] ; out ->
mLOG . mX [ 34ULL ] = t2 -> mU . mX [ 0ULL ] ; out -> mLOG . mX [ 35ULL ] =
t2 -> mU . mX [ 0ULL ] ; ( void ) sys ; ( void ) out ; return 0 ; }

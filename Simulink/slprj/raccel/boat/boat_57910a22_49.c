#include "ne_std.h"
#include "ne_std_fwd.h"
#include "pm_default_allocator.h"
#include "ssc_dae_fwd.h"
#include "ne_dae_construct.h"
#include "nesl_la.h"
#include "boat_57910a22_49.h"
#include "boat_57910a22_49_ds.h"
void boat_57910a22_49_dae ( NeDae * * dae , const NeModelParameters *
modelParams , const NeSolverParameters * solverParams ) { PmAllocator *
ne_allocator ; const McLinearAlgebraFactory * linear_algebra_ptr = ( solverParams -> mLinearAlgebra == NE_FULL_LA ) ? get_rtw_linear_algebra ( ) : ( ( solverParams -> mLinearAlgebra == NE_SPARSE_LA ) ? mc_get_csparse_linear_algebra ( ) : get_auto_linear_algebra ( ) ) ; NeRtpValues * rtpValues = NULL ; ne_allocator = pm_default_allocator ( ) ; ne_dae_create ( dae , boat_57910a22_49_dae_ds ( ne_allocator ) , NULL , FALSE , rtpValues , * solverParams , * modelParams , linear_algebra_ptr , NULL , NULL , NULL , ne_allocator , NULL , DAEMON_CHOICE_NONE , NULL ) ; }

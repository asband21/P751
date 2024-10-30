#ifndef boat_private_h_
#define boat_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "boat.h"
#include "boat_types.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
    ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
    }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((ptr));\
    (ptr) = (NULL);\
    }
#else
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((void *)(ptr));\
    (ptr) = (NULL);\
    }
#endif
#endif
extern real_T rt_urand_Upu32_Yd_f_pw_snf ( uint32_T * u ) ; extern real_T
rt_nrand_Upu32_Yd_f_pw_snf ( uint32_T * u ) ; extern void olmprp1kyz ( dcuqggditr * localDW ) ; extern void psywd01xtt ( real_T kbxftg04wq , real_T ojconjfhxc , nzammgjvaw * localB , dcuqggditr * localDW ) ; extern void d5w2dp15qi ( htzzi0tma2 * localDW ) ; extern void ldzksap41j ( real_T f5oess2axs , real_T pe2znzyees , real_T mjeuj1qedv , ggwgwfq2ob * localB , htzzi0tma2 * localDW ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif

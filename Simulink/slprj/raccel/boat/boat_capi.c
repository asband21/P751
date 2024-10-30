#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "boat_capi_host.h"
#define sizeof(...) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "boat.h"
#include "boat_capi.h"
#include "boat_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 1 , TARGET_STRING ( "boat/MATLAB Function1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 2 , TARGET_STRING ( "boat/MATLAB Function2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING ( "boat/Abs" ) , TARGET_STRING ( "x" ) , 0 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING ( "boat/Abs1" ) , TARGET_STRING ( "y" ) , 0 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING ( "boat/Abs2" ) , TARGET_STRING ( "y" ) , 0 , 0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING ( "boat/Drift caused by wind force" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 6 , 0 , TARGET_STRING ( "boat/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 7 , 0 , TARGET_STRING ( "boat/Wind force in a given direction" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 8 , 0 , TARGET_STRING ( "boat/Integrator" ) , TARGET_STRING ( "x velocity" ) , 0 , 0 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING ( "boat/Integrator1" ) , TARGET_STRING ( "x" ) , 0 , 0 , 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING ( "boat/Integrator2" ) , TARGET_STRING ( "y velocity" ) , 0 , 0 , 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING ( "boat/Integrator3" ) , TARGET_STRING ( "y" ) , 0 , 0 , 0 , 0 , 0 } , { 12 , 0 , TARGET_STRING ( "boat/Integrator4" ) , TARGET_STRING ( "angular velocity" ) , 0 , 0 , 0 , 0 , 0 } , { 13 , 0 , TARGET_STRING ( "boat/Integrator5" ) , TARGET_STRING ( "angle" ) , 0 , 0 , 0 , 0 , 0 } , { 14 , 0 , TARGET_STRING ( "boat/Divide" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 15 , 0 , TARGET_STRING ( "boat/Divide1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 16 , 0 , TARGET_STRING ( "boat/Divide2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 17 , 0 , TARGET_STRING ( "boat/Product" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 18 , 0 , TARGET_STRING ( "boat/Product1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 19 , 0 , TARGET_STRING ( "boat/Product2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 20 , 0 , TARGET_STRING ( "boat/Product3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 21 , 0 , TARGET_STRING ( "boat/Product5" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING ( "boat/Duty cycle limit 0-0.1" ) , TARGET_STRING ( "y" ) , 0 , 0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING ( "boat/Duty cycle limit 0-0.2" ) , TARGET_STRING ( "angle" ) , 0 , 0 , 0 , 0 , 0 } , { 24 , 0 , TARGET_STRING ( "boat/Duty cycle limit 0-0.3" ) , TARGET_STRING ( "x" ) , 0 , 0 , 0 , 0 , 0 } , { 25 , 0 , TARGET_STRING ( "boat/Add" ) , TARGET_STRING ( "angle" ) , 0 , 0 , 0 , 0 , 0 } , { 26 , 0 , TARGET_STRING ( "boat/Add1" ) , TARGET_STRING ( "x" ) , 0 , 0 , 0 , 0 , 0 } , { 27 , 0 , TARGET_STRING ( "boat/Add2" ) , TARGET_STRING ( "y" ) , 0 , 0 , 0 , 0 , 0 } , { 28 , 0 , TARGET_STRING ( "boat/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 29 , 0 , TARGET_STRING ( "boat/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 30 , 0 , TARGET_STRING ( "boat/Sum2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 31 , 0 , TARGET_STRING ( "boat/Sum3" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 32 , 0 , TARGET_STRING ( "boat/Band-Limited White Noise (Measurement noise)/Output" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 33 , 0 , TARGET_STRING ( "boat/PWM/Variable Pulse Generator" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 34 , 0 , TARGET_STRING ( "boat/PWM1/Variable Pulse Generator" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 35 , 0 , TARGET_STRING ( "boat/PWM2/Variable Pulse Generator" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 36 , 0 , TARGET_STRING ( "boat/Subsystem/Abs" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 37 , 0 , TARGET_STRING ( "boat/Subsystem/Abs1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 38 , 0 , TARGET_STRING ( "boat/Subsystem/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 39 , 0 , TARGET_STRING ( "boat/Subsystem/Product" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 40 , 0 , TARGET_STRING ( "boat/Subsystem/Product1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 41 , 0 , TARGET_STRING ( "boat/Subsystem/Product2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 42 , 0 , TARGET_STRING ( "boat/Subsystem/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 43 , 0 , TARGET_STRING ( "boat/Subsystem/Cos" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 44 , 0 , TARGET_STRING ( "boat/Subsystem/Sin" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 45 , 0 , TARGET_STRING ( "boat/Subsystem1/Abs" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 46 , 0 , TARGET_STRING ( "boat/Subsystem1/Abs1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 47 , 0 , TARGET_STRING ( "boat/Subsystem1/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 48 , 0 , TARGET_STRING ( "boat/Subsystem1/Product" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 49 , 0 , TARGET_STRING ( "boat/Subsystem1/Product1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 50 , 0 , TARGET_STRING ( "boat/Subsystem1/Product2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 51 , 0 , TARGET_STRING ( "boat/Subsystem1/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 52 , 0 , TARGET_STRING ( "boat/Subsystem1/Cos" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 53 , 0 , TARGET_STRING ( "boat/Subsystem1/Sin" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 54 , 0 , TARGET_STRING ( "boat/Subsystem2/Product2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 55 , 0 , TARGET_STRING ( "boat/Subsystem2/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 56 , 0 , TARGET_STRING ( "boat/Subsystem2/Sin" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 57 , 0 , TARGET_STRING ( "boat/Subsystem2/Sqrt" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 58 , 4 , TARGET_STRING ( "boat/Subsystem3/MATLAB Function" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 59 , 4 , TARGET_STRING ( "boat/Subsystem3/MATLAB Function" ) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 60 , 0 , TARGET_STRING ( "boat/Subsystem3/Product2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 61 , 0 , TARGET_STRING ( "boat/Subsystem3/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 62 , 0 , TARGET_STRING ( "boat/Subsystem3/Sin" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 63 , 0 , TARGET_STRING ( "boat/Subsystem3/Sqrt" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 64 , 5 , TARGET_STRING ( "boat/Subsystem4/MATLAB Function" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 65 , 5 , TARGET_STRING ( "boat/Subsystem4/MATLAB Function" ) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 66 , 0 , TARGET_STRING ( "boat/Subsystem4/Product2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 67 , 0 , TARGET_STRING ( "boat/Subsystem4/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 68 , 0 , TARGET_STRING ( "boat/Subsystem4/Sin" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 69 , 0 , TARGET_STRING ( "boat/Subsystem4/Sqrt" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 70 , 0 , TARGET_STRING ( "boat/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 71 , 0 , TARGET_STRING ( "boat/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 72 , 0 , TARGET_STRING ( "boat/Solver Configuration/EVAL_KEY/STATE_1" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 73 , 0 , TARGET_STRING ( "boat/Solver Configuration1/EVAL_KEY/INPUT_1_1_1" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 74 , 0 , TARGET_STRING ( "boat/Solver Configuration1/EVAL_KEY/OUTPUT_1_0" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 75 , 0 , TARGET_STRING ( "boat/Solver Configuration1/EVAL_KEY/STATE_1" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 76 , 0 , TARGET_STRING ( "boat/Solver Configuration2/EVAL_KEY/INPUT_1_1_1" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 77 , 0 , TARGET_STRING ( "boat/Solver Configuration2/EVAL_KEY/OUTPUT_1_0" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 78 , 0 , TARGET_STRING ( "boat/Solver Configuration2/EVAL_KEY/STATE_1" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 79 , 0 , TARGET_STRING ( "boat/PID Controller/D Gain/Internal Parameters/Derivative Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 80 , 0 , TARGET_STRING ( "boat/PID Controller/Filter/Cont. Filter/Filter" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 81 , 0 , TARGET_STRING ( "boat/PID Controller/Filter/Cont. Filter/SumD" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 82 , 0 , TARGET_STRING ( "boat/PID Controller/I Gain/Internal Parameters/Integral Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 83 , 0 , TARGET_STRING ( "boat/PID Controller/Integrator/Continuous/Integrator" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 84 , 0 , TARGET_STRING ( "boat/PID Controller/N Gain/Internal Parameters/Filter Coefficient" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 85 , 0 , TARGET_STRING ( "boat/PID Controller/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 86 , 0 , TARGET_STRING ( "boat/PID Controller1/D Gain/Internal Parameters/Derivative Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 87 , 0 , TARGET_STRING ( "boat/PID Controller1/Filter/Cont. Filter/Filter" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 88 , 0 , TARGET_STRING ( "boat/PID Controller1/Filter/Cont. Filter/SumD" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 89 , 0 , TARGET_STRING ( "boat/PID Controller1/I Gain/Internal Parameters/Integral Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 90 , 0 , TARGET_STRING ( "boat/PID Controller1/Integrator/Continuous/Integrator" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 91 , 0 , TARGET_STRING ( "boat/PID Controller1/N Gain/Internal Parameters/Filter Coefficient" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 92 , 0 , TARGET_STRING ( "boat/PID Controller1/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 93 , 0 , TARGET_STRING ( "boat/PID Controller2/D Gain/Internal Parameters/Derivative Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 94 , 0 , TARGET_STRING ( "boat/PID Controller2/Filter/Cont. Filter/Filter" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 95 , 0 , TARGET_STRING ( "boat/PID Controller2/Filter/Cont. Filter/SumD" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 96 , 0 , TARGET_STRING ( "boat/PID Controller2/I Gain/Internal Parameters/Integral Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 97 , 0 , TARGET_STRING ( "boat/PID Controller2/Integrator/Continuous/Integrator" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 98 , 0 , TARGET_STRING ( "boat/PID Controller2/N Gain/Internal Parameters/Filter Coefficient" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 99 , 0 , TARGET_STRING ( "boat/PID Controller2/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 100 , TARGET_STRING ( "boat/Band-Limited White Noise (Measurement noise)" ) , TARGET_STRING ( "seed" ) , 0 , 0 , 0 } , { 101 , TARGET_STRING ( "boat/PID Controller" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } , { 102 , TARGET_STRING ( "boat/PID Controller" ) , TARGET_STRING ( "I" ) , 0 , 0 , 0 } , { 103 , TARGET_STRING ( "boat/PID Controller" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } , { 104 , TARGET_STRING ( "boat/PID Controller" ) , TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 105 , TARGET_STRING ( "boat/PID Controller" ) , TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 106 , TARGET_STRING ( "boat/PID Controller" ) , TARGET_STRING ( "InitialConditionForFilter" ) , 0 , 0 , 0 } , { 107 , TARGET_STRING ( "boat/PID Controller1" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } , { 108 , TARGET_STRING ( "boat/PID Controller1" ) , TARGET_STRING ( "I" ) , 0 , 0 , 0 } , { 109 , TARGET_STRING ( "boat/PID Controller1" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } , { 110 , TARGET_STRING ( "boat/PID Controller1" ) , TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 111 , TARGET_STRING ( "boat/PID Controller1" ) , TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 112 , TARGET_STRING ( "boat/PID Controller1" ) , TARGET_STRING ( "InitialConditionForFilter" ) , 0 , 0 , 0 } , { 113 , TARGET_STRING ( "boat/PID Controller2" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } , { 114 , TARGET_STRING ( "boat/PID Controller2" ) , TARGET_STRING ( "I" ) , 0 , 0 , 0 } , { 115 , TARGET_STRING ( "boat/PID Controller2" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } , { 116 , TARGET_STRING ( "boat/PID Controller2" ) , TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 117 , TARGET_STRING ( "boat/PID Controller2" ) , TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 118 , TARGET_STRING ( "boat/PID Controller2" ) , TARGET_STRING ( "InitialConditionForFilter" ) , 0 , 0 , 0 } , { 119 , TARGET_STRING ( "boat/PWM" ) , TARGET_STRING ( "Period" ) , 0 , 0 , 0 } , { 120 , TARGET_STRING ( "boat/PWM1" ) , TARGET_STRING ( "Period" ) , 0 , 0 , 0 } , { 121 , TARGET_STRING ( "boat/PWM2" ) , TARGET_STRING ( "Period" ) , 0 , 0 , 0 } , { 122 , TARGET_STRING ( "boat/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 123 , TARGET_STRING ( "boat/Constant1" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 124 , TARGET_STRING ( "boat/Constant3" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 125 , TARGET_STRING ( "boat/Constant6" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 126 , TARGET_STRING ( "boat/Constant7" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 127 , TARGET_STRING ( "boat/Constant8" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 128 , TARGET_STRING ( "boat/Inertia raw constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 129 , TARGET_STRING ( "boat/Width of the boat" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 130 , TARGET_STRING ( "boat/drag2" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 131 , TARGET_STRING ( "boat/length of the boat" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 132 , TARGET_STRING ( "boat/mass" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 133 , TARGET_STRING ( "boat/Drift caused by wind force" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 134 , TARGET_STRING ( "boat/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 135 , TARGET_STRING ( "boat/Wind force in a given direction" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 136 , TARGET_STRING ( "boat/Integrator" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 137 , TARGET_STRING ( "boat/Integrator1" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 138 , TARGET_STRING ( "boat/Integrator2" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 139 , TARGET_STRING ( "boat/Integrator3" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 140 , TARGET_STRING ( "boat/Integrator4" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 141 , TARGET_STRING ( "boat/Integrator5" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 142 , TARGET_STRING ( "boat/Integrator6" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 143 , TARGET_STRING ( "boat/Duty cycle limit 0-0.1" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 144 , TARGET_STRING ( "boat/Duty cycle limit 0-0.1" ) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 145 , TARGET_STRING ( "boat/Duty cycle limit 0-0.2" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 146 , TARGET_STRING ( "boat/Duty cycle limit 0-0.2" ) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 147 , TARGET_STRING ( "boat/Duty cycle limit 0-0.3" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 148 , TARGET_STRING ( "boat/Duty cycle limit 0-0.3" ) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 149 , TARGET_STRING ( "boat/Uniform Random Number" ) , TARGET_STRING ( "Minimum" ) , 0 , 0 , 0 } , { 150 , TARGET_STRING ( "boat/Uniform Random Number" ) , TARGET_STRING ( "Maximum" ) , 0 , 0 , 0 } , { 151 , TARGET_STRING ( "boat/Uniform Random Number" ) , TARGET_STRING ( "Seed" ) , 0 , 0 , 0 } , { 152 , TARGET_STRING ( "boat/Uniform Random Number1" ) , TARGET_STRING ( "Minimum" ) , 0 , 0 , 0 } , { 153 , TARGET_STRING ( "boat/Uniform Random Number1" ) , TARGET_STRING ( "Maximum" ) , 0 , 0 , 0 } , { 154 , TARGET_STRING ( "boat/Uniform Random Number1" ) , TARGET_STRING ( "Seed" ) , 0 , 0 , 0 } , { 155 , TARGET_STRING ( "boat/Band-Limited White Noise (Measurement noise)/Output" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 156 , TARGET_STRING ( "boat/Band-Limited White Noise (Measurement noise)/White Noise" ) , TARGET_STRING ( "Mean" ) , 0 , 0 , 0 } , { 157 , TARGET_STRING ( "boat/Band-Limited White Noise (Measurement noise)/White Noise" ) , TARGET_STRING ( "StdDev" ) , 0 , 0 , 0 } , { 158 , TARGET_STRING ( "boat/Subsystem/x" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 159 , TARGET_STRING ( "boat/Subsystem/y" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 160 , TARGET_STRING ( "boat/Subsystem/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 161 , TARGET_STRING ( "boat/Subsystem1/Drag constant for x Pos" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 162 , TARGET_STRING ( "boat/Subsystem1/Drag constant for y Pos" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 163 , TARGET_STRING ( "boat/Subsystem1/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 164 , TARGET_STRING ( "boat/Subsystem2/x" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 165 , TARGET_STRING ( "boat/Subsystem2/y" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 166 , TARGET_STRING ( "boat/Subsystem3/x" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 167 , TARGET_STRING ( "boat/Subsystem3/y" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 168 , TARGET_STRING ( "boat/Subsystem4/x" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 169 , TARGET_STRING ( "boat/Subsystem4/y" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . ifmn2jhohh . ippecxjt0i , & rtB .
hbgiv4wxgq . ippecxjt0i , & rtB . f5xxv5c5iw , & rtB . hm1wvbykyh , & rtB .
itjs0jtx3o , & rtB . h5spww2eug , & rtB . ddyt10yfii , & rtB . i2c0qloibe , &
rtB . i55gjjxrir , & rtB . dr3d0f4ilc , & rtB . ojxua1olai , & rtB .
e1tauwrvu3 , & rtB . dtgw2eazth , & rtB . egfw2eqq25 , & rtB . gtccs23hof , &
rtB . gyxxaplaeg , & rtB . cgvw14kvhe , & rtB . cdp5eufh1x , & rtB .
cyby0gnkup , & rtB . prqpzdtaxn , & rtB . mtfmpp51ar , & rtB . c5yrhsrtms , &
rtB . lerfsdmwkn , & rtB . aucpl4jwuv , & rtB . iuoeijrbuw , & rtB .
a4iypm4gbs , & rtB . jsslo5nqyh , & rtB . a44cutexgr , & rtB . gixculo4s3 , &
rtB . hymhyjnp0s , & rtB . fs1xewuk02 , & rtB . ghrwyo3imw [ 0 ] , & rtB .
occj1ixdmt , & rtB . poqfyzkjha , & rtB . bpxugea0p4 , & rtB . pgjji1gn55 , &
rtB . ncyf4xxbcx , & rtB . ncffk44u1j , & rtB . illbplkffs , & rtB .
em0bromkfe , & rtB . cw1ewydb0f , & rtB . jcplzhdsyu , & rtB . pplvipdbqt , &
rtB . nspagafdlj , & rtB . hvzv0eivxd , & rtB . hotqmhk3kl , & rtB .
esz3cyqdg0 , & rtB . n12cjujndf , & rtB . g4c3l02cmj , & rtB . cfqmztshpv , &
rtB . bazqoz24aa , & rtB . pm0s4jhq1e , & rtB . mg5yjwauwa , & rtB .
bzwsb2hbby , & rtB . pxqsiby1mn , & rtB . fmfboyd3ga , & rtB . aghkd4traa , &
rtB . keqzqlqvew , & rtB . nf1oadke3r . b5rb2zovck , & rtB . nf1oadke3r .
pxdcpjxbb2 , & rtB . iosioblynm , & rtB . b4feafyt4o , & rtB . dn41zbwev0 , &
rtB . if2ghcwui3 , & rtB . fmscqp2pk3 . b5rb2zovck , & rtB . fmscqp2pk3 .
pxdcpjxbb2 , & rtB . exa5xkuexf , & rtB . kizl3igrxr , & rtB . i3trgao54h , &
rtB . n3sn4i2y20 , & rtB . agudjbqwit [ 0 ] , & rtB . aglzt1mdnj , & rtB .
ilgweckhrc [ 0 ] , & rtB . fsw1z0i2v1 [ 0 ] , & rtB . cujjmjv5eq , & rtB .
p3ofdssvna [ 0 ] , & rtB . ivckfgwj3f [ 0 ] , & rtB . lg4f4t2001 , & rtB .
f2ol5xfubh [ 0 ] , & rtB . i1d5qqrmac , & rtB . cf5qjarukv , & rtB .
ab13ugd0jb , & rtB . nrytsvdmg0 , & rtB . pkrzvdzw1y , & rtB . ckxmfogvuu , &
rtB . a3vetqfkld , & rtB . omdp2bmrlk , & rtB . mfrwttvwxf , & rtB .
fkvci5gmb2 , & rtB . p4g04fwtp3 , & rtB . bivog3ueus , & rtB . ny5ud0kux2 , &
rtB . objm10tupt , & rtB . mazeb5zpdw , & rtB . k0d05v5dag , & rtB .
lbb2jr05jy , & rtB . pccpdexwps , & rtB . jhzetj2jj0 , & rtB . mm1pucs154 , &
rtB . iokldrmvxg , & rtP . BandLimitedWhiteNoiseMeasurementnoise_seed , & rtP
. PIDController_P , & rtP . PIDController_I , & rtP . PIDController_D , & rtP
. PIDController_N , & rtP . PIDController_InitialConditionForIntegrator , &
rtP . PIDController_InitialConditionForFilter , & rtP . PIDController1_P , &
rtP . PIDController1_I , & rtP . PIDController1_D , & rtP . PIDController1_N
, & rtP . PIDController1_InitialConditionForIntegrator , & rtP .
PIDController1_InitialConditionForFilter , & rtP . PIDController2_P , & rtP .
PIDController2_I , & rtP . PIDController2_D , & rtP . PIDController2_N , &
rtP . PIDController2_InitialConditionForIntegrator , & rtP .
PIDController2_InitialConditionForFilter , & rtP . PWM_Period , & rtP .
PWM1_Period , & rtP . PWM2_Period , & rtP . Constant_Value , & rtP .
Constant1_Value , & rtP . Constant3_Value , & rtP . Constant6_Value , & rtP .
Constant7_Value , & rtP . Constant8_Value , & rtP . Inertiarawconstant_Value
, & rtP . Widthoftheboat_Value , & rtP . drag2_Value , & rtP .
lengthoftheboat_Value , & rtP . mass_Value , & rtP .
Driftcausedbywindforce_Gain , & rtP . Gain_Gain , & rtP .
Windforceinagivendirection_Gain , & rtP . Integrator_IC , & rtP .
Integrator1_IC , & rtP . Integrator2_IC , & rtP . Integrator3_IC , & rtP .
Integrator4_IC , & rtP . Integrator5_IC , & rtP . Integrator6_IC , & rtP .
Dutycyclelimit001_UpperSat , & rtP . Dutycyclelimit001_LowerSat , & rtP .
Dutycyclelimit002_UpperSat , & rtP . Dutycyclelimit002_LowerSat , & rtP .
Dutycyclelimit003_UpperSat , & rtP . Dutycyclelimit003_LowerSat , & rtP .
UniformRandomNumber_Minimum , & rtP . UniformRandomNumber_Maximum , & rtP .
UniformRandomNumber_Seed , & rtP . UniformRandomNumber1_Minimum , & rtP .
UniformRandomNumber1_Maximum , & rtP . UniformRandomNumber1_Seed , & rtP .
Output_Gain , & rtP . WhiteNoise_Mean , & rtP . WhiteNoise_StdDev , & rtP .
x_Value , & rtP . y_Value , & rtP . Gain_Gain_p3ka3r0tah , & rtP .
DragconstantforxPos_Value , & rtP . DragconstantforyPos_Value , & rtP .
Gain_Gain_mr0cydvft2 , & rtP . x_Value_ekhkiypbtu , & rtP .
y_Value_bkb3mktfvw , & rtP . x_Value_eq3lkpaxhu , & rtP . y_Value_kouoqvqr2q
, & rtP . x_Value_h2nbl4nm5e , & rtP . y_Value_kwlajmttwi , } ; static
int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 , 3 , 1 , 4 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0
, 0.1 , 1.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) ,
( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 0 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 2 , ( uint8_T ) 0 } , { ( NULL ) , ( NULL ) , 6 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 2 ] , ( int8_T ) 1 , ( uint8_T ) 0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 100 , rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 70 , rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 2663002389U , 3895314875U , 3046818960U , 1304285842U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo * boat_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void boat_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void boat_host_InitializeDataMapInfo ( boat_host_DataMapInfo_T * dataMap ,
const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif

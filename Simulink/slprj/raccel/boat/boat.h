#ifndef boat_h_
#define boat_h_
#ifndef boat_COMMON_INCLUDES_
#define boat_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "boat_2920769f_1_gateway.h"
#include "boat_57910a22_1_gateway.h"
#include "boat_5e274609_1_gateway.h"
#include "ssc_rtw_logging.h"
#include "physmod/common/logging2/core/rtw/rtw_log_fcn_manager.h"
#include "stdlib.h"
#include "physmod/common/logging2/sdi_stream/rtw/inst/SscInstRtwLogging.h"
#endif
#include "boat_types.h"
#include "rtGetInf.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#define MODEL_NAME boat
#define NSAMPLE_TIMES (7) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (102) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (22)   
#elif NCSTATES != 22
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T ippecxjt0i ; } nzammgjvaw ; typedef struct { int32_T
cxxrtrw5jz ; boolean_T bhv4aykvhq ; } dcuqggditr ; typedef struct { real_T
b5rb2zovck ; real_T pxdcpjxbb2 ; } ggwgwfq2ob ; typedef struct { int32_T
ajgetwghvc ; boolean_T mbrn4fhlwd ; } htzzi0tma2 ; typedef struct { real_T
dr3d0f4ilc ; real_T jsslo5nqyh ; real_T f5xxv5c5iw ; real_T e1tauwrvu3 ;
real_T a44cutexgr ; real_T hm1wvbykyh ; real_T egfw2eqq25 ; real_T a4iypm4gbs
; real_T itjs0jtx3o ; real_T pkrzvdzw1y ; real_T i1d5qqrmac ; real_T
cf5qjarukv ; real_T ab13ugd0jb ; real_T ckxmfogvuu ; real_T a3vetqfkld ;
real_T iuoeijrbuw ; real_T poqfyzkjha ; real_T bivog3ueus ; real_T omdp2bmrlk
; real_T mfrwttvwxf ; real_T fkvci5gmb2 ; real_T ny5ud0kux2 ; real_T
objm10tupt ; real_T jhzetj2jj0 ; real_T mazeb5zpdw ; real_T k0d05v5dag ;
real_T lbb2jr05jy ; real_T mm1pucs154 ; real_T iokldrmvxg ; real_T lerfsdmwkn
; real_T bpxugea0p4 ; real_T aucpl4jwuv ; real_T pgjji1gn55 ; real_T
occj1ixdmt ; real_T ghrwyo3imw [ 3 ] ; real_T p3ofdssvna [ 3 ] ; real_T
cujjmjv5eq ; real_T ilgweckhrc [ 3 ] ; real_T aglzt1mdnj ; real_T f2ol5xfubh
[ 3 ] ; real_T lg4f4t2001 ; real_T pxqsiby1mn ; real_T exa5xkuexf ; real_T
h5spww2eug ; real_T dtgw2eazth ; real_T c5yrhsrtms ; real_T iosioblynm ;
real_T fs1xewuk02 ; real_T gtccs23hof ; real_T i55gjjxrir ; real_T ojxua1olai
; real_T ddyt10yfii ; real_T nspagafdlj ; real_T ncyf4xxbcx ; real_T
em0bromkfe ; real_T hvzv0eivxd ; real_T ncffk44u1j ; real_T cw1ewydb0f ;
real_T pplvipdbqt ; real_T jcplzhdsyu ; real_T illbplkffs ; real_T hymhyjnp0s
; real_T gyxxaplaeg ; real_T i2c0qloibe ; real_T mg5yjwauwa ; real_T
hotqmhk3kl ; real_T g4c3l02cmj ; real_T bzwsb2hbby ; real_T esz3cyqdg0 ;
real_T cfqmztshpv ; real_T pm0s4jhq1e ; real_T bazqoz24aa ; real_T n12cjujndf
; real_T gixculo4s3 ; real_T cgvw14kvhe ; real_T nrytsvdmg0 ; real_T
p4g04fwtp3 ; real_T pccpdexwps ; real_T cyby0gnkup ; real_T prqpzdtaxn ;
real_T mtfmpp51ar ; real_T agudjbqwit [ 4 ] ; real_T fsw1z0i2v1 [ 4 ] ;
real_T ivckfgwj3f [ 4 ] ; real_T cdp5eufh1x ; real_T fmfboyd3ga ; real_T
aghkd4traa ; real_T keqzqlqvew ; real_T b4feafyt4o ; real_T dn41zbwev0 ;
real_T if2ghcwui3 ; real_T kizl3igrxr ; real_T i3trgao54h ; real_T n3sn4i2y20
; ggwgwfq2ob fmscqp2pk3 ; ggwgwfq2ob nf1oadke3r ; nzammgjvaw hbgiv4wxgq ;
nzammgjvaw ifmn2jhohh ; } B ; typedef struct { real_T fqyyafssv0 [ 2 ] ;
real_T htt1amrvgv [ 2 ] ; real_T bssgbwzn5f [ 2 ] ; real_T evor0o0u1w ;
real_T jj4ax1istk ; real_T megpocnlzf ; real_T cq4fy31po1 ; real_T ifeym0p3d4
; real_T doojhifyms ; real_T ik3uudsjyg ; real_T and0otfyv2 ; real_T
habwkca01a ; real_T k4wpb4vucr ; real_T m5zbqevzsx ; real_T b5owcqllef ;
real_T ihfadbhak5 ; real_T f2qgyziyrt ; real_T idc5s0rsfa ; real_T ev3nsxizqu
; real_T ks3ujawclj ; real_T cqweur5z4o ; real_T oq4y10dztc ; real_T
hxbifjq51u ; real_T gc5xhbklnl ; real_T cxcc0o32ih ; real_T k1sbpk4k2l ;
real_T ewof0menw2 ; uint64_T l1c0vzua01 ; uint64_T j1zvgotszs ; uint64_T
oktrhzldpx ; struct { void * LoggedData [ 3 ] ; } n5qdvd3wu3 ; struct { void
* LoggedData ; } k3dwitag0f ; struct { void * LoggedData [ 3 ] ; } l0wowp3jkj
; struct { void * LoggedData ; } nztnxtyxir ; struct { void * LoggedData ; }
numsz4qteq ; struct { void * LoggedData ; } mkhhuvwp0k ; void * nzbcd4gsn0 ;
void * matviv3tsc ; void * ncn0gprufm ; void * nzisvocldt ; void * cof2wtp1sd
; void * ayp44j4olu ; void * cc50g312ie ; void * o2uprxsbyk ; void *
mapusopbpi ; void * hx5hy0nr0p ; void * brvpxkjfg4 ; void * mdrfbzfj35 ; void
* o3nzm0dbcw ; void * iluqgx2lfy ; void * dnophrzx1w ; void * dob0vuhnbe ;
void * esmd455ymv ; void * pep0bs4qi4 ; void * o433fpt1es ; void * n4to1wnsi1
; struct { void * LoggedData [ 3 ] ; } byjjwhifdq ; struct { void *
LoggedData ; } b515bk2t31 ; struct { void * LoggedData ; } ojs2yicrlo ; void
* b4ovldmiyf ; void * eg2dr13w4n ; void * deu0nhli3p ; void * bsxrs2bgvc ;
void * pdje53ther ; void * jb02wnymib ; void * ltymifbhtu ; void * fnmimvcsqo
; void * plhjvkz3md ; void * cb35jcpwdh ; struct { void * LoggedData ; }
ot5htd2lxr ; struct { void * LoggedData [ 3 ] ; } b13h3f4lrq ; struct { void
* LoggedData [ 3 ] ; } k2ch15t31p ; struct { void * LoggedData [ 3 ] ; }
aoq4yldo1d ; struct { void * LoggedData [ 3 ] ; } dvcdrhomjz ; void *
d4a4jjhfih ; void * njcfuzufa4 ; void * nkek3zr1jv ; void * hui0e3sc54 ; void
* g1mp4mth5z ; void * kotzabdz4z ; void * pakcepyn5p ; void * mfnn1vwzpe ;
void * hhqju1srnf ; void * gqh21g1lhv ; void * luzdtwsjyg ; void * fbhga2qjxx
; void * mo5hgh4mup ; void * nuu25nvw2m ; void * kyjulrp02t ; int32_T
aqm5jnhwyz ; uint32_T lndskdfmom ; uint32_T iur0xot0u0 ; uint32_T hwgvqn3aty
; int_T hgyea5eklz ; int_T ic10kvv3vn ; int_T gsaeaqfztj ; int_T pswit010me ;
int_T bfxht5ivew ; int_T dzo1rnylqc ; int_T nnoau3gejb ; int_T bexc5hutlj ;
int_T hq42bs4esx ; int_T cr5oo1xudj ; int_T akw4wluyho ; int_T ks031m0ijp ;
int_T pk4xbzciev ; int_T mxc2whhzeq ; int_T f5r30m5mlp ; int_T mre1waafup ;
int8_T fqcwpuiypl ; int8_T ilpdoalijh ; int8_T gr1pr4ue0h ; uint8_T
jdajwtteu1 ; uint8_T bsktzayyjw ; uint8_T ndrbsa54bo ; uint8_T fseioyxtld ;
uint8_T lamh4epvtt ; uint8_T a5s15vizq1 ; uint8_T lwcgqnzxxh ; uint8_T
nbymm4zf0e ; uint8_T akl20qtgvf ; uint8_T cg5p3fc1vb ; uint8_T c2zvhsobgq ;
uint8_T ce4ngnm0vz ; boolean_T ozkuq5jrkw ; boolean_T n52coetlf4 ; boolean_T
pozaiatm4a ; boolean_T gf4ksr2aha ; boolean_T fgliutlg4v ; boolean_T
gbzgjra1qd ; boolean_T krmutnbn45 ; boolean_T njxj2gqdqb ; boolean_T
kdmfiti23w ; boolean_T phgeenzoik ; boolean_T myaevvlju4 ; boolean_T
m405qgdu1y ; boolean_T nmot3ctkc4 ; boolean_T hihjm3wgc4 ; boolean_T
gb30213u1q ; boolean_T eamuase24a ; boolean_T aen5lyyfuu ; boolean_T
eeglzokwfe ; boolean_T ihhztqiixf ; htzzi0tma2 fmscqp2pk3 ; htzzi0tma2
nf1oadke3r ; dcuqggditr hbgiv4wxgq ; dcuqggditr ifmn2jhohh ; } DW ; typedef
struct { real_T f2d4l4jl4s ; real_T eqm01ekw05 ; real_T llcy0vep2l ; real_T
kv3akytruj ; real_T ecyoj2i3gw ; real_T g13n4kjtrj ; real_T bgucvxka1s ;
real_T lgrsqc5d1d ; real_T fmj0130ch2 ; real_T cbt50efduc [ 3 ] ; real_T
fbrr2x2skx [ 3 ] ; real_T mqsayiekhp [ 3 ] ; real_T de235fb3n0 ; real_T
fqzv5kmfjl ; real_T mofkaqi0xy ; real_T ds1lkir2ik ; } X ; typedef struct {
real_T f2d4l4jl4s ; real_T eqm01ekw05 ; real_T llcy0vep2l ; real_T kv3akytruj
; real_T ecyoj2i3gw ; real_T g13n4kjtrj ; real_T bgucvxka1s ; real_T
lgrsqc5d1d ; real_T fmj0130ch2 ; real_T cbt50efduc [ 3 ] ; real_T fbrr2x2skx
[ 3 ] ; real_T mqsayiekhp [ 3 ] ; real_T de235fb3n0 ; real_T fqzv5kmfjl ;
real_T mofkaqi0xy ; real_T ds1lkir2ik ; } XDot ; typedef struct { boolean_T
f2d4l4jl4s ; boolean_T eqm01ekw05 ; boolean_T llcy0vep2l ; boolean_T
kv3akytruj ; boolean_T ecyoj2i3gw ; boolean_T g13n4kjtrj ; boolean_T
bgucvxka1s ; boolean_T lgrsqc5d1d ; boolean_T fmj0130ch2 ; boolean_T
cbt50efduc [ 3 ] ; boolean_T fbrr2x2skx [ 3 ] ; boolean_T mqsayiekhp [ 3 ] ;
boolean_T de235fb3n0 ; boolean_T fqzv5kmfjl ; boolean_T mofkaqi0xy ;
boolean_T ds1lkir2ik ; } XDis ; typedef struct { real_T f2d4l4jl4s ; real_T
eqm01ekw05 ; real_T llcy0vep2l ; real_T kv3akytruj ; real_T ecyoj2i3gw ;
real_T g13n4kjtrj ; real_T bgucvxka1s ; real_T lgrsqc5d1d ; real_T fmj0130ch2
; real_T cbt50efduc [ 3 ] ; real_T fbrr2x2skx [ 3 ] ; real_T mqsayiekhp [ 3 ]
; real_T de235fb3n0 ; real_T fqzv5kmfjl ; real_T mofkaqi0xy ; real_T
ds1lkir2ik ; } CStateAbsTol ; typedef struct { real_T f2d4l4jl4s ; real_T
eqm01ekw05 ; real_T llcy0vep2l ; real_T kv3akytruj ; real_T ecyoj2i3gw ;
real_T g13n4kjtrj ; real_T bgucvxka1s ; real_T lgrsqc5d1d ; real_T fmj0130ch2
; real_T cbt50efduc [ 3 ] ; real_T fbrr2x2skx [ 3 ] ; real_T mqsayiekhp [ 3 ]
; real_T de235fb3n0 ; real_T fqzv5kmfjl ; real_T mofkaqi0xy ; real_T
ds1lkir2ik ; } CXPtMin ; typedef struct { real_T f2d4l4jl4s ; real_T
eqm01ekw05 ; real_T llcy0vep2l ; real_T kv3akytruj ; real_T ecyoj2i3gw ;
real_T g13n4kjtrj ; real_T bgucvxka1s ; real_T lgrsqc5d1d ; real_T fmj0130ch2
; real_T cbt50efduc [ 3 ] ; real_T fbrr2x2skx [ 3 ] ; real_T mqsayiekhp [ 3 ]
; real_T de235fb3n0 ; real_T fqzv5kmfjl ; real_T mofkaqi0xy ; real_T
ds1lkir2ik ; } CXPtMax ; typedef struct { real_T lk1x0wb3uw ; real_T
avdgmodhdp ; real_T gq4uivdc23 ; real_T b1dr4gie5t ; real_T e4ufwo5o3v ;
real_T bsryt4txye ; real_T ifdmkr3knb ; real_T gbspzhrqlg ; real_T pqsoo1oaxp
; real_T foq2mns1xd ; real_T kz5wktlnvd ; real_T caczzs3usb ; real_T
gtx33htujt ; } ZCV ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
DataMapInfo ; struct P_ { real_T PIDController_D ; real_T PIDController1_D ;
real_T PIDController2_D ; real_T PIDController_I ; real_T PIDController1_I ;
real_T PIDController2_I ; real_T PIDController_InitialConditionForFilter ;
real_T PIDController1_InitialConditionForFilter ; real_T
PIDController2_InitialConditionForFilter ; real_T
PIDController_InitialConditionForIntegrator ; real_T
PIDController1_InitialConditionForIntegrator ; real_T
PIDController2_InitialConditionForIntegrator ; real_T PIDController_N ;
real_T PIDController1_N ; real_T PIDController2_N ; real_T PIDController_P ;
real_T PIDController1_P ; real_T PIDController2_P ; real_T PWM_Period ;
real_T PWM1_Period ; real_T PWM2_Period ; real_T
BandLimitedWhiteNoiseMeasurementnoise_seed ; real_T Integrator1_IC ; real_T
Integrator3_IC ; real_T Integrator5_IC ; real_T Dutycyclelimit003_UpperSat ;
real_T Dutycyclelimit003_LowerSat ; real_T Dutycyclelimit001_UpperSat ;
real_T Dutycyclelimit001_LowerSat ; real_T Dutycyclelimit002_UpperSat ;
real_T Dutycyclelimit002_LowerSat ; real_T WhiteNoise_Mean ; real_T
WhiteNoise_StdDev ; real_T Output_Gain ; real_T UniformRandomNumber1_Minimum
; real_T UniformRandomNumber1_Maximum ; real_T UniformRandomNumber1_Seed ;
real_T Driftcausedbywindforce_Gain ; real_T Integrator4_IC ; real_T
Integrator_IC ; real_T Integrator2_IC ; real_T UniformRandomNumber_Minimum ;
real_T UniformRandomNumber_Maximum ; real_T UniformRandomNumber_Seed ; real_T
Gain_Gain ; real_T Gain_Gain_p3ka3r0tah ; real_T
Windforceinagivendirection_Gain ; real_T Gain_Gain_mr0cydvft2 ; real_T
Integrator6_IC ; real_T Constant_Value ; real_T Constant3_Value ; real_T
Constant6_Value ; real_T Constant7_Value ; real_T Constant8_Value ; real_T
Inertiarawconstant_Value ; real_T Widthoftheboat_Value ; real_T
lengthoftheboat_Value ; real_T mass_Value ; real_T x_Value ; real_T y_Value ;
real_T DragconstantforxPos_Value ; real_T DragconstantforyPos_Value ; real_T
y_Value_bkb3mktfvw ; real_T x_Value_ekhkiypbtu ; real_T y_Value_kouoqvqr2q ;
real_T x_Value_eq3lkpaxhu ; real_T y_Value_kwlajmttwi ; real_T
x_Value_h2nbl4nm5e ; real_T drag2_Value ; real_T Constant1_Value ; } ; extern
const char_T * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ;
extern DW rtDW ; extern P rtP ; extern mxArray * mr_boat_GetDWork ( ) ;
extern void mr_boat_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_boat_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * boat_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ; extern
rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid )
; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T
tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif

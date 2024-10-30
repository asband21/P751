    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 70;
            section.data(70)  = dumData; %prealloc

                    ;% rtP.PIDController_D
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.PIDController1_D
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.PIDController2_D
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.PIDController_I
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.PIDController1_I
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.PIDController2_I
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.PIDController_InitialConditionForFilter
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.PIDController1_InitialConditionForFilter
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.PIDController2_InitialConditionForFilter
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.PIDController_InitialConditionForIntegrator
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.PIDController1_InitialConditionForIntegrator
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.PIDController2_InitialConditionForIntegrator
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.PIDController_N
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.PIDController1_N
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.PIDController2_N
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.PIDController_P
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.PIDController1_P
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.PIDController2_P
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.PWM_Period
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.PWM1_Period
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.PWM2_Period
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.BandLimitedWhiteNoiseMeasurementnoise_seed
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.Integrator1_IC
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.Integrator3_IC
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% rtP.Integrator5_IC
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% rtP.Dutycyclelimit003_UpperSat
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% rtP.Dutycyclelimit003_LowerSat
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% rtP.Dutycyclelimit001_UpperSat
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% rtP.Dutycyclelimit001_LowerSat
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

                    ;% rtP.Dutycyclelimit002_UpperSat
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 29;

                    ;% rtP.Dutycyclelimit002_LowerSat
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 30;

                    ;% rtP.WhiteNoise_Mean
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 31;

                    ;% rtP.WhiteNoise_StdDev
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 32;

                    ;% rtP.Output_Gain
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 33;

                    ;% rtP.UniformRandomNumber1_Minimum
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 34;

                    ;% rtP.UniformRandomNumber1_Maximum
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 35;

                    ;% rtP.UniformRandomNumber1_Seed
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 36;

                    ;% rtP.Driftcausedbywindforce_Gain
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 37;

                    ;% rtP.Integrator4_IC
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 38;

                    ;% rtP.Integrator_IC
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 39;

                    ;% rtP.Integrator2_IC
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 40;

                    ;% rtP.UniformRandomNumber_Minimum
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 41;

                    ;% rtP.UniformRandomNumber_Maximum
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 42;

                    ;% rtP.UniformRandomNumber_Seed
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 43;

                    ;% rtP.Gain_Gain
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 44;

                    ;% rtP.Gain_Gain_p3ka3r0tah
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 45;

                    ;% rtP.Windforceinagivendirection_Gain
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 46;

                    ;% rtP.Gain_Gain_mr0cydvft2
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 47;

                    ;% rtP.Integrator6_IC
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 48;

                    ;% rtP.Constant_Value
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 49;

                    ;% rtP.Constant3_Value
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 50;

                    ;% rtP.Constant6_Value
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 51;

                    ;% rtP.Constant7_Value
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 52;

                    ;% rtP.Constant8_Value
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 53;

                    ;% rtP.Inertiarawconstant_Value
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 54;

                    ;% rtP.Widthoftheboat_Value
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 55;

                    ;% rtP.lengthoftheboat_Value
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 56;

                    ;% rtP.mass_Value
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 57;

                    ;% rtP.x_Value
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 58;

                    ;% rtP.y_Value
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 59;

                    ;% rtP.DragconstantforxPos_Value
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 60;

                    ;% rtP.DragconstantforyPos_Value
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 61;

                    ;% rtP.y_Value_bkb3mktfvw
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 62;

                    ;% rtP.x_Value_ekhkiypbtu
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 63;

                    ;% rtP.y_Value_kouoqvqr2q
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 64;

                    ;% rtP.x_Value_eq3lkpaxhu
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 65;

                    ;% rtP.y_Value_kwlajmttwi
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 66;

                    ;% rtP.x_Value_h2nbl4nm5e
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 67;

                    ;% rtP.drag2_Value
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 68;

                    ;% rtP.Constant1_Value
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 69;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 5;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 94;
            section.data(94)  = dumData; %prealloc

                    ;% rtB.dr3d0f4ilc
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.jsslo5nqyh
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.f5xxv5c5iw
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.e1tauwrvu3
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.a44cutexgr
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.hm1wvbykyh
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.egfw2eqq25
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.a4iypm4gbs
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.itjs0jtx3o
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtB.pkrzvdzw1y
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtB.i1d5qqrmac
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtB.cf5qjarukv
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtB.ab13ugd0jb
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtB.ckxmfogvuu
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtB.a3vetqfkld
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtB.iuoeijrbuw
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtB.poqfyzkjha
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtB.bivog3ueus
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtB.omdp2bmrlk
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtB.mfrwttvwxf
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtB.fkvci5gmb2
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtB.ny5ud0kux2
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtB.objm10tupt
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtB.jhzetj2jj0
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% rtB.mazeb5zpdw
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% rtB.k0d05v5dag
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% rtB.lbb2jr05jy
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% rtB.mm1pucs154
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% rtB.iokldrmvxg
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

                    ;% rtB.lerfsdmwkn
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 29;

                    ;% rtB.bpxugea0p4
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 30;

                    ;% rtB.aucpl4jwuv
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 31;

                    ;% rtB.pgjji1gn55
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 32;

                    ;% rtB.occj1ixdmt
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 33;

                    ;% rtB.ghrwyo3imw
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 34;

                    ;% rtB.p3ofdssvna
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 37;

                    ;% rtB.cujjmjv5eq
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 40;

                    ;% rtB.ilgweckhrc
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 41;

                    ;% rtB.aglzt1mdnj
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 44;

                    ;% rtB.f2ol5xfubh
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 45;

                    ;% rtB.lg4f4t2001
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 48;

                    ;% rtB.pxqsiby1mn
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 49;

                    ;% rtB.exa5xkuexf
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 50;

                    ;% rtB.h5spww2eug
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 51;

                    ;% rtB.dtgw2eazth
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 52;

                    ;% rtB.c5yrhsrtms
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 53;

                    ;% rtB.iosioblynm
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 54;

                    ;% rtB.fs1xewuk02
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 55;

                    ;% rtB.gtccs23hof
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 56;

                    ;% rtB.i55gjjxrir
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 57;

                    ;% rtB.ojxua1olai
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 58;

                    ;% rtB.ddyt10yfii
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 59;

                    ;% rtB.nspagafdlj
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 60;

                    ;% rtB.ncyf4xxbcx
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 61;

                    ;% rtB.em0bromkfe
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 62;

                    ;% rtB.hvzv0eivxd
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 63;

                    ;% rtB.ncffk44u1j
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 64;

                    ;% rtB.cw1ewydb0f
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 65;

                    ;% rtB.pplvipdbqt
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 66;

                    ;% rtB.jcplzhdsyu
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 67;

                    ;% rtB.illbplkffs
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 68;

                    ;% rtB.hymhyjnp0s
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 69;

                    ;% rtB.gyxxaplaeg
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 70;

                    ;% rtB.i2c0qloibe
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 71;

                    ;% rtB.mg5yjwauwa
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 72;

                    ;% rtB.hotqmhk3kl
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 73;

                    ;% rtB.g4c3l02cmj
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 74;

                    ;% rtB.bzwsb2hbby
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 75;

                    ;% rtB.esz3cyqdg0
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 76;

                    ;% rtB.cfqmztshpv
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 77;

                    ;% rtB.pm0s4jhq1e
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 78;

                    ;% rtB.bazqoz24aa
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 79;

                    ;% rtB.n12cjujndf
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 80;

                    ;% rtB.gixculo4s3
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 81;

                    ;% rtB.cgvw14kvhe
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 82;

                    ;% rtB.nrytsvdmg0
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 83;

                    ;% rtB.p4g04fwtp3
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 84;

                    ;% rtB.pccpdexwps
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 85;

                    ;% rtB.cyby0gnkup
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 86;

                    ;% rtB.prqpzdtaxn
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 87;

                    ;% rtB.mtfmpp51ar
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 88;

                    ;% rtB.agudjbqwit
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 89;

                    ;% rtB.fsw1z0i2v1
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 93;

                    ;% rtB.ivckfgwj3f
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 97;

                    ;% rtB.cdp5eufh1x
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 101;

                    ;% rtB.fmfboyd3ga
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 102;

                    ;% rtB.aghkd4traa
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 103;

                    ;% rtB.keqzqlqvew
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 104;

                    ;% rtB.b4feafyt4o
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 105;

                    ;% rtB.dn41zbwev0
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 106;

                    ;% rtB.if2ghcwui3
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 107;

                    ;% rtB.kizl3igrxr
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 108;

                    ;% rtB.i3trgao54h
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 109;

                    ;% rtB.n3sn4i2y20
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 110;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtB.fmscqp2pk3.b5rb2zovck
                    section.data(1).logicalSrcIdx = 96;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.fmscqp2pk3.pxdcpjxbb2
                    section.data(2).logicalSrcIdx = 97;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtB.nf1oadke3r.b5rb2zovck
                    section.data(1).logicalSrcIdx = 98;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.nf1oadke3r.pxdcpjxbb2
                    section.data(2).logicalSrcIdx = 99;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.hbgiv4wxgq.ippecxjt0i
                    section.data(1).logicalSrcIdx = 100;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.ifmn2jhohh.ippecxjt0i
                    section.data(1).logicalSrcIdx = 101;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(5) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 17;
        sectIdxOffset = 5;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 27;
            section.data(27)  = dumData; %prealloc

                    ;% rtDW.fqyyafssv0
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.htt1amrvgv
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

                    ;% rtDW.bssgbwzn5f
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 4;

                    ;% rtDW.evor0o0u1w
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 6;

                    ;% rtDW.jj4ax1istk
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 7;

                    ;% rtDW.megpocnlzf
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 8;

                    ;% rtDW.cq4fy31po1
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 9;

                    ;% rtDW.ifeym0p3d4
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 10;

                    ;% rtDW.doojhifyms
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 11;

                    ;% rtDW.ik3uudsjyg
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 12;

                    ;% rtDW.and0otfyv2
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 13;

                    ;% rtDW.habwkca01a
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 14;

                    ;% rtDW.k4wpb4vucr
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 15;

                    ;% rtDW.m5zbqevzsx
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 16;

                    ;% rtDW.b5owcqllef
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 17;

                    ;% rtDW.ihfadbhak5
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 18;

                    ;% rtDW.f2qgyziyrt
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 19;

                    ;% rtDW.idc5s0rsfa
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 20;

                    ;% rtDW.ev3nsxizqu
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 21;

                    ;% rtDW.ks3ujawclj
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 22;

                    ;% rtDW.cqweur5z4o
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 23;

                    ;% rtDW.oq4y10dztc
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 24;

                    ;% rtDW.hxbifjq51u
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 25;

                    ;% rtDW.gc5xhbklnl
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 26;

                    ;% rtDW.cxcc0o32ih
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 27;

                    ;% rtDW.k1sbpk4k2l
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 28;

                    ;% rtDW.ewof0menw2
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 29;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.l1c0vzua01
                    section.data(1).logicalSrcIdx = 27;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.j1zvgotszs
                    section.data(2).logicalSrcIdx = 28;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.oktrhzldpx
                    section.data(3).logicalSrcIdx = 29;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 59;
            section.data(59)  = dumData; %prealloc

                    ;% rtDW.n5qdvd3wu3.LoggedData
                    section.data(1).logicalSrcIdx = 30;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.k3dwitag0f.LoggedData
                    section.data(2).logicalSrcIdx = 31;
                    section.data(2).dtTransOffset = 3;

                    ;% rtDW.l0wowp3jkj.LoggedData
                    section.data(3).logicalSrcIdx = 32;
                    section.data(3).dtTransOffset = 4;

                    ;% rtDW.nztnxtyxir.LoggedData
                    section.data(4).logicalSrcIdx = 33;
                    section.data(4).dtTransOffset = 7;

                    ;% rtDW.numsz4qteq.LoggedData
                    section.data(5).logicalSrcIdx = 34;
                    section.data(5).dtTransOffset = 8;

                    ;% rtDW.mkhhuvwp0k.LoggedData
                    section.data(6).logicalSrcIdx = 35;
                    section.data(6).dtTransOffset = 9;

                    ;% rtDW.nzbcd4gsn0
                    section.data(7).logicalSrcIdx = 36;
                    section.data(7).dtTransOffset = 10;

                    ;% rtDW.matviv3tsc
                    section.data(8).logicalSrcIdx = 37;
                    section.data(8).dtTransOffset = 11;

                    ;% rtDW.ncn0gprufm
                    section.data(9).logicalSrcIdx = 38;
                    section.data(9).dtTransOffset = 12;

                    ;% rtDW.nzisvocldt
                    section.data(10).logicalSrcIdx = 39;
                    section.data(10).dtTransOffset = 13;

                    ;% rtDW.cof2wtp1sd
                    section.data(11).logicalSrcIdx = 40;
                    section.data(11).dtTransOffset = 14;

                    ;% rtDW.ayp44j4olu
                    section.data(12).logicalSrcIdx = 41;
                    section.data(12).dtTransOffset = 15;

                    ;% rtDW.cc50g312ie
                    section.data(13).logicalSrcIdx = 42;
                    section.data(13).dtTransOffset = 16;

                    ;% rtDW.o2uprxsbyk
                    section.data(14).logicalSrcIdx = 43;
                    section.data(14).dtTransOffset = 17;

                    ;% rtDW.mapusopbpi
                    section.data(15).logicalSrcIdx = 44;
                    section.data(15).dtTransOffset = 18;

                    ;% rtDW.hx5hy0nr0p
                    section.data(16).logicalSrcIdx = 45;
                    section.data(16).dtTransOffset = 19;

                    ;% rtDW.brvpxkjfg4
                    section.data(17).logicalSrcIdx = 46;
                    section.data(17).dtTransOffset = 20;

                    ;% rtDW.mdrfbzfj35
                    section.data(18).logicalSrcIdx = 47;
                    section.data(18).dtTransOffset = 21;

                    ;% rtDW.o3nzm0dbcw
                    section.data(19).logicalSrcIdx = 48;
                    section.data(19).dtTransOffset = 22;

                    ;% rtDW.iluqgx2lfy
                    section.data(20).logicalSrcIdx = 49;
                    section.data(20).dtTransOffset = 23;

                    ;% rtDW.dnophrzx1w
                    section.data(21).logicalSrcIdx = 50;
                    section.data(21).dtTransOffset = 24;

                    ;% rtDW.dob0vuhnbe
                    section.data(22).logicalSrcIdx = 51;
                    section.data(22).dtTransOffset = 25;

                    ;% rtDW.esmd455ymv
                    section.data(23).logicalSrcIdx = 52;
                    section.data(23).dtTransOffset = 26;

                    ;% rtDW.pep0bs4qi4
                    section.data(24).logicalSrcIdx = 53;
                    section.data(24).dtTransOffset = 27;

                    ;% rtDW.o433fpt1es
                    section.data(25).logicalSrcIdx = 54;
                    section.data(25).dtTransOffset = 28;

                    ;% rtDW.n4to1wnsi1
                    section.data(26).logicalSrcIdx = 55;
                    section.data(26).dtTransOffset = 29;

                    ;% rtDW.byjjwhifdq.LoggedData
                    section.data(27).logicalSrcIdx = 56;
                    section.data(27).dtTransOffset = 30;

                    ;% rtDW.b515bk2t31.LoggedData
                    section.data(28).logicalSrcIdx = 57;
                    section.data(28).dtTransOffset = 33;

                    ;% rtDW.ojs2yicrlo.LoggedData
                    section.data(29).logicalSrcIdx = 58;
                    section.data(29).dtTransOffset = 34;

                    ;% rtDW.b4ovldmiyf
                    section.data(30).logicalSrcIdx = 59;
                    section.data(30).dtTransOffset = 35;

                    ;% rtDW.eg2dr13w4n
                    section.data(31).logicalSrcIdx = 60;
                    section.data(31).dtTransOffset = 36;

                    ;% rtDW.deu0nhli3p
                    section.data(32).logicalSrcIdx = 61;
                    section.data(32).dtTransOffset = 37;

                    ;% rtDW.bsxrs2bgvc
                    section.data(33).logicalSrcIdx = 62;
                    section.data(33).dtTransOffset = 38;

                    ;% rtDW.pdje53ther
                    section.data(34).logicalSrcIdx = 63;
                    section.data(34).dtTransOffset = 39;

                    ;% rtDW.jb02wnymib
                    section.data(35).logicalSrcIdx = 64;
                    section.data(35).dtTransOffset = 40;

                    ;% rtDW.ltymifbhtu
                    section.data(36).logicalSrcIdx = 65;
                    section.data(36).dtTransOffset = 41;

                    ;% rtDW.fnmimvcsqo
                    section.data(37).logicalSrcIdx = 66;
                    section.data(37).dtTransOffset = 42;

                    ;% rtDW.plhjvkz3md
                    section.data(38).logicalSrcIdx = 67;
                    section.data(38).dtTransOffset = 43;

                    ;% rtDW.cb35jcpwdh
                    section.data(39).logicalSrcIdx = 68;
                    section.data(39).dtTransOffset = 44;

                    ;% rtDW.ot5htd2lxr.LoggedData
                    section.data(40).logicalSrcIdx = 69;
                    section.data(40).dtTransOffset = 45;

                    ;% rtDW.b13h3f4lrq.LoggedData
                    section.data(41).logicalSrcIdx = 70;
                    section.data(41).dtTransOffset = 46;

                    ;% rtDW.k2ch15t31p.LoggedData
                    section.data(42).logicalSrcIdx = 71;
                    section.data(42).dtTransOffset = 49;

                    ;% rtDW.aoq4yldo1d.LoggedData
                    section.data(43).logicalSrcIdx = 72;
                    section.data(43).dtTransOffset = 52;

                    ;% rtDW.dvcdrhomjz.LoggedData
                    section.data(44).logicalSrcIdx = 73;
                    section.data(44).dtTransOffset = 55;

                    ;% rtDW.d4a4jjhfih
                    section.data(45).logicalSrcIdx = 74;
                    section.data(45).dtTransOffset = 58;

                    ;% rtDW.njcfuzufa4
                    section.data(46).logicalSrcIdx = 75;
                    section.data(46).dtTransOffset = 59;

                    ;% rtDW.nkek3zr1jv
                    section.data(47).logicalSrcIdx = 76;
                    section.data(47).dtTransOffset = 60;

                    ;% rtDW.hui0e3sc54
                    section.data(48).logicalSrcIdx = 77;
                    section.data(48).dtTransOffset = 61;

                    ;% rtDW.g1mp4mth5z
                    section.data(49).logicalSrcIdx = 78;
                    section.data(49).dtTransOffset = 62;

                    ;% rtDW.kotzabdz4z
                    section.data(50).logicalSrcIdx = 79;
                    section.data(50).dtTransOffset = 63;

                    ;% rtDW.pakcepyn5p
                    section.data(51).logicalSrcIdx = 80;
                    section.data(51).dtTransOffset = 64;

                    ;% rtDW.mfnn1vwzpe
                    section.data(52).logicalSrcIdx = 81;
                    section.data(52).dtTransOffset = 65;

                    ;% rtDW.hhqju1srnf
                    section.data(53).logicalSrcIdx = 82;
                    section.data(53).dtTransOffset = 66;

                    ;% rtDW.gqh21g1lhv
                    section.data(54).logicalSrcIdx = 83;
                    section.data(54).dtTransOffset = 67;

                    ;% rtDW.luzdtwsjyg
                    section.data(55).logicalSrcIdx = 84;
                    section.data(55).dtTransOffset = 68;

                    ;% rtDW.fbhga2qjxx
                    section.data(56).logicalSrcIdx = 85;
                    section.data(56).dtTransOffset = 69;

                    ;% rtDW.mo5hgh4mup
                    section.data(57).logicalSrcIdx = 86;
                    section.data(57).dtTransOffset = 70;

                    ;% rtDW.nuu25nvw2m
                    section.data(58).logicalSrcIdx = 87;
                    section.data(58).dtTransOffset = 71;

                    ;% rtDW.kyjulrp02t
                    section.data(59).logicalSrcIdx = 88;
                    section.data(59).dtTransOffset = 72;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.aqm5jnhwyz
                    section.data(1).logicalSrcIdx = 89;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.lndskdfmom
                    section.data(1).logicalSrcIdx = 90;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.iur0xot0u0
                    section.data(2).logicalSrcIdx = 91;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.hwgvqn3aty
                    section.data(3).logicalSrcIdx = 92;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 16;
            section.data(16)  = dumData; %prealloc

                    ;% rtDW.hgyea5eklz
                    section.data(1).logicalSrcIdx = 93;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ic10kvv3vn
                    section.data(2).logicalSrcIdx = 94;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.gsaeaqfztj
                    section.data(3).logicalSrcIdx = 95;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.pswit010me
                    section.data(4).logicalSrcIdx = 96;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.bfxht5ivew
                    section.data(5).logicalSrcIdx = 97;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.dzo1rnylqc
                    section.data(6).logicalSrcIdx = 98;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.nnoau3gejb
                    section.data(7).logicalSrcIdx = 99;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.bexc5hutlj
                    section.data(8).logicalSrcIdx = 100;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.hq42bs4esx
                    section.data(9).logicalSrcIdx = 101;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.cr5oo1xudj
                    section.data(10).logicalSrcIdx = 102;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.akw4wluyho
                    section.data(11).logicalSrcIdx = 103;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.ks031m0ijp
                    section.data(12).logicalSrcIdx = 104;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.pk4xbzciev
                    section.data(13).logicalSrcIdx = 105;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.mxc2whhzeq
                    section.data(14).logicalSrcIdx = 106;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.f5r30m5mlp
                    section.data(15).logicalSrcIdx = 107;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.mre1waafup
                    section.data(16).logicalSrcIdx = 108;
                    section.data(16).dtTransOffset = 15;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.fqcwpuiypl
                    section.data(1).logicalSrcIdx = 109;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ilpdoalijh
                    section.data(2).logicalSrcIdx = 110;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.gr1pr4ue0h
                    section.data(3).logicalSrcIdx = 111;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 12;
            section.data(12)  = dumData; %prealloc

                    ;% rtDW.jdajwtteu1
                    section.data(1).logicalSrcIdx = 112;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.bsktzayyjw
                    section.data(2).logicalSrcIdx = 113;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.ndrbsa54bo
                    section.data(3).logicalSrcIdx = 114;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.fseioyxtld
                    section.data(4).logicalSrcIdx = 115;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.lamh4epvtt
                    section.data(5).logicalSrcIdx = 116;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.a5s15vizq1
                    section.data(6).logicalSrcIdx = 117;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.lwcgqnzxxh
                    section.data(7).logicalSrcIdx = 118;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.nbymm4zf0e
                    section.data(8).logicalSrcIdx = 119;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.akl20qtgvf
                    section.data(9).logicalSrcIdx = 120;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.cg5p3fc1vb
                    section.data(10).logicalSrcIdx = 121;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.c2zvhsobgq
                    section.data(11).logicalSrcIdx = 122;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.ce4ngnm0vz
                    section.data(12).logicalSrcIdx = 123;
                    section.data(12).dtTransOffset = 11;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 19;
            section.data(19)  = dumData; %prealloc

                    ;% rtDW.ozkuq5jrkw
                    section.data(1).logicalSrcIdx = 124;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.n52coetlf4
                    section.data(2).logicalSrcIdx = 125;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.pozaiatm4a
                    section.data(3).logicalSrcIdx = 126;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.gf4ksr2aha
                    section.data(4).logicalSrcIdx = 127;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.fgliutlg4v
                    section.data(5).logicalSrcIdx = 128;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.gbzgjra1qd
                    section.data(6).logicalSrcIdx = 129;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.krmutnbn45
                    section.data(7).logicalSrcIdx = 130;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.njxj2gqdqb
                    section.data(8).logicalSrcIdx = 131;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.kdmfiti23w
                    section.data(9).logicalSrcIdx = 132;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.phgeenzoik
                    section.data(10).logicalSrcIdx = 133;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.myaevvlju4
                    section.data(11).logicalSrcIdx = 134;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.m405qgdu1y
                    section.data(12).logicalSrcIdx = 135;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.nmot3ctkc4
                    section.data(13).logicalSrcIdx = 136;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.hihjm3wgc4
                    section.data(14).logicalSrcIdx = 137;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.gb30213u1q
                    section.data(15).logicalSrcIdx = 138;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.eamuase24a
                    section.data(16).logicalSrcIdx = 139;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.aen5lyyfuu
                    section.data(17).logicalSrcIdx = 140;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.eeglzokwfe
                    section.data(18).logicalSrcIdx = 141;
                    section.data(18).dtTransOffset = 17;

                    ;% rtDW.ihhztqiixf
                    section.data(19).logicalSrcIdx = 142;
                    section.data(19).dtTransOffset = 18;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.fmscqp2pk3.ajgetwghvc
                    section.data(1).logicalSrcIdx = 143;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.fmscqp2pk3.mbrn4fhlwd
                    section.data(1).logicalSrcIdx = 144;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.nf1oadke3r.ajgetwghvc
                    section.data(1).logicalSrcIdx = 145;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.nf1oadke3r.mbrn4fhlwd
                    section.data(1).logicalSrcIdx = 146;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.hbgiv4wxgq.cxxrtrw5jz
                    section.data(1).logicalSrcIdx = 147;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.hbgiv4wxgq.bhv4aykvhq
                    section.data(1).logicalSrcIdx = 148;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ifmn2jhohh.cxxrtrw5jz
                    section.data(1).logicalSrcIdx = 149;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ifmn2jhohh.bhv4aykvhq
                    section.data(1).logicalSrcIdx = 150;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(17) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 2663002389;
    targMap.checksum1 = 3895314875;
    targMap.checksum2 = 3046818960;
    targMap.checksum3 = 1304285842;


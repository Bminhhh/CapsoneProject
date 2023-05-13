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
            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% rtP.Gain_Gain
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Gain_Gain_me4xmstywp
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.Gain_Gain_gy5drqpmw4
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.Gain_Gain_a4u1vvqkej
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.Gain_Gain_ls3lvpjamw
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.FromWs_Time0
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.FromWs_Data0
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 11;

                    ;% rtP.Constant3_Value
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 17;

                    ;% rtP.Constant1_Value
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 18;

                    ;% rtP.Constant2_Value
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 19;

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
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtB.atirkgn1ea
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.f3gw0iwbif
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 20;

                    ;% rtB.mwr55aev3g
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 21;

                    ;% rtB.hnxoawnn02
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 22;

                    ;% rtB.ikvmnm2cux
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 23;

                    ;% rtB.c10gnxoqj0
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 24;

                    ;% rtB.c0bnf5ncua
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 28;

                    ;% rtB.ov4daa2idk
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 32;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
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
        nTotSects     = 4;
        sectIdxOffset = 1;

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
            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% rtDW.nrx51v3ffl
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.p5h3pbeepy
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

                    ;% rtDW.mgc35v2eh3
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 4;

                    ;% rtDW.joypi0icuk
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 6;

                    ;% rtDW.cnz2wgesei
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 20;
            section.data(20)  = dumData; %prealloc

                    ;% rtDW.puakpty0gl
                    section.data(1).logicalSrcIdx = 5;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.bgy1ywvlrc
                    section.data(2).logicalSrcIdx = 6;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.bvsbzhcijz
                    section.data(3).logicalSrcIdx = 7;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.es413ksfac
                    section.data(4).logicalSrcIdx = 8;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.gemtqiprb5
                    section.data(5).logicalSrcIdx = 9;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.ho0c1mkpts
                    section.data(6).logicalSrcIdx = 10;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.fevgbksbvp
                    section.data(7).logicalSrcIdx = 11;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.iocl5xhili
                    section.data(8).logicalSrcIdx = 12;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.iuxovi2qjd
                    section.data(9).logicalSrcIdx = 13;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.hhtdtemipq
                    section.data(10).logicalSrcIdx = 14;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.lrcusptm13.AQHandles
                    section.data(11).logicalSrcIdx = 15;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.m2vfa514pt.AQHandles
                    section.data(12).logicalSrcIdx = 16;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.avwetncjkl.LoggedData
                    section.data(13).logicalSrcIdx = 17;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.ewcm2cqg5h.LoggedData
                    section.data(14).logicalSrcIdx = 18;
                    section.data(14).dtTransOffset = 16;

                    ;% rtDW.lrcusptm13y.AQHandles
                    section.data(15).logicalSrcIdx = 19;
                    section.data(15).dtTransOffset = 18;

                    ;% rtDW.m2vfa514pte.AQHandles
                    section.data(16).logicalSrcIdx = 20;
                    section.data(16).dtTransOffset = 19;

                    ;% rtDW.fsf1ew52l4
                    section.data(17).logicalSrcIdx = 21;
                    section.data(17).dtTransOffset = 20;

                    ;% rtDW.ekqm450y13
                    section.data(18).logicalSrcIdx = 22;
                    section.data(18).dtTransOffset = 21;

                    ;% rtDW.byuyr4albp
                    section.data(19).logicalSrcIdx = 23;
                    section.data(19).dtTransOffset = 22;

                    ;% rtDW.ldnb01qrhc.TimePtr
                    section.data(20).logicalSrcIdx = 24;
                    section.data(20).dtTransOffset = 23;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% rtDW.o2ji33fn0m
                    section.data(1).logicalSrcIdx = 25;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.haca43xgma
                    section.data(2).logicalSrcIdx = 26;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.ctj0zkrtsp
                    section.data(3).logicalSrcIdx = 27;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.do5crktz43
                    section.data(4).logicalSrcIdx = 28;
                    section.data(4).dtTransOffset = 4;

                    ;% rtDW.fr32snlede.PrevIndex
                    section.data(5).logicalSrcIdx = 29;
                    section.data(5).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.ixolmoocom
                    section.data(1).logicalSrcIdx = 30;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.f33l2mygmj
                    section.data(2).logicalSrcIdx = 31;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
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


    targMap.checksum0 = 1976949148;
    targMap.checksum1 = 946220215;
    targMap.checksum2 = 1783701592;
    targMap.checksum3 = 2476505108;


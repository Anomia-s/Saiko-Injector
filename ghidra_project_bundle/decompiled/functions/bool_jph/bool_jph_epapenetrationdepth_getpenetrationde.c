/**
 * Function: bool_jph_epapenetrationdepth_getpenetrationde
 * Address:  1405be590
 * Signature: undefined bool_jph_epapenetrationdepth_getpenetrationde(void)
 * Body size: 4406 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong bool_jph_epapenetrationdepth_getpenetrationde
                    (void *param_1,undefined1 (*param_2) [16],longlong *param_3,undefined8 param_4,
                    undefined1 (*param_5) [16],float *param_6,undefined1 (*param_7) [16])

{
  uint uVar1;
  undefined8 *puVar2;
  float *pfVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  longlong lVar14;
  ulonglong uVar15;
  undefined1 (*pauVar16) [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar42;
  undefined1 auVar33 [16];
  float fVar43;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [64];
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar72;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [64];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [64];
  undefined1 in_ZMM8 [64];
  float fVar88;
  undefined1 auVar89 [64];
  undefined1 in_ZMM10 [64];
  undefined1 auVar90 [64];
  undefined1 auVar91 [16];
  undefined1 in_ZMM11 [64];
  undefined1 auStack_8608 [32];
  uint *local_85e8;
  uint *local_85e0;
  undefined1 (*local_85d0) [16];
  undefined8 local_85c8;
  undefined8 uStack_85c0;
  undefined1 local_85b8 [16];
  undefined4 local_859c;
  undefined8 local_8598;
  undefined8 uStack_8590;
  undefined1 local_8588 [16];
  undefined1 local_8578 [16];
  undefined1 local_8568 [16];
  undefined8 local_8558;
  undefined8 uStack_8550;
  undefined8 local_8548;
  undefined8 uStack_8540;
  undefined4 local_8538;
  undefined4 uStack_8534;
  undefined4 uStack_8530;
  undefined4 uStack_852c;
  undefined8 local_8528;
  undefined8 uStack_8520;
  undefined1 local_8518 [16];
  undefined1 local_8508 [8];
  float fStack_8500;
  float fStack_84fc;
  uint local_84f0 [2];
  longlong alStack_84e8 [128];
  undefined1 local_80e8 [24576];
  undefined1 (*local_20e8) [16];
  undefined4 local_20e0;
  uint *local_20d8;
  uint local_20d0 [2];
  undefined1 (*local_20c8 [2]) [16];
  longlong alStack_20b8 [254];
  uint local_18c8 [4];
  undefined1 local_18b8 [16];
  undefined1 local_18a8 [16];
  undefined1 local_10b8 [2048];
  undefined1 local_8b8 [2056];
  ulonglong local_b0;
  undefined1 local_88 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 uStack_48;
  
  uStack_48 = 0x1405be5a6;
  local_58 = in_ZMM11._0_16_;
  local_68 = in_ZMM10._0_16_;
  local_88 = in_ZMM8._0_16_;
  auVar84 = ZEXT1664(in_ZMM3._0_16_);
  local_b0 = DAT_1414ef3c0 ^ (ulonglong)auStack_8608;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar14 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (lVar14 == 0) {
LAB_1405be68f:
    pauVar13 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar1 = *(uint *)(lVar14 + 0x200020);
    if (0xffff < (ulonglong)uVar1) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      goto LAB_1405be68f;
    }
    *(uint *)(lVar14 + 0x200020) = uVar1 + 1;
    pauVar13 = (undefined1 (*) [16])(lVar14 + (ulonglong)uVar1 * 0x20 + 0x20);
    uVar7 = rdtsc();
    in_ZMM8 = ZEXT864(uVar7 & 0xffffffff00000000 |
                      CONCAT44((int)((ulonglong)lVar14 >> 0x20),(int)uVar7));
  }
  uVar1 = *(uint *)((longlong)param_1 + 0xc0);
  uVar7 = (ulonglong)(uVar1 << 4);
  memcpy(local_18b8,param_1,uVar7);
  memcpy(local_10b8,(void *)((longlong)param_1 + 0x40),uVar7);
  memcpy(local_8b8,(void *)((longlong)param_1 + 0x80),uVar7);
  local_18c8[0] = uVar1;
  if (uVar1 == 2) {
    auVar49 = vsubps_avx(local_18a8,local_18b8);
    auVar33._0_4_ = auVar49._0_4_ * auVar49._0_4_;
    auVar33._4_4_ = auVar49._4_4_ * auVar49._4_4_;
    auVar33._8_4_ = auVar49._8_4_ * auVar49._8_4_;
    auVar33._12_4_ = auVar49._12_4_ * auVar49._12_4_;
    auVar47 = vinsertps_avx(auVar33,auVar33,0x4c);
    auVar64._0_4_ = auVar33._0_4_ + auVar47._0_4_;
    auVar64._4_4_ = auVar33._4_4_ + auVar47._4_4_;
    auVar64._8_4_ = auVar33._8_4_ + auVar47._8_4_;
    auVar64._12_4_ = auVar33._12_4_ + auVar47._12_4_;
    auVar47 = vshufpd_avx(auVar64,auVar64,1);
    auVar47 = ZEXT416((uint)(auVar64._0_4_ + auVar47._0_4_));
    auVar47 = vsqrtss_avx(auVar47,auVar47);
    auVar33 = vshufps_avx(auVar47,auVar47,0);
    auVar46._8_4_ = 1;
    auVar46._0_8_ = 0x100000001;
    auVar46._12_4_ = 1;
    auVar47 = vcvtdq2ps_avx(auVar46);
    fVar32 = auVar47._0_4_;
    fVar44 = auVar47._4_4_;
    fVar42 = auVar47._8_4_;
    fVar43 = auVar47._12_4_;
    auVar66 = vdivps_avx(auVar49,auVar33);
    fVar32 = fVar32 * -1.5703125 + 1.0471976 + fVar32 * -0.0004837513 + fVar32 * -7.54979e-08;
    fVar44 = fVar44 * -1.5703125 + 1.0471976 + fVar44 * -0.0004837513 + fVar44 * -7.54979e-08;
    fVar42 = fVar42 * -1.5703125 + 1.0471976 + fVar42 * -0.0004837513 + fVar42 * -7.54979e-08;
    fVar43 = fVar43 * -1.5703125 + 1.0471976 + fVar43 * -0.0004837513 + fVar43 * -7.54979e-08;
    fVar63 = fVar32 * fVar32;
    fVar88 = fVar44 * fVar44;
    fVar45 = fVar42 * fVar42;
    fVar72 = fVar43 * fVar43;
    auVar85._8_4_ = 0x3f800000;
    auVar85._0_8_ = 0x3f8000003f800000;
    auVar85._12_4_ = 0x3f800000;
    auVar73._0_4_ =
         fVar63 * fVar63 * (fVar63 * (fVar63 * 2.4433157e-05 + -0.0013887316) + 0.041666646) +
         fVar63 * -0.5 + 1.0;
    auVar73._4_4_ =
         fVar88 * fVar88 * (fVar88 * (fVar88 * 2.4433157e-05 + -0.0013887316) + 0.041666646) +
         fVar88 * -0.5 + 1.0;
    auVar73._8_4_ =
         fVar45 * fVar45 * (fVar45 * (fVar45 * 2.4433157e-05 + -0.0013887316) + 0.041666646) +
         fVar45 * -0.5 + 1.0;
    auVar73._12_4_ =
         fVar72 * fVar72 * (fVar72 * (fVar72 * 2.4433157e-05 + -0.0013887316) + 0.041666646) +
         fVar72 * -0.5 + 1.0;
    auVar34._0_4_ =
         fVar32 + fVar32 * fVar63 * (fVar63 * (fVar63 * -0.00019515296 + 0.008332161) + -0.16666655)
    ;
    auVar34._4_4_ =
         fVar44 + fVar44 * fVar88 * (fVar88 * (fVar88 * -0.00019515296 + 0.008332161) + -0.16666655)
    ;
    auVar34._8_4_ =
         fVar42 + fVar42 * fVar45 * (fVar45 * (fVar45 * -0.00019515296 + 0.008332161) + -0.16666655)
    ;
    auVar34._12_4_ =
         fVar43 + fVar43 * fVar72 * (fVar72 * (fVar72 * -0.00019515296 + 0.008332161) + -0.16666655)
    ;
    auVar64 = vpslld_avx(auVar46,0x1f);
    auVar47 = vpslld_avx(auVar46,0x1e);
    auVar49 = vpand_avx(auVar47,_DAT_140dc1ff0);
    auVar47 = vblendvps_avx(auVar34,auVar73,auVar64);
    auVar33 = vblendvps_avx(auVar73,auVar34,auVar64);
    auVar47 = auVar49 ^ auVar47;
    auVar49 = auVar49 ^ auVar64;
    auVar35._0_4_ = auVar33._0_4_ ^ auVar49._0_4_;
    auVar35._4_4_ = auVar33._4_4_ ^ auVar49._4_4_;
    auVar35._8_4_ = auVar33._8_4_ ^ auVar49._8_4_;
    auVar35._12_4_ = auVar33._12_4_ ^ auVar49._12_4_;
    auVar48._0_4_ = auVar66._0_4_ * auVar47._0_4_;
    auVar48._4_4_ = auVar66._4_4_ * auVar47._4_4_;
    auVar48._8_4_ = auVar66._8_4_ * auVar47._8_4_;
    auVar48._12_4_ = auVar66._12_4_ * auVar47._12_4_;
    auVar47 = vblendps_avx(auVar48,auVar35,8);
    fVar32 = auVar47._0_4_;
    auVar74._0_4_ = fVar32 + fVar32;
    fVar44 = auVar47._4_4_;
    auVar74._4_4_ = fVar44 + fVar44;
    fVar42 = auVar47._8_4_;
    auVar74._8_4_ = fVar42 + fVar42;
    fVar43 = auVar47._12_4_;
    auVar74._12_4_ = fVar43 + fVar43;
    auVar33 = vshufps_avx(auVar74,auVar74,0xc9);
    auVar47 = vshufps_avx(auVar47,auVar47,0xd2);
    auVar49 = vshufps_avx(auVar74,auVar74,0xd2);
    auVar64 = vshufps_avx(auVar35,auVar35,0xff);
    auVar91._0_4_ = auVar47._0_4_ * auVar49._0_4_;
    auVar91._4_4_ = auVar47._4_4_ * auVar49._4_4_;
    auVar91._8_4_ = auVar47._8_4_ * auVar49._8_4_;
    auVar91._12_4_ = auVar47._12_4_ * auVar49._12_4_;
    auVar65._0_4_ = fVar32 * auVar74._0_4_;
    auVar65._4_4_ = fVar44 * auVar74._4_4_;
    auVar65._8_4_ = fVar42 * auVar74._8_4_;
    auVar65._12_4_ = fVar43 * auVar74._12_4_;
    auVar34 = vshufps_avx(auVar65,auVar65,0xc9);
    auVar34 = vsubps_avx(auVar85,auVar34);
    auVar34 = vsubps_avx(auVar34,auVar91);
    auVar75._0_4_ = auVar47._0_4_ * auVar74._0_4_ + auVar64._0_4_ * auVar33._0_4_;
    auVar75._4_4_ = auVar47._4_4_ * auVar74._4_4_ + auVar64._4_4_ * auVar33._4_4_;
    auVar75._8_4_ = auVar47._8_4_ * auVar74._8_4_ + auVar64._8_4_ * auVar33._8_4_;
    auVar75._12_4_ = auVar47._12_4_ * auVar74._12_4_ + auVar64._12_4_ * auVar33._12_4_;
    auVar47._0_4_ = auVar49._0_4_ * auVar64._0_4_;
    auVar47._4_4_ = auVar49._4_4_ * auVar64._4_4_;
    auVar47._8_4_ = auVar49._8_4_ * auVar64._8_4_;
    auVar47._12_4_ = auVar49._12_4_ * auVar64._12_4_;
    auVar49._0_4_ = auVar48._0_4_ * auVar33._0_4_;
    auVar49._4_4_ = auVar48._4_4_ * auVar33._4_4_;
    auVar49._8_4_ = auVar48._8_4_ * auVar33._8_4_;
    auVar49._12_4_ = auVar48._12_4_ * auVar33._12_4_;
    auVar49 = vsubps_avx(auVar49,auVar47);
    auVar46 = ZEXT816(0) << 0x20;
    auVar47 = vblendps_avx(auVar49,auVar46,8);
    auVar33 = vblendps_avx(auVar34,auVar75,2);
    auVar47 = vblendps_avx(auVar47,auVar33,3);
    auVar33 = vinsertps_avx(auVar49,auVar34,0x58);
    auVar33 = vblendps_avx(auVar33,auVar75,4);
    auVar49 = vinsertps_avx(auVar49,auVar75,8);
    auVar49 = vblendps_avx(auVar49,auVar34,4);
    auVar35 = vsubps_avx(auVar46,auVar66);
    auVar64 = vmaxps_avx(auVar66,auVar35);
    auVar34 = vshufps_avx(auVar64,auVar64,0);
    auVar64 = vshufps_avx(auVar64,auVar64,0x55);
    auVar34 = vcmpps_avx(auVar64,auVar34,1);
    auVar64 = vshufpd_avx(auVar66,auVar35,1);
    auVar64 = vblendps_avx(auVar64,auVar46,10);
    auVar66 = vshufps_avx(auVar66,auVar35,0xd8);
    auVar66 = vblendps_avx(auVar66,auVar46,9);
    auVar64 = vblendvps_avx(auVar66,auVar64,auVar34);
    auVar76._0_4_ = auVar64._0_4_ * auVar64._0_4_;
    auVar76._4_4_ = auVar64._4_4_ * auVar64._4_4_;
    auVar76._8_4_ = auVar64._8_4_ * auVar64._8_4_;
    auVar76._12_4_ = auVar64._12_4_ * auVar64._12_4_;
    auVar66 = vmovshdup_avx(auVar76);
    auVar77._0_4_ = auVar76._0_4_ + auVar66._0_4_;
    auVar77._4_4_ = auVar76._4_4_ + auVar66._4_4_;
    auVar77._8_4_ = auVar76._8_4_ + auVar66._8_4_;
    auVar77._12_4_ = auVar76._12_4_ + auVar66._12_4_;
    auVar66 = vshufpd_avx(auVar77,auVar77,1);
    auVar66 = ZEXT416((uint)(auVar77._0_4_ + auVar66._0_4_));
    auVar66 = vsqrtss_avx(auVar66,auVar66);
    auVar66 = vshufps_avx(auVar66,auVar66,0);
    local_8568 = vdivps_avx(auVar64,auVar66);
    auVar64 = vshufps_avx(local_8568,local_8568,0);
    auVar66 = vshufps_avx(local_8568,local_8568,0x55);
    auVar34 = vshufps_avx(local_8568,local_8568,0xaa);
    auVar86._0_4_ =
         auVar49._0_4_ * auVar34._0_4_ +
         auVar47._0_4_ * auVar64._0_4_ + auVar33._0_4_ * auVar66._0_4_ + (float)DAT_140de0210;
    auVar86._4_4_ =
         auVar49._4_4_ * auVar34._4_4_ +
         auVar47._4_4_ * auVar64._4_4_ + auVar33._4_4_ * auVar66._4_4_ + DAT_140de0210._4_4_;
    auVar86._8_4_ =
         auVar49._8_4_ * auVar34._8_4_ +
         auVar47._8_4_ * auVar64._8_4_ + auVar33._8_4_ * auVar66._8_4_ + DAT_140de0210._8_4_;
    auVar86._12_4_ =
         auVar49._12_4_ * auVar34._12_4_ +
         auVar47._12_4_ * auVar64._12_4_ + auVar33._12_4_ * auVar66._12_4_ + DAT_140de0210._12_4_;
    auVar87 = ZEXT1664(auVar86);
    auVar64 = vshufps_avx(auVar86,auVar86,0);
    auVar66 = vshufps_avx(auVar86,auVar86,0x55);
    auVar34 = vshufps_avx(auVar86,auVar86,0xaa);
    auVar89 = ZEXT1664(CONCAT412(auVar49._12_4_ * auVar34._12_4_ +
                                 auVar47._12_4_ * auVar64._12_4_ + auVar33._12_4_ * auVar66._12_4_ +
                                 DAT_140de0210._12_4_,
                                 CONCAT48(auVar49._8_4_ * auVar34._8_4_ +
                                          auVar47._8_4_ * auVar64._8_4_ +
                                          auVar33._8_4_ * auVar66._8_4_ + DAT_140de0210._8_4_,
                                          CONCAT44(auVar49._4_4_ * auVar34._4_4_ +
                                                   auVar47._4_4_ * auVar64._4_4_ +
                                                   auVar33._4_4_ * auVar66._4_4_ +
                                                   DAT_140de0210._4_4_,
                                                   auVar49._0_4_ * auVar34._0_4_ +
                                                   auVar47._0_4_ * auVar64._0_4_ +
                                                   auVar33._0_4_ * auVar66._0_4_ +
                                                   (float)DAT_140de0210))));
    local_85e0 = local_84f0;
    local_85e8 = (uint *)local_8568;
    FUN_1405bf700(local_18c8,local_80e8,param_2,param_3);
    local_8578 = auVar87._0_16_;
    local_85e0 = (uint *)local_8508;
    local_85e8 = (uint *)local_8578;
    FUN_1405bf700(local_18c8,local_80e8,param_2,param_3);
    local_8588 = auVar89._0_16_;
    local_85e0 = (uint *)local_8518;
    local_85e8 = (uint *)local_8588;
  }
  else {
    if (uVar1 != 1) goto LAB_1405bead8;
    local_18c8[0] = 0;
    local_8528 = 0x3f80000000000000;
    uStack_8520 = 0;
    local_85e0 = local_84f0;
    local_85e8 = (uint *)&local_8528;
    FUN_1405bf700(local_18c8,local_80e8,param_2,param_3);
    local_8538 = 0xbf800000;
    uStack_8534 = 0xbf800000;
    uStack_8530 = 0xbf800000;
    uStack_852c = 0xbf800000;
    local_85e0 = (uint *)local_8508;
    local_85e8 = &local_8538;
    FUN_1405bf700(local_18c8,local_80e8,param_2,param_3);
    local_8548 = 0xbf8000003f800000;
    uStack_8540 = 0xbf800000bf800000;
    local_85e0 = (uint *)local_8518;
    local_85e8 = (uint *)&local_8548;
    FUN_1405bf700(local_18c8,local_80e8,param_2,param_3);
    local_8558 = 0xbf80000000000000;
    uStack_8550 = 0x3f8000003f800000;
    local_85e0 = (uint *)local_85b8;
    local_85e8 = (uint *)&local_8558;
  }
  FUN_1405bf700(local_18c8,local_80e8,param_2,param_3);
LAB_1405bead8:
  local_20e8 = (undefined1 (*) [16])0x0;
  local_20e0 = 0;
  local_20d8 = local_18c8;
  local_20d0[0] = 0;
  FUN_1400f2fd0(local_80e8,0,1);
  uVar7 = (ulonglong)local_18c8[0];
  if (local_20d0[0] != 0 && 3 < local_18c8[0]) {
    uVar15 = 3;
    auVar87 = ZEXT464(0x7f7fffff);
    auVar89 = ZEXT1264(ZEXT812(0));
    auVar90 = ZEXT1264(ZEXT812(0));
    do {
      if (local_20d0[0] != 0) {
        auVar41 = ZEXT1264(ZEXT812(0));
        lVar11 = 0;
        lVar14 = 0;
        do {
          lVar12 = *(longlong *)((longlong)local_20c8 + lVar11);
          if (*(char *)(lVar12 + 0x5e) == '\0') {
            auVar33 = vsubps_avx(*(undefined1 (*) [16])(local_18b8 + uVar15 * 0x10),
                                 *(undefined1 (*) [16])(lVar12 + 0x40));
            auVar47 = *(undefined1 (*) [16])(lVar12 + 0x30);
            fVar32 = auVar47._0_4_;
            auVar66._0_4_ = fVar32 * auVar33._0_4_;
            fVar44 = auVar47._4_4_;
            auVar66._4_4_ = fVar44 * auVar33._4_4_;
            fVar42 = auVar47._8_4_;
            auVar66._8_4_ = fVar42 * auVar33._8_4_;
            fVar43 = auVar47._12_4_;
            auVar66._12_4_ = fVar43 * auVar33._12_4_;
            auVar47 = vblendps_avx(auVar66,auVar89._0_16_,8);
            auVar33 = vinsertps_avx(auVar66,auVar66,0x4c);
            auVar67._0_4_ = auVar47._0_4_ + auVar33._0_4_;
            auVar67._4_4_ = auVar47._4_4_ + auVar33._4_4_;
            auVar67._8_4_ = auVar47._8_4_ + auVar33._8_4_;
            auVar67._12_4_ = auVar47._12_4_ + auVar33._12_4_;
            auVar47 = vshufpd_avx(auVar67,auVar67,1);
            fVar63 = auVar67._0_4_ + auVar47._0_4_;
            if (auVar90._0_4_ < fVar63) {
              auVar50._0_4_ = fVar32 * fVar32;
              auVar50._4_4_ = fVar44 * fVar44;
              auVar50._8_4_ = fVar42 * fVar42;
              auVar50._12_4_ = fVar43 * fVar43;
              auVar47 = vinsertps_avx(auVar50,auVar50,0x4c);
              auVar51._0_4_ = auVar50._0_4_ + auVar47._0_4_;
              auVar51._4_4_ = auVar50._4_4_ + auVar47._4_4_;
              auVar51._8_4_ = auVar50._8_4_ + auVar47._8_4_;
              auVar51._12_4_ = auVar50._12_4_ + auVar47._12_4_;
              auVar47 = vshufpd_avx(auVar51,auVar51,1);
              fVar44 = (fVar63 * fVar63) / (auVar51._0_4_ + auVar47._0_4_);
              fVar32 = auVar41._0_4_;
              auVar47 = vmaxss_avx(ZEXT416((uint)fVar44),auVar41._0_16_);
              auVar41 = ZEXT1664(auVar47);
              if (fVar32 < fVar44) {
                lVar14 = lVar12;
              }
            }
          }
          lVar11 = lVar11 + 8;
        } while ((ulonglong)local_20d0[0] << 3 != lVar11);
        if (lVar14 != 0) {
          local_84f0[0] = 0;
          local_85e8 = local_84f0;
          pauVar8 = (undefined1 (*) [16])
                    FUN_1400f3190(local_80e8,lVar14,uVar15 & 0xffffffff,auVar87._0_8_);
          auVar47 = in_ZMM8._0_16_;
          if ((char)pauVar8 == '\0') goto LAB_1405bf5f3;
          uVar7 = (ulonglong)local_18c8[0];
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar7);
  }
  fVar32 = 0.0;
  auVar87 = ZEXT464(0x7f7fffff);
  local_85d0 = pauVar13;
  do {
    while( true ) {
      pauVar13 = local_20c8[0];
      uVar1 = local_20d0[0];
      auVar47 = in_ZMM8._0_16_;
      if (local_20c8[0][5][0xe] != '\x01') break;
      pauVar9 = (undefined1 (*) [16])(ulonglong)local_20d0[0];
      pauVar8 = *(undefined1 (**) [16])(local_20d0 + (longlong)pauVar9 * 2);
      *(undefined1 (**) [16])(local_20d0 + (longlong)pauVar9 * 2) = local_20c8[0];
      local_20c8[0] = pauVar8;
      if ((undefined1 (*) [16])0x2 < pauVar9) {
        pauVar9 = (undefined1 (*) [16])(pauVar9[-1] + 0xf);
        lVar14 = 1;
        lVar11 = 0;
        lVar12 = 0;
        do {
          if (*(float *)pauVar8[5] <= *(float *)local_20c8[lVar14][5]) {
            lVar14 = lVar12;
          }
          lVar5 = lVar14;
          if ((lVar11 + 2 < (longlong)pauVar9) &&
             (lVar5 = lVar11 + 2,
             *(float *)local_20c8[lVar14][5] <= *(float *)(alStack_20b8[lVar11] + 0x50))) {
            lVar5 = lVar14;
          }
          if (lVar12 == lVar5) break;
          local_20c8[lVar12] = local_20c8[lVar5];
          local_20c8[lVar5] = pauVar8;
          lVar11 = lVar5 * 2;
          lVar14 = lVar5 * 2 + 1;
          lVar12 = lVar5;
        } while (lVar14 < (longlong)pauVar9);
      }
      local_20d0[0] = local_20d0[0] - 1;
      if (local_20d0[0] == 0) goto LAB_1405bef5b;
      *(undefined1 (**) [16])*pauVar13 = local_20e8;
      local_20e8 = pauVar13;
    }
    uVar7 = (ulonglong)local_20d0[0];
    if (fVar32 <= *(float *)local_20c8[0][5]) {
      pauVar9 = (undefined1 (*) [16])0x0;
      auVar89 = ZEXT1264(ZEXT812(0));
      fVar32 = 0.0;
      goto LAB_1405bef93;
    }
    pauVar8 = *(undefined1 (**) [16])(local_20d0 + uVar7 * 2);
    *(undefined1 (**) [16])(local_20d0 + uVar7 * 2) = local_20c8[0];
    local_20c8[0] = pauVar8;
    if (2 < uVar1) {
      lVar14 = 1;
      lVar11 = 0;
      lVar12 = 0;
      do {
        if (*(float *)pauVar8[5] <= *(float *)local_20c8[lVar14][5]) {
          lVar14 = lVar12;
        }
        lVar5 = lVar14;
        if ((lVar11 + 2 < (longlong)(uVar7 - 1)) &&
           (lVar5 = lVar11 + 2,
           *(float *)local_20c8[lVar14][5] <= *(float *)(alStack_20b8[lVar11] + 0x50))) {
          lVar5 = lVar14;
        }
        if (lVar12 == lVar5) break;
        local_20c8[lVar12] = local_20c8[lVar5];
        local_20c8[lVar5] = pauVar8;
        lVar11 = lVar5 * 2;
        lVar14 = lVar5 * 2 + 1;
        lVar12 = lVar5;
      } while (lVar14 < (longlong)(uVar7 - 1));
    }
    local_20d0[0] = local_20d0[0] - 1;
    local_8598 = *(undefined8 *)pauVar13[3];
    uStack_8590 = *(undefined8 *)(pauVar13[3] + 8);
    local_85e8 = (uint *)&local_8598;
    local_85e0 = (uint *)local_8518;
    pauVar9 = (undefined1 (*) [16])FUN_1405bf700(local_18c8,local_8508,param_2);
    auVar47 = in_ZMM8._0_16_;
    local_84f0[0] = 0;
    auVar33 = vsubps_avx(_local_8508,pauVar13[4]);
    auVar17._0_4_ = auVar33._0_4_ * *(float *)pauVar13[3];
    auVar17._4_4_ = auVar33._4_4_ * *(float *)(pauVar13[3] + 4);
    auVar17._8_4_ = auVar33._8_4_ * *(float *)(pauVar13[3] + 8);
    auVar17._12_4_ = auVar33._12_4_ * *(float *)(pauVar13[3] + 0xc);
    auVar33 = vinsertps_avx(auVar17,auVar17,0x4c);
    auVar18._0_4_ = auVar17._0_4_ + auVar33._0_4_;
    auVar18._4_4_ = auVar17._4_4_ + auVar33._4_4_;
    auVar18._8_4_ = auVar17._8_4_ + auVar33._8_4_;
    auVar18._12_4_ = auVar17._12_4_ + auVar33._12_4_;
    auVar33 = vshufpd_avx(auVar18,auVar18,1);
    if (auVar18._0_4_ + auVar33._0_4_ <= fVar32) break;
    local_85e8 = local_84f0;
    pauVar9 = (undefined1 (*) [16])FUN_1400f3190(local_80e8,pauVar13,local_8518._0_4_,auVar87._0_8_)
    ;
    pauVar8 = local_20e8;
    auVar47 = in_ZMM8._0_16_;
    if ((char)pauVar9 == '\0') break;
    *(undefined1 (**) [16])*pauVar13 = local_20e8;
    local_20e8 = pauVar13;
    pauVar9 = pauVar8;
    if ((local_20d0[0] == 0) || (0x1f < local_18c8[0])) break;
  } while( true );
LAB_1405bef5b:
  uVar7 = 0;
joined_r0x0001405bf6dc:
  uVar10 = (undefined4)((ulonglong)pauVar9 >> 0x20);
  pauVar13 = local_85d0;
  goto joined_r0x0001405bf5f6;
LAB_1405bef93:
  auVar47 = in_ZMM8._0_16_;
  pauVar13 = *(undefined1 (**) [16])(local_20d0 + uVar7 * 2);
  *(undefined1 (**) [16])(local_20d0 + uVar7 * 2) = local_20c8[0];
  local_20c8[0] = pauVar13;
  if (2 < (uint)uVar7) {
    lVar14 = 1;
    lVar11 = 0;
    lVar12 = 0;
    do {
      if (*(float *)pauVar13[5] <= *(float *)local_20c8[lVar14][5]) {
        lVar14 = lVar12;
      }
      lVar5 = lVar14;
      if ((lVar11 + 2 < (longlong)(uVar7 - 1)) &&
         (lVar5 = lVar11 + 2,
         *(float *)local_20c8[lVar14][5] <= *(float *)(alStack_20b8[lVar11] + 0x50))) {
        lVar5 = lVar14;
      }
      if (lVar12 == lVar5) break;
      local_20c8[lVar12] = local_20c8[lVar5];
      local_20c8[lVar5] = pauVar13;
      lVar11 = lVar5 * 2;
      lVar14 = lVar5 * 2 + 1;
      lVar12 = lVar5;
    } while (lVar14 < (longlong)(uVar7 - 1));
  }
  pauVar16 = local_20c8[local_20d0[0] - 1];
  local_20d0[0] = local_20d0[0] - 1;
  pauVar8 = param_5;
  if (pauVar16[5][0xe] == '\x01') {
    *(undefined1 (**) [16])*pauVar16 = local_20e8;
    local_20e8 = pauVar16;
LAB_1405bf220:
    auVar47 = in_ZMM8._0_16_;
    uVar7 = (ulonglong)local_20d0[0];
    if ((local_20d0[0] == 0) || (0x7f < local_18c8[0])) goto LAB_1405bf4a9;
    goto LAB_1405bef93;
  }
  if (*(float *)pauVar16[5] < auVar87._0_4_) {
    if (pauVar9 != (undefined1 (*) [16])0x0) {
      *(undefined1 (**) [16])*pauVar9 = local_20e8;
      local_20e8 = pauVar9;
    }
    local_85c8 = *(undefined8 *)pauVar16[3];
    uStack_85c0 = *(undefined8 *)(pauVar16[3] + 8);
    local_85e8 = (uint *)&local_85c8;
    local_85e0 = &local_859c;
    pauVar9 = (undefined1 (*) [16])FUN_1405bf700(local_18c8,local_85b8,param_2,param_3);
    auVar47 = in_ZMM8._0_16_;
    fVar44 = *(float *)pauVar16[3];
    fVar42 = *(float *)(pauVar16[3] + 4);
    fVar43 = *(float *)(pauVar16[3] + 8);
    fVar63 = *(float *)(pauVar16[3] + 0xc);
    auVar52._0_4_ = local_85b8._0_4_ * fVar44;
    auVar52._4_4_ = local_85b8._4_4_ * fVar42;
    auVar52._8_4_ = local_85b8._8_4_ * fVar43;
    auVar52._12_4_ = local_85b8._12_4_ * fVar63;
    auVar33 = vblendps_avx(auVar52,auVar89._0_16_,8);
    auVar49 = vinsertps_avx(auVar52,auVar52,0x4c);
    auVar53._0_4_ = auVar33._0_4_ + auVar49._0_4_;
    auVar53._4_4_ = auVar33._4_4_ + auVar49._4_4_;
    auVar53._8_4_ = auVar33._8_4_ + auVar49._8_4_;
    auVar53._12_4_ = auVar33._12_4_ + auVar49._12_4_;
    auVar33 = vshufpd_avx(auVar53,auVar53,1);
    fVar88 = auVar53._0_4_ + auVar33._0_4_;
    if (fVar88 < fVar32) goto LAB_1405bef5b;
    auVar54._0_4_ = fVar44 * fVar44;
    auVar54._4_4_ = fVar42 * fVar42;
    auVar54._8_4_ = fVar43 * fVar43;
    auVar54._12_4_ = fVar63 * fVar63;
    auVar33 = vinsertps_avx(auVar54,auVar54,0x4c);
    auVar55._0_4_ = auVar54._0_4_ + auVar33._0_4_;
    auVar55._4_4_ = auVar54._4_4_ + auVar33._4_4_;
    auVar55._8_4_ = auVar54._8_4_ + auVar33._8_4_;
    auVar55._12_4_ = auVar54._12_4_ + auVar33._12_4_;
    auVar33 = vshufpd_avx(auVar55,auVar55,1);
    fVar45 = (fVar88 * fVar88) / (auVar55._0_4_ + auVar33._0_4_);
    if (auVar84._0_4_ * *(float *)pauVar16[5] <= fVar45 - *(float *)pauVar16[5]) {
      auVar33 = vsubps_avx(local_85b8,pauVar16[4]);
      auVar19._0_4_ = fVar44 * auVar33._0_4_;
      auVar19._4_4_ = fVar42 * auVar33._4_4_;
      auVar19._8_4_ = fVar43 * auVar33._8_4_;
      auVar19._12_4_ = fVar63 * auVar33._12_4_;
      auVar33 = vinsertps_avx(auVar19,auVar19,0x4c);
      auVar20._0_4_ = auVar19._0_4_ + auVar33._0_4_;
      auVar20._4_4_ = auVar19._4_4_ + auVar33._4_4_;
      auVar20._8_4_ = auVar19._8_4_ + auVar33._8_4_;
      auVar20._12_4_ = auVar19._12_4_ + auVar33._12_4_;
      auVar33 = vshufpd_avx(auVar20,auVar20,1);
      if (fVar32 < auVar20._0_4_ + auVar33._0_4_) {
        auVar47 = vminss_avx(ZEXT416((uint)fVar45),auVar87._0_16_);
        auVar87 = ZEXT1664(auVar47);
        local_84f0[0] = 0;
        local_85e8 = local_84f0;
        cVar6 = FUN_1400f3190(local_80e8,pauVar16,local_859c,auVar47._0_8_);
        auVar47 = in_ZMM8._0_16_;
        if (cVar6 != '\0') {
          pauVar9 = pauVar16;
          if ((ulonglong)local_84f0[0] != 0) {
            lVar14 = 0;
            do {
              lVar11 = *(longlong *)((longlong)alStack_84e8 + lVar14);
              auVar21._0_4_ = *(float *)(lVar11 + 0x40) * *(float *)(lVar11 + 0x30);
              auVar21._4_4_ = *(float *)(lVar11 + 0x44) * *(float *)(lVar11 + 0x34);
              auVar21._8_4_ = *(float *)(lVar11 + 0x48) * *(float *)(lVar11 + 0x38);
              auVar21._12_4_ = *(float *)(lVar11 + 0x4c) * *(float *)(lVar11 + 0x3c);
              auVar47 = vinsertps_avx(auVar21,auVar21,0x4c);
              auVar22._0_4_ = auVar21._0_4_ + auVar47._0_4_;
              auVar22._4_4_ = auVar21._4_4_ + auVar47._4_4_;
              auVar22._8_4_ = auVar21._8_4_ + auVar47._8_4_;
              auVar22._12_4_ = auVar21._12_4_ + auVar47._12_4_;
              auVar47 = vshufpd_avx(auVar22,auVar22,1);
              if (auVar22._0_4_ + auVar47._0_4_ < fVar32) {
                auVar49 = vsubps_avx(ZEXT816(0),pauVar16[3]);
                auVar47 = vdpps_avx(auVar49,*param_2,0x7f);
                auVar33 = vdpps_avx(auVar49,param_2[1],0x7f);
                auVar49 = vdpps_avx(auVar49,param_2[2],0x7f);
                puVar2 = *(undefined8 **)param_2[4];
                auVar47 = vblendps_avx(auVar47,auVar33,2);
                auVar47 = vblendps_avx(auVar49,auVar47,3);
                auVar84 = ZEXT1664(auVar47);
                auVar23._0_4_ = auVar47._0_4_ * auVar47._0_4_;
                auVar23._4_4_ = auVar47._4_4_ * auVar47._4_4_;
                auVar23._8_4_ = auVar47._8_4_ * auVar47._8_4_;
                auVar23._12_4_ = auVar47._12_4_ * auVar47._12_4_;
                auVar33 = vinsertps_avx(auVar23,auVar23,0x4c);
                auVar24._0_4_ = auVar23._0_4_ + auVar33._0_4_;
                auVar24._4_4_ = auVar23._4_4_ + auVar33._4_4_;
                auVar24._8_4_ = auVar23._8_4_ + auVar33._8_4_;
                auVar24._12_4_ = auVar23._12_4_ + auVar33._12_4_;
                auVar33 = vshufpd_avx(auVar24,auVar24,1);
                fVar32 = auVar24._0_4_ + auVar33._0_4_;
                if (fVar32 <= 0.0) {
                  _local_8508 = auVar47;
                  (**(code **)(*(longlong *)*puVar2 + 8))((longlong *)*puVar2,local_8518,local_8508)
                  ;
                  auVar47 = in_ZMM8._0_16_;
                  auVar26 = local_8518;
                }
                else {
                  auVar33 = vsqrtss_avx(ZEXT416((uint)fVar32),ZEXT416((uint)fVar32));
                  auVar87 = ZEXT1664(auVar33);
                  local_8518 = auVar47;
                  (**(code **)(*(longlong *)*puVar2 + 8))((longlong *)*puVar2,local_8508,local_8518)
                  ;
                  auVar47 = in_ZMM8._0_16_;
                  auVar25._0_4_ = *(float *)(puVar2 + 1) / auVar87._0_4_;
                  auVar25._4_12_ = SUB6012((undefined1  [60])0x0,0);
                  auVar33 = vshufps_avx(auVar25,auVar25,0);
                  auVar26._0_4_ = auVar84._0_4_ * auVar33._0_4_ + (float)local_8508._0_4_;
                  auVar26._4_4_ = auVar84._4_4_ * auVar33._4_4_ + (float)local_8508._4_4_;
                  auVar26._8_4_ = auVar84._8_4_ * auVar33._8_4_ + fStack_8500;
                  auVar26._12_4_ = auVar84._12_4_ * auVar33._12_4_ + fStack_84fc;
                }
                auVar33 = vshufps_avx(auVar26,auVar26,0);
                auVar49 = vshufps_avx(auVar26,auVar26,0x55);
                auVar64 = vshufps_avx(auVar26,auVar26,0xaa);
                auVar27._0_4_ =
                     auVar33._0_4_ * *(float *)*param_2 + auVar49._0_4_ * *(float *)param_2[1] +
                     auVar64._0_4_ * *(float *)param_2[2] + *(float *)param_2[3];
                auVar27._4_4_ =
                     auVar33._4_4_ * *(float *)(*param_2 + 4) +
                     auVar49._4_4_ * *(float *)(param_2[1] + 4) +
                     auVar64._4_4_ * *(float *)(param_2[2] + 4) + *(float *)(param_2[3] + 4);
                auVar27._8_4_ =
                     auVar33._8_4_ * *(float *)(*param_2 + 8) +
                     auVar49._8_4_ * *(float *)(param_2[1] + 8) +
                     auVar64._8_4_ * *(float *)(param_2[2] + 8) + *(float *)(param_2[3] + 8);
                auVar27._12_4_ =
                     auVar33._12_4_ * *(float *)(*param_2 + 0xc) +
                     auVar49._12_4_ * *(float *)(param_2[1] + 0xc) +
                     auVar64._12_4_ * *(float *)(param_2[2] + 0xc) + *(float *)(param_2[3] + 0xc);
                fVar44 = *(float *)pauVar16[3];
                fVar42 = *(float *)(pauVar16[3] + 4);
                fVar43 = *(float *)(pauVar16[3] + 8);
                fVar63 = *(float *)(pauVar16[3] + 0xc);
                auVar56._0_4_ = fVar44 * fVar44;
                auVar56._4_4_ = fVar42 * fVar42;
                auVar56._8_4_ = fVar43 * fVar43;
                auVar56._12_4_ = fVar63 * fVar63;
                auVar33 = vinsertps_avx(auVar56,auVar56,0x4c);
                auVar57._0_4_ = auVar56._0_4_ + auVar33._0_4_;
                auVar57._4_4_ = auVar56._4_4_ + auVar33._4_4_;
                auVar57._8_4_ = auVar56._8_4_ + auVar33._8_4_;
                auVar57._12_4_ = auVar56._12_4_ + auVar33._12_4_;
                auVar33 = vshufpd_avx(auVar57,auVar57,1);
                fVar32 = auVar57._0_4_ + auVar33._0_4_;
                if (fVar32 <= 0.0) {
                  pfVar3 = (float *)*param_3;
                  auVar59._0_4_ = fVar44 * *pfVar3;
                  auVar59._4_4_ = fVar42 * pfVar3[1];
                  auVar59._8_4_ = fVar43 * pfVar3[2];
                  auVar59._12_4_ = fVar63 * pfVar3[3];
                  auVar33 = vinsertps_avx(auVar59,auVar59,0x4c);
                  auVar60._0_4_ = auVar59._0_4_ + auVar33._0_4_;
                  auVar60._4_4_ = auVar59._4_4_ + auVar33._4_4_;
                  auVar60._8_4_ = auVar59._8_4_ + auVar33._8_4_;
                  auVar60._12_4_ = auVar59._12_4_ + auVar33._12_4_;
                  auVar33 = vshufpd_avx(auVar60,auVar60,1);
                  fVar32 = auVar60._0_4_ + auVar33._0_4_;
                  auVar70._0_4_ = fVar44 * pfVar3[4];
                  auVar70._4_4_ = fVar42 * pfVar3[5];
                  auVar70._8_4_ = fVar43 * pfVar3[6];
                  auVar70._12_4_ = fVar63 * pfVar3[7];
                  auVar33 = vinsertps_avx(auVar70,auVar70,0x4c);
                  auVar71._0_4_ = auVar70._0_4_ + auVar33._0_4_;
                  auVar71._4_4_ = auVar70._4_4_ + auVar33._4_4_;
                  auVar71._8_4_ = auVar70._8_4_ + auVar33._8_4_;
                  auVar71._12_4_ = auVar70._12_4_ + auVar33._12_4_;
                  auVar33 = vshufpd_avx(auVar71,auVar71,1);
                  fVar45 = auVar71._0_4_ + auVar33._0_4_;
                  auVar79._0_4_ = fVar44 * pfVar3[8];
                  auVar79._4_4_ = fVar42 * pfVar3[9];
                  auVar79._8_4_ = fVar43 * pfVar3[10];
                  auVar79._12_4_ = fVar63 * pfVar3[0xb];
                  auVar33 = vinsertps_avx(auVar79,auVar79,0x4c);
                  auVar80._0_4_ = auVar79._0_4_ + auVar33._0_4_;
                  auVar80._4_4_ = auVar79._4_4_ + auVar33._4_4_;
                  auVar80._8_4_ = auVar79._8_4_ + auVar33._8_4_;
                  auVar80._12_4_ = auVar79._12_4_ + auVar33._12_4_;
                  auVar49 = vshufpd_avx(auVar80,auVar80,1);
                  auVar33 = vmaxss_avx(ZEXT416((uint)fVar32),ZEXT416((uint)fVar45));
                  lVar14 = 0x20;
                  if (auVar80._0_4_ + auVar49._0_4_ < auVar33._0_4_) {
                    lVar14 = (ulonglong)(fVar32 <= fVar45) << 4;
                  }
                  auVar58 = *(undefined1 (*) [16])((longlong)pfVar3 + lVar14);
                }
                else {
                  pfVar3 = (float *)*param_3;
                  auVar68._0_4_ = fVar44 * *pfVar3;
                  auVar68._4_4_ = fVar42 * pfVar3[1];
                  auVar68._8_4_ = fVar43 * pfVar3[2];
                  auVar68._12_4_ = fVar63 * pfVar3[3];
                  auVar33 = vinsertps_avx(auVar68,auVar68,0x4c);
                  auVar69._0_4_ = auVar68._0_4_ + auVar33._0_4_;
                  auVar69._4_4_ = auVar68._4_4_ + auVar33._4_4_;
                  auVar69._8_4_ = auVar68._8_4_ + auVar33._8_4_;
                  auVar69._12_4_ = auVar68._12_4_ + auVar33._12_4_;
                  auVar33 = vshufpd_avx(auVar69,auVar69,1);
                  auVar81._0_4_ = fVar44 * pfVar3[4];
                  auVar81._4_4_ = fVar42 * pfVar3[5];
                  auVar81._8_4_ = fVar43 * pfVar3[6];
                  auVar81._12_4_ = fVar63 * pfVar3[7];
                  fVar45 = auVar69._0_4_ + auVar33._0_4_;
                  auVar33 = vinsertps_avx(auVar81,auVar81,0x4c);
                  auVar78._0_4_ = auVar81._0_4_ + auVar33._0_4_;
                  auVar78._4_4_ = auVar81._4_4_ + auVar33._4_4_;
                  auVar78._8_4_ = auVar81._8_4_ + auVar33._8_4_;
                  auVar78._12_4_ = auVar81._12_4_ + auVar33._12_4_;
                  auVar33 = vshufpd_avx(auVar78,auVar78,1);
                  fVar72 = auVar78._0_4_ + auVar33._0_4_;
                  auVar82._0_4_ = fVar44 * pfVar3[8];
                  auVar82._4_4_ = fVar42 * pfVar3[9];
                  auVar82._8_4_ = fVar43 * pfVar3[10];
                  auVar82._12_4_ = fVar63 * pfVar3[0xb];
                  auVar33 = vinsertps_avx(auVar82,auVar82,0x4c);
                  auVar83._0_4_ = auVar82._0_4_ + auVar33._0_4_;
                  auVar83._4_4_ = auVar82._4_4_ + auVar33._4_4_;
                  auVar83._8_4_ = auVar82._8_4_ + auVar33._8_4_;
                  auVar83._12_4_ = auVar82._12_4_ + auVar33._12_4_;
                  auVar49 = vshufpd_avx(auVar83,auVar83,1);
                  auVar33 = vmaxss_avx(ZEXT416((uint)fVar45),ZEXT416((uint)fVar72));
                  lVar14 = 0x20;
                  if (auVar83._0_4_ + auVar49._0_4_ < auVar33._0_4_) {
                    lVar14 = (ulonglong)(fVar45 <= fVar72) << 4;
                  }
                  auVar33 = vsqrtss_avx(ZEXT416((uint)fVar32),ZEXT416((uint)fVar32));
                  auVar33 = ZEXT416((uint)(*(float *)(param_3 + 1) / auVar33._0_4_));
                  auVar33 = vshufps_avx(auVar33,auVar33,0);
                  pfVar3 = (float *)((longlong)pfVar3 + lVar14);
                  auVar58._0_4_ = fVar44 * auVar33._0_4_ + *pfVar3;
                  auVar58._4_4_ = fVar42 * auVar33._4_4_ + pfVar3[1];
                  auVar58._8_4_ = fVar43 * auVar33._8_4_ + pfVar3[2];
                  auVar58._12_4_ = fVar63 * auVar33._12_4_ + pfVar3[3];
                }
                auVar33 = vsubps_avx(auVar27,auVar58);
                auVar28._0_4_ = fVar44 * auVar33._0_4_;
                auVar28._4_4_ = fVar42 * auVar33._4_4_;
                auVar28._8_4_ = fVar43 * auVar33._8_4_;
                auVar28._12_4_ = fVar63 * auVar33._12_4_;
                auVar33 = vinsertps_avx(auVar28,auVar28,0x4c);
                auVar29._0_4_ = auVar28._0_4_ + auVar33._0_4_;
                auVar29._4_4_ = auVar28._4_4_ + auVar33._4_4_;
                auVar29._8_4_ = auVar28._8_4_ + auVar33._8_4_;
                auVar29._12_4_ = auVar28._12_4_ + auVar33._12_4_;
                auVar33 = vshufpd_avx(auVar29,auVar29,1);
                bVar4 = -(auVar29._0_4_ + auVar33._0_4_) < fVar88;
                goto LAB_1405bf4c9;
              }
              lVar14 = lVar14 + 8;
            } while ((ulonglong)local_84f0[0] << 3 != lVar14);
          }
          goto LAB_1405bf220;
        }
      }
    }
    bVar4 = false;
    goto LAB_1405bf4c9;
  }
LAB_1405bf4a9:
  bVar4 = false;
  pauVar13 = local_85d0;
  pauVar16 = pauVar9;
  if (pauVar9 != (undefined1 (*) [16])0x0) {
LAB_1405bf4c9:
    fVar32 = *(float *)pauVar16[3];
    fVar44 = *(float *)(pauVar16[3] + 4);
    fVar42 = *(float *)(pauVar16[3] + 8);
    fVar43 = *(float *)(pauVar16[3] + 0xc);
    auVar36._0_4_ = fVar32 * *(float *)pauVar16[4];
    auVar36._4_4_ = fVar44 * *(float *)(pauVar16[4] + 4);
    auVar36._8_4_ = fVar42 * *(float *)(pauVar16[4] + 8);
    auVar36._12_4_ = fVar43 * *(float *)(pauVar16[4] + 0xc);
    auVar33 = vinsertps_avx(auVar36,auVar36,0x4c);
    auVar37._0_4_ = auVar36._0_4_ + auVar33._0_4_;
    auVar37._4_4_ = auVar36._4_4_ + auVar33._4_4_;
    auVar37._8_4_ = auVar36._8_4_ + auVar33._8_4_;
    auVar37._12_4_ = auVar36._12_4_ + auVar33._12_4_;
    auVar61._0_4_ = fVar32 * fVar32;
    auVar61._4_4_ = fVar44 * fVar44;
    auVar61._8_4_ = fVar42 * fVar42;
    auVar61._12_4_ = fVar43 * fVar43;
    auVar33 = vinsertps_avx(auVar61,auVar61,0x4c);
    auVar62._0_4_ = auVar61._0_4_ + auVar33._0_4_;
    auVar62._4_4_ = auVar61._4_4_ + auVar33._4_4_;
    auVar62._8_4_ = auVar61._8_4_ + auVar33._8_4_;
    auVar62._12_4_ = auVar61._12_4_ + auVar33._12_4_;
    auVar33 = vshufpd_avx(auVar37,auVar37,1);
    auVar49 = vshufpd_avx(auVar62,auVar62,1);
    auVar38._0_4_ = (auVar37._0_4_ + auVar33._0_4_) / (auVar62._0_4_ + auVar49._0_4_);
    auVar38._4_12_ = SUB6012((undefined1  [60])0x0,0);
    auVar33 = vshufps_avx(auVar38,auVar38,0);
    auVar30._0_4_ = fVar32 * auVar33._0_4_;
    auVar30._4_4_ = fVar44 * auVar33._4_4_;
    auVar30._8_4_ = fVar42 * auVar33._8_4_;
    auVar30._12_4_ = fVar43 * auVar33._12_4_;
    *param_5 = auVar30;
    auVar39._0_4_ = auVar30._0_4_ * auVar30._0_4_;
    auVar39._4_4_ = auVar30._4_4_ * auVar30._4_4_;
    auVar39._8_4_ = auVar30._8_4_ * auVar30._8_4_;
    auVar39._12_4_ = auVar30._12_4_ * auVar30._12_4_;
    auVar33 = vinsertps_avx(auVar39,auVar39,0x4c);
    auVar40._0_4_ = auVar39._0_4_ + auVar33._0_4_;
    auVar40._4_4_ = auVar39._4_4_ + auVar33._4_4_;
    auVar40._8_4_ = auVar39._8_4_ + auVar33._8_4_;
    auVar40._12_4_ = auVar39._12_4_ + auVar33._12_4_;
    auVar33 = vshufpd_avx(auVar40,auVar40,1);
    pauVar13 = local_85d0;
    if (1e-12 < auVar40._0_4_ + auVar33._0_4_) {
      if (bVar4) {
        auVar33 = vsubps_avx(ZEXT816(0),auVar30);
        *param_5 = auVar33;
      }
      lVar14 = (longlong)*(int *)(*pauVar16 + 0xc) * 0x10;
      auVar33 = *(undefined1 (*) [16])(local_10b8 + lVar14);
      lVar11 = (longlong)*(int *)(pauVar16[1] + 0xc) * 0x10;
      auVar49 = *(undefined1 (*) [16])(local_10b8 + lVar11);
      lVar12 = (longlong)*(int *)(pauVar16[2] + 0xc) * 0x10;
      auVar64 = *(undefined1 (*) [16])(local_8b8 + lVar14);
      auVar66 = *(undefined1 (*) [16])(local_8b8 + lVar11);
      auVar34 = *(undefined1 (*) [16])(local_8b8 + lVar12);
      fVar32 = *(float *)(pauVar16[5] + 4);
      fVar44 = *(float *)(pauVar16[5] + 8);
      if (pauVar16[5][0xc] == '\x01') {
        auVar49 = vsubps_avx(auVar49,auVar33);
        auVar35 = vsubps_avx(*(undefined1 (*) [16])(local_10b8 + lVar12),auVar33);
        *param_6 = auVar33._0_4_ + auVar49._0_4_ * fVar32 + auVar35._0_4_ * fVar44;
        param_6[1] = auVar33._4_4_ + auVar49._4_4_ * fVar32 + auVar35._4_4_ * fVar44;
        param_6[2] = auVar33._8_4_ + auVar49._8_4_ * fVar32 + auVar35._8_4_ * fVar44;
        param_6[3] = auVar33._12_4_ + auVar49._12_4_ * fVar32 + auVar35._12_4_ * fVar44;
        auVar33 = vsubps_avx(auVar66,auVar64);
        fVar32 = *(float *)(pauVar16[5] + 4);
        auVar49 = vsubps_avx(auVar34,auVar64);
        fVar44 = *(float *)(pauVar16[5] + 8);
        auVar31._0_4_ = auVar64._0_4_ + auVar33._0_4_ * fVar32 + auVar49._0_4_ * fVar44;
        auVar31._4_4_ = auVar64._4_4_ + auVar33._4_4_ * fVar32 + auVar49._4_4_ * fVar44;
        auVar31._8_4_ = auVar64._8_4_ + auVar33._8_4_ * fVar32 + auVar49._8_4_ * fVar44;
        auVar31._12_4_ = auVar64._12_4_ + auVar33._12_4_ * fVar32 + auVar49._12_4_ * fVar44;
      }
      else {
        auVar33 = vsubps_avx(auVar33,auVar49);
        auVar35 = vsubps_avx(*(undefined1 (*) [16])(local_10b8 + lVar12),auVar49);
        *param_6 = auVar49._0_4_ + auVar33._0_4_ * fVar32 + auVar35._0_4_ * fVar44;
        param_6[1] = auVar49._4_4_ + auVar33._4_4_ * fVar32 + auVar35._4_4_ * fVar44;
        param_6[2] = auVar49._8_4_ + auVar33._8_4_ * fVar32 + auVar35._8_4_ * fVar44;
        param_6[3] = auVar49._12_4_ + auVar33._12_4_ * fVar32 + auVar35._12_4_ * fVar44;
        auVar33 = vsubps_avx(auVar64,auVar66);
        fVar32 = *(float *)(pauVar16[5] + 4);
        auVar49 = vsubps_avx(auVar34,auVar66);
        fVar44 = *(float *)(pauVar16[5] + 8);
        auVar31._0_4_ = auVar66._0_4_ + auVar33._0_4_ * fVar32 + auVar49._0_4_ * fVar44;
        auVar31._4_4_ = auVar66._4_4_ + auVar33._4_4_ * fVar32 + auVar49._4_4_ * fVar44;
        auVar31._8_4_ = auVar66._8_4_ + auVar33._8_4_ * fVar32 + auVar49._8_4_ * fVar44;
        auVar31._12_4_ = auVar66._12_4_ + auVar33._12_4_ * fVar32 + auVar49._12_4_ * fVar44;
      }
      *param_7 = auVar31;
      uVar7 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
      pauVar9 = param_7;
      goto joined_r0x0001405bf6dc;
    }
  }
LAB_1405bf5f3:
  uVar10 = (undefined4)((ulonglong)pauVar8 >> 0x20);
  uVar7 = 0;
joined_r0x0001405bf5f6:
  if (pauVar13 != (undefined1 (*) [16])0x0) {
    uVar15 = rdtsc();
    auVar33 = vpinsrq_avx(auVar47,uVar15 & 0xffffffff00000000 | CONCAT44(uVar10,(int)uVar15),1);
    auVar47 = vmovntdq_avx(SUB6416(ZEXT864(0x141360923),0));
    *pauVar13 = auVar47;
    auVar47 = vmovntdq_avx(auVar33);
    pauVar13[1] = auVar47;
  }
  if (DAT_1414ef3c0 == (local_b0 ^ (ulonglong)auStack_8608)) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_b0 ^ (ulonglong)auStack_8608);
}


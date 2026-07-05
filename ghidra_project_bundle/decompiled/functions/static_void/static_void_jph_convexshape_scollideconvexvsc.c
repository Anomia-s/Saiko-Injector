/**
 * Function: static_void_jph_convexshape_scollideconvexvsc
 * Address:  1400eb490
 * Signature: undefined static_void_jph_convexshape_scollideconvexvsc(void)
 * Body size: 2458 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void static_void_jph_convexshape_scollideconvexvsc
               (longlong *param_1,longlong *param_2,float *param_3,float *param_4,
               undefined1 (*param_5) [16],float *param_6,undefined4 *param_7,undefined4 *param_8,
               longlong param_9,longlong *param_10)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 extraout_RAX;
  undefined1 (*pauVar10) [16];
  float fVar11;
  undefined8 extraout_XMM0_Qa;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar12;
  float fVar13;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  float fVar27;
  float fVar32;
  float fVar33;
  undefined1 auVar28 [16];
  float fVar34;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar42;
  float fVar43;
  undefined1 auVar40 [16];
  float fVar44;
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [64];
  undefined1 auVar50 [64];
  undefined1 in_ZMM8 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  undefined1 auStack_23d8 [32];
  undefined1 (*local_23b8) [16];
  float *local_23b0;
  float *local_23a8;
  float *local_23a0;
  undefined1 (*local_2390) [16];
  float *local_2388;
  float *local_2380;
  undefined1 local_2378 [16];
  undefined8 local_2368;
  undefined8 uStack_2360;
  undefined1 local_2358 [16];
  undefined8 local_2348;
  undefined8 uStack_2340;
  undefined8 local_2338;
  undefined4 local_2330;
  undefined8 local_2328;
  undefined8 uStack_2320;
  undefined8 local_2318;
  undefined8 uStack_2310;
  undefined8 local_2308;
  undefined8 uStack_2300;
  undefined8 local_22f8;
  undefined8 uStack_22f0;
  undefined1 local_22e8 [16];
  undefined1 local_22d8 [8];
  float fStack_22d0;
  float fStack_22cc;
  undefined1 local_22c8 [8];
  float fStack_22c0;
  float fStack_22bc;
  undefined1 local_22b8 [16];
  undefined1 local_22a8 [16];
  undefined1 local_2298 [16];
  undefined1 local_2288 [16];
  undefined1 local_2278 [16];
  undefined1 local_2268 [16];
  longlong *local_2258;
  undefined4 local_2248 [1040];
  undefined1 local_1208 [8];
  float fStack_1200;
  float fStack_11fc;
  undefined1 local_11f8 [8];
  float fStack_11f0;
  float fStack_11ec;
  undefined1 local_11e8 [8];
  float fStack_11e0;
  float fStack_11dc;
  undefined1 local_11d8 [16];
  undefined1 local_11c8 [528];
  float local_fb8 [892];
  undefined1 local_1c8 [192];
  undefined4 local_108;
  ulonglong local_f0;
  undefined1 local_c8 [16];
  undefined8 uStack_48;
  
  uStack_48 = 0x1400eb4a6;
  local_c8 = in_ZMM8._0_16_;
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_23d8;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar5 == 0) {
LAB_1400eb5ca:
    pauVar10 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar4 = *(uint *)(lVar5 + 0x200020);
    if (0xffff < (ulonglong)uVar4) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      goto LAB_1400eb5ca;
    }
    *(uint *)(lVar5 + 0x200020) = uVar4 + 1;
    pauVar10 = (undefined1 (*) [16])(lVar5 + (ulonglong)uVar4 * 0x20 + 0x20);
    uVar6 = rdtsc();
    in_ZMM8 = ZEXT864(uVar6 & 0xffffffff00000000 |
                      CONCAT44((int)((ulonglong)lVar5 >> 0x20),(int)uVar6));
  }
  auVar40 = vmovlhps_avx(*param_5,param_5[1]);
  auVar15 = vunpckhpd_avx(*param_5,param_5[1]);
  auVar14 = vpunpckhqdq_avx(param_5[2],(undefined1  [16])0x0);
  auVar14 = vshufps_avx(auVar15,auVar14,0x88);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = SUB168(param_5[2],0);
  auVar15 = vshufps_avx(auVar40,auVar28,0x88);
  auVar40 = vshufps_avx(auVar40,auVar28,0xdd);
  fVar12 = *(float *)param_5[3];
  fVar35 = auVar15._0_4_;
  fVar36 = auVar15._4_4_;
  fVar37 = auVar15._8_4_;
  fVar38 = auVar15._12_4_;
  fVar13 = *(float *)(param_5[3] + 4);
  fVar27 = auVar40._0_4_;
  fVar32 = auVar40._4_4_;
  fVar33 = auVar40._8_4_;
  fVar34 = auVar40._12_4_;
  fVar1 = *(float *)(param_5[3] + 8);
  fVar11 = auVar14._0_4_;
  fVar24 = auVar14._4_4_;
  fVar25 = auVar14._8_4_;
  fVar26 = auVar14._12_4_;
  auVar40._0_4_ = fVar11 * fVar1 + fVar35 * fVar12 + fVar27 * fVar13;
  auVar40._4_4_ = fVar24 * fVar1 + fVar36 * fVar12 + fVar32 * fVar13;
  auVar40._8_4_ = fVar25 * fVar1 + fVar37 * fVar12 + fVar33 * fVar13;
  auVar40._12_4_ = fVar26 * fVar1 + fVar38 * fVar12 + fVar34 * fVar13;
  auVar40 = vsubps_avx((undefined1  [16])0x0,auVar40);
  auVar49 = ZEXT464(0x3f800000);
  auVar40 = vinsertps_avx(auVar40,auVar49._0_16_,0x30);
  fVar12 = *param_6;
  fVar13 = param_6[1];
  fVar1 = param_6[2];
  fVar2 = param_6[3];
  fVar39 = auVar40._0_4_;
  fVar42 = auVar40._4_4_;
  fVar43 = auVar40._8_4_;
  fVar44 = auVar40._12_4_;
  auVar51 = ZEXT1664(CONCAT412(fVar44 * fVar2 + fVar26 * fVar1 + fVar38 * fVar12 + fVar34 * fVar13,
                               CONCAT48(fVar43 * fVar2 +
                                        fVar25 * fVar1 + fVar37 * fVar12 + fVar33 * fVar13,
                                        CONCAT44(fVar42 * fVar2 +
                                                 fVar24 * fVar1 + fVar36 * fVar12 + fVar32 * fVar13,
                                                 fVar39 * fVar2 +
                                                 fVar11 * fVar1 + fVar35 * fVar12 + fVar27 * fVar13)
                                       )));
  fVar12 = param_6[4];
  fVar13 = param_6[5];
  fVar1 = param_6[6];
  fVar2 = param_6[7];
  auVar52 = ZEXT1664(CONCAT412(fVar44 * fVar2 + fVar26 * fVar1 + fVar38 * fVar12 + fVar34 * fVar13,
                               CONCAT48(fVar43 * fVar2 +
                                        fVar25 * fVar1 + fVar37 * fVar12 + fVar33 * fVar13,
                                        CONCAT44(fVar42 * fVar2 +
                                                 fVar24 * fVar1 + fVar36 * fVar12 + fVar32 * fVar13,
                                                 fVar39 * fVar2 +
                                                 fVar11 * fVar1 + fVar35 * fVar12 + fVar27 * fVar13)
                                       )));
  fVar12 = param_6[8];
  fVar13 = param_6[9];
  fVar1 = param_6[10];
  fVar2 = param_6[0xb];
  auVar53 = ZEXT1664(CONCAT412(fVar44 * fVar2 + fVar26 * fVar1 + fVar38 * fVar12 + fVar34 * fVar13,
                               CONCAT48(fVar43 * fVar2 +
                                        fVar25 * fVar1 + fVar37 * fVar12 + fVar33 * fVar13,
                                        CONCAT44(fVar42 * fVar2 +
                                                 fVar24 * fVar1 + fVar36 * fVar12 + fVar32 * fVar13,
                                                 fVar39 * fVar2 +
                                                 fVar11 * fVar1 + fVar35 * fVar12 + fVar27 * fVar13)
                                       )));
  fVar12 = param_6[0xc];
  fVar13 = param_6[0xd];
  fVar1 = param_6[0xe];
  fVar2 = param_6[0xf];
  auVar55 = ZEXT1664(CONCAT412(fVar44 * fVar2 + fVar26 * fVar1 + fVar38 * fVar12 + fVar34 * fVar13,
                               CONCAT48(fVar43 * fVar2 +
                                        fVar25 * fVar1 + fVar37 * fVar12 + fVar33 * fVar13,
                                        CONCAT44(fVar42 * fVar2 +
                                                 fVar24 * fVar1 + fVar36 * fVar12 + fVar32 * fVar13,
                                                 fVar39 * fVar2 +
                                                 fVar11 * fVar1 + fVar35 * fVar12 + fVar27 * fVar13)
                                       )));
  uVar3 = *(undefined4 *)(param_9 + 0x20);
  auVar54 = ZEXT1664(CONCAT412(uVar3,CONCAT48(uVar3,CONCAT44(uVar3,uVar3))));
  (**(code **)(*param_1 + 0x18))(param_1,local_1208);
  auVar29._0_4_ = *param_3 * (float)local_11f8._0_4_;
  auVar29._4_4_ = param_3[1] * (float)local_11f8._4_4_;
  auVar29._8_4_ = param_3[2] * fStack_11f0;
  auVar29._12_4_ = param_3[3] * fStack_11ec;
  auVar14._0_4_ = *param_3 * (float)local_1208._0_4_;
  auVar14._4_4_ = param_3[1] * (float)local_1208._4_4_;
  auVar14._8_4_ = param_3[2] * fStack_1200;
  auVar14._12_4_ = param_3[3] * fStack_11fc;
  auVar40 = vmaxps_avx(auVar14,auVar29);
  auVar14 = vminps_avx(auVar14,auVar29);
  local_22b8 = vsubps_avx(auVar14,auVar54._0_16_);
  local_22a8._0_4_ = auVar54._0_4_ + auVar40._0_4_;
  local_22a8._4_4_ = auVar54._4_4_ + auVar40._4_4_;
  local_22a8._8_4_ = auVar54._8_4_ + auVar40._8_4_;
  local_22a8._12_4_ = auVar54._12_4_ + auVar40._12_4_;
  (**(code **)(*param_2 + 0x18))(param_2,local_1208);
  auVar30._0_4_ = *param_4 * (float)local_11f8._0_4_;
  auVar30._4_4_ = param_4[1] * (float)local_11f8._4_4_;
  auVar30._8_4_ = param_4[2] * fStack_11f0;
  auVar30._12_4_ = param_4[3] * fStack_11ec;
  auVar15._0_4_ = *param_4 * (float)local_1208._0_4_;
  auVar15._4_4_ = param_4[1] * (float)local_1208._4_4_;
  auVar15._8_4_ = param_4[2] * fStack_1200;
  auVar15._12_4_ = param_4[3] * fStack_11fc;
  auVar40 = vmaxps_avx(auVar15,auVar30);
  auVar14 = vminps_avx(auVar15,auVar30);
  auVar15 = vsubps_avx(auVar40,auVar14);
  local_11c8._0_4_ = auVar15._0_4_ * 0.5;
  local_11c8._4_4_ = auVar15._4_4_ * 0.5;
  local_11c8._8_4_ = auVar15._8_4_ * 0.5;
  local_11c8._12_4_ = auVar15._12_4_ * 0.5;
  auVar23._0_4_ = (auVar40._0_4_ + auVar14._0_4_) * 0.5;
  auVar23._4_4_ = (auVar40._4_4_ + auVar14._4_4_) * 0.5;
  auVar23._8_4_ = (auVar40._8_4_ + auVar14._8_4_) * 0.5;
  auVar23._12_4_ = (auVar40._12_4_ + auVar14._12_4_) * 0.5;
  auVar40 = vshufps_avx(auVar23,auVar23,0);
  auVar14 = vshufps_avx(auVar23,auVar23,0x55);
  auVar15 = vshufps_avx(auVar23,auVar23,0xaa);
  auVar16._0_4_ =
       auVar55._0_4_ +
       auVar51._0_4_ * auVar40._0_4_ + auVar52._0_4_ * auVar14._0_4_ + auVar53._0_4_ * auVar15._0_4_
  ;
  auVar16._4_4_ =
       auVar55._4_4_ +
       auVar51._4_4_ * auVar40._4_4_ + auVar52._4_4_ * auVar14._4_4_ + auVar53._4_4_ * auVar15._4_4_
  ;
  auVar16._8_4_ =
       auVar55._8_4_ +
       auVar51._8_4_ * auVar40._8_4_ + auVar52._8_4_ * auVar14._8_4_ + auVar53._8_4_ * auVar15._8_4_
  ;
  auVar16._12_4_ =
       auVar55._12_4_ +
       auVar51._12_4_ * auVar40._12_4_ + auVar52._12_4_ * auVar14._12_4_ +
       auVar53._12_4_ * auVar15._12_4_;
  local_11d8 = vinsertps_avx(auVar16,auVar49._0_16_,0x30);
  _local_1208 = auVar51._0_16_;
  _local_11f8 = auVar52._0_16_;
  _local_11e8 = auVar53._0_16_;
  uVar8 = FUN_1403d6a00(local_1208,local_22b8,0x358637bd);
  auVar40 = in_ZMM8._0_16_;
  if ((char)uVar8 != '\0') {
    _local_22c8 = auVar55._0_16_;
    auVar17._0_4_ = auVar55._0_4_ * auVar55._0_4_;
    auVar17._4_4_ = auVar55._4_4_ * auVar55._4_4_;
    auVar17._8_4_ = auVar55._8_4_ * auVar55._8_4_;
    auVar17._12_4_ = auVar55._12_4_ * auVar55._12_4_;
    auVar40 = vinsertps_avx(auVar17,auVar17,0x4c);
    auVar18._0_4_ = auVar17._0_4_ + auVar40._0_4_;
    auVar18._4_4_ = auVar17._4_4_ + auVar40._4_4_;
    auVar18._8_4_ = auVar17._8_4_ + auVar40._8_4_;
    auVar18._12_4_ = auVar17._12_4_ + auVar40._12_4_;
    auVar40 = vshufpd_avx(auVar18,auVar18,1);
    if (auVar18._0_4_ + auVar40._0_4_ <= 1e-12) {
      _local_22c8 = auVar49._0_16_;
    }
    local_108 = 0;
    local_22f8 = *(undefined8 *)param_3;
    uStack_22f0 = *(undefined8 *)(param_3 + 2);
    local_2390 = pauVar10;
    local_2388 = param_3;
    plVar9 = (longlong *)(**(code **)(*param_1 + 0x128))(param_1,0,local_1208,&local_22f8);
    local_2308 = *(undefined8 *)param_4;
    uStack_2300 = *(undefined8 *)(param_4 + 2);
    local_2380 = param_4;
    local_2258 = (longlong *)(**(code **)(*param_2 + 0x128))(param_2,0,local_2248,&local_2308);
    local_2298 = auVar51._0_16_;
    local_2288 = auVar52._0_16_;
    local_2278 = auVar53._0_16_;
    local_2268 = auVar55._0_16_;
    auVar50 = ZEXT464(*(uint *)(param_9 + 4));
    auVar49._0_8_ = (**(code **)(*local_2258 + 0x10))(local_2258);
    auVar49._8_56_ = extraout_var;
    auVar49 = ZEXT1664(auVar49._0_16_);
    fVar12 = (float)(**(code **)(*plVar9 + 0x10))(plVar9);
    fVar12 = auVar54._0_4_ + fVar12;
    auVar56 = ZEXT464((uint)fVar12);
    fVar12 = fVar12 + auVar49._0_4_;
    fVar12 = fVar12 * fVar12;
    local_23b8 = (undefined1 (*) [16])CONCAT44(local_23b8._4_4_,fVar12);
    local_23b0 = (float *)local_22c8;
    local_23a8 = (float *)local_22d8;
    local_23a0 = (float *)local_22e8;
    uVar8 = FUN_1400f1ca0(local_1c8,plVar9,local_2298,auVar50._0_8_);
    auVar15 = auVar54._0_16_;
    auVar14 = auVar49._0_16_;
    auVar40 = in_ZMM8._0_16_;
    auVar23 = auVar56._0_16_;
    auVar50._8_56_ = extraout_var_00;
    auVar50._0_8_ = extraout_XMM0_Qa;
    fVar13 = (float)extraout_XMM0_Qa;
    pauVar10 = local_2390;
    if (fVar13 <= fVar12) {
      if (fVar13 <= 0.0) {
        auVar40 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar15);
        auVar49 = ZEXT1664(auVar40);
        local_2318 = *(undefined8 *)local_2388;
        uStack_2310 = *(undefined8 *)(local_2388 + 2);
        uVar8 = (**(code **)(*param_1 + 0x128))(param_1,1,local_1208,&local_2318);
        local_2328 = *(undefined8 *)local_2380;
        uStack_2320 = *(undefined8 *)(local_2380 + 2);
        local_2258 = (longlong *)(**(code **)(*param_2 + 0x128))(param_2,1,local_2248,&local_2328);
        local_2330 = auVar49._0_4_;
        local_2298 = auVar51._0_16_;
        local_2288 = auVar52._0_16_;
        local_2278 = auVar53._0_16_;
        local_2268 = auVar55._0_16_;
        local_23b8 = (undefined1 (*) [16])local_22c8;
        local_23b0 = (float *)local_22d8;
        local_23a8 = (float *)local_22e8;
        local_2338 = uVar8;
        uVar8 = bool_jph_epapenetrationdepth_getpenetrationde
                          (local_1c8,&local_2338,local_2298,*(undefined4 *)(param_9 + 8));
        auVar15 = auVar49._0_16_;
        auVar40 = in_ZMM8._0_16_;
        pauVar10 = local_2390;
        auVar14 = local_22e8;
        auVar41 = _local_22d8;
        if ((char)uVar8 == '\0') goto LAB_1400ebd6a;
      }
      else {
        if (fVar13 < 0.0) {
          fVar12 = sqrtf(fVar13);
          auVar15 = auVar54._0_16_;
          auVar14 = auVar49._0_16_;
          auVar23 = auVar56._0_16_;
          uVar8 = extraout_RAX;
        }
        else {
          auVar40 = vsqrtss_avx(auVar50._0_16_,auVar50._0_16_);
          fVar12 = auVar40._0_4_;
        }
        auVar31._0_4_ = auVar23._0_4_ / fVar12;
        auVar31._4_12_ = auVar23._4_12_;
        auVar40 = vshufps_avx(auVar31,auVar31,0);
        auVar41._0_4_ = (float)local_22c8._0_4_ * auVar40._0_4_ + (float)local_22d8._0_4_;
        auVar41._4_4_ = (float)local_22c8._4_4_ * auVar40._4_4_ + (float)local_22d8._4_4_;
        auVar41._8_4_ = fStack_22c0 * auVar40._8_4_ + fStack_22d0;
        auVar41._12_4_ = fStack_22bc * auVar40._12_4_ + fStack_22cc;
        auVar19._0_4_ = auVar14._0_4_ / fVar12;
        auVar19._4_12_ = auVar14._4_12_;
        auVar40 = vshufps_avx(auVar19,auVar19,0);
        auVar20._0_4_ = (float)local_22c8._0_4_ * auVar40._0_4_;
        auVar20._4_4_ = (float)local_22c8._4_4_ * auVar40._4_4_;
        auVar20._8_4_ = fStack_22c0 * auVar40._8_4_;
        auVar20._12_4_ = fStack_22bc * auVar40._12_4_;
        auVar14 = vsubps_avx(local_22e8,auVar20);
      }
      pauVar10 = local_2390;
      auVar40 = in_ZMM8._0_16_;
      auVar23 = vsubps_avx(auVar14,auVar41);
      auVar21._0_4_ = auVar23._0_4_ * auVar23._0_4_;
      auVar21._4_4_ = auVar23._4_4_ * auVar23._4_4_;
      auVar21._8_4_ = auVar23._8_4_ * auVar23._8_4_;
      auVar21._12_4_ = auVar23._12_4_ * auVar23._12_4_;
      auVar23 = vinsertps_avx(auVar21,auVar21,0x4c);
      auVar22._0_4_ = auVar21._0_4_ + auVar23._0_4_;
      auVar22._4_4_ = auVar21._4_4_ + auVar23._4_4_;
      auVar22._8_4_ = auVar21._8_4_ + auVar23._8_4_;
      auVar22._12_4_ = auVar21._12_4_ + auVar23._12_4_;
      auVar23 = vshufpd_avx(auVar22,auVar22,1);
      auVar23 = ZEXT416((uint)(auVar22._0_4_ + auVar23._0_4_));
      auVar23 = vsqrtss_avx(auVar23,auVar23);
      fVar12 = auVar23._0_4_ - auVar15._0_4_;
      if (-fVar12 < *(float *)(param_10 + 1)) {
        fVar1 = local_22c8._0_4_;
        auVar45._0_4_ = fVar1 * fVar1;
        fVar2 = local_22c8._4_4_;
        auVar45._4_4_ = fVar2 * fVar2;
        fVar11 = local_22c8._8_4_;
        auVar45._8_4_ = fVar11 * fVar11;
        fVar24 = local_22c8._12_4_;
        auVar45._12_4_ = fVar24 * fVar24;
        auVar40 = vinsertps_avx(auVar45,auVar45,0x4c);
        auVar46._0_4_ = auVar45._0_4_ + auVar40._0_4_;
        auVar46._4_4_ = auVar45._4_4_ + auVar40._4_4_;
        auVar46._8_4_ = auVar45._8_4_ + auVar40._8_4_;
        auVar46._12_4_ = auVar45._12_4_ + auVar40._12_4_;
        auVar40 = vshufpd_avx(auVar46,auVar46,1);
        fVar13 = auVar46._0_4_ + auVar40._0_4_;
        if (0.0 < fVar13) {
          auVar40 = vsqrtss_avx(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
          auVar47._0_4_ = auVar15._0_4_ / auVar40._0_4_;
          auVar47._4_12_ = auVar15._4_12_;
          auVar40 = vshufps_avx(auVar47,auVar47,0);
          auVar48._0_4_ = fVar1 * auVar40._0_4_;
          auVar48._4_4_ = fVar2 * auVar40._4_4_;
          auVar48._8_4_ = fVar11 * auVar40._8_4_;
          auVar48._12_4_ = fVar24 * auVar40._12_4_;
          auVar41 = vsubps_avx(auVar41,auVar48);
        }
        auVar40 = vshufps_avx(auVar41,auVar41,0);
        fVar13 = *(float *)*param_5;
        fVar1 = *(float *)(*param_5 + 4);
        fVar2 = *(float *)(*param_5 + 8);
        fVar11 = *(float *)(*param_5 + 0xc);
        fVar24 = *(float *)param_5[1];
        fVar25 = *(float *)(param_5[1] + 4);
        fVar26 = *(float *)(param_5[1] + 8);
        fVar27 = *(float *)(param_5[1] + 0xc);
        fVar32 = *(float *)param_5[2];
        fVar33 = *(float *)(param_5[2] + 4);
        fVar34 = *(float *)(param_5[2] + 8);
        fVar35 = *(float *)(param_5[2] + 0xc);
        auVar15 = vshufps_avx(auVar41,auVar41,0x55);
        auVar23 = vshufps_avx(auVar41,auVar41,0xaa);
        local_22d8._0_4_ =
             *(float *)param_5[3] +
             auVar15._0_4_ * fVar24 + fVar13 * auVar40._0_4_ + auVar23._0_4_ * fVar32;
        local_22d8._4_4_ =
             *(float *)(param_5[3] + 4) +
             auVar15._4_4_ * fVar25 + fVar1 * auVar40._4_4_ + auVar23._4_4_ * fVar33;
        fStack_22d0 = *(float *)(param_5[3] + 8) +
                      auVar15._8_4_ * fVar26 + fVar2 * auVar40._8_4_ + auVar23._8_4_ * fVar34;
        fStack_22cc = *(float *)(param_5[3] + 0xc) +
                      auVar15._12_4_ * fVar27 + fVar11 * auVar40._12_4_ + auVar23._12_4_ * fVar35;
        auVar40 = vshufps_avx(auVar14,auVar14,0);
        auVar15 = vshufps_avx(auVar14,auVar14,0x55);
        auVar14 = vshufps_avx(auVar14,auVar14,0xaa);
        local_22e8._0_4_ =
             *(float *)param_5[3] +
             auVar15._0_4_ * fVar24 + auVar40._0_4_ * fVar13 + auVar14._0_4_ * fVar32;
        local_22e8._4_4_ =
             *(float *)(param_5[3] + 4) +
             auVar15._4_4_ * fVar25 + auVar40._4_4_ * fVar1 + auVar14._4_4_ * fVar33;
        local_22e8._8_4_ =
             *(float *)(param_5[3] + 8) +
             auVar15._8_4_ * fVar26 + auVar40._8_4_ * fVar2 + auVar14._8_4_ * fVar34;
        local_22e8._12_4_ =
             *(float *)(param_5[3] + 0xc) +
             auVar15._12_4_ * fVar27 + auVar40._12_4_ * fVar11 + auVar14._12_4_ * fVar35;
        auVar40 = vshufps_avx(_local_22c8,_local_22c8,0);
        auVar14 = vshufps_avx(_local_22c8,_local_22c8,0x55);
        auVar15 = vshufps_avx(_local_22c8,_local_22c8,0xaa);
        if (param_10[2] == 0) {
          local_11d8._12_4_ = 0xffffffff;
        }
        else {
          local_11d8._12_4_ = *(undefined4 *)(param_10[2] + 0x34);
        }
        local_11e8._4_4_ = auVar40._4_4_ * fVar1 + auVar14._4_4_ * fVar25 + auVar15._4_4_ * fVar33;
        local_11e8._0_4_ = auVar40._0_4_ * fVar13 + auVar14._0_4_ * fVar24 + auVar15._0_4_ * fVar32;
        fStack_11e0 = auVar40._8_4_ * fVar2 + auVar14._8_4_ * fVar26 + auVar15._8_4_ * fVar34;
        fStack_11dc = auVar40._12_4_ * fVar11 + auVar14._12_4_ * fVar27 + auVar15._12_4_ * fVar35;
        local_11d8._4_4_ = *param_7;
        local_11d8._0_4_ = fVar12;
        local_11d8._8_4_ = *param_8;
        auVar7._12_4_ = 0;
        auVar7._0_12_ = local_11c8._4_12_;
        local_11c8._0_16_ = auVar7 << 0x20;
        local_fb8[0] = 0.0;
        _local_1208 = _local_22d8;
        _local_11f8 = local_22e8;
        if (*(char *)(param_9 + 1) == '\0') {
          local_23b0 = (float *)local_11c8;
          local_2348 = *(undefined8 *)local_2388;
          uStack_2340 = *(undefined8 *)(local_2388 + 2);
          local_2358 = vsubps_avx(ZEXT816(0) << 0x20,_local_22c8);
          local_2248[0] = 0xffffffff;
          local_23b8 = param_5;
          (**(code **)(*param_1 + 0x58))(param_1,local_2248,local_2358,&local_2348);
          auVar40 = vdpps_avx(auVar51._0_16_,_local_22c8,0x7f);
          auVar14 = vdpps_avx(auVar52._0_16_,_local_22c8,0x7f);
          local_2368 = *(undefined8 *)local_2380;
          uStack_2360 = *(undefined8 *)(local_2380 + 2);
          auVar40 = vblendps_avx(auVar40,auVar14,2);
          auVar14 = vdpps_avx(auVar53._0_16_,_local_22c8,0x7f);
          local_2378 = vblendps_avx(auVar14,auVar40,3);
          local_2248[0] = 0xffffffff;
          local_23b8 = (undefined1 (*) [16])param_6;
          local_23b0 = local_fb8;
          (**(code **)(*param_2 + 0x58))(param_2,local_2248,local_2378,&local_2368);
        }
        uVar8 = (**(code **)(*param_10 + 0x28))(param_10,local_1208);
        auVar40 = in_ZMM8._0_16_;
      }
    }
  }
LAB_1400ebd6a:
  if (pauVar10 != (undefined1 (*) [16])0x0) {
    uVar6 = rdtsc();
    auVar14 = vpinsrq_avx(auVar40,uVar6 & 0xffffffff00000000 |
                                  CONCAT44((int)((ulonglong)uVar8 >> 0x20),(int)uVar6),1);
    auVar40 = vmovntdq_avx(SUB6416(ZEXT864(0x14139b169),0));
    *pauVar10 = auVar40;
    auVar40 = vmovntdq_avx(auVar14);
    pauVar10[1] = auVar40;
  }
  if (DAT_1414ef3c0 != (local_f0 ^ (ulonglong)auStack_23d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_f0 ^ (ulonglong)auStack_23d8);
  }
  return;
}


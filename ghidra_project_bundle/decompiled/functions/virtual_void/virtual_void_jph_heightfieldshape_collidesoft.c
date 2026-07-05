/**
 * Function: virtual_void_jph_heightfieldshape_collidesoft
 * Address:  14031ab70
 * Signature: undefined virtual_void_jph_heightfieldshape_collidesoft(void)
 * Body size: 1652 bytes
 */


void virtual_void_jph_heightfieldshape_collidesoft
               (undefined8 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
               longlong *param_4,int param_5,undefined4 param_6)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [12];
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  int iVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  float *pfVar17;
  undefined1 (*pauVar18) [16];
  undefined4 *puVar19;
  longlong lVar20;
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
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 in_ZMM6 [64];
  undefined1 auVar46 [64];
  float fVar47;
  float fVar48;
  undefined1 auVar49 [64];
  undefined1 auVar50 [64];
  uint uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined1 auVar54 [16];
  undefined1 in_ZMM13 [64];
  undefined1 auVar55 [16];
  undefined1 in_ZMM14 [64];
  undefined1 auStack_428 [32];
  undefined1 (*local_408) [16];
  longlong local_400;
  longlong local_3f8;
  undefined8 local_3f0;
  float *local_3e8;
  float *local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 local_398 [8];
  float fStack_390;
  float fStack_38c;
  undefined1 local_388 [8];
  float fStack_380;
  float fStack_37c;
  undefined1 local_378 [8];
  float fStack_370;
  float fStack_36c;
  undefined1 local_368 [8];
  float fStack_360;
  float fStack_35c;
  undefined1 local_358 [16];
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_328;
  float local_324;
  float local_320;
  float local_318;
  float local_314;
  float local_310;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float local_2f4;
  int local_2f0;
  ulonglong local_e0;
  undefined1 local_d8 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  
  local_58 = in_ZMM14._0_16_;
  local_68 = in_ZMM13._0_16_;
  local_d8 = in_ZMM6._0_16_;
  local_e0 = DAT_1414ef3c0 ^ (ulonglong)auStack_428;
  local_3f0 = param_1;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar14 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (lVar14 != 0) {
    uVar51 = *(uint *)(lVar14 + 0x200020);
    if ((ulonglong)uVar51 < 0x10000) {
      *(uint *)(lVar14 + 0x200020) = uVar51 + 1;
      local_408 = (undefined1 (*) [16])(lVar14 + (ulonglong)uVar51 * 0x20 + 0x20);
      uVar3 = rdtsc();
      in_ZMM6 = ZEXT864(uVar3 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)local_408 >> 0x20),(int)uVar3));
      goto LAB_14031ac99;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  local_408 = (undefined1 (*) [16])0x0;
LAB_14031ac99:
  auVar26 = in_ZMM6._0_16_;
  local_358 = *param_3;
  local_3d8 = *(undefined8 *)*param_2;
  uStack_3d0 = *(undefined8 *)(*param_2 + 8);
  uStack_3c8 = *(undefined8 *)param_2[1];
  uStack_3c0 = *(undefined8 *)(param_2[1] + 8);
  auVar5 = param_2[1];
  uVar6 = *(undefined8 *)param_2[2];
  auVar8 = *(undefined1 (*) [12])param_2[2];
  uVar7 = *(undefined8 *)param_2[3];
  uStack_3a0 = *(undefined8 *)(param_2[3] + 8);
  local_3b8 = (float)uVar6;
  fStack_3b4 = (float)((ulonglong)uVar6 >> 0x20);
  fStack_3b0 = (float)*(undefined8 *)(param_2[2] + 8);
  fStack_3ac = (float)((ulonglong)*(undefined8 *)(param_2[2] + 8) >> 0x20);
  auVar27 = vmovlhps_avx(*param_2,auVar5);
  auVar40 = vunpckhpd_avx(*param_2,auVar5);
  auVar5._12_4_ = fStack_3ac;
  auVar5._0_12_ = auVar8;
  auVar46 = ZEXT1664((undefined1  [16])0x0);
  auVar5 = vpunpckhqdq_avx(auVar5,(undefined1  [16])0x0);
  _local_378 = vshufps_avx(auVar40,auVar5,0x88);
  auVar40._8_8_ = 0;
  auVar40._0_8_ = auVar8._0_8_;
  _local_398 = vshufps_avx(auVar27,auVar40,0x88);
  _local_388 = vshufps_avx(auVar27,auVar40,0xdd);
  uStack_3a8._0_4_ = (float)uVar7;
  uStack_3a8._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
  auVar27._0_4_ =
       local_378._0_4_ * (float)uStack_3a0 +
       local_398._0_4_ * (float)uStack_3a8 + local_388._0_4_ * uStack_3a8._4_4_;
  auVar27._4_4_ =
       local_378._4_4_ * (float)uStack_3a0 +
       local_398._4_4_ * (float)uStack_3a8 + local_388._4_4_ * uStack_3a8._4_4_;
  auVar27._8_4_ =
       local_378._8_4_ * (float)uStack_3a0 +
       local_398._8_4_ * (float)uStack_3a8 + local_388._8_4_ * uStack_3a8._4_4_;
  auVar27._12_4_ =
       local_378._12_4_ * (float)uStack_3a0 +
       local_398._12_4_ * (float)uStack_3a8 + local_388._12_4_ * uStack_3a8._4_4_;
  auVar27 = vsubps_avx((undefined1  [16])0x0,auVar27);
  _local_368 = vinsertps_avx(auVar27,ZEXT416(0x3f800000),0x30);
  auVar27 = vcmpps_avx(local_358,(undefined1  [16])0x0,1);
  uVar12 = vmovmskps_avx(auVar27);
  local_2f8 = *(float *)(&DAT_140e08700 + (ulonglong)((POPCOUNT((byte)uVar12 & 7) & 1U) == 0) * 4);
  lVar14 = param_4[1];
  iVar13 = (int)lVar14;
  param_5 = param_5 * iVar13;
  uStack_3a8 = uVar7;
  if (param_5 != 0) {
    local_400 = *param_4;
    lVar9 = param_4[9];
    puVar19 = (undefined4 *)param_4[8];
    lVar10 = param_4[7];
    pfVar15 = (float *)param_4[6];
    lVar11 = param_4[5];
    pfVar17 = (float *)param_4[2];
    pauVar18 = (undefined1 (*) [16])param_4[4];
    lVar20 = (longlong)(int)param_4[3];
    lVar16 = 0;
    fVar47 = 0.0;
    fVar48 = 3.4028235e+38;
    auVar49 = ZEXT1664(CONCAT412(0x800000,CONCAT48(0x800000,0x80000000800000)));
    auVar50 = ZEXT1664(ZEXT816(0x3f80000000000000));
    uVar52 = 0x80000000;
    uVar51 = 0x80000000;
    uVar12 = 0x80000000;
    uVar53 = 0x80000000;
    local_3f8 = lVar20;
    do {
      if (fVar47 < *pfVar17) {
        fVar1 = *(float *)(local_400 + lVar16);
        fVar42 = *(float *)(local_400 + 4 + lVar16);
        fVar2 = *(float *)(local_400 + 8 + lVar16);
        local_348 = fVar1 * (float)local_398._0_4_ + fVar42 * (float)local_388._0_4_ +
                    fVar2 * (float)local_378._0_4_ + (float)local_368._0_4_;
        fStack_344 = fVar1 * (float)local_398._4_4_ + fVar42 * (float)local_388._4_4_ +
                     fVar2 * (float)local_378._4_4_ + (float)local_368._4_4_;
        fStack_340 = fVar1 * fStack_390 + fVar42 * fStack_380 + fVar2 * fStack_370 + fStack_360;
        fStack_33c = fVar1 * fStack_38c + fVar42 * fStack_37c + fVar2 * fStack_36c + fStack_35c;
        local_2f4 = 3.4028235e+38;
        in_ZMM6 = ZEXT1664(in_ZMM6._0_16_);
        auVar46 = ZEXT1664(auVar46._0_16_);
        auVar49 = ZEXT1664(auVar49._0_16_);
        auVar50 = ZEXT1664(auVar50._0_16_);
        local_3e8 = pfVar15;
        local_3e0 = pfVar17;
        lVar14 = FUN_14031b1f0(local_3f0,&local_3d8);
        pfVar15 = local_3e8;
        pfVar17 = local_3e0;
        lVar20 = local_3f8;
        if (local_2f4 < fVar48) {
          fVar41 = (float)local_3d8;
          fVar43 = (float)((ulonglong)local_3d8 >> 0x20);
          fVar44 = (float)uStack_3d0;
          fVar45 = (float)((ulonglong)uStack_3d0 >> 0x20);
          fVar1 = (float)uStack_3c8;
          fVar42 = (float)((ulonglong)uStack_3c8 >> 0x20);
          fVar2 = (float)uStack_3c0;
          fVar4 = (float)((ulonglong)uStack_3c0 >> 0x20);
          auVar34._0_4_ =
               (float)uStack_3a8 + fVar41 * local_338 + local_334 * fVar1 + local_330 * local_3b8;
          auVar34._4_4_ =
               uStack_3a8._4_4_ + fVar43 * local_338 + local_334 * fVar42 + local_330 * fStack_3b4;
          auVar34._8_4_ =
               (float)uStack_3a0 + fVar44 * local_338 + local_334 * fVar2 + local_330 * fStack_3b0;
          auVar34._12_4_ =
               uStack_3a0._4_4_ + fVar45 * local_338 + local_334 * fVar4 + local_330 * fStack_3ac;
          auVar21._0_4_ =
               (float)uStack_3a8 + local_320 * local_3b8 + local_324 * fVar1 + fVar41 * local_328;
          auVar21._4_4_ =
               uStack_3a8._4_4_ + local_320 * fStack_3b4 + local_324 * fVar42 + fVar43 * local_328;
          auVar21._8_4_ =
               (float)uStack_3a0 + local_320 * fStack_3b0 + local_324 * fVar2 + fVar44 * local_328;
          auVar21._12_4_ =
               uStack_3a0._4_4_ + local_320 * fStack_3ac + local_324 * fVar4 + fVar45 * local_328;
          auVar54._0_4_ =
               local_310 * local_3b8 + local_318 * fVar41 + local_314 * fVar1 + (float)uStack_3a8;
          auVar54._4_4_ =
               local_310 * fStack_3b4 + local_318 * fVar43 + local_314 * fVar42 + uStack_3a8._4_4_;
          auVar54._8_4_ =
               local_310 * fStack_3b0 + local_318 * fVar44 + local_314 * fVar2 + (float)uStack_3a0;
          auVar54._12_4_ =
               local_310 * fStack_3ac + local_318 * fVar45 + local_314 * fVar4 + uStack_3a0._4_4_;
          auVar5 = vsubps_avx(auVar21,auVar34);
          auVar40 = vsubps_avx(auVar54,auVar34);
          auVar27 = vshufps_avx(auVar40,auVar40,0xc9);
          auVar55._0_4_ = auVar27._0_4_ * auVar5._0_4_;
          auVar55._4_4_ = auVar27._4_4_ * auVar5._4_4_;
          auVar55._8_4_ = auVar27._8_4_ * auVar5._8_4_;
          auVar55._12_4_ = auVar27._12_4_ * auVar5._12_4_;
          auVar27 = vshufps_avx(auVar5,auVar5,0xc9);
          auVar22._0_4_ = auVar40._0_4_ * auVar27._0_4_;
          auVar22._4_4_ = auVar40._4_4_ * auVar27._4_4_;
          auVar22._8_4_ = auVar40._8_4_ * auVar27._8_4_;
          auVar22._12_4_ = auVar40._12_4_ * auVar27._12_4_;
          auVar27 = vsubps_avx(auVar55,auVar22);
          auVar5 = vshufps_avx(auVar27,auVar27,9);
          auVar23._0_4_ = auVar27._0_4_ * auVar27._0_4_;
          auVar23._4_4_ = auVar27._4_4_ * auVar27._4_4_;
          auVar23._8_4_ = auVar27._8_4_ * auVar27._8_4_;
          auVar23._12_4_ = auVar27._12_4_ * auVar27._12_4_;
          auVar27 = vshufps_avx(auVar23,auVar23,0xc9);
          auVar27 = vblendps_avx(auVar27,auVar46._0_16_,8);
          auVar40 = vshufps_avx(auVar23,auVar46._0_16_,0x4a);
          auVar24._0_4_ = auVar27._0_4_ + auVar40._0_4_;
          auVar24._4_4_ = auVar27._4_4_ + auVar40._4_4_;
          auVar24._8_4_ = auVar27._8_4_ + auVar40._8_4_;
          auVar24._12_4_ = auVar27._12_4_ + auVar40._12_4_;
          auVar27 = vshufps_avx(auVar24,auVar24,0);
          auVar40 = vshufps_avx(auVar24,auVar24,0xaa);
          auVar25._0_4_ = auVar27._0_4_ + auVar40._0_4_;
          auVar25._4_4_ = auVar27._4_4_ + auVar40._4_4_;
          auVar25._8_4_ = auVar27._8_4_ + auVar40._8_4_;
          auVar25._12_4_ = auVar27._12_4_ + auVar40._12_4_;
          auVar27 = vcmpps_avx(auVar25,auVar49._0_16_,2);
          auVar40 = vsqrtps_avx(auVar25);
          auVar5 = vdivps_avx(auVar5,auVar40);
          auVar27 = vblendvps_avx(auVar5,auVar50._0_16_,auVar27);
          auVar26._0_4_ = local_2f8 * auVar27._0_4_;
          auVar26._4_4_ = local_2f8 * auVar27._4_4_;
          auVar26._8_4_ = local_2f8 * auVar27._8_4_;
          auVar26._12_4_ = local_2f8 * auVar27._12_4_;
          lVar14 = local_400;
          if (local_2f0 == 7) {
            auVar27 = vsubps_avx(auVar34,*(undefined1 (*) [16])(local_400 + lVar16));
            auVar31._0_4_ = auVar26._0_4_ * auVar27._0_4_;
            auVar31._4_4_ = auVar26._4_4_ * auVar27._4_4_;
            auVar31._8_4_ = auVar26._8_4_ * auVar27._8_4_;
            auVar31._12_4_ = auVar26._12_4_ * auVar27._12_4_;
            auVar27 = vinsertps_avx(auVar31,auVar31,0x4c);
            auVar32._0_4_ = auVar31._0_4_ + auVar27._0_4_;
            auVar32._4_4_ = auVar31._4_4_ + auVar27._4_4_;
            auVar32._8_4_ = auVar31._8_4_ + auVar27._8_4_;
            auVar32._12_4_ = auVar31._12_4_ + auVar27._12_4_;
            auVar27 = vshufpd_avx(auVar32,auVar32,1);
            fVar1 = auVar32._0_4_ + auVar27._0_4_;
            if ((fVar1 < DAT_141503200) && (*local_3e8 < fVar1)) {
              *local_3e8 = fVar1;
              auVar28._0_4_ = auVar34._0_4_ * auVar26._0_4_;
              auVar28._4_4_ = auVar34._4_4_ * auVar26._4_4_;
              auVar28._8_4_ = auVar34._8_4_ * auVar26._8_4_;
              auVar28._12_4_ = auVar34._12_4_ * auVar26._12_4_;
LAB_14031adeb:
              auVar27 = vinsertps_avx(auVar28,auVar28,0x4c);
              auVar29._0_4_ = auVar28._0_4_ + auVar27._0_4_;
              auVar29._4_4_ = auVar28._4_4_ + auVar27._4_4_;
              auVar29._8_4_ = auVar28._8_4_ + auVar27._8_4_;
              auVar29._12_4_ = auVar28._12_4_ + auVar27._12_4_;
              auVar27 = vshufpd_avx(auVar29,auVar29,1);
              auVar30._0_4_ = uVar51 ^ (uint)(auVar29._0_4_ + auVar27._0_4_);
              auVar30._4_4_ = uVar12;
              auVar30._8_4_ = uVar52;
              auVar30._12_4_ = uVar53;
              auVar27 = vinsertps_avx(auVar26,auVar30,0x30);
              *pauVar18 = auVar27;
              *puVar19 = param_6;
              lVar14 = 0;
            }
          }
          else {
            auVar35._0_4_ = local_308 + local_348;
            auVar35._4_4_ = fStack_304 + fStack_344;
            auVar35._8_4_ = fStack_300 + fStack_340;
            auVar35._12_4_ = fStack_2fc + fStack_33c;
            auVar27 = vshufps_avx(auVar35,auVar35,0);
            auVar5 = vshufps_avx(auVar35,auVar35,0x55);
            auVar40 = vshufps_avx(auVar35,auVar35,0xaa);
            auVar33._0_4_ =
                 (float)uStack_3a8 +
                 local_3b8 * auVar40._0_4_ + auVar27._0_4_ * fVar41 + auVar5._0_4_ * fVar1;
            auVar33._4_4_ =
                 uStack_3a8._4_4_ +
                 fStack_3b4 * auVar40._4_4_ + auVar27._4_4_ * fVar43 + auVar5._4_4_ * fVar42;
            auVar33._8_4_ =
                 (float)uStack_3a0 +
                 fStack_3b0 * auVar40._8_4_ + auVar27._8_4_ * fVar44 + auVar5._8_4_ * fVar2;
            auVar33._12_4_ =
                 uStack_3a0._4_4_ +
                 fStack_3ac * auVar40._12_4_ + auVar27._12_4_ * fVar45 + auVar5._12_4_ * fVar4;
            auVar5 = vsubps_avx(*(undefined1 (*) [16])(local_400 + lVar16),auVar33);
            fVar1 = auVar5._0_4_;
            auVar36._0_4_ = auVar26._0_4_ * fVar1;
            fVar42 = auVar5._4_4_;
            auVar36._4_4_ = auVar26._4_4_ * fVar42;
            fVar2 = auVar5._8_4_;
            auVar36._8_4_ = auVar26._8_4_ * fVar2;
            fVar4 = auVar5._12_4_;
            auVar36._12_4_ = auVar26._12_4_ * fVar4;
            auVar27 = vinsertps_avx(auVar36,auVar36,0x4c);
            auVar37._0_4_ = auVar36._0_4_ + auVar27._0_4_;
            auVar37._4_4_ = auVar36._4_4_ + auVar27._4_4_;
            auVar37._8_4_ = auVar36._8_4_ + auVar27._8_4_;
            auVar37._12_4_ = auVar36._12_4_ + auVar27._12_4_;
            auVar27 = vshufpd_avx(auVar37,auVar37,1);
            if (fVar47 < auVar37._0_4_ + auVar27._0_4_) {
              auVar38._0_4_ = fVar1 * fVar1;
              auVar38._4_4_ = fVar42 * fVar42;
              auVar38._8_4_ = fVar2 * fVar2;
              auVar38._12_4_ = fVar4 * fVar4;
              auVar27 = vinsertps_avx(auVar38,auVar38,0x4c);
              auVar39._0_4_ = auVar38._0_4_ + auVar27._0_4_;
              auVar39._4_4_ = auVar38._4_4_ + auVar27._4_4_;
              auVar39._8_4_ = auVar38._8_4_ + auVar27._8_4_;
              auVar39._12_4_ = auVar38._12_4_ + auVar27._12_4_;
              auVar27 = vshufpd_avx(auVar39,auVar39,1);
              fVar1 = auVar39._0_4_ + auVar27._0_4_;
              auVar27 = vsqrtss_avx(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
              fVar42 = (float)(uVar51 ^ auVar27._0_4_);
              if (*local_3e8 < fVar42) {
                *local_3e8 = fVar42;
                if (fVar47 < fVar1) {
                  auVar27 = vshufps_avx(auVar27,auVar27,0);
                  auVar26 = vdivps_avx(auVar5,auVar27);
                }
                auVar28._0_4_ = auVar33._0_4_ * auVar26._0_4_;
                auVar28._4_4_ = auVar33._4_4_ * auVar26._4_4_;
                auVar28._8_4_ = auVar33._8_4_ * auVar26._8_4_;
                auVar28._12_4_ = auVar33._12_4_ * auVar26._12_4_;
                goto LAB_14031adeb;
              }
            }
          }
        }
      }
      auVar26 = in_ZMM6._0_16_;
      pfVar17 = (float *)((longlong)pfVar17 + lVar20);
      pauVar18 = (undefined1 (*) [16])(*pauVar18 + (int)lVar11);
      pfVar15 = (float *)((longlong)pfVar15 + (longlong)(int)lVar10);
      puVar19 = (undefined4 *)((longlong)puVar19 + (longlong)(int)lVar9);
      lVar16 = lVar16 + iVar13;
    } while (param_5 != lVar16);
  }
  if (local_408 != (undefined1 (*) [16])0x0) {
    uVar3 = rdtsc();
    auVar5 = vpinsrq_avx(auVar26,uVar3 & 0xffffffff00000000 |
                                 CONCAT44((int)((ulonglong)lVar14 >> 0x20),(int)uVar3),1);
    auVar27 = vmovntdq_avx(SUB6416(ZEXT864(0x14132b441),0));
    *local_408 = auVar27;
    auVar27 = vmovntdq_avx(auVar5);
    local_408[1] = auVar27;
  }
  if (DAT_1414ef3c0 == (local_e0 ^ (ulonglong)auStack_428)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_e0 ^ (ulonglong)auStack_428);
}


/**
 * Function: void_jph_softbodymotionproperties_applylracon
 * Address:  140386ad0
 * Signature: undefined void_jph_softbodymotionproperties_applylracon(void)
 * Body size: 1207 bytes
 */


void void_jph_softbodymotionproperties_applylracon(longlong param_1,longlong param_2,uint param_3)

{
  ulonglong *puVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float *pfVar18;
  float *pfVar19;
  ulonglong uVar20;
  undefined1 (*pauVar21) [16];
  float *pfVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  uint *puVar27;
  undefined1 auVar28 [16];
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar29 [16];
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 extraout_var_01 [56];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 extraout_var_04 [56];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [12];
  undefined4 local_bc;
  undefined1 auStack_b8 [12];
  ulonglong local_a0;
  undefined1 auVar32 [64];
  undefined1 auVar35 [64];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_02 [56];
  undefined1 extraout_var_03 [56];
  
  local_a0 = DAT_1414ef3c0 ^ (ulonglong)auStack_e8;
  auStack_b8._8_4_ = 0;
  auStack_b8._0_8_ = SUB128(ZEXT812(0),4);
  local_c8 = ZEXT812(0);
  local_bc = 0;
  if (param_3 == 0) {
    lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x138);
    puVar27 = (uint *)local_c8;
  }
  else {
    lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x138);
    puVar27 = (uint *)((ulonglong)(param_3 - 1) * 0x1c + lVar24);
  }
  lVar26 = (ulonglong)param_3 * 0x1c;
  void_jph_softbodymotionproperties_applyvolume
            (param_1,param_2,puVar27[5],*(undefined4 *)(lVar24 + 0x14 + lVar26));
  void_jph_softbodymotionproperties_applydihedr
            (param_1,param_2,puVar27[4],*(undefined4 *)(lVar24 + 0x10 + lVar26));
  auVar30._0_8_ =
       void_jph_softbodymotionproperties_applyskinco
                 (param_1,param_2,puVar27[6],*(undefined4 *)(lVar24 + 0x18 + lVar26));
  auVar30._8_56_ = extraout_var;
  auVar28 = auVar30._0_16_;
  uVar3 = *(uint *)(lVar24 + lVar26);
  uVar4 = *puVar27;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    auVar31._0_8_ = __dyn_tls_on_demand_init();
    auVar31._8_56_ = extraout_var_00;
    auVar28 = auVar31._0_16_;
  }
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pfVar18 = *(float **)(lVar7 + 0x170);
  if (pfVar18 == (float *)0x0) {
LAB_140386c49:
    pauVar21 = (undefined1 (*) [16])0x0;
  }
  else {
    fVar5 = pfVar18[0x80008];
    if (0xffff < (ulonglong)(uint)fVar5) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        pfVar18 = (float *)(*(code *)PTR_vfunction4_1414f67c8)();
        auVar32._8_56_ = extraout_var_01;
        auVar32._0_8_ = extraout_XMM0_Qa;
        auVar28 = auVar32._0_16_;
      }
      goto LAB_140386c49;
    }
    pfVar18[0x80008] = (float)((int)fVar5 + 1);
    pauVar21 = (undefined1 (*) [16])(pfVar18 + (ulonglong)(uint)fVar5 * 8 + 8);
    uVar20 = rdtsc();
    pfVar18 = (float *)CONCAT44((int)((ulonglong)pfVar18 >> 0x20),(int)uVar20);
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar20 & 0xffffffff00000000 | (ulonglong)pfVar18;
  }
  if (uVar4 < uVar3) {
    fVar5 = *(float *)(param_2 + 0x84);
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x48);
    pfVar19 = (float *)(lVar8 + (ulonglong)uVar4 * 0x10 + 8);
    do {
      lVar9 = *(longlong *)(param_1 + 0x118);
      lVar23 = (ulonglong)(uint)pfVar19[-2] * 0x50;
      lVar25 = (ulonglong)(uint)pfVar19[-1] * 0x50;
      auVar29 = *(undefined1 (*) [16])(lVar9 + 0x10 + lVar23);
      auVar17 = *(undefined1 (*) [16])(lVar9 + 0x10 + lVar25);
      auVar37 = vsubps_avx(auVar17,auVar29);
      fVar12 = auVar37._0_4_;
      auVar41._0_4_ = fVar12 * fVar12;
      fVar13 = auVar37._4_4_;
      auVar41._4_4_ = fVar13 * fVar13;
      fVar14 = auVar37._8_4_;
      auVar41._8_4_ = fVar14 * fVar14;
      fVar15 = auVar37._12_4_;
      auVar41._12_4_ = fVar15 * fVar15;
      auVar37 = vinsertps_avx(auVar41,auVar41,0x4c);
      auVar42._0_4_ = auVar41._0_4_ + auVar37._0_4_;
      auVar42._4_4_ = auVar41._4_4_ + auVar37._4_4_;
      auVar42._8_4_ = auVar41._8_4_ + auVar37._8_4_;
      auVar42._12_4_ = auVar41._12_4_ + auVar37._12_4_;
      auVar37 = vshufpd_avx(auVar42,auVar42,1);
      fVar11 = *(float *)(lVar9 + 0x4c + lVar23);
      fVar2 = *(float *)(lVar9 + 0x4c + lVar25);
      auVar41 = vfmadd231ss_fma(ZEXT416((uint)(fVar11 + fVar2)),
                                ZEXT416((uint)(1.0 / (fVar5 * fVar5))),ZEXT416((uint)pfVar19[1]));
      auVar37 = ZEXT416((uint)(auVar42._0_4_ + auVar37._0_4_));
      auVar37 = vsqrtss_avx(auVar37,auVar37);
      fVar16 = auVar41._0_4_ * auVar37._0_4_;
      if (1e-12 <= fVar16) {
        lVar23 = lVar23 + lVar9;
        auVar37 = ZEXT416((uint)(auVar37._0_4_ - *pfVar19));
        auVar37 = vshufps_avx(auVar37,auVar37,0);
        auVar40._0_4_ = auVar37._0_4_ * fVar12;
        auVar40._4_4_ = auVar37._4_4_ * fVar13;
        auVar40._8_4_ = auVar37._8_4_ * fVar14;
        auVar40._12_4_ = auVar37._12_4_ * fVar15;
        auVar37 = vshufps_avx(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16),0);
        auVar37 = vdivps_avx(auVar40,auVar37);
        auVar41 = vshufps_avx(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11),0);
        *(float *)(lVar23 + 0x10) = auVar29._0_4_ + auVar41._0_4_ * auVar37._0_4_;
        *(float *)(lVar23 + 0x14) = auVar29._4_4_ + auVar41._4_4_ * auVar37._4_4_;
        *(float *)(lVar23 + 0x18) = auVar29._8_4_ + auVar41._8_4_ * auVar37._8_4_;
        *(float *)(lVar23 + 0x1c) = auVar29._12_4_ + auVar41._12_4_ * auVar37._12_4_;
        auVar29 = vshufps_avx(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2),0);
        auVar39._0_4_ = auVar29._0_4_ * auVar37._0_4_;
        auVar39._4_4_ = auVar29._4_4_ * auVar37._4_4_;
        auVar39._8_4_ = auVar29._8_4_ * auVar37._8_4_;
        auVar39._12_4_ = auVar29._12_4_ * auVar37._12_4_;
        auVar29 = vsubps_avx(auVar17,auVar39);
        *(undefined1 (*) [16])(lVar25 + lVar9 + 0x10) = auVar29;
      }
      pfVar18 = pfVar19 + 4;
      pfVar22 = pfVar19 + 2;
      pfVar19 = pfVar18;
    } while (pfVar22 < (float *)((ulonglong)uVar3 * 0x10 + lVar8));
  }
  lVar24 = lVar24 + lVar26;
  if (pauVar21 != (undefined1 (*) [16])0x0) {
    uVar20 = rdtsc();
    auVar29 = vpinsrq_avx(auVar28,uVar20 & 0xffffffff00000000 |
                                  CONCAT44((int)((ulonglong)pfVar18 >> 0x20),(int)uVar20),1);
    auVar28 = vmovntdq_avx(SUB6416(ZEXT864(0x1413951dd),0));
    *pauVar21 = auVar28;
    auVar28 = vmovntdq_avx(auVar29);
    pauVar21[1] = auVar28;
  }
  puVar1 = (ulonglong *)(lVar7 + 0x170);
  void_jph_softbodymotionproperties_applyrodstr
            (param_1,param_2,puVar27[2],*(undefined4 *)(lVar24 + 8));
  auVar33._0_8_ =
       void_jph_softbodymotionproperties_applyrodben
                 (param_1,param_2,puVar27[3],*(undefined4 *)(lVar24 + 0xc));
  auVar33._8_56_ = extraout_var_02;
  auVar29 = auVar33._0_16_;
  uVar3 = *(uint *)(lVar24 + 4);
  uVar4 = puVar27[1];
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    auVar34._0_8_ = __dyn_tls_on_demand_init();
    auVar34._8_56_ = extraout_var_03;
    auVar29 = auVar34._0_16_;
    uVar20 = *puVar1;
  }
  else {
    uVar20 = *puVar1;
  }
  if (uVar20 != 0) {
    uVar6 = *(uint *)(uVar20 + 0x200020);
    if ((ulonglong)uVar6 < 0x10000) {
      *(uint *)(uVar20 + 0x200020) = uVar6 + 1;
      pauVar21 = (undefined1 (*) [16])((ulonglong)uVar6 * 0x20 + uVar20 + 0x20);
      uVar10 = rdtsc();
      uVar20 = CONCAT44((int)(uVar20 >> 0x20),(int)uVar10);
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar10 & 0xffffffff00000000 | uVar20;
      goto joined_r0x000140386e61;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      uVar20 = (*(code *)PTR_vfunction4_1414f67c8)();
      auVar35._8_56_ = extraout_var_04;
      auVar35._0_8_ = extraout_XMM0_Qa_00;
      auVar29 = auVar35._0_16_;
    }
  }
  pauVar21 = (undefined1 (*) [16])0x0;
joined_r0x000140386e61:
  if (uVar4 < uVar3) {
    uVar20 = *(ulonglong *)(param_1 + 0x118);
    lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x100) + 0xc0);
    puVar27 = (uint *)(lVar24 + (ulonglong)uVar4 * 0xc);
    do {
      auVar28 = *(undefined1 (*) [16])(uVar20 + 0x10 + (ulonglong)*puVar27 * 0x50);
      auVar17 = vsubps_avx(*(undefined1 (*) [16])(uVar20 + 0x10 + (ulonglong)puVar27[1] * 0x50),
                           auVar28);
      fVar2 = auVar17._0_4_;
      auVar37._0_4_ = fVar2 * fVar2;
      fVar12 = auVar17._4_4_;
      auVar37._4_4_ = fVar12 * fVar12;
      fVar13 = auVar17._8_4_;
      auVar37._8_4_ = fVar13 * fVar13;
      fVar14 = auVar17._12_4_;
      auVar37._12_4_ = fVar14 * fVar14;
      auVar17 = vinsertps_avx(auVar37,auVar37,0x4c);
      auVar38._0_4_ = auVar37._0_4_ + auVar17._0_4_;
      auVar38._4_4_ = auVar37._4_4_ + auVar17._4_4_;
      auVar38._8_4_ = auVar37._8_4_ + auVar17._8_4_;
      auVar38._12_4_ = auVar37._12_4_ + auVar17._12_4_;
      auVar17 = vshufpd_avx(auVar38,auVar38,1);
      fVar11 = auVar38._0_4_ + auVar17._0_4_;
      fVar5 = (float)puVar27[2];
      if (fVar5 * fVar5 < fVar11) {
        lVar26 = (ulonglong)puVar27[1] * 0x50 + uVar20;
        auVar17 = vshufps_avx(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),0);
        auVar36._0_4_ = fVar2 * auVar17._0_4_;
        auVar36._4_4_ = fVar12 * auVar17._4_4_;
        auVar36._8_4_ = fVar13 * auVar17._8_4_;
        auVar36._12_4_ = fVar14 * auVar17._12_4_;
        auVar17 = vsqrtss_avx(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
        auVar17 = vshufps_avx(auVar17,auVar17,0);
        auVar17 = vdivps_avx(auVar36,auVar17);
        *(float *)(lVar26 + 0x10) = auVar28._0_4_ + auVar17._0_4_;
        *(float *)(lVar26 + 0x14) = auVar28._4_4_ + auVar17._4_4_;
        *(float *)(lVar26 + 0x18) = auVar28._8_4_ + auVar17._8_4_;
        *(float *)(lVar26 + 0x1c) = auVar28._12_4_ + auVar17._12_4_;
      }
      puVar27 = puVar27 + 3;
    } while (puVar27 < (uint *)(lVar24 + (ulonglong)uVar3 * 0xc));
  }
  if (pauVar21 != (undefined1 (*) [16])0x0) {
    uVar10 = rdtsc();
    auVar29 = vpinsrq_avx(auVar29,uVar10 & 0xffffffff00000000 |
                                  CONCAT44((int)(uVar20 >> 0x20),(int)uVar10),1);
    auVar28 = vmovntdq_avx(SUB6416(ZEXT864(0x141394f43),0));
    *pauVar21 = auVar28;
    auVar28 = vmovntdq_avx(auVar29);
    pauVar21[1] = auVar28;
  }
  if (DAT_1414ef3c0 != (local_a0 ^ (ulonglong)auStack_e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_a0 ^ (ulonglong)auStack_e8);
  }
  return;
}


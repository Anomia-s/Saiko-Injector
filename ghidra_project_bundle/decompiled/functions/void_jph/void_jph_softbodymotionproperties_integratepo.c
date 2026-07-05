/**
 * Function: void_jph_softbodymotionproperties_integratepo
 * Address:  140383be0
 * Signature: undefined void_jph_softbodymotionproperties_integratepo(void)
 * Body size: 671 bytes
 */


void void_jph_softbodymotionproperties_integratepo(longlong param_1,longlong param_2)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  undefined1 (*pauVar14) [16];
  longlong lVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 in_ZMM0 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [12];
  undefined1 auVar25 [16];
  undefined1 in_ZMM5 [64];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar30 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  
  auVar17 = in_ZMM0._0_16_;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    auVar18._0_8_ = __dyn_tls_on_demand_init();
    auVar18._8_56_ = extraout_var;
    auVar17 = auVar18._0_16_;
  }
  auVar26 = in_ZMM5._4_12_;
  lVar13 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (lVar13 != 0) {
    uVar3 = *(uint *)(lVar13 + 0x200020);
    if ((ulonglong)uVar3 < 0x10000) {
      *(uint *)(lVar13 + 0x200020) = uVar3 + 1;
      pauVar14 = (undefined1 (*) [16])((ulonglong)uVar3 * 0x20 + lVar13 + 0x20);
      uVar4 = rdtsc();
      auVar17._8_8_ = 0;
      auVar17._0_8_ =
           uVar4 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar13 >> 0x20),(int)uVar4);
      goto LAB_140383c96;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      auVar19._0_8_ = (*(code *)PTR_vfunction4_1414f67c8)();
      auVar26 = in_ZMM5._4_12_;
      auVar19._8_56_ = extraout_var_00;
      auVar17 = auVar19._0_16_;
    }
  }
  pauVar14 = (undefined1 (*) [16])0x0;
LAB_140383c96:
  fVar2 = *(float *)(param_2 + 0x84);
  auVar20._4_4_ = fVar2;
  auVar20._0_4_ = fVar2;
  auVar20._8_4_ = fVar2;
  auVar20._12_4_ = fVar2;
  auVar20 = vfnmadd132ss_fma(ZEXT416(*(uint *)(param_1 + 0x5c)),SUB6416(ZEXT464(0x3f800000),0),
                             auVar20);
  auVar21._0_12_ = ZEXT812(0);
  auVar21._12_4_ = 0;
  uVar4 = *(ulonglong *)(param_1 + 0x108);
  if ((longlong)uVar4 < 0) {
    auVar25 = ZEXT416((uint)(float)uVar4);
    auVar20 = vmaxss_avx(auVar20,auVar21);
  }
  else {
    auVar25._0_4_ = (float)(longlong)uVar4;
    auVar25._4_12_ = auVar26;
    auVar20 = vmaxss_avx(auVar20,auVar21);
  }
  if (uVar4 != 0) {
    auVar27._0_4_ = fVar2 * *(float *)(param_1 + 0x40);
    auVar27._4_4_ = fVar2 * *(float *)(param_1 + 0x44);
    auVar27._8_4_ = fVar2 * *(float *)(param_1 + 0x48);
    auVar27._12_4_ = fVar2 * *(float *)(param_1 + 0x4c);
    fVar5 = *(float *)(param_2 + 0x60);
    fVar6 = *(float *)(param_2 + 100);
    fVar7 = *(float *)(param_2 + 0x68);
    fVar8 = *(float *)(param_2 + 0x6c);
    lVar13 = *(longlong *)(param_1 + 0x118);
    auVar21 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar25);
    auVar21 = vshufps_avx(auVar21,auVar21,0);
    auVar21 = vdivps_avx(auVar27,auVar21);
    auVar25 = vshufps_avx(auVar20,auVar20,0);
    lVar15 = 0;
    do {
      fVar29 = *(float *)(lVar13 + 0x4c + lVar15);
      if (0.0 < fVar29) {
        auVar27 = vshufps_avx(ZEXT416((uint)fVar29),ZEXT416((uint)fVar29),0);
        pfVar1 = (float *)(lVar13 + 0x20 + lVar15);
        fVar29 = auVar25._0_4_ * (fVar2 * fVar5 + auVar21._0_4_ * auVar27._0_4_ + *pfVar1);
        fVar31 = auVar25._4_4_ * (fVar2 * fVar6 + auVar21._4_4_ * auVar27._4_4_ + pfVar1[1]);
        fVar32 = auVar25._8_4_ * (fVar2 * fVar7 + auVar21._8_4_ * auVar27._8_4_ + pfVar1[2]);
        fVar33 = auVar25._12_4_ * (fVar2 * fVar8 + auVar21._12_4_ * auVar27._12_4_ + pfVar1[3]);
        pfVar1 = (float *)(lVar13 + 0x20 + lVar15);
        *pfVar1 = fVar29;
        pfVar1[1] = fVar31;
        pfVar1[2] = fVar32;
        pfVar1[3] = fVar33;
      }
      else {
        pfVar1 = (float *)(lVar13 + 0x20 + lVar15);
        fVar29 = *pfVar1;
        fVar31 = pfVar1[1];
        fVar32 = pfVar1[2];
        fVar33 = pfVar1[3];
      }
      pfVar1 = (float *)(lVar13 + 0x10 + lVar15);
      fVar9 = *pfVar1;
      fVar10 = pfVar1[1];
      fVar11 = pfVar1[2];
      fVar12 = pfVar1[3];
      pfVar1 = (float *)(lVar13 + lVar15);
      *pfVar1 = fVar9;
      pfVar1[1] = fVar10;
      pfVar1[2] = fVar11;
      pfVar1[3] = fVar12;
      pfVar1 = (float *)(lVar13 + 0x10 + lVar15);
      *pfVar1 = fVar9 + fVar2 * fVar29;
      pfVar1[1] = fVar10 + fVar2 * fVar31;
      pfVar1[2] = fVar11 + fVar2 * fVar32;
      pfVar1[3] = fVar12 + fVar2 * fVar33;
      lVar15 = lVar15 + 0x50;
    } while (uVar4 * 0x50 != lVar15);
  }
  lVar13 = 0;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    lVar15 = *(longlong *)(param_1 + 0x130);
    lVar13 = *(longlong *)(param_1 + 0x120) << 5;
    auVar20 = vshufps_avx(auVar20,auVar20,0);
    auVar21 = vshufps_avx(ZEXT416((uint)(fVar2 * 0.5)),ZEXT416((uint)(fVar2 * 0.5)),0);
    lVar16 = 0;
    do {
      pfVar1 = (float *)(lVar15 + 0x10 + lVar16);
      auVar22._0_4_ = auVar20._0_4_ * *pfVar1;
      auVar22._4_4_ = auVar20._4_4_ * pfVar1[1];
      auVar22._8_4_ = auVar20._8_4_ * pfVar1[2];
      auVar22._12_4_ = auVar20._12_4_ * pfVar1[3];
      auVar25 = *(undefined1 (*) [16])(lVar15 + lVar16);
      auVar27 = vshufps_avx(auVar22,auVar22,0x24);
      auVar23 = vshufps_avx(auVar22,auVar22,0x49);
      auVar22 = vshufps_avx(auVar22,auVar22,0x92);
      auVar24 = vshufps_avx(auVar25,auVar25,0x3f);
      auVar28 = vshufps_avx(auVar25,auVar25,0x52);
      auVar30._0_4_ = auVar28._0_4_ * auVar23._0_4_;
      auVar30._4_4_ = auVar28._4_4_ * auVar23._4_4_;
      auVar30._8_4_ = auVar28._8_4_ * auVar23._8_4_;
      auVar30._12_4_ = auVar28._12_4_ * auVar23._12_4_;
      auVar27 = vfmadd231ps_fma(auVar30,auVar27,auVar24);
      auVar28._0_12_ = auVar27._0_12_;
      auVar28._12_4_ = auVar27._12_4_ ^ 0x80000000;
      auVar27 = vshufps_avx(auVar25,auVar25,0x89);
      auVar23._0_4_ = auVar22._0_4_ * auVar27._0_4_;
      auVar23._4_4_ = auVar22._4_4_ * auVar27._4_4_;
      auVar23._8_4_ = auVar22._8_4_ * auVar27._8_4_;
      auVar23._12_4_ = auVar22._12_4_ * auVar27._12_4_;
      auVar27 = vsubps_avx(auVar28,auVar23);
      auVar24._0_4_ = auVar25._0_4_ + auVar21._0_4_ * auVar27._0_4_;
      auVar24._4_4_ = auVar25._4_4_ + auVar21._4_4_ * auVar27._4_4_;
      auVar24._8_4_ = auVar25._8_4_ + auVar21._8_4_ * auVar27._8_4_;
      auVar24._12_4_ = auVar25._12_4_ + auVar21._12_4_ * auVar27._12_4_;
      auVar27 = vdpps_avx(auVar24,auVar24,0xff);
      *(undefined1 (*) [16])(lVar15 + 0x10 + lVar16) = auVar25;
      auVar25 = vsqrtps_avx(auVar27);
      auVar25 = vdivps_avx(auVar24,auVar25);
      *(undefined1 (*) [16])(lVar15 + lVar16) = auVar25;
      lVar16 = lVar16 + 0x20;
    } while (lVar13 != lVar16);
  }
  if (pauVar14 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar20 = vpinsrq_avx(auVar17,uVar4 & 0xffffffff00000000 |
                                  CONCAT44((int)((ulonglong)lVar13 >> 0x20),(int)uVar4),1);
    auVar17 = vmovntdq_avx(SUB6416(ZEXT864(0x14139a4b2),0));
    *pauVar14 = auVar17;
    auVar17 = vmovntdq_avx(auVar20);
    pauVar14[1] = auVar17;
  }
  return;
}


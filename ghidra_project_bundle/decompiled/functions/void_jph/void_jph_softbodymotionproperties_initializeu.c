/**
 * Function: void_jph_softbodymotionproperties_initializeu
 * Address:  140386840
 * Signature: undefined void_jph_softbodymotionproperties_initializeu(void)
 * Body size: 641 bytes
 */


void void_jph_softbodymotionproperties_initializeu
               (longlong param_1,float param_2,undefined1 (*param_3) [16],longlong param_4,
               undefined8 *param_5)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 (*pauVar11) [16];
  undefined1 auVar12 [16];
  undefined1 in_ZMM0 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  
  auVar12 = in_ZMM0._0_16_;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    auVar13._0_8_ = __dyn_tls_on_demand_init();
    auVar13._8_56_ = extraout_var;
    auVar12 = auVar13._0_16_;
  }
  lVar3 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar3 != 0) {
    uVar2 = *(uint *)(lVar3 + 0x200020);
    if ((ulonglong)uVar2 < 0x10000) {
      *(uint *)(lVar3 + 0x200020) = uVar2 + 1;
      pauVar11 = (undefined1 (*) [16])((ulonglong)uVar2 * 0x20 + lVar3 + 0x20);
      uVar4 = rdtsc();
      auVar12._8_8_ = 0;
      auVar12._0_8_ =
           uVar4 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar3 >> 0x20),(int)uVar4);
      goto LAB_140386917;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      auVar14._0_8_ = (*(code *)PTR_vfunction4_1414f67c8)();
      auVar14._8_56_ = extraout_var_00;
      auVar12 = auVar14._0_16_;
    }
  }
  pauVar11 = (undefined1 (*) [16])0x0;
LAB_140386917:
  *param_5 = param_3;
  param_5[1] = param_1;
  param_5[2] = *(undefined8 *)(param_4 + 0x210);
  param_5[3] = *(undefined8 *)(param_4 + 0x218);
  auVar16 = param_3[1];
  fVar6 = auVar16._0_4_;
  auVar18._0_4_ = fVar6 + fVar6;
  fVar7 = auVar16._4_4_;
  auVar18._4_4_ = fVar7 + fVar7;
  fVar8 = auVar16._8_4_;
  auVar18._8_4_ = fVar8 + fVar8;
  fVar9 = auVar16._12_4_;
  auVar18._12_4_ = fVar9 + fVar9;
  auVar17 = vshufps_avx(auVar18,auVar18,0xc9);
  auVar16 = vshufps_avx(auVar16,auVar16,0xd2);
  auVar10 = vshufps_avx(auVar18,auVar18,0xd2);
  fVar1 = *(float *)(param_3[1] + 0xc);
  auVar21._0_4_ = auVar16._0_4_ * auVar10._0_4_;
  auVar21._4_4_ = auVar16._4_4_ * auVar10._4_4_;
  auVar21._8_4_ = auVar16._8_4_ * auVar10._8_4_;
  auVar21._12_4_ = auVar16._12_4_ * auVar10._12_4_;
  auVar22._0_4_ = fVar6 * auVar18._0_4_;
  auVar22._4_4_ = fVar7 * auVar18._4_4_;
  auVar22._8_4_ = fVar8 * auVar18._8_4_;
  auVar22._12_4_ = fVar9 * auVar18._12_4_;
  auVar15 = vshufps_avx(auVar22,auVar22,0xc9);
  auVar23._8_4_ = 0x3f800000;
  auVar23._0_8_ = 0x3f8000003f800000;
  auVar23._12_4_ = 0x3f800000;
  auVar15 = vsubps_avx(auVar23,auVar15);
  auVar21 = vsubps_avx(auVar15,auVar21);
  auVar19._0_4_ = fVar1 * auVar17._0_4_ + auVar18._0_4_ * auVar16._0_4_;
  auVar19._4_4_ = fVar1 * auVar17._4_4_ + auVar18._4_4_ * auVar16._4_4_;
  auVar19._8_4_ = fVar1 * auVar17._8_4_ + auVar18._8_4_ * auVar16._8_4_;
  auVar19._12_4_ = fVar1 * auVar17._12_4_ + auVar18._12_4_ * auVar16._12_4_;
  auVar20._0_4_ = fVar1 * auVar10._0_4_;
  auVar20._4_4_ = fVar1 * auVar10._4_4_;
  auVar20._8_4_ = fVar1 * auVar10._8_4_;
  auVar20._12_4_ = fVar1 * auVar10._12_4_;
  auVar16._0_4_ = fVar6 * auVar17._0_4_;
  auVar16._4_4_ = fVar7 * auVar17._4_4_;
  auVar16._8_4_ = fVar8 * auVar17._8_4_;
  auVar16._12_4_ = fVar9 * auVar17._12_4_;
  auVar10 = vsubps_avx(auVar16,auVar20);
  auVar16 = vblendps_avx(auVar10,ZEXT816(0) << 0x20,8);
  auVar17 = vblendps_avx(auVar21,auVar19,2);
  auVar16 = vblendps_avx(auVar16,auVar17,3);
  auVar17 = vinsertps_avx(auVar10,auVar21,0x58);
  auVar17 = vblendps_avx(auVar17,auVar19,4);
  auVar10 = vinsertps_avx(auVar10,auVar19,8);
  auVar15 = vinsertps_avx(*param_3,ZEXT416(0x3f800000),0x30);
  auVar10 = vblendps_avx(auVar10,auVar21,4);
  *(undefined1 (*) [16])(param_5 + 4) = auVar16;
  *(undefined1 (*) [16])(param_5 + 6) = auVar17;
  *(undefined1 (*) [16])(param_5 + 8) = auVar10;
  *(undefined1 (*) [16])(param_5 + 10) = auVar15;
  fVar1 = *(float *)(param_1 + 0x6c);
  auVar15._0_4_ = fVar1 * *(float *)(param_4 + 0x510);
  auVar15._4_4_ = fVar1 * *(float *)(param_4 + 0x514);
  auVar15._8_4_ = fVar1 * *(float *)(param_4 + 0x518);
  auVar15._12_4_ = fVar1 * *(float *)(param_4 + 0x51c);
  auVar16 = vdpps_avx(auVar16,auVar15,0x7f);
  auVar17 = vdpps_avx(auVar17,auVar15,0x7f);
  auVar10 = vdpps_avx(auVar10,auVar15,0x7f);
  auVar16 = vblendps_avx(auVar16,auVar17,2);
  auVar16 = vblendps_avx(auVar10,auVar16,3);
  *(undefined1 (*) [16])(param_5 + 0xc) = auVar16;
  *(float *)(param_5 + 0x10) = param_2;
  param_2 = param_2 / (float)*(uint *)(param_1 + 0x1c0);
  *(float *)((longlong)param_5 + 0x84) = param_2;
  auVar17 = ZEXT416((uint)(param_2 * param_2 *
                          (float)*(uint *)(param_1 + 0x1c0) * 0.5 *
                          (float)(*(uint *)(param_1 + 0x1c0) + 1)));
  auVar17 = vshufps_avx(auVar17,auVar17,0);
  *(float *)(param_5 + 0xe) = auVar16._0_4_ * auVar17._0_4_;
  *(float *)((longlong)param_5 + 0x74) = auVar16._4_4_ * auVar17._4_4_;
  *(float *)(param_5 + 0xf) = auVar16._8_4_ * auVar17._8_4_;
  *(float *)((longlong)param_5 + 0x7c) = auVar16._12_4_ * auVar17._12_4_;
  if (pauVar11 != (undefined1 (*) [16])0x0) {
    uVar5 = rdtsc();
    auVar16 = vpinsrq_avx(auVar12,uVar5,1);
    auVar12 = vmovntdq_avx(SUB6416(ZEXT864(0x14139a5c9),0));
    *pauVar11 = auVar12;
    auVar12 = vmovntdq_avx(auVar16);
    pauVar11[1] = auVar12;
  }
  return;
}


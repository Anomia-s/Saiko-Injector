/**
 * Function: void_jph_debugrenderer_drawcylinderrmat44arg
 * Address:  14037ce90
 * Signature: undefined void_jph_debugrenderer_drawcylinderrmat44arg(void)
 * Body size: 763 bytes
 */


void void_jph_debugrenderer_drawcylinderrmat44arg
               (longlong *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined4 extraout_var;
  undefined1 (*pauVar5) [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_ZMM2 [64];
  undefined1 in_ZMM3 [64];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 in_ZMM8 [64];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  longlong *local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [16];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  ulonglong local_a0;
  undefined1 local_78 [16];
  
  local_78 = in_ZMM8._0_16_;
  auVar17 = ZEXT1664(in_ZMM3._0_16_);
  auVar18 = ZEXT1664(in_ZMM2._0_16_);
  local_a0 = DAT_1414ef3c0 ^ (ulonglong)auStack_158;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  auVar16 = auVar17._0_16_;
  auVar13 = auVar18._0_16_;
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x200020);
    if ((ulonglong)uVar1 < 0x10000) {
      *(uint *)(lVar2 + 0x200020) = uVar1 + 1;
      pauVar5 = (undefined1 (*) [16])(lVar2 + (ulonglong)uVar1 * 0x20 + 0x20);
      uVar3 = rdtsc();
      in_ZMM8 = ZEXT864(uVar3 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar2 >> 0x20),(int)uVar3));
      goto LAB_14037cfb3;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
      auVar16 = auVar17._0_16_;
      auVar13 = auVar18._0_16_;
    }
  }
  pauVar5 = (undefined1 (*) [16])0x0;
LAB_14037cfb3:
  auVar10 = vshufps_avx(auVar16,auVar16,0);
  fVar19 = param_2[4] * 0.0;
  fVar20 = param_2[5] * 0.0;
  fVar21 = param_2[6] * 0.0;
  fVar22 = param_2[7] * 0.0;
  fVar23 = param_2[8] * 0.0;
  fVar24 = param_2[9] * 0.0;
  fVar25 = param_2[10] * 0.0;
  fVar26 = param_2[0xb] * 0.0;
  local_c8 = param_2[0xc] * 0.0;
  fStack_c4 = param_2[0xd] * 0.0;
  fStack_c0 = param_2[0xe] * 0.0;
  fStack_bc = param_2[0xf] * 0.0;
  local_e8 = local_c8 + fVar23 + fVar19 + *param_2 * auVar10._0_4_;
  fStack_e4 = fStack_c4 + fVar24 + fVar20 + param_2[1] * auVar10._4_4_;
  fStack_e0 = fStack_c0 + fVar25 + fVar21 + param_2[2] * auVar10._8_4_;
  fStack_dc = fStack_bc + fVar26 + fVar22 + param_2[3] * auVar10._12_4_;
  fVar6 = *param_2 * 0.0;
  fVar7 = param_2[1] * 0.0;
  fVar8 = param_2[2] * 0.0;
  fVar9 = param_2[3] * 0.0;
  auVar13 = vshufps_avx(auVar13,auVar13,0);
  local_d8 = local_c8 + fVar23 + fVar6 + auVar13._0_4_ * param_2[4];
  fStack_d4 = fStack_c4 + fVar24 + fVar7 + auVar13._4_4_ * param_2[5];
  fStack_d0 = fStack_c0 + fVar25 + fVar8 + auVar13._8_4_ * param_2[6];
  fStack_cc = fStack_bc + fVar26 + fVar9 + auVar13._12_4_ * param_2[7];
  fVar19 = fVar19 + fVar6;
  fVar20 = fVar20 + fVar7;
  fVar21 = fVar21 + fVar8;
  fVar22 = fVar22 + fVar9;
  local_c8 = local_c8 + fVar19 + auVar10._0_4_ * param_2[8];
  fStack_c4 = fStack_c4 + fVar20 + auVar10._4_4_ * param_2[9];
  fStack_c0 = fStack_c0 + fVar21 + auVar10._8_4_ * param_2[10];
  fStack_bc = fStack_bc + fVar22 + auVar10._12_4_ * param_2[0xb];
  local_b8 = fVar23 + fVar19 + param_2[0xc];
  fStack_b4 = fVar24 + fVar20 + param_2[0xd];
  fStack_b0 = fVar25 + fVar21 + param_2[0xe];
  fStack_ac = fVar26 + fVar22 + param_2[0xf];
  local_130 = param_1 + 7;
  lVar2 = param_1[7];
  fVar6 = *(float *)(lVar2 + 0x20);
  auVar13._0_4_ = local_e8 * fVar6;
  auVar13._4_4_ = fStack_e4 * fVar6;
  auVar13._8_4_ = fStack_e0 * fVar6;
  auVar13._12_4_ = fStack_dc * fVar6;
  fVar6 = *(float *)(lVar2 + 0x30);
  auVar15._0_4_ = local_e8 * fVar6;
  auVar15._4_4_ = fStack_e4 * fVar6;
  auVar15._8_4_ = fStack_e0 * fVar6;
  auVar15._12_4_ = fStack_dc * fVar6;
  auVar4 = vminps_avx(auVar13,auVar15);
  auVar13 = vmaxps_avx(auVar13,auVar15);
  fVar6 = *(float *)(lVar2 + 0x24);
  auVar14._0_4_ = local_d8 * fVar6;
  auVar14._4_4_ = fStack_d4 * fVar6;
  auVar14._8_4_ = fStack_d0 * fVar6;
  auVar14._12_4_ = fStack_cc * fVar6;
  fVar6 = *(float *)(lVar2 + 0x34);
  auVar10._0_4_ = fVar6 * local_d8;
  auVar10._4_4_ = fVar6 * fStack_d4;
  auVar10._8_4_ = fVar6 * fStack_d0;
  auVar10._12_4_ = fVar6 * fStack_cc;
  auVar15 = vminps_avx(auVar14,auVar10);
  auVar10 = vmaxps_avx(auVar14,auVar10);
  fVar6 = *(float *)(lVar2 + 0x28);
  auVar11._0_4_ = local_c8 * fVar6;
  auVar11._4_4_ = fStack_c4 * fVar6;
  auVar11._8_4_ = fStack_c0 * fVar6;
  auVar11._12_4_ = fStack_bc * fVar6;
  fVar6 = *(float *)(lVar2 + 0x38);
  auVar12._0_4_ = fVar6 * local_c8;
  auVar12._4_4_ = fVar6 * fStack_c4;
  auVar12._8_4_ = fVar6 * fStack_c0;
  auVar12._12_4_ = fVar6 * fStack_bc;
  auVar14 = vminps_avx(auVar11,auVar12);
  local_108 = local_b8 + auVar4._0_4_ + auVar15._0_4_ + auVar14._0_4_;
  fStack_104 = fStack_b4 + auVar4._4_4_ + auVar15._4_4_ + auVar14._4_4_;
  fStack_100 = fStack_b0 + auVar4._8_4_ + auVar15._8_4_ + auVar14._8_4_;
  fStack_fc = fStack_ac + auVar4._12_4_ + auVar15._12_4_ + auVar14._12_4_;
  auVar4 = vmaxps_avx(auVar11,auVar12);
  local_f8._0_8_ =
       CONCAT44(fStack_b4 + auVar13._4_4_ + auVar10._4_4_ + auVar4._4_4_,
                local_b8 + auVar13._0_4_ + auVar10._0_4_ + auVar4._0_4_);
  local_f8._8_4_ = fStack_b0 + auVar13._8_4_ + auVar10._8_4_ + auVar4._8_4_;
  local_f8._12_4_ = fStack_ac + auVar13._12_4_ + auVar10._12_4_ + auVar4._12_4_;
  local_118 = param_7;
  local_120 = param_6;
  local_138 = param_5;
  local_128 = 0;
  (**(code **)(*param_1 + 0x28))(local_f8._0_8_,&local_e8,&local_108,auVar16._0_4_ * auVar16._0_4_);
  if (pauVar5 != (undefined1 (*) [16])0x0) {
    uVar3 = rdtsc();
    auVar13 = vpinsrq_avx(in_ZMM8._0_16_,
                          uVar3 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar3),1);
    auVar16 = vmovntdq_avx(SUB6416(ZEXT864(0x14139766b),0));
    *pauVar5 = auVar16;
    auVar16 = vmovntdq_avx(auVar13);
    pauVar5[1] = auVar16;
  }
  if (DAT_1414ef3c0 == (local_a0 ^ (ulonglong)auStack_158)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_a0 ^ (ulonglong)auStack_158);
}


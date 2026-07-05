/**
 * Function: void_jph_debugrenderer_drawboxrmat44arg_const
 * Address:  14037c350
 * Signature: undefined void_jph_debugrenderer_drawboxrmat44arg_const(void)
 * Body size: 909 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void void_jph_debugrenderer_drawboxrmat44arg_const
               (longlong *param_1,float *param_2,undefined1 (*param_3) [16],undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 extraout_var;
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
  undefined1 in_ZMM6 [64];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_168 [32];
  undefined4 local_148;
  longlong *local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [16];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
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
  ulonglong local_b0;
  undefined1 local_a8 [16];
  
  local_a8 = in_ZMM6._0_16_;
  local_b0 = DAT_1414ef3c0 ^ (ulonglong)auStack_168;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar3 != 0) {
    uVar2 = *(uint *)(lVar3 + 0x200020);
    if ((ulonglong)uVar2 < 0x10000) {
      *(uint *)(lVar3 + 0x200020) = uVar2 + 1;
      pauVar16 = (undefined1 (*) [16])(lVar3 + (ulonglong)uVar2 * 0x20 + 0x20);
      uVar4 = rdtsc();
      in_ZMM6 = ZEXT864(uVar4 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar3 >> 0x20),(int)uVar4));
      goto LAB_14037c46d;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar16 = (undefined1 (*) [16])0x0;
LAB_14037c46d:
  auVar20 = *param_3;
  auVar18 = param_3[1];
  auVar23 = vsubps_avx(auVar18,auVar20);
  auVar19._0_4_ = auVar23._0_4_ * 0.5;
  auVar19._4_4_ = auVar23._4_4_ * 0.5;
  auVar19._8_4_ = auVar23._8_4_ * 0.5;
  auVar19._12_4_ = auVar23._12_4_ * 0.5;
  auVar23 = vmaxps_avx(auVar19,_DAT_140de4700);
  auVar22._0_4_ = (auVar20._0_4_ + auVar18._0_4_) * 0.5;
  auVar22._4_4_ = (auVar20._4_4_ + auVar18._4_4_) * 0.5;
  auVar22._8_4_ = (auVar20._8_4_ + auVar18._8_4_) * 0.5;
  auVar22._12_4_ = (auVar20._12_4_ + auVar18._12_4_) * 0.0;
  fVar1 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_2[3];
  fVar8 = param_2[4];
  fVar9 = param_2[5];
  fVar10 = param_2[6];
  fVar11 = param_2[7];
  fVar12 = param_2[8];
  fVar13 = param_2[9];
  fVar14 = param_2[10];
  fVar15 = param_2[0xb];
  auVar20 = vshufps_avx(auVar23,auVar23,0);
  local_d8 = param_2[0xc] * 0.0;
  fStack_d4 = param_2[0xd] * 0.0;
  fStack_d0 = param_2[0xe] * 0.0;
  fStack_cc = param_2[0xf] * 0.0;
  local_f8 = local_d8 + fVar12 * 0.0 + fVar8 * 0.0 + fVar1 * auVar20._0_4_;
  fStack_f4 = fStack_d4 + fVar13 * 0.0 + fVar9 * 0.0 + fVar5 * auVar20._4_4_;
  fStack_f0 = fStack_d0 + fVar14 * 0.0 + fVar10 * 0.0 + fVar6 * auVar20._8_4_;
  fStack_ec = fStack_cc + fVar15 * 0.0 + fVar11 * 0.0 + fVar7 * auVar20._12_4_;
  auVar20 = vshufps_avx(auVar23,auVar23,0x55);
  local_e8 = local_d8 + fVar12 * 0.0 + fVar1 * 0.0 + auVar20._0_4_ * fVar8;
  fStack_e4 = fStack_d4 + fVar13 * 0.0 + fVar5 * 0.0 + auVar20._4_4_ * fVar9;
  fStack_e0 = fStack_d0 + fVar14 * 0.0 + fVar6 * 0.0 + auVar20._8_4_ * fVar10;
  fStack_dc = fStack_cc + fVar15 * 0.0 + fVar7 * 0.0 + auVar20._12_4_ * fVar11;
  auVar20 = vshufps_avx(auVar23,auVar23,0xaa);
  local_d8 = local_d8 + fVar8 * 0.0 + fVar1 * 0.0 + fVar12 * auVar20._0_4_;
  fStack_d4 = fStack_d4 + fVar9 * 0.0 + fVar5 * 0.0 + fVar13 * auVar20._4_4_;
  fStack_d0 = fStack_d0 + fVar10 * 0.0 + fVar6 * 0.0 + fVar14 * auVar20._8_4_;
  fStack_cc = fStack_cc + fVar11 * 0.0 + fVar7 * 0.0 + fVar15 * auVar20._12_4_;
  auVar20 = vshufps_avx(auVar22,auVar22,0);
  auVar18 = vshufps_avx(auVar22,auVar22,0x55);
  auVar23 = vshufps_avx(auVar22,auVar22,0xaa);
  local_c8 = param_2[0xc] + fVar1 * auVar20._0_4_ + auVar18._0_4_ * fVar8 + fVar12 * auVar23._0_4_;
  fStack_c4 = param_2[0xd] + fVar5 * auVar20._4_4_ + auVar18._4_4_ * fVar9 + fVar13 * auVar23._4_4_;
  fStack_c0 = param_2[0xe] + fVar6 * auVar20._8_4_ + auVar18._8_4_ * fVar10 + fVar14 * auVar23._8_4_
  ;
  fStack_bc = param_2[0xf] +
              fVar7 * auVar20._12_4_ + auVar18._12_4_ * fVar11 + fVar15 * auVar23._12_4_;
  local_140 = param_1 + 1;
  auVar23._0_4_ = local_d8 * local_d8;
  auVar23._4_4_ = fStack_d4 * fStack_d4;
  auVar23._8_4_ = fStack_d0 * fStack_d0;
  auVar23._12_4_ = fStack_cc * fStack_cc;
  auVar20 = vinsertps_avx(auVar23,auVar23,0x4c);
  auVar24._0_4_ = auVar23._0_4_ + auVar20._0_4_;
  auVar24._4_4_ = auVar23._4_4_ + auVar20._4_4_;
  auVar24._8_4_ = auVar23._8_4_ + auVar20._8_4_;
  auVar24._12_4_ = auVar23._12_4_ + auVar20._12_4_;
  auVar18 = vshufpd_avx(auVar24,auVar24,1);
  auVar26._0_4_ = local_e8 * local_e8;
  auVar26._4_4_ = fStack_e4 * fStack_e4;
  auVar26._8_4_ = fStack_e0 * fStack_e0;
  auVar26._12_4_ = fStack_dc * fStack_dc;
  auVar20 = vinsertps_avx(auVar26,auVar26,0x4c);
  auVar27._0_4_ = auVar26._0_4_ + auVar20._0_4_;
  auVar27._4_4_ = auVar26._4_4_ + auVar20._4_4_;
  auVar27._8_4_ = auVar26._8_4_ + auVar20._8_4_;
  auVar27._12_4_ = auVar26._12_4_ + auVar20._12_4_;
  auVar23 = vshufpd_avx(auVar27,auVar27,1);
  auVar29._0_4_ = local_f8 * local_f8;
  auVar29._4_4_ = fStack_f4 * fStack_f4;
  auVar29._8_4_ = fStack_f0 * fStack_f0;
  auVar29._12_4_ = fStack_ec * fStack_ec;
  auVar20 = vinsertps_avx(auVar29,auVar29,0x4c);
  auVar30._0_4_ = auVar20._0_4_ + auVar29._0_4_;
  auVar30._4_4_ = auVar20._4_4_ + auVar29._4_4_;
  auVar30._8_4_ = auVar20._8_4_ + auVar29._8_4_;
  auVar30._12_4_ = auVar20._12_4_ + auVar29._12_4_;
  auVar20 = vshufpd_avx(auVar30,auVar30,1);
  auVar20 = vmaxss_avx(ZEXT416((uint)(auVar27._0_4_ + auVar23._0_4_)),
                       ZEXT416((uint)(auVar20._0_4_ + auVar30._0_4_)));
  auVar19 = vmaxss_avx(ZEXT416((uint)(auVar24._0_4_ + auVar18._0_4_)),auVar20);
  lVar3 = param_1[1];
  fVar1 = *(float *)(lVar3 + 0x20);
  auVar28._0_4_ = local_f8 * fVar1;
  auVar28._4_4_ = fStack_f4 * fVar1;
  auVar28._8_4_ = fStack_f0 * fVar1;
  auVar28._12_4_ = fStack_ec * fVar1;
  fVar1 = *(float *)(lVar3 + 0x30);
  auVar20._0_4_ = local_f8 * fVar1;
  auVar20._4_4_ = fStack_f4 * fVar1;
  auVar20._8_4_ = fStack_f0 * fVar1;
  auVar20._12_4_ = fStack_ec * fVar1;
  auVar23 = vminps_avx(auVar28,auVar20);
  auVar20 = vmaxps_avx(auVar28,auVar20);
  fVar1 = *(float *)(lVar3 + 0x24);
  auVar25._0_4_ = local_e8 * fVar1;
  auVar25._4_4_ = fStack_e4 * fVar1;
  auVar25._8_4_ = fStack_e0 * fVar1;
  auVar25._12_4_ = fStack_dc * fVar1;
  fVar1 = *(float *)(lVar3 + 0x34);
  auVar18._0_4_ = local_e8 * fVar1;
  auVar18._4_4_ = fStack_e4 * fVar1;
  auVar18._8_4_ = fStack_e0 * fVar1;
  auVar18._12_4_ = fStack_dc * fVar1;
  auVar22 = vminps_avx(auVar25,auVar18);
  auVar18 = vmaxps_avx(auVar25,auVar18);
  fVar1 = *(float *)(lVar3 + 0x28);
  auVar21._0_4_ = local_d8 * fVar1;
  auVar21._4_4_ = fStack_d4 * fVar1;
  auVar21._8_4_ = fStack_d0 * fVar1;
  auVar21._12_4_ = fStack_cc * fVar1;
  fVar1 = *(float *)(lVar3 + 0x38);
  auVar17._0_4_ = local_d8 * fVar1;
  auVar17._4_4_ = fStack_d4 * fVar1;
  auVar17._8_4_ = fStack_d0 * fVar1;
  auVar17._12_4_ = fStack_cc * fVar1;
  auVar24 = vminps_avx(auVar21,auVar17);
  local_118 = local_c8 + auVar23._0_4_ + auVar22._0_4_ + auVar24._0_4_;
  fStack_114 = fStack_c4 + auVar23._4_4_ + auVar22._4_4_ + auVar24._4_4_;
  fStack_110 = fStack_c0 + auVar23._8_4_ + auVar22._8_4_ + auVar24._8_4_;
  fStack_10c = fStack_bc + auVar23._12_4_ + auVar22._12_4_ + auVar24._12_4_;
  auVar23 = vmaxps_avx(auVar21,auVar17);
  local_108._0_8_ =
       CONCAT44(fStack_c4 + auVar20._4_4_ + auVar18._4_4_ + auVar23._4_4_,
                local_c8 + auVar20._0_4_ + auVar18._0_4_ + auVar23._0_4_);
  local_108._8_4_ = fStack_c0 + auVar20._8_4_ + auVar18._8_4_ + auVar23._8_4_;
  local_108._12_4_ = fStack_bc + auVar20._12_4_ + auVar18._12_4_ + auVar23._12_4_;
  local_128 = param_6;
  local_130 = param_5;
  local_138 = 0;
  local_148 = param_4;
  (**(code **)(*param_1 + 0x28))(local_108._0_8_,&local_f8,&local_118,auVar19._0_8_);
  if (pauVar16 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar18 = vpinsrq_avx(in_ZMM6._0_16_,
                          uVar4 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar4),1);
    auVar20 = vmovntdq_avx(SUB6416(ZEXT864(0x141397867),0));
    *pauVar16 = auVar20;
    auVar20 = vmovntdq_avx(auVar18);
    pauVar16[1] = auVar20;
  }
  if (DAT_1414ef3c0 == (local_b0 ^ (ulonglong)auStack_168)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_b0 ^ (ulonglong)auStack_168);
}


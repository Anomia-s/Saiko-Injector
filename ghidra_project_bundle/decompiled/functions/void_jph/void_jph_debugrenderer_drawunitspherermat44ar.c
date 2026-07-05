/**
 * Function: void_jph_debugrenderer_drawunitspherermat44ar
 * Address:  14037c6e0
 * Signature: undefined void_jph_debugrenderer_drawunitspherermat44ar(void)
 * Body size: 599 bytes
 */


void void_jph_debugrenderer_drawunitspherermat44ar
               (longlong *param_1,float *param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

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
  float fVar16;
  undefined4 extraout_var;
  undefined1 (*pauVar17) [16];
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
  undefined1 in_ZMM6 [64];
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  ulonglong local_50;
  undefined1 local_48 [16];
  
  local_48 = in_ZMM6._0_16_;
  local_50 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
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
      pauVar17 = (undefined1 (*) [16])(lVar3 + (ulonglong)uVar2 * 0x20 + 0x20);
      uVar4 = rdtsc();
      in_ZMM6 = ZEXT864(uVar4 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar3 >> 0x20),(int)uVar4));
      goto LAB_14037c7c3;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar17 = (undefined1 (*) [16])0x0;
LAB_14037c7c3:
  local_a0 = param_1 + 2;
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  fVar9 = param_2[4];
  fVar10 = param_2[5];
  fVar11 = param_2[6];
  fVar12 = param_2[7];
  fVar13 = param_2[8];
  fVar14 = param_2[9];
  fVar15 = param_2[10];
  fVar16 = param_2[0xb];
  auVar22._0_4_ = fVar13 * fVar13;
  auVar22._4_4_ = fVar14 * fVar14;
  auVar22._8_4_ = fVar15 * fVar15;
  auVar22._12_4_ = fVar16 * fVar16;
  auVar19 = vinsertps_avx(auVar22,auVar22,0x4c);
  auVar23._0_4_ = auVar22._0_4_ + auVar19._0_4_;
  auVar23._4_4_ = auVar22._4_4_ + auVar19._4_4_;
  auVar23._8_4_ = auVar22._8_4_ + auVar19._8_4_;
  auVar23._12_4_ = auVar22._12_4_ + auVar19._12_4_;
  auVar20 = vshufpd_avx(auVar23,auVar23,1);
  auVar24._0_4_ = fVar9 * fVar9;
  auVar24._4_4_ = fVar10 * fVar10;
  auVar24._8_4_ = fVar11 * fVar11;
  auVar24._12_4_ = fVar12 * fVar12;
  auVar19 = vinsertps_avx(auVar24,auVar24,0x4c);
  auVar25._0_4_ = auVar24._0_4_ + auVar19._0_4_;
  auVar25._4_4_ = auVar24._4_4_ + auVar19._4_4_;
  auVar25._8_4_ = auVar24._8_4_ + auVar19._8_4_;
  auVar25._12_4_ = auVar24._12_4_ + auVar19._12_4_;
  auVar22 = vshufpd_avx(auVar25,auVar25,1);
  auVar27._0_4_ = fVar5 * fVar5;
  auVar27._4_4_ = fVar6 * fVar6;
  auVar27._8_4_ = fVar7 * fVar7;
  auVar27._12_4_ = fVar8 * fVar8;
  auVar19 = vinsertps_avx(auVar27,auVar27,0x4c);
  auVar28._0_4_ = auVar27._0_4_ + auVar19._0_4_;
  auVar28._4_4_ = auVar27._4_4_ + auVar19._4_4_;
  auVar28._8_4_ = auVar27._8_4_ + auVar19._8_4_;
  auVar28._12_4_ = auVar27._12_4_ + auVar19._12_4_;
  auVar19 = vshufpd_avx(auVar28,auVar28,1);
  auVar19 = vmaxss_avx(ZEXT416((uint)(auVar25._0_4_ + auVar22._0_4_)),
                       ZEXT416((uint)(auVar28._0_4_ + auVar19._0_4_)));
  auVar23 = vmaxss_avx(ZEXT416((uint)(auVar23._0_4_ + auVar20._0_4_)),auVar19);
  lVar3 = param_1[2];
  fVar1 = *(float *)(lVar3 + 0x20);
  auVar29._0_4_ = fVar5 * fVar1;
  auVar29._4_4_ = fVar6 * fVar1;
  auVar29._8_4_ = fVar7 * fVar1;
  auVar29._12_4_ = fVar8 * fVar1;
  fVar1 = *(float *)(lVar3 + 0x30);
  auVar19._0_4_ = fVar5 * fVar1;
  auVar19._4_4_ = fVar6 * fVar1;
  auVar19._8_4_ = fVar7 * fVar1;
  auVar19._12_4_ = fVar8 * fVar1;
  auVar22 = vminps_avx(auVar29,auVar19);
  auVar19 = vmaxps_avx(auVar29,auVar19);
  fVar1 = *(float *)(lVar3 + 0x24);
  auVar26._0_4_ = fVar9 * fVar1;
  auVar26._4_4_ = fVar10 * fVar1;
  auVar26._8_4_ = fVar11 * fVar1;
  auVar26._12_4_ = fVar12 * fVar1;
  fVar1 = *(float *)(lVar3 + 0x34);
  auVar20._0_4_ = fVar9 * fVar1;
  auVar20._4_4_ = fVar10 * fVar1;
  auVar20._8_4_ = fVar11 * fVar1;
  auVar20._12_4_ = fVar12 * fVar1;
  auVar24 = vminps_avx(auVar26,auVar20);
  auVar20 = vmaxps_avx(auVar26,auVar20);
  fVar1 = *(float *)(lVar3 + 0x28);
  auVar21._0_4_ = fVar13 * fVar1;
  auVar21._4_4_ = fVar14 * fVar1;
  auVar21._8_4_ = fVar15 * fVar1;
  auVar21._12_4_ = fVar16 * fVar1;
  fVar1 = *(float *)(lVar3 + 0x38);
  auVar18._0_4_ = fVar13 * fVar1;
  auVar18._4_4_ = fVar14 * fVar1;
  auVar18._8_4_ = fVar15 * fVar1;
  auVar18._12_4_ = fVar16 * fVar1;
  auVar25 = vminps_avx(auVar21,auVar18);
  local_78 = param_2[0xc] + auVar22._0_4_ + auVar24._0_4_ + auVar25._0_4_;
  fStack_74 = param_2[0xd] + auVar22._4_4_ + auVar24._4_4_ + auVar25._4_4_;
  fStack_70 = param_2[0xe] + auVar22._8_4_ + auVar24._8_4_ + auVar25._8_4_;
  fStack_6c = param_2[0xf] + auVar22._12_4_ + auVar24._12_4_ + auVar25._12_4_;
  auVar22 = vmaxps_avx(auVar21,auVar18);
  local_68._0_8_ =
       CONCAT44(param_2[0xd] + auVar19._4_4_ + auVar20._4_4_ + auVar22._4_4_,
                param_2[0xc] + auVar19._0_4_ + auVar20._0_4_ + auVar22._0_4_);
  local_68._8_4_ = param_2[0xe] + auVar19._8_4_ + auVar20._8_4_ + auVar22._8_4_;
  local_68._12_4_ = param_2[0xf] + auVar19._12_4_ + auVar20._12_4_ + auVar22._12_4_;
  local_88 = param_5;
  local_98 = 0;
  local_a8 = param_3;
  local_90 = param_4;
  (**(code **)(*param_1 + 0x28))(local_68._0_8_,param_2,&local_78,auVar23._0_8_);
  if (pauVar17 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar20 = vpinsrq_avx(in_ZMM6._0_16_,
                          uVar4 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar4),1);
    auVar19 = vmovntdq_avx(SUB6416(ZEXT864(0x141397812),0));
    *pauVar17 = auVar19;
    auVar19 = vmovntdq_avx(auVar20);
    pauVar17[1] = auVar19;
  }
  if (DAT_1414ef3c0 == (local_50 ^ (ulonglong)auStack_c8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_50 ^ (ulonglong)auStack_c8);
}


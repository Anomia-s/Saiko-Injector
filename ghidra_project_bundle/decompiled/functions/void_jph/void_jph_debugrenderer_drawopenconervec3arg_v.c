/**
 * Function: void_jph_debugrenderer_drawopenconervec3arg_v
 * Address:  14037d190
 * Signature: undefined void_jph_debugrenderer_drawopenconervec3arg_v(void)
 * Body size: 988 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void void_jph_debugrenderer_drawopenconervec3arg_v
               (longlong *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
               undefined1 (*param_4) [16],uint param_5,uint param_6,undefined4 param_7,
               undefined4 param_8,undefined4 param_9)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 extraout_var;
  undefined1 (*pauVar6) [16];
  float fVar7;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar36 [16];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  longlong *local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  ulonglong local_60;
  undefined1 local_58 [16];
  
  local_58 = in_ZMM6._0_16_;
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_118;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  auVar37 = ZEXT464(param_6);
  auVar20 = ZEXT416(param_6);
  auVar38 = ZEXT464(param_5);
  auVar15 = ZEXT416(param_5);
  uVar4 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  auVar13 = ZEXT416(param_5);
  auVar8 = ZEXT416(param_6);
  if (uVar4 != 0) {
    uVar1 = *(uint *)(uVar4 + 0x200020);
    if ((ulonglong)uVar1 < 0x10000) {
      *(uint *)(uVar4 + 0x200020) = uVar1 + 1;
      pauVar6 = (undefined1 (*) [16])(uVar4 + (ulonglong)uVar1 * 0x20 + 0x20);
      uVar3 = rdtsc();
      uVar4 = CONCAT44((int)(uVar4 >> 0x20),(int)uVar3);
      in_ZMM6 = ZEXT864(uVar3 & 0xffffffff00000000 | uVar4);
      goto LAB_14037d289;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      uVar4 = (*(code *)PTR_vfunction4_1414f67c8)
                        ("ProfileMeasurement: Too many samples, some data will be lost!");
      auVar13 = auVar38._0_16_;
      auVar8 = auVar37._0_16_;
    }
  }
  auVar20 = auVar8;
  auVar15 = auVar13;
  pauVar6 = (undefined1 (*) [16])0x0;
LAB_14037d289:
  auVar16 = in_ZMM6._0_16_;
  uVar5 = (undefined4)(uVar4 >> 0x20);
  auVar13 = vandps_avx(auVar15,_DAT_140de34a0);
  auVar8 = vshufps_avx(auVar13,auVar13,0);
  auVar13 = ZEXT416((uint)(auVar13._0_4_ * 0.63661975 + 0.5));
  auVar13 = vshufps_avx(auVar13,auVar13,0);
  auVar14._0_4_ = (int)auVar13._0_4_;
  auVar14._4_4_ = (int)auVar13._4_4_;
  auVar14._8_4_ = (int)auVar13._8_4_;
  auVar14._12_4_ = (int)auVar13._12_4_;
  auVar13 = vcvtdq2ps_avx(auVar14);
  fVar7 = auVar13._0_4_;
  fVar10 = auVar13._4_4_;
  fVar11 = auVar13._8_4_;
  fVar12 = auVar13._12_4_;
  fVar7 = auVar8._0_4_ + fVar7 * -1.5703125 + fVar7 * -0.0004837513 + fVar7 * -7.54979e-08;
  fVar10 = auVar8._4_4_ + fVar10 * -1.5703125 + fVar10 * -0.0004837513 + fVar10 * -7.54979e-08;
  fVar11 = auVar8._8_4_ + fVar11 * -1.5703125 + fVar11 * -0.0004837513 + fVar11 * -7.54979e-08;
  fVar12 = auVar8._12_4_ + fVar12 * -1.5703125 + fVar12 * -0.0004837513 + fVar12 * -7.54979e-08;
  fVar17 = fVar7 * fVar7;
  fVar24 = fVar10 * fVar10;
  fVar25 = fVar11 * fVar11;
  fVar26 = fVar12 * fVar12;
  auVar8._0_4_ = fVar7 + fVar7 * fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * 
                                                  0.009385402 + 0.0031199222) + 0.024430135) +
                                                  0.05341128) + 0.133388) + 0.33333156);
  auVar8._4_4_ = fVar10 + fVar10 * fVar24 * (fVar24 * (fVar24 * (fVar24 * (fVar24 * (fVar24 * 
                                                  0.009385402 + 0.0031199222) + 0.024430135) +
                                                  0.05341128) + 0.133388) + 0.33333156);
  auVar8._8_4_ = fVar11 + fVar11 * fVar25 * (fVar25 * (fVar25 * (fVar25 * (fVar25 * (fVar25 * 
                                                  0.009385402 + 0.0031199222) + 0.024430135) +
                                                  0.05341128) + 0.133388) + 0.33333156);
  auVar8._12_4_ =
       fVar12 + fVar12 * fVar26 * (fVar26 * (fVar26 * (fVar26 * (fVar26 * (fVar26 * 0.009385402 +
                                                                          0.0031199222) +
                                                                0.024430135) + 0.05341128) +
                                            0.133388) + 0.33333156);
  auVar14 = vpslld_avx(auVar14,0x1f);
  auVar13._8_4_ = 0xbf800000;
  auVar13._0_8_ = 0xbf800000bf800000;
  auVar13._12_4_ = 0xbf800000;
  auVar13 = vdivps_avx(auVar13,auVar8);
  auVar13 = vblendvps_avx(auVar8,auVar13,auVar14);
  fVar7 = auVar20._0_4_ * auVar13._0_4_;
  if ((fVar7 != 0.0) || (NAN(fVar7))) {
    auVar18._0_8_ = auVar20._0_8_ ^ 0x8000000080000000;
    auVar18._8_4_ = auVar20._8_4_ ^ 0x80000000;
    auVar18._12_4_ = auVar20._12_4_ ^ 0x80000000;
    auVar13 = vcmpss_avx(auVar15,ZEXT816(0) << 0x20,1);
    auVar13 = vblendvps_avx(auVar20,auVar18,auVar13);
    auVar8 = vshufps_avx(auVar13,auVar13,0);
    auVar13 = *param_3;
    auVar27._0_4_ = auVar8._0_4_ * auVar13._0_4_;
    auVar27._4_4_ = auVar8._4_4_ * auVar13._4_4_;
    auVar27._8_4_ = auVar8._8_4_ * auVar13._8_4_;
    auVar27._12_4_ = auVar8._12_4_ * auVar13._12_4_;
    auVar8 = *param_4;
    auVar20 = vshufps_avx(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7),0);
    auVar30._0_4_ = auVar20._0_4_ * auVar8._0_4_;
    auVar30._4_4_ = auVar20._4_4_ * auVar8._4_4_;
    auVar30._8_4_ = auVar20._8_4_ * auVar8._8_4_;
    auVar30._12_4_ = auVar20._12_4_ * auVar8._12_4_;
    auVar15 = vshufps_avx(auVar8,auVar8,0xc9);
    auVar35._0_4_ = auVar13._0_4_ * auVar15._0_4_;
    auVar35._4_4_ = auVar13._4_4_ * auVar15._4_4_;
    auVar35._8_4_ = auVar13._8_4_ * auVar15._8_4_;
    auVar35._12_4_ = auVar13._12_4_ * auVar15._12_4_;
    auVar13 = vshufps_avx(auVar13,auVar13,0xc9);
    auVar15._0_4_ = auVar13._0_4_ * auVar8._0_4_;
    auVar15._4_4_ = auVar13._4_4_ * auVar8._4_4_;
    auVar15._8_4_ = auVar13._8_4_ * auVar8._8_4_;
    auVar15._12_4_ = auVar13._12_4_ * auVar8._12_4_;
    auVar13 = vsubps_avx(auVar35,auVar15);
    auVar13 = vshufps_avx(auVar13,auVar13,0xc9);
    auVar19._0_4_ = auVar20._0_4_ * auVar13._0_4_;
    auVar19._4_4_ = auVar20._4_4_ * auVar13._4_4_;
    auVar19._8_4_ = auVar20._8_4_ * auVar13._8_4_;
    auVar19._12_4_ = auVar20._12_4_ * auVar13._12_4_;
    auVar36._0_12_ = ZEXT812(0);
    auVar36._12_4_ = 0;
    local_88 = vblendps_avx(auVar19,auVar36,8);
    local_98 = vblendps_avx(auVar27,auVar36,8);
    local_a8 = vblendps_avx(auVar30,auVar36,8);
    local_78 = vinsertps_avx(*param_2,ZEXT416(0x3f800000),0x30);
    local_f0 = param_1 + 6;
    auVar20._0_4_ = auVar19._0_4_ * auVar19._0_4_;
    auVar20._4_4_ = auVar19._4_4_ * auVar19._4_4_;
    auVar20._8_4_ = auVar19._8_4_ * auVar19._8_4_;
    auVar20._12_4_ = auVar19._12_4_ * auVar19._12_4_;
    auVar13 = vinsertps_avx(auVar20,auVar20,0x4c);
    auVar21._0_4_ = auVar13._0_4_ + auVar20._0_4_;
    auVar21._4_4_ = auVar13._4_4_ + auVar20._4_4_;
    auVar21._8_4_ = auVar13._8_4_ + auVar20._8_4_;
    auVar21._12_4_ = auVar13._12_4_ + auVar20._12_4_;
    auVar8 = vshufpd_avx(auVar21,auVar21,1);
    auVar28._0_4_ = auVar27._0_4_ * auVar27._0_4_;
    auVar28._4_4_ = auVar27._4_4_ * auVar27._4_4_;
    auVar28._8_4_ = auVar27._8_4_ * auVar27._8_4_;
    auVar28._12_4_ = auVar27._12_4_ * auVar27._12_4_;
    auVar13 = vinsertps_avx(auVar28,auVar28,0x4c);
    auVar29._0_4_ = auVar13._0_4_ + auVar28._0_4_;
    auVar29._4_4_ = auVar13._4_4_ + auVar28._4_4_;
    auVar29._8_4_ = auVar13._8_4_ + auVar28._8_4_;
    auVar29._12_4_ = auVar13._12_4_ + auVar28._12_4_;
    auVar20 = vshufpd_avx(auVar29,auVar29,1);
    auVar31._0_4_ = auVar30._0_4_ * auVar30._0_4_;
    auVar31._4_4_ = auVar30._4_4_ * auVar30._4_4_;
    auVar31._8_4_ = auVar30._8_4_ * auVar30._8_4_;
    auVar31._12_4_ = auVar30._12_4_ * auVar30._12_4_;
    auVar13 = vinsertps_avx(auVar31,auVar31,0x4c);
    auVar32._0_4_ = auVar13._0_4_ + auVar31._0_4_;
    auVar32._4_4_ = auVar13._4_4_ + auVar31._4_4_;
    auVar32._8_4_ = auVar13._8_4_ + auVar31._8_4_;
    auVar32._12_4_ = auVar13._12_4_ + auVar31._12_4_;
    auVar13 = vshufpd_avx(auVar32,auVar32,1);
    auVar13 = vmaxss_avx(ZEXT416((uint)(auVar20._0_4_ + auVar29._0_4_)),
                         ZEXT416((uint)(auVar13._0_4_ + auVar32._0_4_)));
    auVar15 = vmaxss_avx(ZEXT416((uint)(auVar8._0_4_ + auVar21._0_4_)),auVar13);
    lVar2 = param_1[6];
    fVar7 = *(float *)(lVar2 + 0x20);
    auVar22._0_4_ = local_a8._0_4_ * fVar7;
    auVar22._4_4_ = local_a8._4_4_ * fVar7;
    auVar22._8_4_ = local_a8._8_4_ * fVar7;
    auVar22._12_4_ = local_a8._12_4_ * fVar7;
    fVar7 = *(float *)(lVar2 + 0x30);
    auVar33._0_4_ = local_a8._0_4_ * fVar7;
    auVar33._4_4_ = local_a8._4_4_ * fVar7;
    auVar33._8_4_ = local_a8._8_4_ * fVar7;
    auVar33._12_4_ = local_a8._12_4_ * fVar7;
    auVar20 = vminps_avx(auVar22,auVar33);
    auVar13 = vmaxps_avx(auVar22,auVar33);
    fVar7 = *(float *)(lVar2 + 0x24);
    auVar34._0_4_ = local_98._0_4_ * fVar7;
    auVar34._4_4_ = local_98._4_4_ * fVar7;
    auVar34._8_4_ = local_98._8_4_ * fVar7;
    auVar34._12_4_ = local_98._12_4_ * fVar7;
    fVar7 = *(float *)(lVar2 + 0x34);
    auVar16._0_4_ = local_98._0_4_ * fVar7;
    auVar16._4_4_ = local_98._4_4_ * fVar7;
    auVar16._8_4_ = local_98._8_4_ * fVar7;
    auVar16._12_4_ = local_98._12_4_ * fVar7;
    auVar14 = vminps_avx(auVar34,auVar16);
    auVar8 = vmaxps_avx(auVar34,auVar16);
    fVar7 = *(float *)(lVar2 + 0x28);
    auVar23._0_4_ = local_88._0_4_ * fVar7;
    auVar23._4_4_ = local_88._4_4_ * fVar7;
    auVar23._8_4_ = local_88._8_4_ * fVar7;
    auVar23._12_4_ = local_88._12_4_ * fVar7;
    fVar7 = *(float *)(lVar2 + 0x38);
    auVar9._0_4_ = local_88._0_4_ * fVar7;
    auVar9._4_4_ = local_88._4_4_ * fVar7;
    auVar9._8_4_ = local_88._8_4_ * fVar7;
    auVar9._12_4_ = local_88._12_4_ * fVar7;
    auVar16 = vminps_avx(auVar23,auVar9);
    local_c8 = local_78._0_4_ + auVar20._0_4_ + auVar14._0_4_ + auVar16._0_4_;
    fStack_c4 = local_78._4_4_ + auVar20._4_4_ + auVar14._4_4_ + auVar16._4_4_;
    fStack_c0 = local_78._8_4_ + auVar20._8_4_ + auVar14._8_4_ + auVar16._8_4_;
    fStack_bc = local_78._12_4_ + auVar20._12_4_ + auVar14._12_4_ + auVar16._12_4_;
    auVar20 = vmaxps_avx(auVar23,auVar9);
    local_b8._0_8_ =
         CONCAT44(local_78._4_4_ + auVar13._4_4_ + auVar8._4_4_ + auVar20._4_4_,
                  local_78._0_4_ + auVar13._0_4_ + auVar8._0_4_ + auVar20._0_4_);
    local_b8._8_4_ = local_78._8_4_ + auVar13._8_4_ + auVar8._8_4_ + auVar20._8_4_;
    local_b8._12_4_ = local_78._12_4_ + auVar13._12_4_ + auVar8._12_4_ + auVar20._12_4_;
    local_d8 = param_9;
    local_e0 = param_8;
    local_f8 = param_7;
    local_e8 = 2;
    (**(code **)(*param_1 + 0x28))(local_b8._0_8_,local_a8,&local_c8,auVar15._0_8_);
    auVar16 = in_ZMM6._0_16_;
    uVar5 = extraout_var;
  }
  if (pauVar6 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar8 = vpinsrq_avx(auVar16,uVar4 & 0xffffffff00000000 | CONCAT44(uVar5,(int)uVar4),1);
    auVar13 = vmovntdq_avx(SUB6416(ZEXT864(0x1413977a0),0));
    *pauVar6 = auVar13;
    auVar13 = vmovntdq_avx(auVar8);
    pauVar6[1] = auVar13;
  }
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_118)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_118);
}


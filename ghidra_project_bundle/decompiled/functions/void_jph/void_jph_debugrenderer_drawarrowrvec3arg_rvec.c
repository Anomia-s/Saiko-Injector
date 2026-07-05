/**
 * Function: void_jph_debugrenderer_drawarrowrvec3arg_rvec
 * Address:  1403790c0
 * Signature: undefined void_jph_debugrenderer_drawarrowrvec3arg_rvec(void)
 * Body size: 675 bytes
 */


void void_jph_debugrenderer_drawarrowrvec3arg_rvec
               (longlong *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
               undefined4 param_4,uint param_5)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar18 [16];
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  undefined1 local_48 [16];
  undefined1 auVar19 [64];
  
  local_48 = in_ZMM7._0_16_;
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_e8;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  auVar14 = ZEXT464(param_5);
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x200020);
    if ((ulonglong)uVar1 < 0x10000) {
      *(uint *)(lVar2 + 0x200020) = uVar1 + 1;
      pauVar6 = (undefined1 (*) [16])(lVar2 + (ulonglong)uVar1 * 0x20 + 0x20);
      uVar3 = rdtsc();
      in_ZMM7 = ZEXT864(uVar3 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar2 >> 0x20),(int)uVar3));
      goto LAB_1403791a4;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar6 = (undefined1 (*) [16])0x0;
LAB_1403791a4:
  local_78 = *(undefined8 *)*param_3;
  uStack_70 = *(undefined8 *)(*param_3 + 8);
  local_88 = *(undefined8 *)*param_2;
  uStack_80 = *(undefined8 *)(*param_2 + 8);
  (**(code **)(*param_1 + 8))(param_1,&local_88,&local_78,param_4);
  auVar13 = in_ZMM7._0_16_;
  uVar5 = extraout_var;
  if (0.0 < auVar14._0_4_) {
    auVar13 = vsubps_avx(*param_3,*param_2);
    fVar15 = auVar13._0_4_;
    auVar11._0_4_ = fVar15 * fVar15;
    fVar16 = auVar13._4_4_;
    auVar11._4_4_ = fVar16 * fVar16;
    fVar17 = auVar13._8_4_;
    auVar11._8_4_ = fVar17 * fVar17;
    fVar4 = auVar13._12_4_;
    auVar11._12_4_ = fVar4 * fVar4;
    auVar13 = vinsertps_avx(auVar11,auVar11,0x4c);
    auVar10._0_4_ = auVar11._0_4_ + auVar13._0_4_;
    auVar10._4_4_ = auVar11._4_4_ + auVar13._4_4_;
    auVar10._8_4_ = auVar11._8_4_ + auVar13._8_4_;
    auVar10._12_4_ = auVar11._12_4_ + auVar13._12_4_;
    auVar13 = vshufpd_avx(auVar10,auVar10,1);
    fVar12 = auVar10._0_4_ + auVar13._0_4_;
    auVar13 = auVar14._0_16_;
    if ((fVar12 != 0.0) || (NAN(fVar12))) {
      auVar11 = vsqrtss_avx(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
      auVar8._0_4_ = auVar14._0_4_ / auVar11._0_4_;
      auVar8._4_12_ = auVar14._4_12_;
      auVar11 = vshufps_avx(auVar8,auVar8,0);
      auVar18._0_4_ = fVar15 * auVar11._0_4_;
      auVar18._4_4_ = fVar16 * auVar11._4_4_;
      auVar18._8_4_ = fVar17 * auVar11._8_4_;
      auVar18._12_4_ = fVar4 * auVar11._12_4_;
    }
    else {
      auVar18 = vblendps_avx(ZEXT816(0) << 0x20,auVar13,1);
    }
    auVar19 = ZEXT1664(auVar18);
    auVar7 = ZEXT816(0) << 0x40;
    auVar9 = vsubps_avx(auVar7,auVar18);
    auVar11 = vmaxps_avx(auVar18,auVar9);
    auVar10 = vshufps_avx(auVar11,auVar11,0);
    auVar11 = vshufps_avx(auVar11,auVar11,0x55);
    auVar8 = vcmpps_avx(auVar11,auVar10,1);
    auVar11 = vshufpd_avx(auVar18,auVar9,1);
    auVar11 = vblendps_avx(auVar11,auVar7,10);
    auVar10 = vshufps_avx(auVar18,auVar9,0xd8);
    auVar10 = vblendps_avx(auVar10,auVar7,9);
    auVar11 = vblendvps_avx(auVar10,auVar11,auVar8);
    auVar9._0_4_ = auVar11._0_4_ * auVar11._0_4_;
    auVar9._4_4_ = auVar11._4_4_ * auVar11._4_4_;
    auVar9._8_4_ = auVar11._8_4_ * auVar11._8_4_;
    auVar9._12_4_ = auVar11._12_4_ * auVar11._12_4_;
    auVar10 = vmovshdup_avx(auVar9);
    auVar7._0_4_ = auVar9._0_4_ + auVar10._0_4_;
    auVar7._4_4_ = auVar9._4_4_ + auVar10._4_4_;
    auVar7._8_4_ = auVar9._8_4_ + auVar10._8_4_;
    auVar7._12_4_ = auVar9._12_4_ + auVar10._12_4_;
    auVar10 = vshufpd_avx(auVar7,auVar7,1);
    auVar10 = ZEXT416((uint)(auVar7._0_4_ + auVar10._0_4_));
    auVar10 = vsqrtss_avx(auVar10,auVar10);
    auVar10 = vshufps_avx(auVar10,auVar10,0);
    auVar11 = vdivps_avx(auVar11,auVar10);
    auVar13 = vshufps_avx(auVar13,auVar13,0);
    fVar12 = auVar13._0_4_ * auVar11._0_4_;
    fVar15 = auVar13._4_4_ * auVar11._4_4_;
    fVar16 = auVar13._8_4_ * auVar11._8_4_;
    fVar17 = auVar13._12_4_ * auVar11._12_4_;
    auVar14 = ZEXT1664(CONCAT412(fVar17,CONCAT48(fVar16,CONCAT44(fVar15,fVar12))));
    local_98 = *(undefined8 *)*param_3;
    uStack_90 = *(undefined8 *)(*param_3 + 8);
    auVar13 = vsubps_avx(*param_3,auVar18);
    local_a8._0_4_ = auVar13._0_4_ + fVar12;
    local_a8._4_4_ = auVar13._4_4_ + fVar15;
    local_a8._8_4_ = auVar13._8_4_ + fVar16;
    local_a8._12_4_ = auVar13._12_4_ + fVar17;
    (**(code **)(*param_1 + 8))(param_1,local_a8,&local_98,param_4);
    local_b8 = *(undefined8 *)*param_3;
    uStack_b0 = *(undefined8 *)(*param_3 + 8);
    auVar13 = vsubps_avx(*param_3,auVar19._0_16_);
    local_c8 = vsubps_avx(auVar13,auVar14._0_16_);
    (**(code **)(*param_1 + 8))(param_1,local_c8,&local_b8,param_4);
    auVar13 = in_ZMM7._0_16_;
    uVar5 = extraout_var_00;
  }
  if (pauVar6 != (undefined1 (*) [16])0x0) {
    uVar3 = rdtsc();
    auVar11 = vpinsrq_avx(auVar13,uVar3 & 0xffffffff00000000 | CONCAT44(uVar5,(int)uVar3),1);
    auVar13 = vmovntdq_avx(SUB6416(ZEXT864(0x141395bb8),0));
    *pauVar6 = auVar13;
    auVar13 = vmovntdq_avx(auVar11);
    pauVar6[1] = auVar13;
  }
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_e8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_e8);
}


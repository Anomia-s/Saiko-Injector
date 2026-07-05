/**
 * Function: virtual_bool_jph_planeshape_castrayconst_rayc
 * Address:  1402f0830
 * Signature: undefined virtual_bool_jph_planeshape_castrayconst_rayc(void)
 * Body size: 364 bytes
 */


ulonglong virtual_bool_jph_planeshape_castrayconst_rayc
                    (longlong param_1,float *param_2,undefined4 *param_3,longlong param_4)

{
  ulonglong uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 (*pauVar7) [16];
  undefined1 auVar8 [16];
  undefined8 extraout_XMM0_Qa;
  undefined1 in_ZMM0 [64];
  undefined1 auVar9 [64];
  undefined1 extraout_var_00 [56];
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar10 [64];
  undefined1 extraout_var [56];
  
  auVar8 = in_ZMM0._0_16_;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    auVar9._0_8_ = __dyn_tls_on_demand_init();
    auVar9._8_56_ = extraout_var;
    auVar8 = auVar9._0_16_;
  }
  uVar4 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  pcVar6 = ThreadLocalStoragePointer;
  if (uVar4 == 0) {
LAB_1402f08d6:
    pauVar7 = (undefined1 (*) [16])0x0;
  }
  else {
    pcVar6 = (char *)(ulonglong)*(uint *)(uVar4 + 0x200020);
    if ((char *)0xffff < pcVar6) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        pcVar6 = "ProfileMeasurement: Too many samples, some data will be lost!";
        uVar4 = (*(code *)PTR_vfunction4_1414f67c8)
                          ("ProfileMeasurement: Too many samples, some data will be lost!");
        auVar10._8_56_ = extraout_var_00;
        auVar10._0_8_ = extraout_XMM0_Qa;
        auVar8 = auVar10._0_16_;
      }
      goto LAB_1402f08d6;
    }
    *(uint *)(uVar4 + 0x200020) = *(uint *)(uVar4 + 0x200020) + 1;
    pcVar6 = (char *)((longlong)pcVar6 * 0x20);
    pauVar7 = (undefined1 (*) [16])(pcVar6 + uVar4 + 0x20);
    uVar1 = rdtsc();
    uVar4 = CONCAT44((int)(uVar4 >> 0x20),(int)uVar1);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar1 & 0xffffffff00000000 | uVar4;
  }
  uVar5 = (undefined4)(uVar4 >> 0x20);
  auVar12._0_4_ = *(float *)(param_1 + 0x20) * *param_2;
  auVar12._4_4_ = *(float *)(param_1 + 0x24) * param_2[1];
  auVar12._8_4_ = *(float *)(param_1 + 0x28) * param_2[2];
  auVar12._12_4_ = *(float *)(param_1 + 0x2c) * param_2[3];
  auVar3 = vinsertps_avx(auVar12,auVar12,0x4c);
  auVar13._0_4_ = auVar12._0_4_ + auVar3._0_4_;
  auVar13._4_4_ = auVar12._4_4_ + auVar3._4_4_;
  auVar13._8_4_ = auVar12._8_4_ + auVar3._8_4_;
  auVar13._12_4_ = auVar12._12_4_ + auVar3._12_4_;
  auVar3 = vshufpd_avx(auVar13,auVar13,1);
  fVar2 = auVar13._0_4_ + auVar3._0_4_ + *(float *)(param_1 + 0x2c);
  if (fVar2 <= 0.0) {
    *(undefined4 *)(param_4 + 4) = 0;
  }
  else {
    auVar14._0_4_ = *(float *)(param_1 + 0x20) * param_2[4];
    auVar14._4_4_ = *(float *)(param_1 + 0x24) * param_2[5];
    auVar14._8_4_ = *(float *)(param_1 + 0x28) * param_2[6];
    auVar14._12_4_ = *(float *)(param_1 + 0x2c) * param_2[7];
    auVar3 = vinsertps_avx(auVar14,auVar14,0x4c);
    auVar15._0_4_ = auVar14._0_4_ + auVar3._0_4_;
    auVar15._4_4_ = auVar14._4_4_ + auVar3._4_4_;
    auVar15._8_4_ = auVar14._8_4_ + auVar3._8_4_;
    auVar15._12_4_ = auVar14._12_4_ + auVar3._12_4_;
    auVar3 = vshufpd_avx(auVar15,auVar15,1);
    fVar11 = auVar15._0_4_ + auVar3._0_4_;
    if ((((fVar11 == 0.0) && (!NAN(fVar11))) || (fVar11 = -fVar2 / fVar11, fVar11 < 0.0)) ||
       (*(float *)(param_4 + 4) <= fVar11)) {
      uVar4 = 0;
      goto joined_r0x0001402f095f;
    }
    *(float *)(param_4 + 4) = fVar11;
  }
  uVar5 = 0;
  *(undefined4 *)(param_4 + 8) = *param_3;
  uVar4 = CONCAT71((int7)((ulonglong)pcVar6 >> 8),1);
joined_r0x0001402f095f:
  if (pauVar7 != (undefined1 (*) [16])0x0) {
    uVar1 = rdtsc();
    auVar3 = vpinsrq_avx(auVar8,uVar1 & 0xffffffff00000000 | CONCAT44(uVar5,(int)uVar1),1);
    auVar8 = vmovntdq_avx(SUB6416(ZEXT864(0x14132b8a4),0));
    *pauVar7 = auVar8;
    auVar8 = vmovntdq_avx(auVar3);
    pauVar7[1] = auVar8;
  }
  return uVar4 & 0xffffffff;
}


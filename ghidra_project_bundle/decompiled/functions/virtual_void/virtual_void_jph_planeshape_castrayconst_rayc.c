/**
 * Function: virtual_void_jph_planeshape_castrayconst_rayc
 * Address:  1402f09a0
 * Signature: undefined virtual_void_jph_planeshape_castrayconst_rayc(void)
 * Body size: 616 bytes
 */


void virtual_void_jph_planeshape_castrayconst_rayc
               (longlong param_1,float *param_2,longlong param_3,undefined4 *param_4,
               longlong *param_5,longlong *param_6)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_ZMM6 [64];
  float fVar13;
  undefined1 auVar14 [64];
  float fVar15;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  float local_78;
  undefined4 local_74;
  ulonglong local_70;
  undefined1 local_68 [16];
  undefined1 auVar8 [16];
  
  local_68 = in_ZMM6._0_16_;
  local_70 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x200020);
    if ((ulonglong)uVar1 < 0x10000) {
      *(uint *)(lVar2 + 0x200020) = uVar1 + 1;
      pauVar5 = (undefined1 (*) [16])(lVar2 + (ulonglong)uVar1 * 0x20 + 0x20);
      uVar3 = rdtsc();
      in_ZMM6 = ZEXT864(uVar3 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar2 >> 0x20),(int)uVar3));
      goto LAB_1402f0a81;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar5 = (undefined1 (*) [16])0x0;
LAB_1402f0a81:
  uVar4 = (**(code **)(*param_6 + 0x10))(param_6,param_1,param_4);
  auVar12 = in_ZMM6._0_16_;
  if ((char)uVar4 != '\0') {
    auVar8 = *(undefined1 (*) [16])(param_1 + 0x20);
    auVar10._0_4_ = auVar8._0_4_ * *param_2;
    auVar10._4_4_ = auVar8._4_4_ * param_2[1];
    auVar10._8_4_ = auVar8._8_4_ * param_2[2];
    auVar10._12_4_ = auVar8._12_4_ * param_2[3];
    auVar12 = vinsertps_avx(auVar10,auVar10,0x4c);
    auVar11._0_4_ = auVar10._0_4_ + auVar12._0_4_;
    auVar11._4_4_ = auVar10._4_4_ + auVar12._4_4_;
    auVar11._8_4_ = auVar10._8_4_ + auVar12._8_4_;
    auVar11._12_4_ = auVar10._12_4_ + auVar12._12_4_;
    auVar12 = vshufpd_avx(auVar11,auVar11,1);
    fVar13 = auVar11._0_4_ + auVar12._0_4_ + *(float *)(param_1 + 0x2c);
    auVar14 = ZEXT464((uint)fVar13);
    fVar15 = 0.0;
    if (((fVar13 <= 0.0) && (*(char *)(param_3 + 2) != '\0')) && (0.0 < *(float *)(param_5 + 1))) {
      if (param_5[2] == 0) {
        local_7c = 0xffffffff;
      }
      else {
        local_7c = *(undefined4 *)(param_5[2] + 0x34);
      }
      local_78 = 0.0;
      local_74 = *param_4;
      fVar15 = 0.0;
      uVar4 = (**(code **)(*param_5 + 0x28))(param_5,&local_7c);
      fVar13 = auVar14._0_4_;
      auVar8 = *(undefined1 (*) [16])(param_1 + 0x20);
    }
    auVar12 = in_ZMM6._0_16_;
    auVar7._0_4_ = auVar8._0_4_ * param_2[4];
    auVar7._4_4_ = auVar8._4_4_ * param_2[5];
    auVar7._8_4_ = auVar8._8_4_ * param_2[6];
    auVar7._12_4_ = auVar8._12_4_ * param_2[7];
    auVar8 = vinsertps_avx(auVar7,auVar7,0x4c);
    auVar9._0_4_ = auVar7._0_4_ + auVar8._0_4_;
    auVar9._4_4_ = auVar7._4_4_ + auVar8._4_4_;
    auVar9._8_4_ = auVar7._8_4_ + auVar8._8_4_;
    auVar9._12_4_ = auVar7._12_4_ + auVar8._12_4_;
    auVar8 = vshufpd_avx(auVar9,auVar9,1);
    fVar6 = auVar9._0_4_ + auVar8._0_4_;
    if (((fVar6 != fVar15) || (NAN(fVar6) || NAN(fVar15))) &&
       ((fVar6 < 0.0 || (*(char *)(param_3 + 1) == '\x01')))) {
      fVar6 = -fVar13 / fVar6;
      if ((0.0 <= fVar6) && (fVar6 < *(float *)(param_5 + 1))) {
        if (param_5[2] == 0) {
          local_7c = 0xffffffff;
        }
        else {
          local_7c = *(undefined4 *)(param_5[2] + 0x34);
        }
        local_74 = *param_4;
        local_78 = fVar6;
        uVar4 = (**(code **)(*param_5 + 0x28))(param_5,&local_7c);
        auVar12 = in_ZMM6._0_16_;
      }
    }
  }
  if (pauVar5 != (undefined1 (*) [16])0x0) {
    uVar3 = rdtsc();
    auVar8 = vpinsrq_avx(auVar12,uVar3 & 0xffffffff00000000 |
                                 CONCAT44((int)((ulonglong)uVar4 >> 0x20),(int)uVar3),1);
    auVar12 = vmovntdq_avx(SUB6416(ZEXT864(0x14132c04b),0));
    *pauVar5 = auVar12;
    auVar12 = vmovntdq_avx(auVar8);
    pauVar5[1] = auVar12;
  }
  if (DAT_1414ef3c0 == (local_70 ^ (ulonglong)auStack_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_70 ^ (ulonglong)auStack_a8);
}


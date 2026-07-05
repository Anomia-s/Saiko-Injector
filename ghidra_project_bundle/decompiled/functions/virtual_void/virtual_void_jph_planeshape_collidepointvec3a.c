/**
 * Function: virtual_void_jph_planeshape_collidepointvec3a
 * Address:  1402f0c10
 * Signature: undefined virtual_void_jph_planeshape_collidepointvec3a(void)
 * Body size: 408 bytes
 */


void virtual_void_jph_planeshape_collidepointvec3a
               (longlong param_1,float *param_2,undefined4 *param_3,longlong *param_4,
               longlong *param_5)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  undefined1 local_38 [16];
  
  local_38 = in_ZMM6._0_16_;
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
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
      pauVar6 = (undefined1 (*) [16])(lVar2 + (ulonglong)uVar1 * 0x20 + 0x20);
      uVar3 = rdtsc();
      in_ZMM6 = ZEXT864(uVar3 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar2 >> 0x20),(int)uVar3));
      goto LAB_1402f0ce3;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar6 = (undefined1 (*) [16])0x0;
LAB_1402f0ce3:
  uVar5 = (**(code **)(*param_5 + 0x10))(param_5,param_1,param_3);
  auVar9 = in_ZMM6._0_16_;
  if ((char)uVar5 != '\0') {
    auVar7._0_4_ = *param_2 * *(float *)(param_1 + 0x20);
    auVar7._4_4_ = param_2[1] * *(float *)(param_1 + 0x24);
    auVar7._8_4_ = param_2[2] * *(float *)(param_1 + 0x28);
    auVar7._12_4_ = param_2[3] * *(float *)(param_1 + 0x2c);
    auVar4 = vinsertps_avx(auVar7,auVar7,0x4c);
    auVar8._0_4_ = auVar7._0_4_ + auVar4._0_4_;
    auVar8._4_4_ = auVar7._4_4_ + auVar4._4_4_;
    auVar8._8_4_ = auVar7._8_4_ + auVar4._8_4_;
    auVar8._12_4_ = auVar7._12_4_ + auVar4._12_4_;
    auVar4 = vshufpd_avx(auVar8,auVar8,1);
    if (auVar8._0_4_ + auVar4._0_4_ + *(float *)(param_1 + 0x2c) < 0.0) {
      if (param_4[2] == 0) {
        local_48 = 0xffffffff;
      }
      else {
        local_48 = *(undefined4 *)(param_4[2] + 0x34);
      }
      local_44 = *param_3;
      uVar5 = (**(code **)(*param_4 + 0x28))(param_4,&local_48);
      auVar9 = in_ZMM6._0_16_;
    }
  }
  if (pauVar6 != (undefined1 (*) [16])0x0) {
    uVar3 = rdtsc();
    auVar4 = vpinsrq_avx(auVar9,uVar3 & 0xffffffff00000000 |
                                CONCAT44((int)((ulonglong)uVar5 >> 0x20),(int)uVar3),1);
    auVar9 = vmovntdq_avx(SUB6416(ZEXT864(0x14132c2cc),0));
    *pauVar6 = auVar9;
    auVar9 = vmovntdq_avx(auVar4);
    pauVar6[1] = auVar9;
  }
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_68);
}


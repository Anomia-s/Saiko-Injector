/**
 * Function: bool_jph_narrowphasequery_castrayconst_rrayca
 * Address:  1400c74b0
 * Signature: undefined bool_jph_narrowphasequery_castrayconst_rrayca(void)
 * Body size: 463 bytes
 */


bool bool_jph_narrowphasequery_castrayconst_rrayca
               (undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 auVar8 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar9 [64];
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined **local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_50;
  undefined1 local_48 [16];
  
  local_48 = in_ZMM6._0_16_;
  local_50 = DAT_1414ef3c0 ^ (ulonglong)auStack_108;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  auVar8 = in_ZMM6._0_16_;
  lVar3 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar3 != 0) {
    uVar2 = *(uint *)(lVar3 + 0x200020);
    if ((ulonglong)uVar2 < 0x10000) {
      *(uint *)(lVar3 + 0x200020) = uVar2 + 1;
      pauVar7 = (undefined1 (*) [16])(lVar3 + (ulonglong)uVar2 * 0x20 + 0x20);
      uVar4 = rdtsc();
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar4 & 0xffffffff00000000 |
                     CONCAT44((int)((ulonglong)lVar3 >> 0x20),(int)uVar4);
      goto LAB_1400c7594;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
      auVar8 = in_ZMM6._0_16_;
    }
  }
  pauVar7 = (undefined1 (*) [16])0x0;
LAB_1400c7594:
  local_70 = *param_1;
  local_a8 = 0;
  local_b8 = &PTR_FUN_140de3ea0;
  local_98 = *param_2;
  uStack_90 = param_2[1];
  uStack_88 = param_2[2];
  uStack_80 = param_2[3];
  local_68 = param_6;
  local_b0 = *(undefined4 *)(param_3 + 4);
  local_d8 = *param_2;
  uStack_d0 = param_2[1];
  uStack_c8 = param_2[2];
  uStack_c0 = param_2[3];
  local_e8 = param_5;
  auVar9 = ZEXT1664(auVar8);
  local_78 = param_3;
  uVar6 = (**(code **)(*(longlong *)param_1[1] + 8))
                    ((longlong *)param_1[1],&local_d8,&local_b8,param_4);
  fVar1 = *(float *)(param_3 + 4);
  if (pauVar7 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar5 = vpinsrq_avx(auVar9._0_16_,
                         uVar4 & 0xffffffff00000000 |
                         CONCAT44((int)((ulonglong)uVar6 >> 0x20),(int)uVar4),1);
    auVar8 = vmovntdq_avx(SUB6416(ZEXT864(0x14132bb59),0));
    *pauVar7 = auVar8;
    auVar8 = vmovntdq_avx(auVar5);
    pauVar7[1] = auVar8;
  }
  if (DAT_1414ef3c0 == (local_50 ^ (ulonglong)auStack_108)) {
    return fVar1 <= 1.0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_50 ^ (ulonglong)auStack_108);
}


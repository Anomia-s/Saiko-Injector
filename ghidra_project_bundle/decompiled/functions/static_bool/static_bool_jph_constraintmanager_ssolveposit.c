/**
 * Function: static_bool_jph_constraintmanager_ssolveposit
 * Address:  140376320
 * Signature: undefined static_bool_jph_constraintmanager_ssolveposit(void)
 * Body size: 334 bytes
 */


byte static_bool_jph_constraintmanager_ssolveposit
               (longlong param_1,uint *param_2,uint *param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  undefined1 (*pauVar7) [16];
  undefined1 auVar8 [64];
  undefined1 auVar9 [16];
  undefined1 in_ZMM8 [64];
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar4 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (uVar4 != 0) {
    uVar1 = *(uint *)(uVar4 + 0x200020);
    if ((ulonglong)uVar1 < 0x10000) {
      *(uint *)(uVar4 + 0x200020) = uVar1 + 1;
      pauVar7 = (undefined1 (*) [16])(uVar4 + (ulonglong)uVar1 * 0x20 + 0x20);
      uVar5 = rdtsc();
      uVar4 = CONCAT44((int)(uVar4 >> 0x20),(int)uVar5);
      uVar5 = uVar5 & 0xffffffff00000000 | uVar4;
      in_ZMM8 = ZEXT864(uVar5);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar5;
      goto joined_r0x0001403763e7;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      uVar4 = (*(code *)PTR_vfunction4_1414f67c8)
                        ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  auVar9 = in_ZMM8._0_16_;
  pauVar7 = (undefined1 (*) [16])0x0;
joined_r0x0001403763e7:
  if (param_2 < param_3) {
    auVar8 = ZEXT464(param_5);
    bVar6 = 0;
    do {
      plVar2 = *(longlong **)(param_1 + (ulonglong)*param_2 * 8);
      uVar4 = (**(code **)(*plVar2 + 0x48))(plVar2,param_4,auVar8._0_8_);
      auVar9 = in_ZMM8._0_16_;
      bVar6 = bVar6 | (byte)uVar4;
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  else {
    bVar6 = 0;
  }
  if (pauVar7 != (undefined1 (*) [16])0x0) {
    uVar5 = rdtsc();
    auVar3 = vpinsrq_avx(auVar9,uVar5 & 0xffffffff00000000 |
                                CONCAT44((int)(uVar4 >> 0x20),(int)uVar5),1);
    auVar9 = vmovntdq_avx(SUB6416(ZEXT864(0x141395afe),0));
    *pauVar7 = auVar9;
    auVar9 = vmovntdq_avx(auVar3);
    pauVar7[1] = auVar9;
  }
  return bVar6 & 1;
}


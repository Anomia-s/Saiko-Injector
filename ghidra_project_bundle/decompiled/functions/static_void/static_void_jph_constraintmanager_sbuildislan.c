/**
 * Function: static_void_jph_constraintmanager_sbuildislan
 * Address:  140375930
 * Signature: undefined static_void_jph_constraintmanager_sbuildislan(void)
 * Body size: 299 bytes
 */


void static_void_jph_constraintmanager_sbuildislan
               (longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  undefined1 in_ZMM6 [64];
  undefined4 uVar5;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar7 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (uVar7 != 0) {
    uVar1 = *(uint *)(uVar7 + 0x200020);
    if ((ulonglong)uVar1 < 0x10000) {
      *(uint *)(uVar7 + 0x200020) = uVar1 + 1;
      pauVar8 = (undefined1 (*) [16])(uVar7 + (ulonglong)uVar1 * 0x20 + 0x20);
      uVar6 = rdtsc();
      uVar7 = CONCAT44((int)(uVar7 >> 0x20),(int)uVar6);
      uVar6 = uVar6 & 0xffffffff00000000 | uVar7;
      in_ZMM6 = ZEXT864(uVar6);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar6;
      goto joined_r0x0001403759e9;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      uVar7 = (*(code *)PTR_vfunction4_1414f67c8)
                        ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  auVar9 = in_ZMM6._0_16_;
  pauVar8 = (undefined1 (*) [16])0x0;
joined_r0x0001403759e9:
  uVar5 = (undefined4)(uVar7 >> 0x20);
  if (param_2 != 0) {
    uVar7 = 0;
    do {
      plVar2 = *(longlong **)(param_1 + uVar7 * 8);
      uVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,uVar7 & 0xffffffff,param_3,param_4);
      uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
      auVar9 = in_ZMM6._0_16_;
      uVar7 = uVar7 + 1;
    } while (param_2 != uVar7);
  }
  if (pauVar8 != (undefined1 (*) [16])0x0) {
    uVar7 = rdtsc();
    auVar3 = vpinsrq_avx(auVar9,uVar7 & 0xffffffff00000000 | CONCAT44(uVar5,(int)uVar7),1);
    auVar9 = vmovntdq_avx(SUB6416(ZEXT864(0x14139bb67),0));
    *pauVar8 = auVar9;
    auVar9 = vmovntdq_avx(auVar3);
    pauVar8[1] = auVar9;
  }
  return;
}


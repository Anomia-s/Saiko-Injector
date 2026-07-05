/**
 * Function: static_void_jph_constraintmanager_ssetupveloc
 * Address:  1403760c0
 * Signature: undefined static_void_jph_constraintmanager_ssetupveloc(void)
 * Body size: 275 bytes
 */


void static_void_jph_constraintmanager_ssetupveloc
               (undefined8 *param_1,uint param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  undefined1 in_ZMM7 [64];
  undefined4 uVar6;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar4 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (uVar4 != 0) {
    uVar2 = *(uint *)(uVar4 + 0x200020);
    if ((ulonglong)uVar2 < 0x10000) {
      *(uint *)(uVar4 + 0x200020) = uVar2 + 1;
      pauVar8 = (undefined1 (*) [16])(uVar4 + (ulonglong)uVar2 * 0x20 + 0x20);
      uVar7 = rdtsc();
      uVar4 = CONCAT44((int)(uVar4 >> 0x20),(int)uVar7);
      uVar7 = uVar7 & 0xffffffff00000000 | uVar4;
      in_ZMM7 = ZEXT864(uVar7);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar7;
      goto joined_r0x000140376175;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      uVar4 = (*(code *)PTR_vfunction4_1414f67c8)
                        ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  auVar9 = in_ZMM7._0_16_;
  pauVar8 = (undefined1 (*) [16])0x0;
joined_r0x000140376175:
  uVar6 = (undefined4)(uVar4 >> 0x20);
  if (param_2 != 0) {
    puVar1 = param_1 + param_2;
    do {
      uVar5 = (**(code **)(*(longlong *)*param_1 + 0x30))((longlong *)*param_1,param_3);
      uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
      auVar9 = in_ZMM7._0_16_;
      param_1 = param_1 + 1;
    } while (param_1 < puVar1);
  }
  if (pauVar8 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar3 = vpinsrq_avx(auVar9,uVar4 & 0xffffffff00000000 | CONCAT44(uVar6,(int)uVar4),1);
    auVar9 = vmovntdq_avx(SUB6416(ZEXT864(0x141395c40),0));
    *pauVar8 = auVar9;
    auVar9 = vmovntdq_avx(auVar3);
    pauVar8[1] = auVar9;
  }
  return;
}


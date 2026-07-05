/**
 * Function: static_void_jph_constraintmanager_swarmstartv
 * Address:  1403765e0
 * Signature: undefined static_void_jph_constraintmanager_swarmstartv(void)
 * Body size: 274 bytes
 */


void static_void_jph_constraintmanager_swarmstartv
               (longlong param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 in_ZMM7 [64];
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar6 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (uVar6 != 0) {
    uVar2 = *(uint *)(uVar6 + 0x200020);
    if ((ulonglong)uVar2 < 0x10000) {
      *(uint *)(uVar6 + 0x200020) = uVar2 + 1;
      pauVar7 = (undefined1 (*) [16])(uVar6 + (ulonglong)uVar2 * 0x20 + 0x20);
      uVar4 = rdtsc();
      uVar6 = CONCAT44((int)(uVar6 >> 0x20),(int)uVar4);
      in_ZMM7 = ZEXT864(uVar4 & 0xffffffff00000000 | uVar6);
      goto LAB_1403766b4;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      uVar6 = (*(code *)PTR_vfunction4_1414f67c8)
                        ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar7 = (undefined1 (*) [16])0x0;
LAB_1403766b4:
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    plVar3 = *(longlong **)(param_1 + (ulonglong)*param_2 * 8);
    uVar6 = (**(code **)(*plVar3 + 0x38))(plVar3,param_4);
  }
  if (pauVar7 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar5 = vpinsrq_avx(in_ZMM7._0_16_,
                         uVar4 & 0xffffffff00000000 | CONCAT44((int)(uVar6 >> 0x20),(int)uVar4),1);
    auVar1 = vmovntdq_avx(SUB6416(ZEXT864(0x1413600b4),0));
    *pauVar7 = auVar1;
    auVar1 = vmovntdq_avx(auVar5);
    pauVar7[1] = auVar1;
  }
  return;
}


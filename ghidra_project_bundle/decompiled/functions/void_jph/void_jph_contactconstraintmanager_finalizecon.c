/**
 * Function: void_jph_contactconstraintmanager_finalizecon
 * Address:  1400dd070
 * Signature: undefined void_jph_contactconstraintmanager_finalizecon(void)
 * Body size: 370 bytes
 */


void void_jph_contactconstraintmanager_finalizecon(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 (*pauVar7) [16];
  undefined1 in_ZMM6 [64];
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar6 != 0) {
    uVar4 = *(uint *)(lVar6 + 0x200020);
    if ((ulonglong)uVar4 < 0x10000) {
      *(uint *)(lVar6 + 0x200020) = uVar4 + 1;
      pauVar7 = (undefined1 (*) [16])(lVar6 + (ulonglong)uVar4 * 0x20 + 0x20);
      uVar5 = rdtsc();
      in_ZMM6 = ZEXT864(uVar5 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar6 >> 0x20),(int)uVar5));
      goto LAB_1400dd11d;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar7 = (undefined1 (*) [16])0x0;
LAB_1400dd11d:
  uVar5 = (longlong)*(int *)(param_1 + 0x80) ^ 1;
  *(int *)(param_1 + 0x80) = (int)uVar5;
  lVar6 = uVar5 * 0x40 + param_1;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    void_jph_contactconstraintmanager_manifoldcac(lVar6);
  }
  void_jph_contactconstraintmanager_manifoldcac(lVar6);
  uVar4 = 1 << (-(char)LZCOUNT(param_3 + -1) & 0x1fU);
  if (uVar4 < 0x401) {
    uVar4 = 0x400;
  }
  if (*(uint *)(lVar6 + 0x24) < uVar4) {
    uVar4 = *(uint *)(lVar6 + 0x24);
  }
  *(uint *)(lVar6 + 0x20) = uVar4;
  uVar4 = 1 << (-(char)LZCOUNT(param_2 + -1) & 0x1fU);
  if (uVar4 < 0x401) {
    uVar4 = 0x400;
  }
  if (*(uint *)(lVar6 + 0x3c) < uVar4) {
    uVar4 = *(uint *)(lVar6 + 0x3c);
  }
  *(uint *)(lVar6 + 0x38) = uVar4;
  if (pauVar7 != (undefined1 (*) [16])0x0) {
    uVar2 = rdtsc();
    auVar3 = vpinsrq_avx(in_ZMM6._0_16_,uVar2,1);
    auVar1 = vmovntdq_avx(SUB6416(ZEXT864(0x141394f87),0));
    *pauVar7 = auVar1;
    auVar1 = vmovntdq_avx(auVar3);
    pauVar7[1] = auVar1;
  }
  return;
}


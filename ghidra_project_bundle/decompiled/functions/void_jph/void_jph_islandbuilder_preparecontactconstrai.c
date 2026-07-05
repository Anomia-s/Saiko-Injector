/**
 * Function: void_jph_islandbuilder_preparecontactconstrai
 * Address:  1403742f0
 * Signature: undefined void_jph_islandbuilder_preparecontactconstrai(void)
 * Body size: 253 bytes
 */


void void_jph_islandbuilder_preparecontactconstrai(longlong param_1,int param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 in_ZMM6 [64];
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar3 != 0) {
    uVar2 = *(uint *)(lVar3 + 0x200020);
    if ((ulonglong)uVar2 < 0x10000) {
      *(uint *)(lVar3 + 0x200020) = uVar2 + 1;
      pauVar7 = (undefined1 (*) [16])(lVar3 + (ulonglong)uVar2 * 0x20 + 0x20);
      uVar4 = rdtsc();
      in_ZMM6 = ZEXT864(uVar4 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar3 >> 0x20),(int)uVar4));
      goto LAB_14037439b;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar7 = (undefined1 (*) [16])0x0;
LAB_14037439b:
  uVar6 = (**(code **)(*param_3 + 8))(param_3,param_2 * 4);
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  *(int *)(param_1 + 100) = param_2;
  if (pauVar7 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar5 = vpinsrq_avx(in_ZMM6._0_16_,
                         uVar4 & 0xffffffff00000000 |
                         CONCAT44((int)((ulonglong)uVar6 >> 0x20),(int)uVar4),1);
    auVar1 = vmovntdq_avx(SUB6416(ZEXT864(0x141398cc9),0));
    *pauVar7 = auVar1;
    auVar1 = vmovntdq_avx(auVar5);
    pauVar7[1] = auVar1;
  }
  return;
}


/**
 * Function: void_jph_islandbuilder_resetislandstempalloca
 * Address:  1403753d0
 * Signature: undefined void_jph_islandbuilder_resetislandstempalloca(void)
 * Body size: 543 bytes
 */


void void_jph_islandbuilder_resetislandstempalloca(longlong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined4 extraout_var;
  undefined1 (*pauVar6) [16];
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
      pauVar6 = (undefined1 (*) [16])(lVar3 + (ulonglong)uVar2 * 0x20 + 0x20);
      uVar4 = rdtsc();
      in_ZMM6 = ZEXT864(uVar4 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar3 >> 0x20),(int)uVar4));
      goto LAB_140375476;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar6 = (undefined1 (*) [16])0x0;
LAB_140375476:
  (**(code **)(*param_2 + 0x10))
            (param_2,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x6c));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)(*param_2 + 0x10))
              (param_2,*(longlong *)(param_1 + 0x48),*(int *)(param_1 + 0x6c) << 2);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (**(code **)(*param_2 + 0x10))
              (param_2,*(undefined8 *)(param_1 + 0x40),*(int *)(param_1 + 0x6c) * 4 + 4);
    *(undefined8 *)(param_1 + 0x40) = 0;
    (**(code **)(*param_2 + 0x10))
              (param_2,*(undefined8 *)(param_1 + 0x38),*(int *)(param_1 + 0x68) << 2);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(*param_2 + 0x10))
              (param_2,*(undefined8 *)(param_1 + 0x30),*(int *)(param_1 + 0x6c) * 4 + 4);
    *(undefined8 *)(param_1 + 0x30) = 0;
    (**(code **)(*param_2 + 0x10))
              (param_2,*(undefined8 *)(param_1 + 0x28),*(int *)(param_1 + 0x60) << 2);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,*(undefined8 *)(param_1 + 0x20),*(int *)(param_1 + 0x5c) * 4 + 4);
  *(undefined8 *)(param_1 + 0x20) = 0;
  (**(code **)(*param_2 + 0x10))
            (param_2,*(undefined8 *)(param_1 + 0x18),*(int *)(param_1 + 0x5c) << 2);
  *(undefined8 *)(param_1 + 0x18) = 0;
  (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x60) << 2)
  ;
  *(undefined8 *)(param_1 + 8) = 0;
  (**(code **)(*param_2 + 0x10))
            (param_2,*(undefined8 *)(param_1 + 0x10),*(int *)(param_1 + 100) << 2);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 (*) [16])(param_1 + 0x5c) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (pauVar6 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar5 = vpinsrq_avx(in_ZMM6._0_16_,
                         uVar4 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar4),1);
    auVar1 = vmovntdq_avx(SUB6416(ZEXT864(0x141398c43),0));
    *pauVar6 = auVar1;
    auVar1 = vmovntdq_avx(auVar5);
    pauVar6[1] = auVar1;
  }
  return;
}


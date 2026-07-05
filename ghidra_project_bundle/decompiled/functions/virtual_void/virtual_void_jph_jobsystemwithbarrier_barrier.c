/**
 * Function: virtual_void_jph_jobsystemwithbarrier_barrier
 * Address:  1403725d0
 * Signature: undefined virtual_void_jph_jobsystemwithbarrier_barrier(void)
 * Body size: 255 bytes
 */


void virtual_void_jph_jobsystemwithbarrier_barrier(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
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
      lVar5 = (ulonglong)uVar1 * 0x20;
      uVar3 = rdtsc();
      FUN_140373030(param_1 + 0x40c0,1);
      uVar4 = rdtsc();
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar3;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar4 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar4);
      auVar7 = vpunpcklqdq_avx(auVar6,auVar7);
      auVar6 = vmovntdq_avx(SUB6416(ZEXT864(0x1413990a9),0));
      *(undefined1 (*) [16])(lVar2 + 0x20 + lVar5) = auVar6;
      auVar6 = vmovntdq_avx(auVar7);
      *(undefined1 (*) [16])(lVar2 + 0x30 + lVar5) = auVar6;
      return;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  FUN_140373030(param_1 + 0x40c0,1);
  return;
}


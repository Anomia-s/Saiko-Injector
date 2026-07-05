/**
 * Function: virtual_void_jph_jobsystemwithbarrier_destroy
 * Address:  140372dc0
 * Signature: undefined virtual_void_jph_jobsystemwithbarrier_destroy(void)
 * Body size: 227 bytes
 */


char * virtual_void_jph_jobsystemwithbarrier_destroy(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char *pcVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
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
      lVar7 = (ulonglong)uVar2 * 0x20;
      uVar4 = rdtsc();
      LOCK();
      if (*(char *)(param_2 + 8) == '\x01') {
        *(char *)(param_2 + 8) = '\0';
      }
      UNLOCK();
      uVar5 = rdtsc();
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar4;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar5;
      auVar9 = vpunpcklqdq_avx(auVar8,auVar9);
      auVar8 = vmovntdq_avx(SUB6416(ZEXT864(0x141398eb4),0));
      *(undefined1 (*) [16])(lVar3 + 0x20 + lVar7) = auVar8;
      auVar8 = vmovntdq_avx(auVar9);
      *(undefined1 (*) [16])(lVar3 + 0x30 + lVar7) = auVar8;
      return "virtual void JPH::JobSystemWithBarrier::DestroyBarrier(Barrier *)";
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)();
    }
  }
  pcVar6 = (char *)0x1;
  LOCK();
  bVar1 = *(byte *)(param_2 + 8);
  if (bVar1 == 1) {
    *(byte *)(param_2 + 8) = 0;
  }
  else {
    pcVar6 = (char *)(ulonglong)bVar1;
  }
  UNLOCK();
  return pcVar6;
}


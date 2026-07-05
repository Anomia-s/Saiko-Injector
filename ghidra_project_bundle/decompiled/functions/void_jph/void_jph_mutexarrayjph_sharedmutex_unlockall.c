/**
 * Function: void_jph_mutexarrayjph_sharedmutex_unlockall
 * Address:  1400e55a0
 * Signature: undefined void_jph_mutexarrayjph_sharedmutex_unlockall(void)
 * Body size: 280 bytes
 */


void void_jph_mutexarrayjph_sharedmutex_unlockall(longlong param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  undefined4 extraout_var;
  undefined4 uVar4;
  ulonglong uVar5;
  PSRWLOCK pRVar6;
  PSRWLOCK SRWLock;
  undefined1 (*pauVar7) [16];
  undefined1 auVar8 [16];
  undefined1 in_ZMM6 [64];
  
  _Mtx_unlock(param_1 + 0x28);
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar3 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (uVar3 != 0) {
    uVar1 = *(uint *)(uVar3 + 0x200020);
    if ((ulonglong)uVar1 < 0x10000) {
      *(uint *)(uVar3 + 0x200020) = uVar1 + 1;
      pauVar7 = (undefined1 (*) [16])(uVar3 + (ulonglong)uVar1 * 0x20 + 0x20);
      uVar5 = rdtsc();
      uVar3 = CONCAT44((int)(uVar3 >> 0x20),(int)uVar5);
      uVar5 = uVar5 & 0xffffffff00000000 | uVar3;
      in_ZMM6 = ZEXT864(uVar5);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar5;
      uVar1 = *(uint *)(param_1 + 0x80);
      goto joined_r0x0001400e5660;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      uVar3 = (*(code *)PTR_vfunction4_1414f67c8)
                        ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  auVar8 = in_ZMM6._0_16_;
  pauVar7 = (undefined1 (*) [16])0x0;
  uVar1 = *(uint *)(param_1 + 0x80);
joined_r0x0001400e5660:
  uVar4 = (undefined4)(uVar3 >> 0x20);
  if ((ulonglong)uVar1 != 0) {
    SRWLock = *(PSRWLOCK *)(param_1 + 0x78);
    pRVar6 = SRWLock + (ulonglong)uVar1 * 8;
    do {
      ReleaseSRWLockExclusive(SRWLock);
      auVar8 = in_ZMM6._0_16_;
      SRWLock = SRWLock + 8;
      uVar4 = extraout_var;
    } while (SRWLock < pRVar6);
  }
  if (pauVar7 != (undefined1 (*) [16])0x0) {
    uVar3 = rdtsc();
    auVar2 = vpinsrq_avx(auVar8,uVar3 & 0xffffffff00000000 | CONCAT44(uVar4,(int)uVar3),1);
    auVar8 = vmovntdq_avx(SUB6416(ZEXT864(0x14135fdc5),0));
    *pauVar7 = auVar8;
    auVar8 = vmovntdq_avx(auVar2);
    pauVar7[1] = auVar8;
  }
  return;
}


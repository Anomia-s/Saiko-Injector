/**
 * Function: void_jph_mutexarrayjph_sharedmutex_lockall_mu
 * Address:  1400e5380
 * Signature: undefined void_jph_mutexarrayjph_sharedmutex_lockall_mu(void)
 * Body size: 537 bytes
 */


void void_jph_mutexarrayjph_sharedmutex_lockall_mu(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong extraout_RAX;
  undefined4 uVar6;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar7;
  longlong lVar8;
  PSRWLOCK SRWLock;
  undefined1 (*pauVar9) [16];
  PSRWLOCK pRVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar14 [64];
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar5 = *(ulonglong *)(lVar3 + 0x170);
  if (uVar5 != 0) {
    uVar2 = *(uint *)(uVar5 + 0x200020);
    if ((ulonglong)uVar2 < 0x10000) {
      *(uint *)(uVar5 + 0x200020) = uVar2 + 1;
      pauVar9 = (undefined1 (*) [16])(uVar5 + (ulonglong)uVar2 * 0x20 + 0x20);
      uVar7 = rdtsc();
      uVar5 = CONCAT44((int)(uVar5 >> 0x20),(int)uVar7);
      uVar7 = uVar7 & 0xffffffff00000000 | uVar5;
      in_ZMM6 = ZEXT864(uVar7);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar7;
      uVar2 = *(uint *)(param_1 + 1);
      goto joined_r0x0001400e5446;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      uVar5 = (*(code *)PTR_vfunction4_1414f67c8)
                        ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  auVar13 = in_ZMM6._0_16_;
  pauVar9 = (undefined1 (*) [16])0x0;
  uVar2 = *(uint *)(param_1 + 1);
joined_r0x0001400e5446:
  uVar6 = (undefined4)(uVar5 >> 0x20);
  if ((ulonglong)uVar2 != 0) {
    plVar1 = (longlong *)(lVar3 + 0x170);
    SRWLock = (PSRWLOCK)*param_1;
    pRVar10 = SRWLock + (ulonglong)uVar2 * 8;
    auVar13 = vpinsrd_avx(SUB6416(ZEXT864(0x141344ee7),0),0xff00ffff,2);
    auVar14 = ZEXT1664(auVar13);
    do {
      uVar5 = FUN_140b689d0(SRWLock);
      if ((int)uVar5 == 0) {
        if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x169) == '\0') {
          __dyn_tls_on_demand_init();
          lVar3 = *plVar1;
        }
        else {
          lVar3 = *plVar1;
        }
        if (lVar3 != 0) {
          uVar2 = *(uint *)(lVar3 + 0x200020);
          if ((ulonglong)uVar2 < 0x10000) {
            *(uint *)(lVar3 + 0x200020) = uVar2 + 1;
            lVar8 = (ulonglong)uVar2 * 0x20;
            uVar7 = rdtsc();
            AcquireSRWLockExclusive(SRWLock);
            uVar4 = rdtsc();
            uVar5 = CONCAT44(extraout_var,(int)uVar4);
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar7;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar4 & 0xffffffff00000000 | uVar5;
            auVar11 = vpunpcklqdq_avx(auVar11,auVar12);
            auVar13 = vmovntdq_avx(auVar14._0_16_);
            *(undefined1 (*) [16])(lVar3 + 0x20 + lVar8) = auVar13;
            auVar13 = vmovntdq_avx(auVar11);
            *(undefined1 (*) [16])(lVar3 + 0x30 + lVar8) = auVar13;
            goto LAB_1400e5488;
          }
          if (DAT_14151fc10 == '\0') {
            DAT_14151fc10 = '\x01';
            (*(code *)PTR_vfunction4_1414f67c8)
                      ("ProfileMeasurement: Too many samples, some data will be lost!");
          }
        }
        AcquireSRWLockExclusive(SRWLock);
        uVar5 = extraout_RAX;
      }
LAB_1400e5488:
      uVar6 = (undefined4)(uVar5 >> 0x20);
      auVar13 = in_ZMM6._0_16_;
      SRWLock = SRWLock + 8;
    } while (SRWLock < pRVar10);
  }
  if (pauVar9 != (undefined1 (*) [16])0x0) {
    uVar5 = rdtsc();
    auVar11 = vpinsrq_avx(auVar13,uVar5 & 0xffffffff00000000 | CONCAT44(uVar6,(int)uVar5),1);
    auVar13 = vmovntdq_avx(SUB6416(ZEXT864(0x14135fe18),0));
    *pauVar9 = auVar13;
    auVar13 = vmovntdq_avx(auVar11);
    pauVar9[1] = auVar13;
  }
  return;
}


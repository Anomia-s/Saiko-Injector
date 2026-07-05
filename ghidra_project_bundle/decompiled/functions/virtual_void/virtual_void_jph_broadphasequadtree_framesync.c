/**
 * Function: virtual_void_jph_broadphasequadtree_framesync
 * Address:  140388ff0
 * Signature: undefined virtual_void_jph_broadphasequadtree_framesync(void)
 * Body size: 552 bytes
 */


void virtual_void_jph_broadphasequadtree_framesync(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  byte bVar7;
  PSRWLOCK SRWLock;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_ZMM6 [64];
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar8 = *(longlong *)(lVar3 + 0x170);
  if (lVar8 == 0) {
LAB_140389097:
    pauVar9 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar2 = *(uint *)(lVar8 + 0x200020);
    if (0xffff < (ulonglong)uVar2) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      goto LAB_140389097;
    }
    *(uint *)(lVar8 + 0x200020) = uVar2 + 1;
    pauVar9 = (undefined1 (*) [16])(lVar8 + (ulonglong)uVar2 * 0x20 + 0x20);
    uVar4 = rdtsc();
    in_ZMM6 = ZEXT864(uVar4 & 0xffffffff00000000 |
                      CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar4));
  }
  SRWLock = (PSRWLOCK)(param_1 + ((ulonglong)*(uint *)(param_1 + 0x130) ^ 1) * 8 + 0x120);
  iVar6 = FUN_140b689d0(SRWLock);
  if (iVar6 == 0) {
    plVar1 = (longlong *)(lVar3 + 0x170);
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x169) == '\0') {
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
        uVar4 = rdtsc();
        AcquireSRWLockExclusive(SRWLock);
        uVar5 = rdtsc();
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar4;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar5 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar5);
        auVar11 = vpunpcklqdq_avx(auVar10,auVar11);
        auVar10 = vpinsrd_avx(SUB6416(ZEXT864(0x141344ee7),0),0xff00ffff,2);
        auVar10 = vmovntdq_avx(auVar10);
        *(undefined1 (*) [16])(lVar3 + 0x20 + lVar8) = auVar10;
        auVar10 = vmovntdq_avx(auVar11);
        *(undefined1 (*) [16])(lVar3 + 0x30 + lVar8) = auVar10;
        goto LAB_140389197;
      }
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
    }
    AcquireSRWLockExclusive(SRWLock);
  }
LAB_140389197:
  if (*(int *)(param_1 + 0x110) != 0) {
    bVar7 = 0;
    do {
      FUN_1405d1ce0((ulonglong)bVar7 * 0x80 + *(longlong *)(param_1 + 0x108));
      bVar7 = bVar7 + 1;
    } while ((uint)bVar7 < *(uint *)(param_1 + 0x110));
  }
  ReleaseSRWLockExclusive(SRWLock);
  if (pauVar9 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar11 = vpinsrq_avx(in_ZMM6._0_16_,
                          uVar4 & 0xffffffff00000000 | CONCAT44(extraout_var_00,(int)uVar4),1);
    auVar10 = vmovntdq_avx(SUB6416(ZEXT864(0x141399f79),0));
    *pauVar9 = auVar10;
    auVar10 = vmovntdq_avx(auVar11);
    pauVar9[1] = auVar10;
  }
  return;
}


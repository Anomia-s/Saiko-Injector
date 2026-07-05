/**
 * Function: virtual_void_jph_broadphasequadtree_removebod
 * Address:  14038a330
 * Signature: undefined virtual_void_jph_broadphasequadtree_removebod(void)
 * Body size: 764 bytes
 */


void virtual_void_jph_broadphasequadtree_removebod(longlong param_1,uint *param_2,uint param_3)

{
  byte *pbVar1;
  PSRWLOCK SRWLock;
  longlong *plVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined4 extraout_var;
  ulonglong uVar8;
  undefined4 extraout_var_00;
  undefined4 uVar9;
  undefined1 (*pauVar10) [16];
  ulonglong uVar11;
  uint *puVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 in_ZMM6 [64];
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar8 = *(ulonglong *)(lVar6 + 0x170);
  if (uVar8 == 0) {
LAB_14038a3e6:
    auVar16 = in_ZMM6._0_16_;
    pauVar10 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar5 = *(uint *)(uVar8 + 0x200020);
    if (0xffff < (ulonglong)uVar5) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        uVar8 = (*(code *)PTR_vfunction4_1414f67c8)();
      }
      goto LAB_14038a3e6;
    }
    *(uint *)(uVar8 + 0x200020) = uVar5 + 1;
    pauVar10 = (undefined1 (*) [16])((ulonglong)uVar5 * 0x20 + uVar8 + 0x20);
    uVar11 = rdtsc();
    uVar8 = CONCAT44((int)(uVar8 >> 0x20),(int)uVar11);
    uVar11 = uVar11 & 0xffffffff00000000 | uVar8;
    in_ZMM6 = ZEXT864(uVar11);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar11;
  }
  uVar9 = (undefined4)(uVar8 >> 0x20);
  if ((int)param_3 < 1) goto LAB_14038a602;
  SRWLock = (PSRWLOCK)(param_1 + 0x118);
  iVar7 = FUN_140b689e4(SRWLock);
  if (iVar7 == 0) {
    plVar2 = (longlong *)(lVar6 + 0x170);
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x169) == '\0') {
      __dyn_tls_on_demand_init();
      lVar6 = *plVar2;
    }
    else {
      lVar6 = *plVar2;
    }
    if (lVar6 != 0) {
      uVar5 = *(uint *)(lVar6 + 0x200020);
      if ((ulonglong)uVar5 < 0x10000) {
        *(uint *)(lVar6 + 0x200020) = uVar5 + 1;
        lVar13 = (ulonglong)uVar5 * 0x20;
        uVar8 = rdtsc();
        AcquireSRWLockShared(SRWLock);
        uVar11 = rdtsc();
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar8;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar11 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar11);
        auVar14 = vpunpcklqdq_avx(auVar14,auVar15);
        auVar16 = vpinsrd_avx(SUB6416(ZEXT864(0x141344eed),0),0xff00ffff,2);
        auVar16 = vmovntdq_avx(auVar16);
        *(undefined1 (*) [16])(lVar6 + 0x20 + lVar13) = auVar16;
        auVar16 = vmovntdq_avx(auVar14);
        *(undefined1 (*) [16])(lVar6 + 0x30 + lVar13) = auVar16;
        goto LAB_14038a4e2;
      }
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
    }
    AcquireSRWLockShared(SRWLock);
  }
LAB_14038a4e2:
  lVar6 = *(longlong *)(param_1 + 8);
  lVar13 = *(longlong *)(param_1 + 0x28);
  puVar3 = param_2 + param_3;
  FUN_14038a650(param_2,puVar3,lVar13);
  do {
    bVar4 = *(byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(*param_2 & 0x7fffff) * 8);
    uVar8 = (longlong)puVar3 - (longlong)param_2 >> 2;
    puVar12 = param_2;
    while (uVar11 = uVar8, 0 < (longlong)uVar11) {
      uVar8 = uVar11 >> 1;
      if (*(byte *)(lVar13 + (ulonglong)(puVar12[uVar8] & 0x7fffff) * 8) <= bVar4) {
        puVar12 = puVar12 + uVar8 + 1;
        uVar8 = ~uVar8 + uVar11;
      }
    }
    FUN_1405d3bb0((ulonglong)bVar4 * 0x80 + *(longlong *)(param_1 + 0x108),lVar6,param_1 + 0x18,
                  param_2,(int)((ulonglong)((longlong)puVar12 - (longlong)param_2) >> 2));
    for (; param_2 < puVar12; param_2 = param_2 + 1) {
      uVar8 = (ulonglong)((*param_2 & 0x7fffff) << 3);
      LOCK();
      *(undefined1 *)(lVar13 + uVar8) = 0xff;
      UNLOCK();
      LOCK();
      *(undefined2 *)(lVar13 + 2 + uVar8) = 0xffff;
      UNLOCK();
      LOCK();
      pbVar1 = (byte *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + uVar8) + 0x79);
      *pbVar1 = *pbVar1 & 0xfb;
      UNLOCK();
    }
    param_2 = puVar12;
  } while (puVar12 < puVar3);
  ReleaseSRWLockShared(SRWLock);
  auVar16 = in_ZMM6._0_16_;
  uVar9 = extraout_var_00;
LAB_14038a602:
  if (pauVar10 != (undefined1 (*) [16])0x0) {
    uVar8 = rdtsc();
    auVar14 = vpinsrq_avx(auVar16,uVar8 & 0xffffffff00000000 | CONCAT44(uVar9,(int)uVar8),1);
    auVar16 = vmovntdq_avx(SUB6416(ZEXT864(0x14139586f),0));
    *pauVar10 = auVar16;
    auVar16 = vmovntdq_avx(auVar14);
    pauVar10[1] = auVar16;
  }
  return;
}


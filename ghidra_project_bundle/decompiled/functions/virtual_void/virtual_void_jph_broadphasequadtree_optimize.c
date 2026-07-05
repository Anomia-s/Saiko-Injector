/**
 * Function: virtual_void_jph_broadphasequadtree_optimize
 * Address:  140389220
 * Signature: undefined virtual_void_jph_broadphasequadtree_optimize(void)
 * Body size: 673 bytes
 */


void virtual_void_jph_broadphasequadtree_optimize(longlong param_1)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_64 [4];
  ulonglong local_60;
  undefined1 local_58 [16];
  
  local_58 = in_ZMM6._0_16_;
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar8 = *(longlong *)(lVar7 + 0x170);
  if (lVar8 == 0) {
LAB_1403892d9:
    pauVar6 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar2 = *(uint *)(lVar8 + 0x200020);
    if (0xffff < (ulonglong)uVar2) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      goto LAB_1403892d9;
    }
    *(uint *)(lVar8 + 0x200020) = uVar2 + 1;
    pauVar6 = (undefined1 (*) [16])(lVar8 + (ulonglong)uVar2 * 0x20 + 0x20);
    uVar5 = rdtsc();
    in_ZMM6 = ZEXT864(uVar5 & 0xffffffff00000000 |
                      CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar5));
  }
  virtual_void_jph_broadphasequadtree_framesync(param_1);
  SRWLock = (PSRWLOCK)(param_1 + 0x118);
  iVar4 = FUN_140b689d0(SRWLock);
  if (iVar4 == 0) {
    plVar1 = (longlong *)(lVar7 + 0x170);
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x169) == '\0') {
      __dyn_tls_on_demand_init();
      lVar7 = *plVar1;
    }
    else {
      lVar7 = *plVar1;
    }
    if (lVar7 != 0) {
      uVar2 = *(uint *)(lVar7 + 0x200020);
      if ((ulonglong)uVar2 < 0x10000) {
        *(uint *)(lVar7 + 0x200020) = uVar2 + 1;
        lVar8 = (ulonglong)uVar2 * 0x20;
        uVar5 = rdtsc();
        AcquireSRWLockExclusive(SRWLock);
        uVar3 = rdtsc();
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar5;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar3 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar3);
        auVar10 = vpunpcklqdq_avx(auVar9,auVar10);
        auVar9 = vpinsrd_avx(SUB6416(ZEXT864(0x141344ee7),0),0xff00ffff,2);
        auVar9 = vmovntdq_avx(auVar9);
        *(undefined1 (*) [16])(lVar7 + 0x20 + lVar8) = auVar9;
        auVar9 = vmovntdq_avx(auVar10);
        *(undefined1 (*) [16])(lVar7 + 0x30 + lVar8) = auVar9;
        goto LAB_1403893d2;
      }
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
    }
    AcquireSRWLockExclusive(SRWLock);
  }
LAB_1403893d2:
  if (*(int *)(param_1 + 0x110) != 0) {
    lVar7 = 0;
    uVar5 = 0;
    do {
      lVar8 = *(longlong *)(param_1 + 0x108);
      if ((*(int *)(lVar8 + 0x40 + lVar7) != 0) || ((*(byte *)(lVar8 + 0x50 + lVar7) & 1) != 0)) {
        local_78 = 1;
        quadtree_out_of_nodes(lVar8 + lVar7,*(undefined8 *)(param_1 + 8),param_1 + 0x18,local_64);
        FUN_1405d2fe0(lVar8 + lVar7,*(undefined8 *)(param_1 + 8),param_1 + 0x18,local_64);
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 0x80;
    } while (uVar5 < *(uint *)(param_1 + 0x110));
  }
  ReleaseSRWLockExclusive(SRWLock);
  virtual_void_jph_broadphasequadtree_framesync(param_1);
  *(undefined4 *)(param_1 + 0x134) = 0;
  if (pauVar6 != (undefined1 (*) [16])0x0) {
    uVar5 = rdtsc();
    auVar10 = vpinsrq_avx(in_ZMM6._0_16_,
                          uVar5 & 0xffffffff00000000 | CONCAT44(extraout_var_00,(int)uVar5),1);
    auVar9 = vmovntdq_avx(SUB6416(ZEXT864(0x141399c3a),0));
    *pauVar6 = auVar9;
    auVar9 = vmovntdq_avx(auVar10);
    pauVar6[1] = auVar9;
  }
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_98);
}


/**
 * Function: virtual_jobsystem_barrier_jph_jobsystemwithba
 * Address:  140372c90
 * Signature: undefined virtual_jobsystem_barrier_jph_jobsystemwithba(void)
 * Body size: 291 bytes
 */


longlong virtual_jobsystem_barrier_jph_jobsystemwithba(longlong param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  ulonglong uVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined8 extraout_XMM0_Qa;
  undefined1 in_ZMM0 [64];
  undefined1 auVar12 [64];
  undefined1 extraout_var_00 [56];
  undefined1 auVar13 [64];
  undefined1 extraout_var [56];
  
  auVar11 = in_ZMM0._0_16_;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    auVar12._0_8_ = __dyn_tls_on_demand_init();
    auVar12._8_56_ = extraout_var;
    auVar11 = auVar12._0_16_;
  }
  uVar5 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (uVar5 != 0) {
    uVar2 = *(uint *)(uVar5 + 0x200020);
    if ((ulonglong)uVar2 < 0x10000) {
      *(uint *)(uVar5 + 0x200020) = uVar2 + 1;
      pauVar8 = (undefined1 (*) [16])(uVar5 + (ulonglong)uVar2 * 0x20 + 0x20);
      uVar9 = rdtsc();
      uVar5 = CONCAT44((int)(uVar5 >> 0x20),(int)uVar9);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar9 & 0xffffffff00000000 | uVar5;
      iVar3 = *(int *)(param_1 + 8);
      goto joined_r0x000140372d40;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      uVar5 = (*(code *)PTR_vfunction4_1414f67c8)
                        ("ProfileMeasurement: Too many samples, some data will be lost!");
      auVar13._8_56_ = extraout_var_00;
      auVar13._0_8_ = extraout_XMM0_Qa;
      auVar11 = auVar13._0_16_;
    }
  }
  pauVar8 = (undefined1 (*) [16])0x0;
  iVar3 = *(int *)(param_1 + 8);
joined_r0x000140372d40:
  if (iVar3 != 0) {
    lVar7 = 0;
    uVar9 = 0;
    do {
      pcVar1 = (char *)(*(longlong *)(param_1 + 0x10) + 8 + lVar7);
      LOCK();
      bVar10 = *pcVar1 == '\0';
      if (bVar10) {
        *pcVar1 = '\x01';
      }
      uVar6 = 0;
      UNLOCK();
      if (bVar10) {
        lVar7 = lVar7 + *(longlong *)(param_1 + 0x10);
        goto joined_r0x000140372daf;
      }
      uVar9 = uVar9 + 1;
      uVar5 = (ulonglong)*(uint *)(param_1 + 8);
      lVar7 = lVar7 + 0x4100;
    } while (uVar9 < uVar5);
  }
  uVar6 = (undefined4)(uVar5 >> 0x20);
  lVar7 = 0;
joined_r0x000140372daf:
  if (pauVar8 != (undefined1 (*) [16])0x0) {
    uVar5 = rdtsc();
    auVar4 = vpinsrq_avx(auVar11,uVar5 & 0xffffffff00000000 | CONCAT44(uVar6,(int)uVar5),1);
    auVar11 = vmovntdq_avx(SUB6416(ZEXT864(0x141399a1a),0));
    *pauVar8 = auVar11;
    auVar11 = vmovntdq_avx(auVar4);
    pauVar8[1] = auVar11;
  }
  return lVar7;
}


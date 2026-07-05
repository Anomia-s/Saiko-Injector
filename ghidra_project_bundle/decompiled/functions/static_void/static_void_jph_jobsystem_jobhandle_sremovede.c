/**
 * Function: static_void_jph_jobsystem_jobhandle_sremovede
 * Address:  1400b1440
 * Signature: undefined static_void_jph_jobsystem_jobhandle_sremovede(void)
 * Body size: 415 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void static_void_jph_jobsystem_jobhandle_sremovede(longlong *param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 extraout_var;
  ulonglong uVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  undefined1 (*pauVar14) [16];
  undefined1 auVar15 [16];
  undefined1 in_ZMM6 [64];
  undefined8 auStack_70 [4];
  undefined8 uStack_50;
  longlong alStack_48 [2];
  undefined1 local_38 [16];
  
  local_38 = in_ZMM6._0_16_;
  alStack_48[1] = DAT_1414ef3c0 ^ (ulonglong)&stack0xffffffffffffffd8;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    auStack_70[0] = 0x1400b148f;
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar4 != 0) {
    uVar3 = *(uint *)(lVar4 + 0x200020);
    if ((ulonglong)uVar3 < 0x10000) {
      *(uint *)(lVar4 + 0x200020) = uVar3 + 1;
      pauVar14 = (undefined1 (*) [16])(lVar4 + (ulonglong)uVar3 * 0x20 + 0x20);
      uVar11 = rdtsc();
      in_ZMM6 = ZEXT864(uVar11 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar4 >> 0x20),(int)uVar11));
      goto LAB_1400b150e;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      auStack_70[0] = 0x1400b1507;
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar14 = (undefined1 (*) [16])0x0;
LAB_1400b150e:
  auVar15 = in_ZMM6._0_16_;
  plVar5 = *(longlong **)(*param_1 + 0x10);
  plVar9 = (longlong *)((ulonglong)param_2 * 8 + 0xf & 0xfffffffffffffff0);
  uStack_50 = 0x1400b1529;
  lVar4 = -(longlong)plVar9;
  puVar12 = (undefined1 *)((longlong)alStack_48 + lVar4);
  plVar13 = (longlong *)((longlong)alStack_48 + lVar4);
  if (param_2 != 0) {
    plVar9 = param_1 + param_2;
    plVar13 = (longlong *)((longlong)alStack_48 + lVar4);
    do {
      lVar6 = *param_1;
      LOCK();
      piVar1 = (int *)(lVar6 + 100);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 - param_3;
      UNLOCK();
      if (iVar2 == param_3) {
        *plVar13 = lVar6;
        plVar13 = plVar13 + 1;
      }
      param_1 = param_1 + 1;
    } while (param_1 < plVar9);
  }
  uVar10 = (undefined4)((ulonglong)plVar9 >> 0x20);
  if ((int)((ulonglong)((longlong)plVar13 - ((longlong)alStack_48 + lVar4)) >> 3) != 0) {
    pcVar7 = *(code **)(*plVar5 + 0x38);
    *(undefined8 *)((longlong)auStack_70 + lVar4) = 0x1400b1589;
    (*pcVar7)();
    auVar15 = in_ZMM6._0_16_;
    puVar12 = (undefined1 *)((longlong)alStack_48 + lVar4);
    uVar10 = extraout_var;
  }
  if (pauVar14 != (undefined1 (*) [16])0x0) {
    uVar11 = rdtsc();
    auVar8 = vpinsrq_avx(auVar15,uVar11 & 0xffffffff00000000 | CONCAT44(uVar10,(int)uVar11),1);
    auVar15 = vmovntdq_avx(SUB6416(ZEXT864(0x14139577c),0));
    *pauVar14 = auVar15;
    auVar15 = vmovntdq_avx(auVar8);
    pauVar14[1] = auVar15;
  }
  if (DAT_1414ef3c0 == (alStack_48[1] ^ (ulonglong)&stack0xffffffffffffffd8)) {
    return;
  }
  uVar11 = alStack_48[1] ^ (ulonglong)&stack0xffffffffffffffd8;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar12 + -0x28) = &UNK_1400b15ea;
  FUN_140b65db0(uVar11);
}


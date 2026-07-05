/**
 * Function: void_jph_constraintmanager_getactiveconstrain
 * Address:  1403757d0
 * Signature: undefined void_jph_constraintmanager_getactiveconstrain(void)
 * Body size: 344 bytes
 */


void void_jph_constraintmanager_getactiveconstrain
               (longlong param_1,uint param_2,uint param_3,undefined8 *param_4,int *param_5)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 in_ZMM6 [64];
  
  uVar6 = (ulonglong)param_2;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  auVar10 = in_ZMM6._0_16_;
  uVar4 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  iVar9 = 0;
  if (uVar4 == 0) {
    pauVar8 = (undefined1 (*) [16])0x0;
    iVar7 = param_3 - param_2;
    iVar9 = 0;
    if (param_3 < param_2 || iVar7 == 0) goto LAB_1403758e8;
  }
  else {
    uVar1 = *(uint *)(uVar4 + 0x200020);
    if ((ulonglong)uVar1 < 0x10000) {
      *(uint *)(uVar4 + 0x200020) = uVar1 + 1;
      pauVar8 = (undefined1 (*) [16])(uVar4 + (ulonglong)uVar1 * 0x20 + 0x20);
      uVar5 = rdtsc();
      uVar4 = CONCAT44((int)(uVar4 >> 0x20),(int)uVar5);
      uVar5 = uVar5 & 0xffffffff00000000 | uVar4;
      in_ZMM6 = ZEXT864(uVar5);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar5;
      iVar7 = param_3 - param_2;
      if (param_3 < param_2 || iVar7 == 0) goto LAB_1403758e8;
    }
    else {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        uVar4 = (*(code *)PTR_vfunction4_1414f67c8)
                          ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      auVar10 = in_ZMM6._0_16_;
      pauVar8 = (undefined1 (*) [16])0x0;
      iVar7 = param_3 - param_2;
      iVar9 = 0;
      if (param_3 < param_2 || iVar7 == 0) goto LAB_1403758e8;
    }
  }
  iVar9 = 0;
  do {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar6 * 8);
    uVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
    auVar10 = in_ZMM6._0_16_;
    if ((char)uVar4 != '\0') {
      *param_4 = plVar2;
      param_4 = param_4 + 1;
      iVar9 = iVar9 + 1;
    }
    uVar6 = uVar6 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
LAB_1403758e8:
  *param_5 = iVar9;
  if (pauVar8 != (undefined1 (*) [16])0x0) {
    uVar6 = rdtsc();
    auVar3 = vpinsrq_avx(auVar10,uVar6 & 0xffffffff00000000 |
                                 CONCAT44((int)(uVar4 >> 0x20),(int)uVar6),1);
    auVar10 = vmovntdq_avx(SUB6416(ZEXT864(0x14132c72a),0));
    *pauVar8 = auVar10;
    auVar10 = vmovntdq_avx(auVar3);
    pauVar8[1] = auVar10;
  }
  return;
}


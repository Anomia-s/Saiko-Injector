/**
 * Function: void_jph_islandbuilder_buildbodyislandsconst
 * Address:  1403746d0
 * Signature: undefined void_jph_islandbuilder_buildbodyislandsconst(void)
 * Body size: 464 bytes
 */


void void_jph_islandbuilder_buildbodyislandsconst
               (longlong *param_1,longlong param_2,uint param_3,longlong *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 in_ZMM6 [64];
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar3 != 0) {
    uVar8 = *(uint *)(lVar3 + 0x200020);
    if ((ulonglong)uVar8 < 0x10000) {
      *(uint *)(lVar3 + 0x200020) = uVar8 + 1;
      pauVar10 = (undefined1 (*) [16])(lVar3 + (ulonglong)uVar8 * 0x20 + 0x20);
      uVar5 = rdtsc();
      in_ZMM6 = ZEXT864(uVar5 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar3 >> 0x20),(int)uVar5));
      goto LAB_140374781;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar10 = (undefined1 (*) [16])0x0;
LAB_140374781:
  *(uint *)((longlong)param_1 + 0x5c) = param_3;
  lVar3 = (**(code **)(*param_4 + 8))(param_4,param_3 * 4);
  param_1[3] = lVar3;
  piVar4 = (int *)(**(code **)(*param_4 + 8))(param_4);
  *piVar4 = 0;
  uVar5 = (ulonglong)param_3;
  if (param_3 != 0) {
    uVar7 = 0;
    do {
      while( true ) {
        lVar3 = *param_1;
        uVar9 = (ulonglong)*(uint *)(lVar3 + uVar7 * 8);
        if (uVar7 == uVar9) break;
        iVar6 = *(int *)(lVar3 + 4 + uVar9 * 8);
        *(int *)(lVar3 + 4 + uVar7 * 8) = iVar6;
        piVar4[iVar6 + 1] = piVar4[iVar6 + 1] + 1;
        uVar7 = uVar7 + 1;
        if (uVar5 == uVar7) goto LAB_140374805;
      }
      iVar6 = *(int *)((longlong)param_1 + 0x6c);
      *(int *)(lVar3 + 4 + uVar7 * 8) = iVar6;
      uVar8 = iVar6 + 1;
      *(uint *)((longlong)param_1 + 0x6c) = uVar8;
      piVar4[uVar8] = 1;
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
  }
LAB_140374805:
  if (1 < *(uint *)((longlong)param_1 + 0x6c)) {
    iVar6 = *piVar4;
    uVar7 = 1;
    do {
      iVar6 = iVar6 + piVar4[uVar7];
      piVar4[uVar7] = iVar6;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)((longlong)param_1 + 0x6c));
  }
  if (param_3 != 0) {
    uVar7 = 0;
    do {
      lVar3 = *param_1;
      uVar8 = *(uint *)(lVar3 + 4 + uVar7 * 8);
      *(undefined4 *)(param_1[3] + (ulonglong)(uint)piVar4[uVar8] * 4) =
           *(undefined4 *)(param_2 + uVar7 * 4);
      piVar4[uVar8] = piVar4[uVar8] + 1;
      *(int *)(lVar3 + uVar7 * 8) = (int)uVar7;
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
  }
  param_1[4] = (longlong)piVar4;
  if (pauVar10 != (undefined1 (*) [16])0x0) {
    uVar5 = rdtsc();
    auVar2 = vpinsrq_avx(in_ZMM6._0_16_,
                         uVar5 & 0xffffffff00000000 |
                         CONCAT44((int)((ulonglong)piVar4 >> 0x20),(int)uVar5),1);
    auVar1 = vmovntdq_avx(SUB6416(ZEXT864(0x141398d68),0));
    *pauVar10 = auVar1;
    auVar1 = vmovntdq_avx(auVar2);
    pauVar10[1] = auVar1;
  }
  return;
}


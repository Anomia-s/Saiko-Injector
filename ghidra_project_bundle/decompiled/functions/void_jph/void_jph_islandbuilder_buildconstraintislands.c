/**
 * Function: void_jph_islandbuilder_buildconstraintislands
 * Address:  1403748b0
 * Signature: undefined void_jph_islandbuilder_buildconstraintislands(void)
 * Body size: 668 bytes
 */


/* WARNING: Removing unreachable block (ram,0x000140374b32) */
/* WARNING: Removing unreachable block (ram,0x000140374b4a) */

void void_jph_islandbuilder_buildconstraintislands
               (longlong *param_1,longlong param_2,uint param_3,longlong *param_4,
               undefined8 *param_5,longlong *param_6)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  int *piVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  undefined1 in_ZMM6 [64];
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  piVar5 = *(int **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x170);
  if (piVar5 == (int *)0x0) {
LAB_14037496a:
    auVar9 = in_ZMM6._0_16_;
    pauVar8 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar1 = piVar5[0x80008];
    if (0xffff < (ulonglong)uVar1) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        piVar5 = (int *)(*(code *)PTR_vfunction4_1414f67c8)
                                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      goto LAB_14037496a;
    }
    piVar5[0x80008] = uVar1 + 1;
    pauVar8 = (undefined1 (*) [16])(piVar5 + (ulonglong)uVar1 * 8 + 8);
    uVar6 = rdtsc();
    piVar5 = (int *)CONCAT44((int)((ulonglong)piVar5 >> 0x20),(int)uVar6);
    uVar6 = uVar6 & 0xffffffff00000000 | (ulonglong)piVar5;
    in_ZMM6 = ZEXT864(uVar6);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar6;
  }
  if (param_3 == 0) goto LAB_140374ae4;
  lVar4 = (**(code **)(*param_6 + 8))(param_6,param_3 * 4);
  piVar5 = (int *)(**(code **)(*param_6 + 8))(param_6,*(int *)((longlong)param_1 + 0x6c) * 4 + 4);
  auVar9 = in_ZMM6._0_16_;
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    uVar6 = 0;
    do {
      piVar5[uVar6] = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)((longlong)param_1 + 0x6c));
  }
  if (param_3 == 1) {
    uVar6 = 0;
LAB_140374a15:
    piVar5[*(int *)(*param_1 + 4 + (ulonglong)*(uint *)(param_2 + uVar6 * 4) * 8) + 1] =
         piVar5[*(int *)(*param_1 + 4 + (ulonglong)*(uint *)(param_2 + uVar6 * 4) * 8) + 1] + 1;
  }
  else {
    uVar6 = 0;
    do {
      piVar5[*(int *)(*param_1 + 4 + (ulonglong)*(uint *)(param_2 + uVar6 * 4) * 8) + 1] =
           piVar5[*(int *)(*param_1 + 4 + (ulonglong)*(uint *)(param_2 + uVar6 * 4) * 8) + 1] + 1;
      piVar5[*(int *)(*param_1 + 4 + (ulonglong)*(uint *)(param_2 + 4 + uVar6 * 4) * 8) + 1] =
           piVar5[*(int *)(*param_1 + 4 + (ulonglong)*(uint *)(param_2 + 4 + uVar6 * 4) * 8) + 1] +
           1;
      uVar6 = uVar6 + 2;
    } while ((param_3 & 0xfffffffe) != uVar6);
    if ((param_3 & 1) != 0) goto LAB_140374a15;
  }
  if (1 < *(uint *)((longlong)param_1 + 0x6c)) {
    iVar7 = *piVar5;
    uVar6 = 1;
    do {
      iVar7 = iVar7 + piVar5[uVar6];
      piVar5[uVar6] = iVar7;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)((longlong)param_1 + 0x6c));
  }
  if (param_3 == 1) {
    uVar6 = 0;
LAB_140374ac3:
    uVar1 = *(uint *)(*param_1 + 4 + (ulonglong)*(uint *)(param_2 + uVar6 * 4) * 8);
    uVar2 = piVar5[uVar1];
    piVar5[uVar1] = uVar2 + 1;
    *(int *)(lVar4 + (ulonglong)uVar2 * 4) = (int)uVar6;
  }
  else {
    uVar6 = 0;
    do {
      uVar1 = *(uint *)(*param_1 + 4 + (ulonglong)*(uint *)(param_2 + uVar6 * 4) * 8);
      uVar2 = piVar5[uVar1];
      piVar5[uVar1] = uVar2 + 1;
      *(int *)(lVar4 + (ulonglong)uVar2 * 4) = (int)uVar6;
      uVar1 = *(uint *)(*param_1 + 4 + (ulonglong)*(uint *)(param_2 + 4 + uVar6 * 4) * 8);
      uVar2 = piVar5[uVar1];
      piVar5[uVar1] = uVar2 + 1;
      *(int *)(lVar4 + (ulonglong)uVar2 * 4) = (int)uVar6 + 1;
      uVar6 = uVar6 + 2;
    } while (uVar6 != (param_3 & 0xfffffffe));
    if ((param_3 & 1) != 0) goto LAB_140374ac3;
  }
  *param_4 = lVar4;
  *param_5 = piVar5;
LAB_140374ae4:
  if (pauVar8 != (undefined1 (*) [16])0x0) {
    uVar6 = rdtsc();
    auVar3 = vpinsrq_avx(auVar9,uVar6 & 0xffffffff00000000 |
                                CONCAT44((int)((ulonglong)piVar5 >> 0x20),(int)uVar6),1);
    auVar9 = vmovntdq_avx(SUB6416(ZEXT864(0x14132b6ae),0));
    *pauVar8 = auVar9;
    auVar9 = vmovntdq_avx(auVar3);
    pauVar8[1] = auVar9;
  }
  return;
}


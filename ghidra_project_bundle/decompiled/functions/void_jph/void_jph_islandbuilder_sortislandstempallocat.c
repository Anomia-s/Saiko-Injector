/**
 * Function: void_jph_islandbuilder_sortislandstempallocat
 * Address:  140374b50
 * Signature: undefined void_jph_islandbuilder_sortislandstempallocat(void)
 * Body size: 570 bytes
 */


void void_jph_islandbuilder_sortislandstempallocat(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar5;
  undefined8 uVar3;
  int *piVar4;
  undefined4 extraout_var;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_ZMM6 [64];
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar2 == 0) {
LAB_140374c01:
    auVar12 = in_ZMM6._0_16_;
    pauVar9 = (undefined1 (*) [16])0x0;
    uVar5 = 0;
    if (*(int *)(param_1 + 0x60) == 0 && *(int *)(param_1 + 0x68) == 0) goto LAB_140374d4f;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x200020);
    if (0xffff < (ulonglong)uVar1) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      goto LAB_140374c01;
    }
    *(uint *)(lVar2 + 0x200020) = uVar1 + 1;
    pauVar9 = (undefined1 (*) [16])(lVar2 + (ulonglong)uVar1 * 0x20 + 0x20);
    uVar8 = rdtsc();
    uVar8 = uVar8 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar2 >> 0x20),(int)uVar8);
    in_ZMM6 = ZEXT864(uVar8);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar8;
    uVar5 = 0;
    if (*(int *)(param_1 + 0x60) == 0 && *(int *)(param_1 + 0x68) == 0) goto LAB_140374d4f;
  }
  uVar3 = (**(code **)(*param_2 + 8))(param_2,*(int *)(param_1 + 0x6c) << 2);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  if (*(int *)(param_1 + 0x6c) == 0) {
    iVar7 = 0;
  }
  else {
    uVar8 = 0;
    do {
      *(int *)(*(longlong *)(param_1 + 0x48) + uVar8 * 4) = (int)uVar8;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x6c));
    iVar7 = *(uint *)(param_1 + 0x6c) << 2;
  }
  piVar4 = (int *)(**(code **)(*param_2 + 8))(param_2,iVar7);
  if ((*(int *)(param_1 + 0x68) == 0) || (*(int *)(param_1 + 0x60) == 0)) {
    if (*(int *)(param_1 + 0x68) == 0) {
      *piVar4 = **(int **)(param_1 + 0x30);
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x6c);
      if (1 < *(uint *)(param_1 + 0x6c)) {
        uVar6 = 1;
        do {
          piVar4[uVar6] =
               *(int *)(*(longlong *)(param_1 + 0x30) + uVar6 * 4) -
               *(int *)(*(longlong *)(param_1 + 0x30) + -4 + uVar6 * 4);
          uVar6 = uVar6 + 1;
          uVar8 = (ulonglong)*(uint *)(param_1 + 0x6c);
        } while (uVar6 < uVar8);
      }
    }
    else {
      *piVar4 = **(int **)(param_1 + 0x40);
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x6c);
      if (1 < *(uint *)(param_1 + 0x6c)) {
        uVar6 = 1;
        do {
          piVar4[uVar6] =
               *(int *)(*(longlong *)(param_1 + 0x40) + uVar6 * 4) -
               *(int *)(*(longlong *)(param_1 + 0x40) + -4 + uVar6 * 4);
          uVar6 = uVar6 + 1;
          uVar8 = (ulonglong)*(uint *)(param_1 + 0x6c);
        } while (uVar6 < uVar8);
      }
    }
  }
  else {
    *piVar4 = **(int **)(param_1 + 0x40) + **(int **)(param_1 + 0x30);
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x6c);
    if (1 < *(uint *)(param_1 + 0x6c)) {
      uVar6 = 1;
      do {
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *(ulonglong *)(*(longlong *)(param_1 + 0x30) + -4 + uVar6 * 4);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *(ulonglong *)(*(longlong *)(param_1 + 0x40) + -4 + uVar6 * 4);
        auVar12 = vpaddd_avx(auVar10,auVar11);
        auVar10 = vpshufd_avx(auVar12,0x55);
        auVar12 = vpsubd_avx(auVar10,auVar12);
        piVar4[uVar6] = auVar12._0_4_;
        uVar6 = uVar6 + 1;
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x6c);
      } while (uVar6 < uVar8);
    }
  }
  FUN_140374d90(*(longlong *)(param_1 + 0x48),*(longlong *)(param_1 + 0x48) + uVar8 * 4,piVar4);
  (**(code **)(*param_2 + 0x10))(param_2,piVar4,*(int *)(param_1 + 0x6c) << 2);
  auVar12 = in_ZMM6._0_16_;
  uVar5 = extraout_var;
LAB_140374d4f:
  if (pauVar9 != (undefined1 (*) [16])0x0) {
    uVar8 = rdtsc();
    auVar10 = vpinsrq_avx(auVar12,uVar8 & 0xffffffff00000000 | CONCAT44(uVar5,(int)uVar8),1);
    auVar12 = vmovntdq_avx(SUB6416(ZEXT864(0x141398c0d),0));
    *pauVar9 = auVar12;
    auVar12 = vmovntdq_avx(auVar10);
    pauVar9[1] = auVar12;
  }
  return;
}


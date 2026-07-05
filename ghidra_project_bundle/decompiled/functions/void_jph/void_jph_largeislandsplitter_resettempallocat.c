/**
 * Function: void_jph_largeislandsplitter_resettempallocat
 * Address:  1403740e0
 * Signature: undefined void_jph_largeislandsplitter_resettempallocat(void)
 * Body size: 393 bytes
 */


void void_jph_largeislandsplitter_resettempallocat(int *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 auVar8 [16];
  undefined1 in_ZMM6 [64];
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x200020);
    if ((ulonglong)uVar1 < 0x10000) {
      *(uint *)(lVar3 + 0x200020) = uVar1 + 1;
      pauVar7 = (undefined1 (*) [16])(lVar3 + (ulonglong)uVar1 * 0x20 + 0x20);
      uVar4 = rdtsc();
      in_ZMM6 = ZEXT864(uVar4 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar3 >> 0x20),(int)uVar4));
      iVar2 = param_1[10];
      goto joined_r0x000140374192;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar7 = (undefined1 (*) [16])0x0;
  iVar2 = param_1[10];
joined_r0x000140374192:
  uVar6 = 0;
  if (iVar2 != 0) {
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0xc),iVar2 * 0x228);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xe] = 0;
    uVar6 = extraout_var;
  }
  if (param_1[8] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 6),param_1[8] << 2);
    param_1[6] = 0;
    param_1[7] = 0;
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 4),param_1[8] << 2);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    uVar6 = extraout_var_00;
  }
  auVar8 = in_ZMM6._0_16_;
  if (*(longlong *)(param_1 + 2) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2,*(longlong *)(param_1 + 2),*param_1 << 2);
    auVar8 = in_ZMM6._0_16_;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    uVar6 = extraout_var_01;
  }
  if (pauVar7 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar5 = vpinsrq_avx(auVar8,uVar4 & 0xffffffff00000000 | CONCAT44(uVar6,(int)uVar4),1);
    auVar8 = vmovntdq_avx(SUB6416(ZEXT864(0x141398bd7),0));
    *pauVar7 = auVar8;
    auVar8 = vmovntdq_avx(auVar5);
    pauVar7[1] = auVar8;
  }
  return;
}


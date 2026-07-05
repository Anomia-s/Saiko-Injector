/**
 * Function: void_jph_softbodymotionproperties_determinese
 * Address:  1403836c0
 * Signature: undefined void_jph_softbodymotionproperties_determinese(void)
 * Body size: 599 bytes
 */


void void_jph_softbodymotionproperties_determinese(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 extraout_var;
  longlong lVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined1 *local_a0;
  undefined4 local_98;
  float *local_90;
  undefined4 local_88;
  undefined4 *local_80;
  undefined4 local_78;
  undefined4 local_70;
  float local_6c;
  undefined1 local_68 [24];
  ulonglong local_50;
  undefined1 local_48 [16];
  
  local_48 = in_ZMM6._0_16_;
  local_50 = DAT_1414ef3c0 ^ (ulonglong)auStack_108;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x200020);
    if ((ulonglong)uVar1 < 0x10000) {
      *(uint *)(lVar5 + 0x200020) = uVar1 + 1;
      pauVar6 = (undefined1 (*) [16])(lVar5 + (ulonglong)uVar1 * 0x20 + 0x20);
      uVar2 = rdtsc();
      in_ZMM6 = ZEXT864(uVar2 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar5 >> 0x20),(int)uVar2));
      goto LAB_140383787;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar6 = (undefined1 (*) [16])0x0;
LAB_140383787:
  auVar8 = in_ZMM6._0_16_;
  local_6c = -3.4028235e+38;
  local_70 = 0xffffffff;
  local_b0 = *(longlong *)(param_1 + 0x118) + 0x4c;
  local_c0 = *(longlong *)(param_1 + 0x118) + 0x10;
  local_b8 = 0x50;
  local_a8 = 0x50;
  local_a0 = local_68;
  local_98 = 0;
  local_90 = &local_6c;
  local_88 = 0;
  local_80 = &local_70;
  local_78 = 0;
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined1 *)(param_2 + 0x5c) = 0;
    uVar4 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_2 + 0x50);
    lVar7 = *(longlong *)(param_2 + 0x40) * 0x60;
    do {
      local_e8 = *(undefined4 *)(param_1 + 0x108);
      local_d8 = *(undefined8 *)(lVar5 + 0x40);
      uStack_d0 = *(undefined8 *)(lVar5 + 0x48);
      local_e0 = 0;
      (**(code **)(**(longlong **)(lVar5 + 0x50) + 0xa8))
                (*(longlong **)(lVar5 + 0x50),lVar5,&local_d8,&local_c0);
      auVar8 = in_ZMM6._0_16_;
      lVar5 = lVar5 + 0x60;
      lVar7 = lVar7 + -0x60;
    } while (lVar7 != 0);
    *(bool *)(param_2 + 0x5c) = 0.0 < local_6c;
    uVar4 = extraout_var;
    if (0.0 < local_6c) {
      *(undefined1 *)(param_1 + 0x1d6) = 1;
    }
  }
  if (pauVar6 != (undefined1 (*) [16])0x0) {
    uVar2 = rdtsc();
    auVar3 = vpinsrq_avx(auVar8,uVar2 & 0xffffffff00000000 | CONCAT44(uVar4,(int)uVar2),1);
    auVar8 = vmovntdq_avx(SUB6416(ZEXT864(0x14139b0c9),0));
    *pauVar6 = auVar8;
    auVar8 = vmovntdq_avx(auVar3);
    pauVar6[1] = auVar8;
  }
  if (DAT_1414ef3c0 != (local_50 ^ (ulonglong)auStack_108)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_50 ^ (ulonglong)auStack_108);
  }
  return;
}


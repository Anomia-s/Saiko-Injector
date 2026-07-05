/**
 * Function: void_jph_softbodymotionproperties_determineco
 * Address:  140383430
 * Signature: undefined void_jph_softbodymotionproperties_determineco(void)
 * Body size: 640 bytes
 */


void void_jph_softbodymotionproperties_determineco
               (longlong param_1,ulonglong param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined1 (*local_d8) [16];
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined4 local_88;
  longlong local_80;
  undefined4 local_78;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  undefined1 local_58 [16];
  
  local_58 = in_ZMM6._0_16_;
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_108;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar4 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (uVar4 != 0) {
    uVar1 = *(uint *)(uVar4 + 0x200020);
    if ((ulonglong)uVar1 < 0x10000) {
      *(uint *)(uVar4 + 0x200020) = uVar1 + 1;
      local_d8 = (undefined1 (*) [16])(uVar4 + (ulonglong)uVar1 * 0x20 + 0x20);
      uVar7 = rdtsc();
      uVar4 = CONCAT44((int)((ulonglong)local_d8 >> 0x20),(int)uVar7);
      uVar7 = uVar7 & 0xffffffff00000000 | uVar4;
      in_ZMM6 = ZEXT864(uVar7);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar7;
      lVar9 = *(longlong *)(param_1 + 0x138);
      goto joined_r0x00014038351d;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      uVar4 = (*(code *)PTR_vfunction4_1414f67c8)
                        ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  auVar12 = in_ZMM6._0_16_;
  local_d8 = (undefined1 (*) [16])0x0;
  lVar9 = *(longlong *)(param_1 + 0x138);
joined_r0x00014038351d:
  uVar6 = (undefined4)(uVar4 >> 0x20);
  if (lVar9 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x148);
    local_d0 = lVar9 * 0x100 + lVar8;
    lVar9 = (param_2 & 0xffffffff) * 0x50;
    do {
      uVar6 = 0;
      if (*(longlong *)(lVar8 + 0x40) != 0) {
        lVar11 = *(longlong *)(lVar8 + 0x50);
        lVar10 = *(longlong *)(lVar8 + 0x40) * 0x60;
        do {
          lVar2 = *(longlong *)(param_1 + 0x118);
          local_b0 = lVar2 + lVar9 + 0x10;
          local_a8 = 0x50;
          local_a0 = lVar2 + 0x4c + lVar9;
          local_98 = 0x50;
          local_90 = lVar2 + 0x30 + lVar9;
          local_88 = 0x50;
          local_80 = lVar2 + 0x48 + lVar9;
          local_78 = 0x50;
          local_70 = lVar2 + 0x40 + lVar9;
          local_68 = 0x50;
          local_c8 = *(undefined8 *)(lVar11 + 0x40);
          uStack_c0 = *(undefined8 *)(lVar11 + 0x48);
          local_e0 = (undefined4)((ulonglong)(lVar8 - *(longlong *)(param_1 + 0x148)) >> 8);
          local_e8 = param_3;
          uVar5 = (**(code **)(**(longlong **)(lVar11 + 0x50) + 0xa8))
                            (*(longlong **)(lVar11 + 0x50),lVar11,&local_c8,&local_b0);
          uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
          lVar11 = lVar11 + 0x60;
          lVar10 = lVar10 + -0x60;
        } while (lVar10 != 0);
      }
      auVar12 = in_ZMM6._0_16_;
      lVar8 = lVar8 + 0x100;
    } while (lVar8 != local_d0);
  }
  if (local_d8 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar3 = vpinsrq_avx(auVar12,uVar4 & 0xffffffff00000000 | CONCAT44(uVar6,(int)uVar4),1);
    auVar12 = vmovntdq_avx(SUB6416(ZEXT864(0x141394fef),0));
    *local_d8 = auVar12;
    auVar12 = vmovntdq_avx(auVar3);
    local_d8[1] = auVar12;
  }
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_108)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_108);
}


/**
 * Function: bool_jph_contactconstraintmanager_addcontactc
 * Address:  1400d5aa0
 * Signature: undefined bool_jph_contactconstraintmanager_addcontactc(void)
 * Body size: 800 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong bool_jph_contactconstraintmanager_addcontactc
                    (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                    longlong param_5,undefined8 *param_6)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  undefined1 in_ZMM6 [64];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [64];
  undefined4 uVar13;
  undefined1 auVar14 [64];
  undefined1 auStack_1138 [32];
  longlong local_1118;
  undefined8 *local_1110;
  undefined1 local_1108 [1024];
  uint local_d08;
  undefined1 local_cf8 [1024];
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined1 local_8e8 [16];
  undefined4 local_8d8;
  undefined8 local_8d4;
  uint local_8c8;
  undefined1 local_8b8 [1024];
  uint local_4b8;
  undefined1 local_4a8 [1032];
  ulonglong local_a0;
  undefined1 local_98 [16];
  undefined8 uStack_48;
  
  uStack_48 = 0x1400d5ab6;
  local_98 = in_ZMM6._0_16_;
  local_a0 = DAT_1414ef3c0 ^ (ulonglong)auStack_1138;
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
      pauVar8 = (undefined1 (*) [16])(lVar3 + (ulonglong)uVar1 * 0x20 + 0x20);
      uVar7 = rdtsc();
      in_ZMM6 = ZEXT864(uVar7 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar3 >> 0x20),(int)uVar7));
      goto LAB_1400d5ba0;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar8 = (undefined1 (*) [16])0x0;
LAB_1400d5ba0:
  local_8d4 = 0xffffffffffffffff;
  local_8c8 = 0;
  local_4b8 = 0;
  local_1118 = param_5;
  if (*(uint *)(param_5 + 0x70) < *(uint *)(param_4 + 0x70)) {
    uVar10 = *param_6;
    uVar11 = param_6[1];
    auVar9._0_12_ = ZEXT812(0);
    auVar9._12_4_ = 0;
    auVar9 = vsubps_avx(auVar9,*(undefined1 (*) [16])(param_6 + 2));
    auVar12 = ZEXT1664(auVar9);
    uVar13 = *(undefined4 *)(param_6 + 4);
    auVar14 = ZEXT864(*(ulonglong *)((longlong)param_6 + 0x24));
    uVar1 = *(uint *)(param_6 + 0x88);
    uVar7 = (ulonglong)uVar1;
    if (uVar7 != 0) {
      memcpy(local_1108,param_6 + 0x8a,uVar7 << 4);
    }
    auVar9 = auVar14._0_16_;
    local_8e8 = auVar12._0_16_;
    local_d08 = 0;
    uVar2 = *(uint *)(param_6 + 6);
    uVar6 = (ulonglong)uVar2;
    if (uVar6 != 0) {
      memcpy(local_cf8,param_6 + 8,uVar6 << 4);
      auVar9 = auVar14._0_16_;
      local_8e8 = auVar12._0_16_;
      local_d08 = uVar2;
    }
    auVar9 = vpshufd_avx(auVar9,0xe1);
    local_8d4 = auVar9._0_8_;
    local_8c8 = 0;
    local_8f8 = uVar10;
    uStack_8f0 = uVar11;
    local_8d8 = uVar13;
    if (uVar1 != 0) {
      memcpy(local_8b8,local_1108,uVar7 << 4);
      local_8c8 = uVar1;
    }
    local_4b8 = 0;
    if (uVar2 != 0) {
      memcpy(local_4a8,local_cf8,uVar6 << 4);
      local_4b8 = uVar2;
    }
    param_6 = &local_8f8;
    local_1118 = param_4;
    param_4 = param_5;
  }
  local_1110 = param_6;
  uVar6 = (**(code **)(&DAT_140de4440 +
                      (ulonglong)*(byte *)(local_1118 + 0x78) * 8 +
                      (ulonglong)*(byte *)(param_4 + 0x78) * 0x18))(param_1,param_2,param_3);
  uVar7 = uVar6;
  if (pauVar8 != (undefined1 (*) [16])0x0) {
    uVar7 = uVar6 & 0xffffffff;
    uVar4 = rdtsc();
    auVar5 = vpinsrq_avx(in_ZMM6._0_16_,
                         uVar4 & 0xffffffff00000000 | CONCAT44((int)(uVar6 >> 0x20),(int)uVar4),1);
    auVar9 = vmovntdq_avx(SUB6416(ZEXT864(0x14139be0a),0));
    *pauVar8 = auVar9;
    auVar9 = vmovntdq_avx(auVar5);
    pauVar8[1] = auVar9;
  }
  if (DAT_1414ef3c0 != (local_a0 ^ (ulonglong)auStack_1138)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_a0 ^ (ulonglong)auStack_1138);
  }
  return uVar7;
}


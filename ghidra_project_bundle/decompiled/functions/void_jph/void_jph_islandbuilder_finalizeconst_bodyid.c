/**
 * Function: void_jph_islandbuilder_finalizeconst_bodyid
 * Address:  140375160
 * Signature: undefined void_jph_islandbuilder_finalizeconst_bodyid(void)
 * Body size: 365 bytes
 */


void void_jph_islandbuilder_finalizeconst_bodyid
               (longlong param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4,
               longlong *param_5)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 in_ZMM6 [64];
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
    param_3 = param_3 & 0xffffffff;
  }
  lVar3 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar3 != 0) {
    uVar2 = *(uint *)(lVar3 + 0x200020);
    if ((ulonglong)uVar2 < 0x10000) {
      *(uint *)(lVar3 + 0x200020) = uVar2 + 1;
      pauVar7 = (undefined1 (*) [16])(lVar3 + (ulonglong)uVar2 * 0x20 + 0x20);
      uVar4 = rdtsc();
      in_ZMM6 = ZEXT864(uVar4 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar3 >> 0x20),(int)uVar4));
      goto LAB_140375221;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      param_3 = param_3 & 0xffffffff;
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar7 = (undefined1 (*) [16])0x0;
LAB_140375221:
  *(undefined4 *)(param_1 + 0x68) = param_4;
  void_jph_islandbuilder_buildbodyislandsconst(param_1,param_2,param_3,param_5);
  void_jph_islandbuilder_buildconstraintislands
            (param_1,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x60),param_1 + 0x28,
             param_1 + 0x30,param_5);
  void_jph_islandbuilder_buildconstraintislands
            (param_1,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x68),param_1 + 0x38,
             param_1 + 0x40,param_5);
  void_jph_islandbuilder_sortislandstempallocat(param_1,param_5);
  uVar6 = (**(code **)(*param_5 + 8))(param_5,*(undefined4 *)(param_1 + 0x6c));
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  if (pauVar7 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar5 = vpinsrq_avx(in_ZMM6._0_16_,
                         uVar4 & 0xffffffff00000000 |
                         CONCAT44((int)((ulonglong)uVar6 >> 0x20),(int)uVar4),1);
    auVar1 = vmovntdq_avx(SUB6416(ZEXT864(0x141398d15),0));
    *pauVar7 = auVar1;
    auVar1 = vmovntdq_avx(auVar5);
    pauVar7[1] = auVar1;
  }
  return;
}


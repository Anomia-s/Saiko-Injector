/**
 * Function: static_void_jph_heightfieldshape_scollidesphe
 * Address:  140323ef0
 * Signature: undefined static_void_jph_heightfieldshape_scollidesphe(void)
 * Body size: 483 bytes
 */


void static_void_jph_heightfieldshape_scollidesphe
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
               undefined8 param_9,undefined8 param_10)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined4 extraout_var;
  undefined1 (*pauVar6) [16];
  undefined1 in_ZMM6 [64];
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [144];
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_60;
  undefined1 local_58 [16];
  
  local_58 = in_ZMM6._0_16_;
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_178;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar3 != 0) {
    uVar2 = *(uint *)(lVar3 + 0x200020);
    if ((ulonglong)uVar2 < 0x10000) {
      *(uint *)(lVar3 + 0x200020) = uVar2 + 1;
      pauVar6 = (undefined1 (*) [16])(lVar3 + (ulonglong)uVar2 * 0x20 + 0x20);
      uVar4 = rdtsc();
      in_ZMM6 = ZEXT864(uVar4 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar3 >> 0x20),(int)uVar4));
      goto LAB_140323ff4;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar6 = (undefined1 (*) [16])0x0;
LAB_140323ff4:
  local_118 = *param_4;
  uStack_110 = param_4[1];
  local_128 = *param_3;
  uStack_120 = param_3[1];
  local_138 = param_10;
  local_140 = param_9;
  local_148 = param_7;
  local_150 = param_6;
  local_158 = param_5;
  FUN_1405bcb90(local_108,param_1,&local_128,&local_118);
  local_70 = *param_8;
  local_78 = param_2;
  FUN_1403240e0(param_2,local_108);
  if (pauVar6 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar5 = vpinsrq_avx(in_ZMM6._0_16_,
                         uVar4 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar4),1);
    auVar1 = vmovntdq_avx(SUB6416(ZEXT864(0x14139ba62),0));
    *pauVar6 = auVar1;
    auVar1 = vmovntdq_avx(auVar5);
    pauVar6[1] = auVar1;
  }
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_178)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_178);
}


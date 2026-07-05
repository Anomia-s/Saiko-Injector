/**
 * Function: void_jph_debugrenderer_drawwiretrianglervec3a
 * Address:  1403795d0
 * Signature: undefined void_jph_debugrenderer_drawwiretrianglervec3a(void)
 * Body size: 444 bytes
 */


void void_jph_debugrenderer_drawwiretrianglervec3a
               (longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined4 param_5)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined4 extraout_var;
  undefined1 (*pauVar6) [16];
  undefined1 in_ZMM6 [64];
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  undefined1 local_48 [16];
  
  local_48 = in_ZMM6._0_16_;
  local_50 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
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
      goto LAB_1403796a1;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar6 = (undefined1 (*) [16])0x0;
LAB_1403796a1:
  local_68 = *param_3;
  uStack_60 = param_3[1];
  local_78 = *param_2;
  uStack_70 = param_2[1];
  (**(code **)(*param_1 + 8))(param_1,&local_78,&local_68,param_5);
  local_88 = *param_4;
  uStack_80 = param_4[1];
  local_98 = *param_3;
  uStack_90 = param_3[1];
  (**(code **)(*param_1 + 8))(param_1,&local_98,&local_88,param_5);
  local_a8 = *param_2;
  uStack_a0 = param_2[1];
  local_b8 = *param_4;
  uStack_b0 = param_4[1];
  (**(code **)(*param_1 + 8))(param_1,&local_b8,&local_a8,param_5);
  if (pauVar6 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar5 = vpinsrq_avx(in_ZMM6._0_16_,
                         uVar4 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar4),1);
    auVar1 = vmovntdq_avx(SUB6416(ZEXT864(0x141396de7),0));
    *pauVar6 = auVar1;
    auVar1 = vmovntdq_avx(auVar5);
    pauVar6[1] = auVar1;
  }
  if (DAT_1414ef3c0 == (local_50 ^ (ulonglong)auStack_d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_50 ^ (ulonglong)auStack_d8);
}


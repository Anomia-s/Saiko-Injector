/**
 * Function: void_jph_contactconstraintmanager_constrainti
 * Address:  1400dcb60
 * Signature: undefined void_jph_contactconstraintmanager_constrainti(void)
 * Body size: 236 bytes
 */


void void_jph_contactconstraintmanager_constrainti(longlong param_1,uint *param_2,uint *param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  undefined1 (*pauVar6) [16];
  undefined8 extraout_XMM0_Qa;
  undefined1 in_ZMM0 [64];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    in_ZMM0._0_8_ = __dyn_tls_on_demand_init();
    in_ZMM0._8_56_ = extraout_var;
  }
  uVar5 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (uVar5 != 0) {
    uVar2 = *(uint *)(uVar5 + 0x200020);
    if ((ulonglong)uVar2 < 0x10000) {
      *(uint *)(uVar5 + 0x200020) = uVar2 + 1;
      pauVar6 = (undefined1 (*) [16])((ulonglong)uVar2 * 0x20 + uVar5 + 0x20);
      uVar3 = rdtsc();
      uVar5 = CONCAT44((int)(uVar5 >> 0x20),(int)uVar3);
      in_ZMM0 = ZEXT864(uVar3 & 0xffffffff00000000 | uVar5);
      goto LAB_1400dcc22;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      uVar5 = (*(code *)PTR_vfunction4_1414f67c8)();
      in_ZMM0._8_56_ = extraout_var_00;
      in_ZMM0._0_8_ = extraout_XMM0_Qa;
    }
  }
  pauVar6 = (undefined1 (*) [16])0x0;
LAB_1400dcc22:
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    uVar5 = 0;
    *param_2 = *(uint *)(*(longlong *)(param_1 + 0xb0) + (ulonglong)*param_2 * 4);
  }
  if (pauVar6 != (undefined1 (*) [16])0x0) {
    uVar3 = rdtsc();
    auVar4 = vpinsrq_avx(in_ZMM0._0_16_,
                         uVar3 & 0xffffffff00000000 | CONCAT44((int)(uVar5 >> 0x20),(int)uVar3),1);
    auVar1 = vmovntdq_avx(SUB6416(ZEXT864(0x14132b723),0));
    *pauVar6 = auVar1;
    auVar1 = vmovntdq_avx(auVar4);
    pauVar6[1] = auVar1;
  }
  return;
}


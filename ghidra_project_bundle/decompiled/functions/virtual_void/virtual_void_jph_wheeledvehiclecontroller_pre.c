/**
 * Function: virtual_void_jph_wheeledvehiclecontroller_pre
 * Address:  14035dec0
 * Signature: undefined virtual_void_jph_wheeledvehiclecontroller_pre(void)
 * Body size: 413 bytes
 */


void virtual_void_jph_wheeledvehiclecontroller_pre(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  longlong *plVar5;
  undefined1 (*pauVar6) [16];
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 in_ZMM0 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  
  auVar8 = in_ZMM0._0_16_;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    auVar9._0_8_ = __dyn_tls_on_demand_init();
    auVar9._8_56_ = extraout_var;
    auVar8 = auVar9._0_16_;
  }
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x200020);
    if ((ulonglong)uVar1 < 0x10000) {
      *(uint *)(lVar2 + 0x200020) = uVar1 + 1;
      pauVar6 = (undefined1 (*) [16])((ulonglong)uVar1 * 0x20 + lVar2 + 0x20);
      uVar7 = rdtsc();
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar7 & 0xffffffff00000000 |
                     CONCAT44((int)((ulonglong)lVar2 >> 0x20),(int)uVar7);
      plVar5 = *(longlong **)(param_1 + 8);
      lVar2 = plVar5[0x12];
      goto joined_r0x00014035df7b;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      auVar10._0_8_ = (*(code *)PTR_vfunction4_1414f67c8)();
      auVar10._8_56_ = extraout_var_00;
      auVar8 = auVar10._0_16_;
    }
  }
  pauVar6 = (undefined1 (*) [16])0x0;
  plVar5 = *(longlong **)(param_1 + 8);
  lVar2 = plVar5[0x12];
joined_r0x00014035df7b:
  if (lVar2 != 0) {
    plVar3 = (longlong *)plVar5[0x14];
    uVar7 = lVar2 * 8 - 8;
    plVar5 = plVar3;
    if ((uVar7 & 8) == 0) {
      *(float *)(*plVar3 + 0x88) =
           -*(float *)(param_1 + 0x14) * *(float *)(*(longlong *)(*plVar3 + 0x10) + 0xa8);
      plVar5 = plVar3 + 1;
    }
    if (uVar7 != 0) {
      do {
        *(float *)(*plVar5 + 0x88) =
             -*(float *)(param_1 + 0x14) * *(float *)(*(longlong *)(*plVar5 + 0x10) + 0xa8);
        *(float *)(plVar5[1] + 0x88) =
             -*(float *)(param_1 + 0x14) * *(float *)(*(longlong *)(plVar5[1] + 0x10) + 0xa8);
        plVar5 = plVar5 + 2;
      } while (plVar5 != plVar3 + lVar2);
    }
  }
  if (pauVar6 != (undefined1 (*) [16])0x0) {
    uVar7 = rdtsc();
    auVar4 = vpinsrq_avx(auVar8,uVar7 & 0xffffffff00000000 |
                                CONCAT44((int)((ulonglong)plVar5 >> 0x20),(int)uVar7),1);
    auVar8 = vmovntdq_avx(SUB6416(ZEXT864(0x14139bc70),0));
    *pauVar6 = auVar8;
    auVar8 = vmovntdq_avx(auVar4);
    pauVar6[1] = auVar8;
  }
  return;
}


/**
 * Function: void_jph_contactconstraintmanager_warmstartve
 * Address:  1400e2850
 * Signature: undefined void_jph_contactconstraintmanager_warmstartve(void)
 * Body size: 377 bytes
 */


void void_jph_contactconstraintmanager_warmstartve
               (longlong param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  undefined8 uVar4;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 (*pauVar9) [16];
  undefined1 auVar10 [16];
  undefined1 in_ZMM7 [64];
  undefined4 uVar5;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar3 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (uVar3 != 0) {
    uVar1 = *(uint *)(uVar3 + 0x200020);
    if ((ulonglong)uVar1 < 0x10000) {
      *(uint *)(uVar3 + 0x200020) = uVar1 + 1;
      pauVar9 = (undefined1 (*) [16])(uVar3 + (ulonglong)uVar1 * 0x20 + 0x20);
      uVar7 = rdtsc();
      uVar3 = CONCAT44((int)(uVar3 >> 0x20),(int)uVar7);
      uVar7 = uVar7 & 0xffffffff00000000 | uVar3;
      in_ZMM7 = ZEXT864(uVar7);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar7;
      goto joined_r0x0001400e2915;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      uVar3 = (*(code *)PTR_vfunction4_1414f67c8)
                        ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  auVar10 = in_ZMM7._0_16_;
  pauVar9 = (undefined1 (*) [16])0x0;
joined_r0x0001400e2915:
  uVar5 = (undefined4)(uVar3 >> 0x20);
  if (param_2 < param_3) {
    auVar10 = in_ZMM7._0_16_;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0xa8) + (ulonglong)*param_2);
      do {
        param_2 = param_2 + 1;
        if (param_2 < param_3) {
          plVar8 = (longlong *)(*(longlong *)(param_1 + 0xa8) + (ulonglong)*param_2);
        }
        else {
          plVar8 = (longlong *)0x0;
        }
        uVar4 = (**(code **)(&DAT_140de45a0 +
                            (ulonglong)*(byte *)(plVar6[1] + 0x78) * 8 +
                            (ulonglong)*(byte *)(*plVar6 + 0x78) * 0x18))
                          (plVar6,*(undefined8 *)(*plVar6 + 0x48),*(undefined8 *)(plVar6[1] + 0x48),
                           param_4);
        uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
        auVar10 = in_ZMM7._0_16_;
        plVar6 = plVar8;
      } while (plVar8 != (longlong *)0x0);
    }
  }
  if (pauVar9 != (undefined1 (*) [16])0x0) {
    uVar3 = rdtsc();
    auVar2 = vpinsrq_avx(auVar10,uVar3 & 0xffffffff00000000 | CONCAT44(uVar5,(int)uVar3),1);
    auVar10 = vmovntdq_avx(SUB6416(ZEXT864(0x141360178),0));
    *pauVar9 = auVar10;
    auVar10 = vmovntdq_avx(auVar2);
    pauVar9[1] = auVar10;
  }
  return;
}


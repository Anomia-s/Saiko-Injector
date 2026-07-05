/**
 * Function: bool_jph_contactconstraintmanager_solveveloci
 * Address:  1400dd1f0
 * Signature: undefined bool_jph_contactconstraintmanager_solveveloci(void)
 * Body size: 378 bytes
 */


byte bool_jph_contactconstraintmanager_solveveloci(longlong param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  byte bVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  undefined1 in_ZMM6 [64];
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar3 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (uVar3 == 0) {
LAB_1400dd2a7:
    auVar9 = in_ZMM6._0_16_;
    pauVar8 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar1 = *(uint *)(uVar3 + 0x200020);
    if (0xffff < (ulonglong)uVar1) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        uVar3 = (*(code *)PTR_vfunction4_1414f67c8)
                          ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      goto LAB_1400dd2a7;
    }
    *(uint *)(uVar3 + 0x200020) = uVar1 + 1;
    pauVar8 = (undefined1 (*) [16])(uVar3 + (ulonglong)uVar1 * 0x20 + 0x20);
    uVar5 = rdtsc();
    uVar3 = CONCAT44((int)(uVar3 >> 0x20),(int)uVar5);
    uVar5 = uVar5 & 0xffffffff00000000 | uVar3;
    in_ZMM6 = ZEXT864(uVar5);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar5;
  }
  if (param_2 < param_3) {
    auVar9 = in_ZMM6._0_16_;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      bVar7 = 0;
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0xa8) + (ulonglong)*param_2);
      do {
        param_2 = param_2 + 1;
        if (param_2 < param_3) {
          plVar6 = (longlong *)(*(longlong *)(param_1 + 0xa8) + (ulonglong)*param_2);
        }
        else {
          plVar6 = (longlong *)0x0;
        }
        uVar3 = (**(code **)(&DAT_140de4490 +
                            (ulonglong)*(byte *)(plVar4[1] + 0x78) * 8 +
                            (ulonglong)*(byte *)(*plVar4 + 0x78) * 0x18))
                          (plVar4,*(undefined8 *)(*plVar4 + 0x48),*(undefined8 *)(plVar4[1] + 0x48))
        ;
        auVar9 = in_ZMM6._0_16_;
        bVar7 = bVar7 | (byte)uVar3;
        plVar4 = plVar6;
      } while (plVar6 != (longlong *)0x0);
      goto LAB_1400dd322;
    }
  }
  bVar7 = 0;
LAB_1400dd322:
  if (pauVar8 != (undefined1 (*) [16])0x0) {
    uVar5 = rdtsc();
    auVar2 = vpinsrq_avx(auVar9,uVar5 & 0xffffffff00000000 |
                                CONCAT44((int)(uVar3 >> 0x20),(int)uVar5),1);
    auVar9 = vmovntdq_avx(SUB6416(ZEXT864(0x14139912a),0));
    *pauVar8 = auVar9;
    auVar9 = vmovntdq_avx(auVar2);
    pauVar8[1] = auVar9;
  }
  return bVar7 & 1;
}


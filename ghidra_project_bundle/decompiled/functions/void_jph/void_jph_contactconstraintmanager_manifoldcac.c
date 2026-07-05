/**
 * Function: void_jph_contactconstraintmanager_manifoldcac
 * Address:  1400ce1a0
 * Signature: undefined void_jph_contactconstraintmanager_manifoldcac(void)
 * Body size: 445 bytes
 */


void void_jph_contactconstraintmanager_manifoldcac(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 in_ZMM6 [64];
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar2 != 0) {
    uVar8 = *(uint *)(lVar2 + 0x200020);
    if ((ulonglong)uVar8 < 0x10000) {
      *(uint *)(lVar2 + 0x200020) = uVar8 + 1;
      pauVar6 = (undefined1 (*) [16])(lVar2 + (ulonglong)uVar8 * 0x20 + 0x20);
      uVar5 = rdtsc();
      in_ZMM6 = ZEXT864(uVar5 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar2 >> 0x20),(int)uVar5));
      uVar8 = **(uint **)(param_1 + 0x18);
      goto joined_r0x0001400ce265;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar6 = (undefined1 (*) [16])0x0;
  uVar8 = **(uint **)(param_1 + 0x18);
joined_r0x0001400ce265:
  uVar7 = 0;
  if (uVar8 == 0xffffffff) {
    auVar9 = in_ZMM6._0_16_;
    uVar5 = 1;
    uVar7 = 0;
    do {
      if (*(uint *)(param_1 + 0x20) <= uVar5) {
        uVar8 = *(uint *)(param_1 + 0x20);
        uVar7 = (uint)uVar5;
        if (uVar8 == uVar7) goto LAB_1400ce29d;
        uVar5 = 0xffffffff;
        goto LAB_1400ce2ff;
      }
      uVar8 = *(uint *)(*(longlong *)(param_1 + 0x18) + uVar5 * 4);
      uVar5 = uVar5 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar8 == 0xffffffff);
  }
  uVar5 = (ulonglong)uVar8;
  uVar8 = *(uint *)(param_1 + 0x20);
LAB_1400ce2ff:
  do {
    do {
      if ((*(ushort *)(**(longlong **)(param_1 + 0x10) + 0x24 + uVar5) & 1) == 0) {
        (**(code **)(*param_2 + 0x20))(param_2,**(longlong **)(param_1 + 0x10) + uVar5);
      }
      auVar9 = in_ZMM6._0_16_;
      if ((int)uVar5 == -1) goto LAB_1400ce340;
      uVar1 = *(uint *)(**(longlong **)(param_1 + 0x10) + 0x10 + uVar5);
      while (uVar1 == 0xffffffff) {
LAB_1400ce340:
        uVar7 = uVar7 + 1;
        if (*(uint *)(param_1 + 0x20) <= uVar7) {
          uVar5 = 0xffffffff;
          if (uVar7 == uVar8) goto LAB_1400ce2fa;
          goto LAB_1400ce2ff;
        }
        uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar7 * 4);
      }
      uVar5 = (ulonglong)uVar1;
    } while (uVar7 != uVar8);
LAB_1400ce2fa:
  } while ((int)uVar5 != -1);
LAB_1400ce29d:
  if (pauVar6 != (undefined1 (*) [16])0x0) {
    uVar3 = rdtsc();
    auVar4 = vpinsrq_avx(auVar9,uVar3,1);
    auVar9 = vmovntdq_avx(SUB6416(ZEXT864(0x141398e12),0));
    *pauVar6 = auVar9;
    auVar9 = vmovntdq_avx(auVar4);
    pauVar6[1] = auVar9;
  }
  return;
}


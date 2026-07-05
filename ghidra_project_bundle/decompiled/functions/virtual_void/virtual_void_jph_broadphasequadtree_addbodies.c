/**
 * Function: virtual_void_jph_broadphasequadtree_addbodies
 * Address:  14038a180
 * Signature: undefined virtual_void_jph_broadphasequadtree_addbodies(void)
 * Body size: 415 bytes
 */


void virtual_void_jph_broadphasequadtree_addbodies
               (longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 in_ZMM6 [64];
  undefined4 uVar7;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar4 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (uVar4 == 0) {
LAB_14038a235:
    auVar12 = in_ZMM6._0_16_;
    pauVar10 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar11 = *(uint *)(uVar4 + 0x200020);
    if (0xffff < (ulonglong)uVar11) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        uVar4 = (*(code *)PTR_vfunction4_1414f67c8)
                          ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      goto LAB_14038a235;
    }
    *(uint *)(uVar4 + 0x200020) = uVar11 + 1;
    pauVar10 = (undefined1 (*) [16])(uVar4 + (ulonglong)uVar11 * 0x20 + 0x20);
    uVar8 = rdtsc();
    uVar4 = CONCAT44((int)(uVar4 >> 0x20),(int)uVar8);
    uVar8 = uVar8 & 0xffffffff00000000 | uVar4;
    in_ZMM6 = ZEXT864(uVar8);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar8;
  }
  uVar7 = (undefined4)(uVar4 >> 0x20);
  if (0 < param_3) {
    auVar12 = in_ZMM6._0_16_;
    if (*(int *)(param_1 + 0x110) == 0) {
      if (param_4 == 0) goto LAB_14038a2e5;
    }
    else {
      uVar11 = 0;
      do {
        uVar11 = uVar11 & 0xff;
        if (*(longlong *)(param_4 + (ulonglong)(uVar11 << 6)) != 0) {
          puVar9 = (undefined8 *)((ulonglong)(uVar11 << 6) + param_4);
          FUN_1405d39e0((ulonglong)(uVar11 << 7) + *(longlong *)(param_1 + 0x108),param_1 + 0x18,
                        puVar9 + 2);
          puVar5 = (uint *)*puVar9;
          if (puVar5 < (uint *)puVar9[1]) {
            do {
              uVar1 = *puVar5;
              lVar2 = *(longlong *)(param_1 + 0x28);
              LOCK();
              *(undefined1 *)(lVar2 + (ulonglong)(uVar1 & 0x7fffff) * 8) = 0xff;
              UNLOCK();
              LOCK();
              *(undefined2 *)(lVar2 + 2 + (ulonglong)(uVar1 & 0x7fffff) * 8) = 0xffff;
              UNLOCK();
              puVar5 = puVar5 + 1;
            } while (puVar5 < (uint *)puVar9[1]);
          }
        }
        uVar11 = uVar11 + 1;
      } while ((uVar11 & 0xff) < *(uint *)(param_1 + 0x110));
    }
    uVar6 = (*DAT_14151f538)(param_4);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    auVar12 = in_ZMM6._0_16_;
  }
LAB_14038a2e5:
  if (pauVar10 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar3 = vpinsrq_avx(auVar12,uVar4 & 0xffffffff00000000 | CONCAT44(uVar7,(int)uVar4),1);
    auVar12 = vmovntdq_avx(SUB6416(ZEXT864(0x141397242),0));
    *pauVar10 = auVar12;
    auVar12 = vmovntdq_avx(auVar3);
    pauVar10[1] = auVar12;
  }
  return;
}


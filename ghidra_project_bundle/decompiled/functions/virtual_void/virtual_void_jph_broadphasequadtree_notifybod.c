/**
 * Function: virtual_void_jph_broadphasequadtree_notifybod
 * Address:  14038ad50
 * Signature: undefined virtual_void_jph_broadphasequadtree_notifybod(void)
 * Body size: 396 bytes
 */


void virtual_void_jph_broadphasequadtree_notifybod(longlong param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  uint *puVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 auVar10 [16];
  undefined1 in_ZMM6 [64];
  
  uVar8 = (ulonglong)param_3;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  puVar5 = *(uint **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x170);
  if (puVar5 != (uint *)0x0) {
    uVar1 = puVar5[0x80008];
    if ((ulonglong)uVar1 < 0x10000) {
      puVar5[0x80008] = uVar1 + 1;
      pauVar9 = (undefined1 (*) [16])(puVar5 + (ulonglong)uVar1 * 8 + 8);
      uVar6 = rdtsc();
      puVar5 = (uint *)CONCAT44((int)((ulonglong)puVar5 >> 0x20),(int)uVar6);
      uVar6 = uVar6 & 0xffffffff00000000 | (ulonglong)puVar5;
      in_ZMM6 = ZEXT864(uVar6);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar6;
      goto joined_r0x00014038ae05;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      puVar5 = (uint *)(*(code *)PTR_vfunction4_1414f67c8)
                                 ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  auVar10 = in_ZMM6._0_16_;
  pauVar9 = (undefined1 (*) [16])0x0;
joined_r0x00014038ae05:
  if (0 < (int)param_3) {
    auVar10 = in_ZMM6._0_16_;
    puVar5 = param_2 + (uVar8 - 1);
    lVar2 = *(longlong *)(param_1 + 8);
    do {
      uVar6 = (ulonglong)((*puVar5 & 0x7fffff) * 8);
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + uVar6);
      if (*(char *)(*(longlong *)(param_1 + 0x28) + uVar6) == *(char *)(lVar3 + 0x77)) {
        LOCK();
        *(undefined2 *)(*(longlong *)(param_1 + 0x28) + 2 + (ulonglong)(*puVar5 & 0x7fffff) * 8) =
             *(undefined2 *)(lVar3 + 0x74);
        UNLOCK();
        iVar7 = (int)uVar8;
        uVar1 = *puVar5;
        *puVar5 = param_2[(longlong)iVar7 + -1];
        param_2[(longlong)iVar7 + -1] = uVar1;
        uVar8 = (ulonglong)(iVar7 - 1);
      }
      puVar5 = puVar5 + -1;
    } while (param_2 <= puVar5);
    if (0 < (int)uVar8) {
      virtual_void_jph_broadphasequadtree_removebod(param_1,param_2,uVar8);
      virtual_broadphase_addstate_jph_broadphasequa(param_1,param_2,uVar8);
      puVar5 = (uint *)virtual_void_jph_broadphasequadtree_addbodies(param_1);
      auVar10 = in_ZMM6._0_16_;
    }
  }
  if (pauVar9 != (undefined1 (*) [16])0x0) {
    uVar8 = rdtsc();
    auVar4 = vpinsrq_avx(auVar10,uVar8 & 0xffffffff00000000 |
                                 CONCAT44((int)((ulonglong)puVar5 >> 0x20),(int)uVar8),1);
    auVar10 = vmovntdq_avx(SUB6416(ZEXT864(0x141395907),0));
    *pauVar9 = auVar10;
    auVar10 = vmovntdq_avx(auVar4);
    pauVar9[1] = auVar10;
  }
  return;
}


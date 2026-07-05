/**
 * Function: virtual_broadphase_addstate_jph_broadphasequa
 * Address:  1403896d0
 * Signature: undefined virtual_broadphase_addstate_jph_broadphasequa(void)
 * Body size: 692 bytes
 */


undefined8 *
virtual_broadphase_addstate_jph_broadphasequa(longlong param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined4 uVar10;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 (*pauVar11) [16];
  ulonglong uVar12;
  uint *puVar13;
  undefined1 auVar14 [16];
  undefined1 in_ZMM6 [64];
  undefined8 *local_70;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar9 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (uVar9 != 0) {
    uVar3 = *(uint *)(uVar9 + 0x200020);
    if ((ulonglong)uVar3 < 0x10000) {
      *(uint *)(uVar9 + 0x200020) = uVar3 + 1;
      pauVar11 = (undefined1 (*) [16])((ulonglong)uVar3 * 0x20 + uVar9 + 0x20);
      uVar12 = rdtsc();
      uVar9 = CONCAT44((int)(uVar9 >> 0x20),(int)uVar12);
      uVar12 = uVar12 & 0xffffffff00000000 | uVar9;
      in_ZMM6 = ZEXT864(uVar12);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar12;
      goto joined_r0x00014038979c;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      uVar9 = (*(code *)PTR_vfunction4_1414f67c8)();
    }
  }
  auVar14 = in_ZMM6._0_16_;
  pauVar11 = (undefined1 (*) [16])0x0;
joined_r0x00014038979c:
  if ((int)param_3 < 1) {
    uVar10 = (undefined4)(uVar9 >> 0x20);
    local_70 = (undefined8 *)0x0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 8);
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x110);
    local_70 = (undefined8 *)(*DAT_14151f528)(uVar9 * 0x40);
    if (uVar9 != 0) {
      puVar8 = local_70;
      do {
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 2) = 0xffffffff;
        *(undefined4 *)(puVar8 + 4) = 0x7f7fffff;
        *(undefined4 *)((longlong)puVar8 + 0x24) = 0x7f7fffff;
        *(undefined4 *)(puVar8 + 5) = 0x7f7fffff;
        *(undefined4 *)((longlong)puVar8 + 0x2c) = 0x7f7fffff;
        *(undefined4 *)(puVar8 + 6) = 0xff7fffff;
        *(undefined4 *)((longlong)puVar8 + 0x34) = 0xff7fffff;
        *(undefined4 *)(puVar8 + 7) = 0xff7fffff;
        *(undefined4 *)((longlong)puVar8 + 0x3c) = 0xff7fffff;
        puVar8 = puVar8 + 8;
      } while (puVar8 != local_70 + uVar9 * 8);
    }
    lVar5 = *(longlong *)(lVar4 + 0x10);
    puVar1 = param_2 + param_3;
    FUN_1403899a0(param_2,puVar1,lVar5);
    do {
      bVar2 = *(byte *)(*(longlong *)
                         (*(longlong *)(lVar4 + 0x10) + (ulonglong)(*param_2 & 0x7fffff) * 8) + 0x77
                       );
      uVar9 = (longlong)puVar1 - (longlong)param_2 >> 2;
      puVar13 = param_2;
      while (uVar12 = uVar9, 0 < (longlong)uVar12) {
        uVar9 = uVar12 >> 1;
        if (*(byte *)(*(longlong *)(lVar5 + (ulonglong)(puVar13[uVar9] & 0x7fffff) * 8) + 0x77) <=
            bVar2) {
          puVar13 = puVar13 + uVar9 + 1;
          uVar9 = ~uVar9 + uVar12;
        }
      }
      uVar9 = (ulonglong)bVar2;
      local_70[uVar9 * 8] = param_2;
      local_70[uVar9 * 8 + 1] = puVar13;
      uVar9 = FUN_1405d35b0((ulonglong)bVar2 * 0x80 + *(longlong *)(param_1 + 0x108),lVar4,
                            param_1 + 0x18,param_2,
                            (int)((ulonglong)((longlong)puVar13 - (longlong)param_2) >> 2),
                            local_70 + uVar9 * 8 + 2);
      auVar14 = in_ZMM6._0_16_;
      for (; param_2 < puVar13; param_2 = param_2 + 1) {
        lVar6 = *(longlong *)(param_1 + 0x28);
        uVar9 = (ulonglong)((*param_2 & 0x7fffff) << 3);
        LOCK();
        *(byte *)(lVar6 + uVar9) = bVar2;
        UNLOCK();
        LOCK();
        *(undefined2 *)(lVar6 + 2 + uVar9) =
             *(undefined2 *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar9) + 0x74);
        UNLOCK();
      }
      uVar10 = (undefined4)(uVar9 >> 0x20);
      param_2 = puVar13;
    } while (puVar13 < puVar1);
  }
  if (pauVar11 != (undefined1 (*) [16])0x0) {
    uVar9 = rdtsc();
    auVar7 = vpinsrq_avx(auVar14,uVar9 & 0xffffffff00000000 | CONCAT44(uVar10,(int)uVar9),1);
    auVar14 = vmovntdq_avx(SUB6416(ZEXT864(0x1413958b1),0));
    *pauVar11 = auVar14;
    auVar14 = vmovntdq_avx(auVar7);
    pauVar11[1] = auVar14;
  }
  return local_70;
}


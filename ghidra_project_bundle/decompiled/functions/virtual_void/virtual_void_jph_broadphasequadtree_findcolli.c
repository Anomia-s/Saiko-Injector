/**
 * Function: virtual_void_jph_broadphasequadtree_findcolli
 * Address:  14038c6a0
 * Signature: undefined virtual_void_jph_broadphasequadtree_findcolli(void)
 * Body size: 933 bytes
 */


void virtual_void_jph_broadphasequadtree_findcolli
               (longlong param_1,uint *param_2,int param_3,undefined4 param_4,longlong *param_5,
               undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  uint *puVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  char cVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 uVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong lVar15;
  uint *puVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar21 [64];
  undefined1 in_ZMM9 [64];
  undefined1 (*local_c0) [16];
  uint uVar14;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar5 = *(longlong *)(lVar15 + 0x170);
  if (lVar5 != 0) {
    uVar14 = *(uint *)(lVar5 + 0x200020);
    if ((ulonglong)uVar14 < 0x10000) {
      *(uint *)(lVar5 + 0x200020) = uVar14 + 1;
      local_c0 = (undefined1 (*) [16])(lVar5 + (ulonglong)uVar14 * 0x20 + 0x20);
      uVar12 = rdtsc();
      in_ZMM7 = ZEXT864(uVar12 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)local_c0 >> 0x20),(int)uVar12));
      goto LAB_14038c77f;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  local_c0 = (undefined1 (*) [16])0x0;
LAB_14038c77f:
  uVar6 = *(undefined8 *)(param_1 + 8);
  lVar5 = *(longlong *)(param_1 + 0x28);
  puVar2 = param_2 + param_3;
  FUN_14038ca70(param_2,puVar2,lVar5);
  auVar18 = in_ZMM7._0_16_;
  uVar11 = extraout_var;
  if (0 < param_3) {
    plVar1 = (longlong *)(lVar15 + 0x170);
    auVar21 = ZEXT1664((undefined1  [16])0x0);
    do {
      uVar3 = *(ushort *)(lVar5 + 2 + (ulonglong)(*param_2 & 0x7fffff) * 8);
      uVar12 = (longlong)puVar2 - (longlong)param_2 >> 2;
      puVar16 = param_2;
      while (uVar7 = uVar12, 0 < (longlong)uVar7) {
        uVar12 = uVar7 >> 1;
        if (*(ushort *)(lVar5 + 2 + (ulonglong)(puVar16[uVar12] & 0x7fffff) * 8) <= uVar3) {
          puVar16 = puVar16 + uVar12 + 1;
          uVar12 = ~uVar12 + uVar7;
        }
      }
      uVar11 = (undefined4)(uVar7 >> 0x20);
      if (*(int *)(param_1 + 0x110) != 0) {
        uVar12 = (ulonglong)((longlong)puVar16 - (longlong)param_2) >> 2;
        uVar14 = 0;
        do {
          lVar15 = *(longlong *)(param_1 + 0x108);
          if ((*(int *)(lVar15 + 0x40 + (ulonglong)(uVar14 << 7)) != 0) &&
             (cVar10 = (**(code **)(*param_5 + 8))(param_5,uVar3,uVar14), cVar10 != '\0')) {
            lVar15 = lVar15 + (ulonglong)(uVar14 << 7);
            uVar7 = *(ulonglong *)(lVar15 + 0x58);
            if (*(char *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x169
                         ) == '\0') {
              __dyn_tls_on_demand_init();
              lVar8 = *plVar1;
            }
            else {
              lVar8 = *plVar1;
            }
            if (lVar8 != 0) {
              uVar4 = *(uint *)(lVar8 + 0x200020);
              if ((ulonglong)uVar4 < 0x10000) {
                *(uint *)(lVar8 + 0x200020) = uVar4 + 1;
                lVar17 = (ulonglong)uVar4 * 0x20;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = uVar7;
                auVar18 = vpblendw_avx(auVar18,in_ZMM9._0_16_,0xf0);
                auVar18 = vpblendw_avx(auVar18,auVar21._0_16_,0x30);
                in_ZMM9 = ZEXT1664(auVar18);
                uVar7 = rdtsc();
                FUN_1405d7440(lVar15,uVar6,param_2,uVar12,param_4,param_7,param_6);
                uVar9 = rdtsc();
                auVar19._8_8_ = 0;
                auVar19._0_8_ = uVar7;
                auVar20._8_8_ = 0;
                auVar20._0_8_ = uVar9 & 0xffffffff00000000 | CONCAT44(extraout_var_00,(int)uVar9);
                auVar19 = vpunpcklqdq_avx(auVar19,auVar20);
                auVar18 = vmovntdq_avx(in_ZMM9._0_16_);
                *(undefined1 (*) [16])(lVar8 + 0x20 + lVar17) = auVar18;
                auVar18 = vmovntdq_avx(auVar19);
                *(undefined1 (*) [16])(lVar8 + 0x30 + lVar17) = auVar18;
                goto LAB_14038c8b7;
              }
              if (DAT_14151fc10 == '\0') {
                DAT_14151fc10 = '\x01';
                (*(code *)PTR_vfunction4_1414f67c8)
                          ("ProfileMeasurement: Too many samples, some data will be lost!");
              }
            }
            FUN_1405d7440(lVar15,uVar6,param_2,uVar12,param_4,param_7,param_6);
          }
LAB_14038c8b7:
          bVar13 = (char)uVar14 + 1;
          uVar14 = (uint)bVar13;
          uVar11 = 0;
        } while ((uint)bVar13 < *(uint *)(param_1 + 0x110));
      }
      auVar18 = in_ZMM7._0_16_;
      param_2 = puVar16;
    } while (puVar16 < puVar2);
  }
  if (local_c0 != (undefined1 (*) [16])0x0) {
    uVar12 = rdtsc();
    auVar19 = vpinsrq_avx(auVar18,uVar12 & 0xffffffff00000000 | CONCAT44(uVar11,(int)uVar12),1);
    auVar18 = vmovntdq_avx(SUB6416(ZEXT864(0x14132ba61),0));
    *local_c0 = auVar18;
    auVar18 = vmovntdq_avx(auVar19);
    local_c0[1] = auVar18;
  }
  return;
}


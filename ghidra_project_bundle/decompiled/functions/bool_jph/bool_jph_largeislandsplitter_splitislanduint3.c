/**
 * Function: bool_jph_largeislandsplitter_splitislanduint3
 * Address:  140373530
 * Signature: undefined bool_jph_largeislandsplitter_splitislanduint3(void)
 * Body size: 2199 bytes
 */


bool bool_jph_largeislandsplitter_splitislanduint3
               (longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
               longlong param_5,longlong param_6,longlong *param_7)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  undefined8 uVar10;
  byte bVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 uVar19;
  uint *puVar20;
  undefined1 (*pauVar21) [16];
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  uint *puVar25;
  ulonglong uVar26;
  undefined1 auVar27 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auStack_488 [36];
  uint local_464;
  ulonglong local_460;
  uint *local_458;
  undefined4 local_44c;
  longlong local_448;
  ulonglong local_440;
  uint *local_438;
  undefined1 (*local_430) [16];
  ulonglong local_428;
  ulonglong local_420;
  uint *local_418;
  uint *local_410;
  uint *local_408;
  uint *local_400;
  uint *local_3f8;
  uint *local_3f0;
  longlong alStack_3e8 [31];
  longlong local_2f0;
  longlong alStack_2e8 [31];
  longlong local_1f0;
  uint auStack_1e8 [31];
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulonglong local_60;
  undefined1 local_58 [16];
  
  local_58 = in_ZMM6._0_16_;
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_488;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar12 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (lVar12 != 0) {
    uVar4 = *(uint *)(lVar12 + 0x200020);
    if ((ulonglong)uVar4 < 0x10000) {
      *(uint *)(lVar12 + 0x200020) = uVar4 + 1;
      pauVar21 = (undefined1 (*) [16])(lVar12 + (ulonglong)uVar4 * 0x20 + 0x20);
      uVar26 = rdtsc();
      in_ZMM6 = ZEXT864(uVar26 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar12 >> 0x20),(int)uVar26));
      goto LAB_1403735fc;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar21 = (undefined1 (*) [16])0x0;
LAB_1403735fc:
  FUN_140375370(param_3,param_2,&local_3f0,&local_3f8);
  local_420 = (longlong)local_3f8 - (longlong)local_3f0;
  uVar26 = local_420 >> 2;
  lVar12 = FUN_140375310(param_3,param_2,&local_400,&local_408);
  auVar27 = in_ZMM6._0_16_;
  local_428 = (longlong)local_408 - (longlong)local_400;
  uVar4 = (uint)uVar26;
  uVar9 = (uint)(local_428 >> 2);
  uVar13 = uVar4 + uVar9;
  if (0x7f < uVar13) {
    local_464 = uVar13;
    local_44c = param_2;
    FUN_1403752d0(param_3,param_2,&local_410,&local_418);
    auVar27 = in_ZMM6._0_16_;
    if (local_410 < local_418) {
      lVar12 = *(longlong *)(param_4 + 0x10);
      do {
        lVar15 = *(longlong *)
                  (*(longlong *)(lVar12 + (ulonglong)(*local_410 & 0x7fffff) * 8) + 0x48);
        if (lVar15 == 0) {
          uVar23 = 0xffffffff;
        }
        else {
          uVar23 = (ulonglong)*(uint *)(lVar15 + 0x70);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 8) + uVar23 * 4) = 0;
        local_410 = local_410 + 1;
      } while (local_410 < local_418);
    }
    local_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    local_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    local_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    local_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    LOCK();
    puVar20 = (uint *)(param_1 + 0x24);
    local_460 = (ulonglong)*puVar20;
    *puVar20 = *puVar20 + local_464;
    UNLOCK();
    local_448 = *(longlong *)(param_1 + 0x10);
    local_458 = (uint *)(local_448 + local_460 * 4);
    local_440 = uVar26 & 0xffffffff;
    puVar20 = local_458;
    for (puVar25 = local_3f0; puVar25 < local_3f8; puVar25 = puVar25 + 1) {
      lVar12 = *(longlong *)(*(longlong *)(param_5 + 0xa8) + (ulonglong)*puVar25);
      uVar24 = 0xffffffff;
      uVar13 = 0xffffffff;
      if (*(longlong *)(lVar12 + 0x48) != 0) {
        uVar13 = *(uint *)(*(longlong *)(lVar12 + 0x48) + 0x70);
      }
      lVar15 = *(longlong *)(*(longlong *)(param_5 + 0xa8) + 8 + (ulonglong)*puVar25);
      if (*(longlong *)(lVar15 + 0x48) != 0) {
        uVar24 = *(uint *)(*(longlong *)(lVar15 + 0x48) + 0x70);
      }
      if ((uVar13 == 0xffffffff) || (*(char *)(lVar12 + 0x78) != '\x02')) {
        uVar13 = *(uint *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar24 * 4);
        uVar17 = 0;
        for (uVar14 = ~uVar13; (uVar14 & 1) == 0; uVar14 = (uVar14 | 0x80000000) >> 1) {
          uVar17 = uVar17 + 1;
        }
        *(uint *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar24 * 4) =
             uVar13 | 1 << (uVar17 & 0x1f);
      }
      else {
        uVar26 = (ulonglong)uVar13;
        if ((uVar24 == 0xffffffff) || (*(char *)(lVar15 + 0x78) != '\x02')) {
          uVar13 = *(uint *)(*(longlong *)(param_1 + 8) + uVar26 * 4);
          uVar17 = 0;
          for (uVar24 = ~uVar13; (uVar24 & 1) == 0; uVar24 = (uVar24 | 0x80000000) >> 1) {
            uVar17 = uVar17 + 1;
          }
          *(uint *)(*(longlong *)(param_1 + 8) + uVar26 * 4) = uVar13 | 1 << (uVar17 & 0x1f);
        }
        else {
          lVar18 = *(longlong *)(param_1 + 8);
          uVar13 = *(uint *)(lVar18 + uVar26 * 4);
          uVar17 = 0;
          for (uVar14 = ~(*(uint *)(lVar18 + (ulonglong)uVar24 * 4) | uVar13); (uVar14 & 1) == 0;
              uVar14 = (uVar14 | 0x80000000) >> 1) {
            uVar17 = uVar17 + 1;
          }
          *(uint *)(lVar18 + uVar26 * 4) = uVar13 | 1 << (uVar17 & 0x1f);
          puVar1 = (uint *)(lVar18 + (ulonglong)uVar24 * 4);
          *puVar1 = *puVar1 | 1 << ((byte)uVar17 & 0x1f);
        }
      }
      piVar2 = (int *)((longlong)&local_e8 + (ulonglong)uVar17 * 4);
      *piVar2 = *piVar2 + 1;
      *puVar20 = uVar17;
      if (*(char *)(lVar12 + 0x78) == '\x02') {
        lVar12 = *(longlong *)(lVar12 + 0x48);
        bVar11 = *(byte *)(lVar12 + 0x7b);
        uVar13 = (uint)bVar11;
        if ((uint)bVar11 < *(uint *)(param_7 + 1)) {
          uVar13 = *(uint *)(param_7 + 1);
        }
        *(uint *)(param_7 + 1) = uVar13;
        *(byte *)(param_7 + 2) = *(byte *)(param_7 + 2) | bVar11 == 0;
        bVar11 = *(byte *)(lVar12 + 0x7c);
        uVar13 = (uint)bVar11;
        if ((uint)bVar11 < *(uint *)((longlong)param_7 + 0xc)) {
          uVar13 = *(uint *)((longlong)param_7 + 0xc);
        }
        *(uint *)((longlong)param_7 + 0xc) = uVar13;
        *(byte *)((longlong)param_7 + 0x11) = *(byte *)((longlong)param_7 + 0x11) | bVar11 == 0;
      }
      if (*(char *)(lVar15 + 0x78) == '\x02') {
        lVar12 = *(longlong *)(lVar15 + 0x48);
        bVar11 = *(byte *)(lVar12 + 0x7b);
        uVar13 = (uint)bVar11;
        if ((uint)bVar11 < *(uint *)(param_7 + 1)) {
          uVar13 = *(uint *)(param_7 + 1);
        }
        *(uint *)(param_7 + 1) = uVar13;
        *(byte *)(param_7 + 2) = *(byte *)(param_7 + 2) | bVar11 == 0;
        bVar11 = *(byte *)(lVar12 + 0x7c);
        uVar13 = (uint)bVar11;
        if ((uint)bVar11 < *(uint *)((longlong)param_7 + 0xc)) {
          uVar13 = *(uint *)((longlong)param_7 + 0xc);
        }
        *(uint *)((longlong)param_7 + 0xc) = uVar13;
        *(byte *)((longlong)param_7 + 0x11) = *(byte *)((longlong)param_7 + 0x11) | bVar11 == 0;
      }
      puVar20 = puVar20 + 1;
    }
    puVar20 = local_458 + local_440;
    puVar25 = local_400;
    local_438 = puVar20;
    local_430 = pauVar21;
    if (local_400 < local_408) {
      do {
        plVar7 = *(longlong **)(param_6 + (ulonglong)*puVar25 * 8);
        in_ZMM6 = ZEXT1664(in_ZMM6._0_16_);
        uVar13 = (**(code **)(*plVar7 + 0x58))(plVar7,param_1);
        auVar27 = in_ZMM6._0_16_;
        piVar2 = (int *)((longlong)&local_168 + (ulonglong)uVar13 * 4);
        *piVar2 = *piVar2 + 1;
        *puVar20 = uVar13;
        puVar20 = puVar20 + 1;
        bVar11 = *(byte *)(plVar7 + 3);
        uVar13 = (uint)bVar11;
        if ((uint)bVar11 < *(uint *)(param_7 + 1)) {
          uVar13 = *(uint *)(param_7 + 1);
        }
        *(uint *)(param_7 + 1) = uVar13;
        bVar11 = bVar11 == 0 | *(byte *)(param_7 + 2);
        *(byte *)(param_7 + 2) = bVar11;
        bVar3 = *(byte *)((longlong)plVar7 + 0x19);
        uVar13 = (uint)bVar3;
        if ((uint)bVar3 < *(uint *)((longlong)param_7 + 0xc)) {
          uVar13 = *(uint *)((longlong)param_7 + 0xc);
        }
        *(uint *)((longlong)param_7 + 0xc) = uVar13;
        *(byte *)((longlong)param_7 + 0x11) = *(byte *)((longlong)param_7 + 0x11) | bVar3 == 0;
        puVar25 = puVar25 + 1;
        pauVar21 = local_430;
        uVar19 = uStack_f0;
        uVar13 = local_464;
        uVar10 = uStack_70;
      } while (puVar25 < local_408);
    }
    else {
      bVar11 = *(byte *)(param_7 + 2);
      uVar19 = uStack_f0;
      uVar13 = local_464;
      uVar10 = uStack_70;
    }
    if (bVar11 != 0) {
      uVar24 = *(uint *)(*param_7 + 0x3c);
      if (*(uint *)(*param_7 + 0x3c) < *(uint *)(param_7 + 1)) {
        uVar24 = *(uint *)(param_7 + 1);
      }
      *(uint *)(param_7 + 1) = uVar24;
    }
    if (*(char *)((longlong)param_7 + 0x11) == '\x01') {
      uVar24 = *(uint *)(*param_7 + 0x40);
      if (*(uint *)(*param_7 + 0x40) < *(uint *)((longlong)param_7 + 0xc)) {
        uVar24 = *(uint *)((longlong)param_7 + 0xc);
      }
      *(uint *)((longlong)param_7 + 0xc) = uVar24;
    }
    LOCK();
    puVar20 = (uint *)(param_1 + 0x38);
    uVar24 = *puVar20;
    *puVar20 = *puVar20 + 1;
    UNLOCK();
    lVar15 = *(longlong *)(param_1 + 0x30);
    lVar18 = (ulonglong)uVar24 * 0x228;
    lVar12 = lVar15 + lVar18;
    *(undefined4 *)(lVar15 + 0x200 + lVar18) = local_44c;
    *(undefined4 *)(lVar15 + 0x204 + lVar18) = 0;
    *(int *)(lVar15 + 0x208 + lVar18) = (int)param_7[1] + 1;
    *(int *)(lVar15 + 0x20c + lVar18) = (int)param_7[1];
    *(undefined4 *)(lVar15 + 0x210 + lVar18) = *(undefined4 *)((longlong)param_7 + 0xc);
    *(undefined4 *)(lVar15 + 0x220 + lVar18) = 0;
    uStack_70._4_4_ = (int)((ulonglong)uVar10 >> 0x20);
    lVar15 = 0;
    uStack_f0._4_4_ = (int)((ulonglong)uVar19 >> 0x20);
    uVar26 = local_460;
    iVar16 = uStack_70._4_4_;
    iVar22 = uStack_f0._4_4_;
    uStack_f0 = uVar19;
    uStack_70 = uVar10;
    do {
      while( true ) {
        uVar24 = (uint)uVar26;
        iVar5 = *(int *)((longlong)&local_168 + lVar15 * 4);
        iVar6 = *(int *)((longlong)&local_e8 + lVar15 * 4);
        if (0x1f < (uint)(iVar6 + iVar5)) break;
        auStack_1e8[lVar15] = 0x1f;
        iVar16 = iVar16 + iVar6;
        uStack_70 = CONCAT44(iVar16,(undefined4)uStack_70);
        iVar22 = iVar22 + iVar5;
        uStack_f0 = CONCAT44(iVar22,(undefined4)uStack_f0);
        lVar15 = lVar15 + 1;
        if (lVar15 == 0x1f) goto LAB_140373b13;
      }
      uVar17 = *(uint *)(lVar12 + 0x204);
      uVar23 = (ulonglong)uVar17;
      *(uint *)(lVar12 + 0x204) = uVar17 + 1;
      lVar18 = uVar23 * 0x10;
      auStack_1e8[lVar15] = uVar17;
      *(uint *)(lVar12 + lVar18) = uVar24;
      uVar17 = iVar6 + uVar24;
      *(uint *)(lVar12 + 4 + lVar18) = uVar17;
      *(uint *)(lVar12 + 8 + lVar18) = uVar17;
      uVar24 = iVar5 + uVar17;
      *(uint *)(lVar12 + 0xc + lVar18) = uVar24;
      lVar18 = *(longlong *)(param_1 + 0x18);
      alStack_3e8[uVar23] = lVar18 + (uVar26 & 0xffffffff) * 4;
      alStack_2e8[uVar23] = lVar18 + (ulonglong)uVar17 * 4;
      uVar26 = (ulonglong)uVar24;
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0x1f);
LAB_140373b13:
    local_16c = 0x1f;
    *(uint *)(lVar12 + 0x1f0) = uVar24;
    uVar17 = iVar16 + uVar24;
    *(uint *)(lVar12 + 500) = uVar17;
    *(uint *)(lVar12 + 0x1f8) = uVar17;
    *(uint *)(lVar12 + 0x1fc) = iVar22 + uVar17;
    local_2f0 = *(longlong *)(param_1 + 0x18) + (ulonglong)uVar24 * 4;
    local_1f0 = *(longlong *)(param_1 + 0x18) + (ulonglong)uVar17 * 4;
    if (uVar4 != 0) {
      if ((local_420 & 0x3fffffffc) == 4) {
        uVar26 = 0;
      }
      else {
        lVar15 = local_448 + local_460 * 4;
        uVar26 = 0;
        do {
          uVar24 = local_3f0[uVar26];
          puVar20 = (uint *)alStack_3e8[auStack_1e8[*(uint *)(lVar15 + uVar26 * 4)]];
          alStack_3e8[auStack_1e8[*(uint *)(lVar15 + uVar26 * 4)]] = (longlong)(puVar20 + 1);
          *puVar20 = uVar24;
          uVar24 = local_3f0[uVar26 + 1];
          puVar20 = (uint *)alStack_3e8[auStack_1e8[*(uint *)(lVar15 + 4 + uVar26 * 4)]];
          alStack_3e8[auStack_1e8[*(uint *)(lVar15 + 4 + uVar26 * 4)]] = (longlong)(puVar20 + 1);
          *puVar20 = uVar24;
          uVar26 = uVar26 + 2;
        } while ((uVar4 & 0xfffffffe) != uVar26);
      }
      if ((local_420 & 4) != 0) {
        uVar4 = local_3f0[uVar26];
        puVar20 = (uint *)alStack_3e8[auStack_1e8[local_458[uVar26]]];
        alStack_3e8[auStack_1e8[local_458[uVar26]]] = (longlong)(puVar20 + 1);
        *puVar20 = uVar4;
      }
    }
    if (uVar9 != 0) {
      if ((local_428 & 0x3fffffffc) == 4) {
        uVar26 = 0;
      }
      else {
        lVar15 = local_448 + local_440 * 4 + local_460 * 4;
        uVar26 = 0;
        do {
          uVar4 = local_400[uVar26];
          puVar20 = (uint *)alStack_2e8[auStack_1e8[*(uint *)(lVar15 + uVar26 * 4)]];
          alStack_2e8[auStack_1e8[*(uint *)(lVar15 + uVar26 * 4)]] = (longlong)(puVar20 + 1);
          *puVar20 = uVar4;
          uVar4 = local_400[uVar26 + 1];
          puVar20 = (uint *)alStack_2e8[auStack_1e8[*(uint *)(lVar15 + 4 + uVar26 * 4)]];
          alStack_2e8[auStack_1e8[*(uint *)(lVar15 + 4 + uVar26 * 4)]] = (longlong)(puVar20 + 1);
          *puVar20 = uVar4;
          uVar26 = uVar26 + 2;
        } while ((uVar9 & 0xfffffffe) != uVar26);
      }
      if ((local_428 & 4) != 0) {
        uVar4 = local_400[uVar26];
        puVar20 = (uint *)alStack_2e8[auStack_1e8[local_438[uVar26]]];
        alStack_2e8[auStack_1e8[local_438[uVar26]]] = (longlong)(puVar20 + 1);
        *puVar20 = uVar4;
      }
    }
    uVar19 = 0x1f00000000;
    if (*(int *)(lVar12 + 0x204) != 0) {
      uVar19 = 0;
    }
    *(undefined8 *)(lVar12 + 0x218) = uVar19;
    local_464 = uVar13;
    local_430 = pauVar21;
  }
  if (pauVar21 != (undefined1 (*) [16])0x0) {
    uVar26 = rdtsc();
    auVar8 = vpinsrq_avx(auVar27,uVar26 & 0xffffffff00000000 |
                                 CONCAT44((int)((ulonglong)lVar12 >> 0x20),(int)uVar26),1);
    auVar27 = vmovntdq_avx(SUB6416(ZEXT864(0x14139a79c),0));
    *pauVar21 = auVar27;
    auVar27 = vmovntdq_avx(auVar8);
    pauVar21[1] = auVar27;
  }
  if (DAT_1414ef3c0 != (local_60 ^ (ulonglong)auStack_488)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_60 ^ (ulonglong)auStack_488);
  }
  return 0x7f < uVar13;
}


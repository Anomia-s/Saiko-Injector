/**
 * Function: fast_partszu_genericzu
 * Address:  1402054b0
 * Signature: undefined fast_partszu_genericzu(void)
 * Body size: 1496 bytes
 */


void fast_partszu_genericzu(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  void *_Dst;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *_Dst_00;
  ulonglong local_168 [2];
  undefined2 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined1 local_c4;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  byte local_80 [8];
  longlong local_78;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  lVar8 = FUN_1401a9cc0();
  local_80[0] = *(byte *)(lVar8 + 0x288) & 1;
  local_78 = 0;
  if (local_80[0] != 0) {
    lVar8 = FUN_1401a9cc0();
    local_78 = *(longlong *)(lVar8 + 0x290);
    lVar9 = FUN_1401a9e60();
    uVar13 = *(ulonglong *)(lVar9 + 0x28);
    lVar8 = lVar9;
    if ((uVar13 & 0xffff) == 0) {
      lVar8 = FUN_1400637c0(lVar9,uVar13);
    }
    lVar10 = *(longlong *)(lVar9 + 0x48);
    uVar14 = (ulonglong)(uint)((int)(uVar13 & 0xffff) << 5);
    *(undefined1 *)(lVar10 + uVar14) = 0xf;
    uVar2 = rdtsc();
    *(ulonglong *)(lVar10 + 1 + uVar14) =
         uVar2 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar2);
    *(undefined ***)(lVar10 + 9 + uVar14) = &PTR_s_Scene_Bulk_Snapshot_Entities_140df3dd0;
    *(ulonglong *)(lVar9 + 0x28) = uVar13 + 1;
  }
  lVar8 = *param_3;
  if (lVar8 != param_3[1]) {
    param_3[1] = lVar8;
  }
  lVar9 = param_3[3];
  lVar10 = param_3[4];
  if (lVar9 != lVar10) {
    do {
      lVar8 = *(longlong *)(lVar9 + 0x10);
      if (lVar8 != 0) {
        uVar13 = *(longlong *)(lVar9 + 0x20) - lVar8;
        lVar11 = lVar8;
        if (0xfff < uVar13) {
          lVar11 = *(longlong *)(lVar8 + -8);
          if (0x1f < (ulonglong)((lVar8 + -8) - lVar11)) goto LAB_140205a7d;
          uVar13 = uVar13 + 0x27;
        }
        thunk_FUN_140b68ba8(lVar11,uVar13);
        *(undefined8 *)(lVar9 + 0x10) = 0;
        *(undefined8 *)(lVar9 + 0x18) = 0;
        *(undefined8 *)(lVar9 + 0x20) = 0;
      }
      lVar9 = lVar9 + 0x28;
    } while (lVar9 != lVar10);
    lVar8 = *param_3;
    param_3[4] = param_3[3];
  }
  lVar9 = *param_2;
  lVar10 = param_2[1];
  uVar13 = lVar10 - lVar9 >> 3;
  local_168[0] = uVar13;
  if ((ulonglong)((param_3[2] - lVar8 >> 3) * -0x30c30c30c30c30c3) < uVar13) {
    if (0x186186186186186 < uVar13) {
                    /* WARNING: Subroutine does not return */
      vector_too_long();
    }
    FUN_1402098f0(param_3,local_168);
    lVar9 = *param_2;
    lVar10 = param_2[1];
    uVar13 = lVar10 - lVar9 >> 3;
  }
  FUN_140209a00(lVar9,lVar10,uVar13);
  plVar1 = (longlong *)param_2[1];
  plVar15 = plVar1;
  if ((longlong *)*param_2 != plVar1) {
    plVar12 = (longlong *)*param_2 + 1;
    do {
      _Dst_00 = plVar12;
      if (_Dst_00 == plVar1) goto LAB_1402056f6;
      plVar12 = _Dst_00 + 1;
    } while (_Dst_00[-1] != *_Dst_00);
    plVar16 = _Dst_00 + -1;
    lVar8 = _Dst_00[-1];
    if (plVar12 != plVar1) {
      do {
        lVar9 = *plVar12;
        if (lVar8 != lVar9) {
          plVar16[1] = lVar9;
          plVar16 = plVar16 + 1;
        }
        plVar12 = plVar12 + 1;
        lVar8 = lVar9;
      } while (plVar12 != plVar1);
      _Dst_00 = plVar16 + 1;
      plVar15 = (longlong *)param_2[1];
    }
    if (_Dst_00 != plVar1) {
      memmove(_Dst_00,plVar1,(longlong)plVar15 - (longlong)plVar1);
      plVar15 = (longlong *)(((longlong)plVar15 - (longlong)plVar1) + (longlong)_Dst_00);
      param_2[1] = (longlong)plVar15;
    }
  }
LAB_1402056f6:
  local_b0 = param_3 + 3;
  param_2 = (longlong *)*param_2;
  local_b8 = plVar15;
  if (param_2 != plVar15) {
    do {
      while ((lVar8 = *param_2, lVar8 == 0 || (cVar7 = FUN_1400b8670(param_1,lVar8), cVar7 == '\0'))
            ) {
LAB_1402058e0:
        param_2 = param_2 + 1;
        if (param_2 == plVar15) goto LAB_140205721;
      }
      local_168[0] = 0;
      local_168[1] = 0;
      local_158 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_140 = 0;
      uStack_138 = 0;
      local_150 = 0;
      uStack_148 = 0;
      local_e0 = 0x3e99999a3f000000;
      local_d8 = 0x3f333333;
      local_d4 = 0;
      uStack_cc = 0;
      local_c4 = 0;
      cVar7 = FUN_140205bd0(param_1,lVar8,local_168);
      if (cVar7 == '\0') {
        uStack_90 = 0;
        lStack_88 = 0;
        lStack_a0 = 0;
        uStack_98 = 0;
        local_a8 = lVar8;
        lStack_a0 = FUN_1400bbfd0(param_1,lVar8,0x126);
        FUN_1402c92e0(param_1,lVar8);
        lVar8 = lStack_88;
        plVar1 = (longlong *)param_3[4];
        if (plVar1 == (longlong *)param_3[5]) {
          FUN_14020a290(local_b0);
        }
        else {
          *plVar1 = local_a8;
          plVar1[1] = lStack_a0;
          lStack_88 = 0;
          uVar3 = (undefined4)uStack_98;
          uVar4 = uStack_98._4_4_;
          uVar5 = (undefined4)uStack_90;
          uVar6 = uStack_90._4_4_;
          uStack_98 = 0;
          uStack_90 = 0;
          *(undefined4 *)(plVar1 + 2) = uVar3;
          *(undefined4 *)((longlong)plVar1 + 0x14) = uVar4;
          *(undefined4 *)(plVar1 + 3) = uVar5;
          *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar6;
          plVar1[4] = lVar8;
          param_3[4] = param_3[4] + 0x28;
        }
        plVar15 = local_b8;
        if (uStack_98 != 0) {
          uVar13 = lStack_88 - uStack_98;
          lVar8 = uStack_98;
          if (0xfff < uVar13) {
            lVar8 = *(longlong *)(uStack_98 + -8);
            if (0x1f < (ulonglong)((uStack_98 + -8) - lVar8)) {
LAB_140205a7d:
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
            uVar13 = uVar13 + 0x27;
          }
          thunk_FUN_140b68ba8(lVar8,uVar13);
        }
        goto LAB_1402058e0;
      }
      _Dst = (void *)param_3[1];
      if (_Dst == (void *)param_3[2]) {
        FUN_14020a0e0(param_3,_Dst,local_168);
        goto LAB_1402058e0;
      }
      memcpy(_Dst,local_168,0xa8);
      param_3[1] = param_3[1] + 0xa8;
      param_2 = param_2 + 1;
    } while (param_2 != plVar15);
  }
LAB_140205721:
  FUN_140206060(local_80,"fast_parts=%zu generic=%zu",
                (param_3[1] - *param_3 >> 3) * -0x30c30c30c30c30c3,
                (param_3[4] - param_3[3] >> 3) * -0x3333333333333333);
  lVar8 = param_3[1];
  lVar9 = *param_3;
  lVar10 = FUN_1401a9cc0();
  if ((*(byte *)(lVar10 + 0x288) & 1) != 0) {
    lVar10 = FUN_1401a9e60();
    uVar13 = *(ulonglong *)(lVar10 + 0x28);
    if ((uVar13 & 0xffff) == 0) {
      FUN_1400637c0(lVar10,uVar13);
    }
    lVar11 = *(longlong *)(lVar10 + 0x48);
    uVar14 = (ulonglong)(uint)((int)(uVar13 & 0xffff) << 5);
    *(undefined1 *)(lVar11 + uVar14) = 0x2d;
    *(char **)(lVar11 + 1 + uVar14) = "Scene Bulk Snapshot Fast Parts";
    uVar2 = rdtsc();
    *(ulonglong *)(lVar11 + 9 + uVar14) = uVar2 & 0xffffffff00000000 | CONCAT44(1,(int)uVar2);
    *(longlong *)(lVar11 + 0x11 + uVar14) = (lVar8 - lVar9 >> 3) * -0x30c30c30c30c30c3;
    *(ulonglong *)(lVar10 + 0x28) = uVar13 + 1;
  }
  lVar8 = param_3[4];
  lVar9 = param_3[3];
  lVar10 = FUN_1401a9cc0();
  if ((*(byte *)(lVar10 + 0x288) & 1) != 0) {
    lVar10 = FUN_1401a9e60();
    uVar13 = *(ulonglong *)(lVar10 + 0x28);
    if ((uVar13 & 0xffff) == 0) {
      FUN_1400637c0(lVar10,uVar13);
    }
    lVar11 = *(longlong *)(lVar10 + 0x48);
    uVar14 = (ulonglong)(uint)((int)(uVar13 & 0xffff) << 5);
    *(undefined1 *)(lVar11 + uVar14) = 0x2d;
    *(char **)(lVar11 + 1 + uVar14) = "Scene Bulk Snapshot Generic Entities";
    uVar2 = rdtsc();
    *(ulonglong *)(lVar11 + 9 + uVar14) = uVar2 & 0xffffffff00000000 | CONCAT44(1,(int)uVar2);
    *(longlong *)(lVar11 + 0x11 + uVar14) = (lVar8 - lVar9 >> 3) * -0x3333333333333333;
    *(ulonglong *)(lVar10 + 0x28) = uVar13 + 1;
  }
  if ((local_80[0] == 1) && (lVar8 = FUN_1401a9cc0(), *(longlong *)(lVar8 + 0x290) == local_78)) {
    lVar9 = FUN_1401a9e60();
    uVar13 = *(ulonglong *)(lVar9 + 0x28);
    lVar8 = lVar9;
    if ((uVar13 & 0xffff) == 0) {
      lVar8 = FUN_1400637c0(lVar9,uVar13);
    }
    lVar10 = *(longlong *)(lVar9 + 0x48);
    uVar14 = (ulonglong)(uint)((int)(uVar13 & 0xffff) << 5);
    *(undefined1 *)(lVar10 + uVar14) = 0x11;
    uVar2 = rdtsc();
    *(ulonglong *)(lVar10 + 1 + uVar14) =
         uVar2 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar2);
    *(ulonglong *)(lVar9 + 0x28) = uVar13 + 1;
  }
  return;
}


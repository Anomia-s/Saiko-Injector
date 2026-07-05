/**
 * Function: bad_alloc_Constructor_or_Destructor
 * Address:  140022370
 * Signature: void __fastcall bad_alloc_Constructor_or_Destructor(longlong * param_1)
 * Body size: 1098 bytes
 */


void std::bad_alloc::bad_alloc_Constructor_or_Destructor(longlong *param_1)

{
  longlong *_Src;
  longlong *_Dst;
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint *puVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  longlong *local_138;
  longlong local_118 [17];
  bad_alloc_vftable *local_90;
  char *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  int local_5c;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = param_1[1];
  _Dst = (longlong *)*param_1;
  uVar15 = param_1[2];
  _Src = param_1 + 4;
  if (_Dst == _Src) {
    _Dst = local_118;
    uVar14 = uVar15;
    if (local_50 != 0) {
      memcpy(_Dst,_Src,local_50 * 4);
    }
  }
  else {
    *param_1 = (longlong)_Src;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar14 = 0;
  }
  local_138 = _Dst;
  if (uVar15 < local_50) {
    uVar3 = (uVar15 >> 1) + uVar15;
    uVar15 = local_50;
    if (((local_50 <= uVar3) && (uVar15 = uVar3, uVar3 >> 0x3e != 0)) &&
       (uVar15 = 0x3fffffffffffffff, 0x3fffffffffffffff < local_50)) {
      uVar15 = local_50;
    }
    local_138 = malloc(uVar15 * 4);
    if (local_138 == (longlong *)0x0) {
      local_80 = 0;
      local_88 = "bad allocation";
      local_90 = &vftable;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_90,(ThrowInfo *)&DAT_141412500);
    }
    if (_Dst != local_118) {
      free(_Dst);
      uVar14 = param_1[2];
    }
  }
  if (local_50 < uVar15) {
    uVar15 = local_50;
  }
  uVar1 = (int)local_50 * 2;
  uVar3 = (ulonglong)uVar1;
  if (uVar14 < uVar3) {
    (*(code *)param_1[3])(param_1,uVar3);
    uVar14 = param_1[2];
  }
  local_58 = CONCAT44(local_58._4_4_,uVar1);
  if (uVar3 < uVar14) {
    uVar14 = uVar3;
  }
  param_1[1] = uVar14;
  uVar4 = (uint)local_50;
  if ((int)uVar4 < 1) {
    uVar7 = 0;
    uVar3 = 0;
  }
  else {
    uVar5 = 1;
    bVar19 = true;
    lVar8 = 0;
    uVar9 = 0;
    uVar3 = 0;
    uVar11 = 0;
    do {
      if (uVar9 == 0) {
        uVar7 = 0;
        if (bVar19) {
          lVar17 = 0;
          goto LAB_140022500;
        }
      }
      else {
        uVar7 = 0;
        lVar17 = lVar8;
        do {
          uVar14 = (ulonglong)*(uint *)((longlong)local_138 + uVar7 * 4 + 4);
          uVar15 = (ulonglong)*(uint *)((longlong)local_138 + lVar17) *
                   (ulonglong)*(uint *)((longlong)local_138 + uVar7 * 4);
          uVar16 = uVar15 + uVar3;
          uVar15 = (ulonglong)CARRY8(uVar15,uVar3);
          uVar2 = *(uint *)((longlong)local_138 + lVar17 + -4) * uVar14;
          uVar3 = uVar2 + uVar16;
          uVar11 = uVar11 + uVar15 + (ulonglong)CARRY8(uVar2,uVar16);
          uVar7 = uVar7 + 2;
          lVar17 = lVar17 + -8;
        } while ((uVar5 & 0xfffffffffffffffe) != uVar7);
        lVar17 = uVar9 - uVar7;
        if (bVar19) {
LAB_140022500:
          uVar7 = (ulonglong)*(uint *)((longlong)local_138 + lVar17 * 4) *
                  (ulonglong)*(uint *)((longlong)local_138 + uVar7 * 4);
          bVar18 = CARRY8(uVar3,uVar7);
          uVar3 = uVar3 + uVar7;
          uVar11 = uVar11 + bVar18;
        }
      }
      *(int *)(*param_1 + uVar9 * 4) = (int)uVar3;
      uVar7 = uVar11 >> 0x20;
      uVar3 = uVar3 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 + 1;
      uVar5 = uVar5 + 1;
      bVar19 = (bool)(bVar19 ^ 1);
      lVar8 = lVar8 + 4;
      uVar11 = uVar7;
    } while (uVar9 != (uVar4 & 0x7fffffff));
  }
  if ((int)uVar4 < (int)uVar1) {
    local_68 = (longlong)(int)uVar4;
    local_78 = (longlong)(int)uVar1;
    local_58 = (int)(uVar4 - 1) + local_68;
    local_5c = uVar4 - 2;
    local_70 = local_68 + -1;
    iVar13 = 1;
    iVar6 = 0;
    lVar8 = local_68;
    do {
      uVar11 = uVar7;
      uVar5 = uVar3;
      if (lVar8 < local_58) {
        lVar10 = (longlong)iVar13;
        lVar17 = local_68;
        if ((iVar6 - uVar4 & 1) == 0) {
          lVar17 = lVar10 * 4;
          lVar10 = lVar10 + 1;
          uVar15 = (ulonglong)*(uint *)((longlong)local_138 + local_68 * 4 + -4) *
                   (ulonglong)*(uint *)((longlong)local_138 + lVar17);
          bVar19 = CARRY8(uVar3,uVar15);
          uVar3 = uVar3 + uVar15;
          uVar15 = uVar7 + bVar19;
          lVar17 = local_70;
          uVar14 = uVar3;
          uVar7 = uVar15;
        }
        uVar11 = uVar15;
        uVar5 = uVar14;
        if (local_5c != iVar6) {
          puVar12 = (uint *)((longlong)local_138 + lVar17 * 4 + -4);
          lVar17 = 0;
          do {
            uVar15 = (ulonglong)*puVar12 *
                     (ulonglong)*(uint *)((longlong)local_138 + lVar17 * 4 + lVar10 * 4);
            bVar19 = CARRY8(uVar15,uVar3);
            uVar15 = uVar15 + uVar3;
            uVar14 = (ulonglong)puVar12[-1] *
                     (ulonglong)*(uint *)((longlong)local_138 + lVar17 * 4 + lVar10 * 4 + 4);
            uVar3 = uVar14 + uVar15;
            uVar7 = uVar7 + bVar19 + (ulonglong)CARRY8(uVar14,uVar15);
            puVar12 = puVar12 + -2;
            lVar17 = lVar17 + 2;
            uVar11 = uVar7;
            uVar5 = uVar3;
          } while (uVar4 - (int)lVar10 != (int)lVar17);
        }
      }
      *(int *)(*param_1 + lVar8 * 4) = (int)uVar5;
      uVar7 = uVar11 >> 0x20;
      uVar3 = uVar11 << 0x20 | uVar5 >> 0x20;
      lVar8 = lVar8 + 1;
      iVar13 = iVar13 + 1;
      iVar6 = iVar6 + 1;
      uVar15 = uVar3;
      uVar14 = uVar5;
    } while (lVar8 != local_78);
  }
  uVar14 = param_1[1];
  uVar15 = uVar14 & 0xffffffff;
  uVar3 = 1;
  if ((int)uVar14 < 1) {
    uVar3 = uVar14 & 0xffffffff;
  }
  uVar1 = (int)uVar14 + 1;
  do {
    if ((int)uVar15 < 2) {
      uVar15 = param_1[2];
      if (uVar3 <= uVar15) goto LAB_14002276b;
      goto LAB_14002275e;
    }
    uVar1 = uVar1 - 1;
    lVar8 = uVar15 * 4;
    uVar15 = uVar15 - 1;
  } while (*(int *)(*param_1 + -4 + lVar8) == 0);
  uVar3 = (ulonglong)uVar1;
  uVar15 = param_1[2];
  if (uVar15 < uVar3) {
LAB_14002275e:
    (*(code *)param_1[3])(param_1,uVar3);
    uVar15 = param_1[2];
  }
LAB_14002276b:
  if (uVar3 < uVar15) {
    uVar15 = uVar3;
  }
  param_1[1] = uVar15;
  *(int *)(param_1 + 0x15) = (int)param_1[0x15] << 1;
  if (local_138 != local_118) {
    free(local_138);
  }
  return;
}


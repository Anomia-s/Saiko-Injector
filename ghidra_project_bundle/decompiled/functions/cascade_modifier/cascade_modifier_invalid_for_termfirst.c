/**
 * Function: cascade_modifier_invalid_for_termfirst
 * Address:  140391e60
 * Signature: undefined cascade_modifier_invalid_for_termfirst(void)
 * Body size: 3478 bytes
 */


/* WARNING: Type propagation algorithm not settling */

int cascade_modifier_invalid_for_termfirst(longlong param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ushort uVar4;
  ulonglong uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  char *pcVar16;
  ulonglong uVar17;
  bool bVar18;
  ulonglong uVar19;
  byte bVar20;
  ulonglong uVar21;
  byte bVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  short local_90;
  longlong local_88;
  
  *(ulonglong **)(param_3 + 0x18) = param_2;
  uVar25 = param_2[3];
  uVar19 = param_2[4];
  uVar23 = uVar25 & 0xffffffffffffff;
  if (uVar23 != 0 && uVar19 != 0) {
    pcVar16 = "first.name (%s) and first.id have competing values";
LAB_140391f45:
    FUN_140392c00(param_3,pcVar16,uVar19);
    return -1;
  }
  puVar1 = param_2 + 1;
  uVar5 = param_2[5];
  uVar19 = param_2[2];
  if ((uVar19 != 0) && ((*puVar1 & 0xffffffffffffff) != 0)) {
    pcVar16 = "src.name (%s) and src.id have competing values";
    goto LAB_140391f45;
  }
  uVar19 = param_2[6];
  if ((uVar5 & 0xffffffffffffff) != 0 && uVar19 != 0) {
    pcVar16 = "second.name (%s) and second.id have competing values";
    goto LAB_140391f45;
  }
  puVar2 = param_2 + 3;
  puVar3 = param_2 + 5;
  uVar19 = *param_2;
  uVar17 = uVar19 & 0xfffffffffffffff;
  uVar11 = uVar5;
  uVar24 = uVar25;
  if (uVar17 != 0) {
    if ((uVar19 & 0x8000000000000000) == 0) {
      uVar19 = 0;
joined_r0x000140391f88:
      bVar26 = false;
    }
    else {
      uVar17 = uVar19 >> 0x20 & 0xfffffff;
      if (uVar17 == 0) {
        pcVar16 = "missing first element in term.id";
        goto LAB_140392125;
      }
      uVar19 = uVar19 & 0xffffffff;
      if (uVar19 != 0) goto joined_r0x000140391f88;
      if (uVar17 != 0x126) {
        pcVar16 = "missing second element in term.id";
        goto LAB_140392125;
      }
      bVar26 = true;
      uVar19 = 0;
    }
    uVar21 = uVar23;
    if ((uVar25 >> 0x39 & 1) == 0) {
      if ((uVar25 >> 0x3a & 1) != 0) {
        uVar21 = 0x10f;
        if (uVar23 != 0x10f) {
          uVar21 = 0x10e;
        }
        goto LAB_140391fa7;
      }
LAB_140391fc3:
      uVar24 = FUN_1400b7610(param_1,uVar17);
      if (uVar24 == 0) {
        uVar24 = uVar17;
      }
      uVar24 = uVar24 | (ulonglong)*(byte *)((longlong)param_2 + 0x1f) << 0x38;
      *puVar2 = uVar24;
      uVar11 = *puVar3;
    }
    else {
LAB_140391fa7:
      if (uVar21 == 0) goto LAB_140391fc3;
      if ((int)uVar21 != (int)uVar17) {
        pcVar16 = "mismatch between term.id and term.first";
        goto LAB_140392125;
      }
    }
    if ((uVar11 & 0x200000000000000) == 0) {
      if ((uVar11 >> 0x3a & 1) != 0) {
        uVar23 = 0x10f;
        if ((uVar11 & 0xffffffffffffff) != 0x10f) {
          uVar23 = 0x10e;
        }
        goto LAB_140392069;
      }
    }
    else {
      uVar23 = uVar11 & 0xffffffffffffff;
LAB_140392069:
      if (uVar23 != 0) {
        if ((int)uVar23 != (int)uVar19) {
          pcVar16 = "mismatch between term.id and term.second";
          goto LAB_140392125;
        }
        goto LAB_140392134;
      }
    }
    if (uVar19 == 0) {
      if (bVar26) {
        *puVar3 = 0x200000000000000;
        uVar11 = 0x200000000000000;
      }
    }
    else {
      uVar11 = FUN_1400b7610(param_1,uVar19);
      if (uVar11 == 0) {
        uVar11 = uVar19;
      }
      uVar11 = uVar11 | (ulonglong)*(byte *)((longlong)param_2 + 0x2f) << 0x38;
      *puVar3 = uVar11;
      uVar24 = *puVar2;
    }
  }
LAB_140392134:
  if (uVar24 >> 0x3b == 0) {
    *puVar2 = uVar24 | 0x8000000000000000;
  }
  if ((uVar11 < 0x800000000000000) &&
     ((((uVar11 & 0xffffffffffffff) != 0 || ((uVar11 >> 0x39 & 1) != 0)) || (param_2[6] != 0)))) {
    *puVar3 = uVar11 | 0x8000000000000000;
  }
  uVar19 = *puVar1;
  if ((((uVar19 & 0xffffffffffffff) == 0) && ((uVar19 >> 0x39 & 1) == 0)) && (param_2[2] == 0)) {
    *puVar1 = uVar19 | 0x400000000000110;
  }
  iVar8 = cannot_set_both_ecsisentity_and_ecsisvariable(puVar1,param_3,"src");
  if (iVar8 != 0) {
    return -1;
  }
  iVar8 = cannot_set_both_ecsisentity_and_ecsisvariable(puVar2,param_3,"first");
  if (iVar8 != 0) {
    return -1;
  }
  iVar8 = cannot_set_both_ecsisentity_and_ecsisvariable(puVar3,param_3,"second");
  if (iVar8 != 0) {
    return -1;
  }
  iVar8 = identifier_s_is_not_alive(param_1,0,puVar1,param_3);
  if (iVar8 != 0) {
    return -1;
  }
  iVar8 = identifier_s_is_not_alive(param_1,0,puVar2,param_3);
  if (iVar8 != 0) {
    return -1;
  }
  if ((*puVar2 >> 0x39 & 1) == 0) {
    uVar12 = 0;
  }
  else {
    if ((*puVar2 & 0xffffffffffffff) == 0) {
      pcVar16 = "invalid \"0\" for first.name";
      goto LAB_140392125;
    }
    uVar12 = FUN_1400be350(param_1);
  }
  iVar8 = identifier_s_is_not_alive(param_1,uVar12,puVar3,param_3);
  if (iVar8 != 0) {
    return -1;
  }
  uVar19 = *puVar1;
  if ((uVar19 & 0x2ffffffffffffff) == 0x200000000000000) {
    uVar19 = uVar19 & 0x700000000000000;
    param_2[1] = uVar19;
    param_2[7] = 0;
  }
  if (((uVar19 >> 0x3a & 1) != 0) &&
     (cVar6 = FUN_1403b31e0(uVar19 & 0xffffffffffffff), cVar6 != '\0')) {
    *(undefined2 *)(param_2 + 8) = 1;
  }
  uVar19 = *puVar2;
  uVar24 = uVar19 & 0xffffffffffffff;
  uVar23 = *puVar3;
  uVar17 = uVar23 & 0xffffffffffffff;
  uVar11 = *puVar1;
  if (uVar24 == 0x10f && (uVar19 & 0x400000000000000) != 0) {
    *(byte *)((longlong)param_2 + 0x46) = *(byte *)((longlong)param_2 + 0x46) | 1;
  }
  uVar21 = uVar11 & 0xffffffffffffff;
  if (uVar17 == 0x10f && (uVar23 & 0x400000000000000) != 0) {
    *(byte *)((longlong)param_2 + 0x46) = *(byte *)((longlong)param_2 + 0x46) | 1;
  }
  if (uVar21 == 0x10f && (uVar11 & 0x400000000000000) != 0) {
    *(byte *)((longlong)param_2 + 0x46) = *(byte *)((longlong)param_2 + 0x46) | 2;
  }
  if ((uVar11 & 0x400000000000000) != 0 && uVar21 == 0x111) {
    param_2[1] = uVar11 & 0xf900000000000000 | uVar19;
    param_2[2] = param_2[4];
  }
  if ((uVar23 & 0x400000000000000) != 0 && uVar17 == 0x111) {
    param_2[5] = uVar23 & 0xf900000000000000 | uVar19;
    param_2[6] = param_2[4];
  }
  uVar19 = *param_2;
  if ((uVar19 & 0xfffffffffffffff) == 0) {
    iVar8 = FUN_140392e60(param_2);
    if (iVar8 != 0) {
      return -1;
    }
    uVar19 = *param_2;
  }
  if ((*(short *)((longlong)param_2 + 0x42) == 2) &&
     (((uVar19 == 0x800001260000010f || (uVar19 == 0x800001260000010e)) &&
      ((*puVar1 & 0xffffffffffffff) != 0x10f || (*puVar1 & 0x400000000000000) == 0)))) {
    *(undefined2 *)((longlong)param_2 + 0x42) = 0;
    uVar19 = 0x8000012600000000;
    *param_2 = 0x8000012600000000;
    param_2[5] = 0x8200000000000000;
LAB_1403924cc:
    *(byte *)((longlong)param_2 + 0x46) = *(byte *)((longlong)param_2 + 0x46) | 1;
  }
  else if (uVar19 == 0x8000012600000000) goto LAB_1403924cc;
  uVar23 = 0;
  if ((*puVar2 & 0x200000000000000) != 0) {
    uVar23 = uVar24;
  }
  if (uVar19 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_1403a6c60(param_1);
  }
  if ((uVar21 != 0) || (param_2[2] != 0)) {
    uVar19 = *puVar1;
    if (uVar19 < 0x800000000000000) {
      if ((char)uVar9 < '\0') {
        uVar19 = uVar19 | 0xc000000000000000;
        param_2[1] = uVar19;
        if (param_2[7] == 0) {
          param_2[7] = 0x127;
        }
      }
      else {
        uVar19 = uVar19 | 0x8000000000000000;
        param_2[1] = uVar19;
        if (param_2[7] != 0) {
          uVar12 = FUN_1403b36e0(param_1,*param_2);
          uVar13 = FUN_1403b36e0(param_1,param_2[7]);
          uVar13 = FUN_1403d2d90(uVar13);
          FUN_140392c00(param_3,
                        "traversal relationship (term::trav) \'%s\' specified for component \'%s\' which can\'t be inherited"
                        ,uVar13,uVar12);
          goto LAB_1403925b3;
        }
      }
    }
    if ((*puVar2 & 0x1000000000000000) != 0) {
      pcVar16 = "cascade modifier invalid for term.first";
      goto LAB_140392125;
    }
    if ((*puVar3 & 0x1000000000000000) != 0) {
      pcVar16 = "cascade modifier invalid for term.second";
      goto LAB_140392125;
    }
    if ((*puVar2 & 0x800000000000000) != 0) {
      pcVar16 = "desc modifier invalid for term.first";
      goto LAB_140392125;
    }
    if ((*puVar3 & 0x800000000000000) != 0) {
      pcVar16 = "desc modifier invalid for term.second";
      goto LAB_140392125;
    }
    if ((uVar19 & 0x1800000000000000) == 0x800000000000000) {
      pcVar16 = "desc modifier invalid without cascade";
      goto LAB_140392125;
    }
    if ((uVar19 & 0x1000000000000000) != 0) {
      uVar19 = uVar19 | 0x4000000000000000;
      *puVar1 = uVar19;
    }
    if (((uVar19 & 0x4000000000000000) != 0) && (param_2[7] == 0)) {
      param_2[7] = 0x126;
    }
  }
  if (((-1 < (char)uVar9) && (param_2[7] == 0x127)) &&
     ((*(byte *)((longlong)param_2 + 0xf) & 0x40) != 0)) {
    uVar12 = FUN_1403b36e0(param_1,*param_2);
    FUN_140392c00(param_3,
                  "IsA traversal not allowed for \'%s\' because the component doesn\'t have the (OnInstantiate, Inherit) trait"
                  ,uVar12);
LAB_1403925b3:
    (*DAT_1415033b0)(uVar12);
    return -1;
  }
  if ((uVar23 != 0) && ((*puVar1 & 0x2ffffffffffffff) != 0x200000000000000)) {
    plVar14 = (longlong *)FUN_1403a9030(param_1 + 2000,uVar23);
    bVar26 = true;
    if ((plVar14 == (longlong *)0x0) || (local_88 = *plVar14, local_88 == 0)) {
      local_88 = 0;
      bVar7 = 0;
    }
    else {
      if ((*(uint *)(local_88 + 8) & 4) == 0) {
        bVar7 = 0;
      }
      else {
        bVar7 = FUN_1403a2a90(param_1,local_88,0x115);
        bVar7 = bVar7 ^ 1;
      }
      bVar26 = false;
    }
    lVar15 = FUN_1403a6e90(param_1,(ulonglong)(uint)*puVar2 | 0x8000012700000000);
    if (lVar15 == 0) {
      local_90 = (short)uVar9;
      if (((local_90 < 0 | bVar7) & -0x7800000000000001 < (longlong)uVar25) != 0)
      goto LAB_1403927db;
    }
    else if (-0x7800000000000001 < (longlong)uVar25) {
LAB_1403927db:
      *(byte *)((longlong)param_2 + 0x46) = *(byte *)((longlong)param_2 + 0x46) | 0x10;
    }
    if (!bVar26) {
      uVar25 = *puVar3;
      if (((uVar25 & 0xffffffffffffff) == 0) && (param_2[6] == 0)) {
        bVar26 = (uVar25 & 0x200000000000000) == 0;
      }
      else {
        bVar26 = false;
      }
      if ((((-0x7800000000000001 < (longlong)uVar5 && !bVar26) &&
           ((*puVar1 & 0x400000000000000) == 0 || uVar21 != 0x10f)) &&
          ((uVar25 & 0x400000000000000) == 0 || uVar17 != 0x10f)) &&
         ((uVar17 != 0x10e || (*(short *)((longlong)param_2 + 0x42) != 2)))) {
        cVar6 = FUN_1403a2a90(param_1,local_88,0x112);
        if (cVar6 != '\0') {
          *(byte *)((longlong)param_2 + 0x46) = *(byte *)((longlong)param_2 + 0x46) | 4;
        }
        cVar6 = FUN_1403a2a90(param_1,local_88,0x113);
        if (cVar6 != '\0') {
          *(byte *)((longlong)param_2 + 0x46) = *(byte *)((longlong)param_2 + 0x46) | 8;
        }
      }
      cVar6 = FUN_1403a2a90(param_1,local_88,0x13a);
      if (cVar6 != '\0') {
        *(byte *)((longlong)param_2 + 0x47) = *(byte *)((longlong)param_2 + 0x47) | 0x10;
      }
    }
    if (((uVar9 & 0x2000) != 0) && (*puVar1 != 0x200000000000000)) {
      *(byte *)((longlong)param_2 + 0x47) = *(byte *)((longlong)param_2 + 0x47) | 2;
    }
    cVar6 = FUN_1400b9b40(param_1,uVar23);
    if (cVar6 != '\0') {
      *(byte *)((longlong)param_2 + 0x47) = *(byte *)((longlong)param_2 + 0x47) | 1;
    }
  }
  if ((*puVar2 & 0xffffffffffffff) == 0x111) {
    pcVar16 = "invalid $ for term.first";
LAB_140392125:
    FUN_140392c00(param_3,pcVar16);
    return -1;
  }
  if ((ushort)(*(short *)((longlong)param_2 + 0x42) - 4U) < 3) {
    if (1 < (ushort)param_2[8]) {
      pcVar16 = "invalid inout value for AndFrom/OrFrom/NotFrom term";
      goto LAB_140392125;
    }
  }
  else if (*(short *)((longlong)param_2 + 0x42) == 0) {
    bVar18 = (*(byte *)((longlong)param_2 + 0x47) & 8) == 0;
    bVar26 = true;
    goto LAB_1403929ba;
  }
  bVar26 = false;
  bVar18 = false;
LAB_1403929ba:
  uVar25 = *param_2;
  if ((((uVar25 & 0xf000000000000000) == 0x8000000000000000) ||
      ((uVar25 & 0xf000000000000000) == 0x9000000000000000)) &&
     (((uint)(uVar25 >> 0x20) & 0xfffffff) == 0x126)) {
    if (bVar26) {
      *(byte *)((longlong)param_2 + 0x47) = *(byte *)((longlong)param_2 + 0x47) | 0x20;
    }
    bVar18 = (bool)(bVar18 & (int)uVar25 == 0);
  }
  cVar6 = FUN_1403b31e0();
  bVar26 = true;
  if (cVar6 != '\0') {
    uVar10 = *(uint *)((longlong)param_2 + 4) & 0xfffffff;
    bVar26 = uVar10 != 0x10e;
    bVar18 = (bool)((byte)(uVar9 >> 9) & 1 & bVar18 & bVar26);
    if ((param_2[3] & 0x400000000000000) != 0) {
      bVar7 = FUN_1403b31e0();
      bVar7 = bVar7 & uVar24 != 0x10f;
      bVar26 = (bool)(uVar10 != 0x10e & bVar7);
      bVar18 = (bool)(bVar7 & bVar18);
    }
    if ((*puVar3 & 0x400000000000000) != 0) {
      bVar7 = FUN_1403b31e0();
      bVar26 = (bool)(bVar26 & (uVar17 == 0x10f | bVar7));
      bVar18 = (bool)(uVar17 != 0x10f & bVar7 & bVar18);
    }
  }
  uVar25 = param_2[1];
  bVar27 = (uVar25 & 0xffffffffffffff) == 0x110;
  uVar4 = *(ushort *)((longlong)param_2 + 0x46);
  bVar28 = (uVar4 & 0x1c) == 0;
  bVar7 = bVar26 & bVar28;
  bVar20 = (((uVar25 & 0x400000000000000) != 0 && bVar27) &&
           (((longlong)uVar25 < 0 && bVar28) && (param_2[7] == 0x127 || param_2[7] == 0))) & bVar18;
  uVar25 = param_2[3] & 0xffffffffffffff;
  bVar26 = (param_2[3] & 0x200000000000000) == 0;
  if ((uVar25 == 0x13f || uVar25 == 0x13e) || uVar25 == 0x13d) {
    bVar7 = bVar26 & bVar7;
  }
  bVar22 = bVar26 & bVar20;
  if ((uVar25 != 0x13f && uVar25 != 0x13e) && uVar25 != 0x13d) {
    bVar22 = bVar20;
  }
  *(ushort *)((longlong)param_2 + 0x46) =
       (ushort)((((uVar4 & 0x1100) == 0 && bVar27) && *param_2 != 0x8000012600000000) & bVar7) << 6
       | (ushort)((uVar4 & 0x1300) == 0 & bVar22) << 5 | uVar4 & 0xff9f;
  iVar8 = mismatch_between_termid_and_termfirst(param_1,param_2,param_3);
  return -(uint)(iVar8 != 0);
}


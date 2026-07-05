/**
 * Function: mismatch_between_termid_and_termfirst
 * Address:  140392ff0
 * Signature: undefined mismatch_between_termid_and_termfirst(void)
 * Body size: 1747 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
mismatch_between_termid_and_termfirst(undefined8 param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  uVar8 = *param_2;
  uVar1 = param_2[1];
  uVar15 = param_2[5];
  if (((uVar1 & 0x100000000000000) != 0) && ((uVar15 & 0x100000000000000) != 0)) {
    pcVar11 = "mismatch between term.cr_flags & term.id";
    goto LAB_1403933c3;
  }
  uVar16 = uVar1 & 0xffffffffffffff;
  uVar2 = param_2[3];
  uVar14 = uVar2 & 0xffffffffffffff;
  uVar13 = (longlong)(uVar2 << 6) >> 0x3f & uVar14;
  uVar18 = uVar15 & 0x200000000000000;
  uVar17 = uVar15 & 0xffffffffffffff;
  if ((uVar13 == 0x13d) || ((uVar13 == 0x13e || (uVar13 == 0x13f)))) {
    if (*(ushort *)((longlong)param_2 + 0x42) < 3) {
      if ((uVar15 & 0x100000000000000) == 0 || (uVar1 & 0x100000000000000) == 0) {
        if ((uVar1 & 0x200000000000000) == 0 || uVar18 == 0) {
          if ((uVar1 >> 0x3a & 1) == 0) {
            pcVar11 = "left-hand of operator must be a variable";
          }
          else if (uVar14 == 0x13e && (uVar15 & 0x100000000000000) == 0) {
            pcVar11 = "right-hand of match operator must be a string";
          }
          else if (((uVar15 & 0x400000000000000) == 0) ||
                  ((pcVar11 = "both sides of operator are equal", uVar16 == 0 || uVar16 != uVar17 &&
                   ((((char *)param_2[2] == (char *)0x0 || ((char *)param_2[6] == (char *)0x0)) ||
                    (iVar6 = strcmp((char *)param_2[2],(char *)param_2[6]), iVar6 != 0)))))) {
            if (uVar14 != 0x13d) {
              return 0;
            }
            if (uVar17 != 0x13d && uVar17 != 0x13e) {
              return 0;
            }
            pcVar11 = "invalid right-hand side for equality operator";
          }
        }
        else {
          pcVar11 = "both sides of operator cannot be an entity";
        }
      }
      else {
        pcVar11 = "both sides of operator cannot be a name";
      }
    }
    else {
      pcVar11 = "invalid operator combination";
    }
    goto LAB_1403933c3;
  }
  if (((uVar17 == 0) && (param_2[6] == 0)) && (uVar18 == 0)) {
    if (((uVar8 & 0x8000000000000000) != 0) && (uVar13 != 0x126)) {
      pcVar11 = "unexpected PAIR flag for term without pair";
      goto LAB_1403933c3;
    }
  }
  else if ((uVar8 & 0x8000000000000000) == 0) {
    pcVar11 = "expected PAIR flag for term with pair";
    goto LAB_1403933c3;
  }
  if ((uVar16 == 0) && (((uVar1 & 0x200000000000000) == 0 && (param_2[2] == 0)))) {
    pcVar11 = "term.src is not initialized";
    goto LAB_1403933c3;
  }
  if ((uVar14 == 0) && (((uVar2 & 0x200000000000000) == 0 && (param_2[4] == 0)))) {
    pcVar11 = "term.first is not initialized";
    goto LAB_1403933c3;
  }
  uVar17 = (longlong)(uVar15 << 6) >> 0x3f & uVar17;
  uVar12 = (uint)uVar8;
  if ((uVar8 & 0x8000000000000000) == 0) {
    if ((uVar8 & 0xfffffffffffffff) == 0) {
      pcVar11 = "missing component id";
      goto LAB_1403933c3;
    }
    if ((uint)uVar13 == uVar12 || (uVar2 & 0x200000000000000) == 0) {
      if (((uVar2 >> 0x3a & 1) == 0) ||
         (cVar3 = FUN_1403b31e0(uVar8 & 0xfffffffffffffff), cVar3 != '\0')) {
LAB_14039332f:
        if (uVar13 != 0) {
          uVar8 = param_2[5];
          if (((((uVar8 & 0xffffffffffffff) != 0) || ((uVar8 & 0x200000000000000) != 0)) ||
              (param_2[6] != 0)) && (((uVar8 ^ param_2[1]) & 0x600000000000000) == 0)) {
            if ((param_2[1] & 0x200000000000000) == 0) {
              if (((char *)param_2[2] != (char *)0x0) &&
                 (((char *)param_2[6] != (char *)0x0 &&
                  (iVar6 = strcmp((char *)param_2[2],(char *)param_2[6]), iVar6 == 0)))) {
LAB_14039351e:
                cVar3 = FUN_1400b9b40(param_1,uVar13,0x11e);
                if ((cVar3 != '\0') && ((*(byte *)((longlong)param_2 + 0x46) & 8) == 0)) {
                  pcVar11 = "term with acyclic relationship cannot have the same source and target";
                  goto LAB_1403933c3;
                }
              }
            }
            else if ((uVar16 != 0) && (uVar16 == uVar17)) goto LAB_14039351e;
          }
          if ((((uVar17 != 0) && (cVar3 = FUN_1403b31e0(uVar17), cVar3 == '\0')) &&
              (uVar8 = FUN_1400be350(param_1,uVar13), uVar8 != 0)) &&
             (cVar3 = FUN_1400b9b40(param_1,uVar17,uVar8 & 0xffffffff | 0x8000012600000000),
             cVar3 == '\0')) {
            uVar9 = FUN_1403ae340(param_1,0,uVar17,".",0);
            uVar10 = FUN_1403ae340(param_1,0,uVar8,".",0);
            uVar7 = FUN_1403b36e0(param_1,*param_2);
            FUN_140392c00(param_3,"invalid target \'%s\' for %s: must be child of \'%s\'",uVar9,
                          uVar7,uVar10);
            (*DAT_1415033b0)(uVar9);
            (*DAT_1415033b0)(uVar10);
            goto LAB_140393630;
          }
        }
        if (param_2[7] == 0) {
          return 0;
        }
        cVar3 = FUN_1400b9b40(param_1,param_2[7],0x11f);
        if (cVar3 != '\0') {
          return 0;
        }
        uVar7 = FUN_1403ae340(param_1,0,param_2[7],".",0);
        pcVar11 = "cannot traverse non-traversable relationship \'%s\'";
      }
      else {
        uVar7 = FUN_1403b36e0(param_1,uVar8);
        pcVar11 = "expected wildcard for variable term.first (got %s)";
      }
LAB_140393622:
      FUN_140392c00(param_3,pcVar11,uVar7);
LAB_140393630:
      (*DAT_1415033b0)(uVar7);
      return 0xffffffff;
    }
  }
  else {
    uVar4 = (uint)(uVar8 >> 0x20);
    if ((uVar8 & 0xfffffff00000000) == 0) {
      pcVar11 = "invalid 0 for first element in pair id";
      goto LAB_1403933c3;
    }
    uVar5 = uVar4 & 0xfffffff;
    if (uVar12 == 0 && uVar5 != 0x126) {
      pcVar11 = "invalid 0 for second element in pair id";
      goto LAB_1403933c3;
    }
    if (((uVar2 & 0x200000000000000) == 0) || ((uVar4 & 0xfffffff) == (uint)uVar13)) {
      if ((uVar2 >> 0x3a & 1) != 0) {
        cVar3 = FUN_1403b31e0(uVar5);
        if (cVar3 == '\0') {
          uVar7 = FUN_1403b36e0(param_1,uVar8);
          FUN_140392c00(param_3,"expected wildcard for variable term.first (got %s)",uVar7);
          goto LAB_140393630;
        }
        uVar15 = param_2[5];
        uVar18 = uVar15 & 0x200000000000000;
      }
      if ((uint)uVar17 != uVar12 && uVar18 != 0) {
        pcVar11 = "mismatch between term.id and term.second";
        goto LAB_1403933c3;
      }
      if (((uVar15 & 0x400000000000000) == 0) ||
         (cVar3 = FUN_1403b31e0(uVar8 & 0xffffffff), cVar3 != '\0')) goto LAB_14039332f;
      uVar7 = FUN_1403b36e0(param_1,uVar8);
      pcVar11 = "expected wildcard for variable term.second (got %s)";
      goto LAB_140393622;
    }
  }
  pcVar11 = "mismatch between term.id and term.first";
LAB_1403933c3:
  FUN_140392c00(param_3,pcVar11);
  return 0xffffffff;
}


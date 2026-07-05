/**
 * Function: inlining_failed_function_is_variadic
 * Address:  1406caca0
 * Signature: undefined inlining_failed_function_is_variadic(void)
 * Body size: 3676 bytes
 */


void inlining_failed_function_is_variadic
               (longlong *param_1,ulonglong param_2,undefined8 param_3,byte param_4,char param_5,
               char param_6)

{
  ulonglong uVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  size_t sVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  char cVar19;
  ulonglong uVar20;
  undefined7 uVar22;
  undefined8 uVar21;
  longlong lVar23;
  ulonglong uVar24;
  longlong *plVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  char *in_stack_ffffffffffffff18;
  undefined4 uVar29;
  char *in_stack_ffffffffffffff20;
  char *local_b8;
  size_t local_b0;
  char *local_a8;
  size_t local_a0;
  longlong *local_98;
  ulonglong local_90;
  int local_88;
  undefined4 uStack_84;
  byte local_80;
  undefined7 uStack_7f;
  undefined8 local_78;
  uint local_6c;
  longlong local_68;
  ulonglong local_60;
  longlong *local_58;
  byte local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_78 = param_3;
  local_49 = param_4;
  if (0 < *(int *)((longlong)param_1 + 0xc)) {
    FUN_1407ab600(*param_1,*(int *)(param_2 + 0xc) + 1);
  }
  if (((1 < (int)param_1[1]) && (*(char *)(param_2 + 0x48) == '\0')) &&
     (uVar8 = FUN_1406d36b0(param_1,*(undefined8 *)(param_2 + 0x20)), uVar8 != 0)) {
    if ((param_1[0xe] != 0) && (uVar8 != param_1[0xf])) {
      uVar18 = uVar8 >> 9 ^ uVar8 >> 4;
      uVar20 = 0;
      do {
        uVar18 = uVar18 & param_1[0xd] - 1U;
        lVar23 = uVar18 * 0x38;
        uVar28 = *(ulonglong *)(param_1[0xc] + lVar23);
        if (uVar28 == uVar8) {
          lVar23 = param_1[0xc] + lVar23;
          if (*(char *)(lVar23 + 0x34) == '\x01') {
            in_stack_ffffffffffffff20 =
                 (char *)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff20 >> 8),param_6);
            in_stack_ffffffffffffff18 =
                 (char *)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff18 >> 8),local_49);
            cVar4 = inlining_failed_too_many_inlined_frames
                              (param_1,param_2,uVar8,local_78,in_stack_ffffffffffffff18,
                               in_stack_ffffffffffffff20,DAT_1416ff6d0,DAT_1416ff6e8,DAT_1416ff700);
            if (cVar4 != '\0') {
              return;
            }
            if (*(char *)(lVar23 + 0x34) != '\0') goto LAB_1406cad86;
          }
          if (*(char *)(uVar8 + 0x70) != '\0') {
            pcVar12 = "inlining failed: function is variadic";
            goto LAB_1406cad7d;
          }
          pcVar12 = "inlining failed: module uses getfenv/setfenv";
          if ((*(char *)((longlong)param_1 + 0x511) != '\0') ||
             (*(char *)((longlong)param_1 + 0x512) != '\0')) goto LAB_1406cad7d;
          goto LAB_1406cad86;
        }
        if (uVar28 == param_1[0xf]) break;
        uVar18 = uVar18 + uVar20 + 1;
        uVar20 = uVar20 + 1;
      } while (uVar20 <= param_1[0xd] - 1U);
    }
    pcVar12 = "inlining failed: can\'t inline recursive calls";
    if (*(char *)(uVar8 + 0x70) != '\0') {
      pcVar12 = "inlining failed: function is variadic";
    }
LAB_1406cad7d:
    FUN_1407ab880(*param_1,pcVar12);
  }
LAB_1406cad86:
  uVar5 = *(uint *)((longlong)param_1 + 0x4fc);
  local_90 = (ulonglong)uVar5;
  local_98 = (longlong *)(ulonglong)local_49;
  uVar16 = (uint)*(byte *)(param_2 + 0x48) + *(int *)(param_2 + 0x40) + 1;
  plVar14 = (longlong *)(ulonglong)uVar16;
  if (uVar16 <= local_49) {
    plVar14 = local_98;
  }
  local_58 = param_1;
  if (param_5 == '\0') {
    uVar5 = (int)plVar14 + uVar5;
    if (0xff < uVar5) {
                    /* WARNING: Subroutine does not return */
      Luau::CompileError::CompileError_Constructor_or_Destructor
                ((undefined8 *)(param_2 + 0xc),
                 "Out of registers when trying to allocate %d registers: exceeded limit %d",plVar14,
                 0xff);
    }
    *(uint *)((longlong)param_1 + 0x4fc) = uVar5;
    if (uVar5 < *(uint *)(param_1 + 0xa0)) {
      uVar5 = *(uint *)(param_1 + 0xa0);
    }
    *(uint *)(param_1 + 0xa0) = uVar5;
    local_60 = local_90;
  }
  else {
    uVar17 = (int)plVar14 - (uint)local_49;
    uVar16 = uVar17 + uVar5;
    if (0xff < uVar16) {
                    /* WARNING: Subroutine does not return */
      Luau::CompileError::CompileError_Constructor_or_Destructor
                ((undefined8 *)(param_2 + 0xc),
                 "Out of registers when trying to allocate %d registers: exceeded limit %d",
                 (ulonglong)uVar17,0xff);
    }
    *(uint *)((longlong)param_1 + 0x4fc) = uVar16;
    if (uVar16 < *(uint *)(param_1 + 0xa0)) {
      uVar16 = *(uint *)(param_1 + 0xa0);
    }
    *(uint *)(param_1 + 0xa0) = uVar16;
    local_60 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(char)uVar5 - local_49);
  }
  iVar7 = -1;
  iVar6 = -1;
  plVar14 = local_98;
  if ((0 < (int)param_1[1]) && (*(char *)(param_2 + 0x48) == '\0')) {
    if (DAT_1416ff730 == '\x01') {
      if ((param_1[0x31] != 0) && (param_2 != param_1[0x32])) {
        uVar8 = param_2 >> 9 ^ param_2 >> 4;
        plVar14 = (longlong *)0x0;
        do {
          uVar8 = uVar8 & (ulonglong)(param_1[0x30] + -1);
          lVar23 = uVar8 * 0x10;
          uVar18 = *(ulonglong *)(param_1[0x2f] + lVar23);
          if (uVar18 == param_2) {
            iVar6 = *(int *)(param_1[0x2f] + lVar23 + 8);
            if (iVar6 != 0) goto LAB_1406cb3dd;
            goto LAB_1406cb4fe;
          }
          if (uVar18 == param_1[0x32]) goto LAB_1406cb4fe;
          uVar8 = (longlong)plVar14 + uVar8 + 1;
          plVar14 = (longlong *)((longlong)plVar14 + 1);
          bVar2 = false;
        } while (plVar14 <= (longlong *)(param_1[0x30] + -1));
        goto LAB_1406cae3a;
      }
    }
    else if ((param_1[0x31] != 0) && (param_2 != param_1[0x32])) {
      uVar8 = param_2 >> 9 ^ param_2 >> 4;
      plVar14 = (longlong *)0x0;
LAB_1406cb040:
      uVar8 = uVar8 & (ulonglong)(param_1[0x30] + -1);
      lVar23 = uVar8 * 0x10;
      uVar18 = *(ulonglong *)(param_1[0x2f] + lVar23);
      if (uVar18 != param_2) {
        if (uVar18 != param_1[0x32]) goto code_r0x0001406cb060;
        goto LAB_1406cb4fe;
      }
      iVar6 = *(int *)(param_1[0x2f] + lVar23 + 8);
LAB_1406cb3dd:
      iVar7 = iVar6;
      if (iVar6 < 0) goto LAB_1406cae38;
      if ((*(byte *)(*param_1 + 0x2e0) & 0x10) != 0) {
        plVar14 = param_1 + 0x1b;
        FUN_1407a3320(&local_88,*(undefined8 *)(param_2 + 0x20),param_1 + 0x16);
        if (*(longlong *)(param_2 + 0x40) == 0) {
          cVar4 = '\0';
        }
        else {
          cVar4 = FUN_1406d3410(local_58,*(undefined8 *)
                                          (*(longlong *)(param_2 + 0x38) + -8 +
                                          *(longlong *)(param_2 + 0x40) * 8));
        }
        if (CONCAT44(uStack_84,local_88) == 0) {
          if (CONCAT71(uStack_7f,local_80) != 0) {
            in_stack_ffffffffffffff18 = "";
            if (cVar4 != '\0') {
              in_stack_ffffffffffffff18 = "+";
            }
            plVar14 = (longlong *)(ulonglong)*(uint *)(param_2 + 0x40);
            FUN_1407ab880(*local_58,"builtin %s/%d%s",CONCAT71(uStack_7f,local_80),plVar14,
                          in_stack_ffffffffffffff18);
          }
        }
        else {
          in_stack_ffffffffffffff20 = "";
          if (cVar4 != '\0') {
            in_stack_ffffffffffffff20 = "+";
          }
          plVar14 = (longlong *)CONCAT71(uStack_7f,local_80);
          in_stack_ffffffffffffff18 =
               (char *)CONCAT44((int)((ulonglong)in_stack_ffffffffffffff18 >> 0x20),
                                *(undefined4 *)(param_2 + 0x40));
          FUN_1407ab880(*local_58,"builtin %s.%s/%d%s",CONCAT44(uStack_84,local_88),plVar14,
                        in_stack_ffffffffffffff18,in_stack_ffffffffffffff20);
        }
      }
      if (iVar6 != 0x22) {
        if (iVar6 != 0x39) {
          lVar23 = *(longlong *)(param_2 + 0x40);
          uVar8 = 2;
          if (lVar23 == 3) goto LAB_1406cb5a4;
          goto LAB_1406cb842;
        }
        if (local_49 == 1 && param_6 == '\0') {
          exceeded_jump_distance_limit_simplify_the_cod
                    (local_58,param_2,local_78,1,param_5,
                     (ulonglong)in_stack_ffffffffffffff20 & 0xffffffffffffff00,(char)local_60);
          goto LAB_1406cb32f;
        }
LAB_1406cb4fe:
        bVar2 = false;
        iVar6 = -1;
        goto LAB_1406cae3a;
      }
      lVar23 = *(longlong *)(param_2 + 0x40);
      if (lVar23 != 3) {
        uVar8 = 2;
        iVar6 = 0x22;
        goto LAB_1406cb842;
      }
      iVar6 = 0x22;
      if (local_58[0x22] != 0) {
        uVar8 = *(ulonglong *)(*(longlong *)(param_2 + 0x38) + 8);
        uVar18 = local_58[0x23];
        if (uVar8 != uVar18) {
          lVar23 = local_58[0x20];
          uVar28 = local_58[0x21] - 1;
          uVar24 = uVar8 >> 9 ^ uVar8 >> 4;
          uVar26 = 0;
          uVar20 = uVar24;
          do {
            lVar13 = (uVar20 & uVar28) * 0x20;
            uVar15 = *(ulonglong *)(lVar23 + lVar13);
            if (uVar15 == uVar8) {
              if ((*(int *)(lVar13 + lVar23 + 8) != 0) &&
                 (uVar20 = *(ulonglong *)(*(longlong *)(param_2 + 0x38) + 0x10), uVar20 != uVar18))
              {
                uVar27 = uVar20 >> 9 ^ uVar20 >> 4;
                uVar15 = 0;
                uVar26 = uVar27;
                goto LAB_1406cb911;
              }
              break;
            }
            if (uVar15 == uVar18) break;
            uVar20 = (uVar20 & uVar28) + uVar26 + 1;
            uVar26 = uVar26 + 1;
          } while (uVar26 <= uVar28);
        }
      }
      goto LAB_1406cb5a4;
    }
  }
LAB_1406cae38:
  iVar6 = iVar7;
  bVar2 = false;
  goto LAB_1406cae3a;
  while( true ) {
    if (uVar1 == uVar18) break;
    uVar26 = (uVar26 & uVar28) + uVar15 + 1;
    uVar15 = uVar15 + 1;
    if (uVar28 < uVar15) break;
LAB_1406cb911:
    lVar13 = (uVar26 & uVar28) * 0x20;
    uVar1 = *(ulonglong *)(lVar23 + lVar13);
    if (uVar1 == uVar20) {
      if (*(int *)(lVar13 + lVar23 + 8) != 0) {
        uVar26 = 0;
        goto LAB_1406cb995;
      }
      break;
    }
  }
  goto LAB_1406cb5a4;
code_r0x0001406cb66d:
  uVar24 = uVar24 + uVar28 + 1;
  uVar28 = uVar28 + 1;
  if (uVar18 < uVar28) goto LAB_1406cb6d1;
  goto LAB_1406cb658;
code_r0x0001406cb060:
  uVar8 = (longlong)plVar14 + uVar8 + 1;
  plVar14 = (longlong *)((longlong)plVar14 + 1);
  bVar2 = false;
  if ((longlong *)(param_1[0x30] + -1) < plVar14) goto LAB_1406cae3a;
  goto LAB_1406cb040;
  while( true ) {
    uVar5 = 0xffffffff;
    if (uVar15 == uVar18) break;
    uVar24 = (uVar24 & uVar28) + uVar26 + 1;
    uVar26 = uVar26 + 1;
    if (uVar28 < uVar26) break;
LAB_1406cb995:
    lVar13 = (uVar24 & uVar28) * 0x20;
    uVar15 = *(ulonglong *)(lVar23 + lVar13);
    if (uVar15 == uVar8) {
      lVar13 = lVar13 + lVar23;
      uVar5 = 0xffffffff;
      if (*(int *)(lVar13 + 8) == 3) {
        uVar5 = (int)*(double *)(lVar13 + 0x10);
      }
      break;
    }
  }
  uVar8 = 0;
  do {
    lVar13 = (uVar27 & uVar28) * 0x20;
    uVar24 = *(ulonglong *)(lVar23 + lVar13);
    if (uVar24 == uVar20) {
      lVar23 = lVar23 + lVar13;
      if ((((*(int *)(lVar23 + 8) == 3) && (-1 < (int)uVar5)) &&
          (iVar7 = (int)*(double *)(lVar23 + 0x10), 0 < iVar7)) && ((int)(uVar5 + iVar7) < 0x21)) {
        iVar6 = FUN_1407aa3e0(*local_58,(double)(int)(iVar7 * 0x20 - 0x20U | uVar5));
        if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          Luau::CompileError::CompileError_Constructor_or_Destructor
                    ((undefined8 *)(param_2 + 0xc),
                     "Exceeded constant limit; simplify the code to compile",uVar8,uVar20);
        }
        exceeded_constant_limit_simplify_the_code_to
                  (local_58,param_2,local_78,local_49,param_5,param_6,(char)local_60,0x3b,iVar6);
        goto LAB_1406cb32f;
      }
      break;
    }
    if (uVar24 == uVar18) break;
    uVar27 = (uVar27 & uVar28) + uVar8 + 1;
    uVar8 = uVar8 + 1;
  } while (uVar8 <= uVar28);
LAB_1406cb5a4:
  plVar25 = *(longlong **)(param_2 + 0x38);
  plVar14 = (longlong *)(ulonglong)DAT_1416f23d8;
  local_68 = local_58[0x13];
  uVar8 = local_58[0x14];
  lVar23 = local_58[0x11];
  uVar18 = local_58[0x12] - 1;
  lVar13 = *plVar25;
  uVar5 = *(uint *)(lVar13 + 8);
  if (lVar13 != 0 && uVar5 == DAT_1416f23d8) {
LAB_1406cb62c:
    if ((local_68 == 0) || (uVar20 = *(ulonglong *)(lVar13 + 0x20), uVar20 == uVar8))
    goto LAB_1406cb6d1;
    uVar24 = uVar20 >> 9 ^ uVar20 >> 4;
    uVar28 = 0;
LAB_1406cb658:
    uVar24 = uVar24 & uVar18;
    uVar26 = *(ulonglong *)(lVar23 + uVar24 * 0x18);
    if (uVar26 == uVar20) {
      if (*(char *)(lVar23 + uVar24 * 0x18 + 9) == '\0') goto LAB_1406cb6d1;
LAB_1406cb82d:
      uVar8 = 3;
      goto LAB_1406cb83e;
    }
    if (uVar26 != uVar8) goto code_r0x0001406cb66d;
    goto LAB_1406cb6d1;
  }
  while (uVar5 == DAT_1416f23c4 || uVar5 == DAT_1416f2400) {
    lVar13 = *(longlong *)(lVar13 + 0x20);
    uVar5 = *(uint *)(lVar13 + 8);
    if (lVar13 != 0 && uVar5 == DAT_1416f23d8) goto LAB_1406cb62c;
  }
LAB_1406cb6d1:
  lVar13 = plVar25[1];
  uVar5 = *(uint *)(lVar13 + 8);
  if (lVar13 == 0 || uVar5 != DAT_1416f23d8) {
    while (uVar5 == DAT_1416f23c4 || uVar5 == DAT_1416f2400) {
      lVar13 = *(longlong *)(lVar13 + 0x20);
      uVar5 = *(uint *)(lVar13 + 8);
      if (lVar13 != 0 && uVar5 == DAT_1416f23d8) goto LAB_1406cb71e;
    }
  }
  else {
LAB_1406cb71e:
    if ((local_68 == 0) || (uVar20 = *(ulonglong *)(lVar13 + 0x20), uVar20 == uVar8))
    goto LAB_1406cb785;
    uVar24 = uVar20 >> 9 ^ uVar20 >> 4;
    uVar28 = 0;
    while( true ) {
      uVar24 = uVar24 & uVar18;
      uVar26 = *(ulonglong *)(lVar23 + uVar24 * 0x18);
      if (uVar26 == uVar20) {
        if (*(char *)(lVar23 + uVar24 * 0x18 + 9) == '\0') break;
        uVar8 = 3;
        goto LAB_1406cb83e;
      }
      if (uVar26 == uVar8) break;
      uVar24 = uVar24 + uVar28 + 1;
      uVar28 = uVar28 + 1;
      if (uVar18 < uVar28) break;
    }
  }
LAB_1406cb785:
  lVar13 = plVar25[2];
  uVar5 = *(uint *)(lVar13 + 8);
  if (lVar13 == 0 || uVar5 != DAT_1416f23d8) {
    while (uVar5 == DAT_1416f23c4 || uVar5 == DAT_1416f2400) {
      lVar13 = *(longlong *)(lVar13 + 0x20);
      uVar5 = *(uint *)(lVar13 + 8);
      if (lVar13 != 0 && uVar5 == DAT_1416f23d8) goto LAB_1406cb7d5;
    }
  }
  else {
LAB_1406cb7d5:
    if ((local_68 != 0) && (uVar20 = *(ulonglong *)(lVar13 + 0x20), uVar20 != uVar8)) {
      plVar14 = (longlong *)(uVar20 >> 9 ^ uVar20 >> 4);
      uVar28 = 0;
      do {
        plVar14 = (longlong *)((ulonglong)plVar14 & uVar18);
        uVar24 = *(ulonglong *)(lVar23 + (longlong)plVar14 * 0x18);
        if (uVar24 == uVar20) {
          if (*(char *)(lVar23 + (longlong)plVar14 * 0x18 + 9) != '\0') goto LAB_1406cb82d;
          break;
        }
        if (uVar24 == uVar8) break;
        plVar14 = (longlong *)((longlong)plVar14 + uVar28 + 1);
        uVar28 = uVar28 + 1;
      } while (uVar28 <= uVar18);
    }
  }
  uVar8 = 2;
LAB_1406cb83e:
  lVar23 = 3;
LAB_1406cb842:
  bVar2 = true;
  if (lVar23 - 1U < uVar8) {
    cVar4 = FUN_1406d3410(local_58,*(undefined8 *)(*(longlong *)(param_2 + 0x38) + -8 + lVar23 * 8))
    ;
    if (cVar4 == '\0') {
      exceeded_constant_limit_simplify_the_code_to
                (local_58,param_2,local_78,local_49,param_5,param_6,(char)local_60,iVar6,0xffffffff)
      ;
      goto LAB_1406cb32f;
    }
    if (((1 < (int)local_58[1]) &&
        (FUN_1407a39c0(&local_88,iVar6), local_88 == *(int *)(param_2 + 0x40))) &&
       ((local_80 & 1) != 0)) {
      exceeded_constant_limit_simplify_the_code_to
                (local_58,param_2,local_78,local_49,param_5,param_6,(char)local_60,iVar6,0xffffffff)
      ;
      goto LAB_1406cb32f;
    }
  }
LAB_1406cae3a:
  uVar8 = local_60;
  uVar18 = local_60 & 0xff;
  uVar22 = (undefined7)((ulonglong)plVar14 >> 8);
  iVar7 = (int)uVar18;
  if (*(char *)(param_2 + 0x48) == '\x01') {
    lVar23 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x20);
    uVar5 = *(uint *)(lVar23 + 8);
    plVar14 = (longlong *)CONCAT71(uVar22,uVar5 == DAT_1416f23d8);
    if (lVar23 == 0 || uVar5 != DAT_1416f23d8) {
      plVar14 = (longlong *)(ulonglong)DAT_1416f23c4;
      do {
        if ((uVar5 != DAT_1416f23c4) && (uVar5 != DAT_1416f2400)) goto LAB_1406cb085;
        lVar23 = *(longlong *)(lVar23 + 0x20);
        uVar5 = *(uint *)(lVar23 + 8);
      } while (lVar23 == 0 || uVar5 != DAT_1416f23d8);
    }
    if (local_58[0x13] != 0) {
      uVar28 = *(ulonglong *)(lVar23 + 0x20);
      if (uVar28 != local_58[0x14]) {
        uVar20 = local_58[0x11];
        plVar14 = (longlong *)(local_58[0x12] + -1);
        uVar24 = uVar28 >> 9 ^ uVar28 >> 4;
        plVar25 = (longlong *)0x0;
        do {
          uVar24 = uVar24 & (ulonglong)plVar14;
          uVar26 = *(ulonglong *)(uVar20 + uVar24 * 0x18);
          if (uVar26 == uVar28) {
            lVar23 = uVar20 + uVar24 * 0x18;
            if (*(char *)(lVar23 + 9) == '\x01') {
              local_6c = (uint)*(byte *)(lVar23 + 8);
              goto LAB_1406cb0be;
            }
            break;
          }
          if (uVar26 == local_58[0x14]) break;
          uVar24 = (longlong)plVar25 + uVar24 + 1;
          plVar25 = (longlong *)((longlong)plVar25 + 1);
        } while (plVar25 <= plVar14);
      }
    }
LAB_1406cb085:
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)((longlong)local_58 + 0x4fc));
    *(int *)((longlong)local_58 + 0x4fc) = iVar7 + 1;
    uVar20 = local_60 & 0xffffffff;
    plVar14 = (longlong *)CONCAT71((int7)((ulonglong)plVar14 >> 8),1);
    exceeded_constant_limit_simplify_the_code_to(local_58);
    *(undefined4 *)((longlong)local_58 + 0x4fc) = (undefined4)local_68;
    local_6c = (uint)uVar8;
  }
  else {
    uVar20 = local_60;
    if (iVar6 < 0) {
      uVar10 = *(undefined8 *)(param_2 + 0x20);
      local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)((longlong)local_58 + 0x4fc));
      *(int *)((longlong)local_58 + 0x4fc) = iVar7 + 1;
      plVar14 = (longlong *)CONCAT71(uVar22,1);
      exceeded_constant_limit_simplify_the_code_to(local_58,uVar10);
      *(undefined4 *)((longlong)local_58 + 0x4fc) = (undefined4)local_68;
    }
    local_6c = 0;
  }
LAB_1406cb0be:
  uVar5 = 0;
  uVar8 = 0;
  while (uVar28 = *(ulonglong *)(param_2 + 0x40), uVar8 < uVar28) {
    while( true ) {
      uVar8 = uVar8 + 1;
      if (uVar8 == uVar28) break;
      uVar20 = *(byte *)(param_2 + 0x48) + uVar18 + uVar8;
      uVar10 = *(undefined8 *)(*(longlong *)(param_2 + 0x38) + -8 + uVar8 * 8);
      uVar29 = *(undefined4 *)((longlong)local_58 + 0x4fc);
      local_68 = CONCAT44(local_68._4_4_,uVar29);
      *(uint *)((longlong)local_58 + 0x4fc) = ((uint)uVar20 & 0xff) + 1;
      plVar14 = (longlong *)CONCAT71((uint7)(uint3)((uint)uVar29 >> 8),1);
      exceeded_constant_limit_simplify_the_code_to(local_58,uVar10);
      *(undefined4 *)((longlong)local_58 + 0x4fc) = (undefined4)local_68;
      uVar28 = *(ulonglong *)(param_2 + 0x40);
      if (uVar28 <= uVar8) goto LAB_1406cb15c;
    }
    uVar20 = (ulonglong)((uint)*(byte *)(param_2 + 0x48) + (int)uVar8 + iVar7);
    uVar5 = FUN_1406d2e10(local_58,*(undefined8 *)(*(longlong *)(param_2 + 0x38) + -8 + uVar8 * 8));
  }
LAB_1406cb15c:
  if (0 < *(int *)((longlong)local_58 + 0xc)) {
    FUN_1407ab600(*local_58,*(int *)(*(longlong *)(param_2 + 0x20) + 0x14) + 1);
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    lVar23 = *(longlong *)(param_2 + 0x20);
    lVar13 = *local_58;
    if (0 < *(int *)((longlong)local_58 + 0xc)) {
      FUN_1407ab600(lVar13,*(int *)(lVar23 + 0x30) + 1);
      lVar13 = *local_58;
    }
    pcVar12 = *(char **)(lVar23 + 0x28);
    sVar9 = strlen(pcVar12);
    local_b8 = pcVar12;
    local_b0 = sVar9;
    iVar6 = FUN_1407aa500(lVar13,&local_b8);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      Luau::CompileError::CompileError_Constructor_or_Destructor
                ((undefined8 *)(lVar23 + 0xc),
                 "Exceeded constant limit; simplify the code to compile",uVar20,plVar14);
    }
    lVar13 = *local_58;
    local_a8 = pcVar12;
    local_a0 = sVar9;
    uVar3 = FUN_1407acd80(&local_a8);
    uVar10 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff18 >> 8),uVar3);
    FUN_1407aacf0(lVar13,0x14,local_60,local_6c,uVar10);
    uVar29 = (undefined4)((ulonglong)uVar10 >> 0x20);
    FUN_1407aae60(*local_58,iVar6);
    in_stack_ffffffffffffff18 = (char *)CONCAT44(uVar29,2);
    FUN_1406d2a60(local_58,*(undefined8 *)(lVar23 + 0x20),(undefined1)local_6c,4,
                  in_stack_ffffffffffffff18);
  }
  else if (bVar2) {
    uVar10 = FUN_1407aaf10(*local_58);
    in_stack_ffffffffffffff18 = (char *)((ulonglong)in_stack_ffffffffffffff18 & 0xffffffffffffff00);
    uVar11 = 0;
    FUN_1407aacf0(*local_58,0x44,iVar6,0,in_stack_ffffffffffffff18);
    uVar21 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
    exceeded_constant_limit_simplify_the_code_to(local_58,*(undefined8 *)(param_2 + 0x20),local_60);
    uVar11 = FUN_1407aaf10(*local_58);
    cVar4 = FUN_1407aafe0(*local_58,uVar10);
    if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
      Luau::CompileError::CompileError_Constructor_or_Destructor
                ((undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xc),
                 "Exceeded jump distance limit; simplify the code to compile",uVar11,uVar21);
    }
  }
  cVar4 = local_49 + 1;
  cVar19 = '\0';
  if (param_6 != '\0') {
    cVar4 = '\0';
  }
  if ((uVar5 & 1) == 0) {
    cVar19 = *(char *)(param_2 + 0x48) + *(char *)(param_2 + 0x40) + '\x01';
  }
  uVar8 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff18 >> 8),cVar4);
  FUN_1407aacf0(*local_58,0x15,local_60,cVar19,uVar8);
  if ((param_5 == '\0') && (plVar14 = (longlong *)0x0, local_98 != (longlong *)0x0)) {
    do {
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_1407aacf0(*local_58,6,(int)local_78 + (int)plVar14,(int)local_60 + (int)plVar14,uVar8);
      plVar14 = (longlong *)((longlong)plVar14 + 1);
    } while (plVar14 < local_98);
  }
LAB_1406cb32f:
  *(int *)((longlong)local_58 + 0x4fc) = (int)local_90;
  return;
}


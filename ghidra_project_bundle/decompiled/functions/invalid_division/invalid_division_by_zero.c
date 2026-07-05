/**
 * Function: invalid_division_by_zero
 * Address:  14076a000
 * Signature: undefined invalid_division_by_zero(void)
 * Body size: 1773 bytes
 */


undefined8 invalid_division_by_zero(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  char *pcVar19;
  Decoration<__int64> *this;
  undefined1 auStack_4c8 [32];
  undefined8 local_4a8;
  undefined8 *local_498;
  undefined4 *local_490;
  longlong *local_488;
  undefined8 local_480;
  undefined8 local_478;
  longlong local_470;
  undefined8 local_468;
  longlong local_460;
  longlong local_458;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_4c8;
  puVar18 = (undefined4 *)*param_2;
  uVar15 = 0;
  uVar16 = 0;
  switch(*puVar18) {
  case 1:
    local_498 = param_1;
    local_488 = param_2;
    uVar7 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)(puVar18 + 0xe));
    lVar10 = FUN_140106180((Decoration<__int64> *)(puVar18 + 0xe));
    if ((int)uVar7 < 1) {
      memset(&local_460,0,0x418);
    }
    else {
      local_490 = puVar18 + 0x12;
      uVar17 = 0;
      bVar3 = true;
      iVar6 = 0;
      do {
        if (*(longlong *)(lVar10 + uVar17 * 8) == 0) {
          puVar9 = (undefined8 *)FUN_1403b30a0(local_490,8,iVar6);
          iVar5 = invalid_division_by_zero(local_498,puVar9,param_3);
          if (iVar5 != 0) goto LAB_14076a4b3;
          iVar6 = iVar6 + 1;
          bVar3 = (bool)(bVar3 & *(int *)*puVar9 == 0);
        }
        uVar17 = uVar17 + 1;
      } while (uVar7 != uVar17);
      uVar15 = 0;
      if (!bVar3) goto switchD_14076a04b_default;
      uVar17 = 0;
      memset(&local_460,0,0x418);
      iVar6 = 0;
      do {
        lVar12 = *(longlong *)(lVar10 + uVar17 * 8);
        if (lVar12 == 0) {
          plVar13 = (longlong *)FUN_1403b30a0(local_490,8,iVar6);
          lVar12 = **(longlong **)(*plVar13 + 0x20);
          iVar6 = iVar6 + 1;
        }
        FUN_1403b8780(&local_460,lVar12);
        uVar17 = uVar17 + 1;
      } while (uVar7 != uVar17);
    }
    puVar9 = local_498;
    puVar14 = (undefined8 *)FUN_140762b10(*local_498,0x160);
    uVar15 = FUN_1403b89b0(&local_460);
    *puVar14 = uVar15;
    lVar10 = FUN_1407611d0(puVar9,puVar18,0x160);
    plVar13 = local_488;
    *(undefined8 **)(lVar10 + 0x20) = puVar14;
    ecs_expr_initializer_t(puVar9,*local_488);
    *plVar13 = lVar10;
    uVar15 = 0;
    goto switchD_14076a04b_default;
  case 2:
  case 3:
    local_460 = CONCAT71(local_460._1_7_,1);
    iVar6 = FUN_14076a850(param_1,puVar18,param_3,&local_460);
    if (iVar6 == 0) {
      uVar15 = uVar16;
      if ((char)local_460 != '\x01') goto switchD_14076a04b_default;
      lVar10 = FUN_140762b10(*param_1,*(undefined8 *)(puVar18 + 2));
      puVar8 = (undefined4 *)FUN_1403a5610(*param_1,*(undefined8 *)(puVar18 + 2));
      iVar6 = expected_value_for_initializer_element(param_1,puVar18,lVar10,*puVar8);
      if (iVar6 == 0) {
        lVar12 = FUN_1407611d0(param_1,puVar18,*(undefined8 *)(puVar18 + 2));
        *(longlong *)(lVar12 + 0x20) = lVar10;
        ecs_expr_initializer_t(param_1,*param_2);
        *param_2 = lVar12;
        goto switchD_14076a04b_default;
      }
      if (lVar10 != 0) {
        FUN_140762ba0(*param_1,*(undefined8 *)(puVar18 + 2),lVar10);
      }
    }
    break;
  case 4:
    if (puVar18[10] == 0x21) {
      iVar6 = invalid_division_by_zero(param_1,puVar18 + 8,param_3);
      if (iVar6 == 0) {
        piVar1 = *(int **)(puVar18 + 8);
        uVar15 = uVar16;
        if (*piVar1 != 0) goto switchD_14076a04b_default;
        lVar10 = *(longlong *)(piVar1 + 2);
        if (lVar10 == 0x151) {
          lVar12 = FUN_1407611d0(param_1,puVar18,0x151);
          local_458 = lVar12 + 0x28;
          *(longlong *)(lVar12 + 0x20) = local_458;
          local_468 = *(undefined8 *)(*(longlong *)(puVar18 + 8) + 0x20);
          local_470 = lVar10;
          local_460 = lVar10;
          iVar6 = invalid_operator_for_binary_expression(param_1,&local_470,&local_460,puVar18[10]);
          if (iVar6 == 0) {
            ecs_expr_initializer_t(param_1,*param_2);
            *param_2 = lVar12;
            goto switchD_14076a04b_default;
          }
        }
        else {
          local_4a8 = 0;
          uVar15 = FUN_1403ae340(*param_1,0,*(undefined8 *)(puVar18 + 2),".");
          FUN_140399a50(param_1[1],param_1[2],*(longlong *)(puVar18 + 6) - param_1[2],
                        "! operator cannot be applied to value of type \'%s\' (must be bool)");
          (*DAT_1415033b0)(uVar15);
        }
      }
    }
    else {
      uVar15 = param_1[1];
      lVar10 = param_1[2];
      lVar12 = *(longlong *)(puVar18 + 6) - lVar10;
      pcVar19 = "operator invalid for unary expression";
LAB_14076a4ae:
      FUN_140399a50(uVar15,lVar10,lVar12,pcVar19);
    }
    break;
  case 5:
    iVar6 = invalid_division_by_zero(param_1,puVar18 + 8,param_3);
    if (iVar6 == 0) {
      iVar6 = invalid_division_by_zero(param_1,puVar18 + 10,param_3);
      if (iVar6 == 0) {
        piVar1 = *(int **)(puVar18 + 8);
        if ((*piVar1 == 0) && (piVar2 = *(int **)(puVar18 + 10), *piVar2 == 0)) {
          local_460 = *(longlong *)(piVar1 + 2);
          local_458 = *(longlong *)(piVar1 + 8);
          local_470 = *(longlong *)(piVar2 + 2);
          local_468 = *(undefined8 *)(piVar2 + 8);
          if (((puVar18[0xc] == 0x2f) || (puVar18[0xc] == 0x25)) &&
             (cVar4 = FUN_140760f80(&local_470), cVar4 != '\0')) {
            uVar15 = param_1[1];
            lVar10 = param_1[2];
            lVar12 = *(longlong *)(puVar18 + 6) - lVar10;
            pcVar19 = "invalid division by zero";
            goto LAB_14076a4ae;
          }
          lVar10 = FUN_1407611d0(param_1,puVar18,*(undefined8 *)(puVar18 + 2));
          local_480 = *(undefined8 *)(lVar10 + 8);
          local_478 = *(undefined8 *)(lVar10 + 0x20);
          local_4a8 = CONCAT44(local_4a8._4_4_,puVar18[0xc]);
          iVar6 = invalid_operator_for_binary_expression(param_1,&local_460,&local_470,&local_480);
          if (iVar6 != 0) break;
          ecs_expr_initializer_t(param_1,*param_2);
          *param_2 = lVar10;
        }
        uVar15 = 0;
        goto switchD_14076a04b_default;
      }
    }
    break;
  case 6:
    lVar10 = *(longlong *)(puVar18 + 10);
    uVar15 = uVar16;
    if (lVar10 != 0) {
      *(undefined8 *)(puVar18 + 10) = 0;
      ecs_expr_initializer_t(param_1,*param_2);
      *param_2 = lVar10;
    }
    goto switchD_14076a04b_default;
  case 7:
    lVar10 = FUN_1405f1090(*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(puVar18 + 8),
                           puVar18 + 0xe);
    uVar15 = uVar16;
    if (*(char *)(lVar10 + 0x24) == '\x01') {
      uVar15 = *(undefined8 *)(puVar18 + 2);
      lVar12 = FUN_1407611d0(param_1,puVar18,uVar15);
      uVar11 = FUN_140762b10(*param_1,uVar15);
      FUN_140762c30(*param_1,uVar15,uVar11,*(undefined8 *)(lVar10 + 0x10));
      *(undefined8 *)(lVar12 + 0x20) = uVar11;
      ecs_expr_initializer_t(param_1,*param_2);
      *param_2 = lVar12;
      uVar15 = uVar16;
    }
    goto switchD_14076a04b_default;
  case 8:
    uVar15 = *(undefined8 *)(puVar18 + 2);
    lVar10 = FUN_1407611d0(param_1,puVar18,uVar15);
    uVar11 = FUN_140762b10(*param_1,uVar15);
    FUN_140762c30(*param_1,uVar15,uVar11,*(undefined8 *)(puVar18 + 0xc));
    *(undefined8 *)(lVar10 + 0x20) = uVar11;
    ecs_expr_initializer_t(param_1,*param_2);
    *param_2 = lVar10;
    uVar15 = uVar16;
    goto switchD_14076a04b_default;
  case 9:
  case 10:
    iVar6 = invalid_division_by_zero(param_1,puVar18 + 8,param_3);
    if (iVar6 == 0) {
      uVar15 = uVar16;
      if (*(longlong *)(puVar18 + 10) != 0) {
        this = (Decoration<__int64> *)(*(longlong *)(puVar18 + 10) + 0x20);
        lVar10 = FUN_140106180(this);
        uVar7 = _anon_C953E3F2::Decoration<__int64>::vfunction3(this);
        if (0 < (int)uVar7) {
          uVar17 = (ulonglong)uVar7;
          lVar10 = lVar10 + 8;
          do {
            iVar6 = invalid_division_by_zero(param_1,lVar10,param_3);
            if (iVar6 != 0) goto LAB_14076a4b3;
            lVar10 = lVar10 + 0x20;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
      }
      goto switchD_14076a04b_default;
    }
    break;
  case 0xb:
    puVar18 = puVar18 + 8;
LAB_14076a418:
    iVar6 = invalid_division_by_zero(param_1,puVar18,param_3);
    goto joined_r0x00014076a181;
  case 0xc:
  case 0xd:
    iVar6 = invalid_division_by_zero(param_1,puVar18 + 8,param_3);
    if (iVar6 == 0) {
      puVar18 = puVar18 + 10;
      goto LAB_14076a418;
    }
    break;
  case 0xe:
  case 0xf:
    iVar6 = failed_to_assign_value(param_1,param_2,param_3);
joined_r0x00014076a181:
    uVar15 = uVar16;
    if (iVar6 == 0) goto switchD_14076a04b_default;
    break;
  case 0x10:
    iVar6 = invalid_division_by_zero(param_1,puVar18 + 8,param_3);
    if (iVar6 == 0) {
      uVar7 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)(puVar18 + 10))
      ;
      lVar10 = FUN_140106180((Decoration<__int64> *)(puVar18 + 10));
      if (0 < (int)uVar7) {
        uVar17 = (ulonglong)uVar7;
        do {
          iVar6 = invalid_division_by_zero(param_1,lVar10,param_3);
          if ((iVar6 != 0) ||
             (iVar6 = invalid_division_by_zero(param_1,lVar10 + 8,param_3), iVar6 != 0))
          goto LAB_14076a4b3;
          lVar10 = lVar10 + 0x10;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      goto switchD_14076a04b_default;
    }
    break;
  default:
    goto switchD_14076a04b_default;
  }
LAB_14076a4b3:
  uVar15 = 0xffffffff;
switchD_14076a04b_default:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_4c8)) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_4c8);
}


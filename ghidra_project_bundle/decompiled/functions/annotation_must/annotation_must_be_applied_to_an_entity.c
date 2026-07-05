/**
 * Function: annotation_must_be_applied_to_an_entity
 * Address:  140762070
 * Signature: undefined annotation_must_be_applied_to_an_entity(void)
 * Body size: 2646 bytes
 */


ulonglong annotation_must_be_applied_to_an_entity(longlong *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined4 *puVar13;
  char *pcVar14;
  ulonglong uVar15;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  char **local_a0;
  undefined8 local_98;
  char *local_90;
  undefined8 local_88;
  longlong lStack_80;
  longlong local_78;
  code *pcStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  switch(*param_2) {
  case 0:
    iVar5 = FUN_1405f1cf0(param_1,param_2);
    uVar11 = 0xffffffff;
    if (iVar5 == 0) {
      lVar9 = *param_1;
      uVar4 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)(param_2 + 4));
      lVar6 = FUN_140106180((Decoration<__int64> *)(param_2 + 4));
      uVar11 = 0;
      if (0 < (int)uVar4) {
        uVar15 = 0;
        do {
          piVar2 = *(int **)(lVar6 + uVar15 * 8);
          if ((*piVar2 - 1U < 2) && (lVar7 = *(longlong *)(piVar2 + 10), lVar7 != 0)) {
            plVar8 = (longlong *)FUN_1403b2f60(lVar9 + 0x18,param_2 + 0xc,8);
            *plVar8 = lVar7;
          }
          uVar15 = uVar15 + 1;
          uVar11 = 0;
        } while (uVar4 != uVar15);
      }
    }
    break;
  case 1:
    iVar5 = invalid_component_identifier(param_1,param_2,param_2 + 4);
    uVar11 = 0xffffffff;
    if (iVar5 == 0) {
      if (*(char *)((longlong)param_1 + 0x48c) == '\x01') {
LAB_140762463:
        pcVar14 = "invalid component in with scope";
        goto LAB_140762585;
      }
      uVar11 = 0;
      if (param_1[0x8f] == 0) {
        uVar10 = *(undefined8 *)(param_2 + 4);
        puVar13 = *(undefined4 **)(param_2 + 6);
        if (puVar13 != (undefined4 *)0x0) goto LAB_14076286a;
        pcVar14 = "missing entity for tag %s";
        goto LAB_140762a00;
      }
    }
    break;
  case 2:
    iVar5 = invalid_component_identifier(param_1,param_2,param_2 + 4);
    uVar11 = 0xffffffff;
    if (iVar5 == 0) {
      if (param_1[0x8f] == 0) {
        uVar10 = *(undefined8 *)(param_2 + 4);
        puVar13 = *(undefined4 **)(param_2 + 6);
        if (puVar13 == (undefined4 *)0x0) {
          pcVar14 = "missing entity for component %s";
        }
        else {
LAB_14076286a:
          pcVar14 = "missing entity for pair (%s, %s)";
          local_a8 = puVar13;
        }
        goto LAB_140762a00;
      }
      if (*(char *)((longlong)param_1 + 0x48c) == '\x01') goto LAB_140762463;
      if ((*(longlong *)(param_2 + 0x14) == 0) ||
         (lVar9 = FUN_1403a5610(param_1[0x89],*(undefined8 *)(param_2 + 10)), lVar9 == 0))
      goto switchD_1407620b5_caseD_a;
      puVar12 = (uint *)FUN_1400ba4f0(param_1[0x89],*(undefined8 *)(lVar9 + 0xb0),0x16e);
      if ((puVar12 == (uint *)0x0) ||
         (uVar4 = *puVar12, (bool)*(char *)(param_2 + 0x1a) == ((uVar4 & 0xfffffffe) == 4))) {
        local_78 = *(longlong *)(lVar9 + 0xb0);
        lVar9 = *param_1;
        local_90 = *(char **)(lVar9 + 8);
        local_88 = 0;
        lStack_80 = param_1[0x92];
        pcStack_70 = FUN_1405f16d0;
        uStack_60 = 0x10000;
        local_58 = param_1[0x8a];
        local_50 = 0;
        local_68 = param_1;
        iVar5 = FUN_140766730(lVar9,*(undefined8 *)(param_2 + 0x14),&local_90);
        if ((iVar5 == 0) &&
           (iVar5 = invalid_division_by_zero(lVar9,param_2 + 0x14,&local_90), iVar5 == 0))
        goto switchD_1407620b5_caseD_a;
      }
      else {
        puVar13 = (undefined4 *)FUN_1403b36e0(param_1[0x89],*(undefined8 *)(lVar9 + 0xb0));
        pcVar14 = "type %s is not a collection (use \'%s: {...}\')";
        if (*(char *)(param_2 + 0x1a) == '\0') {
          pcVar14 = "type %s is a collection (use \'%s: [...]\')";
        }
        if ((uVar4 & 0xfffffffe) == 4) {
          pcVar14 = "type %s is a collection (use \'%s: [...]\')";
        }
        local_a8 = puVar13;
        FUN_1405f0f70(param_1,param_2,pcVar14,puVar13);
        (*DAT_1415033b0)(puVar13);
      }
      goto LAB_140762a0b;
    }
    break;
  case 3:
    uVar11 = 0;
    if (param_1[0x8f] == 0) {
      pcVar14 = "missing entity for default component";
      goto LAB_140762585;
    }
    break;
  case 4:
  case 5:
    lVar9 = FUN_140761f00(param_1[0x92],*(undefined8 *)(param_2 + 4));
    if (lVar9 != 0) {
      param_2[6] = *(undefined4 *)(lVar9 + 0x20);
      goto switchD_1407620b5_caseD_a;
    }
    uVar10 = *(undefined8 *)(param_2 + 4);
    pcVar14 = "unresolved variable \'%s\'";
LAB_140762a00:
    FUN_1405f0f70(param_1,param_2,pcVar14,uVar10);
    goto LAB_140762a0b;
  case 6:
    iVar5 = invalid_component_identifier(param_1,param_2,param_2 + 4);
LAB_140762175:
    uVar11 = (ulonglong)-(uint)(iVar5 != 0);
    break;
  case 7:
    iVar5 = invalid_component_identifier(param_1,param_2,param_2 + 4);
    uVar11 = 0xffffffff;
    if (iVar5 == 0) {
      uVar11 = 0;
      if (*(longlong *)(param_2 + 0x14) != 0) {
        local_78 = *(longlong *)(param_2 + 10);
        lVar9 = *param_1;
        local_90 = *(char **)(lVar9 + 8);
        local_88 = 0;
        lStack_80 = param_1[0x92];
        pcStack_70 = FUN_1405f16d0;
        uStack_60 = 0x10000;
        local_58 = param_1[0x8a];
        local_50 = 0;
        local_68 = param_1;
        iVar5 = FUN_140766730(lVar9,*(longlong *)(param_2 + 0x14),&local_90);
        if (iVar5 != 0) goto LAB_140762a0b;
        iVar5 = invalid_division_by_zero(lVar9,param_2 + 0x14,&local_90);
        goto LAB_140762175;
      }
    }
    break;
  case 8:
    iVar5 = maximum_script_nesting_depth_exceeded(param_1,*(undefined8 *)(param_2 + 4));
    uVar11 = 0xffffffff;
    if (iVar5 == 0) {
      uVar1 = *(undefined1 *)((longlong)param_1 + 0x48c);
      *(undefined1 *)((longlong)param_1 + 0x48c) = 1;
      iVar5 = maximum_script_nesting_depth_exceeded(param_1,*(undefined8 *)(param_2 + 6));
      uVar11 = 0xffffffff;
      if (iVar5 == 0) {
        *(undefined1 *)((longlong)param_1 + 0x48c) = uVar1;
        goto switchD_1407620b5_caseD_a;
      }
    }
    break;
  case 9:
    pcVar14 = "using in template is not allowed";
LAB_140762585:
    FUN_1405f0f70(param_1,param_2,pcVar14);
    goto LAB_140762a0b;
  case 10:
  case 0xc:
  case 0xd:
  case 0xf:
switchD_1407620b5_caseD_a:
    uVar11 = 0;
    break;
  case 0xb:
    if ((int *)param_1[0x87] == (int *)0x0) {
      uVar10 = *(undefined8 *)(param_2 + 4);
      pcVar14 = "annotation \'%s\' is not applied to anything";
      goto LAB_140762a00;
    }
    iVar5 = *(int *)param_1[0x87];
    if (iVar5 == 0xb) goto switchD_1407620b5_caseD_a;
    uVar11 = 0;
    if (iVar5 != 0x10) {
      pcVar14 = "annotation must be applied to an entity";
      goto LAB_140762585;
    }
    break;
  case 0xe:
    if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_c8)) {
      uVar11 = cannot_set_value_of_s_not_a_component(param_1,param_2,0);
      return uVar11;
    }
    goto LAB_140762a8f;
  case 0x10:
    pcVar14 = *(char **)(param_2 + 4);
    if (pcVar14 == (char *)0x0) {
      lVar9 = FUN_1407648c0(param_1);
      if ((lVar9 != 0) && (lVar6 = *(longlong *)(lVar9 + 0x28), *(longlong *)(lVar9 + 0x28) != 0))
      goto LAB_140762809;
    }
    else {
      local_68 = (longlong *)0x0;
      uStack_60 = 0;
      local_78 = 0;
      pcStack_70 = (code *)0x0;
      local_88 = 0;
      lStack_80 = 0;
      local_58 = 0;
      local_90 = pcVar14;
      iVar5 = strcmp(pcVar14,"prefab");
      if (iVar5 == 0) {
        lVar6 = 0x109;
      }
      else {
        iVar5 = strcmp(pcVar14,"slot");
        if (iVar5 == 0) {
          lVar6 = 0;
        }
        else {
          iVar5 = invalid_component_identifier(param_1,param_2,&local_90);
          lVar6 = local_78;
          if (iVar5 != 0) goto LAB_140762a0b;
        }
      }
LAB_140762809:
      *(longlong *)(param_2 + 0x12) = lVar6;
    }
    lVar9 = param_1[0x8f];
    param_1[0x8f] = (longlong)param_2;
    uVar1 = *(undefined1 *)((longlong)param_1 + 0x48c);
    *(undefined1 *)((longlong)param_1 + 0x48c) = 0;
    iVar5 = maximum_script_nesting_depth_exceeded(param_1,*(undefined8 *)(param_2 + 10));
    uVar11 = 0xffffffff;
    if (iVar5 == 0) {
      *(undefined1 *)((longlong)param_1 + 0x48c) = uVar1;
      param_1[0x8f] = lVar9;
      goto switchD_1407620b5_caseD_a;
    }
    break;
  case 0x11:
    local_a8 = param_2 + 0xc;
    local_98 = 0;
    local_a0 = &local_90;
    iVar5 = variable_identifier_s_not_allowed_here(param_1,0,*(undefined8 *)(param_2 + 4),0);
    uVar11 = 0xffffffff;
    if (iVar5 == 0) {
      local_a8 = param_2 + 0xd;
      local_98 = 0;
      local_a0 = &local_90;
      iVar5 = variable_identifier_s_not_allowed_here(param_1,0,*(undefined8 *)(param_2 + 6),0);
      uVar11 = 0xffffffff;
      if (iVar5 == 0) {
        iVar5 = maximum_script_nesting_depth_exceeded(param_1,*(undefined8 *)(param_2 + 0x14));
        uVar11 = (ulonglong)-(uint)(iVar5 != 0);
      }
    }
    break;
  case 0x12:
    lVar9 = *param_1;
    local_90 = *(char **)(lVar9 + 8);
    local_88 = 0;
    lStack_80 = param_1[0x92];
    local_78 = 0;
    pcStack_70 = FUN_1405f16d0;
    uStack_60 = 0x10000;
    local_58 = param_1[0x8a];
    local_50 = 0;
    local_68 = param_1;
    iVar5 = FUN_140766730(lVar9,*(undefined8 *)(param_2 + 8),&local_90);
    if (iVar5 != 0) goto LAB_140762a0b;
    iVar5 = invalid_division_by_zero(lVar9,param_2 + 8,&local_90);
    uVar11 = 0xffffffff;
    if (iVar5 == 0) {
      lVar9 = *(longlong *)(param_2 + 4);
      iVar5 = FUN_1405f1cf0(param_1,lVar9);
      if (iVar5 != 0) goto LAB_140762a0b;
      lVar6 = *param_1;
      uVar4 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)(lVar9 + 0x10))
      ;
      lVar7 = FUN_140106180((Decoration<__int64> *)(lVar9 + 0x10));
      if (0 < (int)uVar4) {
        uVar11 = 0;
        do {
          piVar2 = *(int **)(lVar7 + uVar11 * 8);
          if ((*piVar2 - 1U < 2) && (lVar3 = *(longlong *)(piVar2 + 10), lVar3 != 0)) {
            plVar8 = (longlong *)FUN_1403b2f60(lVar6 + 0x18,lVar9 + 0x30,8);
            *plVar8 = lVar3;
          }
          uVar11 = uVar11 + 1;
        } while (uVar4 != uVar11);
      }
      lVar9 = *(longlong *)(param_2 + 6);
      iVar5 = FUN_1405f1cf0(param_1,lVar9);
      uVar11 = 0xffffffff;
      if (iVar5 == 0) {
        lVar6 = *param_1;
        uVar4 = _anon_C953E3F2::Decoration<__int64>::vfunction3
                          ((Decoration<__int64> *)(lVar9 + 0x10));
        lVar7 = FUN_140106180((Decoration<__int64> *)(lVar9 + 0x10));
        uVar11 = 0;
        if (0 < (int)uVar4) {
          uVar15 = 0;
          do {
            piVar2 = *(int **)(lVar7 + uVar15 * 8);
            if ((*piVar2 - 1U < 2) && (lVar3 = *(longlong *)(piVar2 + 10), lVar3 != 0)) {
              plVar8 = (longlong *)FUN_1403b2f60(lVar6 + 0x18,lVar9 + 0x30,8);
              *plVar8 = lVar3;
            }
            uVar15 = uVar15 + 1;
            uVar11 = 0;
          } while (uVar4 != uVar15);
        }
      }
    }
    break;
  case 0x13:
    lVar9 = *param_1;
    local_90 = *(char **)(lVar9 + 8);
    local_88 = 0;
    lStack_80 = param_1[0x92];
    local_78 = 0x15b;
    pcStack_70 = FUN_1405f16d0;
    uStack_60 = 0x10000;
    local_58 = param_1[0x8a];
    local_50 = 0;
    local_68 = param_1;
    iVar5 = FUN_140766730(lVar9,*(undefined8 *)(param_2 + 6),&local_90);
    if ((iVar5 == 0) && (iVar5 = invalid_division_by_zero(lVar9,param_2 + 6,&local_90), iVar5 == 0))
    {
      lVar9 = *param_1;
      local_90 = *(char **)(lVar9 + 8);
      local_88 = 0;
      lStack_80 = param_1[0x92];
      local_78 = 0x15b;
      pcStack_70 = FUN_1405f16d0;
      uStack_60 = 0x10000;
      local_58 = param_1[0x8a];
      local_50 = 0;
      local_68 = param_1;
      iVar5 = FUN_140766730(lVar9,*(undefined8 *)(param_2 + 8),&local_90);
      if (iVar5 == 0) {
        iVar5 = invalid_division_by_zero(lVar9,param_2 + 8,&local_90);
        if (iVar5 == 0) {
          lVar9 = FUN_140761b30(param_1[0x92],param_1[0x8a] + 0x3080);
          param_1[0x92] = lVar9;
          lVar9 = FUN_140761da0(lVar9,*(undefined8 *)(param_2 + 4));
          uVar10 = FUN_1403a5610(param_1[0x89],0x15b);
          local_90 = (char *)((ulonglong)local_90 & 0xffffffff00000000);
          *(char ***)(lVar9 + 0x10) = &local_90;
          *(undefined8 *)(lVar9 + 8) = 0x15b;
          *(undefined8 *)(lVar9 + 0x18) = uVar10;
          iVar5 = FUN_1405f1cf0(param_1,*(undefined8 *)(param_2 + 10));
          uVar11 = 0xffffffff;
          if (iVar5 == 0) {
            *(undefined8 *)(lVar9 + 0x10) = 0;
            lVar9 = FUN_140761ce0(param_1[0x92]);
            param_1[0x92] = lVar9;
            goto switchD_1407620b5_caseD_a;
          }
          break;
        }
      }
    }
LAB_140762a0b:
    uVar11 = 0xffffffff;
    break;
  default:
    redabortreset_bluesreset
              (7,
               "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/visit_check.c"
               ,0x1ff,"corrupt AST node kind");
    (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_c8)) {
    return uVar11;
  }
LAB_140762a8f:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_c8);
}


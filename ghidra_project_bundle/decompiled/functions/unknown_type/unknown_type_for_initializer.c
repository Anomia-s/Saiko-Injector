/**
 * Function: unknown_type_for_initializer
 * Address:  1407669c0
 * Signature: undefined unknown_type_for_initializer(void)
 * Body size: 2740 bytes
 */


undefined8
unknown_type_for_initializer
          (undefined8 *param_1,undefined4 *param_2,void *param_3,longlong *param_4)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  int *piVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  bool bVar18;
  undefined1 auStack_138 [32];
  longlong *local_118;
  longlong *local_110;
  undefined4 *local_100;
  undefined8 *local_f8;
  undefined4 *local_f0;
  undefined4 *local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_138;
  switch(*param_2) {
  case 1:
    pcVar15 = *(char **)(param_2 + 8);
    local_f0 = param_2 + 0x12;
    local_f8 = param_1 + 3;
    local_100 = param_2 + 0xe;
    pcVar17 = (char *)0x0;
    local_e8 = param_2;
    local_e0 = param_4;
    while( true ) {
      cVar1 = *pcVar15;
      if (cVar1 == '\\') {
        pcVar15 = pcVar15 + 1;
        goto LAB_140766a56;
      }
      if (cVar1 == '\0') break;
      if (cVar1 == '$') {
        cVar2 = pcVar15[1];
        iVar5 = isspace((int)cVar2);
        if ((cVar2 != '\0') && (iVar5 == 0)) {
LAB_140766a9c:
          if (pcVar17 == (char *)0x0) {
            pcVar16 = *(char **)(param_2 + 8);
            if (cVar1 != '$') goto LAB_140766b25;
LAB_140766ab3:
            local_68 = 0;
            pcVar17 = (char *)without_in_identifier(0,pcVar15 + 1,0);
            if (pcVar17 == (char *)0x0) goto LAB_140767139;
            iVar5 = param_2[8];
            lVar12 = *(longlong *)(param_2 + 10);
            *(undefined1 *)(lVar12 + ((int)pcVar17 - iVar5)) = 0;
            lVar12 = FUN_140761240(param_1,param_2,((int)(pcVar15 + 1) - iVar5) + lVar12);
            if (lVar12 == 0) goto LAB_140767139;
          }
          else {
            pcVar16 = pcVar17;
            if (cVar1 == '$') goto LAB_140766ab3;
LAB_140766b25:
            local_68 = 0;
            local_d8 = param_1[1];
            uStack_d0 = *(undefined4 *)(param_1 + 2);
            uStack_cc = *(undefined4 *)((longlong)param_1 + 0x14);
            local_c8 = 0;
            uStack_c0 = param_1[0x12];
            local_b8 = (longlong)*(int *)(param_1 + 0x14) + param_1[0x11];
            lStack_b0 = 0;
            lStack_a8 = 0;
            lStack_a0 = 0;
            local_90 = param_1[0xf];
            local_88 = 0;
            uStack_80 = 0;
            local_78 = 0;
            local_98 = param_1;
            pcVar17 = (char *)maximum_expression_nesting_depth_exceeded
                                        (&local_d8,pcVar15 + 1,0,&local_68);
            if (pcVar17 == (char *)0x0) goto LAB_140767139;
            param_1[0x12] = uStack_c0;
            if (*pcVar17 != '}') {
              FUN_140399a50(param_1[1],param_1[2],*(longlong *)(param_2 + 6) - param_1[2],
                            "expected \'}\' at end of interpolated expression");
              uVar11 = 0xffffffff;
              goto LAB_1407673fb;
            }
            pcVar17 = pcVar17 + 1;
            lVar12 = local_68;
          }
          local_68 = lVar12;
          local_d8 = *param_4;
          uStack_d0 = (undefined4)param_4[1];
          uStack_cc = *(undefined4 *)((longlong)param_4 + 0xc);
          local_c8 = param_4[2];
          local_b8 = param_4[4];
          lStack_b0 = param_4[5];
          lStack_a8 = param_4[6];
          lStack_a0 = param_4[7];
          local_98 = (undefined8 *)param_4[8];
          uStack_c0 = 0x160;
          iVar5 = unknown_type_for_initializer(param_1,local_68,param_3,&local_d8);
          if (iVar5 != 0) {
            ecs_expr_initializer_t(param_1,local_68);
            goto LAB_140767139;
          }
          if ((*(longlong *)(local_68 + 8) != 0x160) &&
             (local_68 = invalid_cast_from_s_to_s(param_1,local_68,0x160), local_68 == 0))
          goto LAB_140767139;
          lVar12 = local_68;
          param_2 = local_e8;
          puVar13 = local_f8;
          plVar10 = (longlong *)FUN_1403b2f60(local_f8,local_f0,8);
          puVar4 = local_100;
          *plVar10 = lVar12;
          *pcVar15 = '\0';
          if (pcVar16 != pcVar15) {
            puVar8 = (undefined8 *)FUN_1403b2f60(puVar13,local_100,8);
            *puVar8 = pcVar16;
          }
          puVar13 = (undefined8 *)FUN_1403b2f60(puVar13,puVar4);
          *puVar13 = 0;
          param_4 = local_e0;
          pcVar15 = pcVar17;
          if (*pcVar17 == '\0') goto switchD_140766a14_caseD_e;
        }
      }
      else if ((cVar1 == '{') || (cVar1 == '$')) goto LAB_140766a9c;
LAB_140766a56:
      pcVar15 = pcVar15 + 1;
    }
    if (pcVar17 != pcVar15) {
      puVar13 = (undefined8 *)FUN_1403b2f60(local_f8,local_100,8);
      *puVar13 = pcVar17;
    }
    goto switchD_140766a14_caseD_e;
  case 2:
    iVar5 = cannot_deduce_variable_name_not_a_member(param_1,param_2,param_3,param_4);
    break;
  case 3:
    lVar12 = FUN_140758660(param_3);
    *(longlong *)(param_2 + 2) = lVar12;
    if (lVar12 == 0) {
      FUN_140399a50(param_1[1],param_1[2],*(longlong *)(param_2 + 6) - param_1[2],
                    "unknown type for initializer");
      uVar11 = 0xffffffff;
      goto LAB_1407673fb;
    }
    piVar9 = (int *)FUN_1400ba4f0(*param_1,lVar12,0x16e);
    if (piVar9 == (int *)0x0) {
      bVar18 = false;
    }
    else {
      bVar18 = *piVar9 - 5U < 2;
    }
    *(bool *)((longlong)param_2 + 0x39) = bVar18;
    iVar5 = cannot_open_scope_for_type_s(param_3);
    uVar11 = 0xffffffff;
    if (iVar5 != 0) goto LAB_1407673fb;
    iVar5 = invalid_collection_literal_for_type_s(param_1,param_2,param_3);
    if (iVar5 != 0) goto LAB_140767139;
    iVar5 = missing_resize_for_opaque_type_s(param_3);
    uVar11 = 0xffffffff;
    if (iVar5 != 0) goto LAB_1407673fb;
    goto switchD_140766a14_caseD_e;
  case 4:
    iVar5 = unknown_type_for_initializer(param_1,*(undefined8 *)(param_2 + 8),param_3,param_4);
    uVar11 = 0xffffffff;
    if (iVar5 != 0) goto LAB_1407673fb;
    *(undefined8 *)(param_2 + 2) = 0x151;
    if (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0x151) {
      lVar12 = invalid_cast_from_s_to_s(param_1);
      uVar11 = 0xffffffff;
      *(longlong *)(param_2 + 8) = lVar12;
      if (lVar12 == 0) goto LAB_1407673fb;
    }
    goto switchD_140766a14_caseD_e;
  case 5:
    iVar5 = invalid_binary_expression(param_1,param_2,param_3,param_4);
    break;
  case 6:
    iVar5 = cannot_cast_identifier_s_to_s(param_1,param_2,param_3,param_4);
    break;
  case 7:
    iVar5 = variable_s_is_not_initialized(param_1,param_2,param_3,param_4);
    break;
  case 8:
    iVar5 = entity_s_is_not_a_variable(param_1,param_2,param_4[4],param_4[5]);
    break;
  case 9:
    piVar9 = *(int **)(param_2 + 8);
    if (*piVar9 == 0xb) {
      pcVar15 = strrchr(*(char **)(piVar9 + 10),0x2e);
      if (pcVar15 == (char *)0x0) {
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(piVar9 + 8);
        *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(piVar9 + 10);
        piVar9[8] = 0;
        piVar9[9] = 0;
        ecs_expr_initializer_t(param_1);
        bVar18 = true;
        pcVar17 = (char *)0x0;
        pcVar15 = (char *)0x0;
      }
      else {
        *(char **)(param_2 + 0xc) = pcVar15 + 1;
        *pcVar15 = '\0';
        bVar18 = true;
        pcVar17 = (char *)0x0;
      }
    }
    else if (*piVar9 == 6) {
      pcVar17 = *(char **)(piVar9 + 8);
      pcVar15 = strrchr(pcVar17,0x2e);
      if ((pcVar15 == pcVar17 || pcVar15 == (char *)0x0) || (pcVar15[-1] == '\\')) {
        *(char **)(param_2 + 0xc) = pcVar17;
        bVar18 = false;
      }
      else {
        *(char **)(param_2 + 0xc) = pcVar15 + 1;
        *pcVar15 = '\0';
        bVar18 = true;
      }
    }
    else {
      pcVar17 = (char *)0x0;
      pcVar15 = (char *)0x0;
      bVar18 = false;
    }
    memset(param_3,0,0x820);
    iVar5 = unknown_type_for_initializer(param_1,*(undefined8 *)(param_2 + 8),param_3,param_4);
    if (iVar5 == 0) {
      uVar11 = *param_1;
      pcVar16 = *(char **)(param_2 + 0xc);
      if (bVar18) {
        local_110 = (longlong *)CONCAT71(local_110._1_7_,1);
        local_118 = (longlong *)0x0;
        lVar12 = FUN_1403ae520(uVar11,*(undefined8 *)(*(longlong *)(param_2 + 8) + 8),pcVar16,".");
        if (lVar12 == 0) {
          if (pcVar17 == (char *)0x0) {
            local_118 = (longlong *)0x0;
            plVar10 = (longlong *)
                      FUN_1403ae340(uVar11,0,*(undefined8 *)(*(longlong *)(param_2 + 8) + 8),".");
            local_118 = *(longlong **)(param_2 + 0xc);
            uVar11 = param_1[1];
            lVar12 = param_1[2];
            lVar14 = *(longlong *)(param_2 + 6) - lVar12;
            pcVar15 = "unresolved method identifier \'%s\' for type \'%s\'";
            local_110 = plVar10;
            goto LAB_1407673e8;
          }
          *pcVar15 = '.';
          *(char **)(param_2 + 0xc) = pcVar17;
          pcVar16 = pcVar17;
          goto LAB_1407671c7;
        }
        puVar13 = (undefined8 *)FUN_1400ba4f0(uVar11,lVar12,DAT_1416dfba0);
        if (puVar13 == (undefined8 *)0x0) {
LAB_14076737a:
          local_118 = (longlong *)0x0;
          plVar10 = (longlong *)FUN_1403ae340(uVar11,0,lVar12,".");
          uVar11 = param_1[1];
          lVar12 = param_1[2];
          lVar14 = *(longlong *)(param_2 + 6) - lVar12;
          pcVar15 = "entity \'%s\' is not a valid method";
          local_118 = plVar10;
          goto LAB_1407673e8;
        }
        *param_2 = 10;
        *(undefined8 *)(param_2 + 2) = *puVar13;
        *(longlong *)(param_2 + 0xe) = lVar12;
        *(undefined8 *)(param_2 + 0x10) = puVar13[3];
        *(undefined8 *)(param_2 + 0x16) = puVar13[0x16];
      }
      else {
LAB_1407671c7:
        lVar12 = (*(code *)param_4[4])(uVar11,pcVar16,param_4[5]);
        if (lVar12 == 0) {
          local_118 = *(longlong **)(param_2 + 0xc);
          FUN_140399a50(param_1[1],param_1[2],*(longlong *)(param_2 + 6) - param_1[2],
                        "unresolved function identifier \'%s\'");
          uVar11 = 0xffffffff;
          goto LAB_1407673fb;
        }
        puVar13 = (undefined8 *)FUN_1400ba4f0(uVar11,lVar12,DAT_1416dfb98);
        if (puVar13 == (undefined8 *)0x0) goto LAB_14076737a;
        *(undefined8 *)(param_2 + 2) = *puVar13;
        *(longlong *)(param_2 + 0xe) = lVar12;
        *(undefined8 *)(param_2 + 0x10) = puVar13[3];
        *(undefined8 *)(param_2 + 0x16) = puVar13[0x16];
        param_2[0x14] = 0;
      }
      iVar5 = _anon_C953E3F2::Decoration<__int64>::vfunction3
                        ((Decoration<__int64> *)(*(longlong *)(param_2 + 10) + 0x20));
      iVar7 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)(puVar13 + 1));
      if (iVar5 != iVar7) {
        uVar6 = _anon_C953E3F2::Decoration<__int64>::vfunction3
                          ((Decoration<__int64> *)(puVar13 + 1));
        local_110 = (longlong *)CONCAT44(local_110._4_4_,iVar5);
        local_118 = (longlong *)CONCAT44(local_118._4_4_,uVar6);
        FUN_140399a50(param_1[1],param_1[2],*(longlong *)(param_2 + 6) - param_1[2],
                      "expected %d arguments, got %d");
        uVar11 = 0xffffffff;
        goto LAB_1407673fb;
      }
      local_d8 = 0;
      local_118 = &local_d8;
      iVar5 = missing_value_for_function_argument
                        (param_1,*(undefined8 *)(param_2 + 10),param_4,puVar13);
      if (iVar5 == 0) {
        if (local_d8 != 0) {
          if (*(longlong *)(param_2 + 2) == DAT_1416dfb80) {
            *(longlong *)(param_2 + 2) = local_d8;
          }
          iVar5 = type_s_cannot_be_passed_to_vector_argument_of(param_1,param_2,puVar13);
          if (iVar5 != 0) goto LAB_140767139;
        }
        goto switchD_140766a14_caseD_e;
      }
    }
LAB_140767139:
    uVar11 = 0xffffffff;
    goto LAB_1407673fb;
  case 10:
  case 0xd:
    redabortreset_bluesreset
              (7,
               "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/visit_type.c"
               ,0x8f4,0);
    (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
    abort();
  case 0xb:
    iVar5 = unknown_type_for_initializer(param_1,*(undefined8 *)(param_2 + 8),param_3,param_4);
    uVar11 = 0xffffffff;
    if (iVar5 != 0) goto LAB_1407673fb;
    uVar11 = *param_1;
    uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 8);
    piVar9 = (int *)FUN_1400ba4f0(uVar11,uVar3,0x16e);
    if (piVar9 == (int *)0x0) {
      local_118 = (longlong *)0x0;
      plVar10 = (longlong *)FUN_1403ae340(uVar11,0,uVar3,".");
      uVar11 = param_1[1];
      lVar12 = param_1[2];
      lVar14 = *(longlong *)(param_2 + 6) - lVar12;
      pcVar15 = "cannot resolve member on value of type \'%s\' (missing reflection data)";
      local_118 = plVar10;
    }
    else if (*piVar9 == 3) {
      iVar5 = cannot_open_scope_for_type_s(param_3);
      if (iVar5 != 0) goto LAB_140767139;
      uVar6 = FUN_140399c00(0xfffffffc);
      iVar5 = FUN_140757ef0(param_3,*(undefined8 *)(param_2 + 10));
      FUN_140399c00(uVar6);
      if (iVar5 == 0) {
        uVar11 = FUN_140758660(param_3);
        *(undefined8 *)(param_2 + 2) = uVar11;
        uVar11 = FUN_1407579b0(param_3);
        *(undefined8 *)(param_2 + 0xc) = uVar11;
        goto switchD_140766a14_caseD_e;
      }
      local_118 = (longlong *)0x0;
      plVar10 = (longlong *)FUN_1403ae340(uVar11,0,uVar3,".");
      uVar11 = param_1[1];
      lVar12 = param_1[2];
      lVar14 = *(longlong *)(param_2 + 6) - lVar12;
      pcVar15 = "unresolved member \'%s\' for type \'%s\'";
      local_118 = *(longlong **)(param_2 + 10);
      local_110 = plVar10;
    }
    else {
      local_118 = (longlong *)0x0;
      plVar10 = (longlong *)FUN_1403ae340(uVar11,0,uVar3,".");
      uVar11 = param_1[1];
      lVar12 = param_1[2];
      lVar14 = *(longlong *)(param_2 + 6) - lVar12;
      pcVar15 = "cannot resolve member on non-struct type \'%s\'";
      local_118 = plVar10;
    }
LAB_1407673e8:
    FUN_140399a50(uVar11,lVar12,lVar14,pcVar15);
    (*DAT_1415033b0)(plVar10);
    uVar11 = 0xffffffff;
    goto LAB_1407673fb;
  case 0xc:
    iVar5 = unresolved_component_identifier_s(param_1,param_2,param_3,param_4);
    break;
  default:
    goto switchD_140766a14_caseD_e;
  case 0x10:
    iVar5 = any_must_be_the_last_case_in_match(param_1,param_2,param_3,param_4);
    break;
  case 0x11:
    *(undefined8 *)(param_2 + 2) = 0x161;
    goto switchD_140766a14_caseD_e;
  }
  uVar11 = 0xffffffff;
  if (iVar5 == 0) {
switchD_140766a14_caseD_e:
    uVar11 = FUN_1403a5610(*param_1,*(undefined8 *)(param_2 + 2));
    *(undefined8 *)(param_2 + 4) = uVar11;
    uVar11 = 0;
  }
LAB_1407673fb:
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_138)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_138);
}


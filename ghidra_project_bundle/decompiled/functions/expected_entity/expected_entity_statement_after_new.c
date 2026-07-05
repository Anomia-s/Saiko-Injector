/**
 * Function: expected_entity_statement_after_new
 * Address:  1407634a0
 * Signature: undefined expected_entity_statement_after_new(void)
 * Body size: 2793 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * expected_entity_statement_after_new
                 (undefined8 *param_1,undefined8 param_2,int *param_3,int param_4,longlong *param_5)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  int *piVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  size_t sVar15;
  char *pcVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined8 uVar20;
  char *pcVar21;
  bool bVar22;
  double dVar23;
  undefined1 auStack_1098 [32];
  longlong *local_1078;
  longlong local_1070;
  undefined4 *local_1068;
  char *local_1060;
  int local_1058;
  int iStack_1054;
  uint uStack_1050;
  int iStack_104c;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_1098;
  iVar8 = *param_3;
  plVar19 = (longlong *)(param_3 + (longlong)iVar8 * 4 + 2);
  *(longlong **)(param_3 + 0x402) = plVar19;
  *param_3 = iVar8 + 1;
  pcVar10 = (char *)missing_digits_in_number_literal(param_1,param_2,plVar19,0);
  pcVar21 = (char *)0x0;
  if (pcVar10 == (char *)0x0) goto LAB_140763f43;
  if (0x65 < param_3[(longlong)iVar8 * 4 + 4] - 0x21U) {
switchD_140763538_caseD_22:
    lVar12 = *plVar19;
LAB_1407639e0:
    local_1078 = (longlong *)FUN_1405d8a20();
    uVar20 = *param_1;
    uVar18 = param_1[1];
    pcVar10 = pcVar10 + ~uVar18;
joined_r0x000140763bb1:
    if (lVar12 == 0) {
      pcVar21 = "unexpected %s";
    }
    else {
      pcVar21 = "unexpected %s\'%s\'";
      local_1070 = lVar12;
    }
LAB_140763bc3:
    FUN_140399a50(uVar20,uVar18,pcVar10,pcVar21);
    pcVar21 = (char *)0x0;
    goto LAB_140763f43;
  }
  piVar1 = param_3 + 2;
  switch(param_3[(longlong)iVar8 * 4 + 4]) {
  case 0x21:
    lVar12 = FUN_140761790(param_1);
    if (*(short *)((longlong)param_1 + 0x36) < 0x40) {
      plVar19 = (longlong *)(lVar12 + 0x20);
      *(short *)((longlong)param_1 + 0x36) = *(short *)((longlong)param_1 + 0x36) + 1;
      memset(&local_1058,0,0x1008);
      local_50 = &uStack_1050;
      uVar2 = *(undefined1 *)((longlong)param_1 + 0x32);
      *(undefined1 *)((longlong)param_1 + 0x32) = 1;
      local_1078 = plVar19;
      pcVar10 = (char *)expected_entity_statement_after_new(param_1,pcVar10,&local_1058,0x21);
      *(undefined1 *)((longlong)param_1 + 0x32) = uVar2;
      *(short *)((longlong)param_1 + 0x36) = *(short *)((longlong)param_1 + 0x36) + -1;
      if (pcVar10 != (char *)0x0) {
        *(undefined4 *)(lVar12 + 0x28) = 0x21;
        *param_5 = lVar12;
        goto LAB_140763c5d;
      }
      if (*plVar19 != 0) {
        ecs_expr_initializer_t(param_1[8]);
        *plVar19 = 0;
      }
    }
    else {
      FUN_140399a50(*param_1,param_1[1],(longlong)pcVar10 - param_1[1],
                    "maximum expression nesting depth exceeded");
    }
    goto LAB_140763c07;
  default:
    goto switchD_140763538_caseD_22;
  case 0x27:
    lVar12 = FUN_140761350(param_1,**(undefined8 **)(param_3 + 0x402));
    goto LAB_140763ac2;
  case 0x28:
    lVar12 = maximum_expression_nesting_depth_exceeded(param_1,pcVar10,0,param_5);
    pcVar21 = (char *)0x0;
    if (lVar12 == 0) goto LAB_140763f43;
    iVar8 = *param_3;
    *param_3 = iVar8 + 1;
    plVar19 = (longlong *)(piVar1 + (longlong)iVar8 * 4);
    pcVar10 = (char *)missing_digits_in_number_literal(param_1,lVar12,plVar19,0);
    pcVar21 = (char *)0x0;
    if (pcVar10 == (char *)0x0) goto LAB_140763f43;
    if ((int)plVar19[1] == 0x29) goto LAB_140763c5d;
    lVar12 = *plVar19;
    goto LAB_1407639e0;
  case 0x2d:
    lVar12 = FUN_1407617d0(param_1);
    pcVar10 = (char *)maximum_expression_nesting_depth_exceeded(param_1,pcVar10,0x21,lVar12 + 0x28);
    if (pcVar10 != (char *)0x0) {
      uVar20 = FUN_140761440(param_1,0xffffffffffffffff);
      *(undefined8 *)(lVar12 + 0x20) = uVar20;
      *(undefined4 *)(lVar12 + 0x30) = 0x2a;
      *param_5 = lVar12;
      goto LAB_140763c5d;
    }
LAB_140763c07:
    uVar20 = param_1[8];
LAB_140763c0e:
    ecs_expr_initializer_t(uVar20,lVar12);
    pcVar21 = (char *)0x0;
    goto LAB_140763f43;
  case 0x5b:
    lVar12 = unexpected_ss(param_1,pcVar10,&local_1058);
    if (lVar12 == 0) {
LAB_140763a14:
      ecs_expr_initializer_t(param_1[8]);
      pcVar21 = (char *)0x0;
      goto LAB_140763f43;
    }
    *(undefined1 *)(CONCAT44(iStack_1054,local_1058) + 0x38) = 1;
    *param_5 = CONCAT44(iStack_1054,local_1058);
    iVar8 = *param_3;
    *param_3 = iVar8 + 1;
    plVar19 = (longlong *)(piVar1 + (longlong)iVar8 * 4);
    pcVar21 = (char *)missing_digits_in_number_literal(param_1,lVar12,plVar19,0);
    if (pcVar21 != (char *)0x0) {
      if ((int)plVar19[1] == 0x5d) {
LAB_1407638f8:
        *(int **)(param_3 + 0x402) = piVar1;
        goto LAB_140763f43;
      }
LAB_14076395c:
      lVar12 = *plVar19;
      local_1078 = (longlong *)FUN_1405d8a20();
      uVar20 = *param_1;
      uVar18 = param_1[1];
      pcVar21 = pcVar21 + ~uVar18;
      lVar13 = local_1070;
joined_r0x000140763977:
      local_1070 = lVar12;
      if (local_1070 == 0) {
        pcVar10 = "unexpected %s";
        local_1070 = lVar13;
      }
      else {
        pcVar10 = "unexpected %s\'%s\'";
      }
LAB_140763f1e:
      FUN_140399a50(uVar20,uVar18,pcVar21,pcVar10);
    }
    break;
  case 0x70:
  case 0x71:
    pcVar21 = (char *)**(undefined8 **)(param_3 + 0x402);
    if (*pcVar21 == '$') {
      puVar11 = (undefined4 *)FUN_140761740(param_1,pcVar21 + 1);
    }
    else {
      iVar9 = strcmp(pcVar21,"true");
      if (iVar9 == 0) {
        uVar20 = 1;
      }
      else {
        iVar9 = strcmp(pcVar21,"false");
        if (iVar9 != 0) {
          pcVar16 = strrchr(pcVar21,0x2e);
          if ((pcVar16 == (char *)0x0) || (pcVar16[1] != '$')) {
            puVar11 = (undefined4 *)FUN_1407616f0(param_1,pcVar21);
          }
          else {
            local_1060 = pcVar16 + 1;
            local_1068 = (undefined4 *)FUN_140761740(param_1,pcVar21);
            sVar15 = strlen(pcVar16 + 2);
            memmove(local_1060,pcVar16 + 2,(longlong)((int)sVar15 + 1));
            *local_1068 = 8;
            puVar11 = local_1068;
          }
          goto LAB_140763b65;
        }
        uVar20 = 0;
      }
      puVar11 = (undefined4 *)FUN_1407612f0(param_1,uVar20);
    }
LAB_140763b65:
    *param_5 = (longlong)puVar11;
    if ((param_3[(longlong)iVar8 * 4 + 4] != 0x71) ||
       (pcVar10 = (char *)expected_end_of_argument_list(param_1,pcVar10,param_5),
       pcVar10 != (char *)0x0)) goto LAB_140763c5d;
    break;
  case 0x72:
    cVar7 = FUN_140761030(**(undefined8 **)(param_3 + 0x402));
    if (cVar7 == '\0') {
      lVar12 = FUN_140761510(param_1,**(undefined8 **)(param_3 + 0x402));
    }
    else {
      lVar12 = FUN_1407615b0();
    }
LAB_140763ac2:
    *param_5 = lVar12;
LAB_140763c5d:
    *(int **)(param_3 + 0x402) = piVar1;
    pcVar21 = pcVar10;
    if (*pcVar10 != '\0') {
      do {
        *(int **)(param_3 + 0x402) = piVar1 + (longlong)*param_3 * 4;
        uVar18 = param_1[3];
        pcVar10 = (char *)missing_digits_in_number_literal(param_1,pcVar21,&local_1058,1);
        if (pcVar10 == (char *)0x0) {
          lVar12 = missing_digits_in_number_literal(param_1,pcVar21,&local_1058,0);
          if (lVar12 == 0) goto LAB_140763f23;
          local_1078 = (longlong *)FUN_1405d8a20(uStack_1050);
          uVar20 = *param_1;
          uVar18 = param_1[1];
          pcVar21 = pcVar21 + ~uVar18;
          lVar12 = CONCAT44(iStack_1054,local_1058);
          lVar13 = local_1070;
          goto joined_r0x000140763977;
        }
        iVar8 = *param_3;
        *param_3 = iVar8 + 1;
        piVar5 = piVar1 + (longlong)iVar8 * 4;
        *piVar5 = local_1058;
        piVar5[1] = iStack_1054;
        piVar5[2] = uStack_1050;
        piVar5[3] = iStack_104c;
        switch(uStack_1050) {
        case 0x25:
        case 0x26:
        case 0x2a:
        case 0x2b:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x5b:
        case 100:
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6a:
        case 0x6b:
        case 0x6e:
        case 0x6f:
        case 0x7c:
          iVar8 = *(int *)(&DAT_141246b80 + (longlong)param_4 * 4);
          uVar6 = uStack_1050;
          break;
        default:
          *param_3 = *param_3 + -1;
          goto LAB_140763f2a;
        case 0x73:
          if (*pcVar21 != '-') {
            uVar20 = *param_1;
            uVar18 = param_1[1];
            pcVar21 = pcVar21 + ~uVar18;
            pcVar10 = "unexpected number";
            goto LAB_140763f1e;
          }
          pcVar10 = pcVar21 + 1;
          uStack_1050 = 0x2d;
          iVar8 = *(int *)(&DAT_141246b80 + (longlong)param_4 * 4);
          uVar6 = uStack_1050;
        }
        uStack_1050 = uVar6;
        if ((iVar8 != 0) && (iVar8 <= *(int *)(&DAT_141246b80 + (ulonglong)uVar6 * 4))) {
LAB_140763f2a:
          uVar17 = param_1[5];
          if ((ulonglong)param_1[5] < uVar18) {
            uVar17 = uVar18;
          }
          param_1[3] = uVar17;
          *(int **)(param_3 + 0x402) = piVar1;
          break;
        }
        if (uVar6 == 0x2e) {
          iVar8 = *param_3;
          *param_3 = iVar8 + 1;
          plVar19 = (longlong *)(piVar1 + (longlong)iVar8 * 4);
          pcVar10 = (char *)missing_digits_in_number_literal(param_1,pcVar10,plVar19,0);
          if (pcVar10 == (char *)0x0) goto LAB_140763f23;
          if ((*(uint *)(plVar19 + 1) & 0xfffffffe) != 0x70) {
LAB_140763eeb:
            lVar12 = *plVar19;
            local_1078 = (longlong *)FUN_1405d8a20();
            uVar20 = *param_1;
            uVar18 = param_1[1];
            pcVar21 = pcVar10 + ~uVar18;
            lVar13 = local_1070;
            goto joined_r0x000140763977;
          }
          lVar12 = FUN_140761810(param_1);
          *(longlong *)(lVar12 + 0x20) = *param_5;
          *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)(*(longlong *)(param_3 + 0x402) + 0x10);
          *param_5 = lVar12;
          if ((int)plVar19[1] != 0x71) goto LAB_140763c80;
          pcVar10 = (char *)expected_end_of_argument_list(param_1,pcVar10);
LAB_140763e76:
          if (pcVar10 == (char *)0x0) goto LAB_140763f23;
        }
        else {
          if (uVar6 != 0x5b) {
            lVar12 = FUN_1407617d0(param_1);
            *(longlong *)(lVar12 + 0x20) = *param_5;
            *(uint *)(lVar12 + 0x30) = uVar6;
            *param_5 = lVar12;
            local_1078 = (longlong *)(lVar12 + 0x28);
            pcVar10 = (char *)expected_entity_statement_after_new
                                        (param_1,pcVar10,param_3,*(undefined4 *)(lVar12 + 0x30));
            goto LAB_140763e76;
          }
          lVar12 = FUN_140761890();
          *(longlong *)(lVar12 + 0x20) = *param_5;
          *param_5 = lVar12;
          local_1078 = (longlong *)(lVar12 + 0x28);
          lVar12 = expected_entity_statement_after_new(param_1,pcVar10,param_3,0);
          if (lVar12 == 0) goto LAB_140763f23;
          iVar8 = *param_3;
          *param_3 = iVar8 + 1;
          plVar19 = (longlong *)(piVar1 + (longlong)iVar8 * 4);
          pcVar10 = (char *)missing_digits_in_number_literal(param_1,lVar12,plVar19,0);
          if (pcVar10 == (char *)0x0) goto LAB_140763f23;
          if ((int)plVar19[1] != 0x5d) goto LAB_140763eeb;
        }
LAB_140763c80:
        uVar17 = param_1[3];
        param_1[5] = uVar17;
        if (uVar17 < uVar18) {
          uVar17 = uVar18;
        }
        param_1[3] = uVar17;
        *(int **)(param_3 + 0x402) = piVar1;
        bVar22 = pcVar10 != pcVar21;
        pcVar21 = pcVar10;
      } while (bVar22);
    }
    goto LAB_140763f43;
  case 0x73:
    pcVar21 = (char *)**(undefined8 **)(param_3 + 0x402);
    cVar7 = *pcVar21;
    uVar18 = (ulonglong)(cVar7 == '-');
    if (pcVar21[uVar18] == '0') {
      bVar4 = pcVar21[uVar18 + 1];
      uVar20 = 0x10;
      if (bVar4 < 0x62) {
        if (bVar4 != 0x42) {
          if (bVar4 != 0x58) goto LAB_140763b08;
          goto LAB_140763c21;
        }
      }
      else if (bVar4 != 0x62) {
        if (bVar4 == 0x78) goto LAB_140763c21;
        goto LAB_140763b08;
      }
      lVar12 = strtoull(pcVar21 + uVar18 + 2,&local_1058,2);
      if (cVar7 == '-') {
        lVar12 = -lVar12;
LAB_140763c34:
        lVar12 = FUN_140761440(param_1,lVar12);
      }
      else {
LAB_140763c47:
        lVar12 = FUN_140761440(param_1,lVar12);
      }
    }
    else {
LAB_140763b08:
      pcVar16 = strchr(pcVar21,0x2e);
      if (((pcVar16 == (char *)0x0) && (pcVar16 = strchr(pcVar21,0x65), pcVar16 == (char *)0x0)) &&
         (pcVar16 = strchr(pcVar21,0x45), pcVar16 == (char *)0x0)) {
        uVar20 = 10;
LAB_140763c21:
        if (cVar7 != '-') {
          lVar12 = strtoull(pcVar21,&local_1058,uVar20);
          goto LAB_140763c47;
        }
        lVar12 = strtoll();
        goto LAB_140763c34;
      }
      dVar23 = atof(pcVar21);
      lVar12 = FUN_1407614a0(param_1,SUB84(dVar23,0));
    }
    *param_5 = lVar12;
    goto LAB_140763c5d;
  case 0x7b:
    lVar12 = unexpected_ss(param_1,pcVar10,0x7d,&local_1058);
    if (lVar12 == 0) goto LAB_140763a14;
    *param_5 = CONCAT44(iStack_1054,local_1058);
    iVar8 = *param_3;
    *param_3 = iVar8 + 1;
    plVar19 = (longlong *)(piVar1 + (longlong)iVar8 * 4);
    pcVar21 = (char *)missing_digits_in_number_literal(param_1,lVar12,plVar19,0);
    if (pcVar21 != (char *)0x0) {
      if ((int)plVar19[1] == 0x7d) goto LAB_1407638f8;
      goto LAB_14076395c;
    }
    break;
  case 0x85:
    lVar12 = FUN_1407618d0(param_1);
    lVar13 = maximum_expression_nesting_depth_exceeded(param_1,pcVar10,0,lVar12 + 0x20);
    if (lVar13 != 0) {
      iVar8 = *param_3;
      *param_3 = iVar8 + 1;
      plVar19 = (longlong *)(piVar1 + (longlong)iVar8 * 4);
      pcVar10 = (char *)missing_digits_in_number_literal(param_1,lVar13,plVar19,0);
      pcVar21 = (char *)0x0;
      if (pcVar10 == (char *)0x0) goto LAB_140763f43;
      if ((int)plVar19[1] == 0x7b) {
        lVar13 = unexpected_ss(param_1,pcVar10,lVar12);
        if (lVar13 == 0) goto LAB_140763aca;
        iVar8 = *param_3;
        *param_3 = iVar8 + 1;
        plVar19 = (longlong *)(piVar1 + (longlong)iVar8 * 4);
        pcVar10 = (char *)missing_digits_in_number_literal(param_1,lVar13,plVar19,0);
        pcVar21 = (char *)0x0;
        if (pcVar10 == (char *)0x0) goto LAB_140763f43;
        if ((int)plVar19[1] == 0x7d) {
          *param_5 = lVar12;
          *(int **)(param_3 + 0x402) = piVar1;
          pcVar21 = pcVar10;
          goto LAB_140763f43;
        }
      }
      lVar12 = *plVar19;
      local_1078 = (longlong *)FUN_1405d8a20();
      uVar20 = *param_1;
      uVar18 = param_1[1];
      pcVar10 = pcVar10 + ~uVar18;
      goto joined_r0x000140763bb1;
    }
LAB_140763aca:
    uVar20 = param_1[8];
    goto LAB_140763c0e;
  case 0x86:
    lVar12 = FUN_140761910(param_1);
    *param_5 = lVar12;
    iVar8 = _anon_C953E3F2::Decoration<__int64>::vfunction3
                      ((Decoration<__int64> *)(param_1[9] + 0x10));
    uVar2 = *(undefined1 *)(param_1 + 6);
    uVar3 = *(undefined1 *)((longlong)param_1 + 0x32);
    *(undefined1 *)((longlong)param_1 + 0x32) = 0;
    *(undefined1 *)(param_1 + 6) = 1;
    lVar13 = unexpected_ss(param_1,pcVar10);
    if (lVar13 == 0) {
      *(undefined1 *)(param_1 + 6) = uVar2;
      pcVar21 = (char *)0x0;
      goto LAB_140763f43;
    }
    *(undefined1 *)((longlong)param_1 + 0x32) = uVar3;
    *(undefined1 *)(param_1 + 6) = uVar2;
    pcVar21 = (char *)FUN_1403d2d50(lVar13);
    iVar9 = _anon_C953E3F2::Decoration<__int64>::vfunction3
                      ((Decoration<__int64> *)(param_1[9] + 0x10));
    if ((iVar9 - iVar8 == 1) &&
       (puVar14 = (undefined8 *)FUN_1403b30b0(param_1[9] + 0x10,8), puVar14 != (undefined8 *)0x0)) {
      piVar5 = (int *)*puVar14;
      FUN_1403b3040(param_1[9] + 0x10);
      if (*piVar5 == 0x10) {
        *(int **)(lVar12 + 0x20) = piVar5;
        *(int **)(param_3 + 0x402) = piVar1;
        goto LAB_140763f43;
      }
    }
    uVar20 = *param_1;
    uVar18 = param_1[1];
    pcVar10 = pcVar21 + ~uVar18;
    pcVar21 = "expected entity statement after new";
    goto LAB_140763bc3;
  }
LAB_140763f23:
  pcVar21 = (char *)0x0;
LAB_140763f43:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_1098)) {
    return pcVar21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_1098);
}


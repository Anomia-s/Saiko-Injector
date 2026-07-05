/**
 * Function: unexpected_ss
 * Address:  140764430
 * Signature: undefined unexpected_ss(void)
 * Body size: 1129 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong unexpected_ss(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  char *pcVar11;
  undefined1 auStack_20c8 [32];
  longlong *local_20a8;
  int local_2090;
  int iStack_208c;
  int iStack_2088;
  int iStack_2084;
  int local_2080 [2];
  int local_2078 [1024];
  int *local_1078;
  longlong local_1070;
  int local_1068 [1024];
  int *local_68;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x140764446;
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_20c8;
  puVar2 = (undefined4 *)vececs_expr_initializer_element_t();
  *param_3 = puVar2;
  lVar7 = param_1[8];
  memset(local_2080,0,0x1008);
  uVar6 = param_1[3];
  local_1078 = local_2078;
  lVar3 = missing_digits_in_number_literal(param_1,param_2,&local_2090,1);
  if (lVar3 == 0) {
LAB_14076479b:
    lVar7 = missing_digits_in_number_literal(param_1,param_2,&local_2090,0);
    if (lVar7 == 0) goto LAB_1407647fa;
    local_1070 = CONCAT44(iStack_208c,local_2090);
    lVar3 = param_2;
LAB_1407647bc:
    local_20a8 = (longlong *)FUN_1405d8a20(iStack_2088);
    uVar9 = *param_1;
    uVar6 = param_1[1];
    param_2 = ~uVar6 + lVar3;
    if (local_1070 == 0) {
      pcVar11 = "unexpected %s";
    }
    else {
      pcVar11 = "unexpected %s\'%s\'";
    }
LAB_1407647f5:
    FUN_140399a50(uVar9,uVar6,param_2,pcVar11);
  }
  else {
    lVar8 = (longlong)local_2080[0];
    local_2078[lVar8 * 4] = local_2090;
    local_2078[lVar8 * 4 + 1] = iStack_208c;
    local_2078[lVar8 * 4 + 2] = iStack_2088;
    local_2078[lVar8 * 4 + 3] = iStack_2084;
    if (iStack_2088 == 0x5d) {
      *puVar2 = 3;
      local_2080[0] = local_2080[0] + 1;
LAB_1407644e1:
      lVar3 = lVar3 + -1;
      goto LAB_1407647fc;
    }
    uVar4 = param_1[5];
    if ((ulonglong)param_1[5] < uVar6) {
      uVar4 = uVar6;
    }
    param_1[3] = uVar4;
    puVar5 = (undefined8 *)FUN_1403b2f60(lVar7 + 0x18,puVar2 + 8,0x20);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    if (0x3f < *(short *)((longlong)param_1 + 0x36)) {
LAB_14076452c:
      uVar9 = *param_1;
      uVar6 = param_1[1];
      param_2 = param_2 - uVar6;
      pcVar11 = "maximum expression nesting depth exceeded";
      goto LAB_1407647f5;
    }
    plVar10 = puVar5 + 1;
    *(short *)((longlong)param_1 + 0x36) = *(short *)((longlong)param_1 + 0x36) + 1;
    memset(&local_1070,0,0x1008);
    uVar1 = *(undefined1 *)((longlong)param_1 + 0x32);
    *(undefined1 *)((longlong)param_1 + 0x32) = 1;
    local_20a8 = plVar10;
    local_68 = local_1068;
    lVar3 = expected_entity_statement_after_new(param_1,param_2,&local_1070,0);
    *(undefined1 *)((longlong)param_1 + 0x32) = uVar1;
    if (lVar3 == 0) {
LAB_14076482f:
      *(short *)((longlong)param_1 + 0x36) = *(short *)((longlong)param_1 + 0x36) + -1;
      if (*plVar10 != 0) {
        ecs_expr_initializer_t(param_1[8]);
        *plVar10 = 0;
      }
    }
    else {
      *(short *)((longlong)param_1 + 0x36) = *(short *)((longlong)param_1 + 0x36) + -1;
      uVar6 = param_1[3];
      param_2 = missing_digits_in_number_literal(param_1,lVar3,&local_1070,1);
      if (param_2 != 0) {
        if ((local_1068[0] != 0x2c) && (param_2 = lVar3, local_1068[0] == 0x5d)) goto LAB_1407647fc;
        uVar4 = param_1[5];
        if ((ulonglong)param_1[5] < uVar6) {
          uVar4 = uVar6;
        }
        param_1[3] = uVar4;
        memset(local_2080,0,0x1008);
        local_1078 = local_2078;
        lVar3 = missing_digits_in_number_literal(param_1,param_2,&local_2090,1);
        if (lVar3 == 0) goto LAB_14076479b;
        lVar8 = (longlong)local_2080[0];
        local_2080[0] = local_2080[0] + 1;
        local_2078[lVar8 * 4] = local_2090;
        local_2078[lVar8 * 4 + 1] = iStack_208c;
        local_2078[lVar8 * 4 + 2] = iStack_2088;
        local_2078[lVar8 * 4 + 3] = iStack_2084;
        if (iStack_2088 != 0x5d) {
          do {
            local_2080[0] = local_2080[0] + -1;
            uVar6 = param_1[5];
            if ((ulonglong)param_1[5] < uVar4) {
              uVar6 = uVar4;
            }
            param_1[3] = uVar6;
            puVar5 = (undefined8 *)FUN_1403b2f60(lVar7 + 0x18,puVar2 + 8,0x20);
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
            if (0x3f < *(short *)((longlong)param_1 + 0x36)) goto LAB_14076452c;
            plVar10 = puVar5 + 1;
            *(short *)((longlong)param_1 + 0x36) = *(short *)((longlong)param_1 + 0x36) + 1;
            memset(&local_1070,0,0x1008);
            local_68 = local_1068;
            uVar1 = *(undefined1 *)((longlong)param_1 + 0x32);
            *(undefined1 *)((longlong)param_1 + 0x32) = 1;
            local_20a8 = plVar10;
            lVar3 = expected_entity_statement_after_new(param_1,param_2,&local_1070,0);
            *(undefined1 *)((longlong)param_1 + 0x32) = uVar1;
            if (lVar3 == 0) goto LAB_14076482f;
            *(short *)((longlong)param_1 + 0x36) = *(short *)((longlong)param_1 + 0x36) + -1;
            uVar6 = param_1[3];
            param_2 = missing_digits_in_number_literal(param_1,lVar3,&local_1070,1);
            if (param_2 == 0) goto LAB_140764852;
            if ((local_1068[0] != 0x2c) && (param_2 = lVar3, local_1068[0] == 0x5d))
            goto LAB_1407647fc;
            uVar4 = param_1[5];
            if ((ulonglong)param_1[5] < uVar6) {
              uVar4 = uVar6;
            }
            param_1[3] = uVar4;
            memset(local_2080,0,0x1008);
            local_1078 = local_2078;
            lVar3 = missing_digits_in_number_literal(param_1,param_2,&local_2090);
            if (lVar3 == 0) goto LAB_14076479b;
            lVar8 = (longlong)local_2080[0];
            local_2080[0] = local_2080[0] + 1;
            local_2078[lVar8 * 4] = local_2090;
            local_2078[lVar8 * 4 + 1] = iStack_208c;
            local_2078[lVar8 * 4 + 2] = iStack_2088;
            local_2078[lVar8 * 4 + 3] = iStack_2084;
          } while (iStack_2088 != 0x5d);
        }
        goto LAB_1407644e1;
      }
LAB_140764852:
      lVar7 = missing_digits_in_number_literal(param_1,lVar3,&local_1070,0);
      iStack_2088 = local_1068[0];
      if (lVar7 != 0) goto LAB_1407647bc;
    }
  }
LAB_1407647fa:
  lVar3 = 0;
LAB_1407647fc:
  if (DAT_1414ef3c0 != (local_60 ^ (ulonglong)auStack_20c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_60 ^ (ulonglong)auStack_20c8);
  }
  return lVar3;
}


/**
 * Function: unexpected_end_of_rule_parser_error
 * Address:  1403b04b0
 * Signature: undefined unexpected_end_of_rule_parser_error(void)
 * Body size: 629 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001403b05b1) */

undefined8 unexpected_end_of_rule_parser_error(undefined8 *param_1,char *param_2,longlong param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 uVar6;
  longlong *plVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined1 auStack_1088 [32];
  undefined8 local_1068;
  longlong local_1060;
  int local_1058 [2];
  longlong local_1050;
  int local_1048 [1022];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_1088;
  bVar2 = false;
  memset(local_1058,0,0x1008);
  puVar1 = (undefined8 *)param_1[10];
  local_50 = &local_1050;
  iVar3 = strcmp(param_2,"and");
  if (iVar3 == 0) {
    uVar6 = 4;
    uVar9 = 0;
LAB_1403b05d7:
    local_1058[0] = 1;
    uVar4 = 0;
    param_3 = missing_digits_in_number_literal(param_1,param_3,&local_1050,0);
    if (param_3 == 0) goto LAB_1403b06d2;
    lVar5 = local_1050;
    if (local_1048[0] == 0x7c) {
      lVar5 = (longlong)local_1058[0];
      local_1058[0] = local_1058[0] + 1;
      plVar7 = &local_1050 + lVar5 * 2;
      uVar4 = 0;
      param_3 = missing_digits_in_number_literal(param_1,param_3,plVar7,0);
      if (param_3 == 0) goto LAB_1403b06d2;
      iVar3 = local_1048[lVar5 * 4];
      if (iVar3 < 0x70) {
        if (iVar3 == 0x28) {
          uVar4 = unexpected_ss(param_1,param_3);
          goto LAB_1403b06d2;
        }
        if (iVar3 == 0x2a) goto LAB_1403b06a5;
      }
      else if ((iVar3 == 0x73) || (iVar3 == 0x70)) {
LAB_1403b06a5:
        if (bVar2) {
          *puVar1 = uVar9;
        }
        else {
          *(undefined2 *)((longlong)puVar1 + 0x42) = uVar6;
        }
        puVar1[4] = local_50[2];
        goto LAB_1403b06ca;
      }
      lVar5 = *plVar7;
    }
    local_1068 = FUN_1405d8a20();
    if (lVar5 == 0) {
      pcVar8 = "unexpected %s";
    }
    else {
      pcVar8 = "unexpected %s\'%s\'";
      local_1060 = lVar5;
    }
    FUN_140399a50(*param_1,param_1[1],~param_1[1] + param_3,pcVar8);
    uVar4 = 0;
  }
  else {
    if (((*param_2 == 'o') && (param_2[1] == 'r')) && (param_2[2] == '\0')) {
      uVar6 = 5;
LAB_1403b05d1:
      uVar9 = 0;
      bVar2 = false;
      goto LAB_1403b05d7;
    }
    iVar3 = strcmp(param_2,"not");
    if (iVar3 == 0) {
      uVar6 = 6;
      goto LAB_1403b05d1;
    }
    iVar3 = strcmp(param_2,"auto_override");
    if (iVar3 == 0) {
      uVar9 = 0x4000000000000000;
LAB_1403b059b:
      bVar2 = true;
      uVar6 = 0;
      goto LAB_1403b05d7;
    }
    iVar3 = strcmp(param_2,"toggle");
    if (iVar3 == 0) {
      uVar9 = 0x2000000000000000;
      goto LAB_1403b059b;
    }
    puVar1[4] = param_2;
LAB_1403b06ca:
    uVar4 = cannot_mix_operators_in_expression(param_1,param_3);
  }
LAB_1403b06d2:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_1088)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_1088);
}


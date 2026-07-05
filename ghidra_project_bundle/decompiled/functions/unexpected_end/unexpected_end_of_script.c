/**
 * Function: unexpected_end_of_script
 * Address:  1405efea0
 * Signature: undefined unexpected_end_of_script(void)
 * Body size: 495 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong unexpected_end_of_script(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined1 auStack_1088 [32];
  undefined8 local_1068;
  int local_1058;
  int iStack_1054;
  int iStack_1050;
  int iStack_104c;
  int local_1048 [2];
  int local_1040 [1024];
  int *local_40;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_1088;
  memset(local_1048,0,0x1008);
  local_40 = local_1040;
  if (*(short *)((longlong)param_1 + 0x34) < 0x40) {
    *(short *)((longlong)param_1 + 0x34) = *(short *)((longlong)param_1 + 0x34) + 1;
    uVar1 = param_1[9];
    param_1[9] = param_2;
    uVar6 = param_1[3];
    lVar2 = missing_digits_in_number_literal(param_1,param_3,&local_1058,1);
    if (lVar2 != 0) {
      do {
        lVar4 = (longlong)local_1048[0];
        local_1040[lVar4 * 4] = local_1058;
        local_1040[lVar4 * 4 + 1] = iStack_1054;
        local_1040[lVar4 * 4 + 2] = iStack_1050;
        local_1040[lVar4 * 4 + 3] = iStack_104c;
        if (iStack_1050 == 0x7d) {
          param_1[9] = uVar1;
          *(short *)((longlong)param_1 + 0x34) = *(short *)((longlong)param_1 + 0x34) + -1;
          local_1048[0] = local_1048[0] + 1;
          goto LAB_1405f0057;
        }
        if (iStack_1050 == 0) {
          uVar5 = *param_1;
          uVar6 = param_1[1];
          param_3 = ~uVar6 + param_3;
          pcVar7 = "unexpected end of script";
          local_1048[0] = local_1048[0] + 1;
          goto LAB_1405f0048;
        }
        uVar3 = param_1[5];
        if ((ulonglong)param_1[5] < uVar6) {
          uVar3 = uVar6;
        }
        param_1[3] = uVar3;
        param_3 = unexpected_ss(param_1,param_3);
        if (param_3 == 0) goto LAB_1405f004d;
        local_1048[0] = 0;
        uVar6 = param_1[3];
        lVar2 = missing_digits_in_number_literal(param_1,param_3,&local_1058,1);
      } while (lVar2 != 0);
    }
    lVar2 = missing_digits_in_number_literal(param_1,param_3,&local_1058,0);
    if (lVar2 != 0) {
      local_1068 = FUN_1405d8a20(iStack_1050);
      uVar5 = *param_1;
      uVar6 = param_1[1];
      param_3 = ~uVar6 + param_3;
      if (CONCAT44(iStack_1054,local_1058) == 0) {
        pcVar7 = "unexpected %s";
      }
      else {
        pcVar7 = "unexpected %s\'%s\'";
      }
LAB_1405f0048:
      FUN_140399a50(uVar5,uVar6,param_3,pcVar7);
    }
LAB_1405f004d:
    param_1[9] = uVar1;
    *(short *)((longlong)param_1 + 0x34) = *(short *)((longlong)param_1 + 0x34) + -1;
  }
  else {
    FUN_140399a50(*param_1,param_1[1],param_3 - param_1[1],"maximum scope nesting depth exceeded");
  }
  lVar2 = 0;
LAB_1405f0057:
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_1088)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_1088);
}


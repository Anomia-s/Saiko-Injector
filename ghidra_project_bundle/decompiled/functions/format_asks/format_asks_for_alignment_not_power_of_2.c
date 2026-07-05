/**
 * Function: format_asks_for_alignment_not_power_of_2
 * Address:  1406af400
 * Signature: undefined format_asks_for_alignment_not_power_of_2(void)
 * Body size: 231 bytes
 */


void format_asks_for_alignment_not_power_of_2
               (undefined8 *param_1,uint param_2,undefined8 *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  iVar2 = integral_size_d_out_of_limits_1d(param_1,param_3,param_4);
  if (iVar2 == 7) {
    if (*(char *)*param_3 != '\0') {
      iVar3 = integral_size_d_out_of_limits_1d(param_1,param_3,&local_2c);
      if ((iVar3 != 3) && (local_2c != 0)) goto LAB_1406af474;
    }
                    /* WARNING: Subroutine does not return */
    invalid_argument_d_s(*param_1,1,"invalid next option for option \'X\'");
  }
  local_2c = *param_4;
LAB_1406af474:
  uVar4 = 0;
  if (iVar2 != 3 && 1 < (int)local_2c) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)local_2c < (int)*(uint *)((longlong)param_1 + 0xc)) {
      uVar1 = local_2c;
    }
    uVar4 = uVar1 - 1;
    if ((uVar1 & uVar4) != 0) {
                    /* WARNING: Subroutine does not return */
      invalid_argument_d_s(*param_1,1,"format asks for alignment not power of 2");
    }
    uVar4 = uVar1 - (param_2 & uVar4) & uVar4;
  }
  *param_5 = uVar4;
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_58);
}


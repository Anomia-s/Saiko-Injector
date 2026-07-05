/**
 * Function: data_string_too_short
 * Address:  1406ad660
 * Signature: undefined data_string_too_short(void)
 * Body size: 458 bytes
 */


undefined8 data_string_too_short(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_f8 [32];
  int *local_d8;
  undefined8 local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  undefined4 uStack_b4;
  char *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulonglong local_70;
  
  local_70 = DAT_1414ef3c0 ^ (ulonglong)auStack_f8;
  pcVar4 = (char *)FUN_1406b7610(param_1,1,0);
  local_b0 = pcVar4;
  local_c8 = FUN_1406b7610(param_1,2,&local_b8);
  iVar1 = local_b8;
  iVar2 = FUN_1406b78a0(param_1,3,1);
  iVar2 = (iVar2 >> 0x1f & iVar1 + 1U) + iVar2;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  uVar6 = iVar2 - 1;
  if (CONCAT44(uStack_b4,local_b8) < (ulonglong)uVar6) {
                    /* WARNING: Subroutine does not return */
    invalid_argument_d_s(param_1,3,"initial position out of string");
  }
  local_a0 = 0x100000001;
  local_a8 = param_1;
  if (*pcVar4 == '\0') {
    FUN_140474150(param_1);
    if (DAT_1414ef3c0 == (local_70 ^ (ulonglong)auStack_f8)) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_70 ^ (ulonglong)auStack_f8);
  }
  local_d8 = &local_c0;
  uVar3 = format_asks_for_alignment_not_power_of_2
                    (&local_a8,(longlong)(int)uVar6,&local_b0,&local_bc);
  if ((ulonglong)((longlong)local_bc + (longlong)local_c0) <=
      (ulonglong)(CONCAT44(uStack_b4,local_b8) - (longlong)(int)uVar6)) {
    stack_overflow_s(param_1,2,"too many results");
                    /* WARNING: Could not recover jumptable at 0x0001406ad7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*(code *)(&DAT_14121848c + *(int *)(&DAT_14121848c + (ulonglong)uVar3 * 4)))();
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  invalid_argument_d_s(param_1,2,"data string too short");
}


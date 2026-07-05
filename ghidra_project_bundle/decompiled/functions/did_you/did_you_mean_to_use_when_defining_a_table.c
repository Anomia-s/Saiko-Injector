/**
 * Function: did_you_mean_to_use_when_defining_a_table
 * Address:  140799890
 * Signature: undefined did_you_mean_to_use_when_defining_a_table(void)
 * Body size: 287 bytes
 */


AstExprGroup * did_you_mean_to_use_when_defining_a_table(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  AstExprGroup *pAVar3;
  char *pcVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x80) == 0x28) {
    uVar1 = *(undefined8 *)(param_1 + 0x84);
    local_34 = 0x28;
    local_30 = uVar1;
    FUN_140787100(param_1);
    uVar2 = unexpected_did_you_mean_not(param_1,0);
    if (*(int *)(param_1 + 0x80) == 0x29) {
      local_40 = *(undefined8 *)(param_1 + 0x8c);
      FUN_140787100(param_1);
    }
    else {
      pcVar4 = (char *)0x0;
      if (*(int *)(param_1 + 0x80) == 0x3d) {
        pcVar4 = "; did you mean to use \'{\' when defining a table?";
      }
      expected_s_to_close_s_at_column_d_got_ss(param_1,0x29,&local_34,pcVar4);
      local_40 = *(undefined8 *)(param_1 + 0xa8);
    }
    local_48 = uVar1;
    pAVar3 = (AstExprGroup *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x28);
    Luau::AstExprGroup::AstExprGroup(pAVar3,&local_48,uVar2);
    if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_68)) {
      return pAVar3;
    }
  }
  else if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_68)) {
    pAVar3 = (AstExprGroup *)type_function_cannot_reference_outer_local_s(param_1,"expression");
    return pAVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_68);
}


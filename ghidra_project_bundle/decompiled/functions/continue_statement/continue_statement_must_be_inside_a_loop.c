/**
 * Function: continue_statement_must_be_inside_a_loop
 * Address:  14078c420
 * Signature: undefined continue_statement_must_be_inside_a_loop(void)
 * Body size: 230 bytes
 */


AstStatContinue * continue_statement_must_be_inside_a_loop(longlong param_1,undefined8 *param_2)

{
  AstStatContinue *pAVar1;
  undefined1 auStack_78 [32];
  char *local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)(param_1 + 0x150) + -4) == 0) {
    pAVar1 = (AstStatContinue *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x28);
    Luau::AstStatContinue::AstStatContinue(pAVar1,param_2);
    local_30 = (undefined8 *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),8);
    local_28 = 1;
    *local_30 = pAVar1;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = "continue statement must be inside a loop";
    pAVar1 = (AstStatContinue *)FUN_14078dc30(param_1,param_2,&local_48,&local_30);
  }
  else {
    pAVar1 = (AstStatContinue *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x28);
    Luau::AstStatContinue::AstStatContinue(pAVar1,param_2);
  }
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_78)) {
    return pAVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_78);
}


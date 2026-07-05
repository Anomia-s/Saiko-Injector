/**
 * Function: break_statement_must_be_inside_a_loop
 * Address:  14078ae20
 * Signature: undefined break_statement_must_be_inside_a_loop(void)
 * Body size: 248 bytes
 */


AstStatBreak * break_statement_must_be_inside_a_loop(longlong param_1)

{
  AstStatBreak *pAVar1;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  local_38 = *(undefined4 *)(param_1 + 0x84);
  uStack_34 = *(undefined4 *)(param_1 + 0x88);
  uStack_30 = *(undefined4 *)(param_1 + 0x8c);
  uStack_2c = *(undefined4 *)(param_1 + 0x90);
  FUN_140787100();
  if (*(int *)(*(longlong *)(param_1 + 0x150) + -4) == 0) {
    pAVar1 = (AstStatBreak *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x28);
    Luau::AstStatBreak::AstStatBreak(pAVar1,(undefined8 *)&local_38);
    local_48 = (undefined8 *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),8);
    local_40 = 1;
    *local_48 = pAVar1;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = "break statement must be inside a loop";
    pAVar1 = (AstStatBreak *)FUN_14078dc30(param_1,&local_38,&local_58,&local_48);
  }
  else {
    pAVar1 = (AstStatBreak *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x28);
    Luau::AstStatBreak::AstStatBreak(pAVar1,(undefined8 *)&local_38);
  }
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_88)) {
    return pAVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_88);
}


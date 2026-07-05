/**
 * Function: assigned_expression_must_be_a_variable_or_a_f
 * Address:  14078bfc0
 * Signature: undefined assigned_expression_must_be_a_variable_or_a_f(void)
 * Body size: 342 bytes
 */


AstStatCompoundAssign *
assigned_expression_must_be_a_variable_or_a_f
          (longlong param_1,AstStatCompoundAssign_vftable *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  AstStatCompoundAssign *this;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStackY_78 [32];
  AstStatCompoundAssign *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStackY_78;
  iVar1 = *(int *)&param_2->vfunction6;
  if ((((iVar1 != DAT_1416f23d8) && (iVar1 != DAT_1416f23dc)) && (iVar1 != DAT_1416f23ec)) &&
     (iVar1 != DAT_1416f23e8)) {
    local_48 = (AstStatCompoundAssign *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),8);
    local_40 = 1;
    local_48->vftablePtr = param_2;
    param_2 = (AstStatCompoundAssign_vftable *)
              FUN_140792890(param_1,(undefined1 *)((longlong)&param_2->vfunction6 + 4),&local_48,
                            "Assigned expression must be a variable or a field");
  }
  uVar2 = *(undefined8 *)(param_1 + 0x84);
  FUN_140787100(param_1);
  lVar3 = unexpected_did_you_mean_not(param_1,0);
  local_48 = *(AstStatCompoundAssign **)((longlong)&param_2->vfunction6 + 4);
  local_40 = *(undefined8 *)(lVar3 + 0x14);
  this = (AstStatCompoundAssign *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x40);
  Luau::AstStatCompoundAssign::AstStatCompoundAssign(this,&local_48,param_3,param_2,lVar3);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    uVar4 = FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0xc);
    FUN_14079f130(uVar4,uVar2);
    local_48 = this;
    puVar5 = (undefined8 *)FUN_14078e300(param_1 + 0x420,&local_48);
    *puVar5 = uVar4;
  }
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStackY_78)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStackY_78);
}


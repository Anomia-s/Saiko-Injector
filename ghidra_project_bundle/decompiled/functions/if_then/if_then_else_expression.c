/**
 * Function: if_then_else_expression
 * Address:  14079be90
 * Signature: undefined if_then_else_expression(void)
 * Body size: 505 bytes
 */


AstExprIfElse *
if_then_else_expression(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  AstExprIfElse *pAVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStackY_a8 [32];
  AstExprIfElse *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStackY_a8;
  pAVar10 = *(AstExprIfElse **)(param_1 + 0x84);
  FUN_140787100();
  uVar7 = unexpected_did_you_mean_not(param_1,0);
  uVar5 = *(undefined8 *)(param_1 + 0x84);
  iVar2 = *(int *)(param_1 + 0x80);
  if (iVar2 == 0x134) {
    FUN_140787100(param_1);
  }
  else {
    FUN_14079c360(param_1,0x134,"if then else expression");
  }
  uVar8 = unexpected_did_you_mean_not(param_1,0);
  uVar6 = *(undefined8 *)(param_1 + 0x84);
  iVar3 = *(int *)(param_1 + 0x80);
  if (iVar3 == 0x127) {
    iVar4 = *(int *)(param_1 + 0x114);
    uVar1 = iVar4 + 1;
    *(uint *)(param_1 + 0x114) = uVar1;
    if (DAT_141700390 < uVar1) {
                    /* WARNING: Subroutine does not return */
      Luau::ParseError::ParseError_Constructor_or_Destructor
                ((undefined8 *)(param_1 + 0x84),
                 "Exceeded allowed recursion depth; simplify your %s to make the code compile",
                 "expression",param_4);
    }
    lVar9 = if_then_else_expression(param_1);
    *(int *)(param_1 + 0x114) = iVar4;
    bVar12 = true;
  }
  else {
    bVar12 = iVar3 == 0x126;
    if (bVar12) {
      FUN_140787100(param_1);
    }
    else {
      FUN_14079c360(param_1,0x126,"if then else expression");
    }
    lVar9 = unexpected_did_you_mean_not(param_1,0);
  }
  local_50 = *(undefined8 *)(lVar9 + 0x14);
  local_58 = pAVar10;
  pAVar10 = (AstExprIfElse *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x48);
  Luau::AstExprIfElse::AstExprIfElse(pAVar10,&local_58,uVar7,iVar2 == 0x134,uVar8,bVar12,lVar9);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    uVar8 = FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x18);
    FUN_14079efb0(uVar8,uVar5,uVar6,
                  CONCAT71((int7)((ulonglong)uVar7 >> 8),iVar3 == 0x127) & 0xffffffff);
    local_58 = pAVar10;
    puVar11 = (undefined8 *)FUN_14078e300(param_1 + 0x420,&local_58);
    *puVar11 = uVar8;
  }
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStackY_a8)) {
    return pAVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStackY_a8);
}


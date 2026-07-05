/**
 * Function: AstExprVarargs
 * Address:  1406c2560
 * Signature: void __thiscall AstExprVarargs(AstExprVarargs * this, undefined8 * param_1)
 * Body size: 40 bytes
 */


void __thiscall Luau::AstExprVarargs::AstExprVarargs(AstExprVarargs *this,undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f23e0;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstExprVarargs_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  this->vftablePtr = &vftable;
  return;
}


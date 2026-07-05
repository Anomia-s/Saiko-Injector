/**
 * Function: AstExprConstantNil
 * Address:  1406c2360
 * Signature: void __thiscall AstExprConstantNil(AstExprConstantNil * this, undefined8 * param_1)
 * Body size: 40 bytes
 */


void __thiscall
Luau::AstExprConstantNil::AstExprConstantNil(AstExprConstantNil *this,undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f23c8;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstExprConstantNil_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  this->vftablePtr = &vftable;
  return;
}


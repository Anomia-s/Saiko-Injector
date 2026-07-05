/**
 * Function: AstExprUnary
 * Address:  1406c2a30
 * Signature: void __thiscall AstExprUnary(AstExprUnary * this, undefined8 * param_1, undefined4 param_2, undefined8 param_3)
 * Body size: 48 bytes
 */


void __thiscall
Luau::AstExprUnary::AstExprUnary
          (AstExprUnary *this,undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f23f8;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstExprUnary_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  this->vftablePtr = &vftable;
  *(undefined4 *)&(this->AstNode_data).offset_0x18 = param_2;
  (this->AstNode_data).offset_0x20 = param_3;
  return;
}


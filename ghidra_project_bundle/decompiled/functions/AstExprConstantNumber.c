/**
 * Function: AstExprConstantNumber
 * Address:  1406c2400
 * Signature: void __thiscall AstExprConstantNumber(AstExprConstantNumber * this, undefined8 * param_2, undefined8 param_3, undefined4 param_4)
 * Body size: 49 bytes
 */


void __thiscall
Luau::AstExprConstantNumber::AstExprConstantNumber
          (AstExprConstantNumber *this,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f23d0;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstExprConstantNumber_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_2[1];
  (this->AstNode_data).offset_0x4 = *param_2;
  (this->AstNode_data).offset_0xc = uVar1;
  this->vftablePtr = &vftable;
  (this->AstNode_data).offset_0x18 = param_3;
  *(undefined4 *)&(this->AstNode_data).offset_0x20 = param_4;
  return;
}


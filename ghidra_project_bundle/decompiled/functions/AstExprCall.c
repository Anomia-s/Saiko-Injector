/**
 * Function: AstExprCall
 * Address:  1406c25b0
 * Signature: void __thiscall AstExprCall(AstExprCall * this, undefined8 * param_1, undefined8 param_2, undefined8 * param_3, undefined1 param_4, undefined8 * param_5, undefined8 * param_6)
 * Body size: 91 bytes
 */


void __thiscall
Luau::AstExprCall::AstExprCall
          (AstExprCall *this,undefined8 *param_1,undefined8 param_2,undefined8 *param_3,
          undefined1 param_4,undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f23e4;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstExprCall_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  this->vftablePtr = &vftable;
  (this->AstNode_data).offset_0x18 = param_2;
  uVar1 = param_5[1];
  (this->AstNode_data).offset_0x20 = *param_5;
  (this->AstNode_data).offset_0x28 = uVar1;
  uVar1 = param_3[1];
  (this->AstNode_data).offset_0x30 = *param_3;
  (this->AstNode_data).offset_0x38 = uVar1;
  (this->AstNode_data).offset_0x40 = param_4;
  uVar1 = param_6[1];
  *(undefined8 *)&(this->AstNode_data).field_0x44 = *param_6;
  *(undefined8 *)&(this->AstNode_data).field_0x4c = uVar1;
  return;
}


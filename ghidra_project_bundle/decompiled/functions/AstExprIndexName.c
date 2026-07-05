/**
 * Function: AstExprIndexName
 * Address:  1406c2680
 * Signature: void __thiscall AstExprIndexName(AstExprIndexName * this, undefined8 * param_1, undefined8 param_2, undefined8 * param_3, undefined8 * param_4, undefined8 * param_5, undefined1 param_6)
 * Body size: 88 bytes
 */


void __thiscall
Luau::AstExprIndexName::AstExprIndexName
          (AstExprIndexName *this,undefined8 *param_1,undefined8 param_2,undefined8 *param_3,
          undefined8 *param_4,undefined8 *param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f23e8;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstExprIndexName_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  this->vftablePtr = &vftable;
  (this->AstNode_data).offset_0x18 = param_2;
  (this->AstNode_data).offset_0x20 = *param_3;
  uVar1 = param_4[1];
  (this->AstNode_data).offset_0x28 = *param_4;
  (this->AstNode_data).offset_0x30 = uVar1;
  (this->AstNode_data).offset_0x38 = *param_5;
  (this->AstNode_data).offset_0x40 = param_6;
  return;
}


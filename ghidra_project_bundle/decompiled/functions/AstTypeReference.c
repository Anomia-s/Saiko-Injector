/**
 * Function: AstTypeReference
 * Address:  1406c3db0
 * Signature: void __thiscall AstTypeReference(AstTypeReference * this, undefined8 * param_1, undefined8 * param_2, undefined8 param_3, undefined8 * param_4, undefined8 * param_5, undefined1 param_6, undefined8 * param_7)
 * Body size: 111 bytes
 */


void __thiscall
Luau::AstTypeReference::AstTypeReference
          (AstTypeReference *this,undefined8 *param_1,undefined8 *param_2,undefined8 param_3,
          undefined8 *param_4,undefined8 *param_5,undefined1 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f2460;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstTypeReference_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  this->vftablePtr = &vftable;
  *(undefined1 *)&(this->AstNode_data).offset_0x18 = param_6;
  uVar1 = param_2[1];
  (this->AstNode_data).offset_0x20 = *param_2;
  (this->AstNode_data).offset_0x28 = uVar1;
  uVar1 = param_4[1];
  (this->AstNode_data).offset_0x30 = *param_4;
  (this->AstNode_data).offset_0x38 = uVar1;
  *(undefined4 *)&(this->AstNode_data).offset_0x40 = *(undefined4 *)(param_4 + 2);
  *(undefined8 *)&(this->AstNode_data).offset_0x48 = param_3;
  uVar1 = param_5[1];
  (this->AstNode_data).offset_0x50 = *param_5;
  (this->AstNode_data).offset_0x58 = uVar1;
  uVar1 = param_7[1];
  (this->AstNode_data).offset_0x60 = *param_7;
  (this->AstNode_data).offset_0x68 = uVar1;
  return;
}


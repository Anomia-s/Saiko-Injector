/**
 * Function: AstExprFunction
 * Address:  1406c27a0
 * Signature: void __thiscall AstExprFunction(AstExprFunction * this, undefined8 * param_1, undefined8 * param_2, undefined8 * param_3, undefined8 * param_4, undefined8 param_5, undefined8 * param_6, undefined1 param_7, undefined8 * param_8, undefined8 param_9, undefined8 param_10, undefined8 * param_11, undefined8 param_12, undefined8 param_13, undefined8 * param_14)
 * Body size: 229 bytes
 */


void __thiscall
Luau::AstExprFunction::AstExprFunction
          (AstExprFunction *this,undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
          undefined8 *param_4,undefined8 param_5,undefined8 *param_6,undefined1 param_7,
          undefined8 *param_8,undefined8 param_9,undefined8 param_10,undefined8 *param_11,
          undefined8 param_12,undefined8 param_13,undefined8 *param_14)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f23f0;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstExprFunction_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  this->vftablePtr = &vftable;
  uVar1 = param_2[1];
  (this->AstNode_data).offset_0x18 = *param_2;
  (this->AstNode_data).offset_0x20 = uVar1;
  uVar1 = param_3[1];
  (this->AstNode_data).offset_0x28 = *param_3;
  (this->AstNode_data).offset_0x30 = uVar1;
  uVar1 = param_4[1];
  (this->AstNode_data).offset_0x38 = *param_4;
  *(undefined8 *)&(this->AstNode_data).offset_0x40 = uVar1;
  *(undefined8 *)&(this->AstNode_data).offset_0x48 = param_5;
  uVar1 = param_6[1];
  (this->AstNode_data).offset_0x50 = *param_6;
  (this->AstNode_data).offset_0x58 = uVar1;
  (this->AstNode_data).offset_0x60 = param_12;
  *(undefined1 *)&(this->AstNode_data).offset_0x68 = param_7;
  uVar1 = param_8[1];
  *(undefined8 *)((longlong)&(this->AstNode_data).offset_0x68 + 4) = *param_8;
  *(undefined8 *)((longlong)&(this->AstNode_data).offset_0x70 + 4) = uVar1;
  (this->AstNode_data).offset_0x80 = param_13;
  (this->AstNode_data).offset_0x88 = param_9;
  *(undefined8 *)&(this->AstNode_data).offset_0x90 = param_10;
  (this->AstNode_data).offset_0x98 = *param_11;
  uVar1 = param_14[1];
  (this->AstNode_data).offset_0xa0 = *param_14;
  (this->AstNode_data).offset_0xa8 = uVar1;
  (this->AstNode_data).offset_0xb0 = *(undefined4 *)(param_14 + 2);
  return;
}


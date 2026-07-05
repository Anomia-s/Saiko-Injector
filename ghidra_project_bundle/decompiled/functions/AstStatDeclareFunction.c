/**
 * Function: AstStatDeclareFunction
 * Address:  1406c3a90
 * Signature: void __thiscall AstStatDeclareFunction(AstStatDeclareFunction * this, undefined8 * param_1, undefined8 * param_2, undefined8 * param_3, undefined8 * param_4, undefined8 * param_5, undefined8 * param_6, undefined8 * param_7, undefined8 * param_8, undefined1 param_9, undefined8 * param_10, undefined8 param_11)
 * Body size: 208 bytes
 */


void __thiscall
Luau::AstStatDeclareFunction::AstStatDeclareFunction
          (AstStatDeclareFunction *this,undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
          undefined8 *param_4,undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,
          undefined8 *param_8,undefined1 param_9,undefined8 *param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f2458;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstStatDeclareFunction_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  *(undefined1 *)&(this->AstNode_data).offset_0x18 = 0;
  this->vftablePtr = &vftable;
  uVar1 = param_2[1];
  (this->AstNode_data).offset_0x20 = *param_2;
  (this->AstNode_data).offset_0x28 = uVar1;
  (this->AstNode_data).offset_0x30 = *param_3;
  uVar1 = param_4[1];
  (this->AstNode_data).offset_0x38 = *param_4;
  *(undefined8 *)&(this->AstNode_data).offset_0x40 = uVar1;
  uVar1 = param_5[1];
  *(undefined8 *)&(this->AstNode_data).offset_0x48 = *param_5;
  (this->AstNode_data).offset_0x50 = uVar1;
  uVar1 = param_6[1];
  (this->AstNode_data).offset_0x58 = *param_6;
  (this->AstNode_data).offset_0x60 = uVar1;
  (this->AstNode_data).offset_0x78 = param_7[2];
  uVar1 = param_7[1];
  (this->AstNode_data).offset_0x68 = *param_7;
  (this->AstNode_data).offset_0x70 = uVar1;
  uVar1 = param_8[1];
  (this->AstNode_data).offset_0x80 = *param_8;
  (this->AstNode_data).offset_0x88 = uVar1;
  (this->AstNode_data).offset_0x90 = param_9;
  uVar1 = param_10[1];
  *(undefined8 *)&(this->AstNode_data).field_0x94 = *param_10;
  *(undefined8 *)((longlong)&(this->AstNode_data).offset_0x98 + 4) = uVar1;
  (this->AstNode_data).offset_0xa8 = param_11;
  return;
}


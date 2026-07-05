/**
 * Function: AstTypeFunction
 * Address:  1406c3fb0
 * Signature: void __thiscall AstTypeFunction(AstTypeFunction * this, undefined8 * param_1, undefined8 * param_2, undefined8 * param_3, undefined8 * param_4, undefined8 * param_5, undefined8 * param_6, undefined8 param_7)
 * Body size: 117 bytes
 */


void __thiscall
Luau::AstTypeFunction::AstTypeFunction
          (AstTypeFunction *this,undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
          undefined8 *param_4,undefined8 *param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f2468;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstTypeFunction_vftable *)&AstNode::vftable;
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
  (this->AstNode_data).offset_0x58 = param_5[2];
  uVar1 = param_5[1];
  *(undefined8 *)&(this->AstNode_data).offset_0x48 = *param_5;
  (this->AstNode_data).offset_0x50 = uVar1;
  uVar1 = param_6[1];
  (this->AstNode_data).offset_0x60 = *param_6;
  (this->AstNode_data).offset_0x68 = uVar1;
  (this->AstNode_data).offset_0x70 = param_7;
  return;
}


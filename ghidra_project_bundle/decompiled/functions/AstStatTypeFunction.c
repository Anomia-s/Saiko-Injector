/**
 * Function: AstStatTypeFunction
 * Address:  1406c3960
 * Signature: void __thiscall AstStatTypeFunction(AstStatTypeFunction * this, undefined8 * param_1, undefined8 * param_2, undefined8 * param_3, undefined8 param_4, undefined1 param_5, undefined1 param_6)
 * Body size: 90 bytes
 */


void __thiscall
Luau::AstStatTypeFunction::AstStatTypeFunction
          (AstStatTypeFunction *this,undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
          undefined8 param_4,undefined1 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f2450;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstStatTypeFunction_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  *(undefined1 *)&(this->AstNode_data).offset_0x18 = 0;
  this->vftablePtr = &vftable;
  (this->AstNode_data).offset_0x20 = *param_2;
  uVar1 = param_3[1];
  (this->AstNode_data).offset_0x28 = *param_3;
  (this->AstNode_data).offset_0x30 = uVar1;
  (this->AstNode_data).offset_0x38 = param_4;
  (this->AstNode_data).offset_0x40 = param_5;
  (this->AstNode_data).field_0x41 = param_6;
  return;
}


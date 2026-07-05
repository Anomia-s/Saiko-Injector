/**
 * Function: AstTypeError
 * Address:  1406c43b0
 * Signature: void __thiscall AstTypeError(AstTypeError * this, undefined8 * param_1, undefined8 * param_2, undefined1 param_3, undefined4 param_4)
 * Body size: 61 bytes
 */


void __thiscall
Luau::AstTypeError::AstTypeError
          (AstTypeError *this,undefined8 *param_1,undefined8 *param_2,undefined1 param_3,
          undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f2484;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstTypeError_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  this->vftablePtr = &vftable;
  uVar1 = param_2[1];
  (this->AstNode_data).offset_0x18 = *param_2;
  (this->AstNode_data).offset_0x20 = uVar1;
  *(undefined1 *)&(this->AstNode_data).offset_0x28 = param_3;
  *(undefined4 *)((longlong)&(this->AstNode_data).offset_0x28 + 4) = param_4;
  return;
}


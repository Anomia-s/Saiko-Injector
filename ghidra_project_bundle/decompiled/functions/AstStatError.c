/**
 * Function: AstStatError
 * Address:  1406c3cc0
 * Signature: void __thiscall AstStatError(AstStatError * this, undefined8 * param_1, undefined8 * param_2, undefined8 * param_3, undefined4 param_4)
 * Body size: 69 bytes
 */


void __thiscall
Luau::AstStatError::AstStatError
          (AstStatError *this,undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
          undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f2480;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstStatError_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  *(undefined1 *)&(this->AstNode_data).offset_0x18 = 0;
  this->vftablePtr = &vftable;
  uVar1 = param_2[1];
  (this->AstNode_data).offset_0x20 = *param_2;
  (this->AstNode_data).offset_0x28 = uVar1;
  uVar1 = param_3[1];
  (this->AstNode_data).offset_0x30 = *param_3;
  (this->AstNode_data).offset_0x38 = uVar1;
  *(undefined4 *)&(this->AstNode_data).offset_0x40 = param_4;
  return;
}


/**
 * Function: AstStatReturn
 * Address:  1406c31a0
 * Signature: void __thiscall AstStatReturn(AstStatReturn * this, undefined8 * param_1, undefined8 * param_2)
 * Body size: 52 bytes
 */


void __thiscall
Luau::AstStatReturn::AstStatReturn(AstStatReturn *this,undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f2428;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstStatReturn_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  *(undefined1 *)&(this->AstNode_data).offset_0x18 = 0;
  this->vftablePtr = &vftable;
  uVar1 = param_2[1];
  (this->AstNode_data).offset_0x20 = *param_2;
  (this->AstNode_data).offset_0x28 = uVar1;
  return;
}


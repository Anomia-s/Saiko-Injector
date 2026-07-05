/**
 * Function: AstStatBreak
 * Address:  1406c3100
 * Signature: void __thiscall AstStatBreak(AstStatBreak * this, undefined8 * param_1)
 * Body size: 44 bytes
 */


void __thiscall Luau::AstStatBreak::AstStatBreak(AstStatBreak *this,undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f2420;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstStatBreak_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  *(undefined1 *)&(this->AstNode_data).offset_0x18 = 0;
  this->vftablePtr = &vftable;
  return;
}


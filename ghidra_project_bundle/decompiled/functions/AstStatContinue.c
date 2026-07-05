/**
 * Function: AstStatContinue
 * Address:  1406c3150
 * Signature: void __thiscall AstStatContinue(AstStatContinue * this, undefined8 * param_1)
 * Body size: 44 bytes
 */


void __thiscall Luau::AstStatContinue::AstStatContinue(AstStatContinue *this,undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f2424;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstStatContinue_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  *(undefined1 *)&(this->AstNode_data).offset_0x18 = 0;
  this->vftablePtr = &vftable;
  return;
}


/**
 * Function: AstTypeOptional
 * Address:  1406c4130
 * Signature: void __thiscall AstTypeOptional(AstTypeOptional * this, undefined8 * param_1)
 * Body size: 40 bytes
 */


void __thiscall Luau::AstTypeOptional::AstTypeOptional(AstTypeOptional *this,undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f2470;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstTypeOptional_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  this->vftablePtr = &vftable;
  return;
}


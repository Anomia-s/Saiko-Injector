/**
 * Function: AstTypeUnion
 * Address:  1406c4180
 * Signature: void __thiscall AstTypeUnion(AstTypeUnion * this, undefined8 * param_1, undefined8 * param_2)
 * Body size: 48 bytes
 */


void __thiscall
Luau::AstTypeUnion::AstTypeUnion(AstTypeUnion *this,undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f2474;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstTypeUnion_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  this->vftablePtr = &vftable;
  uVar1 = param_2[1];
  (this->AstNode_data).offset_0x18 = *param_2;
  (this->AstNode_data).offset_0x20 = uVar1;
  return;
}


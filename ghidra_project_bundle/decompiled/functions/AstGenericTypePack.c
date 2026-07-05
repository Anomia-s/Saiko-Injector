/**
 * Function: AstGenericTypePack
 * Address:  1406c2270
 * Signature: void __thiscall AstGenericTypePack(AstGenericTypePack * this, undefined8 * param_1, undefined8 param_2, undefined8 param_3)
 * Body size: 48 bytes
 */


void __thiscall
Luau::AstGenericTypePack::AstGenericTypePack
          (AstGenericTypePack *this,undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f23c0;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstGenericTypePack_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  this->vftablePtr = &vftable;
  (this->AstNode_data).offset_0x18 = param_2;
  (this->AstNode_data).offset_0x20 = param_3;
  return;
}


/**
 * Function: AstGenericType
 * Address:  1406c21f0
 * Signature: void __thiscall AstGenericType(AstGenericType * this, undefined8 * param_1, undefined8 param_2, undefined8 param_3)
 * Body size: 48 bytes
 */


void __thiscall
Luau::AstGenericType::AstGenericType
          (AstGenericType *this,undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f23bc;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstGenericType_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  this->vftablePtr = &vftable;
  (this->AstNode_data).offset_0x18 = param_2;
  (this->AstNode_data).offset_0x20 = param_3;
  return;
}


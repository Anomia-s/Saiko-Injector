/**
 * Function: AstTypeSingletonBool
 * Address:  1406c42a0
 * Signature: void __thiscall AstTypeSingletonBool(AstTypeSingletonBool * this, undefined8 * param_1, undefined1 param_2)
 * Body size: 44 bytes
 */


void __thiscall
Luau::AstTypeSingletonBool::AstTypeSingletonBool
          (AstTypeSingletonBool *this,undefined8 *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f2488;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstTypeSingletonBool_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  this->vftablePtr = &vftable;
  *(undefined1 *)&(this->AstNode_data).offset_0x18 = param_2;
  return;
}


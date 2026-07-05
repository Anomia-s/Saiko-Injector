/**
 * Function: AstExprGlobal
 * Address:  1406c2510
 * Signature: void __thiscall AstExprGlobal(AstExprGlobal * this, undefined8 * param_1, undefined8 * param_2)
 * Body size: 47 bytes
 */


void __thiscall
Luau::AstExprGlobal::AstExprGlobal(AstExprGlobal *this,undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f23dc;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstExprGlobal_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  this->vftablePtr = &vftable;
  (this->AstNode_data).offset_0x18 = *param_2;
  return;
}


/**
 * Function: AstExprConstantBool
 * Address:  1406c23b0
 * Signature: void __thiscall AstExprConstantBool(AstExprConstantBool * this, undefined8 * param_1, undefined1 param_2)
 * Body size: 44 bytes
 */


void __thiscall
Luau::AstExprConstantBool::AstExprConstantBool
          (AstExprConstantBool *this,undefined8 *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f23cc;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstExprConstantBool_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  this->vftablePtr = &vftable;
  *(undefined1 *)&(this->AstNode_data).offset_0x18 = param_2;
  return;
}


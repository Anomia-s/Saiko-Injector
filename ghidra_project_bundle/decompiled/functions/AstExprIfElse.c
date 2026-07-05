/**
 * Function: AstExprIfElse
 * Address:  1406c2bb0
 * Signature: void __thiscall AstExprIfElse(AstExprIfElse * this, undefined8 * param_1, undefined8 param_2, undefined1 param_3, undefined8 param_4, undefined1 param_5, undefined8 param_6)
 * Body size: 80 bytes
 */


void __thiscall
Luau::AstExprIfElse::AstExprIfElse
          (AstExprIfElse *this,undefined8 *param_1,undefined8 param_2,undefined1 param_3,
          undefined8 param_4,undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f2404;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstExprIfElse_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  this->vftablePtr = &vftable;
  (this->AstNode_data).offset_0x18 = param_2;
  *(undefined1 *)&(this->AstNode_data).offset_0x20 = param_3;
  (this->AstNode_data).offset_0x28 = param_4;
  *(undefined1 *)&(this->AstNode_data).offset_0x30 = param_5;
  (this->AstNode_data).offset_0x38 = param_6;
  return;
}


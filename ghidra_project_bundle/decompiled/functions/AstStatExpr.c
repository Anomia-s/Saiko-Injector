/**
 * Function: AstStatExpr
 * Address:  1406c3240
 * Signature: void __thiscall AstStatExpr(AstStatExpr * this, undefined8 * param_1, undefined8 param_2)
 * Body size: 48 bytes
 */


void __thiscall
Luau::AstStatExpr::AstStatExpr(AstStatExpr *this,undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f242c;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstStatExpr_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  *(undefined1 *)&(this->AstNode_data).offset_0x18 = 0;
  this->vftablePtr = &vftable;
  (this->AstNode_data).offset_0x20 = param_2;
  return;
}


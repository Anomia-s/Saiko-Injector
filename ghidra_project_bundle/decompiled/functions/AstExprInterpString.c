/**
 * Function: AstExprInterpString
 * Address:  1406c2ca0
 * Signature: void __thiscall AstExprInterpString(AstExprInterpString * this, undefined8 * param_1, undefined8 * param_2, undefined8 * param_3)
 * Body size: 56 bytes
 */


void __thiscall
Luau::AstExprInterpString::AstExprInterpString
          (AstExprInterpString *this,undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f2408;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstExprInterpString_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  this->vftablePtr = &vftable;
  uVar1 = param_2[1];
  (this->AstNode_data).offset_0x18 = *param_2;
  (this->AstNode_data).offset_0x20 = uVar1;
  uVar1 = param_3[1];
  (this->AstNode_data).offset_0x28 = *param_3;
  (this->AstNode_data).offset_0x30 = uVar1;
  return;
}


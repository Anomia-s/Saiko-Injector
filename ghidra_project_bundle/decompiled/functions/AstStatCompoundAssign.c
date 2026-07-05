/**
 * Function: AstStatCompoundAssign
 * Address:  1406c36a0
 * Signature: void __thiscall AstStatCompoundAssign(AstStatCompoundAssign * this, undefined8 * param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4)
 * Body size: 63 bytes
 */


void __thiscall
Luau::AstStatCompoundAssign::AstStatCompoundAssign
          (AstStatCompoundAssign *this,undefined8 *param_1,undefined4 param_2,undefined8 param_3,
          undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f2440;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstStatCompoundAssign_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  *(undefined1 *)&(this->AstNode_data).offset_0x18 = 0;
  this->vftablePtr = &vftable;
  *(undefined4 *)&(this->AstNode_data).offset_0x20 = param_2;
  (this->AstNode_data).offset_0x28 = param_3;
  (this->AstNode_data).offset_0x30 = param_4;
  return;
}


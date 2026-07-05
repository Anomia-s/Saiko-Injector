/**
 * Function: AstStatBlock
 * Address:  1406c2e60
 * Signature: void __thiscall AstStatBlock(AstStatBlock * this, undefined8 * param_1, undefined8 * param_2, undefined1 param_3)
 * Body size: 56 bytes
 */


void __thiscall
Luau::AstStatBlock::AstStatBlock
          (AstStatBlock *this,undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f2410;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstStatBlock_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  *(undefined1 *)&(this->AstNode_data).offset_0x18 = 0;
  this->vftablePtr = &vftable;
  uVar1 = param_2[1];
  (this->AstNode_data).offset_0x20 = *param_2;
  (this->AstNode_data).offset_0x28 = uVar1;
  *(undefined1 *)&(this->AstNode_data).offset_0x30 = param_3;
  return;
}


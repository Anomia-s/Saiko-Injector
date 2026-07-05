/**
 * Function: AstStatForIn
 * Address:  1406c3490
 * Signature: void __thiscall AstStatForIn(AstStatForIn * this, undefined8 * param_1, undefined8 * param_2, undefined8 * param_3, undefined8 param_4, undefined1 param_5, undefined8 * param_6, undefined1 param_7, undefined8 * param_8)
 * Body size: 122 bytes
 */


void __thiscall
Luau::AstStatForIn::AstStatForIn
          (AstStatForIn *this,undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
          undefined8 param_4,undefined1 param_5,undefined8 *param_6,undefined1 param_7,
          undefined8 *param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f2438;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstStatForIn_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  *(undefined1 *)&(this->AstNode_data).offset_0x18 = 0;
  this->vftablePtr = &vftable;
  uVar1 = param_2[1];
  (this->AstNode_data).offset_0x20 = *param_2;
  (this->AstNode_data).offset_0x28 = uVar1;
  uVar1 = param_3[1];
  (this->AstNode_data).offset_0x30 = *param_3;
  (this->AstNode_data).offset_0x38 = uVar1;
  *(undefined8 *)&(this->AstNode_data).offset_0x40 = param_4;
  (this->AstNode_data).offset_0x48 = param_5;
  uVar1 = param_6[1];
  *(undefined8 *)&(this->AstNode_data).field_0x4c = *param_6;
  *(undefined8 *)((longlong)&(this->AstNode_data).offset_0x50 + 4) = uVar1;
  *(undefined1 *)((longlong)&(this->AstNode_data).offset_0x58 + 4) = param_7;
  uVar1 = param_8[1];
  (this->AstNode_data).offset_0x60 = *param_8;
  (this->AstNode_data).offset_0x68 = uVar1;
  return;
}


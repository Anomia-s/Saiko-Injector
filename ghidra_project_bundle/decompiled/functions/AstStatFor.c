/**
 * Function: AstStatFor
 * Address:  1406c33b0
 * Signature: void __thiscall AstStatFor(AstStatFor * this, undefined8 * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined1 param_7, undefined8 * param_8)
 * Body size: 96 bytes
 */


void __thiscall
Luau::AstStatFor::AstStatFor
          (AstStatFor *this,undefined8 *param_1,undefined8 param_2,undefined8 param_3,
          undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined1 param_7,
          undefined8 *param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f2434;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstStatFor_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  *(undefined1 *)&(this->AstNode_data).offset_0x18 = 0;
  this->vftablePtr = &vftable;
  (this->AstNode_data).offset_0x20 = param_2;
  (this->AstNode_data).offset_0x28 = param_3;
  (this->AstNode_data).offset_0x30 = param_4;
  (this->AstNode_data).offset_0x38 = param_5;
  *(undefined8 *)&(this->AstNode_data).offset_0x40 = param_6;
  (this->AstNode_data).offset_0x48 = param_7;
  uVar1 = param_8[1];
  *(undefined8 *)&(this->AstNode_data).field_0x4c = *param_8;
  *(undefined8 *)((longlong)&(this->AstNode_data).offset_0x50 + 4) = uVar1;
  return;
}


/**
 * Function: AstStatWhile
 * Address:  1406c2fd0
 * Signature: void __thiscall AstStatWhile(AstStatWhile * this, undefined8 * param_1, undefined8 param_2, undefined8 param_3, undefined1 param_4, undefined8 * param_5)
 * Body size: 78 bytes
 */


void __thiscall
Luau::AstStatWhile::AstStatWhile
          (AstStatWhile *this,undefined8 *param_1,undefined8 param_2,undefined8 param_3,
          undefined1 param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f2418;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstStatWhile_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  *(undefined1 *)&(this->AstNode_data).offset_0x18 = 0;
  this->vftablePtr = &vftable;
  (this->AstNode_data).offset_0x20 = param_2;
  (this->AstNode_data).offset_0x28 = param_3;
  *(undefined1 *)&(this->AstNode_data).offset_0x30 = param_4;
  uVar1 = param_5[1];
  *(undefined8 *)((longlong)&(this->AstNode_data).offset_0x30 + 4) = *param_5;
  *(undefined8 *)((longlong)&(this->AstNode_data).offset_0x38 + 4) = uVar1;
  return;
}


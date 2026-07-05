/**
 * Function: AstStatIf
 * Address:  1406c2f00
 * Signature: void __thiscall AstStatIf(AstStatIf * this, undefined8 * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 * param_5, undefined8 * param_6)
 * Body size: 103 bytes
 */


void __thiscall
Luau::AstStatIf::AstStatIf
          (AstStatIf *this,undefined8 *param_1,undefined8 param_2,undefined8 param_3,
          undefined8 param_4,undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f2414;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstStatIf_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  *(undefined1 *)&(this->AstNode_data).offset_0x18 = 0;
  this->vftablePtr = &vftable;
  (this->AstNode_data).offset_0x20 = param_2;
  (this->AstNode_data).offset_0x28 = param_3;
  (this->AstNode_data).offset_0x30 = param_4;
  uVar1 = param_5[1];
  (this->AstNode_data).offset_0x38 = *param_5;
  *(undefined8 *)&(this->AstNode_data).offset_0x40 = uVar1;
  *(undefined4 *)&(this->AstNode_data).offset_0x48 = *(undefined4 *)(param_5 + 2);
  uVar1 = param_6[1];
  *(undefined8 *)&(this->AstNode_data).field_0x4c = *param_6;
  *(undefined8 *)((longlong)&(this->AstNode_data).offset_0x50 + 4) = uVar1;
  *(undefined4 *)((longlong)&(this->AstNode_data).offset_0x58 + 4) = *(undefined4 *)(param_6 + 2);
  return;
}


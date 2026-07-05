/**
 * Function: AstStatTypeAlias
 * Address:  1406c3840
 * Signature: void __thiscall AstStatTypeAlias(AstStatTypeAlias * this, undefined8 * param_1, undefined8 * param_2, undefined8 * param_3, undefined8 * param_4, undefined8 * param_5, undefined8 param_6, undefined1 param_7)
 * Body size: 107 bytes
 */


void __thiscall
Luau::AstStatTypeAlias::AstStatTypeAlias
          (AstStatTypeAlias *this,undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
          undefined8 *param_4,undefined8 *param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f244c;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstStatTypeAlias_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  *(undefined1 *)&(this->AstNode_data).offset_0x18 = 0;
  this->vftablePtr = &vftable;
  (this->AstNode_data).offset_0x20 = *param_2;
  uVar1 = param_3[1];
  (this->AstNode_data).offset_0x28 = *param_3;
  (this->AstNode_data).offset_0x30 = uVar1;
  uVar1 = param_4[1];
  (this->AstNode_data).offset_0x38 = *param_4;
  *(undefined8 *)&(this->AstNode_data).offset_0x40 = uVar1;
  uVar1 = param_5[1];
  *(undefined8 *)&(this->AstNode_data).offset_0x48 = *param_5;
  (this->AstNode_data).offset_0x50 = uVar1;
  (this->AstNode_data).offset_0x58 = param_6;
  *(undefined1 *)&(this->AstNode_data).offset_0x60 = param_7;
  return;
}


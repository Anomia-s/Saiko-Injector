/**
 * Function: AstStatDeclareExternType
 * Address:  1406c3c00
 * Signature: void __thiscall AstStatDeclareExternType(AstStatDeclareExternType * this, undefined8 * param_1, undefined8 * param_2, undefined8 * param_3, undefined8 * param_4, undefined8 param_5)
 * Body size: 85 bytes
 */


void __thiscall
Luau::AstStatDeclareExternType::AstStatDeclareExternType
          (AstStatDeclareExternType *this,undefined8 *param_1,undefined8 *param_2,
          undefined8 *param_3,undefined8 *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f245c;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstStatDeclareExternType_vftable *)&AstNode::vftable;
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
  *(undefined8 *)&(this->AstNode_data).offset_0x48 = param_5;
  return;
}


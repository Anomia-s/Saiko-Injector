/**
 * Function: AstStatDeclareGlobal
 * Address:  1406c3a00
 * Signature: void __thiscall AstStatDeclareGlobal(AstStatDeclareGlobal * this, undefined8 * param_1, undefined8 * param_2, undefined8 * param_3, undefined8 param_4)
 * Body size: 70 bytes
 */


void __thiscall
Luau::AstStatDeclareGlobal::AstStatDeclareGlobal
          (AstStatDeclareGlobal *this,undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
          undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f2454;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstStatDeclareGlobal_vftable *)&AstNode::vftable;
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
  (this->AstNode_data).offset_0x38 = param_4;
  return;
}


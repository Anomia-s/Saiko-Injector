/**
 * Function: AstStatRepeat
 * Address:  1406c3070
 * Signature: void __thiscall AstStatRepeat(AstStatRepeat * this, undefined8 * param_1, undefined8 param_2, undefined8 param_3, undefined1 param_4)
 * Body size: 62 bytes
 */


void __thiscall
Luau::AstStatRepeat::AstStatRepeat
          (AstStatRepeat *this,undefined8 *param_1,undefined8 param_2,undefined8 param_3,
          undefined1 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1416f241c;
                    /* inlined constructor: Luau::AstNode::AstNode */
  this->vftablePtr = (AstStatRepeat_vftable *)&AstNode::vftable;
  (this->AstNode_data).offset_0x0 = uVar2;
  uVar1 = param_1[1];
  (this->AstNode_data).offset_0x4 = *param_1;
  (this->AstNode_data).offset_0xc = uVar1;
  *(undefined1 *)&(this->AstNode_data).offset_0x18 = 0;
  this->vftablePtr = &vftable;
  (this->AstNode_data).offset_0x20 = param_2;
  (this->AstNode_data).offset_0x28 = param_3;
  *(undefined1 *)&(this->AstNode_data).offset_0x30 = param_4;
  return;
}


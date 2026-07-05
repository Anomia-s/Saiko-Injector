/**
 * Function: ~EditModel
 * Address:  140a2e9d0
 * Signature: void __thiscall ~EditModel(EditModel * this, undefined8 param_1, undefined8 param_2, undefined8 param_3)
 * Body size: 134 bytes
 */


void __thiscall
Scintilla::EditModel::~EditModel
          (EditModel *this,undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  this->vftablePtr = &vftable;
  lVar2 = (this->EditModel_data).offset_0x2e8;
  (*(code *)**(undefined8 **)(lVar2 + 0x10))(lVar2 + 0x10);
  (this->EditModel_data).offset_0x2e8 = 0;
  puVar3 = (this->EditModel_data).offset_0x2c0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  FUN_140802b20(&(this->EditModel_data).field_0x250);
  plVar1 = &(this->EditModel_data).offset_0x10;
  FUN_140033db0(plVar1,plVar1,*(undefined8 *)((this->EditModel_data).offset_0x10 + 8));
  thunk_FUN_140b68ba8((this->EditModel_data).offset_0x10,0x48);
  return;
}


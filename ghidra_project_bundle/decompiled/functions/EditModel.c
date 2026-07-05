/**
 * Function: EditModel
 * Address:  140a2e780
 * Signature: EditModel * __thiscall EditModel(EditModel * this)
 * Body size: 395 bytes
 */


EditModel * __thiscall Scintilla::EditModel::EditModel(EditModel *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  EditModel *pEVar3;
  undefined4 uVar4;
  LineAnnotation *this_00;
  undefined8 *local_28;
  EditModel *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  this->vftablePtr = &vftable;
  FUN_140a41920();
  (this->EditModel_data).offset_0x220 = 0;
  (this->EditModel_data).offset_0x224 = 500;
  (this->EditModel_data).offset_0x228 = 0xffffffffffffffff;
  *&(this->EditModel_data).offset_0x230 = (undefined1  [16])0x0;
  (this->EditModel_data).offset_0x240 = 0;
  (this->EditModel_data).offset_0x244 = 0;
  FUN_140802920();
  (this->EditModel_data).offset_0x0 = 0;
  (this->EditModel_data).offset_0x4 = 0;
  (this->EditModel_data).offset_0x8 = 0;
  (this->EditModel_data).offset_0x2c0 = (undefined8 *)0x0;
  (this->EditModel_data).offset_0x228 = 0xffffffffffffffff;
  *(undefined8 *)(this->EditModel_data).offset_0x230 = 0;
  *(undefined4 *)((this->EditModel_data).offset_0x230 + 8) = 0xffffffff;
  *(undefined4 *)((this->EditModel_data).offset_0x230 + 0xc) = 0xffffffff;
  (this->EditModel_data).offset_0x240 = 0xffffffff;
  (this->EditModel_data).offset_0x244 = 0xffffffff;
  (this->EditModel_data).offset_0x248 = 0x23;
  (this->EditModel_data).offset_0x2b0 = 1;
  (this->EditModel_data).offset_0x2b4 = 0;
  (this->EditModel_data).offset_0x2bc = 0;
  (this->EditModel_data).offset_0x2c8 = 0xffffffff;
  (this->EditModel_data).offset_0x2cc = 0xffffffff;
  (this->EditModel_data).offset_0x2d0 = 0xffffffff;
  (this->EditModel_data).offset_0x2d4 = 0xffffffff;
  (this->EditModel_data).offset_0x2d8 = 0xffffffffffffffff;
  (this->EditModel_data).offset_0x2e0 = 0x7ffffff;
  local_20 = this;
  this_00 = (LineAnnotation *)FUN_140b65d30(0x2d0);
  LineAnnotation::LineAnnotation(this_00,0);
  (local_20->EditModel_data).offset_0x2e8 = (longlong)this_00;
  FUN_140804790();
  uVar4 = FUN_1407fbaa0((local_20->EditModel_data).offset_0x2e8 + 0x20);
  FUN_140a44a60(&local_28,uVar4);
  pEVar3 = local_20;
  puVar2 = local_28;
  local_28 = (undefined8 *)0x0;
  puVar1 = (local_20->EditModel_data).offset_0x2c0;
  (local_20->EditModel_data).offset_0x2c0 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    if (local_28 != (undefined8 *)0x0) {
      (**(code **)*local_28)(local_28,1);
    }
  }
  return pEVar3;
}


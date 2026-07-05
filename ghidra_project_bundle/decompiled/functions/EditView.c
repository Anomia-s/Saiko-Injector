/**
 * Function: EditView
 * Address:  140a35a40
 * Signature: void __thiscall EditView(EditView * this, undefined8 param_1, undefined8 param_2, undefined8 param_3)
 * Body size: 213 bytes
 */


void __thiscall
Scintilla::EditView::EditView
          (EditView *this,undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *this_00;
  
  this->vftablePtr = &vftable;
  (this->EditView_data).offset_0x0 = 0;
  (this->EditView_data).offset_0x8 = 1;
  (this->EditView_data).offset_0x10 = (undefined8 *)0x0;
  this_00 = &(this->EditView_data).field_0x48;
  (this->EditView_data).offset_0x30 = (undefined8 *)0x0;
  (this->EditView_data).offset_0x38 = (undefined8 *)0x0;
  (this->EditView_data).offset_0x40 = (undefined8 *)0x0;
  LineLayoutCache::LineLayoutCache((LineLayoutCache *)this_00);
  FUN_140a42d30();
  (this->EditView_data).offset_0x18 = 2;
  (this->EditView_data).offset_0x1c = 0x100;
  (this->EditView_data).offset_0x1e = 1;
  (this->EditView_data).offset_0x20 = 1;
  (this->EditView_data).offset_0x28 = 0x101;
  (this->EditView_data).offset_0x2a = 0;
  FUN_140a41640(this_00,1);
  FUN_140a42e70(&(this->EditView_data).field_0x80,0x400);
  (this->EditView_data).offset_0xa0 = 4;
  (this->EditView_data).offset_0xa8 = 0;
  (this->EditView_data).offset_0xb0 = 0;
  return;
}


/**
 * Function: LineLayout
 * Address:  140a40850
 * Signature: LineLayout * __thiscall LineLayout(LineLayout * this)
 * Body size: 129 bytes
 */


LineLayout * __thiscall Scintilla::LineLayout::LineLayout(LineLayout *this)

{
  this->vftablePtr = &vftable;
  (this->LineLayout_data).offset_0x0 = 0;
  (this->LineLayout_data).offset_0x8 = 0;
  (this->LineLayout_data).offset_0x10 = 0xffffffffffffffff;
  (this->LineLayout_data).offset_0x18 = 0;
  (this->LineLayout_data).offset_0x1c = 0xffffffff;
  (this->LineLayout_data).offset_0x20 = 0;
  (this->LineLayout_data).offset_0x28 = 0;
  (this->LineLayout_data).offset_0x30 = 0;
  *(undefined8 *)&(this->LineLayout_data).field_0x34 = 0;
  *(undefined8 *)((longlong)&(this->LineLayout_data).offset_0x38 + 4) = 0;
  *(undefined8 *)((longlong)&(this->LineLayout_data).offset_0x40 + 2) = 0;
  *(undefined8 *)((longlong)&(this->LineLayout_data).offset_0x48 + 2) = 0;
  (this->LineLayout_data).offset_0x58 = 0;
  (this->LineLayout_data).offset_0x60 = 0;
  (this->LineLayout_data).offset_0x68 = 0x107ffffff;
  (this->LineLayout_data).offset_0x70 = 0;
  FUN_140a40940();
  return this;
}


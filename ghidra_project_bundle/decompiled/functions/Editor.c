/**
 * Function: Editor
 * Address:  1407d7760
 * Signature: Editor * __thiscall Editor(Editor * this, undefined8 param_1, undefined8 param_2, undefined8 param_3)
 * Body size: 985 bytes
 */


Editor * __thiscall
Scintilla::Editor::Editor(Editor *this,undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  EditModel::EditModel((EditModel *)this);
                    /* inlined constructor or destructor (approx location) for Scintilla::Editor */
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
                    /* inlined constructor or destructor (approx location) for Scintilla::Window */
  *(Window_vftable **)&this->Editor_data = &Window::vftable;
  *(undefined8 *)&(this->Editor_data).field_0x8 = 0;
  *(undefined4 *)&(this->Editor_data).field_0x10 = 0;
  *(Window_vftable **)&(this->Editor_data).field_0x18 = &Window::vftable;
  *(undefined8 *)&(this->Editor_data).field_0x20 = 0;
  *(undefined4 *)&(this->Editor_data).field_0x28 = 0;
  FUN_140a2ec50();
  *(undefined8 *)&(this->Editor_data).field_0x22c = 0;
  FUN_140a334e0();
  EditView::EditView((EditView *)&(this->Editor_data).field_0x288,param_1,param_2,param_3);
  FUN_140a404d0();
  (this->Editor_data).field_0x388 = 0;
  *(undefined4 *)&(this->Editor_data).field_0x38c = 0;
  *(undefined8 *)&(this->Editor_data).field_0x390 = 0;
  (this->Editor_data).field_0x398 = 0;
  *(undefined4 *)&(this->Editor_data).field_0x39c = 0;
  *(undefined8 *)&(this->Editor_data).field_0x3a0 = 0;
  (this->Editor_data).field_0x3a8 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x3c4 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x3dc = 0;
  *(undefined8 *)&(this->Editor_data).field_0x3b0 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x3b8 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x3f0 = 0xffffffffffffffff;
  *(undefined8 *)&(this->Editor_data).field_0x3f8 = 0;
  *(undefined4 *)&(this->Editor_data).field_0x488 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x490 = 0;
  (this->Editor_data).offset_0x4a8 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x4b0 = 0;
  (this->Editor_data).offset_0x4b8 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x474 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x47c = 0;
  (this->Editor_data).offset_0x4c0 = 0xf;
  *(undefined2 *)&this[1].vftablePtr = 0;
  *(undefined8 *)((longlong)&this[1].vftablePtr + 4) = 0;
  *(undefined8 *)&this[1].EditModel_data.field_0x30 = 0x7ffffff;
  *(undefined8 *)&this[1].EditModel_data.field_0x38 = 0x7ffffff;
  FUN_140804000(&this[1].EditModel_data.field_0x40,0x3ee4f8b588e368f1,0x3eb0c6f7a0b5ed8d,
                0x3f1a36e2eb1c432d);
  *(undefined8 *)&this[1].EditModel_data.field_0x5c = 0;
  (this->Editor_data).field_0x30 = 0;
  *(undefined4 *)&(this->Editor_data).field_0x228 = 0;
  *(undefined4 *)&(this->Editor_data).field_0x234 = 0x42c80000;
  *(undefined4 *)&(this->Editor_data).field_0x348 = 0xffffffff;
  *(undefined2 *)&(this->Editor_data).field_0x34c = 0x100;
  (this->Editor_data).field_0x34e = 1;
  *(undefined4 *)&(this->Editor_data).field_0x3c0 = 0;
  *(undefined4 *)&(this->Editor_data).field_0x3c4 = 0x40400000;
  *(undefined4 *)&(this->Editor_data).field_0x3c8 = 0x40400000;
  *(undefined4 *)&(this->Editor_data).field_0x3cc = 10000000;
  *(undefined4 *)&(this->Editor_data).field_0x3d0 = 10000000;
  (this->Editor_data).field_0x3d4 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x3dc = 0;
  *(undefined8 *)&(this->Editor_data).field_0x3e1 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x3f0 = 0xffffffffffffffff;
  *(undefined8 *)&(this->Editor_data).field_0x3f8 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x400 = 0xffffffffffffffff;
  *(undefined4 *)&(this->Editor_data).field_0x3d8 = 0;
  *(undefined4 *)&(this->Editor_data).field_0x408 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x420 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x428 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x410 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x418 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x430 = 0xffffffffffffffff;
  *(undefined8 *)&this[1].EditModel_data.offset_0x8 = 0x3200000009;
  *(undefined4 *)&this[1].EditModel_data.offset_0x10 = 8;
  *(undefined8 *)((longlong)&this[1].EditModel_data.offset_0x10 + 4) = 0;
  *(undefined8 *)&this[1].EditModel_data.field_0x1c = 0;
  *(undefined4 *)&this[1].EditModel_data.field_0x24 = 0;
  *(undefined4 *)&(this->Editor_data).field_0x350 = 0x32;
  (this->Editor_data).field_0x354 = 1;
  *(undefined4 *)&(this->Editor_data).field_0x358 = 2000;
  *(undefined2 *)&(this->Editor_data).field_0x35c = 0x101;
  *(undefined8 *)&(this->Editor_data).field_0x36c = 0;
  *(undefined8 *)&(this->Editor_data).field_0x360 = 0;
  *(undefined4 *)&(this->Editor_data).field_0x367 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x438 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x440 = 0;
  *(undefined4 *)&(this->Editor_data).field_0x448 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x450 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x458 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x460 = 0xffffffffffffffff;
  *(undefined8 *)&(this->Editor_data).field_0x468 = 1;
  (this->Editor_data).field_0x470 = 0;
  *(undefined2 *)&(this->Editor_data).field_0x484 = 0;
  *(undefined4 *)&(this->Editor_data).field_0x498 = 0;
  (this->Editor_data).field_0x49c = 0;
  *(undefined4 *)&(this->Editor_data).field_0x4a0 = 0x3fffff;
  (this->Editor_data).field_0x4a4 = 1;
  FUN_14080cae0((this->EditModel_data).offset_0x2e8,&this->vftablePtr,0);
  this[1].EditModel_data.field_0x28 = 0;
  *(undefined4 *)&this[1].EditModel_data.field_0x2c = 0;
  this[1].EditModel_data.field_0x58 = 1;
  FUN_1407d7c50();
  return this;
}


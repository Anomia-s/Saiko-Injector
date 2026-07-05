/**
 * Function: Window
 * Address:  140a4d850
 * Signature: Window * __thiscall Window(Window * this)
 * Body size: 222 bytes
 */


Window * __thiscall Scintilla::Window::Window(Window *this)

{
  (this->Window_data).offset_0x0 = 0;
  (this->Window_data).offset_0x8 = 0;
  (this->Window_data).offset_0x10 = 0;
  (this->Window_data).offset_0x18 = 0xf;
  Font::Font((Font *)&(this->Window_data).field_0x20);
  (this->Window_data).offset_0x60 = &vftable.vfunction1;
  (this->Window_data).offset_0x78 = &vftable.vfunction1;
  (this->Window_data).offset_0x80 = 0;
  (this->Window_data).offset_0x88 = 0;
  (this->Window_data).offset_0x68 = 0;
  (this->Window_data).offset_0x70 = 0;
  (this->Window_data).offset_0x90 = 0;
  (this->Window_data).offset_0x30 = 0;
  (this->Window_data).offset_0x38 = 0;
  (this->Window_data).offset_0x40 = 0;
  (this->Window_data).offset_0x48 = 0;
  (this->Window_data).offset_0x98 = 0;
  (this->Window_data).offset_0x50 = 1;
  this->vftablePtr = (Window_vftable *)0x0;
  (this->Window_data).offset_0x54 = 0;
  (this->Window_data).offset_0x5c = 0;
  (this->Window_data).offset_0xc0 = 0x20000000e;
  (this->Window_data).offset_0xc8 = 1;
  (this->Window_data).offset_0xa0 = 0x80808000ffffff;
  (this->Window_data).offset_0xa8 = 0x800000;
  (this->Window_data).offset_0xb0 = 0xc0c0c0;
  (this->Window_data).offset_0xb8 = 0x500000000;
  return this;
}


/**
 * Function: ScintillaBase
 * Address:  1407f6360
 * Signature: void __thiscall ScintillaBase(ScintillaBase * this, undefined8 param_1, undefined8 param_2, undefined8 param_3)
 * Body size: 155 bytes
 */


void __thiscall
Scintilla::ScintillaBase::ScintillaBase
          (ScintillaBase *this,undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  Editor::Editor((Editor *)this,param_1,param_2,param_3);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  FUN_140801eb0(&(this->ScintillaBase_data).field_0x8);
  FUN_140a4b9b0();
  Window::Window((Window *)&(this->ScintillaBase_data).field_0xb0);
  (this->ScintillaBase_data).offset_0x0 = 1;
  (this->ScintillaBase_data).offset_0x188 = 0;
  (this->ScintillaBase_data).offset_0x190 = 0;
  return;
}


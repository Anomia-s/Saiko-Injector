/**
 * Function: ~ScintillaBase
 * Address:  1407f6440
 * Signature: void __thiscall ~ScintillaBase(ScintillaBase * this, undefined8 param_1, undefined8 param_2, undefined8 param_3)
 * Body size: 83 bytes
 */


void __thiscall
Scintilla::ScintillaBase::~ScintillaBase
          (ScintillaBase *this,undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  FUN_140a4d930(&(this->ScintillaBase_data).field_0xb0);
  FUN_140a4bae0(&(this->ScintillaBase_data).field_0x10);
  Editor::~Editor((Editor *)this,param_1,param_2,param_3);
  return;
}


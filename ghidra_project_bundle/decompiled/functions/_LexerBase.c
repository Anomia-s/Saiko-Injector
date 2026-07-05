/**
 * Function: ~LexerBase
 * Address:  140a8d060
 * Signature: void __thiscall ~LexerBase(LexerBase * this)
 * Body size: 383 bytes
 */


void __thiscall Scintilla::LexerBase::~LexerBase(LexerBase *this)

{
  longlong lVar1;
  
  this->vftablePtr = &vftable;
  lVar1 = (this->LexerBase_data).offset_0x20;
  if (lVar1 != 0) {
    FUN_140a8b880(lVar1);
    thunk_FUN_140b68ba8(lVar1,0x418);
  }
  (this->LexerBase_data).offset_0x20 = 0;
  lVar1 = (this->LexerBase_data).offset_0x28;
  if (lVar1 != 0) {
    FUN_140a8b880(lVar1);
    thunk_FUN_140b68ba8(lVar1,0x418);
  }
  (this->LexerBase_data).offset_0x28 = 0;
  lVar1 = (this->LexerBase_data).offset_0x30;
  if (lVar1 != 0) {
    FUN_140a8b880(lVar1);
    thunk_FUN_140b68ba8(lVar1,0x418);
  }
  (this->LexerBase_data).offset_0x30 = 0;
  lVar1 = (this->LexerBase_data).offset_0x38;
  if (lVar1 != 0) {
    FUN_140a8b880(lVar1);
    thunk_FUN_140b68ba8(lVar1,0x418);
  }
  (this->LexerBase_data).offset_0x38 = 0;
  lVar1 = (this->LexerBase_data).offset_0x40;
  if (lVar1 != 0) {
    FUN_140a8b880(lVar1);
    thunk_FUN_140b68ba8(lVar1,0x418);
  }
  (this->LexerBase_data).offset_0x40 = 0;
  lVar1 = (this->LexerBase_data).offset_0x48;
  if (lVar1 != 0) {
    FUN_140a8b880(lVar1);
    thunk_FUN_140b68ba8(lVar1,0x418);
  }
  (this->LexerBase_data).offset_0x48 = 0;
  lVar1 = (this->LexerBase_data).offset_0x50;
  if (lVar1 != 0) {
    FUN_140a8b880(lVar1);
    thunk_FUN_140b68ba8(lVar1,0x418);
  }
  (this->LexerBase_data).offset_0x50 = 0;
  lVar1 = (this->LexerBase_data).offset_0x58;
  if (lVar1 != 0) {
    FUN_140a8b880(lVar1);
    thunk_FUN_140b68ba8(lVar1,0x418);
  }
  (this->LexerBase_data).offset_0x58 = 0;
  lVar1 = (this->LexerBase_data).offset_0x60;
  if (lVar1 != 0) {
    FUN_140a8b880(lVar1);
    thunk_FUN_140b68ba8(lVar1,0x418);
  }
  (this->LexerBase_data).offset_0x60 = 0;
  (this->LexerBase_data).offset_0x68 = 0;
  PropSetSimple::PropSetSimple_Constructor_or_Destructor
            ((undefined8 *)&(this->LexerBase_data).field_0x10);
  return;
}


/**
 * Function: ~LexerDMIS
 * Address:  14092b970
 * Signature: void __thiscall ~LexerDMIS(LexerDMIS * this)
 * Body size: 114 bytes
 */


void __thiscall LexerDMIS::~LexerDMIS(LexerDMIS *this)

{
  this->vftablePtr = &vftable;
  if ((this->LexerDMIS_data).offset_0x0 != (char *)0x0) {
    thunk_FUN_140b68ba8();
  }
  FUN_140a8b880(&this[1].LexerDMIS_data.field_0x810);
  FUN_140a8b880(&this[1].LexerDMIS_data.field_0x3f8);
  FUN_140a8b880(&(this->LexerDMIS_data).field_0xc50);
  FUN_140a8b880(&(this->LexerDMIS_data).field_0x838);
  FUN_140a8b880(&(this->LexerDMIS_data).field_0x420);
  FUN_140a8b880(&(this->LexerDMIS_data).field_0x8);
  httplib::ClientImpl::vfunction4();
  return;
}


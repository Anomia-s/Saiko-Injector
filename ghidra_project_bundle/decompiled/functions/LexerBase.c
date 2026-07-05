/**
 * Function: LexerBase
 * Address:  140a8cf80
 * Signature: LexerBase * __thiscall LexerBase(LexerBase * this, undefined8 param_1, undefined8 param_2)
 * Body size: 125 bytes
 */


LexerBase * __thiscall
Scintilla::LexerBase::LexerBase(LexerBase *this,undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  
  this->vftablePtr = &vftable;
  (this->LexerBase_data).offset_0x0 = param_1;
  (this->LexerBase_data).offset_0x8 = param_2;
  PropSetSimple::PropSetSimple((PropSetSimple *)&(this->LexerBase_data).field_0x10);
  uVar2 = 0;
  do {
    lVar1 = FUN_140b65d30(0x418);
    FUN_140a8b860(lVar1,0);
    (&(this->LexerBase_data).offset_0x20)[uVar2] = lVar1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 9);
  (this->LexerBase_data).offset_0x68 = 0;
  return this;
}


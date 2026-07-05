/**
 * Function: LexerSQL
 * Address:  1409fe740
 * Signature: LexerSQL * __thiscall LexerSQL(LexerSQL * this)
 * Body size: 297 bytes
 */


LexerSQL * __thiscall LexerSQL::LexerSQL(LexerSQL *this)

{
  Scintilla::DefaultLexer::DefaultLexer((DefaultLexer *)this,0,0);
  this->vftablePtr = &vftable;
  (this->LexerSQL_data).offset_0x0 = 0;
  (this->LexerSQL_data).offset_0x8 = 0;
  OptionSetSQL::OptionSetSQL((OptionSetSQL *)&(this->LexerSQL_data).offset_0x10);
  (this->LexerSQL_data).offset_0x70 = 0;
  (this->LexerSQL_data).offset_0x78 = 0;
  (this->LexerSQL_data).offset_0x80 = 0;
  (this->LexerSQL_data).offset_0x68 = 0xffffffffffffffff;
  FUN_140a8b860(&(this->LexerSQL_data).offset_0x88,0);
  FUN_140a8b860(&(this->LexerSQL_data).offset_0x4a0,0);
  FUN_140a8b860(&(this->LexerSQL_data).offset_0x8b8,0);
  FUN_140a8b860(&(this->LexerSQL_data).offset_0xcd0,0);
  FUN_140a8b860(&this[1].LexerSQL_data.field_0x3f8,0);
  FUN_140a8b860(&this[1].LexerSQL_data.field_0x810,0);
  FUN_140a8b860(&this[1].LexerSQL_data.field_0xc28,0);
  FUN_140a8b860(&this[2].LexerSQL_data.field_0x350,0);
  return this;
}


/**
 * Function: LexerRust
 * Address:  1409ee360
 * Signature: LexerRust * __thiscall LexerRust(LexerRust * this)
 * Body size: 430 bytes
 */


LexerRust * __thiscall LexerRust::LexerRust(LexerRust *this)

{
  Scintilla::DefaultLexer::DefaultLexer((DefaultLexer *)this,0,0);
  this->vftablePtr = &vftable;
  FUN_140a8b860(&this->LexerRust_data,0);
  FUN_140a8b860(&(this->LexerRust_data).field_0x418,0);
  FUN_140a8b860(&(this->LexerRust_data).field_0x830,0);
  FUN_140a8b860(&(this->LexerRust_data).field_0xc48,0);
  FUN_140a8b860(&this[1].LexerRust_data.field_0x3f8,0);
  FUN_140a8b860(&this[1].LexerRust_data.field_0x810,0);
  FUN_140a8b860(&this[1].LexerRust_data.field_0xc28,0);
  *(undefined8 *)&this[2].LexerRust_data.field_0x3e0 = 0;
  *(undefined8 *)&this[2].LexerRust_data.field_0x3e8 = 0;
  *(undefined8 *)&this[2].LexerRust_data.field_0x3f8 = 0xf;
  *(undefined8 *)&this[2].LexerRust_data.field_0x400 = 0;
  *(undefined8 *)&this[2].LexerRust_data.field_0x408 = 0;
  *(undefined8 *)&this[2].LexerRust_data.field_0x418 = 0xf;
  *(undefined4 *)&this[2].LexerRust_data.field_0x3d8 = 0x1000100;
  this[2].LexerRust_data.field_0x3dc = 1;
  *(undefined8 *)&this[2].LexerRust_data.field_0x3f0 = 0;
  *(undefined8 *)&this[2].LexerRust_data.field_0x410 = 0;
  *(undefined2 *)&this[2].LexerRust_data.field_0x420 = 0x100;
  *(undefined4 *)&this[2].LexerRust_data.field_0x424 = 0xffffffff;
  this[2].LexerRust_data.field_0x428 = 0;
  OptionSetRust::OptionSetRust((OptionSetRust *)&this[2].LexerRust_data.field_0x430);
  return this;
}


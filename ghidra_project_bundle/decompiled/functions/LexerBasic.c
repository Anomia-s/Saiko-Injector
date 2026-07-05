/**
 * Function: LexerBasic
 * Address:  1408f69d0
 * Signature: LexerBasic * __thiscall LexerBasic(LexerBasic * this, undefined1 param_1, undefined8 param_2, undefined8 param_3)
 * Body size: 326 bytes
 */


LexerBasic * __thiscall
LexerBasic::LexerBasic(LexerBasic *this,undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  Scintilla::DefaultLexer::DefaultLexer((DefaultLexer *)this,0,0);
  this->vftablePtr = &vftable;
  (this->LexerBasic_data).offset_0x0 = param_1;
  (this->LexerBasic_data).offset_0x8 = param_2;
  FUN_140a8b860(&(this->LexerBasic_data).field_0x10,0);
  FUN_140a8b860(&(this->LexerBasic_data).field_0x428,0);
  FUN_140a8b860(&(this->LexerBasic_data).field_0x840,0);
  FUN_140a8b860(&(this->LexerBasic_data).field_0xc58,0);
  *(undefined8 *)&this[1].LexerBasic_data.field_0x400 = 0;
  *(undefined8 *)&this[1].LexerBasic_data.field_0x408 = 0;
  *(undefined8 *)&this[1].LexerBasic_data.field_0x418 = 0xf;
  *(undefined8 *)&this[1].LexerBasic_data.field_0x420 = 0;
  *(undefined8 *)&this[1].LexerBasic_data.field_0x428 = 0;
  *(undefined8 *)&this[1].LexerBasic_data.field_0x438 = 0xf;
  *(undefined2 *)&this[1].LexerBasic_data.field_0x3f8 = 0x100;
  this[1].LexerBasic_data.field_0x3fa = 0;
  *(undefined8 *)&this[1].LexerBasic_data.field_0x410 = 0;
  *(undefined8 *)&this[1].LexerBasic_data.field_0x430 = 0;
  *(undefined2 *)&this[1].LexerBasic_data.field_0x440 = 0x100;
  OptionSetBasic::OptionSetBasic((OptionSetBasic *)&this[1].LexerBasic_data.field_0x448,param_3);
  return this;
}


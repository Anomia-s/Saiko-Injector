/**
 * Function: LexerD
 * Address:  140927790
 * Signature: LexerD * __thiscall LexerD(LexerD * this, undefined1 param_1)
 * Body size: 342 bytes
 */


LexerD * __thiscall LexerD::LexerD(LexerD *this,undefined1 param_1)

{
  Scintilla::DefaultLexer::DefaultLexer((DefaultLexer *)this,0,0);
  this->vftablePtr = &vftable;
  (this->LexerD_data).offset_0x0 = param_1;
  FUN_140a8b860(&(this->LexerD_data).field_0x8,0);
  FUN_140a8b860(&(this->LexerD_data).field_0x420,0);
  FUN_140a8b860(&(this->LexerD_data).field_0x838,0);
  FUN_140a8b860(&(this->LexerD_data).field_0xc50,0);
  FUN_140a8b860(&this[1].LexerD_data.field_0x3f8,0);
  FUN_140a8b860(&this[1].LexerD_data.field_0x810,0);
  FUN_140a8b860(&this[1].LexerD_data.field_0xc28,0);
  *(undefined8 *)&this[2].LexerD_data.field_0x3d8 = 0;
  *(undefined8 *)&this[2].LexerD_data.field_0x3e0 = 0;
  *(undefined8 *)&this[2].LexerD_data.field_0x3f0 = 0xf;
  *(undefined8 *)&this[2].LexerD_data.field_0x3f8 = 0;
  *(undefined8 *)&this[2].LexerD_data.field_0x400 = 0;
  *(undefined8 *)&this[2].LexerD_data.field_0x410 = 0xf;
  *(undefined4 *)&this[2].LexerD_data.field_0x3d0 = 0x1000100;
  this[2].LexerD_data.field_0x3d4 = 1;
  *(undefined8 *)&this[2].LexerD_data.field_0x3e8 = 0;
  *(undefined8 *)&this[2].LexerD_data.field_0x408 = 0;
  *(undefined2 *)&this[2].LexerD_data.field_0x418 = 0x100;
  *(undefined4 *)&this[2].LexerD_data.field_0x41c = 0xffffffff;
  this[2].LexerD_data.field_0x420 = 0;
  OptionSetD::OptionSetD((OptionSetD *)&this[2].LexerD_data.field_0x428);
  return this;
}


/**
 * Function: LexerAsm
 * Address:  1408d02d0
 * Signature: void __thiscall LexerAsm(LexerAsm * this, undefined4 param_1)
 * Body size: 381 bytes
 */


void __thiscall LexerAsm::LexerAsm(LexerAsm *this,undefined4 param_1)

{
  Scintilla::DefaultLexer::DefaultLexer((DefaultLexer *)this,0,0);
  this->vftablePtr = &vftable;
  FUN_140a8b860(&this->LexerAsm_data,0);
  FUN_140a8b860(&(this->LexerAsm_data).field_0x418,0);
  FUN_140a8b860(&(this->LexerAsm_data).field_0x830,0);
  FUN_140a8b860(&(this->LexerAsm_data).field_0xc48,0);
  FUN_140a8b860(&this[1].LexerAsm_data.field_0x3f8,0);
  FUN_140a8b860(&this[1].LexerAsm_data.field_0x810,0);
  FUN_140a8b860(&this[1].LexerAsm_data.field_0xc28,0);
  FUN_140a8b860(&this[2].LexerAsm_data.field_0x3d8,0);
  *(undefined8 *)&this[2].LexerAsm_data.field_0x7f0 = 0;
  *(undefined8 *)&this[2].LexerAsm_data.field_0x7f8 = 0;
  *(undefined8 *)&this[2].LexerAsm_data.field_0x808 = 0xf;
  *(undefined8 *)&this[2].LexerAsm_data.field_0x818 = 0;
  *(undefined8 *)&this[2].LexerAsm_data.field_0x820 = 0;
  *(undefined8 *)&this[2].LexerAsm_data.field_0x830 = 0xf;
  *(undefined8 *)&this[2].LexerAsm_data.field_0x838 = 0;
  *(undefined8 *)&this[2].LexerAsm_data.field_0x840 = 0;
  *(undefined8 *)&this[2].LexerAsm_data.field_0x850 = 0xf;
  *(undefined8 *)&this[2].LexerAsm_data.field_0x800 = 0;
  *(undefined4 *)&this[2].LexerAsm_data.field_0x810 = 0x100;
  *(undefined8 *)&this[2].LexerAsm_data.field_0x828 = 0;
  *(undefined8 *)&this[2].LexerAsm_data.field_0x848 = 0;
  *(undefined2 *)&this[2].LexerAsm_data.field_0x858 = 0x100;
  OptionSetAsm::OptionSetAsm((OptionSetAsm *)&this[2].LexerAsm_data.field_0x860);
  *(undefined4 *)&this[2].LexerAsm_data.field_0x8b8 = param_1;
  return;
}


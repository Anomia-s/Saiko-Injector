/**
 * Function: LexerHaskell
 * Address:  1409502e0
 * Signature: LexerHaskell * __thiscall LexerHaskell(LexerHaskell * this, undefined1 param_1)
 * Body size: 188 bytes
 */


LexerHaskell * __thiscall LexerHaskell::LexerHaskell(LexerHaskell *this,undefined1 param_1)

{
  Scintilla::DefaultLexer::DefaultLexer((DefaultLexer *)this,0,0);
  this->vftablePtr = &vftable;
  (this->LexerHaskell_data).offset_0x0 = param_1;
  (this->LexerHaskell_data).offset_0x8 = 0xffffffffffffffff;
  (this->LexerHaskell_data).offset_0x10 = 0;
  FUN_140a8b860(&(this->LexerHaskell_data).field_0x18,0);
  FUN_140a8b860(&(this->LexerHaskell_data).field_0x430,0);
  FUN_140a8b860(&(this->LexerHaskell_data).field_0x848,0);
  (this->LexerHaskell_data).offset_0xc60 = 0x1000101;
  (this->LexerHaskell_data).offset_0xc64 = 1;
  (this->LexerHaskell_data).offset_0xc65 = 0;
  (this->LexerHaskell_data).offset_0xc69 = 0;
  OptionSetHaskell::OptionSetHaskell((OptionSetHaskell *)&(this->LexerHaskell_data).field_0xc70);
  return this;
}


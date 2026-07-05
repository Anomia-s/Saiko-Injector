/**
 * Function: LexerRegistry
 * Address:  1409e04d0
 * Signature: LexerRegistry * __thiscall LexerRegistry(void)
 * Body size: 84 bytes
 */


LexerRegistry * __thiscall LexerRegistry::LexerRegistry(void)

{
  DefaultLexer *this;
  
  this = (DefaultLexer *)FUN_140b65d30(0x78);
  Scintilla::DefaultLexer::DefaultLexer(this,0,0);
  this->vftablePtr = (DefaultLexer_vftable *)&vftable;
  *(undefined2 *)&this[1].vftablePtr = 0;
  OptionSetRegistry::OptionSetRegistry((OptionSetRegistry *)&this[1].DefaultLexer_data);
  return (LexerRegistry *)this;
}


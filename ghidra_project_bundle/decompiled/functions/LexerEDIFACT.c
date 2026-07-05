/**
 * Function: LexerEDIFACT
 * Address:  140931550
 * Signature: void __thiscall LexerEDIFACT(void)
 * Body size: 82 bytes
 */


void __thiscall LexerEDIFACT::LexerEDIFACT(void)

{
  DefaultLexer *this;
  
  this = (DefaultLexer *)FUN_140b65d30(0x20);
  Scintilla::DefaultLexer::DefaultLexer(this,0,0);
  this->vftablePtr = (DefaultLexer_vftable *)&vftable;
  *(undefined4 *)&this[1].vftablePtr = 0x2b3a0000;
  *(undefined2 *)((longlong)&this[1].vftablePtr + 4) = 0x3f2e;
  *(undefined1 *)((longlong)&this[1].vftablePtr + 6) = 0x27;
  return;
}


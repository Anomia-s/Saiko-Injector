/**
 * Function: vfunction7
 * Address:  140a8b1a0
 * Signature: longlong * __thiscall vfunction7(LexerSimple * this)
 * Body size: 26 bytes
 */


longlong * __thiscall Scintilla::LexerSimple::vfunction7(LexerSimple *this)

{
  if (0xf < (this->LexerSimple_data).offset_0x20) {
    return (longlong *)(this->LexerSimple_data).offset_0x8;
  }
  return &(this->LexerSimple_data).offset_0x8;
}


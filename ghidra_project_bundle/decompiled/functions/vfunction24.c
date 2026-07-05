/**
 * Function: vfunction24
 * Address:  140a8cdd0
 * Signature: undefined1 * __thiscall vfunction24(LexerBase * this, int param_1)
 * Body size: 61 bytes
 */


/* Scintilla::LexerBase member function inherited by Scintilla::LexerSimple
   Scintilla::LexerBase member function inherited by LexerLaTeX */

undefined1 * __thiscall Scintilla::LexerBase::vfunction24(LexerBase *this,int param_1)

{
  undefined8 uVar1;
  undefined8 in_R8;
  
  uVar1 = (*this->vftablePtr->vfunction8)(this,param_1,in_R8);
  if (param_1 < (int)uVar1) {
    return *(undefined1 **)((this->LexerBase_data).offset_0x0 + 0x10 + (longlong)param_1 * 0x20);
  }
  return &DAT_1413a2ad6;
}


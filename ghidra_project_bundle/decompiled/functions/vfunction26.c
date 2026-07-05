/**
 * Function: vfunction26
 * Address:  140a8b370
 * Signature: LexerSimple * __thiscall vfunction26(LexerSimple * this, int param_1)
 * Body size: 175 bytes
 */


LexerSimple * __thiscall Scintilla::LexerSimple::vfunction26(LexerSimple *this,int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  this->vftablePtr = &vftable;
  uVar1 = (this->LexerSimple_data).offset_0x20;
  if (0xf < uVar1) {
    lVar2 = (this->LexerSimple_data).offset_0x8;
    uVar3 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar1 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar4,uVar3);
  }
  (this->LexerSimple_data).offset_0x18 = 0;
  (this->LexerSimple_data).offset_0x20 = 0xf;
  *(undefined1 *)&(this->LexerSimple_data).offset_0x8 = 0;
  LexerBase::~LexerBase((LexerBase *)this);
  if (param_1 != 0) {
    thunk_FUN_140b68ba8(this,0xa0);
  }
  return this;
}


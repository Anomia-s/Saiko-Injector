/**
 * Function: ~LexerLaTeX
 * Address:  1409761d0
 * Signature: void __thiscall ~LexerLaTeX(LexerLaTeX * this)
 * Body size: 214 bytes
 */


void __thiscall LexerLaTeX::~LexerLaTeX(LexerLaTeX *this)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  this->vftablePtr = &vftable;
  lVar1 = (this->LexerLaTeX_data).offset_0x18;
  if (lVar1 != 0) {
    uVar3 = (this->LexerLaTeX_data).offset_0x28 - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar2)) goto LAB_14097628d;
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar2,uVar3);
    (this->LexerLaTeX_data).offset_0x18 = 0;
    (this->LexerLaTeX_data).offset_0x20 = 0;
    (this->LexerLaTeX_data).offset_0x28 = 0;
  }
  lVar1 = (this->LexerLaTeX_data).offset_0x0;
  if (lVar1 != 0) {
    uVar3 = (this->LexerLaTeX_data).offset_0x10 - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar2)) {
LAB_14097628d:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar2,uVar3);
    (this->LexerLaTeX_data).offset_0x0 = 0;
    (this->LexerLaTeX_data).offset_0x8 = 0;
    (this->LexerLaTeX_data).offset_0x10 = 0;
  }
  Scintilla::LexerBase::~LexerBase((LexerBase *)this);
  return;
}


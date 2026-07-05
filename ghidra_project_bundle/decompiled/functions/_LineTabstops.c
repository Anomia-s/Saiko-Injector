/**
 * Function: ~LineTabstops
 * Address:  140a538f0
 * Signature: void __thiscall ~LineTabstops(LineTabstops * this)
 * Body size: 160 bytes
 */


void __thiscall Scintilla::LineTabstops::~LineTabstops(LineTabstops *this)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  this->vftablePtr = &vftable;
  FUN_140a54da0(&this->LineTabstops_data);
  plVar1 = (this->LineTabstops_data).offset_0x18;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      uVar4 = plVar1[2] - lVar2;
      lVar3 = lVar2;
      if (0xfff < uVar4) {
        lVar3 = *(longlong *)(lVar2 + -8);
        if (0x1f < (ulonglong)((lVar2 + -8) - lVar3)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar4 = uVar4 + 0x27;
      }
      thunk_FUN_140b68ba8(lVar3,uVar4);
    }
    thunk_FUN_140b68ba8(plVar1,0x18);
  }
  FUN_140a540f0(&this->LineTabstops_data);
  return;
}


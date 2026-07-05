/**
 * Function: ~LexerD
 * Address:  1409287e0
 * Signature: void __thiscall ~LexerD(LexerD * this)
 * Body size: 345 bytes
 */


void __thiscall LexerD::~LexerD(LexerD *this)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  this->vftablePtr = &vftable;
  Scintilla::OptionSet<OptionsD>::OptionSet<OptionsD>_Constructor_or_Destructor
            ((undefined8 *)&this[2].LexerD_data.field_0x428);
  uVar1 = *(ulonglong *)&this[2].LexerD_data.field_0x410;
  if (0xf < uVar1) {
    lVar2 = *(longlong *)&this[2].LexerD_data.field_0x3f8;
    uVar3 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) goto LAB_140928920;
      uVar3 = uVar1 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar4,uVar3);
  }
  *(undefined8 *)&this[2].LexerD_data.field_0x408 = 0;
  *(undefined8 *)&this[2].LexerD_data.field_0x410 = 0xf;
  this[2].LexerD_data.field_0x3f8 = 0;
  uVar1 = *(ulonglong *)&this[2].LexerD_data.field_0x3f0;
  if (0xf < uVar1) {
    lVar2 = *(longlong *)&this[2].LexerD_data.field_0x3d8;
    uVar3 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
LAB_140928920:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar1 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar4,uVar3);
  }
  *(undefined8 *)&this[2].LexerD_data.field_0x3e8 = 0;
  *(undefined8 *)&this[2].LexerD_data.field_0x3f0 = 0xf;
  this[2].LexerD_data.field_0x3d8 = 0;
  FUN_140a8b880(&this[1].LexerD_data.field_0xc28);
  FUN_140a8b880(&this[1].LexerD_data.field_0x810);
  FUN_140a8b880(&this[1].LexerD_data.field_0x3f8);
  FUN_140a8b880(&(this->LexerD_data).field_0xc50);
  FUN_140a8b880(&(this->LexerD_data).field_0x838);
  FUN_140a8b880(&(this->LexerD_data).field_0x420);
  FUN_140a8b880(&(this->LexerD_data).field_0x8);
  httplib::ClientImpl::vfunction4();
  return;
}


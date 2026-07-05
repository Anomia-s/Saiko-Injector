/**
 * Function: ~LexerRust
 * Address:  1409eed40
 * Signature: void __thiscall ~LexerRust(LexerRust * this)
 * Body size: 345 bytes
 */


void __thiscall LexerRust::~LexerRust(LexerRust *this)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  this->vftablePtr = &vftable;
  Scintilla::OptionSet<OptionsRust>::OptionSet<OptionsRust>_Constructor_or_Destructor
            ((undefined8 *)&this[2].LexerRust_data.field_0x430);
  uVar1 = *(ulonglong *)&this[2].LexerRust_data.field_0x418;
  if (0xf < uVar1) {
    lVar2 = *(longlong *)&this[2].LexerRust_data.field_0x400;
    uVar3 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) goto LAB_1409eee80;
      uVar3 = uVar1 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar4,uVar3);
  }
  *(undefined8 *)&this[2].LexerRust_data.field_0x410 = 0;
  *(undefined8 *)&this[2].LexerRust_data.field_0x418 = 0xf;
  this[2].LexerRust_data.field_0x400 = 0;
  uVar1 = *(ulonglong *)&this[2].LexerRust_data.field_0x3f8;
  if (0xf < uVar1) {
    lVar2 = *(longlong *)&this[2].LexerRust_data.field_0x3e0;
    uVar3 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
LAB_1409eee80:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar1 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar4,uVar3);
  }
  *(undefined8 *)&this[2].LexerRust_data.field_0x3f0 = 0;
  *(undefined8 *)&this[2].LexerRust_data.field_0x3f8 = 0xf;
  this[2].LexerRust_data.field_0x3e0 = 0;
  FUN_140a8b880(&this[1].LexerRust_data.field_0xc28);
  FUN_140a8b880(&this[1].LexerRust_data.field_0x810);
  FUN_140a8b880(&this[1].LexerRust_data.field_0x3f8);
  FUN_140a8b880(&(this->LexerRust_data).field_0xc48);
  FUN_140a8b880(&(this->LexerRust_data).field_0x830);
  FUN_140a8b880(&(this->LexerRust_data).field_0x418);
  FUN_140a8b880(&this->LexerRust_data);
  httplib::ClientImpl::vfunction4();
  return;
}


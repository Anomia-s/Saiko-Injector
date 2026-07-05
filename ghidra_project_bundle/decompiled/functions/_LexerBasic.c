/**
 * Function: ~LexerBasic
 * Address:  1408f71a0
 * Signature: void __thiscall ~LexerBasic(LexerBasic * this)
 * Body size: 305 bytes
 */


void __thiscall LexerBasic::~LexerBasic(LexerBasic *this)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  this->vftablePtr = &vftable;
  Scintilla::OptionSet<OptionsBasic>::OptionSet<OptionsBasic>_Constructor_or_Destructor
            ((undefined8 *)&this[1].LexerBasic_data.field_0x448);
  uVar1 = *(ulonglong *)&this[1].LexerBasic_data.field_0x438;
  if (0xf < uVar1) {
    lVar2 = *(longlong *)&this[1].LexerBasic_data.field_0x420;
    uVar3 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) goto LAB_1408f72b8;
      uVar3 = uVar1 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar4,uVar3);
  }
  *(undefined8 *)&this[1].LexerBasic_data.field_0x430 = 0;
  *(undefined8 *)&this[1].LexerBasic_data.field_0x438 = 0xf;
  this[1].LexerBasic_data.field_0x420 = 0;
  uVar1 = *(ulonglong *)&this[1].LexerBasic_data.field_0x418;
  if (0xf < uVar1) {
    lVar2 = *(longlong *)&this[1].LexerBasic_data.field_0x400;
    uVar3 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
LAB_1408f72b8:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar1 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar4,uVar3);
  }
  *(undefined8 *)&this[1].LexerBasic_data.field_0x410 = 0;
  *(undefined8 *)&this[1].LexerBasic_data.field_0x418 = 0xf;
  this[1].LexerBasic_data.field_0x400 = 0;
  FUN_140a8b880(&(this->LexerBasic_data).field_0xc58);
  FUN_140a8b880(&(this->LexerBasic_data).field_0x840);
  FUN_140a8b880(&(this->LexerBasic_data).field_0x428);
  FUN_140a8b880(&(this->LexerBasic_data).field_0x10);
  httplib::ClientImpl::vfunction4();
  return;
}


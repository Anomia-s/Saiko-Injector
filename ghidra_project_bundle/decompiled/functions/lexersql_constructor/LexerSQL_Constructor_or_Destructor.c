/**
 * Function: LexerSQL_Constructor_or_Destructor
 * Address:  1409fefa0
 * Signature: void __fastcall LexerSQL_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 244 bytes
 */


void LexerSQL::LexerSQL_Constructor_or_Destructor(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = &vftable;
  FUN_140a8b880(param_1 + 0x3a9);
  FUN_140a8b880(param_1 + 0x326);
  FUN_140a8b880(param_1 + 0x2a3);
  FUN_140a8b880(param_1 + 0x220);
  FUN_140a8b880(param_1 + 0x19d);
  FUN_140a8b880(param_1 + 0x11a);
  FUN_140a8b880(param_1 + 0x97);
  FUN_140a8b880(param_1 + 0x14);
  lVar1 = param_1[0x11];
  if (lVar1 != 0) {
    uVar3 = param_1[0x13] - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar2)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar2,uVar3);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  Scintilla::OptionSet<OptionsSQL>::OptionSet<OptionsSQL>_Constructor_or_Destructor(param_1 + 5);
  httplib::ClientImpl::vfunction4();
  return;
}


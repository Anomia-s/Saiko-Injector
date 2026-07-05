/**
 * Function: LexerPerl_Constructor_or_Destructor
 * Address:  1409bf1c0
 * Signature: void __fastcall LexerPerl_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 168 bytes
 */


void LexerPerl::LexerPerl_Constructor_or_Destructor(undefined8 *param_1)

{
  *param_1 = &vftable;
  Scintilla::OptionSet<OptionsPerl>::OptionSet<OptionsPerl>_Constructor_or_Destructor
            (param_1 + 0x8f);
  FUN_140a8b880(param_1 + 0xb);
  if (param_1[10] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  if (param_1[6] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (param_1[4] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  httplib::ClientImpl::vfunction4();
  return;
}


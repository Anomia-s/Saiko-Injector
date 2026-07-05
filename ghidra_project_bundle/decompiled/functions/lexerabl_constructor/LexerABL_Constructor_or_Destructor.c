/**
 * Function: LexerABL_Constructor_or_Destructor
 * Address:  1409ced70
 * Signature: void __fastcall LexerABL_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 262 bytes
 */


void LexerABL::LexerABL_Constructor_or_Destructor(undefined8 *param_1)

{
  *param_1 = &vftable;
  Scintilla::OptionSet<_anon_264A1A18::OptionsABL>::
  OptionSet<_anon_264A1A18::OptionsABL>_Constructor_or_Destructor(param_1 + 0x21c);
  FUN_140a8b880(param_1 + 0x198);
  FUN_140a8b880(param_1 + 0x115);
  FUN_140a8b880(param_1 + 0x92);
  FUN_140a8b880(param_1 + 0xf);
  if (param_1[0xe] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
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


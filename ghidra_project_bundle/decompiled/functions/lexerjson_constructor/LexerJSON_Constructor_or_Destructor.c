/**
 * Function: LexerJSON_Constructor_or_Destructor
 * Address:  14096df00
 * Signature: void __fastcall LexerJSON_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 330 bytes
 */


void LexerJSON::LexerJSON_Constructor_or_Destructor(undefined8 *param_1)

{
  *param_1 = &vftable;
  if (param_1[0x124] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[0x124] = 0;
  *(undefined4 *)(param_1 + 0x123) = 0;
  if (param_1[0x121] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[0x121] = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (param_1[0x11f] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[0x11f] = 0;
  *(undefined4 *)(param_1 + 0x11e) = 0;
  if (param_1[0x11d] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[0x11d] = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  if (param_1[0x11b] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[0x11b] = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  FUN_140a8b880(param_1 + 0x97);
  FUN_140a8b880(param_1 + 0x14);
  if (param_1[0x13] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  Scintilla::OptionSet<OptionsJSON>::OptionSet<OptionsJSON>_Constructor_or_Destructor(param_1 + 4);
  httplib::ClientImpl::vfunction4();
  return;
}


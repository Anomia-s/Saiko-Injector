/**
 * Function: multi_client_playtest_not_yet_supported_start
 * Address:  1400944b0
 * Signature: undefined multi_client_playtest_not_yet_supported_start(void)
 * Body size: 90 bytes
 */


void multi_client_playtest_not_yet_supported_start(longlong param_1)

{
  undefined8 uVar1;
  QString local_40 [24];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar1 = *(undefined8 *)(param_1 + 0x43ce8);
  QString::QString(local_40,"Multi-client playtest not yet supported; starting solo.");
  FUN_1402826c0(uVar1,local_40);
  QString::~QString(local_40);
  failed_to_start_playtest(param_1);
  return;
}


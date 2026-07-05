/**
 * Function: view_toggle_not_yet_supported_in_embedded_mod
 * Address:  1400945a0
 * Signature: undefined view_toggle_not_yet_supported_in_embedded_mod(void)
 * Body size: 77 bytes
 */


void view_toggle_not_yet_supported_in_embedded_mod(longlong param_1)

{
  undefined8 uVar1;
  QString local_38 [24];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar1 = *(undefined8 *)(param_1 + 0x43ce8);
  QString::QString(local_38,"View toggle not yet supported in embedded mode.");
  FUN_1402826c0(uVar1,local_38);
  QString::~QString(local_38);
  return;
}


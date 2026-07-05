/**
 * Function: couldnt_unregister_for_raw_input_events
 * Address:  140444020
 * Signature: undefined couldnt_unregister_for_raw_input_events(void)
 * Body size: 136 bytes
 */


ulonglong couldnt_unregister_for_raw_input_events(void)

{
  BOOL BVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  RAWINPUTDEVICE local_28;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (DAT_1416f17a0 == '\x01') {
    local_28.usUsagePage = 1;
    local_28.usUsage = 5;
    local_28.dwFlags = 1;
    local_28.hwndTarget = (HWND)0x0;
    BVar1 = RegisterRawInputDevices(&local_28,1,0x10);
    if (BVar1 == 0) {
      uVar2 = FUN_1400fbed0("Couldn\'t unregister for raw input events");
      uVar3 = (ulonglong)uVar2;
    }
  }
  if (DAT_1414ef3c0 == (local_10 ^ (ulonglong)auStack_48)) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_10 ^ (ulonglong)auStack_48);
}


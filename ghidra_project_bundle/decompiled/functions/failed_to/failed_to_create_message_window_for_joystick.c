/**
 * Function: failed_to_create_message_window_for_joystick
 * Address:  140447db0
 * Signature: undefined failed_to_create_message_window_for_joystick(void)
 * Body size: 517 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 failed_to_create_message_window_for_joystick(void)

{
  ATOM AVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auStackY_a8 [32];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStackY_a8;
  _DAT_1416f1898 = 0;
  _DAT_1416f18a0 = 0;
  _DAT_1416f18a8 = (code *)0x0;
  uRam00000001416f18b0 = 0;
  DAT_1416f18b8 = (HINSTANCE)0x0;
  uRam00000001416f18c0 = 0;
  _DAT_1416f18c8 = 0;
  uRam00000001416f18d0 = 0;
  _DAT_1416f18d8 = 0;
  DAT_1416f18e0 = (wchar_t *)0x0;
  _DAT_1416f18e8 = 0;
  DAT_1416f18f0 = (HWND)0x0;
  DAT_1416f18f8 = (HDEVNOTIFY)0x0;
  uVar2 = FUN_1403d7730();
  _DAT_1416f1898 = CONCAT44(DAT_1416f1898_4,uVar2);
  DAT_1416f18b8 = GetModuleHandleW((LPCWSTR)0x0);
  DAT_1416f18e0 = L"Message";
  _DAT_1416f18a8 = FUN_140448240;
  _DAT_1416f18a0 = CONCAT44(DAT_1416f18a0_4,0x50);
  AVar1 = RegisterClassExW((WNDCLASSEXW *)&DAT_1416f18a0);
  if (AVar1 == 0) {
    pcVar4 = "Failed to create register class for joystick autodetect";
  }
  else {
    DAT_1416f18f0 =
         CreateWindowExW(0,L"Message",(LPCWSTR)0x0,0,0,0,0,0,(HWND)0xfffffffffffffffd,(HMENU)0x0,
                         (HINSTANCE)0x0,(LPVOID)0x0);
    if (DAT_1416f18f0 == (HWND)0x0) {
      pcVar4 = "Failed to create message window for joystick autodetect";
    }
    else {
      local_40 = 0x500000020;
      local_38 = 0x4d1e55b200000000;
      uStack_30 = 0x1100cb8811cff16f;
      local_28 = 0x30000011;
      DAT_1416f18f8 = RegisterDeviceNotificationW(DAT_1416f18f0,&local_40,0);
      if (DAT_1416f18f8 != (HDEVNOTIFY)0x0) {
        couldnt_register_for_raw_input_events(DAT_1416f18f0);
        uVar3 = 1;
        goto LAB_140447f7e;
      }
      pcVar4 = "Failed to create notify device for joystick autodetect";
    }
  }
  FUN_1403d7710(pcVar4);
  couldnt_unregister_for_raw_input_events();
  if (DAT_1416f18f8 != (HDEVNOTIFY)0x0) {
    UnregisterDeviceNotification(DAT_1416f18f8);
  }
  if (DAT_1416f18f0 != (HWND)0x0) {
    DestroyWindow(DAT_1416f18f0);
  }
  UnregisterClassW(DAT_1416f18e0,DAT_1416f18b8);
  if (DAT_1416f1898 == 0) {
    CoUninitialize();
  }
  uVar3 = 0;
LAB_140447f7e:
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStackY_a8)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStackY_a8);
}


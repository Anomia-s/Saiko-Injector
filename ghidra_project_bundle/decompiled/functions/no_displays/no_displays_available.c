/**
 * Function: no_displays_available
 * Address:  140460d70
 * Signature: undefined no_displays_available(void)
 * Body size: 161 bytes
 */


undefined8 no_displays_available(longlong param_1)

{
  BOOL BVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_2c = 1;
  local_38 = param_1;
  EnumDisplayMonitors((HDC)0x0,(LPCRECT)0x0,couldnt_find_monitor_data,(LPARAM)&local_38);
  local_2c = 0;
  BVar1 = EnumDisplayMonitors((HDC)0x0,(LPCRECT)0x0,couldnt_find_monitor_data,(LPARAM)&local_38);
  uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
  if (*(int *)(param_1 + 800) == 0) {
    uVar2 = FUN_1400fbed0("No displays available");
  }
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_58)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_58);
}


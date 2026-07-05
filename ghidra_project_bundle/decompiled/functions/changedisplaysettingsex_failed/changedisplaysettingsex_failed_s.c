/**
 * Function: changedisplaysettingsex_failed_s
 * Address:  140461420
 * Signature: undefined changedisplaysettingsex_failed_s(void)
 * Body size: 184 bytes
 */


undefined8 changedisplaysettingsex_failed_s(undefined8 param_1,longlong param_2,longlong param_3)

{
  DEVMODEW *lpDevMode;
  LPCWSTR lpszDeviceName;
  LONG LVar1;
  undefined8 uVar2;
  DEVMODEW *lpDevMode_00;
  char *pcVar3;
  
  lpDevMode = *(DEVMODEW **)(param_3 + 0x20);
  lpszDeviceName = *(LPCWSTR *)(param_2 + 0x80);
  lpDevMode_00 = lpDevMode;
  if (lpDevMode == *(DEVMODEW **)(param_2 + 0x40)) {
    lpDevMode_00 = (DEVMODEW *)0x0;
  }
  LVar1 = ChangeDisplaySettingsExW(lpszDeviceName,lpDevMode_00,(HWND)0x0,4,(LPVOID)0x0);
  pcVar3 = "Unknown reason";
  switch(LVar1) {
  case 0:
    EnumDisplaySettingsW(lpszDeviceName,0xffffffff,lpDevMode);
    FUN_1404614e0(lpszDeviceName,0xffffffff,param_3);
    return 1;
  case -5:
    pcVar3 = "DISP_CHANGE_BADPARAM";
    break;
  case -4:
    pcVar3 = "DISP_CHANGE_BADFLAGS";
    break;
  case -2:
    pcVar3 = "DISP_CHANGE_BADMODE";
    break;
  case -1:
    pcVar3 = "DISP_CHANGE_FAILED";
  }
  uVar2 = FUN_1400fbed0("ChangeDisplaySettingsEx() failed: %s",pcVar3);
  return uVar2;
}


/**
 * Function: xinputgetbatteryinformation
 * Address:  1406501e0
 * Signature: undefined xinputgetbatteryinformation(void)
 * Body size: 400 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 xinputgetbatteryinformation(void)

{
  undefined4 uVar1;
  
  if (DAT_1416fded0 == (HMODULE)0x0) {
    DAT_1416fded0 = LoadLibraryW(L"XInput1_4.dll");
    if (DAT_1416fded0 == (HMODULE)0x0) {
      DAT_1416fded0 = LoadLibraryW(L"XInput1_3.dll");
      uVar1 = 0x10003;
      if (((DAT_1416fded0 == (HMODULE)0x0) &&
          (DAT_1416fded0 = LoadLibraryW(L"bin\\XInput1_3.dll"), DAT_1416fded0 == (HMODULE)0x0)) &&
         (DAT_1416fded0 = LoadLibraryW(L"XInput9_1_0.dll"), DAT_1416fded0 == (HMODULE)0x0)) {
        return 0;
      }
    }
    else {
      uVar1 = 0x10004;
    }
    _DAT_1416fded8 = 1;
    _DAT_1416fdec8 = uVar1;
    DAT_1416fdea0 = GetProcAddress(DAT_1416fded0,(LPCSTR)0x64);
    if (DAT_1416fdea0 == (FARPROC)0x0) {
      DAT_1416fdea0 = GetProcAddress(DAT_1416fded0,"XInputGetState");
    }
    DAT_1416fdea8 = GetProcAddress(DAT_1416fded0,"XInputSetState");
    DAT_1416fdeb0 = GetProcAddress(DAT_1416fded0,"XInputGetCapabilities");
    DAT_1416fdeb8 = GetProcAddress(DAT_1416fded0,(LPCSTR)0x6c);
    DAT_1416fdec0 = GetProcAddress(DAT_1416fded0,"XInputGetBatteryInformation");
    if (((DAT_1416fdea0 == (FARPROC)0x0) || (DAT_1416fdea8 == (FARPROC)0x0)) ||
       (DAT_1416fdeb0 == (FARPROC)0x0)) {
      if ((DAT_1416fded0 != (HMODULE)0x0) &&
         (_DAT_1416fded8 = _DAT_1416fded8 + -1, _DAT_1416fded8 == 0)) {
        FreeLibrary(DAT_1416fded0);
        DAT_1416fded0 = (HMODULE)0x0;
        return 0;
      }
      return 0;
    }
  }
  else {
    _DAT_1416fded8 = _DAT_1416fded8 + 1;
  }
  return 1;
}


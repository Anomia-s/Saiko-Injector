/**
 * Function: sdl_hidapi_enumerate_only_controllers
 * Address:  140179e50
 * Signature: undefined sdl_hidapi_enumerate_only_controllers(void)
 * Body size: 290 bytes
 */


undefined8 sdl_hidapi_enumerate_only_controllers(void)

{
  bool bVar1;
  
  if ((DAT_1415261c8 != 0) && (bVar1 = DAT_1415261c8 < 2, DAT_1415261c8 = DAT_1415261c8 + -1, bVar1)
     ) {
    DAT_1415261c8 = 0;
    if (DAT_1415261d0 == '\x01') {
      if (DAT_141526248 != (HDEVNOTIFY)0x0) {
        UnregisterDeviceNotification(DAT_141526248);
      }
      if (DAT_141526240 != (HWND)0x0) {
        DestroyWindow(DAT_141526240);
      }
      UnregisterClassA(DAT_141526230,DAT_141526208);
      DAT_1415261d0 = '\0';
    }
    if (DAT_141526258 != (HMODULE)0x0) {
      FreeLibrary(DAT_141526258);
    }
    DAT_141526258 = (HMODULE)0x0;
    if (DAT_141526260 != (HMODULE)0x0) {
      FreeLibrary(DAT_141526260);
    }
    DAT_141526260 = (HMODULE)0x0;
    DAT_141526148 = 0;
    FUN_140160cf0(DAT_1415261b0);
    DAT_1415261b0 = 0;
    FUN_1400fc040();
    FUN_1401108b0("SDL_HIDAPI_ENUMERATE_ONLY_CONTROLLERS",FUN_140179de0,0);
    FUN_1401108b0("SDL_HIDAPI_IGNORE_DEVICES",FUN_140179e00,0);
    if (DAT_1415261c0 != 0) {
      FUN_140160cf0();
      DAT_1415261c0 = 0;
    }
  }
  return 0;
}


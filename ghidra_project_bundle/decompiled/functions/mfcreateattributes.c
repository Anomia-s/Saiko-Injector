/**
 * Function: mfcreateattributes
 * Address:  1403d9670
 * Signature: undefined mfcreateattributes(void)
 * Body size: 529 bytes
 */


undefined1 * mfcreateattributes(undefined8 *param_1)

{
  HMODULE hLibModule;
  HMODULE hModule;
  HMODULE hModule_00;
  INT_PTR IVar1;
  code *pcVar2;
  
  hLibModule = LoadLibraryW(L"Mf.dll");
  if (hLibModule != (HMODULE)0x0) {
    hModule = LoadLibraryW(L"Mfplat.dll");
    if (hModule == (HMODULE)0x0) {
      FreeLibrary(hLibModule);
    }
    else {
      hModule_00 = LoadLibraryW(L"Mfreadwrite.dll");
      pcVar2 = FreeLibrary_exref;
      if (hModule_00 != (HMODULE)0x0) {
        DAT_1416f13b0 = GetProcAddress(hLibModule,"MFEnumDeviceSources");
        if ((((((DAT_1416f13b0 != (FARPROC)0x0) &&
               (DAT_1416f13b8 = GetProcAddress(hLibModule,"MFCreateDeviceSource"),
               DAT_1416f13b8 != (FARPROC)0x0)) &&
              (DAT_1416f13c0 = GetProcAddress(hModule,"MFStartup"), DAT_1416f13c0 != (FARPROC)0x0))
             && ((DAT_1416f13c8 = GetProcAddress(hModule,"MFShutdown"),
                 DAT_1416f13c8 != (FARPROC)0x0 &&
                 (DAT_1416f13d0 = GetProcAddress(hModule,"MFCreateAttributes"),
                 DAT_1416f13d0 != (FARPROC)0x0)))) &&
            ((DAT_1416f13d8 = GetProcAddress(hModule,"MFCreateMediaType"),
             DAT_1416f13d8 != (FARPROC)0x0 &&
             ((DAT_1416f13e0 = GetProcAddress(hModule,"MFGetStrideForBitmapInfoHeader"),
              DAT_1416f13e0 != (FARPROC)0x0 &&
              (DAT_1416f13e8 = GetProcAddress(hModule_00,"MFCreateSourceReaderFromMediaSource"),
              DAT_1416f13e8 != (FARPROC)0x0)))))) &&
           (IVar1 = (*DAT_1416f13c0)(0x20070,1), -1 < (int)IVar1)) {
          DAT_1416f13f0 = hLibModule;
          DAT_1416f13f8 = hModule;
          DAT_1416f1400 = hModule_00;
          *param_1 = FUN_1403d9890;
          param_1[1] = imfattributes_setstringsymlink_failed;
          param_1[2] = FUN_1403da740;
          param_1[3] = FUN_1403da7a0;
          param_1[4] = FUN_1403da890;
          param_1[5] = &DAT_1403dac00;
          param_1[6] = &LAB_1403dac10;
          param_1[7] = FUN_1403dac20;
          return &LAB_1403dac01;
        }
        pcVar2 = FreeLibrary_exref;
        FreeLibrary(hModule_00);
      }
      (*pcVar2)(hModule);
      (*pcVar2)(hLibModule);
    }
  }
  return (undefined1 *)0x0;
}


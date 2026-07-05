/**
 * Function: uresolve_dll_functions
 * Address:  1401737c0
 * Signature: undefined uresolve_dll_functions(void)
 * Body size: 911 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 uresolve_dll_functions(void)

{
  FUN_140160cf0(DAT_1415261b0);
  DAT_1415261b0 = 0;
  FUN_1400fc040();
  if (DAT_141526148 != '\0') {
    return 0;
  }
  DAT_141526258 = LoadLibraryW(L"hid.dll");
  if (DAT_141526258 != (HMODULE)0x0) {
    DAT_141526260 = LoadLibraryW(L"cfgmgr32.dll");
    if (DAT_141526260 != (HMODULE)0x0) {
      DAT_141526150 = GetProcAddress(DAT_141526258,"HidD_GetHidGuid");
      if (DAT_141526150 != (FARPROC)0x0) {
        DAT_141526168 = GetProcAddress(DAT_141526258,"HidD_GetAttributes");
        if (DAT_141526168 != (FARPROC)0x0) {
          DAT_141526268 = GetProcAddress(DAT_141526258,"HidD_GetSerialNumberString");
          if (DAT_141526268 != (FARPROC)0x0) {
            DAT_141526270 = GetProcAddress(DAT_141526258,"HidD_GetManufacturerString");
            if (DAT_141526270 != (FARPROC)0x0) {
              DAT_141526278 = GetProcAddress(DAT_141526258,"HidD_GetProductString");
              if (DAT_141526278 != (FARPROC)0x0) {
                DAT_141526190 = GetProcAddress(DAT_141526258,"HidD_SetFeature");
                if (DAT_141526190 != (FARPROC)0x0) {
                  _DAT_141526280 = GetProcAddress(DAT_141526258,"HidD_GetFeature");
                  if (_DAT_141526280 != (FARPROC)0x0) {
                    _DAT_141526288 = GetProcAddress(DAT_141526258,"HidD_GetInputReport");
                    if (_DAT_141526288 != (FARPROC)0x0) {
                      DAT_141526198 = GetProcAddress(DAT_141526258,"HidD_GetIndexedString");
                      if (DAT_141526198 != (FARPROC)0x0) {
                        DAT_141526170 = GetProcAddress(DAT_141526258,"HidD_GetPreparsedData");
                        if (DAT_141526170 != (FARPROC)0x0) {
                          DAT_141526180 = GetProcAddress(DAT_141526258,"HidD_FreePreparsedData");
                          if (DAT_141526180 != (FARPROC)0x0) {
                            DAT_141526178 = GetProcAddress(DAT_141526258,"HidP_GetCaps");
                            if (DAT_141526178 != (FARPROC)0x0) {
                              DAT_141526188 =
                                   GetProcAddress(DAT_141526258,"HidD_SetNumInputBuffers");
                              if (DAT_141526188 != (FARPROC)0x0) {
                                DAT_141526290 = GetProcAddress(DAT_141526258,"HidD_SetOutputReport")
                                ;
                                if (DAT_141526290 != (FARPROC)0x0) {
                                  DAT_1415261a0 = GetProcAddress(DAT_141526260,"CM_Locate_DevNodeW")
                                  ;
                                  if (DAT_1415261a0 != (FARPROC)0x0) {
                                    DAT_141526298 = GetProcAddress(DAT_141526260,"CM_Get_Parent");
                                    if (DAT_141526298 != (FARPROC)0x0) {
                                      DAT_1415261a8 =
                                           GetProcAddress(DAT_141526260,"CM_Get_DevNode_PropertyW");
                                      if (DAT_1415261a8 != (FARPROC)0x0) {
                                        DAT_1415262a0 =
                                             GetProcAddress(DAT_141526260,
                                                            "CM_Get_Device_Interface_PropertyW");
                                        if (DAT_1415262a0 != (FARPROC)0x0) {
                                          DAT_141526158 =
                                               GetProcAddress(DAT_141526260,
                                                              "CM_Get_Device_Interface_List_SizeW");
                                          if (DAT_141526158 != (FARPROC)0x0) {
                                            DAT_141526160 =
                                                 GetProcAddress(DAT_141526260,
                                                                "CM_Get_Device_Interface_ListW");
                                            if (DAT_141526160 != (FARPROC)0x0) {
                                              DAT_141526148 = 1;
                                              return 0;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (DAT_141526258 != (HMODULE)0x0) {
      FreeLibrary(DAT_141526258);
    }
  }
  DAT_141526258 = (HMODULE)0x0;
  if (DAT_141526260 != (HMODULE)0x0) {
    FreeLibrary(DAT_141526260);
  }
  DAT_141526260 = (HMODULE)0x0;
  uls_0x08x_ls(&DAT_1415261b0,L"resolve DLL functions");
  return 0xffffffff;
}


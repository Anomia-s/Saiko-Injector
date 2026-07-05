/**
 * Function: sdl_hidapi_libusb_whitelist
 * Address:  14017a4f0
 * Signature: undefined sdl_hidapi_libusb_whitelist(void)
 * Body size: 213 bytes
 */


longlong * sdl_hidapi_libusb_whitelist(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (DAT_1415261c8 == 0) {
    parameter_s_is_invalid("SDL_HIDAPI_ENUMERATE_ONLY_CONTROLLERS",FUN_140179de0,0);
    parameter_s_is_invalid("SDL_HIDAPI_IGNORE_DEVICES",FUN_140179e00,0);
    DAT_1414f9de0 = FUN_1401106d0("SDL_HIDAPI_LIBUSB_WHITELIST",1);
    iVar1 = uresolve_dll_functions();
    if (iVar1 != 0) {
      return (longlong *)0x0;
    }
    DAT_1415261c8 = DAT_1415261c8 + 1;
    lVar2 = uhid_device_allocation_error(param_1);
  }
  else {
    lVar2 = uhid_device_allocation_error();
  }
  if (lVar2 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)FUN_140160c40(0x60);
    FUN_1403d8ef0(plVar3,8,1);
    *plVar3 = lVar2;
    plVar3[1] = (longlong)&PTR_uhid_write_getoverlappedresult_140dede80;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[9] = 0;
    plVar3[10] = 0;
    plVar3[0xb] = 0;
  }
  return plVar3;
}


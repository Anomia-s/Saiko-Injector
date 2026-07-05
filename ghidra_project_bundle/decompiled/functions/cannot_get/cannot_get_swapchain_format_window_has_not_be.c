/**
 * Function: cannot_get_swapchain_format_window_has_not_be
 * Address:  1403fdb60
 * Signature: undefined cannot_get_swapchain_format_window_has_not_be(void)
 * Body size: 116 bytes
 */


undefined4 cannot_get_swapchain_format_window_has_not_be(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = video_subsystem_has_not_been_initialized(param_2);
  lVar2 = FUN_14014ff10(uVar1,"SDL_GPUD3D12WindowPropertyData",0);
  if (lVar2 != 0) {
    return *(undefined4 *)(lVar2 + 0x24 + (ulonglong)*(uint *)(lVar2 + 0x1c) * 0x50);
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_1400fb950(9,&DAT_141339891,"Cannot get swapchain format, window has not been claimed!");
  }
  FUN_1400fbed0(&DAT_141339891,"Cannot get swapchain format, window has not been claimed!");
  return 0;
}


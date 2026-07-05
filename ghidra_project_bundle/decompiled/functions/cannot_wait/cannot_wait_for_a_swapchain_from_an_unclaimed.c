/**
 * Function: cannot_wait_for_a_swapchain_from_an_unclaimed
 * Address:  1403fdff0
 * Signature: undefined cannot_wait_for_a_swapchain_from_an_unclaimed(void)
 * Body size: 148 bytes
 */


undefined8 cannot_wait_for_a_swapchain_from_an_unclaimed(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar2 = video_subsystem_has_not_been_initialized(param_2);
  lVar3 = FUN_14014ff10(uVar2,"SDL_GPUD3D12WindowPropertyData",0);
  if (lVar3 == 0) {
    if (*(char *)(param_1 + 0x78) != '\x01') {
      FUN_1400fbed0(&DAT_141339891,"Cannot wait for a swapchain from an unclaimed window!");
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1400fb950(9,&DAT_141339891,"Cannot wait for a swapchain from an unclaimed window!");
  }
  if ((*(longlong *)(lVar3 + 0x118 + (ulonglong)*(uint *)(lVar3 + 0x1c) * 8) != 0) &&
     (cVar1 = setting_fence_event_failed
                        (param_1,1,lVar3 + (ulonglong)*(uint *)(lVar3 + 0x1c) * 8 + 0x118,1),
     cVar1 == '\0')) {
    return 0;
  }
  return 1;
}


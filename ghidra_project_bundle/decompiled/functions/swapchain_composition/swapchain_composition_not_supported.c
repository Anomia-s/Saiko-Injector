/**
 * Function: swapchain_composition_not_supported
 * Address:  1403fd9a0
 * Signature: undefined swapchain_composition_not_supported(void)
 * Body size: 300 bytes
 */


undefined8
swapchain_composition_not_supported(longlong param_1,undefined8 param_2,int param_3,uint param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  uVar2 = video_subsystem_has_not_been_initialized(param_2);
  lVar3 = FUN_14014ff10(uVar2,"SDL_GPUD3D12WindowPropertyData",0);
  if (lVar3 == 0) {
    if (*(char *)(param_1 + 0x78) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,&DAT_141339891,"Cannot set swapchain parameters on unclaimed window!");
    }
    pcVar5 = "Cannot set swapchain parameters on unclaimed window!";
  }
  else {
    cVar1 = must_claim_window_before_querying_swapchain_c(param_1,param_2,param_3);
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x78) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_1400fb950(9,&DAT_141339891,"Swapchain composition not supported!");
      }
      pcVar5 = "Swapchain composition not supported!";
    }
    else {
      if (param_4 < 3) {
        if ((param_3 == *(int *)(lVar3 + 0x14)) && (param_4 == *(uint *)(lVar3 + 0x10))) {
          return 1;
        }
        setting_fence_event_failed(param_1);
        FUN_140402f70(lVar3);
        uVar4 = failed_to_retrieve_swapchain_descriptor(param_1,lVar3,param_3,param_4);
        return uVar4;
      }
      if (*(char *)(param_1 + 0x78) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_1400fb950(9,&DAT_141339891,"Present mode not supported!");
      }
      pcVar5 = "Present mode not supported!";
    }
  }
  FUN_1400fbed0(&DAT_141339891,pcVar5);
  return 0;
}


/**
 * Function: window_already_claimed
 * Address:  1403fd570
 * Signature: undefined window_already_claimed(void)
 * Body size: 351 bytes
 */


undefined8 window_already_claimed(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  char *pcVar6;
  
  uVar2 = video_subsystem_has_not_been_initialized(param_2);
  lVar3 = FUN_14014ff10(uVar2,"SDL_GPUD3D12WindowPropertyData",0);
  if (lVar3 == 0) {
    puVar4 = (undefined8 *)FUN_140160c70(1,0x140);
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    *puVar4 = param_2;
    cVar1 = failed_to_retrieve_swapchain_descriptor(param_1,puVar4,0,0);
    if (cVar1 != '\0') {
      uVar2 = video_subsystem_has_not_been_initialized(param_2);
      FUN_14014faf0(uVar2,"SDL_GPUD3D12WindowPropertyData",puVar4);
      FUN_1401552a0(*(undefined8 *)(param_1 + 0x1f0));
      uVar5 = *(uint *)(param_1 + 0x120);
      if (uVar5 < *(uint *)(param_1 + 0x124)) {
        lVar3 = *(longlong *)(param_1 + 0x118);
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x124) * 2;
        *(uint *)(param_1 + 0x124) = uVar5;
        lVar3 = FUN_140160cc0(*(undefined8 *)(param_1 + 0x118),(ulonglong)uVar5 << 3);
        *(longlong *)(param_1 + 0x118) = lVar3;
        uVar5 = *(uint *)(param_1 + 0x120);
      }
      *(undefined8 **)(lVar3 + (ulonglong)uVar5 * 8) = puVar4;
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
      FUN_1401552c0(*(undefined8 *)(param_1 + 0x1f0));
      FUN_140107e90(FUN_140402c30,param_2);
      return 1;
    }
    FUN_140160cf0(puVar4);
    if (*(char *)(param_1 + 0x78) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,&DAT_141339891,"Could not create swapchain, failed to claim window!");
    }
    pcVar6 = "Could not create swapchain, failed to claim window!";
  }
  else {
    if (*(char *)(param_1 + 0x78) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,&DAT_141339891,"Window already claimed");
    }
    pcVar6 = "Window already claimed";
  }
  FUN_1400fbed0(&DAT_141339891,pcVar6);
  return 0;
}


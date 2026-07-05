/**
 * Function: couldnt_find_dummy_surface_for_window
 * Address:  140655420
 * Signature: undefined couldnt_find_dummy_surface_for_window(void)
 * Body size: 236 bytes
 */


undefined8 couldnt_find_dummy_surface_for_window(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  uVar2 = video_subsystem_has_not_been_initialized(param_2);
  lVar3 = FUN_14014ff10(uVar2,"SDL.internal.window.surface",0);
  if (lVar3 == 0) {
    uVar4 = FUN_1400fbed0("Couldn\'t find dummy surface for window");
    if (DAT_1414ef3c0 != (local_20 ^ (ulonglong)auStack_d8)) goto LAB_1406554fc;
  }
  else {
    cVar1 = FUN_1401106d0("SDL_VIDEO_DUMMY_SAVE_FRAMES",0);
    if (cVar1 != '\0') {
      iVar5 = DAT_1416fdf4c + 1;
      DAT_1416fdf4c = iVar5;
      uVar2 = video_subsystem_has_not_been_initialized(param_2);
      local_b8 = iVar5;
      FUN_1400fd420(local_a8,0x80,"SDL_window%u-%8.8d.bmp",uVar2);
      FUN_1401655f0(lVar3,local_a8);
    }
    if (DAT_1414ef3c0 != (local_20 ^ (ulonglong)auStack_d8)) {
LAB_1406554fc:
                    /* WARNING: Subroutine does not return */
      FUN_140b65db0(local_20 ^ (ulonglong)auStack_d8);
    }
    uVar4 = CONCAT71((int7)((local_20 ^ (ulonglong)auStack_d8) >> 8),1);
  }
  return uVar4;
}


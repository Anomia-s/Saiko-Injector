/**
 * Function: video_subsystem_has_not_been_initialized
 * Address:  14014ee40
 * Signature: undefined video_subsystem_has_not_been_initialized(void)
 * Body size: 132 bytes
 */


void video_subsystem_has_not_been_initialized(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  if (DAT_1415259c8 == 0) {
    pcVar3 = "Video subsystem has not been initialized";
  }
  else {
    cVar1 = FUN_1403d8fa0(param_2,1);
    if (cVar1 != '\0') {
      if (*(int *)(param_2 + 0x170) != 0) {
        FUN_14014f840(*(int *)(param_2 + 0x170),"SDL.internal.window.texturedata");
        return;
      }
      uVar2 = FUN_14014f270();
      *(undefined4 *)(param_2 + 0x170) = uVar2;
      FUN_14014f840(uVar2,"SDL.internal.window.texturedata");
      return;
    }
    pcVar3 = "Invalid window";
  }
  FUN_1400fbed0(pcVar3);
  FUN_14014f840(0,"SDL.internal.window.texturedata");
  return;
}


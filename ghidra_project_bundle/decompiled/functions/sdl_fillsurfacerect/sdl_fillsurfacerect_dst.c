/**
 * Function: sdl_fillsurfacerect_dst
 * Address:  140158da0
 * Signature: undefined sdl_fillsurfacerect_dst(void)
 * Body size: 107 bytes
 */


undefined1 sdl_fillsurfacerect_dst(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_140110960();
  if (cVar1 == '\0') {
    uVar2 = FUN_1400fbed0("Parameter \'%s\' is invalid","SDL_FillSurfaceRect(): dst");
    return uVar2;
  }
  if (param_2 == 0) {
    if ((*(int *)(param_1 + 0x6c) < 1) || (*(int *)(param_1 + 0x70) < 1)) {
      return 1;
    }
    param_2 = param_1 + 100;
  }
  uVar2 = sdl_fillsurfacerects_dst(param_1,param_2,1,param_3);
  return uVar2;
}


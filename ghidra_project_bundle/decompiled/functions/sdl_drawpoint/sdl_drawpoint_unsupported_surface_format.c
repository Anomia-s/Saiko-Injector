/**
 * Function: sdl_drawpoint_unsupported_surface_format
 * Address:  140621830
 * Signature: undefined sdl_drawpoint_unsupported_surface_format(void)
 * Body size: 232 bytes
 */


undefined8
sdl_drawpoint_unsupported_surface_format
          (longlong param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  cVar1 = FUN_140110960();
  if (cVar1 == '\0') {
    uVar2 = FUN_1400fbed0("Parameter \'%s\' is invalid","SDL_DrawPoint(): dst");
  }
  else {
    uVar3 = *(ulonglong *)(param_1 + 0x38);
    if (*(byte *)(uVar3 + 4) < 8) {
      uVar2 = FUN_1400fbed0("SDL_DrawPoint(): Unsupported surface format");
    }
    else {
      if ((((*(int *)(param_1 + 100) <= param_2) && (*(int *)(param_1 + 0x68) <= param_3)) &&
          (param_2 < *(int *)(param_1 + 100) + *(int *)(param_1 + 0x6c))) &&
         (param_3 < *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x70))) {
        uVar3 = (ulonglong)(*(byte *)(uVar3 + 5) - 1);
        switch(uVar3) {
        case 0:
          uVar3 = (ulonglong)param_2;
          *(char *)(uVar3 + (longlong)param_3 * (longlong)*(int *)(param_1 + 0x10) +
                            *(longlong *)(param_1 + 0x18)) = (char)param_4;
          break;
        case 1:
          uVar3 = (ulonglong)param_2;
          *(short *)((longlong)param_3 * (longlong)*(int *)(param_1 + 0x10) +
                     *(longlong *)(param_1 + 0x18) + uVar3 * 2) = (short)param_4;
          break;
        case 2:
          uVar2 = FUN_1400fbed0("That operation is not supported");
          return uVar2;
        case 3:
          uVar3 = (ulonglong)param_2;
          *(undefined4 *)
           ((longlong)param_3 * (longlong)*(int *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x18) +
           uVar3 * 4) = param_4;
        }
      }
      uVar2 = CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return uVar2;
}


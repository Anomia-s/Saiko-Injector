/**
 * Function: the_surface_is_not_indexed_format
 * Address:  1401112c0
 * Signature: undefined the_surface_is_not_indexed_format(void)
 * Body size: 397 bytes
 */


int * the_surface_is_not_indexed_format(longlong param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  
  if ((param_1 == 0) || (*(undefined **)(param_1 + 0x28) != &DAT_14152553c)) {
    FUN_1400fbed0("Parameter \'%s\' is invalid","surface");
  }
  else {
    uVar1 = *(uint *)(param_1 + 4);
    if (((uVar1 == 0 || (uVar1 & 0xf0000000) == 0x10000000) &&
        (uVar6 = uVar1 >> 0x18 & 0xf, uVar6 < 0xd)) && ((0x100eU >> uVar6 & 1) != 0)) {
      piVar5 = (int *)parameter_s_is_invalid(1 << ((byte)(uVar1 >> 8) & 0x1f));
      if (piVar5 != (int *)0x0) {
        if (*piVar5 == 2) {
          **(undefined1 **)(piVar5 + 2) = 0xff;
          *(undefined1 *)(*(longlong *)(piVar5 + 2) + 1) = 0xff;
          *(undefined1 *)(*(longlong *)(piVar5 + 2) + 2) = 0xff;
          *(undefined1 *)(*(longlong *)(piVar5 + 2) + 4) = 0;
          *(undefined1 *)(*(longlong *)(piVar5 + 2) + 5) = 0;
          *(undefined1 *)(*(longlong *)(piVar5 + 2) + 6) = 0;
        }
        if (*(undefined **)(param_1 + 0x28) == &DAT_14152553c) {
          iVar3 = 1 << ((byte)(*(uint *)(param_1 + 4) >> 8) & 0x1f);
          if ((*(uint *)(param_1 + 4) & 0xf0000000) != 0x10000000) {
            iVar3 = 1;
          }
          if (*piVar5 <= iVar3) {
            piVar2 = *(int **)(param_1 + 0x48);
            if (piVar5 != piVar2) {
              if (piVar2 != (int *)0x0) {
                FUN_1401568c0(piVar2);
              }
              *(int **)(param_1 + 0x48) = piVar5;
              piVar5[5] = piVar5[5] + 1;
            }
            FUN_1401579d0(param_1 + 0x78);
            FUN_1401568c0(piVar5);
            return piVar5;
          }
          cVar4 = FUN_1400fbed0(
                               "SDL_SetSurfacePalette() passed a palette that doesn\'t match the surface format"
                               );
        }
        else {
          cVar4 = FUN_1400fbed0("Parameter \'%s\' is invalid","surface");
        }
        FUN_1401568c0(piVar5);
        if (cVar4 != '\0') {
          return piVar5;
        }
      }
    }
    else {
      FUN_1400fbed0("The surface is not indexed format");
    }
  }
  return (int *)0x0;
}


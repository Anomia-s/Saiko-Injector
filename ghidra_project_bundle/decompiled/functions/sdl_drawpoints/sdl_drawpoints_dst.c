/**
 * Function: sdl_drawpoints_dst
 * Address:  140621920
 * Signature: undefined sdl_drawpoints_dst(void)
 * Body size: 281 bytes
 */


undefined8 sdl_drawpoints_dst(longlong param_1,longlong param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  
  cVar7 = FUN_140110960();
  if (cVar7 == '\0') {
    uVar8 = FUN_1400fbed0("Parameter \'%s\' is invalid","SDL_DrawPoints(): dst");
  }
  else {
    uVar9 = *(ulonglong *)(param_1 + 0x38);
    if (*(byte *)(uVar9 + 4) < 8) {
      uVar8 = FUN_1400fbed0("SDL_DrawPoints(): Unsupported surface format");
    }
    else {
      if (0 < (int)param_3) {
        uVar1 = *(uint *)(param_1 + 100);
        uVar9 = (ulonglong)uVar1;
        iVar2 = *(int *)(param_1 + 0x68);
        iVar3 = *(int *)(param_1 + 0x6c);
        iVar4 = *(int *)(param_1 + 0x70);
        uVar10 = 0;
        do {
          iVar5 = *(int *)(param_2 + uVar10 * 8);
          if (((((int)uVar1 <= iVar5) && (iVar5 < (int)(iVar3 + uVar1))) &&
              (iVar6 = *(int *)(param_2 + 4 + uVar10 * 8), iVar2 <= iVar6)) &&
             ((iVar6 < iVar4 + iVar2 &&
              (uVar11 = (uint)*(byte *)(*(longlong *)(param_1 + 0x38) + 5), uVar11 - 1 < 4)))) {
            lVar12 = (longlong)iVar5;
            lVar13 = (longlong)iVar6;
            switch(uVar11) {
            case 1:
              *(char *)(lVar12 + *(int *)(param_1 + 0x10) * lVar13 + *(longlong *)(param_1 + 0x18))
                   = (char)param_4;
              break;
            case 2:
              *(short *)(*(int *)(param_1 + 0x10) * lVar13 + *(longlong *)(param_1 + 0x18) +
                        lVar12 * 2) = (short)param_4;
              break;
            case 3:
              uVar8 = FUN_1400fbed0("That operation is not supported");
              return uVar8;
            case 4:
              *(undefined4 *)
               (*(int *)(param_1 + 0x10) * lVar13 + *(longlong *)(param_1 + 0x18) + lVar12 * 4) =
                   param_4;
            }
          }
          uVar10 = uVar10 + 1;
        } while (param_3 != uVar10);
      }
      uVar8 = CONCAT71((int7)(uVar9 >> 8),1);
    }
  }
  return uVar8;
}


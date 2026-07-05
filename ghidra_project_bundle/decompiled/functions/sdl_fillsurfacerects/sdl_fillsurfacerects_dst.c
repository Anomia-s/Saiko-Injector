/**
 * Function: sdl_fillsurfacerects_dst
 * Address:  140158e10
 * Signature: undefined sdl_fillsurfacerects_dst(void)
 * Body size: 732 bytes
 */


undefined8 sdl_fillsurfacerects_dst(longlong param_1,int *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  code *pcVar6;
  char *pcVar7;
  code *pcVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  uVar9 = (ulonglong)param_3;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  cVar3 = FUN_140110960();
  if (cVar3 == '\0') {
    pcVar7 = "SDL_FillSurfaceRects(): dst";
LAB_140158f20:
    uVar5 = FUN_1400fbed0("Parameter \'%s\' is invalid",pcVar7);
    goto LAB_140158f25;
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if ((longlong)iVar1 == 0) goto LAB_1401590a7;
    if (*(void **)(param_1 + 0x18) == (void *)0x0) {
      uVar5 = FUN_1400fbed0("SDL_FillSurfaceRects(): You must lock the surface");
      goto LAB_140158f25;
    }
    if (param_2 == (int *)0x0) {
      pcVar7 = "SDL_FillSurfaceRects(): rects";
      goto LAB_140158f20;
    }
    uVar2 = *(uint *)(param_1 + 4);
    bVar10 = (uVar2 & 0xf0000000) != 0x10000000;
    if (bVar10 || (uVar2 & 0xf800) == 0) {
      if (((((param_3 == 1) && (*param_2 == 0)) && (param_2[1] == 0)) &&
          ((param_2[2] == *(int *)(param_1 + 8) && ((uVar2 & 0xff00) == 0x400)))) &&
         ((uVar2 == 0 || !bVar10) && param_2[3] == iVar1)) {
        memset(*(void **)(param_1 + 0x18),param_4 << 4 | param_4,
               (longlong)*(int *)(param_1 + 0x10) * (longlong)iVar1);
        goto LAB_1401590a7;
      }
      uVar5 = FUN_1400fbed0("SDL_FillSurfaceRects(): Unsupported surface format");
LAB_140158f25:
      if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_88)) {
        return uVar5;
      }
      goto LAB_1401590df;
    }
    switch(uVar2 & 0xff) {
    case 1:
      param_4 = param_4 << 8 | param_4;
      param_4 = param_4 << 0x10 | param_4;
      cVar3 = FUN_14015ce20();
      pcVar6 = FUN_1401590f0;
      pcVar8 = FUN_140159420;
      break;
    case 2:
      param_4 = param_4 | param_4 << 0x10;
      cVar3 = FUN_14015ce20();
      pcVar6 = FUN_140159700;
      pcVar8 = FUN_140159b00;
      break;
    case 3:
      pcVar8 = FUN_140159c30;
      goto LAB_140158ff1;
    case 4:
      cVar3 = FUN_14015ce20();
      pcVar6 = FUN_140159cf0;
      pcVar8 = FUN_14015a230;
      break;
    default:
      uVar5 = FUN_1400fbed0("Unsupported pixel format");
      goto LAB_140158f25;
    }
    if (cVar3 != '\0') {
      pcVar8 = pcVar6;
    }
LAB_140158ff1:
    if (0 < (int)param_3) {
      do {
        cVar3 = potential_rect_math_overflow(param_2,param_1 + 100,&local_58);
        if (cVar3 != '\0') {
          uVar2 = *(uint *)(param_1 + 4);
          if ((uVar2 & 0xf0000000) == 0x10000000 || uVar2 == 0) {
            uVar4 = uVar2 & 0xff;
          }
          else {
            uVar4 = 2;
            if (((uVar2 != 0x32595559) && (uVar2 != 0x55595659)) && (uVar2 != 0x59565955)) {
              uVar4 = (uVar2 == 0x30313050) + 1;
            }
          }
          local_68 = local_4c;
          (*pcVar8)((ulonglong)uVar4 * (longlong)local_58 +
                    (longlong)local_54 * (longlong)*(int *)(param_1 + 0x10) +
                    *(longlong *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x10),param_4,
                    local_50);
        }
        param_2 = param_2 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
LAB_1401590a7:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_88)) {
    return CONCAT71((int7)((local_48 ^ (ulonglong)auStack_88) >> 8),1);
  }
LAB_1401590df:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_88);
}


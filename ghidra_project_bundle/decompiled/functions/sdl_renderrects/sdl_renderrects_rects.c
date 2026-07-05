/**
 * Function: sdl_renderrects_rects
 * Address:  1401207d0
 * Signature: undefined sdl_renderrects_rects(void)
 * Body size: 371 bytes
 */


char sdl_renderrects_rects(longlong param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  float local_60;
  float local_5c;
  undefined8 local_58;
  float local_50;
  float local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  cVar2 = FUN_1403d8fa0(param_1,2);
  if (cVar2 == '\0') {
LAB_1401208d1:
    FUN_1400fbed0("Parameter \'%s\' is invalid","renderer");
LAB_1401208e4:
    cVar2 = '\0';
  }
  else {
    if (*(char *)(param_1 + 0x2b8) == '\x01') {
LAB_140120813:
      FUN_1400fbed0("Renderer\'s window has been destroyed, can\'t use further");
      goto LAB_1401208e4;
    }
    if (param_2 == 0) {
      cVar2 = FUN_1400fbed0("Parameter \'%s\' is invalid","SDL_RenderRects(): rects");
      if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_88)) {
        return cVar2;
      }
      goto LAB_140120932;
    }
    if ((int)param_3 < 1) {
      cVar2 = '\x01';
    }
    else {
      lVar3 = 0;
      do {
        cVar2 = FUN_1403d8fa0(param_1,2);
        if (cVar2 == '\0') goto LAB_1401208d1;
        if (*(char *)(param_1 + 0x2b8) == '\x01') goto LAB_140120813;
        local_68 = *(undefined8 *)(param_2 + lVar3);
        uVar1 = *(undefined8 *)(param_2 + 8 + lVar3);
        local_50 = (float)local_68;
        local_5c = (float)((ulonglong)local_68 >> 0x20);
        local_60 = (float)uVar1 + local_50 + -1.0;
        local_4c = (float)((ulonglong)uVar1 >> 0x20) + local_5c + -1.0;
        local_58 = CONCAT44(local_4c,local_60);
        local_48 = local_68;
        cVar2 = sdl_renderlines_points(param_1,&local_68,5);
      } while ((cVar2 != '\0') &&
              (bVar4 = (ulonglong)param_3 * 0x10 + -0x10 != lVar3, lVar3 = lVar3 + 0x10, bVar4));
    }
  }
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_88)) {
    return cVar2;
  }
LAB_140120932:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_88);
}


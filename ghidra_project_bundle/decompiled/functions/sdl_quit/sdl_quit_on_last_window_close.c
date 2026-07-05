/**
 * Function: sdl_quit_on_last_window_close
 * Address:  140460c40
 * Signature: undefined sdl_quit_on_last_window_close(void)
 * Body size: 161 bytes
 */


void sdl_quit_on_last_window_close(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  
  FUN_1403d8ef0(param_1,0xb,0);
  iVar6 = DAT_1416f2184 + -1;
  bVar1 = 1 < DAT_1416f2184;
  DAT_1416f2184 = iVar6;
  if ((bVar1) || (cVar2 = FUN_1401106d0("SDL_QUIT_ON_LAST_WINDOW_CLOSE",1), cVar2 == '\0')) {
    return;
  }
  plVar3 = (longlong *)video_subsystem_has_not_been_initialized(0);
  if (plVar3 != (longlong *)0x0) {
    lVar5 = *plVar3;
    if (lVar5 == 0) {
      FUN_140160cf0(plVar3);
    }
    else {
      iVar6 = 0;
      plVar4 = plVar3;
      do {
        plVar4 = plVar4 + 1;
        if (*(longlong *)(lVar5 + 0x198) == 0) {
          iVar6 = iVar6 + (uint)((*(byte *)(lVar5 + 0x48) & 8) == 0);
        }
        lVar5 = *plVar4;
      } while (lVar5 != 0);
      FUN_140160cf0(plVar3);
      if (iVar6 != 0) {
        return;
      }
    }
  }
  FUN_140404140();
  return;
}


/**
 * Function: popup_windows_must_specify_either_the_sdl_win
 * Address:  140149180
 * Signature: undefined popup_windows_must_specify_either_the_sdl_win(void)
 * Body size: 214 bytes
 */


undefined8
popup_windows_must_specify_either_the_sdl_win
          (undefined8 param_1,int param_2,int param_3,int param_4,int param_5,ulonglong param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14014f270();
  if ((param_6 & 0xc0000) == 0) {
    FUN_1400fbed0(
                 "Popup windows must specify either the \'SDL_WINDOW_TOOLTIP\' or the \'SDL_WINDOW_POPUP_MENU\' flag"
                 );
    uVar2 = 0;
  }
  else {
    FUN_14014faf0(uVar1,"SDL.window.create.parent",param_1);
    FUN_14014fc70(uVar1,"SDL.window.create.x",(longlong)param_2);
    FUN_14014fc70(uVar1,"SDL.window.create.y",(longlong)param_3);
    FUN_14014fc70(uVar1,"SDL.window.create.width",(longlong)param_4);
    FUN_14014fc70(uVar1,"SDL.window.create.height",(longlong)param_5);
    FUN_14014fc70(uVar1,"SDL.window.create.flags",param_6);
    uVar2 = sdlwindowcreateexternal_graphics_context(uVar1);
    FUN_14014f0d0(uVar1);
  }
  return uVar2;
}


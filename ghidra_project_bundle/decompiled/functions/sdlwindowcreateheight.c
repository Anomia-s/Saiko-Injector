/**
 * Function: sdlwindowcreateheight
 * Address:  1401490f0
 * Signature: undefined sdlwindowcreateheight(void)
 * Body size: 138 bytes
 */


undefined8 sdlwindowcreateheight(char *param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14014f270();
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    FUN_14014fbf0(uVar1,"SDL.window.create.title",param_1);
  }
  FUN_14014fc70(uVar1,"SDL.window.create.width",(longlong)param_2);
  FUN_14014fc70(uVar1,"SDL.window.create.height",(longlong)param_3);
  FUN_14014fc70(uVar1,"SDL.window.create.flags",param_4);
  uVar2 = sdlwindowcreateexternal_graphics_context(uVar1);
  FUN_14014f0d0(uVar1);
  return uVar2;
}


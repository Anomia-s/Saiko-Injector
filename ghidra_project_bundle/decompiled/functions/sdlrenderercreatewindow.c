/**
 * Function: sdlrenderercreatewindow
 * Address:  140119260
 * Signature: undefined sdlrenderercreatewindow(void)
 * Body size: 82 bytes
 */


undefined8 sdlrenderercreatewindow(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14014f270();
  FUN_14014faf0(uVar1,"SDL.renderer.create.window",param_1);
  FUN_14014fbf0(uVar1,"SDL.renderer.create.name",param_2);
  uVar2 = renderer_already_associated_with_window(uVar1);
  FUN_14014f0d0(uVar1);
  return uVar2;
}


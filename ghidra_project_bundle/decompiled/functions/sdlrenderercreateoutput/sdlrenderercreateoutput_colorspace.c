/**
 * Function: sdlrenderercreateoutput_colorspace
 * Address:  140118860
 * Signature: undefined sdlrenderercreateoutput_colorspace(void)
 * Body size: 42 bytes
 */


void sdlrenderercreateoutput_colorspace(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140150150(param_2,"SDL.renderer.create.output_colorspace",0x120005a0);
  *(undefined4 *)(param_1 + 0x1f0) = uVar1;
  return;
}


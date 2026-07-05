/**
 * Function: sdlrenderercreatepresent_vsync
 * Address:  140417e50
 * Signature: undefined sdlrenderercreatepresent_vsync(void)
 * Body size: 188 bytes
 */


undefined8 sdlrenderercreatepresent_vsync(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = (char *)FUN_140110550("SDL_RENDER_VSYNC");
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    cVar1 = FUN_1401503a0(param_3,"SDL.renderer.create.present_vsync",0);
    pcVar2 = "0";
    if (cVar1 != '\0') {
      pcVar2 = "1";
    }
    FUN_140110540("SDL_RENDER_VSYNC",pcVar2);
    uVar3 = window_framebuffer_support_not_available(param_2);
    FUN_140110540("SDL_RENDER_VSYNC",&DAT_1413a2ad6);
    cVar1 = FUN_140110960(uVar3);
  }
  else {
    uVar3 = window_framebuffer_support_not_available(param_2);
    cVar1 = FUN_140110960(uVar3);
  }
  if (cVar1 == '\0') {
    return 0;
  }
  uVar3 = unsupported_output_colorspace(param_1,uVar3,param_3);
  return uVar3;
}


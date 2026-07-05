/**
 * Function: sdl_render_opengles2_texcoord_precision
 * Address:  140635a90
 * Signature: undefined sdl_render_opengles2_texcoord_precision(void)
 * Body size: 126 bytes
 */


undefined8 sdl_render_opengles2_texcoord_precision(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140110550("SDL_RENDER_OPENGLES2_TEXCOORD_PRECISION");
  if (lVar2 != 0) {
    iVar1 = FUN_1400fd200(lVar2,"undefined");
    if (iVar1 == 0) {
      return 4;
    }
    iVar1 = FUN_1400fd200(lVar2,"high");
    if (iVar1 == 0) {
      return 3;
    }
    iVar1 = FUN_1400fd200(lVar2,"medium");
    if (iVar1 == 0) {
      return 2;
    }
  }
  return 1;
}


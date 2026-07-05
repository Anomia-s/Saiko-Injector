/**
 * Function: sdl_opengl_es_driver
 * Address:  140463e70
 * Signature: undefined sdl_opengl_es_driver(void)
 * Body size: 85 bytes
 */


bool sdl_opengl_es_driver(longlong param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  cVar3 = FUN_1401106d0("SDL_OPENGL_ES_DRIVER",0);
  bVar4 = true;
  if ((cVar3 == '\0') && (iVar1 = *(int *)(param_1 + 0x3dc), iVar1 != 1)) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x680) + 8);
    if (iVar1 <= iVar2) {
      if (iVar1 != iVar2) {
        return false;
      }
      bVar4 = *(int *)(*(longlong *)(param_1 + 0x680) + 0xc) < *(int *)(param_1 + 0x3e0);
    }
  }
  return bVar4;
}


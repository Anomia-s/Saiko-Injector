/**
 * Function: could_not_retrieve_opengl_functions
 * Address:  140462db0
 * Signature: undefined could_not_retrieve_opengl_functions(void)
 * Body size: 349 bytes
 */


undefined8 could_not_retrieve_opengl_functions(longlong param_1,char *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (param_2 == (char *)0x0) {
    param_2 = (char *)FUN_140110550("SDL_OPENGL_LIBRARY");
  }
  pcVar4 = "OPENGL32.DLL";
  if (param_2 != (char *)0x0) {
    pcVar4 = param_2;
  }
  lVar1 = parameter_s_is_invalid(pcVar4);
  *(longlong *)(param_1 + 0x510) = lVar1;
  if (lVar1 != 0) {
    FUN_1400fcb10(param_1 + 0x40c,pcVar4,0x100);
    lVar1 = FUN_140160c70(1,0x58);
    *(longlong *)(param_1 + 0x680) = lVar1;
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x510);
      uVar2 = failed_loading_s(uVar3,"wglGetProcAddress");
      *(undefined8 *)(*(longlong *)(param_1 + 0x680) + 0x10) = uVar2;
      uVar2 = failed_loading_s(uVar3,"wglCreateContext");
      *(undefined8 *)(*(longlong *)(param_1 + 0x680) + 0x18) = uVar2;
      uVar2 = failed_loading_s(uVar3,"wglDeleteContext");
      *(undefined8 *)(*(longlong *)(param_1 + 0x680) + 0x20) = uVar2;
      uVar2 = failed_loading_s(uVar3,"wglMakeCurrent");
      *(undefined8 *)(*(longlong *)(param_1 + 0x680) + 0x28) = uVar2;
      uVar3 = failed_loading_s(uVar3,"wglShareLists");
      *(undefined8 *)(*(longlong *)(param_1 + 0x680) + 0x30) = uVar3;
      lVar1 = *(longlong *)(param_1 + 0x680);
      if ((((*(longlong *)(lVar1 + 0x10) != 0) && (*(longlong *)(lVar1 + 0x18) != 0)) &&
          (*(longlong *)(lVar1 + 0x20) != 0)) && (*(longlong *)(lVar1 + 0x28) != 0)) {
        *(int *)(param_1 + 0x408) = *(int *)(param_1 + 0x408) + 1;
        wgl_arb_create_context_robustness(param_1);
        *(int *)(param_1 + 0x408) = *(int *)(param_1 + 0x408) + -1;
        return 1;
      }
      uVar3 = FUN_1400fbed0("Could not retrieve OpenGL functions");
      return uVar3;
    }
  }
  return 0;
}


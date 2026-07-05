/**
 * Function: opengl_not_initialized
 * Address:  140463df0
 * Signature: undefined opengl_not_initialized(void)
 * Body size: 120 bytes
 */


undefined8 opengl_not_initialized(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x680);
  if (lVar2 == 0) {
    uVar3 = FUN_1400fbed0("OpenGL not initialized");
    return uVar3;
  }
  if (param_2 == 0) {
    param_2 = video_subsystem_has_not_been_initialized();
    if (param_2 == 0) {
      return 1;
    }
    lVar2 = *(longlong *)(param_1 + 0x680);
  }
  iVar1 = (**(code **)(lVar2 + 0x28))
                    (*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x18),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = FUN_1403d7710("wglMakeCurrent()");
  return uVar3;
}


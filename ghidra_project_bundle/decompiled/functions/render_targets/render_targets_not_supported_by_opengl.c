/**
 * Function: render_targets_not_supported_by_opengl
 * Address:  1404290b0
 * Signature: undefined render_targets_not_supported_by_opengl(void)
 * Body size: 164 bytes
 */


undefined8 render_targets_not_supported_by_opengl(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x2c0);
  FUN_14042a660();
  if (*(char *)(lVar1 + 0x2e) == '\0') {
    pcVar5 = "Render targets not supported by OpenGL";
LAB_140429131:
    uVar4 = FUN_1400fbed0(pcVar5);
    return uVar4;
  }
  *(undefined1 *)(lVar1 + 0x200) = 1;
  if (param_2 == 0) {
    (**(code **)(lVar1 + 0x1e8))(0x8d40,0);
  }
  else {
    puVar2 = *(undefined4 **)(param_2 + 0xf0);
    (**(code **)(lVar1 + 0x1e8))(0x8d40,*(undefined4 *)(*(longlong *)(puVar2 + 0x16) + 8));
    (**(code **)(lVar1 + 0x1e0))(0x8d40,0x8ce0,*(undefined4 *)(lVar1 + 0x28),*puVar2,0);
    iVar3 = (**(code **)(lVar1 + 0x1f0))(0x8d40);
    if (iVar3 != 0x8cd5) {
      pcVar5 = "glFramebufferTexture2DEXT() failed";
      goto LAB_140429131;
    }
  }
  return 1;
}


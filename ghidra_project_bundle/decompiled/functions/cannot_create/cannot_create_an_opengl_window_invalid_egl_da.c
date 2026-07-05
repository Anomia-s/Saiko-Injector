/**
 * Function: cannot_create_an_opengl_window_invalid_egl_da
 * Address:  140655300
 * Signature: undefined cannot_create_an_opengl_window_invalid_egl_da(void)
 * Body size: 221 bytes
 */


undefined8 cannot_create_an_opengl_window_invalid_egl_da(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  plVar3 = (longlong *)FUN_140160c70(1,0x10);
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  *(longlong **)(param_2 + 0x180) = plVar3;
  if (*(int *)(param_2 + 0x18) == 0x1fff0000) {
    *(undefined4 *)(param_2 + 0x18) = 0;
    iVar2 = *(int *)(param_2 + 0x1c);
  }
  else {
    iVar2 = *(int *)(param_2 + 0x1c);
  }
  if (iVar2 == 0x1fff0000) {
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *plVar3 = param_2;
    bVar1 = *(byte *)(param_2 + 0x48);
  }
  else {
    *plVar3 = param_2;
    bVar1 = *(byte *)(param_2 + 0x48);
  }
  if ((bVar1 & 2) == 0) {
    plVar3[1] = 0;
    return 1;
  }
  if (*(longlong *)(param_1 + 0x688) == 0) {
    uVar5 = FUN_1400fbed0("Cannot create an OPENGL window invalid egl_data");
    return uVar5;
  }
  lVar4 = FUN_140458590(param_1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24));
  plVar3[1] = lVar4;
  if (lVar4 == 0) {
    uVar5 = FUN_1400fbed0("Failed to created an offscreen surface (EGL display: %p)",
                          *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x10));
    return uVar5;
  }
  return 1;
}


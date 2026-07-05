/**
 * Function: unable_to_show_color_buffer_in_an_os_native_w
 * Address:  140458280
 * Signature: undefined unable_to_show_color_buffer_in_an_os_native_w(void)
 * Body size: 200 bytes
 */


undefined8 unable_to_show_color_buffer_in_an_os_native_w(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auStack_58 [32];
  char local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x688) + 0x98))
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x10));
  uVar2 = 1;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(longlong *)(param_1 + 0x688) + 0xd0))();
    if ((0xe < iVar1 - 0x3000U) ||
       (pcVar3 = (&PTR_s_EGL_SUCCESS_140e188c8)[iVar1 - 0x3000U], *pcVar3 == '\0')) {
      pcVar3 = local_38;
      FUN_1400fd420(pcVar3,0x20,&DAT_141327795,iVar1);
    }
    uVar2 = FUN_1400fbed0("%s (call to %s failed, reporting an error of %s)",
                          "unable to show color buffer in an OS-native window","eglSwapBuffers",
                          pcVar3);
  }
  if (DAT_1414ef3c0 == (local_10 ^ (ulonglong)auStack_58)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_10 ^ (ulonglong)auStack_58);
}


/**
 * Function: couldnt_find_matching_egl_config
 * Address:  140457550
 * Signature: undefined couldnt_find_matching_egl_config(void)
 * Body size: 282 bytes
 */


ulonglong couldnt_find_matching_egl_config(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  char *pcVar5;
  undefined1 auStack_58 [32];
  char local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x688) == 0) {
    uVar4 = FUN_1400fbed0("EGL not initialized");
    if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_58)) {
      return uVar4;
    }
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    cVar1 = egl_khr_create_context(param_1,1);
    if (cVar1 == '\0') {
      cVar1 = egl_khr_create_context(param_1,0);
      if (cVar1 == '\0') {
        iVar2 = (**(code **)(*(longlong *)(param_1 + 0x688) + 0xd0))();
        if ((0xe < iVar2 - 0x3000U) ||
           (pcVar5 = (&PTR_s_EGL_SUCCESS_140e188c8)[iVar2 - 0x3000U], *pcVar5 == '\0')) {
          pcVar5 = local_38;
          FUN_1400fd420(pcVar5,0x20,&DAT_141327795,iVar2);
        }
        uVar3 = FUN_1400fbed0("%s (call to %s failed, reporting an error of %s)",
                              "Couldn\'t find matching EGL config","eglChooseConfig",pcVar5);
        uVar4 = (ulonglong)uVar3;
      }
      else {
        FUN_1400fb540("SDL_EGL_ChooseConfig: found a slow EGL config");
      }
    }
    if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_58)) {
      return uVar4 & 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_58);
}


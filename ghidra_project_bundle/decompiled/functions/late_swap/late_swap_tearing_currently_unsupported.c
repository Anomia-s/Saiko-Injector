/**
 * Function: late_swap_tearing_currently_unsupported
 * Address:  140458150
 * Signature: undefined late_swap_tearing_currently_unsupported(void)
 * Body size: 243 bytes
 */


undefined8 late_swap_tearing_currently_unsupported(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auStack_58 [32];
  char local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x688);
  if (lVar1 == 0) {
    pcVar4 = "EGL not initialized";
  }
  else {
    if (-1 < param_2) {
      iVar2 = (**(code **)(lVar1 + 0xa0))(*(undefined8 *)(lVar1 + 0x10));
      if (iVar2 == 1) {
        *(int *)(*(longlong *)(param_1 + 0x688) + 0x20) = param_2;
        uVar3 = 1;
      }
      else {
        iVar2 = (**(code **)(*(longlong *)(param_1 + 0x688) + 0xd0))();
        if ((0xe < iVar2 - 0x3000U) ||
           (pcVar4 = (&PTR_s_EGL_SUCCESS_140e188c8)[iVar2 - 0x3000U], *pcVar4 == '\0')) {
          pcVar4 = local_38;
          FUN_1400fd420(pcVar4,0x20,&DAT_141327795,iVar2);
        }
        uVar3 = FUN_1400fbed0("%s (call to %s failed, reporting an error of %s)",
                              "Unable to set the EGL swap interval","eglSwapInterval",pcVar4);
      }
      goto LAB_14045821b;
    }
    pcVar4 = "Late swap tearing currently unsupported";
  }
  uVar3 = FUN_1400fbed0(pcVar4);
LAB_14045821b:
  if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_58);
}


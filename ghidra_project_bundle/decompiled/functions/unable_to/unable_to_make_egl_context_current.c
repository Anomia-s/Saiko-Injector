/**
 * Function: unable_to_make_egl_context_current
 * Address:  140457fc0
 * Signature: undefined unable_to_make_egl_context_current(void)
 * Body size: 336 bytes
 */


undefined8 unable_to_make_egl_context_current(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auStack_68 [32];
  char local_48 [40];
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x688);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x90) != 0) {
      if (*(code **)(lVar1 + 200) != (code *)0x0) {
        (**(code **)(lVar1 + 200))(*(undefined4 *)(lVar1 + 0x38));
      }
      if ((param_3 == 0) || ((param_2 == 0 && (*(char *)(param_1 + 0x550) == '\0')))) {
        (**(code **)(*(longlong *)(param_1 + 0x688) + 0x90))
                  (*(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x10),0,0,0);
        uVar3 = 1;
      }
      else {
        iVar2 = (**(code **)(*(longlong *)(param_1 + 0x688) + 0x90))
                          (*(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x10),param_2,param_2,
                           param_3);
        uVar3 = 1;
        if (iVar2 == 0) {
          iVar2 = (**(code **)(*(longlong *)(param_1 + 0x688) + 0xd0))();
          if ((0xe < iVar2 - 0x3000U) ||
             (pcVar4 = (&PTR_s_EGL_SUCCESS_140e188c8)[iVar2 - 0x3000U], *pcVar4 == '\0')) {
            pcVar4 = local_48;
            FUN_1400fd420(pcVar4,0x20,&DAT_141327795,iVar2);
          }
          uVar3 = FUN_1400fbed0("%s (call to %s failed, reporting an error of %s)",
                                "Unable to make EGL context current","eglMakeCurrent",pcVar4);
        }
      }
      goto LAB_1404580e7;
    }
    uVar3 = 1;
    if (param_2 == 0 && param_3 == 0) goto LAB_1404580e7;
  }
  uVar3 = FUN_1400fbed0("EGL not initialized");
LAB_1404580e7:
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_68)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_68);
}


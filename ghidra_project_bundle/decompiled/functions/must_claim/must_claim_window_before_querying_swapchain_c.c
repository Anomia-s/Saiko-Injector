/**
 * Function: must_claim_window_before_querying_swapchain_c
 * Address:  1403fd450
 * Signature: undefined must_claim_window_before_querying_swapchain_c(void)
 * Body size: 260 bytes
 */


undefined8
must_claim_window_before_querying_swapchain_c(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  byte local_38 [4];
  undefined4 local_34;
  byte local_2e;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  local_34 = *(undefined4 *)(&DAT_140e14d60 + (longlong)param_3 * 4);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x68))
                    (*(longlong **)(param_1 + 0x50),3,&local_34,0xc);
  if ((-1 < iVar1) && ((local_2e & 8) != 0)) {
    uVar2 = video_subsystem_has_not_been_initialized(param_2);
    lVar3 = FUN_14014ff10(uVar2,"SDL_GPUD3D12WindowPropertyData",0);
    if (lVar3 != 0) {
      if (param_3 != 0) {
        (**(code **)(**(longlong **)(lVar3 + 8) + 0x128))
                  (*(longlong **)(lVar3 + 8),*(undefined4 *)(&DAT_140e14d70 + (longlong)param_3 * 4)
                   ,local_38);
        if ((local_38[0] & 1) == 0) goto LAB_1403fd527;
      }
      uVar4 = 1;
      goto LAB_1403fd529;
    }
    if (*(char *)(param_1 + 0x78) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,&DAT_141339891,
                    "Must claim window before querying swapchain composition support!");
    }
    FUN_1400fbed0(&DAT_141339891,"Must claim window before querying swapchain composition support!")
    ;
  }
LAB_1403fd527:
  uVar4 = 0;
LAB_1403fd529:
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_58)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_58);
}


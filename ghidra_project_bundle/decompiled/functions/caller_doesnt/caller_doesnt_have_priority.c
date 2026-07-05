/**
 * Function: caller_doesnt_have_priority
 * Address:  14044df40
 * Signature: undefined caller_doesnt_have_priority(void)
 * Body size: 934 bytes
 */


undefined8 caller_doesnt_have_priority(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined8 local_50;
  undefined4 *local_48;
  undefined4 local_40;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  local_24 = 0;
  local_28 = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 200) + 0x28) = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 8);
  iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,&local_28,&local_24);
  if (iVar2 == -0x7787ff6a) {
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + 8) + 0xa0))();
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 8);
    iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,&local_28,&local_24);
  }
  if (iVar2 < -0x7787ffce) {
    if (iVar2 < -0x7ff8ffa9) {
      if (iVar2 == -0x7fffbfff) {
        pcVar5 = "Function not supported";
      }
      else if (iVar2 == -0x7fffbffe) {
        pcVar5 = "Unsupported interface -- Is DirectX 8.0 or later installed?";
      }
      else if (iVar2 == -0x7ff8fff2) {
        pcVar5 = "Out of memory";
      }
      else {
LAB_14044e1c8:
        pcVar5 = "Unknown DirectSound error";
      }
    }
    else if (iVar2 == -0x7ff8ffa9) {
      pcVar5 = "Invalid parameter";
    }
    else if (iVar2 == -0x7787fff6) {
      pcVar5 = "Audio device in use";
    }
    else {
      if (iVar2 != -0x7787ffe2) goto LAB_14044e1c8;
      pcVar5 = "Control requested is not available";
    }
LAB_14044e1cf:
    pcVar4 = "DirectSound GetCurrentPosition";
  }
  else {
    if (iVar2 < -0x7787ff88) {
      if (iVar2 == -0x7787ffce) {
        pcVar5 = "Invalid call for the current state";
      }
      else if (iVar2 == -0x7787ffba) {
        pcVar5 = "Caller doesn\'t have priority";
      }
      else {
        if (iVar2 != -0x7787ff9c) goto LAB_14044e1c8;
        pcVar5 = "Unsupported audio format";
      }
      goto LAB_14044e1cf;
    }
    if (iVar2 == -0x7787ff88) {
      pcVar5 = "No audio device found";
      goto LAB_14044e1cf;
    }
    if (iVar2 == -0x7787ff6a) {
      pcVar5 = "Mixing buffer was lost";
      goto LAB_14044e1cf;
    }
    if (iVar2 != 0) goto LAB_14044e1c8;
    local_24 = local_24 / *(uint *)(param_1 + 0x6c);
    *(uint *)(*(longlong *)(param_1 + 200) + 0x24) = local_24;
    local_24 = ((local_24 + 1) % *(uint *)(*(longlong *)(param_1 + 200) + 0x20)) *
               *(int *)(param_1 + 0x6c);
    local_2c = 0;
    local_40 = 0;
    local_50 = 0;
    local_58 = &local_2c;
    local_48 = &local_28;
    iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + 8) + 0x58))();
    if (iVar2 == -0x7787ff6a) {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + 8) + 0xa0))();
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 8);
      local_40 = 0;
      local_50 = 0;
      local_58 = &local_2c;
      local_48 = &local_28;
      iVar2 = (**(code **)(*plVar1 + 0x58))
                        (plVar1,local_24,*(undefined4 *)(param_1 + 0x6c),
                         *(longlong *)(param_1 + 200) + 0x28);
    }
    if (iVar2 < -0x7787ffce) {
      if (iVar2 < -0x7ff8ffa9) {
        if (iVar2 == -0x7fffbfff) {
          pcVar5 = "Function not supported";
        }
        else if (iVar2 == -0x7fffbffe) {
          pcVar5 = "Unsupported interface -- Is DirectX 8.0 or later installed?";
        }
        else {
          if (iVar2 != -0x7ff8fff2) goto LAB_14044e2bf;
          pcVar5 = "Out of memory";
        }
      }
      else if (iVar2 == -0x7ff8ffa9) {
        pcVar5 = "Invalid parameter";
      }
      else if (iVar2 == -0x7787fff6) {
        pcVar5 = "Audio device in use";
      }
      else {
        if (iVar2 != -0x7787ffe2) goto LAB_14044e2bf;
        pcVar5 = "Control requested is not available";
      }
    }
    else if (iVar2 < -0x7787ff88) {
      if (iVar2 == -0x7787ffce) {
        pcVar5 = "Invalid call for the current state";
      }
      else if (iVar2 == -0x7787ffba) {
        pcVar5 = "Caller doesn\'t have priority";
      }
      else {
        if (iVar2 != -0x7787ff9c) goto LAB_14044e2bf;
        pcVar5 = "Unsupported audio format";
      }
    }
    else if (iVar2 == -0x7787ff88) {
      pcVar5 = "No audio device found";
    }
    else if (iVar2 == -0x7787ff6a) {
      pcVar5 = "Mixing buffer was lost";
    }
    else {
      if (iVar2 == 0) {
        uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 200) + 0x28);
        goto LAB_14044e1e7;
      }
LAB_14044e2bf:
      pcVar5 = "Unknown DirectSound error";
    }
    pcVar4 = "DirectSound Lock";
  }
  FUN_1400fbed0("%s: %s (0x%x)",pcVar4,pcVar5,iVar2);
  uVar3 = 0;
LAB_14044e1e7:
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_78)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_78);
}


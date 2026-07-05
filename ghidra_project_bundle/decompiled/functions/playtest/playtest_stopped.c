/**
 * Function: playtest_stopped
 * Address:  140098cb0
 * Signature: undefined playtest_stopped(void)
 * Body size: 244 bytes
 */


void playtest_stopped(byte *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  if (*param_1 != 0) {
    param_1[0x43b68] = 1;
    iVar3 = *(int *)(param_1 + 0x43b60);
    if (iVar3 != 0) {
      iVar2 = _Thrd_id();
      if (iVar3 == iVar2) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_Cpp_error(5);
      }
      local_28 = *(char **)(param_1 + 0x43b58);
      uStack_20 = *(undefined4 *)(param_1 + 0x43b60);
      uStack_1c = *(undefined4 *)(param_1 + 0x43b64);
      iVar3 = _Thrd_join(&local_28,0);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_Cpp_error(2);
      }
      param_1[0x43b58] = 0;
      param_1[0x43b59] = 0;
      param_1[0x43b5a] = 0;
      param_1[0x43b5b] = 0;
      param_1[0x43b5c] = 0;
      param_1[0x43b5d] = 0;
      param_1[0x43b5e] = 0;
      param_1[0x43b5f] = 0;
      param_1[0x43b60] = 0;
      param_1[0x43b61] = 0;
      param_1[0x43b62] = 0;
      param_1[0x43b63] = 0;
    }
    if ((*param_1 & 0xfe) == 2) {
      FUN_140066b60(param_1 + 8);
    }
    FUN_140066930(param_1 + 8);
    *param_1 = 0;
    plVar1 = *(longlong **)(param_1 + 0x43b10);
    if (plVar1 != (longlong *)0x0) {
      local_28 = "Playtest stopped.";
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_28);
    }
  }
  if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_48);
}


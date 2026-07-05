/**
 * Function: playtest_paused
 * Address:  1400992a0
 * Signature: undefined playtest_paused(void)
 * Body size: 119 bytes
 */


void playtest_paused(char *param_1)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  char *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStack_38;
  if (*param_1 == '\x02') {
    FUN_140067550(param_1 + 8);
    *param_1 = '\x03';
    plVar1 = *(longlong **)(param_1 + 0x43b10);
    if (plVar1 != (longlong *)0x0) {
      local_18 = "Playtest paused.";
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_18);
    }
  }
  if (DAT_1414ef3c0 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_10 ^ (ulonglong)auStack_38);
}


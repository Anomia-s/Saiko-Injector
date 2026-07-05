/**
 * Function: playtest_resumed
 * Address:  140099320
 * Signature: undefined playtest_resumed(void)
 * Body size: 119 bytes
 */


void playtest_resumed(char *param_1)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  char *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStack_38;
  if (*param_1 == '\x03') {
    FUN_140067560(param_1 + 8);
    *param_1 = '\x02';
    plVar1 = *(longlong **)(param_1 + 0x43b10);
    if (plVar1 != (longlong *)0x0) {
      local_18 = "Playtest resumed.";
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_18);
    }
  }
  if (DAT_1414ef3c0 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_10 ^ (ulonglong)auStack_38);
}


/**
 * Function: gamepad_d
 * Address:  14064ce30
 * Signature: undefined gamepad_d(void)
 * Body size: 201 bytes
 */


undefined8 gamepad_d(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStack_38;
  plVar3 = (longlong *)FUN_140160c70(1,0x58);
  if (plVar3 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    *plVar3 = param_1;
    *(longlong **)(param_1 + 0x70) = plVar3;
    *(undefined4 *)(param_1 + 0x5c) = 2;
    cVar1 = FUN_14012d680(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22),
                          *(undefined2 *)(param_1 + 0x24));
    if ((cVar1 != '\0') && (*(char **)(param_1 + 0x10) != (char *)0x0)) {
      iVar2 = strncmp(*(char **)(param_1 + 0x10),"GamePad-",8);
      if (iVar2 == 0) {
        local_14 = 0;
        FUN_1400fd340(*(undefined8 *)(param_1 + 0x10),"GamePad-%d",&local_14);
        *(int *)(param_1 + 0x60) = local_14 + -1;
      }
    }
    uVar4 = FUN_140440300(param_1,0);
  }
  if (DAT_1414ef3c0 == (local_10 ^ (ulonglong)auStack_38)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_10 ^ (ulonglong)auStack_38);
}


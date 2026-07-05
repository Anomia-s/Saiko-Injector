/**
 * Function: that_operation_is_not_supported
 * Address:  1406521f0
 * Signature: undefined that_operation_is_not_supported(void)
 * Body size: 130 bytes
 */


undefined8 that_operation_is_not_supported(longlong param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auStack_38 [44];
  undefined2 local_c;
  undefined2 local_a;
  ulonglong local_8;
  
  local_8 = DAT_1414ef3c0 ^ (ulonglong)auStack_38;
  if (DAT_1416fdea8 == (code *)0x0) {
    pcVar3 = "That operation is not supported";
  }
  else {
    local_c = param_2;
    local_a = param_3;
    iVar1 = (*DAT_1416fdea8)(*(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0xc6a),&local_c);
    if (iVar1 == 0) {
      uVar2 = 1;
      goto LAB_14065224c;
    }
    pcVar3 = "XInputSetState() failed";
  }
  uVar2 = FUN_1400fbed0(pcVar3);
LAB_14065224c:
  if (DAT_1414ef3c0 == (local_8 ^ (ulonglong)auStack_38)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_8 ^ (ulonglong)auStack_38);
}


/**
 * Function: couldnt_send_led_packet
 * Address:  14064eb90
 * Signature: undefined couldnt_send_led_packet(void)
 * Body size: 147 bytes
 */


undefined8
couldnt_send_led_packet
          (longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
          undefined1 param_5)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  undefined2 local_10;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_1414ef3c0 ^ (ulonglong)auStack_38;
  if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x29) == '\x01') {
    local_14 = 0x500000e;
    local_10 = 0;
    local_c = param_5;
    local_e = param_3;
    local_d = param_4;
    iVar1 = tried_to_send_rumble_with_invalid_size(param_1,&local_14,9);
    uVar2 = 1;
    if (iVar1 == 9) goto LAB_14064ebfd;
    pcVar3 = "Couldn\'t send LED packet";
  }
  else {
    pcVar3 = "That operation is not supported";
  }
  uVar2 = FUN_1400fbed0(pcVar3);
LAB_14064ebfd:
  if (DAT_1414ef3c0 == (local_8 ^ (ulonglong)auStack_38)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_8 ^ (ulonglong)auStack_38);
}


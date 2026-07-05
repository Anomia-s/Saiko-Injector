/**
 * Function: couldnt_send_command_packet
 * Address:  140639240
 * Signature: undefined couldnt_send_command_packet(void)
 * Body size: 356 bytes
 */


undefined8
couldnt_send_command_packet(longlong param_1,undefined8 param_2,undefined1 *param_3,int param_4)

{
  undefined1 uVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong _Size;
  undefined1 auStack_78 [39];
  undefined1 local_51;
  undefined1 local_50;
  char local_4f;
  undefined6 local_4e;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined6 uStack_3e;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  if (param_4 < 2) {
    if (param_4 != 1) {
      uVar5 = FUN_1400fbed0("Effect data must at least contain a command byte");
      if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStack_78)) {
        return uVar5;
      }
      goto LAB_140639397;
    }
    uVar1 = *param_3;
    pcVar2 = *(char **)(param_1 + 0x70);
    cVar3 = hidapi_rumble();
    if (cVar3 == '\0') goto LAB_140639376;
    local_51 = 4;
    local_4f = *pcVar2;
    *pcVar2 = local_4f + '\x01';
    _local_4e = 0;
    uStack_46 = 0;
    uStack_40 = 0;
    uStack_3e = 0;
    uStack_38 = 0;
    local_50 = uVar1;
LAB_140639332:
    iVar4 = FUN_14064f890(param_1,&local_51,0x21);
    uVar5 = 1;
    if (iVar4 != 0x21) {
      uVar5 = FUN_1400fbed0("Couldn\'t send command packet");
    }
  }
  else {
    _Size = (ulonglong)(param_4 - 1U);
    if (param_4 - 1U < 0x1f) {
      uVar1 = *param_3;
      pcVar2 = *(char **)(param_1 + 0x70);
      cVar3 = hidapi_rumble();
      if (cVar3 != '\0') {
        local_51 = 4;
        local_4f = *pcVar2;
        *pcVar2 = local_4f + '\x01';
        local_50 = uVar1;
        memcpy(&local_4e,param_3 + 1,_Size);
        if (_Size != 0x1e) {
          memset((void *)((longlong)&local_4e + _Size),0,0x1e - _Size);
        }
        goto LAB_140639332;
      }
LAB_140639376:
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_1400fbed0("Command data exceeds HID report size");
    }
  }
  if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStack_78)) {
    return uVar5;
  }
LAB_140639397:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_30 ^ (ulonglong)auStack_78);
}


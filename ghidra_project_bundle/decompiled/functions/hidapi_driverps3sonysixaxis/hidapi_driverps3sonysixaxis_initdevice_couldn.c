/**
 * Function: hidapi_driverps3sonysixaxis_initdevice_couldn
 * Address:  14063ae90
 * Signature: undefined hidapi_driverps3sonysixaxis_initdevice_couldn(void)
 * Body size: 285 bytes
 */


undefined8 hidapi_driverps3sonysixaxis_initdevice_couldn(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)FUN_140160c70(1,0x60);
  if (plVar2 == (longlong *)0x0) {
LAB_14063af7c:
    uVar3 = 0;
  }
  else {
    *plVar2 = param_1;
    *(undefined1 *)((longlong)plVar2 + 0x11) = 1;
    *(longlong **)(param_1 + 0x70) = plVar2;
    uStack_60 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0xf2;
    iVar1 = FUN_14017a7a0(*(undefined8 *)(param_1 + 0x80),&local_68,0x40);
    if (iVar1 < 0) {
      FUN_1400fb830(7,
                    "HIDAPI_DriverPS3SonySixaxis_InitDevice(): Couldn\'t read feature report 0xf2. Trying again with 0x0."
                   );
      local_38 = 0;
      uStack_30 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      iVar1 = FUN_14017a7a0(*(undefined8 *)(param_1 + 0x80),&local_68,0x40);
      if (iVar1 < 0) {
        FUN_1400fb830(7,
                      "HIDAPI_DriverPS3SonySixaxis_InitDevice(): Couldn\'t read feature report 0x00."
                     );
        goto LAB_14063af7c;
      }
    }
    *(undefined4 *)(param_1 + 0x5c) = 4;
    FUN_14043fe30(param_1,"PS3 Controller");
    uVar3 = FUN_140440300(param_1,0);
  }
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_88)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_88);
}


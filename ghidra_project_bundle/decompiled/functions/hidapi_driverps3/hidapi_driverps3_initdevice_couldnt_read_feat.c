/**
 * Function: hidapi_driverps3_initdevice_couldnt_read_feat
 * Address:  140639440
 * Signature: undefined hidapi_driverps3_initdevice_couldnt_read_feat(void)
 * Body size: 401 bytes
 */


undefined8 hidapi_driverps3_initdevice_couldnt_read_feat(undefined8 *param_1)

{
  short sVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  sVar1 = *(short *)(param_1 + 4);
  if (sVar1 == 0x54c) {
    iVar3 = FUN_1400fcff0(*param_1,"ShanWan",7);
    bVar7 = iVar3 == 0;
    sVar1 = *(short *)(param_1 + 4);
    if (sVar1 == 0x2563) goto LAB_1406394a1;
LAB_14063949a:
    if (sVar1 == 0x20bc) goto LAB_1406394a1;
  }
  else {
    bVar7 = false;
    if (sVar1 != 0x2563) goto LAB_14063949a;
LAB_1406394a1:
    bVar7 = true;
  }
  puVar4 = (undefined8 *)FUN_140160c70(1,0x60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = param_1;
    *(bool *)(puVar4 + 2) = bVar7;
    *(undefined1 *)((longlong)puVar4 + 0x11) = 1;
    param_1[0xe] = puVar4;
    if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
      uVar2 = (ulonglong)local_68 >> 0x20;
      local_68 = CONCAT44((uint)uVar2 & 0xffffff00,0x342f4);
      FUN_14017a740(param_1[0x10],&local_68,5);
      if (*(char *)((longlong)param_1 + 0x54) == '\0') goto LAB_1406394fc;
LAB_14063956a:
      *(undefined4 *)((longlong)param_1 + 0x5c) = 4;
      FUN_14043fe30(param_1,"PS3 Controller");
      uVar5 = FUN_140440300(param_1,0);
      goto LAB_1406395a8;
    }
LAB_1406394fc:
    uStack_60 = 0;
    local_58 = 0;
    local_68 = 0xf2;
    iVar3 = FUN_14017a7a0(param_1[0x10],&local_68,0x11);
    if (iVar3 < 0) {
      pcVar6 = "HIDAPI_DriverPS3_InitDevice(): Couldn\'t read feature report 0xf2";
    }
    else {
      local_68 = 0xf5;
      iVar3 = FUN_14017a7a0(param_1[0x10],&local_68,8);
      if (-1 < iVar3) {
        if (*(char *)(puVar4 + 2) == '\0') {
          FUN_14017a5d0(param_1[0x10],&local_68,1);
        }
        goto LAB_14063956a;
      }
      pcVar6 = "HIDAPI_DriverPS3_InitDevice(): Couldn\'t read feature report 0xf5";
    }
    FUN_1400fb830(7,pcVar6);
  }
  uVar5 = 0;
LAB_1406395a8:
  if (DAT_1414ef3c0 != (local_20 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_20 ^ (ulonglong)auStack_88);
  }
  return uVar5;
}


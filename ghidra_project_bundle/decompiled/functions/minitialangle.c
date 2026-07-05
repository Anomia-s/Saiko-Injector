/**
 * Function: minitialangle
 * Address:  1405cc830
 * Signature: undefined minitialangle(void)
 * Body size: 319 bytes
 */


void minitialangle(undefined8 param_1)

{
  undefined1 auStack_98 [40];
  char *local_70;
  undefined4 local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  local_70 = "mVertex";
  local_68 = 0;
  local_60 = &LAB_1400f7e50;
  local_58 = &LAB_1403d6190;
  local_50 = FUN_1405cdb40;
  local_48 = FUN_1405cdac0;
  local_40 = FUN_1403d6060;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mCompliance";
  local_68 = 0x10;
  local_60 = &LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mInitialAngle";
  local_68 = 0x14;
  local_60 = &LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_98);
}


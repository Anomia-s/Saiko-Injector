/**
 * Function: mbackstopradius
 * Address:  1405cccb0
 * Signature: undefined mbackstopradius(void)
 * Body size: 470 bytes
 */


void mbackstopradius(undefined8 param_1)

{
  undefined1 auStack_98 [40];
  char *local_70;
  undefined4 local_68;
  code *local_60;
  code *local_58;
  code *local_50;
  undefined1 *local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  local_70 = "mVertex";
  local_68 = 0;
  local_60 = (code *)&LAB_1400f7e50;
  local_58 = (code *)&LAB_1400f7e40;
  local_50 = (code *)&LAB_1400f7e30;
  local_48 = &LAB_1400f7e20;
  local_40 = (code *)&LAB_1400f7e10;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mWeights";
  local_68 = 4;
  local_60 = softbodysharedsettings_skinweight;
  local_58 = softbodysharedsettings_skinweight;
  local_50 = softbodysharedsettings_skinweight;
  local_48 = &LAB_1405cdc10;
  local_40 = softbodysharedsettings_skinweight;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mMaxDistance";
  local_68 = 0x24;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = (code *)&LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = &LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mBackStopDistance";
  local_68 = 0x28;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = (code *)&LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = &LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mBackStopRadius";
  local_68 = 0x2c;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = (code *)&LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = &LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_98);
}


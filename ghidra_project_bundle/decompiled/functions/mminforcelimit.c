/**
 * Function: mminforcelimit
 * Address:  14036e240
 * Signature: undefined mminforcelimit(void)
 * Body size: 551 bytes
 */


void mminforcelimit(undefined8 param_1)

{
  undefined1 auStack_98 [40];
  char *local_70;
  undefined4 local_68;
  code *local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  local_70 = "mSpringMode";
  local_68 = 0;
  local_60 = httplib::ClientImpl::vfunction6;
  local_58 = &LAB_140309d60;
  local_50 = FUN_140342a20;
  local_48 = FUN_1403429d0;
  local_40 = FUN_140309ca0;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mFrequency";
  local_68 = 4;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mDamping";
  local_68 = 8;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mMinForceLimit";
  local_68 = 0xc;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mMaxForceLimit";
  local_68 = 0x10;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mMinTorqueLimit";
  local_68 = 0x14;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mMaxTorqueLimit";
  local_68 = 0x18;
  local_60 = (code *)&LAB_1400e93b0;
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


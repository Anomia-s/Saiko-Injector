/**
 * Function: msuspensionpreloadlength
 * Address:  1405c8630
 * Signature: undefined msuspensionpreloadlength(void)
 * Body size: 1085 bytes
 */


void msuspensionpreloadlength(undefined8 param_1)

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
  local_70 = "mSuspensionForcePoint";
  local_68 = 0x20;
  local_60 = (code *)&LAB_1402df680;
  local_58 = &LAB_1402df670;
  local_50 = (code *)&LAB_1402df660;
  local_48 = (code *)&LAB_1402df650;
  local_40 = (code *)&LAB_1402df640;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mPosition";
  local_68 = 0x10;
  local_60 = (code *)&LAB_1402df680;
  local_58 = &LAB_1402df670;
  local_50 = (code *)&LAB_1402df660;
  local_48 = (code *)&LAB_1402df650;
  local_40 = (code *)&LAB_1402df640;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mSuspensionDirection";
  local_68 = 0x30;
  local_60 = (code *)&LAB_1402df680;
  local_58 = &LAB_1402df670;
  local_50 = (code *)&LAB_1402df660;
  local_48 = (code *)&LAB_1402df650;
  local_40 = (code *)&LAB_1402df640;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mSteeringAxis";
  local_68 = 0x40;
  local_60 = (code *)&LAB_1402df680;
  local_58 = &LAB_1402df670;
  local_50 = (code *)&LAB_1402df660;
  local_48 = (code *)&LAB_1402df650;
  local_40 = (code *)&LAB_1402df640;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mWheelForward";
  local_68 = 0x60;
  local_60 = (code *)&LAB_1402df680;
  local_58 = &LAB_1402df670;
  local_50 = (code *)&LAB_1402df660;
  local_48 = (code *)&LAB_1402df650;
  local_40 = (code *)&LAB_1402df640;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mWheelUp";
  local_68 = 0x50;
  local_60 = (code *)&LAB_1402df680;
  local_58 = &LAB_1402df670;
  local_50 = (code *)&LAB_1402df660;
  local_48 = (code *)&LAB_1402df650;
  local_40 = (code *)&LAB_1402df640;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mSuspensionMinLength";
  local_68 = 0x70;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mSuspensionMaxLength";
  local_68 = 0x74;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mSuspensionPreloadLength";
  local_68 = 0x78;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mSuspensionSpringMode";
  local_68 = 0x7c;
  local_60 = httplib::ClientImpl::vfunction6;
  local_58 = &LAB_140309d60;
  local_50 = FUN_140342a20;
  local_48 = FUN_1403429d0;
  local_40 = FUN_140309ca0;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mSuspensionFrequency";
  local_68 = 0x80;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mSuspensionDamping";
  local_68 = 0x84;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mRadius";
  local_68 = 0x88;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mWidth";
  local_68 = 0x8c;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mEnableSuspensionForcePoint";
  local_68 = 0x90;
  local_60 = (code *)&LAB_140309c90;
  local_58 = &LAB_140309c80;
  local_50 = (code *)&LAB_140309c70;
  local_48 = (code *)&LAB_140309c60;
  local_40 = (code *)&LAB_140309c50;
  FUN_1402d9850(param_1,&local_70);
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_98);
}


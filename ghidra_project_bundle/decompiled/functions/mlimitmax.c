/**
 * Function: mlimitmax
 * Address:  140336660
 * Signature: undefined mlimitmax(void)
 * Body size: 1063 bytes
 */


void mlimitmax(undefined8 param_1)

{
  undefined8 uVar1;
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
  uVar1 = FUN_1405c76d0(0);
  FUN_1402d96b0(param_1,uVar1,0);
  local_70 = "mSpace";
  local_68 = 0x28;
  local_60 = httplib::ClientImpl::vfunction6;
  local_58 = &LAB_140309d60;
  local_50 = FUN_140309d00;
  local_48 = FUN_140309cb0;
  local_40 = FUN_140309ca0;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mPosition1";
  local_68 = 0x30;
  local_60 = (code *)&LAB_1402df680;
  local_58 = &LAB_1402df670;
  local_50 = (code *)&LAB_1402df660;
  local_48 = (code *)&LAB_1402df650;
  local_40 = (code *)&LAB_1402df640;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mAxisX1";
  local_68 = 0x40;
  local_60 = (code *)&LAB_1402df680;
  local_58 = &LAB_1402df670;
  local_50 = (code *)&LAB_1402df660;
  local_48 = (code *)&LAB_1402df650;
  local_40 = (code *)&LAB_1402df640;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mAxisY1";
  local_68 = 0x50;
  local_60 = (code *)&LAB_1402df680;
  local_58 = &LAB_1402df670;
  local_50 = (code *)&LAB_1402df660;
  local_48 = (code *)&LAB_1402df650;
  local_40 = (code *)&LAB_1402df640;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mPosition2";
  local_68 = 0x60;
  local_60 = (code *)&LAB_1402df680;
  local_58 = &LAB_1402df670;
  local_50 = (code *)&LAB_1402df660;
  local_48 = (code *)&LAB_1402df650;
  local_40 = (code *)&LAB_1402df640;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mAxisX2";
  local_68 = 0x70;
  local_60 = (code *)&LAB_1402df680;
  local_58 = &LAB_1402df670;
  local_50 = (code *)&LAB_1402df660;
  local_48 = (code *)&LAB_1402df650;
  local_40 = (code *)&LAB_1402df640;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mAxisY2";
  local_68 = 0x80;
  local_60 = (code *)&LAB_1402df680;
  local_58 = &LAB_1402df670;
  local_50 = (code *)&LAB_1402df660;
  local_48 = (code *)&LAB_1402df650;
  local_40 = (code *)&LAB_1402df640;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mMaxFriction";
  local_68 = 0x90;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_140326730;
  local_50 = FUN_140342940;
  local_48 = FUN_1403428b0;
  local_40 = FUN_1403265b0;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mSwingType";
  local_68 = 0xa8;
  local_60 = httplib::ClientImpl::vfunction6;
  local_58 = &LAB_140309d60;
  local_50 = FUN_140342a20;
  local_48 = FUN_1403429d0;
  local_40 = FUN_140309ca0;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mLimitMin";
  local_68 = 0xac;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_140326730;
  local_50 = FUN_140342940;
  local_48 = FUN_1403428b0;
  local_40 = FUN_1403265b0;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mLimitMax";
  local_68 = 0xc4;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_140326730;
  local_50 = FUN_140342940;
  local_48 = FUN_1403428b0;
  local_40 = FUN_1403265b0;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mLimitsSpringSettings";
  local_68 = 0xdc;
  local_60 = (code *)&LAB_140342bd0;
  local_58 = &LAB_140342bb0;
  local_50 = FUN_140342b20;
  local_48 = FUN_140342ab0;
  local_40 = FUN_140342a80;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mMotorSettings";
  local_68 = 0x100;
  local_60 = (code *)&LAB_140342d50;
  local_58 = &LAB_140342d30;
  local_50 = FUN_140342ca0;
  local_48 = FUN_140342c10;
  local_40 = FUN_140342be0;
  FUN_1402d9850(param_1,&local_70);
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_98);
}


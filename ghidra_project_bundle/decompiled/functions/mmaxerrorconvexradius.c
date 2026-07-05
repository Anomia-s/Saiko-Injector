/**
 * Function: mmaxerrorconvexradius
 * Address:  14030b590
 * Signature: undefined mmaxerrorconvexradius(void)
 * Body size: 401 bytes
 */


void mmaxerrorconvexradius(undefined8 param_1)

{
  undefined8 uVar1;
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
  uVar1 = FUN_1400eb240(0);
  FUN_1402d96b0(param_1,uVar1,0);
  local_70 = "mPoints";
  local_68 = 0x50;
  local_60 = &LAB_1402df680;
  local_58 = &LAB_1403109b0;
  local_50 = FUN_1403108d0;
  local_48 = FUN_140310860;
  local_40 = FUN_140310830;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mMaxConvexRadius";
  local_68 = 0x68;
  local_60 = &LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mMaxErrorConvexRadius";
  local_68 = 0x6c;
  local_60 = &LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mHullTolerance";
  local_68 = 0x70;
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


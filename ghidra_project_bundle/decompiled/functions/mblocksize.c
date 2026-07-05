/**
 * Function: mblocksize
 * Address:  140311400
 * Signature: undefined mblocksize(void)
 * Body size: 1032 bytes
 */


void mblocksize(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [40];
  char *local_80;
  undefined4 local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_1400e93c0(0);
  FUN_1402d96b0(param_1,uVar1,0);
  local_80 = "mHeightSamples";
  local_78 = 0x78;
  local_70 = &LAB_1400e93b0;
  local_68 = &LAB_140326730;
  local_60 = FUN_140326650;
  local_58 = FUN_1403265e0;
  local_50 = FUN_1403265b0;
  FUN_1402d9850(param_1,&local_80);
  local_80 = "mOffset";
  local_78 = 0x40;
  local_70 = &LAB_1402df680;
  local_68 = &LAB_1402df670;
  local_60 = (code *)&LAB_1402df660;
  local_58 = (code *)&LAB_1402df650;
  local_50 = (code *)&LAB_1402df640;
  FUN_1402d9850(param_1,&local_80);
  local_80 = "mScale";
  local_78 = 0x50;
  local_70 = &LAB_1402df680;
  local_68 = &LAB_1402df670;
  local_60 = (code *)&LAB_1402df660;
  local_58 = (code *)&LAB_1402df650;
  local_50 = (code *)&LAB_1402df640;
  FUN_1402d9850(param_1,&local_80);
  local_80 = "mMinHeightValue";
  local_78 = 100;
  local_70 = &LAB_1400e93b0;
  local_68 = &LAB_1400e93a0;
  local_60 = (code *)&LAB_1400e9390;
  local_58 = (code *)&LAB_1400e9380;
  local_50 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_80);
  local_80 = "mMaxHeightValue";
  local_78 = 0x68;
  local_70 = &LAB_1400e93b0;
  local_68 = &LAB_1400e93a0;
  local_60 = (code *)&LAB_1400e9390;
  local_58 = (code *)&LAB_1400e9380;
  local_50 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_80);
  local_80 = "mMaterialsCapacity";
  local_78 = 0x6c;
  local_70 = &LAB_1400f7e50;
  local_68 = &LAB_1400f7e40;
  local_60 = (code *)&LAB_1400f7e30;
  local_58 = (code *)&LAB_1400f7e20;
  local_50 = (code *)&LAB_1400f7e10;
  FUN_1402d9850(param_1,&local_80);
  local_80 = "mSampleCount";
  local_78 = 0x60;
  local_70 = &LAB_1400f7e50;
  local_68 = &LAB_1400f7e40;
  local_60 = (code *)&LAB_1400f7e30;
  local_58 = (code *)&LAB_1400f7e20;
  local_50 = (code *)&LAB_1400f7e10;
  FUN_1402d9850(param_1,&local_80);
  local_80 = "mBlockSize";
  local_78 = 0x70;
  local_70 = &LAB_1400f7e50;
  local_68 = &LAB_1400f7e40;
  local_60 = (code *)&LAB_1400f7e30;
  local_58 = (code *)&LAB_1400f7e20;
  local_50 = (code *)&LAB_1400f7e10;
  FUN_1402d9850(param_1,&local_80);
  local_80 = "mBitsPerSample";
  local_78 = 0x74;
  local_70 = &LAB_1400f7e50;
  local_68 = &LAB_1400f7e40;
  local_60 = (code *)&LAB_1400f7e30;
  local_58 = (code *)&LAB_1400f7e20;
  local_50 = (code *)&LAB_1400f7e10;
  FUN_1402d9850(param_1,&local_80);
  local_80 = "mMaterialIndices";
  local_78 = 0x90;
  local_70 = &LAB_1400f7ff0;
  local_68 = &LAB_1400f7fd0;
  local_60 = FUN_1400f7f00;
  local_58 = FUN_1400f7e90;
  local_50 = FUN_1400f7e60;
  FUN_1402d9850(param_1,&local_80);
  local_80 = "mMaterials";
  local_78 = 0xa8;
  local_70 = &LAB_1400f1c90;
  local_68 = &LAB_140309c30;
  local_60 = (code *)&LAB_1403098b0;
  local_58 = FUN_140309800;
  local_50 = FUN_1403097d0;
  FUN_1402d9850(param_1,&local_80);
  local_80 = "mActiveEdgeCosThresholdAngle";
  local_78 = 0xc0;
  local_70 = &LAB_1400e93b0;
  local_68 = &LAB_1400e93a0;
  local_60 = (code *)&LAB_1400e9390;
  local_58 = (code *)&LAB_1400e9380;
  local_50 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_80);
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_a8);
}


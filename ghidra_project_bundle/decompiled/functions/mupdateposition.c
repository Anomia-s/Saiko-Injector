/**
 * Function: mupdateposition
 * Address:  140371780
 * Signature: undefined mupdateposition(void)
 * Body size: 1434 bytes
 */


void mupdateposition(undefined8 param_1)

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
  local_70 = "mSettings";
  local_68 = 0;
  local_60 = (code *)&LAB_140371ec0;
  local_58 = &LAB_140371eb0;
  local_50 = FUN_140371e70;
  local_48 = FUN_140371e20;
  local_40 = (code *)&LAB_140371e10;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mPosition";
  local_68 = 0x10;
  local_60 = (code *)&LAB_1402df680;
  local_58 = &LAB_1402df670;
  local_50 = (code *)&LAB_1402df660;
  local_48 = (code *)&LAB_1402df650;
  local_40 = (code *)&LAB_1402df640;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mRotation";
  local_68 = 0x20;
  local_60 = (code *)&LAB_1402df6d0;
  local_58 = &LAB_1402df6c0;
  local_50 = (code *)&DAT_1402df6b0;
  local_48 = (code *)&LAB_1402df6a0;
  local_40 = (code *)&LAB_1402df690;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mUserData";
  local_68 = 0x30;
  local_60 = (code *)&LAB_1400ea5b0;
  local_58 = &LAB_1400ea5a0;
  local_50 = (code *)&LAB_1400ea590;
  local_48 = (code *)&LAB_1400ea580;
  local_40 = (code *)&LAB_1400ea570;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mObjectLayer";
  local_68 = 0x38;
  local_60 = httplib::ClientImpl::vfunction6;
  local_58 = &LAB_140309d60;
  local_50 = FUN_1403714f0;
  local_48 = FUN_1403714a0;
  local_40 = FUN_140309ca0;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mCollisionGroup";
  local_68 = 0x40;
  local_60 = (code *)&LAB_140371490;
  local_58 = &LAB_140371480;
  local_50 = (code *)&LAB_140371470;
  local_48 = (code *)&LAB_140371460;
  local_40 = (code *)&LAB_140371450;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mNumIterations";
  local_68 = 0x50;
  local_60 = (code *)&LAB_1400f7e50;
  local_58 = &LAB_1400f7e40;
  local_50 = (code *)&LAB_1400f7e30;
  local_48 = (code *)&LAB_1400f7e20;
  local_40 = (code *)&LAB_1400f7e10;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mLinearDamping";
  local_68 = 0x54;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mMaxLinearVelocity";
  local_68 = 0x58;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mRestitution";
  local_68 = 0x5c;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mFriction";
  local_68 = 0x60;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mPressure";
  local_68 = 100;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mGravityFactor";
  local_68 = 0x68;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mVertexRadius";
  local_68 = 0x6c;
  local_60 = (code *)&LAB_1400e93b0;
  local_58 = &LAB_1400e93a0;
  local_50 = (code *)&LAB_1400e9390;
  local_48 = (code *)&LAB_1400e9380;
  local_40 = (code *)&LAB_1400e9370;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mUpdatePosition";
  local_68 = 0x70;
  local_60 = (code *)&LAB_140309c90;
  local_58 = &LAB_140309c80;
  local_50 = (code *)&LAB_140309c70;
  local_48 = (code *)&LAB_140309c60;
  local_40 = (code *)&LAB_140309c50;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mMakeRotationIdentity";
  local_68 = 0x71;
  local_60 = (code *)&LAB_140309c90;
  local_58 = &LAB_140309c80;
  local_50 = (code *)&LAB_140309c70;
  local_48 = (code *)&LAB_140309c60;
  local_40 = (code *)&LAB_140309c50;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mAllowSleeping";
  local_68 = 0x72;
  local_60 = (code *)&LAB_140309c90;
  local_58 = &LAB_140309c80;
  local_50 = (code *)&LAB_140309c70;
  local_48 = (code *)&LAB_140309c60;
  local_40 = (code *)&LAB_140309c50;
  FUN_1402d9850(param_1,&local_70);
  local_70 = "mFacesDoubleSided";
  local_68 = 0x73;
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


/**
 * Function: skeletalanimation_jointstate
 * Address:  140330ab0
 * Signature: undefined skeletalanimation_jointstate(void)
 * Body size: 317 bytes
 */


void skeletalanimation_jointstate(undefined8 param_1)

{
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  code *local_50;
  char *local_48;
  undefined4 local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_1416ca8c0) {
    FUN_140b6864c(&DAT_1416ca8c0);
    if (DAT_1416ca8c0 == -1) {
      local_50 = FUN_1403309b0;
      local_58 = &LAB_140331080;
      FUN_1402d95d0(&DAT_1416ca150,"SkeletalAnimation::JointState",0x20,FUN_140331090);
      _Init_thread_footer(&DAT_1416ca8c0);
    }
  }
  FUN_1402d96b0(param_1,&DAT_1416ca150,0);
  local_48 = "mTime";
  local_40 = 0x20;
  local_38 = &LAB_1400e93b0;
  local_30 = &LAB_1400e93a0;
  local_28 = &LAB_1400e9390;
  local_20 = &LAB_1400e9380;
  local_18 = &LAB_1400e9370;
  FUN_1402d9850(param_1,&local_48);
  if (DAT_1414ef3c0 == (local_10 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_10 ^ (ulonglong)auStack_78);
}


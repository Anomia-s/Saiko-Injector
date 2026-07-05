/**
 * Function: skeletalanimation_keyframe
 * Address:  1403315f0
 * Signature: undefined skeletalanimation_keyframe(void)
 * Body size: 150 bytes
 */


undefined * skeletalanimation_keyframe(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_1416cb038) {
    FUN_140b6864c(&DAT_1416cb038);
    if (DAT_1416cb038 == -1) {
      FUN_1402d95d0(&DAT_1416ca8c8,"SkeletalAnimation::Keyframe",0x30,FUN_1403310c0,&LAB_140331080,
                    skeletalanimation_jointstate);
      _Init_thread_footer(&DAT_1416cb038);
      return &DAT_1416ca8c8;
    }
  }
  return &DAT_1416ca8c8;
}


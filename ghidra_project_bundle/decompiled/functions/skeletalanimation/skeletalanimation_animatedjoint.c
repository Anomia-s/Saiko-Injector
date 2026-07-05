/**
 * Function: skeletalanimation_animatedjoint
 * Address:  1403319f0
 * Signature: undefined skeletalanimation_animatedjoint(void)
 * Body size: 150 bytes
 */


undefined * skeletalanimation_animatedjoint(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_1416cb7b0) {
    FUN_140b6864c(&DAT_1416cb7b0);
    if (DAT_1416cb7b0 == -1) {
      FUN_1402d95d0(&DAT_1416cb040,"SkeletalAnimation::AnimatedJoint",0x38,FUN_140331160,
                    FUN_1403310f0,FUN_140330bf0);
      _Init_thread_footer(&DAT_1416cb7b0);
      return &DAT_1416cb040;
    }
  }
  return &DAT_1416cb040;
}


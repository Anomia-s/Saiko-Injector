/**
 * Function: softbodysharedsettings_rodbendtwist
 * Address:  1405d1690
 * Signature: undefined softbodysharedsettings_rodbendtwist(void)
 * Body size: 150 bytes
 */


undefined * softbodysharedsettings_rodbendtwist(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_1416fa920) {
    FUN_140b6864c(&DAT_1416fa920);
    if (DAT_1416fa920 == -1) {
      FUN_1402d95d0(&DAT_1416fa1b0,"SoftBodySharedSettings::RodBendTwist",0x20,FUN_1405cd590,
                    &LAB_140331080,FUN_1405cc6d0);
      _Init_thread_footer(&DAT_1416fa920);
      return &DAT_1416fa1b0;
    }
  }
  return &DAT_1416fa1b0;
}


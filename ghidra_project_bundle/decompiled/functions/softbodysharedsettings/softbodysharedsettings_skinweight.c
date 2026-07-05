/**
 * Function: softbodysharedsettings_skinweight
 * Address:  1405cdfd0
 * Signature: undefined softbodysharedsettings_skinweight(void)
 * Body size: 150 bytes
 */


undefined * softbodysharedsettings_skinweight(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_1416fc700) {
    FUN_140b6864c(&DAT_1416fc700);
    if (DAT_1416fc700 == -1) {
      FUN_1402d95d0(&DAT_1416fbf90,"SoftBodySharedSettings::SkinWeight",8,FUN_1405c97b0,
                    &LAB_140331080,FUN_1405ccbb0);
      _Init_thread_footer(&DAT_1416fc700);
      return &DAT_1416fbf90;
    }
  }
  return &DAT_1416fbf90;
}


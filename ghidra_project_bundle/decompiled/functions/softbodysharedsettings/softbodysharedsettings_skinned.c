/**
 * Function: softbodysharedsettings_skinned
 * Address:  1405cfe80
 * Signature: undefined softbodysharedsettings_skinned(void)
 * Body size: 150 bytes
 */


undefined * softbodysharedsettings_skinned(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_1416fce78) {
    FUN_140b6864c(&DAT_1416fce78);
    if (DAT_1416fce78 == -1) {
      FUN_1402d95d0(&DAT_1416fc708,"SoftBodySharedSettings::Skinned",0x34,FUN_1405cd660,
                    &LAB_140331080,mbackstopradius);
      _Init_thread_footer(&DAT_1416fce78);
      return &DAT_1416fc708;
    }
  }
  return &DAT_1416fc708;
}


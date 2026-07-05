/**
 * Function: softbodysharedsettings_volume
 * Address:  1405cfae0
 * Signature: undefined softbodysharedsettings_volume(void)
 * Body size: 150 bytes
 */


undefined * softbodysharedsettings_volume(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_1416fb810) {
    FUN_140b6864c(&DAT_1416fb810);
    if (DAT_1416fb810 == -1) {
      FUN_1402d95d0(&DAT_1416fb0a0,"SoftBodySharedSettings::Volume",0x18,FUN_1405cd5e0,
                    &LAB_140331080,FUN_1405cc970);
      _Init_thread_footer(&DAT_1416fb810);
      return &DAT_1416fb0a0;
    }
  }
  return &DAT_1416fb0a0;
}


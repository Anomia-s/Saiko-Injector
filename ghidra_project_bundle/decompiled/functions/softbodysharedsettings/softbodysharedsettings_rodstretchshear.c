/**
 * Function: softbodysharedsettings_rodstretchshear
 * Address:  1405d1310
 * Signature: undefined softbodysharedsettings_rodstretchshear(void)
 * Body size: 150 bytes
 */


undefined * softbodysharedsettings_rodstretchshear(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_1416fa1a8) {
    FUN_140b6864c(&DAT_1416fa1a8);
    if (DAT_1416fa1a8 == -1) {
      FUN_1402d95d0(&DAT_1416f9a38,"SoftBodySharedSettings::RodStretchShear",0x30,FUN_1405cd550,
                    &LAB_140331080,FUN_1405cc4f0);
      _Init_thread_footer(&DAT_1416fa1a8);
      return &DAT_1416f9a38;
    }
  }
  return &DAT_1416f9a38;
}


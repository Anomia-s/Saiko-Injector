/**
 * Function: compoundshapesettings_subshapesettings
 * Address:  1402df530
 * Signature: undefined compoundshapesettings_subshapesettings(void)
 * Body size: 150 bytes
 */


undefined * compoundshapesettings_subshapesettings(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_1416c04d8) {
    FUN_140b6864c(&DAT_1416c04d8);
    if (DAT_1416c04d8 == -1) {
      FUN_1402d95d0(&DAT_1416bfd68,"CompoundShapeSettings::SubShapeSettings",0x40,FUN_1402df1a0,
                    FUN_1402df130,FUN_1402da6a0);
      _Init_thread_footer(&DAT_1416c04d8);
      return &DAT_1416bfd68;
    }
  }
  return &DAT_1416bfd68;
}


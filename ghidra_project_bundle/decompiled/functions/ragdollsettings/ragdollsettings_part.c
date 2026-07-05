/**
 * Function: ragdollsettings_part
 * Address:  140333db0
 * Signature: undefined ragdollsettings_part(void)
 * Body size: 150 bytes
 */


undefined * ragdollsettings_part(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_1416cd590) {
    FUN_140b6864c(&DAT_1416cd590);
    if (DAT_1416cd590 == -1) {
      FUN_1402d95d0(&DAT_1416cce20,"RagdollSettings::Part",0x110,FUN_140333440,FUN_1403333a0,
                    FUN_140332720);
      _Init_thread_footer(&DAT_1416cd590);
      return &DAT_1416cce20;
    }
  }
  return &DAT_1416cce20;
}


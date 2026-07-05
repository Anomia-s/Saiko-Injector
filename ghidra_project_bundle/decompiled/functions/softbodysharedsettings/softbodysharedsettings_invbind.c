/**
 * Function: softbodysharedsettings_invbind
 * Address:  1405d0240
 * Signature: undefined softbodysharedsettings_invbind(void)
 * Body size: 150 bytes
 */


undefined * softbodysharedsettings_invbind(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_1416fbf88) {
    FUN_140b6864c(&DAT_1416fbf88);
    if (DAT_1416fbf88 == -1) {
      FUN_1402d95d0(&DAT_1416fb818,"SoftBodySharedSettings::InvBind",0x50,FUN_1405cd610,
                    &LAB_140331080,FUN_1405ccab0);
      _Init_thread_footer(&DAT_1416fbf88);
      return &DAT_1416fb818;
    }
  }
  return &DAT_1416fb818;
}


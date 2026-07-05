/**
 * Function: softbodysharedsettings_edge
 * Address:  1405cf3d0
 * Signature: undefined softbodysharedsettings_edge(void)
 * Body size: 150 bytes
 */


undefined * softbodysharedsettings_edge(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_1416f9a30) {
    FUN_140b6864c(&DAT_1416f9a30);
    if (DAT_1416f9a30 == -1) {
      FUN_1402d95d0(&DAT_1416f92c0,"SoftBodySharedSettings::Edge",0x10,FUN_1405cd520,&LAB_140331080,
                    FUN_1405cc3b0);
      _Init_thread_footer(&DAT_1416f9a30);
      return &DAT_1416f92c0;
    }
  }
  return &DAT_1416f92c0;
}


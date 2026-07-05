/**
 * Function: softbodysharedsettings_vertex
 * Address:  1405ce370
 * Signature: undefined softbodysharedsettings_vertex(void)
 * Body size: 150 bytes
 */


undefined * softbodysharedsettings_vertex(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_1416f8b40) {
    FUN_140b6864c(&DAT_1416f8b40);
    if (DAT_1416f8b40 == -1) {
      FUN_1402d95d0(&DAT_1416f83d0,"SoftBodySharedSettings::Vertex",0x1c,FUN_1405cd4d0,
                    &LAB_140331080,FUN_1405cc170);
      _Init_thread_footer(&DAT_1416f8b40);
      return &DAT_1416f83d0;
    }
  }
  return &DAT_1416f83d0;
}


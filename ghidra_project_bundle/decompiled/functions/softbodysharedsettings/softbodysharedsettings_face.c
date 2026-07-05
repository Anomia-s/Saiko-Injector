/**
 * Function: softbodysharedsettings_face
 * Address:  1405cf060
 * Signature: undefined softbodysharedsettings_face(void)
 * Body size: 150 bytes
 */


undefined * softbodysharedsettings_face(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_1416f92b8) {
    FUN_140b6864c(&DAT_1416f92b8);
    if (DAT_1416f92b8 == -1) {
      FUN_1402d95d0(&DAT_1416f8b48,"SoftBodySharedSettings::Face",0x10,FUN_1405cd500,&LAB_140331080,
                    FUN_1405cc2b0);
      _Init_thread_footer(&DAT_1416f92b8);
      return &DAT_1416f8b48;
    }
  }
  return &DAT_1416f8b48;
}


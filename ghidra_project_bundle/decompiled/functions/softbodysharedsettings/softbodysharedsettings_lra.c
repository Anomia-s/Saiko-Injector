/**
 * Function: softbodysharedsettings_lra
 * Address:  1405d0f70
 * Signature: undefined softbodysharedsettings_lra(void)
 * Body size: 150 bytes
 */


undefined * softbodysharedsettings_lra(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_1416fd5f0) {
    FUN_140b6864c(&DAT_1416fd5f0);
    if (DAT_1416fd5f0 == -1) {
      FUN_1402d95d0(&DAT_1416fce80,"SoftBodySharedSettings::LRA",0xc,FUN_1405cd6a0,&LAB_140331080,
                    FUN_1405cce90);
      _Init_thread_footer(&DAT_1416fd5f0);
      return &DAT_1416fce80;
    }
  }
  return &DAT_1416fce80;
}


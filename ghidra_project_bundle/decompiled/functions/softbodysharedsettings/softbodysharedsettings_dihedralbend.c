/**
 * Function: softbodysharedsettings_dihedralbend
 * Address:  1405cf760
 * Signature: undefined softbodysharedsettings_dihedralbend(void)
 * Body size: 150 bytes
 */


undefined * softbodysharedsettings_dihedralbend(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_1416fb098) {
    FUN_140b6864c(&DAT_1416fb098);
    if (DAT_1416fb098 == -1) {
      FUN_1402d95d0(&DAT_1416fa928,"SoftBodySharedSettings::DihedralBend",0x18,FUN_1405cd5c0,
                    &LAB_140331080,minitialangle);
      _Init_thread_footer(&DAT_1416fb098);
      return &DAT_1416fa928;
    }
  }
  return &DAT_1416fa928;
}


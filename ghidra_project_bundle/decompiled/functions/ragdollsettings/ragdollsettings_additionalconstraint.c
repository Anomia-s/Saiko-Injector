/**
 * Function: ragdollsettings_additionalconstraint
 * Address:  140334100
 * Signature: undefined ragdollsettings_additionalconstraint(void)
 * Body size: 150 bytes
 */


undefined * ragdollsettings_additionalconstraint(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_1416cdd08) {
    FUN_140b6864c(&DAT_1416cdd08);
    if (DAT_1416cdd08 == -1) {
      FUN_1402d95d0(&DAT_1416cd598,"RagdollSettings::AdditionalConstraint",0x10,FUN_140333550,
                    FUN_140333500,FUN_1403327e0);
      _Init_thread_footer(&DAT_1416cdd08);
      return &DAT_1416cd598;
    }
  }
  return &DAT_1416cd598;
}


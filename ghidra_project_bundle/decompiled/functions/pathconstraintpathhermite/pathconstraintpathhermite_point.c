/**
 * Function: pathconstraintpathhermite_point
 * Address:  1403691a0
 * Signature: undefined pathconstraintpathhermite_point(void)
 * Body size: 150 bytes
 */


undefined * pathconstraintpathhermite_point(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_1416d6378) {
    FUN_140b6864c(&DAT_1416d6378);
    if (DAT_1416d6378 == -1) {
      FUN_1402d95d0(&DAT_1416d5c08,"PathConstraintPathHermite::Point",0x30,&LAB_140368dd0,
                    &LAB_140331080,FUN_140367980);
      _Init_thread_footer(&DAT_1416d6378);
      return &DAT_1416d5c08;
    }
  }
  return &DAT_1416d5c08;
}


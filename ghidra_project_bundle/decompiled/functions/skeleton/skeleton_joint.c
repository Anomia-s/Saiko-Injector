/**
 * Function: skeleton_joint
 * Address:  140332490
 * Signature: undefined skeleton_joint(void)
 * Body size: 150 bytes
 */


undefined * skeleton_joint(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_1416cc6a0) {
    FUN_140b6864c(&DAT_1416cc6a0);
    if (DAT_1416cc6a0 == -1) {
      FUN_1402d95d0(&DAT_1416cbf30,"Skeleton::Joint",0x48,FUN_140331fa0,FUN_140331f30,FUN_140331ca0)
      ;
      _Init_thread_footer(&DAT_1416cc6a0);
      return &DAT_1416cbf30;
    }
  }
  return &DAT_1416cbf30;
}


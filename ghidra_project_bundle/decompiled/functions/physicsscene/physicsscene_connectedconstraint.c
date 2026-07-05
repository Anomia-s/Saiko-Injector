/**
 * Function: physicsscene_connectedconstraint
 * Address:  14036f950
 * Signature: undefined physicsscene_connectedconstraint(void)
 * Body size: 150 bytes
 */


undefined * physicsscene_connectedconstraint(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_1416d97c0) {
    FUN_140b6864c(&DAT_1416d97c0);
    if (DAT_1416d97c0 == -1) {
      FUN_1402d95d0(&DAT_1416d9050,"PhysicsScene::ConnectedConstraint",0x10,FUN_14036f460,
                    FUN_14036f420,FUN_14036e720);
      _Init_thread_footer(&DAT_1416d97c0);
      return &DAT_1416d9050;
    }
  }
  return &DAT_1416d9050;
}


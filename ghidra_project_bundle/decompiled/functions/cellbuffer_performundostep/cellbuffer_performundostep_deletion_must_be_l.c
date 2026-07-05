/**
 * Function: cellbuffer_performundostep_deletion_must_be_l
 * Address:  1407fc450
 * Signature: undefined cellbuffer_performundostep_deletion_must_be_l(void)
 * Body size: 181 bytes
 */


void cellbuffer_performundostep_deletion_must_be_l(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  void *local_10;
  
  local_10 = (void *)(DAT_1414ef3c0 ^ (ulonglong)auStack_48);
  lVar1 = *(longlong *)(param_1 + 0x98) + (longlong)*(int *)(param_1 + 0xb4) * 0x28;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x98) + (longlong)*(int *)(param_1 + 0xb4) * 0x28);
  if (iVar2 == 1) {
    FUN_1407fa3d0(param_1,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10),
                  *(undefined8 *)(lVar1 + 0x18));
  }
  else if (iVar2 == 0) {
    if (*(longlong *)(param_1 + 0x28) < *(longlong *)(lVar1 + 0x18)) {
      std::runtime_error::runtime_error
                ((runtime_error *)&stack0xffffffffffffffd8,
                 "CellBuffer::PerformUndoStep: deletion must be less than document length.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((runtime_error *)&stack0xffffffffffffffd8,(ThrowInfo *)&DAT_141457fb0);
    }
    FUN_1407fac70(param_1,*(undefined8 *)(lVar1 + 8));
  }
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
  if (DAT_1414ef3c0 == ((ulonglong)local_10 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0((ulonglong)local_10 ^ (ulonglong)auStack_48);
}


/**
 * Function: splitvector_reallocate_negative_size
 * Address:  140a55250
 * Signature: undefined splitvector_reallocate_negative_size(void)
 * Body size: 231 bytes
 */


void splitvector_reallocate_negative_size(longlong *param_1,void *param_2)

{
  undefined1 auStack_58 [32];
  void *local_20;
  undefined **local_18;
  
  local_18 = (undefined **)(DAT_1414ef3c0 ^ (ulonglong)auStack_58);
  if ((longlong)param_2 < 0) {
    std::runtime_error::runtime_error
              ((runtime_error *)&stack0xffffffffffffffc8,"SplitVector::ReAllocate: negative size.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((runtime_error *)&stack0xffffffffffffffc8,(ThrowInfo *)&DAT_141457fb0);
  }
  if (param_1[1] - *param_1 >> 3 < (longlong)param_2) {
    FUN_140a54e80(param_1,param_1[4]);
    param_1[6] = (longlong)param_2 + (param_1[6] - (param_1[1] - *param_1 >> 3));
    local_20 = param_2;
    if ((void *)(param_1[2] - *param_1 >> 3) < param_2) {
      if ((ulonglong)param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        vector_too_long();
      }
      FUN_140a55340(param_1,&stack0xffffffffffffffe0);
    }
    FUN_140a554c0(param_1,param_2,&stack0xffffffffffffffe0);
  }
  if (DAT_1414ef3c0 == ((ulonglong)local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0((ulonglong)local_18 ^ (ulonglong)auStack_58);
}


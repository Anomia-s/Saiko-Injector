/**
 * Function: alloc_aligned_failed_with_error_message_errno
 * Address:  140007460
 * Signature: void __fastcall alloc_aligned_failed_with_error_message_errno(size_t param_1, size_t param_2)
 * Body size: 164 bytes
 */


void alloc_aligned_failed_with_error_message_errno(size_t param_1,size_t param_2)

{
  void *pvVar1;
  int *piVar2;
  QuillError_vftable *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [8];
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  pvVar1 = _aligned_malloc(param_1,param_2);
  if (pvVar1 != (void *)0x0) {
    return;
  }
  piVar2 = _errno();
  FUN_140007930(local_70,*piVar2);
  FUN_140004940(local_50,"_alloc_aligned failed with error message errno: ");
  FUN_140007770(local_30);
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = &quill::v11::QuillError::vftable;
  uStack_88 = uStack_28;
  local_80 = local_20;
  uStack_78 = uStack_18;
  local_20 = 0;
  uStack_18 = 0xf;
  local_30[0] = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_a8,(ThrowInfo *)&DAT_14140fa50);
}


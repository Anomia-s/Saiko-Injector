/**
 * Function: fflush_failed_errno
 * Address:  140b5a000
 * Signature: void __fastcall fflush_failed_errno(longlong param_1)
 * Body size: 246 bytes
 */


void fflush_failed_errno(longlong param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  QuillError_vftable *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [8];
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  iVar1 = fflush(*(FILE **)(param_1 + 0xe8));
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x239) = 0;
    return;
  }
  piVar2 = _errno();
  iVar1 = *piVar2;
  clearerr(*(FILE **)(param_1 + 0xe8));
  pcVar3 = strerror(iVar1);
  FUN_140007930(local_80,iVar1);
  FUN_140004940(local_60,"fflush failed errno: ");
  FUN_140007770(local_a0);
  FUN_140008840(local_c0,local_a0," error: ");
  FUN_140008840(local_40,local_c0,pcVar3);
  local_f0 = 0;
  uStack_e8 = 0;
  local_f8 = &quill::v11::QuillError::vftable;
  uStack_d8 = uStack_38;
  local_d0 = local_30;
  uStack_c8 = uStack_28;
  local_30 = 0;
  uStack_28 = 0xf;
  local_40[0] = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_f8,(ThrowInfo *)&DAT_14140fa50);
}


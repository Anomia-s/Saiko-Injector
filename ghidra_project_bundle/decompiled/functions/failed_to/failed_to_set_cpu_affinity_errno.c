/**
 * Function: failed_to_set_cpu_affinity_errno
 * Address:  140dbc009
 * Signature: void __fastcall failed_to_set_cpu_affinity_errno(byte param_1)
 * Body size: 231 bytes
 */


void failed_to_set_cpu_affinity_errno(byte param_1)

{
  DWORD DVar1;
  HANDLE hThread;
  DWORD_PTR DVar2;
  QuillError_vftable *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8 [4];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [8];
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  hThread = GetCurrentThread();
  DVar2 = SetThreadAffinityMask(hThread,1L << (param_1 & 0x3f));
  if (DVar2 != 0) {
    return;
  }
  DVar1 = GetLastError();
  std::_System_error_category::vfunction3
            ((_System_error_category *)&PTR_vftable_140dc1808,local_b8,DVar1);
  FUN_140007930(local_58,DVar1);
  FUN_1400089f0(local_78,"Failed to set cpu affinity - errno: ",local_58);
  FUN_140008840(local_98,local_78," error: ");
  FUN_140007770(local_38);
  local_e8 = 0;
  uStack_e0 = 0;
  local_f0 = &quill::v11::QuillError::vftable;
  uStack_d0 = uStack_30;
  local_c8 = local_28;
  uStack_c0 = uStack_20;
  local_28 = 0;
  uStack_20 = 0xf;
  local_38[0] = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_f0,(ThrowInfo *)&DAT_14140fa50);
}


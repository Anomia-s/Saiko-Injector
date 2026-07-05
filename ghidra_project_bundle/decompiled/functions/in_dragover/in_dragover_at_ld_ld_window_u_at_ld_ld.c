/**
 * Function: in_dragover_at_ld_ld_window_u_at_ld_ld
 * Address:  14045ff70
 * Signature: undefined in_dragover_at_ld_ld_window_u_at_ld_ld(void)
 * Body size: 231 bytes
 */


undefined8
in_dragover_at_ld_ld_window_u_at_ld_ld
          (longlong param_1,undefined8 param_2,tagPOINT param_3,undefined4 *param_4)

{
  BOOL BVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  LONG local_40;
  LONG local_38;
  tagPOINT local_30;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  uVar2 = (ulonglong)param_3 >> 0x20;
  FUN_1400fb770(7,". In DragOver at %ld, %ld",param_3,uVar2);
  *param_4 = 1;
  local_30 = param_3;
  BVar1 = ScreenToClient(*(HWND *)(param_1 + 0x18),&local_30);
  if (BVar1 == 0) {
    FUN_1400fb770(7,". In DragOver at %ld, %ld => nil, nil",(ulonglong)param_3 & 0xffffffff,uVar2);
  }
  else {
    local_48 = **(undefined4 **)(param_1 + 0x10);
    local_38 = local_30.y;
    local_40 = local_30.x;
    FUN_1400fb770(7,". In DragOver at %ld, %ld => window %u at %ld, %ld",
                  (ulonglong)param_3 & 0xffffffff,uVar2);
    FUN_14046b4f0(*(undefined8 *)(param_1 + 0x10),(float)local_30.x,(float)local_30.y);
  }
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_68)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_68);
}


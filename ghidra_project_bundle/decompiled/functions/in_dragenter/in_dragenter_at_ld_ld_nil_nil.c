/**
 * Function: in_dragenter_at_ld_ld_nil_nil
 * Address:  14045fe80
 * Signature: undefined in_dragenter_at_ld_ld_nil_nil(void)
 * Body size: 239 bytes
 */


undefined8
in_dragenter_at_ld_ld_nil_nil
          (longlong param_1,undefined8 param_2,undefined8 param_3,tagPOINT param_4,
          undefined4 *param_5)

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
  uVar2 = (ulonglong)param_4 >> 0x20;
  FUN_1400fb770(7,". In DragEnter at %ld, %ld",(ulonglong)param_4 & 0xffffffff,uVar2);
  *param_5 = 1;
  local_30 = param_4;
  BVar1 = ScreenToClient(*(HWND *)(param_1 + 0x18),&local_30);
  if (BVar1 == 0) {
    FUN_1400fb770(7,". In DragEnter at %ld, %ld => nil, nil",(ulonglong)param_4 & 0xffffffff,uVar2);
  }
  else {
    local_48 = **(undefined4 **)(param_1 + 0x10);
    local_38 = local_30.y;
    local_40 = local_30.x;
    FUN_1400fb770(7,". In DragEnter at %ld, %ld => window %u at %ld, %ld",
                  (ulonglong)param_4 & 0xffffffff,uVar2);
    FUN_14046b4f0(*(undefined8 *)(param_1 + 0x10),(float)local_30.x,(float)local_30.y);
  }
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_68)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_68);
}


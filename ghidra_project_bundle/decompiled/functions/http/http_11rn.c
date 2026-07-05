/**
 * Function: http_11rn
 * Address:  1401d0490
 * Signature: undefined http_11rn(void)
 * Body size: 628 bytes
 */


undefined8 http_11rn(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 ***pppuVar3;
  undefined8 uVar4;
  void *_Dst;
  undefined8 ****ppppuVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 ***local_58;
  longlong lStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (undefined8 ***)0x0;
  lStack_50 = 0;
  uVar6 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (longlong *)*param_2;
  }
  if ((longlong)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    string_too_long();
  }
  if (uVar6 < 0x10) {
    uStack_40 = 0xf;
    local_58 = (undefined8 ***)*param_2;
    lStack_50 = param_2[1];
    uVar7 = 0xf;
    local_48 = uVar6;
    if (uVar6 != 0xf) {
LAB_1401d04f9:
      local_48 = uVar6 + 1;
      if (uVar7 < 0x10) {
        *(undefined2 *)((longlong)&local_58 + uVar6) = 0x20;
      }
      else {
        *(undefined2 *)((longlong)local_58 + uVar6) = 0x20;
      }
      goto LAB_1401d05a6;
    }
  }
  else {
    uVar2 = uVar6 | 0xf;
    uVar7 = 0x16;
    if (0x16 < uVar2) {
      uVar7 = uVar2;
    }
    if (uVar2 < 0xfff) {
      local_58 = (undefined8 ***)FUN_140b65d30(uVar7 + 1);
    }
    else {
      pppuVar3 = (undefined8 ***)FUN_140b65d30(uVar7 + 0x28);
      local_58 = (undefined8 ***)((longlong)pppuVar3 + 0x27U & 0xffffffffffffffe0);
      local_58[-1] = pppuVar3;
    }
    local_48 = uVar6;
    uStack_40 = uVar7;
    memcpy(local_58,param_2,uVar6 + 1);
    if (uVar7 != uVar6) goto LAB_1401d04f9;
  }
  FUN_140006210(&local_58,1);
LAB_1401d05a6:
  uVar6 = param_3[2];
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  if (uStack_40 - local_48 < uVar6) {
    FUN_140006210(&local_58,uVar6,uVar6,param_3,uVar6);
  }
  else {
    uVar7 = local_48 + uVar6;
    ppppuVar5 = (undefined8 ****)local_58;
    if (uStack_40 < 0x10) {
      ppppuVar5 = &local_58;
    }
    _Dst = (void *)(local_48 + (longlong)ppppuVar5);
    local_48 = uVar7;
    memmove(_Dst,param_3,uVar6);
    *(undefined1 *)((longlong)ppppuVar5 + uVar7) = 0;
  }
  uVar6 = local_48;
  if (uStack_40 - local_48 < 0xb) {
    FUN_140006210(&local_58,0xb);
  }
  else {
    ppppuVar5 = (undefined8 ****)local_58;
    if (uStack_40 < 0x10) {
      ppppuVar5 = &local_58;
    }
    puVar1 = (undefined8 *)((longlong)ppppuVar5 + local_48);
    local_48 = local_48 + 0xb;
    *puVar1 = 0x2e312f5054544820;
    *(undefined4 *)((longlong)ppppuVar5 + uVar6 + 7) = 0xa0d312e;
    *(undefined1 *)((longlong)ppppuVar5 + uVar6 + 0xb) = 0;
  }
  ppppuVar5 = (undefined8 ****)local_58;
  if (uStack_40 < 0x10) {
    ppppuVar5 = &local_58;
  }
  uVar4 = (**(code **)(*param_1 + 0x20))(param_1,ppppuVar5,local_48);
  if (0xf < uStack_40) {
    uVar6 = uStack_40 + 1;
    ppppuVar5 = (undefined8 ****)local_58;
    if (0xfff < uVar6) {
      if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)local_58[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = uStack_40 + 0x28;
      ppppuVar5 = (undefined8 ****)local_58[-1];
    }
    thunk_FUN_140b68ba8(ppppuVar5,uVar6);
  }
  return uVar4;
}


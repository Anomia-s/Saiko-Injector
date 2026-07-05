/**
 * Function: getting_effect_status
 * Address:  140653d40
 * Signature: undefined getting_effect_status(void)
 * Body size: 116 bytes
 */


ulonglong getting_effect_status(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_1414ef3c0 ^ (ulonglong)auStack_38;
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x48) + 0x50);
  iVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,&local_c);
  if (iVar2 < 0) {
    FUN_1400fbed0("Haptic error %s","Getting effect status");
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (ulonglong)(local_c != 0);
  }
  if (DAT_1414ef3c0 == (local_8 ^ (ulonglong)auStack_38)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_8 ^ (ulonglong)auStack_38);
}


/**
 * Function: haptic_error_s
 * Address:  140653e40
 * Signature: undefined haptic_error_s(void)
 * Body size: 131 bytes
 */


undefined8 haptic_error_s(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  uint local_18;
  ulonglong local_8;
  
  local_8 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  local_28 = 0x1000000014;
  uStack_20 = 0;
  local_18 = (uint)(param_2 != 0);
  iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0x30))
                    ((longlong *)**(undefined8 **)(param_1 + 0x28),9,&local_28);
  uVar2 = 1;
  if (iVar1 < 0) {
    uVar2 = FUN_1400fbed0("Haptic error %s","Setting autocenter");
  }
  if (DAT_1414ef3c0 == (local_8 ^ (ulonglong)auStack_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_8 ^ (ulonglong)auStack_48);
}


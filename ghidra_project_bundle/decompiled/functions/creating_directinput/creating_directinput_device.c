/**
 * Function: creating_directinput_device
 * Address:  140652a50
 * Signature: undefined creating_directinput_device(void)
 * Body size: 149 bytes
 */


undefined8 creating_directinput_device(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [32];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStack_38;
  iVar2 = (**(code **)(*DAT_1416fdf20 + 0x18))(DAT_1416fdf20,param_2 + 0x1c,&local_18,0);
  if (iVar2 < 0) {
    FUN_1400fbed0("Haptic error %s","Creating DirectInput device");
  }
  else {
    cVar1 = setting_cooperative_level_to_exclusive(param_1,local_18,0);
    uVar3 = 1;
    if (cVar1 != '\0') goto LAB_140652abe;
    (**(code **)(*local_18 + 0x10))();
  }
  uVar3 = 0;
LAB_140652abe:
  if (DAT_1414ef3c0 == (local_10 ^ (ulonglong)auStack_38)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_10 ^ (ulonglong)auStack_38);
}


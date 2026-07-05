/**
 * Function: mapping_not_available
 * Address:  14010b760
 * Signature: undefined mapping_not_available(void)
 * Body size: 140 bytes
 */


undefined8 mapping_not_available(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  FUN_1401264f0();
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  lVar1 = sdl_joystick_hidapi_vertical_joy_cons(&local_28,0);
  if (lVar1 == 0) {
    FUN_1400fbed0("Mapping not available");
    uVar2 = 0;
  }
  else {
    local_28 = *param_1;
    uStack_24 = param_1[1];
    uStack_20 = param_1[2];
    uStack_1c = param_1[3];
    uVar2 = FUN_14010b590(lVar1,&local_28);
  }
  FUN_140126530();
  if (DAT_1414ef3c0 == (local_10 ^ (ulonglong)auStack_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_10 ^ (ulonglong)auStack_48);
}


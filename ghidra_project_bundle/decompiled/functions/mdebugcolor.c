/**
 * Function: mdebugcolor
 * Address:  140370140
 * Signature: undefined mdebugcolor(void)
 * Body size: 269 bytes
 */


void mdebugcolor(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  char *local_48;
  undefined4 local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1400e75f0(0);
  FUN_1402d96b0(param_1,uVar1,0);
  local_48 = "mDebugName";
  local_40 = 0x10;
  local_38 = &LAB_1403312e0;
  local_30 = &LAB_1403312d0;
  local_28 = &LAB_1403312c0;
  local_20 = &LAB_1403312b0;
  local_18 = &LAB_1403312a0;
  FUN_1402d9850(param_1,&local_48);
  local_48 = "mDebugColor";
  local_40 = 0x30;
  local_38 = &LAB_140370470;
  local_30 = &LAB_140370460;
  local_28 = &LAB_140370450;
  local_20 = &LAB_140370440;
  local_18 = &LAB_140370430;
  FUN_1402d9850(param_1,&local_48);
  if (DAT_1414ef3c0 == (local_10 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_10 ^ (ulonglong)auStack_68);
}


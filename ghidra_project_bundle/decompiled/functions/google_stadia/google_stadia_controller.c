/**
 * Function: google_stadia_controller
 * Address:  1406405b0
 * Signature: undefined google_stadia_controller(void)
 * Body size: 163 bytes
 */


undefined8 google_stadia_controller(longlong param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  puVar2 = (undefined1 *)FUN_140160c70(1,0x41);
  if (puVar2 == (undefined1 *)0x0) {
    uVar3 = 0;
  }
  else {
    *(undefined1 **)(param_1 + 0x70) = puVar2;
    local_1c = 0;
    local_20 = 5;
    iVar1 = FUN_14017a5d0(*(undefined8 *)(param_1 + 0x80),&local_20,5);
    if (-1 < iVar1) {
      *puVar2 = 1;
    }
    FUN_14043fe30(param_1,"Google Stadia Controller");
    uVar3 = FUN_140440300(param_1,0);
  }
  if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_48);
}


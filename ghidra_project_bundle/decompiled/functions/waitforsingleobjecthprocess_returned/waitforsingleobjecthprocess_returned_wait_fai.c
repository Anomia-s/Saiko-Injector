/**
 * Function: waitforsingleobjecthprocess_returned_wait_fai
 * Address:  14045c5f0
 * Signature: undefined waitforsingleobjecthprocess_returned_wait_fai(void)
 * Body size: 190 bytes
 */


undefined8
waitforsingleobjecthprocess_returned_wait_fai(longlong param_1,byte param_2,DWORD *param_3)

{
  DWORD DVar1;
  BOOL BVar2;
  undefined4 extraout_var;
  undefined8 uVar3;
  undefined1 auStack_48 [44];
  DWORD local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  DVar1 = WaitForSingleObject((HANDLE)**(undefined8 **)(param_1 + 0x10),-(uint)param_2);
  if (DVar1 == 0xffffffff) {
    if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_48)) {
      uVar3 = FUN_1403d7710("WaitForSingleObject(hProcess) returned WAIT_FAILED");
      return uVar3;
    }
  }
  else {
    if (DVar1 == 0) {
      BVar2 = GetExitCodeProcess((HANDLE)**(undefined8 **)(param_1 + 0x10),&local_1c);
      if (BVar2 == 0) {
        uVar3 = FUN_1403d7710("GetExitCodeProcess");
      }
      else {
        uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,BVar2) >> 8),1);
        if (param_3 != (DWORD *)0x0) {
          *param_3 = local_1c;
        }
      }
    }
    else {
      FUN_1400fc040();
      uVar3 = 0;
    }
    if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_48)) {
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_48);
}


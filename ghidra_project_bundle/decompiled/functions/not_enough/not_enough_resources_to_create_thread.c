/**
 * Function: not_enough_resources_to_create_thread
 * Address:  14015d050
 * Signature: undefined not_enough_resources_to_create_thread(void)
 * Body size: 193 bytes
 */


undefined8 not_enough_resources_to_create_thread(LPVOID param_1,code *param_2,undefined8 param_3)

{
  SIZE_T dwStackSize;
  HANDLE pvVar1;
  undefined8 uVar2;
  undefined1 auStackY_48 [32];
  DWORD local_14;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStackY_48;
  dwStackSize = *(SIZE_T *)((longlong)param_1 + 0x48);
  *(undefined8 *)((longlong)param_1 + 0x68) = param_3;
  if (param_2 == (code *)0x0) {
    local_14 = 0;
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,dwStackSize,FUN_14015d120,param_1,
                          (uint)(dwStackSize != 0) << 0x10,&local_14);
  }
  else {
    local_14 = 0;
    pvVar1 = (HANDLE)(*param_2)(0,dwStackSize,FUN_14015d120,param_1);
  }
  *(HANDLE *)((longlong)param_1 + 8) = pvVar1;
  uVar2 = 1;
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = FUN_1400fbed0("Not enough resources to create thread");
  }
  if (DAT_1414ef3c0 == (local_10 ^ (ulonglong)auStackY_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_10 ^ (ulonglong)auStackY_48);
}


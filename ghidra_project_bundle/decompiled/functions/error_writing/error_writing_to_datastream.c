/**
 * Function: error_writing_to_datastream
 * Address:  1400f85b0
 * Signature: undefined error_writing_to_datastream(void)
 * Body size: 246 bytes
 */


ulonglong error_writing_to_datastream
                    (undefined8 *param_1,LPCVOID param_2,longlong param_3,undefined4 *param_4)

{
  DWORD DVar1;
  BOOL BVar2;
  ulonglong uVar3;
  char *pcVar4;
  undefined1 auStackY_58 [32];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStackY_58;
  if (param_1[3] == 0) {
LAB_1400f85fd:
    if (*(char *)(param_1 + 4) == '\x01') {
      local_30.QuadPart = 0;
      BVar2 = SetFilePointerEx((HANDLE)*param_1,(LARGE_INTEGER)0x0,&local_30,2);
      if (BVar2 == 0) goto LAB_1400f8664;
    }
    BVar2 = WriteFile((HANDLE)*param_1,param_2,(DWORD)param_3,(LPDWORD)&local_30.QuadPart,
                      (LPOVERLAPPED)0x0);
    if (BVar2 != 0) {
      uVar3 = local_30.QuadPart & 0xffffffff;
      if (param_3 != 0 && uVar3 == 0) {
        *param_4 = 3;
      }
      goto LAB_1400f867b;
    }
    pcVar4 = "Error writing to datastream";
  }
  else {
    DVar1 = SetFilePointer((HANDLE)*param_1,-(int)param_1[3],(PLONG)0x0,1);
    if (DVar1 != 0) {
      param_1[3] = 0;
      goto LAB_1400f85fd;
    }
LAB_1400f8664:
    pcVar4 = "Error seeking in datastream";
  }
  FUN_1403d7710(pcVar4);
  uVar3 = 0;
LAB_1400f867b:
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStackY_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStackY_58);
}


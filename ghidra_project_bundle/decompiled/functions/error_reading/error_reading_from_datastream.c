/**
 * Function: error_reading_from_datastream
 * Address:  1400f8450
 * Signature: undefined error_reading_from_datastream(void)
 * Body size: 341 bytes
 */


ulonglong error_reading_from_datastream
                    (undefined8 *param_1,void *param_2,ulonglong param_3,undefined4 *param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  ulonglong _Size;
  ulonglong uVar3;
  undefined1 auStackY_68 [32];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStackY_68;
  uVar3 = param_1[3];
  if (uVar3 == 0) {
    _Size = 0;
    if (0x3ff < param_3) goto LAB_1400f84bd;
LAB_1400f84f3:
    BVar1 = ReadFile((HANDLE)*param_1,(LPVOID)param_1[1],0x400,&local_3c,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) goto LAB_1400f8565;
    uVar3 = (ulonglong)local_3c;
    if (uVar3 <= param_3) {
      param_3 = uVar3;
    }
    memcpy(param_2,(void *)param_1[1],param_3);
    param_1[2] = uVar3;
    param_1[3] = uVar3 - param_3;
  }
  else {
    _Size = uVar3;
    if (param_3 < uVar3) {
      _Size = param_3;
    }
    memcpy(param_2,(void *)((param_1[1] + param_1[2]) - uVar3),_Size);
    param_1[3] = param_1[3] - _Size;
    if (param_3 <= uVar3) goto LAB_1400f8540;
    param_2 = (void *)((longlong)param_2 + _Size);
    param_3 = param_3 - _Size;
    if (param_3 < 0x400) goto LAB_1400f84f3;
LAB_1400f84bd:
    BVar1 = ReadFile((HANDLE)*param_1,param_2,(DWORD)param_3,&local_3c,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
LAB_1400f8565:
      param_3 = 0;
      DVar2 = GetLastError();
      if ((DVar2 != 0x26) && (DVar2 != 0x6d)) {
        if (DVar2 == 0xe8) {
          *param_4 = 3;
          param_3 = 0;
        }
        else {
          FUN_1403d7710("Error reading from datastream");
          param_3 = 0;
        }
      }
      goto LAB_1400f8540;
    }
    param_3 = (ulonglong)local_3c;
  }
  param_3 = param_3 + _Size;
LAB_1400f8540:
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStackY_68)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStackY_68);
}


/**
 * Function: screentoclient_failed_error_08x
 * Address:  14045e120
 * Signature: undefined screentoclient_failed_error_08x(void)
 * Body size: 309 bytes
 */


undefined8
screentoclient_failed_error_08x
          (undefined8 param_1,longlong param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  HWND hWnd;
  BOOL BVar1;
  DWORD DVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auStack_68 [32];
  tagPOINT local_48;
  tagPOINT local_40;
  tagPOINT local_38;
  tagRECT local_30;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  hWnd = *(HWND *)(*(longlong *)(param_2 + 0x180) + 8);
  BVar1 = GetClientRect(hWnd,&local_30);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    pcVar4 = "GetClientRect() failed, error %08X";
  }
  else {
    BVar1 = GetWindowRect(hWnd,(LPRECT)&local_40);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      pcVar4 = "GetWindowRect() failed, error %08X";
    }
    else {
      local_48 = local_40;
      BVar1 = ScreenToClient(hWnd,&local_48);
      if (BVar1 != 0) {
        local_40 = local_48;
        local_48 = local_38;
        BVar1 = ScreenToClient(hWnd,&local_48);
        if (BVar1 != 0) {
          *param_3 = local_30.top - local_40.y;
          *param_4 = local_30.left - local_40.x;
          *param_5 = local_48.y - local_30.bottom;
          *param_6 = local_48.x - local_30.right;
          uVar3 = 1;
          goto LAB_14045e22c;
        }
      }
      DVar2 = GetLastError();
      pcVar4 = "ScreenToClient() failed, error %08X";
    }
  }
  uVar3 = FUN_1400fbed0(pcVar4,DVar2);
LAB_14045e22c:
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_68)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_68);
}


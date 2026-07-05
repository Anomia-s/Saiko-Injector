/**
 * Function: setwindowicon_failed_error_08x
 * Address:  14045dec0
 * Signature: undefined setwindowicon_failed_error_08x(void)
 * Body size: 458 bytes
 */


ulonglong setwindowicon_failed_error_08x(undefined8 param_1,longlong param_2,longlong param_3)

{
  HWND hWnd;
  DWORD DVar1;
  uint uVar2;
  PBYTE presbits;
  HICON lParam;
  uint uVar3;
  void *_Src;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  PBYTE _Dst;
  size_t _Size;
  
  hWnd = *(HWND *)(*(longlong *)(param_2 + 0x180) + 8);
  uVar3 = (*(int *)(param_3 + 8) + 7) * *(int *)(param_3 + 0xc);
  _Src = (void *)(ulonglong)uVar3;
  uVar2 = uVar3 + 7;
  if (-1 < (int)uVar3) {
    uVar2 = uVar3;
  }
  iVar5 = (int)uVar2 >> 3;
  DVar1 = iVar5 + *(int *)(param_3 + 0xc) * *(int *)(param_3 + 8) * 4 + 0x28;
  presbits = (PBYTE)FUN_140160c40((longlong)(int)DVar1);
  if (presbits == (PBYTE)0x0) {
    uVar6 = 0;
  }
  else {
    presbits[0] = '(';
    presbits[1] = '\0';
    presbits[2] = '\0';
    presbits[3] = '\0';
    *(undefined4 *)(presbits + 4) = *(undefined4 *)(param_3 + 8);
    *(int *)(presbits + 8) = *(int *)(param_3 + 0xc) * 2;
    presbits[0xc] = '\x01';
    presbits[0xd] = '\0';
    presbits[0xe] = ' ';
    presbits[0xf] = '\0';
    presbits[0x10] = '\0';
    presbits[0x11] = '\0';
    presbits[0x12] = '\0';
    presbits[0x13] = '\0';
    *(int *)(presbits + 0x14) = *(int *)(param_3 + 0xc) * *(int *)(param_3 + 8) * 4;
    presbits[0x18] = '\0';
    presbits[0x19] = '\0';
    presbits[0x1a] = '\0';
    presbits[0x1b] = '\0';
    presbits[0x1c] = '\0';
    presbits[0x1d] = '\0';
    presbits[0x1e] = '\0';
    presbits[0x1f] = '\0';
    presbits[0x20] = '\0';
    presbits[0x21] = '\0';
    presbits[0x22] = '\0';
    presbits[0x23] = '\0';
    presbits[0x24] = '\0';
    presbits[0x25] = '\0';
    presbits[0x26] = '\0';
    presbits[0x27] = '\0';
    uVar2 = *(uint *)(param_3 + 0xc);
    uVar6 = (ulonglong)(int)uVar2;
    if (uVar6 != 0) {
      _Dst = presbits + 0x28;
      _Size = (size_t)(*(int *)(param_3 + 8) << 2);
      if ((uVar6 & 1) == 0) {
        uVar6 = (ulonglong)uVar2;
      }
      else {
        uVar6 = uVar6 - 1;
        _Src = (void *)((longlong)*(int *)(param_3 + 0x10) * uVar6 + *(longlong *)(param_3 + 0x18));
        memcpy(_Dst,_Src,_Size);
        _Dst = _Dst + _Size;
      }
      if (uVar2 != 1) {
        iVar4 = (int)uVar6 + -1;
        do {
          memcpy(_Dst,(void *)((longlong)*(int *)(param_3 + 0x10) * (longlong)iVar4 +
                              *(longlong *)(param_3 + 0x18)),_Size);
          _Src = (void *)((longlong)(iVar4 + -1) * (longlong)*(int *)(param_3 + 0x10) +
                         *(longlong *)(param_3 + 0x18));
          memcpy(_Dst + _Size,_Src,_Size);
          _Dst = _Dst + _Size + _Size;
          iVar4 = iVar4 + -2;
        } while (iVar4 != -1);
      }
    }
    memset(presbits + ((longlong)(int)DVar1 - (longlong)iVar5),
           (int)CONCAT71((int7)((ulonglong)_Src >> 8),0xff),(longlong)iVar5);
    lParam = CreateIconFromResource(presbits,DVar1,1,0x30000);
    FUN_140160cf0(presbits);
    uVar6 = CONCAT71((int7)((ulonglong)presbits >> 8),1);
    if (lParam == (HICON)0x0) {
      DVar1 = GetLastError();
      uVar2 = FUN_1400fbed0("SetWindowIcon() failed, error %08X",DVar1);
      uVar6 = (ulonglong)uVar2;
    }
    SendMessageW(hWnd,0x80,0,(LPARAM)lParam);
    SendMessageW(hWnd,0x80,1,(LPARAM)lParam);
  }
  return uVar6 & 0xffffffff;
}


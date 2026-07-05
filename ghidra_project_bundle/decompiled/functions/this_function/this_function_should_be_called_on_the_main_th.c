/**
 * Function: this_function_should_be_called_on_the_main_th
 * Address:  14017cdb0
 * Signature: undefined this_function_should_be_called_on_the_main_th(void)
 * Body size: 444 bytes
 */


PNOTIFYICONDATAW this_function_should_be_called_on_the_main_th(longlong param_1,undefined8 param_2)

{
  char cVar1;
  PNOTIFYICONDATAW lpData;
  HWND hWnd;
  longlong lVar2;
  undefined8 uVar3;
  HICON pHVar4;
  
  cVar1 = FUN_14015ae80();
  if (cVar1 == '\0') {
    FUN_1400fbed0("This function should be called on the main thread");
    return (PNOTIFYICONDATAW)0x0;
  }
  lpData = (PNOTIFYICONDATAW)FUN_140160c70(1,1000);
  if (lpData == (PNOTIFYICONDATAW)0x0) {
    return (PNOTIFYICONDATAW)0x0;
  }
  lpData[5].szTip[0x38] = L'\0';
  lpData[5].szTip[0x39] = L'\0';
  lpData[5].szTip[0x3a] = L'\0';
  lpData[5].szTip[0x3b] = L'\0';
  hWnd = CreateWindowExW(0,L"Message",(LPCWSTR)0x0,0,0,0,0,0,(HWND)0xfffffffffffffffd,(HMENU)0x0,
                         (HINSTANCE)0x0,(LPVOID)0x0);
  *(HWND *)(lpData[5].szTip + 0x30) = hWnd;
  SetWindowLongPtrW(hWnd,-4,0x14017cb10);
  FUN_14045dbb0(*(undefined8 *)(lpData[5].szTip + 0x30));
  memset(lpData,0,0x3d0);
  lpData->cbSize = 0x3d0;
  lpData->hWnd = *(HWND *)(lpData[5].szTip + 0x30);
  DAT_1415262b8 = DAT_1415262b8 + 1;
  lpData->uID = (UINT)DAT_1415262b8;
  lpData->uFlags = 0x87;
  lpData->uCallbackMessage = 0x401;
  lpData[4].szTip[0x34] = L'\x04';
  lpData[4].szTip[0x35] = L'\0';
  lVar2 = FUN_1400fc570(param_2);
  uVar3 = FUN_14017b9c0("UTF-16LE","UTF-8",param_2,lVar2 + 1);
  FUN_1400fc5b0(lpData->szTip,uVar3,0x80);
  FUN_140160cf0(uVar3);
  if (param_1 != 0) {
    pHVar4 = (HICON)FUN_14046d9a0(param_1);
    lpData->hIcon = pHVar4;
    if (pHVar4 != (HICON)0x0) goto LAB_14017cf15;
  }
  pHVar4 = (HICON)FUN_14017db50();
  lpData->hIcon = pHVar4;
LAB_14017cf15:
  *(HICON *)(lpData[5].szTip + 0x34) = pHVar4;
  Shell_NotifyIconW(0,lpData);
  Shell_NotifyIconW(4,lpData);
  SetWindowLongPtrW(*(HWND *)(lpData[5].szTip + 0x30),-0x15,(LONG_PTR)lpData);
  FUN_140460c20(lpData);
  return lpData;
}


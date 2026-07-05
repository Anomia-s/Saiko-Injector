/**
 * Function: coinitialize_failed
 * Address:  14046b1c0
 * Signature: undefined coinitialize_failed(void)
 * Body size: 174 bytes
 */


undefined8 coinitialize_failed(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  LPCWSTR lpFile;
  HINSTANCE pHVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_1403d7730();
  if (iVar1 < 0) {
    uVar4 = FUN_1403d7600("CoInitialize failed",iVar1);
    return uVar4;
  }
  lVar2 = FUN_1400fc570(param_1);
  lpFile = (LPCWSTR)FUN_14017b9c0("UTF-16LE","UTF-8",param_1,lVar2 + 1);
  if (lpFile == (LPCWSTR)0x0) {
    CoUninitialize();
    uVar4 = 0;
  }
  else {
    pHVar3 = ShellExecuteW((HWND)0x0,L"open",lpFile,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
    FUN_140160cf0(lpFile);
    CoUninitialize();
    uVar4 = 1;
    if (pHVar3 < (HINSTANCE)0x21) {
      uVar4 = FUN_1403d7710("Couldn\'t open given URL.");
      return uVar4;
    }
  }
  return uVar4;
}


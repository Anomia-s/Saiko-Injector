/**
 * Function: getcurrentdirectoryw_failed
 * Address:  14045b050
 * Signature: undefined getcurrentdirectoryw_failed(void)
 * Body size: 182 bytes
 */


undefined8 getcurrentdirectoryw_failed(void)

{
  DWORD DVar1;
  wchar_t *lpBuffer;
  wchar_t *pwVar2;
  size_t sVar3;
  undefined8 uVar4;
  uint nBufferLength;
  ulonglong uVar5;
  
  uVar5 = 0;
  pwVar2 = (wchar_t *)0x0;
  while( true ) {
    lpBuffer = pwVar2;
    nBufferLength = (uint)uVar5;
    DVar1 = GetCurrentDirectoryW(nBufferLength,lpBuffer);
    if (DVar1 == 0) {
      FUN_1403d7710("GetCurrentDirectoryW failed");
      return 0;
    }
    uVar5 = (ulonglong)DVar1;
    if (DVar1 < nBufferLength) break;
    pwVar2 = (wchar_t *)FUN_140160cc0(lpBuffer,(ulonglong)(DVar1 + 1) * 2);
    if (pwVar2 == (wchar_t *)0x0) {
      FUN_140160cf0(lpBuffer);
      return 0;
    }
  }
  if (lpBuffer[DVar1 - 1] != L'\\') {
    (lpBuffer + uVar5)[0] = L'\\';
    (lpBuffer + uVar5)[1] = L'\0';
  }
  sVar3 = wcslen(lpBuffer);
  uVar4 = FUN_14017b9c0("UTF-8","UTF-16LE",lpBuffer,sVar3 * 2 + 2);
  FUN_140160cf0(lpBuffer);
  return uVar4;
}


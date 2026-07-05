/**
 * Function: couldnt_locate_our_exe
 * Address:  14045a9e0
 * Signature: undefined couldnt_locate_our_exe(void)
 * Body size: 246 bytes
 */


undefined8 couldnt_locate_our_exe(void)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  wchar_t *lpFilename;
  size_t sVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  DWORD nSize;
  ulonglong uVar7;
  uint uVar8;
  
  uVar7 = 0x80;
  pwVar6 = (wchar_t *)0x0;
  do {
    nSize = (DWORD)uVar7;
    lpFilename = (wchar_t *)FUN_140160cc0(pwVar6,uVar7 * 2);
    if (lpFilename == (wchar_t *)0x0) {
      FUN_140160cf0(pwVar6);
      goto LAB_14045aa8a;
    }
    DVar1 = GetModuleFileNameW((HMODULE)0x0,lpFilename,nSize);
    uVar7 = (ulonglong)(nSize * 2);
    pwVar6 = lpFilename;
  } while (nSize - 1 <= DVar1);
  if (DVar1 == 0) {
    FUN_140160cf0(lpFilename);
    FUN_1403d7710("Couldn\'t locate our .exe");
LAB_14045aa8a:
    uVar5 = 0;
  }
  else {
    uVar8 = DVar1 - 1;
    iVar2 = DVar1 + 1;
    do {
      DVar1 = DVar1 - 1;
      iVar3 = ((int)uVar8 >> 0x1f & uVar8) + 1;
      if (iVar2 + -2 < 1) break;
      iVar2 = iVar2 + -1;
      iVar3 = iVar2;
    } while (*(short *)((longlong)lpFilename + (ulonglong)(DVar1 * 2)) != 0x5c);
    lpFilename[iVar3] = L'\0';
    sVar4 = wcslen(lpFilename);
    uVar5 = FUN_14017b9c0("UTF-8","UTF-16LE",lpFilename,sVar4 * 2 + 2);
    FUN_140160cf0(lpFilename);
  }
  return uVar5;
}


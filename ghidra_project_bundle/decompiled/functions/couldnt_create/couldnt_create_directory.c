/**
 * Function: couldnt_create_directory
 * Address:  14045a7e0
 * Signature: undefined couldnt_create_directory(void)
 * Body size: 209 bytes
 */


undefined8 couldnt_create_directory(undefined8 param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  LPCWSTR lpPathName;
  undefined8 uVar4;
  undefined1 auStack_68 [44];
  byte local_3c [36];
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  lVar3 = FUN_1400fc570();
  lpPathName = (LPCWSTR)FUN_14017b9c0("UTF-16LE","UTF-8",param_1,lVar3 + 1);
  if (lpPathName == (LPCWSTR)0x0) {
    uVar4 = 0;
  }
  else {
    BVar1 = CreateDirectoryW(lpPathName,(LPSECURITY_ATTRIBUTES)0x0);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if ((DVar2 == 0xb7) &&
         (BVar1 = GetFileAttributesExW(lpPathName,GetFileExInfoStandard,local_3c), BVar1 != 0)) {
        FUN_140160cf0(lpPathName);
        uVar4 = 1;
        if ((local_3c[0] & 0x10) != 0) goto LAB_14045a889;
      }
      else {
        FUN_140160cf0(lpPathName);
      }
      uVar4 = FUN_1403d7710("Couldn\'t create directory");
    }
    else {
      FUN_140160cf0(lpPathName);
      uVar4 = 1;
    }
  }
LAB_14045a889:
  if (DAT_1414ef3c0 != (local_18 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_18 ^ (ulonglong)auStack_68);
  }
  return uVar4;
}


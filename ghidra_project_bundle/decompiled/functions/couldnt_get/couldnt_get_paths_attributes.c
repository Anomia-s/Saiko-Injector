/**
 * Function: couldnt_get_paths_attributes
 * Address:  14045a580
 * Signature: undefined couldnt_get_paths_attributes(void)
 * Body size: 214 bytes
 */


undefined8 couldnt_get_paths_attributes(undefined8 param_1)

{
  BOOL BVar1;
  int iVar2;
  DWORD DVar3;
  longlong lVar4;
  LPCWSTR lpFileName;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 auStack_68 [44];
  byte local_3c [36];
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  lVar4 = FUN_1400fc570();
  lpFileName = (LPCWSTR)FUN_14017b9c0("UTF-16LE","UTF-8",param_1,lVar4 + 1);
  if (lpFileName == (LPCWSTR)0x0) {
    uVar5 = 0;
  }
  else {
    BVar1 = GetFileAttributesExW(lpFileName,GetFileExInfoStandard,local_3c);
    if (BVar1 == 0) {
      FUN_140160cf0(lpFileName);
      DVar3 = GetLastError();
      uVar5 = 1;
      if (DVar3 == 2) goto LAB_14045a62e;
      pcVar6 = "Couldn\'t get path\'s attributes";
    }
    else {
      if ((local_3c[0] & 0x10) == 0) {
        iVar2 = DeleteFileW(lpFileName);
      }
      else {
        iVar2 = RemoveDirectoryW(lpFileName);
      }
      FUN_140160cf0(lpFileName);
      uVar5 = 1;
      if (iVar2 != 0) goto LAB_14045a62e;
      pcVar6 = "Couldn\'t remove path";
    }
    uVar5 = FUN_1403d7710(pcVar6);
  }
LAB_14045a62e:
  if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_68)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_68);
}


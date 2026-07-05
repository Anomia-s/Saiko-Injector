/**
 * Function: couldnt_copy_path
 * Address:  14045a710
 * Signature: undefined couldnt_copy_path(void)
 * Body size: 194 bytes
 */


undefined8 couldnt_copy_path(undefined8 param_1,undefined8 param_2)

{
  BOOL BVar1;
  longlong lVar2;
  LPCWSTR lpExistingFileName;
  LPCWSTR lpNewFileName;
  undefined8 uVar3;
  
  lVar2 = FUN_1400fc570();
  lpExistingFileName = (LPCWSTR)FUN_14017b9c0("UTF-16LE","UTF-8",param_1,lVar2 + 1);
  if (lpExistingFileName != (LPCWSTR)0x0) {
    lVar2 = FUN_1400fc570(param_2);
    lpNewFileName = (LPCWSTR)FUN_14017b9c0("UTF-16LE","UTF-8",param_2,lVar2 + 1);
    if (lpNewFileName != (LPCWSTR)0x0) {
      BVar1 = CopyFileExW(lpExistingFileName,lpNewFileName,(LPPROGRESS_ROUTINE)0x0,(LPVOID)0x0,
                          (LPBOOL)0x0,0x1008);
      FUN_140160cf0(lpNewFileName);
      FUN_140160cf0(lpExistingFileName);
      if (BVar1 != 0) {
        return 1;
      }
      uVar3 = FUN_1403d7710("Couldn\'t copy path");
      return uVar3;
    }
    FUN_140160cf0(lpExistingFileName);
  }
  return 0;
}


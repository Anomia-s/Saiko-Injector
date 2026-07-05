/**
 * Function: win32_load
 * Address:  140cda100
 * Signature: undefined win32_load(void)
 * Body size: 398 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 win32_load(longlong param_1)

{
  int iVar1;
  LPCSTR lpLibFileName;
  HMODULE hLibModule;
  undefined8 *puVar2;
  
  lpLibFileName = (LPCSTR)FUN_140c5d500(param_1,0);
  if (lpLibFileName == (LPCSTR)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\dso\\dso_win32.c",0x67,"win32_load");
    FUN_140b91cc0(0x25,0x6f,0);
  }
  else {
    hLibModule = LoadLibraryA(lpLibFileName);
    if (hLibModule != (HMODULE)0x0) {
      puVar2 = (undefined8 *)FUN_140b8d8d0(8,"crypto\\dso\\dso_win32.c",0x70);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = hLibModule;
        iVar1 = FUN_140b78340(*(undefined8 *)(param_1 + 8),puVar2);
        if (iVar1 != 0) {
          *(LPCSTR *)(param_1 + 0x40) = lpLibFileName;
          return 1;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\dso\\dso_win32.c",0x75,"win32_load");
        FUN_140b91cc0(0x25,0x69,0);
      }
      FUN_140b8d990(lpLibFileName,"crypto\\dso\\dso_win32.c",0x7d);
      FUN_140b8d990(puVar2,"crypto\\dso\\dso_win32.c",0x7e);
      FreeLibrary(hLibModule);
      return 0;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\dso\\dso_win32.c",0x6c,"win32_load");
    FUN_140b91cc0(0x25,0x67,"filename(%s)",lpLibFileName);
  }
  FUN_140b8d990(lpLibFileName,"crypto\\dso\\dso_win32.c",0x7d);
  FUN_140b8d990(0,"crypto\\dso\\dso_win32.c",0x7e);
  return 0;
}


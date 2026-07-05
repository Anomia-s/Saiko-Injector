/**
 * Function: win32_unload
 * Address:  140cda290
 * Signature: undefined win32_unload(void)
 * Body size: 307 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 win32_unload(longlong param_1)

{
  int iVar1;
  BOOL BVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\dso\\dso_win32.c",0x88,"win32_unload");
    FUN_140b91cc0(0x25,0xc0102,0);
    return 0;
  }
  iVar1 = FUN_140b77980(*(undefined8 *)(param_1 + 8));
  if (iVar1 < 1) {
    return 1;
  }
  puVar3 = (undefined8 *)FUN_140b783c0(*(undefined8 *)(param_1 + 8));
  if (puVar3 == (undefined8 *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\dso\\dso_win32.c",0x8f,"win32_unload");
    FUN_140b91cc0(0x25,0x68,0);
    return 0;
  }
  BVar2 = FreeLibrary((HMODULE)*puVar3);
  if (BVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\dso\\dso_win32.c",0x93,"win32_unload");
    FUN_140b91cc0(0x25,0x6b,0);
    FUN_140b78340(*(undefined8 *)(param_1 + 8),puVar3);
    return 0;
  }
  FUN_140b8d990(puVar3,"crypto\\dso\\dso_win32.c",0x9b);
  return 1;
}


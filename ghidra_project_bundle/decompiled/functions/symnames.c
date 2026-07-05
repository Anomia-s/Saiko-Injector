/**
 * Function: symnames
 * Address:  140cda3d0
 * Signature: undefined symnames(void)
 * Body size: 304 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

FARPROC symnames(longlong param_1,LPCSTR param_2)

{
  int iVar1;
  undefined8 *puVar2;
  FARPROC pFVar3;
  undefined8 uVar4;
  
  if ((param_1 == 0) || (param_2 == (LPCSTR)0x0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\dso\\dso_win32.c",0xa8,"win32_bind_func")
    ;
    uVar4 = 0xc0102;
  }
  else {
    iVar1 = FUN_140b77980(*(undefined8 *)(param_1 + 8));
    if (iVar1 < 1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\dso\\dso_win32.c",0xac,"win32_bind_func");
      uVar4 = 0x69;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 8);
      iVar1 = FUN_140b77980(uVar4);
      puVar2 = (undefined8 *)FUN_140b77990(uVar4,iVar1 + -1);
      if (puVar2 != (undefined8 *)0x0) {
        pFVar3 = GetProcAddress((HMODULE)*puVar2,param_2);
        if (pFVar3 != (FARPROC)0x0) {
          return pFVar3;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\dso\\dso_win32.c",0xb6,"win32_bind_func");
        FUN_140b91cc0(0x25,0x6a,"symname(%s)",param_2);
        return (FARPROC)0x0;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\dso\\dso_win32.c",0xb1,"win32_bind_func");
      uVar4 = 0x68;
    }
  }
  FUN_140b91cc0(0x25,uVar4,0);
  return (FARPROC)0x0;
}


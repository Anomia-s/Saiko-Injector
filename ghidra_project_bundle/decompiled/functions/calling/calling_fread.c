/**
 * Function: calling_fread
 * Address:  140bf2290
 * Signature: undefined calling_fread(void)
 * Body size: 197 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

size_t calling_fread(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  size_t sVar3;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (param_2 != (void *)0x0)) {
    sVar3 = fread(param_2,1,(longlong)param_3,*(FILE **)(param_1 + 0x40));
    if ((int)sVar3 != 0) {
      return sVar3;
    }
    iVar1 = ferror(*(FILE **)(param_1 + 0x40));
    if (iVar1 != 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bss_file.c",0x94,"file_read");
      DVar2 = GetLastError();
      FUN_140b91cc0(2,DVar2,"calling fread()");
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bss_file.c",0x96,"file_read");
      FUN_140b91cc0(0x20,0x80002,0);
      return 0xffffffff;
    }
  }
  return 0;
}


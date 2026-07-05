/**
 * Function: calling_fopens_s
 * Address:  140bf2840
 * Signature: undefined calling_fopens_s(void)
 * Body size: 315 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong calling_fopens_s(undefined8 param_1,char *param_2)

{
  DWORD DVar1;
  FILE *_File;
  char *pcVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  _File = (FILE *)FUN_140c6bfc0();
  pcVar2 = strchr(param_2,0x62);
  uVar6 = 0x11;
  if (pcVar2 != (char *)0x0) {
    uVar6 = 1;
  }
  if (_File == (FILE *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bss_file.c",0x43,"BIO_new_file");
    DVar1 = GetLastError();
    FUN_140b91cc0(2,DVar1,"calling fopen(%s, %s)",param_1,param_2);
    piVar3 = _errno();
    if ((*piVar3 == 2) || (piVar3 = _errno(), *piVar3 == 6)) {
      uVar5 = 0x80;
      uVar7 = 0x4b;
    }
    else {
      uVar5 = 0x80002;
      uVar7 = 0x4d;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bss_file.c",uVar7,"BIO_new_file");
    FUN_140b91cc0(0x20,uVar5,0);
    return 0;
  }
  lVar4 = FUN_140b73040(&DAT_141237f10);
  if (lVar4 == 0) {
    fclose(_File);
    return 0;
  }
  FUN_140b73030(lVar4,0);
  FUN_140b74190(lVar4,0x6a,uVar6,_File);
  return lVar4;
}


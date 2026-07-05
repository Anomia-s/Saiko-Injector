/**
 * Function: ssl_write
 * Address:  140b6b200
 * Signature: undefined ssl_write(void)
 * Body size: 108 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ssl_write(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_res20 [2];
  
  if (param_3 < 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_lib.c",0xa7b,"SSL_write");
    FUN_140b91cc0(0x14,0x10f,0);
    return -1;
  }
  iVar1 = ssl_write_internal(param_1,param_2,(longlong)param_3,0,local_res20);
  if (0 < iVar1) {
    iVar1 = local_res20[0];
  }
  return iVar1;
}


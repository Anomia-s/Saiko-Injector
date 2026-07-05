/**
 * Function: tls_construct_server_certificate
 * Address:  140bbedc0
 * Signature: undefined tls_construct_server_certificate(void)
 * Body size: 402 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool tls_construct_server_certificate(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x3d8);
  if (lVar1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_srvr.c",0xf00,"tls_construct_server_certificate");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
  }
  else {
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
        (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
      iVar2 = FUN_140c22430(param_2,0,1);
      if (iVar2 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_srvr.c",0xf09,"tls_construct_server_certificate");
        FUN_140ba3290(param_1,0x50,0xc0103,0);
        return false;
      }
    }
    if (*(char *)(param_1 + 0xb4a) == '\0') {
      iVar2 = FUN_140bb5c80(param_1,param_2,lVar1,0);
      return iVar2 != 0;
    }
    if (*(char *)(param_1 + 0xb4a) != '\x02') {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_srvr.c",0xf1a,"tls_construct_server_certificate");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
      return false;
    }
    iVar2 = FUN_140bb8bc0(param_1,param_2,lVar1);
    if (iVar2 != 0) {
      return true;
    }
  }
  return false;
}


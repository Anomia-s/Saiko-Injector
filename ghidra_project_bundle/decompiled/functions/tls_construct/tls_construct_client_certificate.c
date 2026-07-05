/**
 * Function: tls_construct_client_certificate
 * Address:  140c38920
 * Signature: undefined tls_construct_client_certificate(void)
 * Body size: 626 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_client_certificate(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
      (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
    if (*(longlong *)(param_1 + 0xba8) == 0) {
      iVar2 = FUN_140c22430(param_2,0,1);
      if (iVar2 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_clnt.c",0xeda,"tls_construct_client_certificate");
        FUN_140ba3290(param_1,0x50,0xc0103,0);
        return 0;
      }
    }
    else {
      iVar2 = FUN_140c22660(param_2,*(longlong *)(param_1 + 0xba8),*(undefined8 *)(param_1 + 0xbb0),
                            1);
      if (iVar2 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_clnt.c",0xede,"tls_construct_client_certificate");
        FUN_140ba3290(param_1,0x50,0xc0103,0);
        return 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x340) != 2) {
    uVar3 = **(undefined8 **)(param_1 + 0x878);
  }
  if (*(char *)(param_1 + 0xb48) == '\0') {
    iVar2 = FUN_140bb5c80(param_1,param_2,uVar3,0);
  }
  else {
    if (*(char *)(param_1 + 0xb48) != '\x02') {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_clnt.c",0xef2,"tls_construct_client_certificate");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
      return 0;
    }
    iVar2 = FUN_140bb8bc0(param_1,param_2,uVar3);
  }
  if (iVar2 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(*(int **)(param_1 + 0x18) + 0x36);
  if (((((((*(byte *)(lVar1 + 0x50) & 8) == 0) &&
         (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) &&
        ((iVar2 != 0x10000 && ((*(uint *)(param_1 + 0x160) & 0x2000) == 0)))) &&
       ((*(longlong *)(param_1 + 0x260) == 0 || (*(longlong *)(param_1 + 0x2e8) == 0)))) &&
      ((*(int *)(param_1 + 0xf0) != 0 || ((*(uint *)(param_1 + 0x9a8) >> 0x14 & 1) != 0)))) &&
     (iVar2 = (**(code **)(lVar1 + 0x10))(param_1,0x92), iVar2 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0xf06,"tls_construct_client_certificate");
    FUN_140ba3290(param_1,0xffffffff,0x6d,0);
    return 0;
  }
  return 1;
}


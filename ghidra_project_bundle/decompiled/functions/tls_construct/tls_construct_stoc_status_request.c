/**
 * Function: tls_construct_stoc_status_request
 * Address:  140cb8da0
 * Signature: undefined tls_construct_stoc_status_request(void)
 * Body size: 364 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_construct_stoc_status_request
          (longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,longlong param_5)

{
  int iVar1;
  
  if (((param_3 == 0x4000) || (*(int *)(param_1 + 0xa34) == 0)) ||
     (((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0 &&
      (((iVar1 = **(int **)(param_1 + 0x18), 0x303 < iVar1 && (iVar1 != 0x10000)) && (param_5 != 0))
      )))) {
    return 2;
  }
  iVar1 = FUN_140c22430(param_2,5,2);
  if ((iVar1 == 0) || (iVar1 = FUN_140c22090(param_2,2), iVar1 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\extensions_srvr.c",0x6df,"tls_construct_stoc_status_request");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    return 0;
  }
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
      (iVar1 = **(int **)(param_1 + 0x18), 0x303 < iVar1)) &&
     ((iVar1 != 0x10000 && (iVar1 = FUN_140bbdc20(param_1,param_2), iVar1 == 0)))) {
    return 0;
  }
  iVar1 = FUN_140c21e20(param_2);
  if (iVar1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\extensions_srvr.c",0x6ed,"tls_construct_stoc_status_request");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    return 0;
  }
  return 1;
}


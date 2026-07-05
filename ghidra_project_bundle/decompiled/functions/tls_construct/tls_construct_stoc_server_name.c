/**
 * Function: tls_construct_stoc_server_name
 * Address:  140cb8690
 * Signature: undefined tls_construct_stoc_server_name(void)
 * Body size: 220 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_server_name(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xb58) == 1) &&
     ((*(int *)(param_1 + 0x508) == 0 ||
      ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0 &&
        (iVar1 = **(int **)(param_1 + 0x18), 0x303 < iVar1)) && (iVar1 != 0x10000)))))) {
    iVar1 = FUN_140c22430(param_2,0,2);
    if (iVar1 != 0) {
      iVar1 = FUN_140c22430(param_2,0,2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\extensions_srvr.c",0x648,"tls_construct_stoc_server_name");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    return 0;
  }
  return 2;
}


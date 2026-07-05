/**
 * Function: tls_construct_ctos_client_cert_type
 * Address:  140cbf2e0
 * Signature: undefined tls_construct_ctos_client_cert_type(void)
 * Body size: 229 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_client_cert_type(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0xb49) = 0;
  if (*(longlong *)(param_1 + 0x1588) == 0) {
    return 2;
  }
  iVar1 = FUN_140c22430(param_2,0x13,2);
  if (iVar1 != 0) {
    iVar1 = FUN_140c22090(param_2,2);
    if (iVar1 != 0) {
      iVar1 = FUN_140c22660(param_2,*(undefined8 *)(param_1 + 0x1588),
                            *(undefined8 *)(param_1 + 0x1590),1);
      if (iVar1 != 0) {
        iVar1 = FUN_140c21e20(param_2);
        if (iVar1 != 0) {
          *(undefined1 *)(param_1 + 0xb49) = 1;
          return 1;
        }
      }
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\extensions_clnt.c",0x888,"tls_construct_ctos_client_cert_type");
  FUN_140ba3290(param_1,0x50,0xc0103,0);
  return 0;
}


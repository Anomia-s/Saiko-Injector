/**
 * Function: tls_construct_ctos_server_cert_type
 * Address:  140cbf540
 * Signature: undefined tls_construct_ctos_server_cert_type(void)
 * Body size: 229 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_server_cert_type(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0xb4b) = 0;
  if (*(longlong *)(param_1 + 0x1598) == 0) {
    return 2;
  }
  iVar1 = FUN_140c22430(param_2,0x14,2);
  if (iVar1 != 0) {
    iVar1 = FUN_140c22090(param_2,2);
    if (iVar1 != 0) {
      iVar1 = FUN_140c22660(param_2,*(undefined8 *)(param_1 + 0x1598),
                            *(undefined8 *)(param_1 + 0x15a0),1);
      if (iVar1 != 0) {
        iVar1 = FUN_140c21e20(param_2);
        if (iVar1 != 0) {
          *(undefined1 *)(param_1 + 0xb4b) = 1;
          return 1;
        }
      }
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\extensions_clnt.c",0x8bc,"tls_construct_ctos_server_cert_type");
  FUN_140ba3290(param_1,0x50,0xc0103,0);
  return 0;
}


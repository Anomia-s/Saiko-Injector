/**
 * Function: tls_parse_stoc_server_name
 * Address:  140cbd740
 * Signature: undefined tls_parse_stoc_server_name(void)
 * Body size: 369 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_server_name(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xa18) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\extensions_clnt.c",0x57b,"tls_parse_stoc_server_name");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    return 0;
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\extensions_clnt.c",0x580,"tls_parse_stoc_server_name");
    FUN_140ba3290(param_1,0x32,0x6e,0);
    return 0;
  }
  if (*(int *)(param_1 + 0x508) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x8f8);
    if (*(longlong *)(lVar1 + 0x318) != 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\extensions_clnt.c",0x586,"tls_parse_stoc_server_name");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
      return 0;
    }
    uVar2 = FUN_140b8c830(*(longlong *)(param_1 + 0xa18),"ssl\\statem\\extensions_clnt.c",0x589);
    *(undefined8 *)(lVar1 + 0x318) = uVar2;
    if (*(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x318) == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\extensions_clnt.c",0x58b,"tls_parse_stoc_server_name");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
      return 0;
    }
  }
  return 1;
}


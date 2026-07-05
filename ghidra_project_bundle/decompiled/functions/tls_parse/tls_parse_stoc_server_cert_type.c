/**
 * Function: tls_parse_stoc_server_cert_type
 * Address:  140cbf630
 * Signature: undefined tls_parse_stoc_server_cert_type(void)
 * Body size: 364 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_server_cert_type(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  void *pvVar2;
  
  if (param_2[1] != 1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\extensions_clnt.c",0x8ca,"tls_parse_stoc_server_cert_type");
    FUN_140ba3290(param_1,0x32,0x6e,0);
    return 0;
  }
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  param_2[1] = 0;
  if (*(char *)(param_1 + 0xb4b) != '\x01') {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\extensions_clnt.c",0x8d3,"tls_parse_stoc_server_cert_type");
    FUN_140ba3290(param_1,0x32,0x6e,0);
    return 0;
  }
  if (*(void **)(param_1 + 0x1598) == (void *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\extensions_clnt.c",0x8d8,"tls_parse_stoc_server_cert_type");
    FUN_140ba3290(param_1,0x32,0x6e,0);
    return 0;
  }
  pvVar2 = memchr(*(void **)(param_1 + 0x1598),(uint)bVar1,*(size_t *)(param_1 + 0x15a0));
  if (pvVar2 == (void *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\extensions_clnt.c",0x8dd,"tls_parse_stoc_server_cert_type");
    FUN_140ba3290(param_1,0x32,0x180,0);
    return 0;
  }
  *(byte *)(param_1 + 0xb4a) = bVar1;
  return 1;
}


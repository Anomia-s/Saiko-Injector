/**
 * Function: tls_parse_certificate_authorities
 * Address:  140c31420
 * Signature: undefined tls_parse_certificate_authorities(void)
 * Body size: 121 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_certificate_authorities(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_140bb7030();
  if (iVar1 != 0) {
    if (*(longlong *)(param_2 + 8) == 0) {
      return 1;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\extensions.c",0x52e,"tls_parse_certificate_authorities");
    FUN_140ba3290(param_1,0x32,0x6e,0);
  }
  return 0;
}


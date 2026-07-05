/**
 * Function: tls_parse_ctos_session_ticket
 * Address:  140cb5fb0
 * Signature: undefined tls_parse_ctos_session_ticket(void)
 * Body size: 124 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_session_ticket(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0xac8) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0xac8))
                      (*(undefined8 *)(param_1 + 0x40),*param_2,*(undefined4 *)(param_2 + 1),
                       *(undefined8 *)(param_1 + 0xad0));
    if (iVar1 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\extensions_srvr.c",0x110,"tls_parse_ctos_session_ticket");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
      return 0;
    }
  }
  return 1;
}


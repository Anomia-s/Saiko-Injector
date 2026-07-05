/**
 * Function: tls_parse_stoc_session_ticket
 * Address:  140cbdce0
 * Signature: undefined tls_parse_stoc_session_ticket(void)
 * Body size: 269 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_session_ticket(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(code **)(param_1 + 0xac8) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0xac8))
                      (*(undefined8 *)(param_1 + 0x40),*param_2,(int)param_2[1],
                       *(undefined8 *)(param_1 + 0xad0));
    if (iVar1 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\extensions_clnt.c",0x5c5,"tls_parse_stoc_session_ticket");
      uVar2 = 0x28;
      goto LAB_140cbdd3f;
    }
  }
  iVar1 = FUN_140bb09e0(param_1);
  if (iVar1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\extensions_clnt.c",0x5ca,"tls_parse_stoc_session_ticket");
    FUN_140ba3290(param_1,0x6e,0x6e,0);
    return 0;
  }
  if (param_2[1] == 0) {
    *(undefined4 *)(param_1 + 0xa58) = 1;
    return 1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\extensions_clnt.c",0x5ce,"tls_parse_stoc_session_ticket");
  uVar2 = 0x32;
LAB_140cbdd3f:
  FUN_140ba3290(param_1,uVar2,0x6e,0);
  return 0;
}


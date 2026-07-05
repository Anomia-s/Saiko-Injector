/**
 * Function: tls_construct_stoc_session_ticket
 * Address:  140cb8cd0
 * Signature: undefined tls_construct_stoc_session_ticket(void)
 * Body size: 196 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_stoc_session_ticket(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xa58) != 0) {
    iVar1 = FUN_140bb09e0();
    if (iVar1 != 0) {
      iVar1 = FUN_140c22430(param_2,0x23,2);
      if (iVar1 != 0) {
        iVar1 = FUN_140c22430(param_2,0,2);
        if (iVar1 != 0) {
          return 1;
        }
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\extensions_srvr.c",0x6c7,"tls_construct_stoc_session_ticket");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0xa58) = 0;
  return 2;
}


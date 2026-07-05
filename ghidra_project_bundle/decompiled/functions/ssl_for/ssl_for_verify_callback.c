/**
 * Function: ssl_for_verify_callback
 * Address:  140baa150
 * Signature: undefined ssl_for_verify_callback(void)
 * Body size: 75 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_for_verify_callback(void)

{
  DAT_14150faa0 = get_and_lock(5,0,"SSL for verify callback",0,0,0,0x140baa15a);
  DAT_1416ff9cc = ~DAT_14150faa0 >> 0x1f;
  return;
}


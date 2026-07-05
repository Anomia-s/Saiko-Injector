/**
 * Function: connectivity_connection_started
 * Address:  140cd17b0
 * Signature: undefined connectivity_connection_started(void)
 * Body size: 129 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void connectivity_connection_started(undefined8 param_1,undefined1 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_140cc8560(param_1,1,"connectivity","connection_started",
                        "connectivity:connection_started",0x140cd17c0);
  if (iVar1 != 0) {
    FUN_140cc87d0(param_1,"protocol",&DAT_1413a6494);
    FUN_140cc88e0(param_1,"dst_cid",param_2 + 1,*param_2);
    FUN_140cc8640(param_1);
  }
  return;
}


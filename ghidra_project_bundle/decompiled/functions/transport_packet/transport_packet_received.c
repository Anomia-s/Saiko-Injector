/**
 * Function: transport_packet_received
 * Address:  140cd1d90
 * Signature: undefined transport_packet_received(void)
 * Body size: 147 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void transport_packet_received
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_140cc8560(param_1,6,"transport","packet_received","transport:packet_received",
                        0x140cd1daa);
  if (iVar1 != 0) {
    FUN_140cd2810(param_1,param_2,param_3,param_4,param_5,param_6);
    FUN_140cc8640(param_1);
  }
  return;
}


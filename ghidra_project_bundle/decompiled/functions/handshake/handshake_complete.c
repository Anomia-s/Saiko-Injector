/**
 * Function: handshake_complete
 * Address:  140cd1840
 * Signature: undefined handshake_complete(void)
 * Body size: 199 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void handshake_complete(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_140cc8560(param_1,2,"connectivity","connection_state_updated",
                        "connectivity:connection_state_updated",0x140cd1855);
  if (iVar1 == 0) {
    return;
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      if (param_5 == 0) {
        pcVar2 = "handshake_complete";
        if (param_4 == 0) {
          pcVar2 = "attempted";
        }
      }
      else {
        pcVar2 = "handshake_confirmed";
      }
    }
    else if (param_3 == 2) {
      pcVar2 = "closing";
    }
    else if (param_3 == 3) {
      pcVar2 = "draining";
    }
    else {
      if (param_3 != 4) goto LAB_140cd18ef;
      pcVar2 = "closed";
    }
    FUN_140cc87d0(param_1,"state",pcVar2);
  }
LAB_140cd18ef:
  FUN_140cc8640(param_1);
  return;
}


/**
 * Function: handshake
 * Address:  140cd1e30
 * Signature: undefined handshake(void)
 * Body size: 82 bytes
 */


char * handshake(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return "initial";
  case 2:
    return "0RTT";
  case 3:
    return "handshake";
  case 4:
    return "retry";
  case 5:
    return "1RTT";
  case 6:
    return "version_negotiation";
  default:
    return "unknown";
  }
}


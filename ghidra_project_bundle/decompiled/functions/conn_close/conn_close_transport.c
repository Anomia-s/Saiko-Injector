/**
 * Function: conn_close_transport
 * Address:  140cca3c0
 * Signature: undefined conn_close_transport(void)
 * Body size: 280 bytes
 */


char * conn_close_transport(undefined8 param_1)

{
  switch(param_1) {
  case 0:
    return "PADDING";
  case 1:
    return "PING";
  case 2:
    return "ACK_WITHOUT_ECN";
  case 3:
    return "ACK_WITH_ECN";
  case 4:
    return "RESET_STREAM";
  case 5:
    return "STOP_SENDING";
  case 6:
    return "CRYPTO";
  case 7:
    return "NEW_TOKEN";
  case 8:
    return "STREAM";
  case 9:
    return "STREAM_FIN";
  case 10:
    return "STREAM_LEN";
  case 0xb:
    return "STREAM_LEN_FIN";
  case 0xc:
    return "STREAM_OFF";
  case 0xd:
    return "STREAM_OFF_FIN";
  case 0xe:
    return "STREAM_OFF_LEN";
  case 0xf:
    return "STREAM_OFF_LEN_FIN";
  case 0x10:
    return "MAX_DATA";
  case 0x11:
    return "MAX_STREAM_DATA";
  case 0x12:
    return "MAX_STREAMS_BIDI";
  case 0x13:
    return "MAX_STREAMS_UNI";
  case 0x14:
    return "DATA_BLOCKED";
  case 0x15:
    return "STREAM_DATA_BLOCKED";
  case 0x16:
    return "STREAMS_BLOCKED_BIDI";
  case 0x17:
    return "STREAMS_BLOCKED_UNI";
  case 0x18:
    return "NEW_CONN_ID";
  case 0x19:
    return "RETIRE_CONN_ID";
  case 0x1a:
    return "PATH_CHALLENGE";
  case 0x1b:
    return "PATH_RESPONSE";
  case 0x1c:
    return "CONN_CLOSE_TRANSPORT";
  case 0x1d:
    return "CONN_CLOSE_APP";
  case 0x1e:
    return "HANDSHAKE_DONE";
  default:
    return (char *)0x0;
  }
}


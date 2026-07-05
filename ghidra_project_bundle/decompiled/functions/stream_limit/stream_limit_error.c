/**
 * Function: stream_limit_error
 * Address:  140ccc4e0
 * Signature: undefined stream_limit_error(void)
 * Body size: 168 bytes
 */


char * stream_limit_error(undefined8 param_1)

{
  switch(param_1) {
  case 0:
    return "NO_ERROR";
  case 1:
    return "INTERNAL_ERROR";
  case 2:
    return "CONNECTION_REFUSED";
  case 3:
    return "FLOW_CONTROL_ERROR";
  case 4:
    return "STREAM_LIMIT_ERROR";
  case 5:
    return "STREAM_STATE_ERROR";
  case 6:
    return "FINAL_SIZE_ERROR";
  case 7:
    return "FRAME_ENCODING_ERROR";
  case 8:
    return "TRANSPORT_PARAMETER_ERROR";
  case 9:
    return "CONNECTION_ID_LIMIT_ERROR";
  case 10:
    return "PROTOCOL_VIOLATION";
  case 0xb:
    return "INVALID_TOKEN";
  case 0xc:
    return "APPLICATION_ERROR";
  case 0xd:
    return "CRYPTO_BUFFER_EXCEEDED";
  case 0xe:
    return "KEY_UPDATE_ERROR";
  case 0xf:
    return "AEAD_LIMIT_REACHED";
  case 0x10:
    return "NO_VIABLE_PATH";
  default:
    return (char *)0x0;
  }
}


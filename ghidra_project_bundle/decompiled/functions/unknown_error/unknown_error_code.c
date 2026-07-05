/**
 * Function: unknown_error_code
 * Address:  140399be0
 * Signature: undefined unknown_error_code(void)
 * Body size: 29 bytes
 */


char * unknown_error_code(int param_1)

{
  if (param_1 - 1U < 0x48) {
    return (&PTR_s_INVALID_OPERATION_141366fa4_4_140e0b610)[param_1 - 1U];
  }
  return "unknown error code";
}


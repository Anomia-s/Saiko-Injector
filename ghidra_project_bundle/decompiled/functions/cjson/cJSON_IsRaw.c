/**
 * Function: cJSON_IsRaw
 * Address:  140584d60
 * Signature: undefined cJSON_IsRaw(void)
 * Body size: 19 bytes
 */


bool cJSON_IsRaw(longlong param_1)

{
                    /* 0x584d60  58  cJSON_IsRaw */
  if (param_1 != 0) {
    return SBORROW1('\0',*(char *)(param_1 + 0x18));
  }
  return false;
}


/**
 * Function: cJSON_GetStringValue
 * Address:  140581050
 * Signature: undefined cJSON_GetStringValue(void)
 * Body size: 19 bytes
 */


undefined8 cJSON_GetStringValue(longlong param_1)

{
                    /* 0x581050  47  cJSON_GetStringValue */
  if ((param_1 != 0) && (*(char *)(param_1 + 0x18) == '\x10')) {
    return *(undefined8 *)(param_1 + 0x20);
  }
  return 0;
}


/**
 * Function: cJSON_IsString
 * Address:  140581070
 * Signature: undefined cJSON_IsString(void)
 * Body size: 15 bytes
 */


bool cJSON_IsString(longlong param_1)

{
  bool bVar1;
  
                    /* 0x581070  59  cJSON_IsString */
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(char *)(param_1 + 0x18) == '\x10';
  }
  return bVar1;
}


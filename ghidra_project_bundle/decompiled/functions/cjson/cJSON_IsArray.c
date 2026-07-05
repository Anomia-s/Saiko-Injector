/**
 * Function: cJSON_IsArray
 * Address:  140584d40
 * Signature: undefined cJSON_IsArray(void)
 * Body size: 15 bytes
 */


bool cJSON_IsArray(longlong param_1)

{
  bool bVar1;
  
                    /* 0x584d40  51  cJSON_IsArray */
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(char *)(param_1 + 0x18) == ' ';
  }
  return bVar1;
}


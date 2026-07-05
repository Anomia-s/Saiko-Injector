/**
 * Function: cJSON_IsNull
 * Address:  140584d30
 * Signature: undefined cJSON_IsNull(void)
 * Body size: 15 bytes
 */


bool cJSON_IsNull(longlong param_1)

{
  bool bVar1;
  
                    /* 0x584d30  55  cJSON_IsNull */
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(char *)(param_1 + 0x18) == '\x04';
  }
  return bVar1;
}


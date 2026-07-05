/**
 * Function: cJSON_IsInvalid
 * Address:  140584cf0
 * Signature: undefined cJSON_IsInvalid(void)
 * Body size: 15 bytes
 */


bool cJSON_IsInvalid(longlong param_1)

{
  bool bVar1;
  
                    /* 0x584cf0  54  cJSON_IsInvalid */
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(char *)(param_1 + 0x18) == '\0';
  }
  return bVar1;
}


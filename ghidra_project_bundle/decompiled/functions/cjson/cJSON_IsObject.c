/**
 * Function: cJSON_IsObject
 * Address:  140584d50
 * Signature: undefined cJSON_IsObject(void)
 * Body size: 15 bytes
 */


bool cJSON_IsObject(longlong param_1)

{
  bool bVar1;
  
                    /* 0x584d50  57  cJSON_IsObject */
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(char *)(param_1 + 0x18) == '@';
  }
  return bVar1;
}


/**
 * Function: cJSON_IsFalse
 * Address:  140584d00
 * Signature: undefined cJSON_IsFalse(void)
 * Body size: 15 bytes
 */


bool cJSON_IsFalse(longlong param_1)

{
  bool bVar1;
  
                    /* 0x584d00  53  cJSON_IsFalse */
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(char *)(param_1 + 0x18) == '\x01';
  }
  return bVar1;
}


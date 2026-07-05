/**
 * Function: cJSON_IsNumber
 * Address:  1405810a0
 * Signature: undefined cJSON_IsNumber(void)
 * Body size: 15 bytes
 */


bool cJSON_IsNumber(longlong param_1)

{
  bool bVar1;
  
                    /* 0x5810a0  56  cJSON_IsNumber */
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(char *)(param_1 + 0x18) == '\b';
  }
  return bVar1;
}


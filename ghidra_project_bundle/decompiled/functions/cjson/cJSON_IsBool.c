/**
 * Function: cJSON_IsBool
 * Address:  140584d20
 * Signature: undefined cJSON_IsBool(void)
 * Body size: 15 bytes
 */


bool cJSON_IsBool(longlong param_1)

{
  bool bVar1;
  
                    /* 0x584d20  52  cJSON_IsBool */
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = (*(byte *)(param_1 + 0x18) & 3) != 0;
  }
  return bVar1;
}


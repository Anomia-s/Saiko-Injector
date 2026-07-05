/**
 * Function: cJSON_IsTrue
 * Address:  140584d10
 * Signature: undefined cJSON_IsTrue(void)
 * Body size: 15 bytes
 */


bool cJSON_IsTrue(longlong param_1)

{
  bool bVar1;
  
                    /* 0x584d10  60  cJSON_IsTrue */
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(char *)(param_1 + 0x18) == '\x02';
  }
  return bVar1;
}


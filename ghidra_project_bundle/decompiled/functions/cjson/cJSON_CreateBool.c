/**
 * Function: cJSON_CreateBool
 * Address:  140583240
 * Signature: undefined cJSON_CreateBool(void)
 * Body size: 61 bytes
 */


void cJSON_CreateBool(int param_1)

{
  undefined8 *puVar1;
  
                    /* 0x583240  18  cJSON_CreateBool */
  puVar1 = (undefined8 *)(*(code *)PTR_malloc_14150b218)(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(uint *)(puVar1 + 3) = 2 - (uint)(param_1 == 0);
  }
  return;
}


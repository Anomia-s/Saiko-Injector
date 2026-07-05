/**
 * Function: cJSON_CreateArray
 * Address:  140583a70
 * Signature: undefined cJSON_CreateArray(void)
 * Body size: 50 bytes
 */


void cJSON_CreateArray(void)

{
  undefined8 *puVar1;
  
                    /* 0x583a70  16  cJSON_CreateArray */
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
    *(undefined4 *)(puVar1 + 3) = 0x20;
  }
  return;
}


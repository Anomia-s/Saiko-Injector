/**
 * Function: cJSON_CreateFalse
 * Address:  1405830e0
 * Signature: undefined cJSON_CreateFalse(void)
 * Body size: 50 bytes
 */


void cJSON_CreateFalse(void)

{
  undefined8 *puVar1;
  
                    /* 0x5830e0  20  cJSON_CreateFalse */
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
    *(undefined4 *)(puVar1 + 3) = 1;
  }
  return;
}


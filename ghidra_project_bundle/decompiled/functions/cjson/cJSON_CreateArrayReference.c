/**
 * Function: cJSON_CreateArrayReference
 * Address:  140584350
 * Signature: undefined cJSON_CreateArrayReference(void)
 * Body size: 59 bytes
 */


void cJSON_CreateArrayReference(undefined8 param_1)

{
  undefined8 *puVar1;
  
                    /* 0x584350  17  cJSON_CreateArrayReference */
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
    *(undefined4 *)(puVar1 + 3) = 0x120;
    puVar1[2] = param_1;
  }
  return;
}


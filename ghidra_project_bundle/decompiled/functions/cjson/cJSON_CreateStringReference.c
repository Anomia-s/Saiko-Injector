/**
 * Function: cJSON_CreateStringReference
 * Address:  1405842d0
 * Signature: undefined cJSON_CreateStringReference(void)
 * Body size: 59 bytes
 */


void cJSON_CreateStringReference(undefined8 param_1)

{
  undefined8 *puVar1;
  
                    /* 0x5842d0  30  cJSON_CreateStringReference */
  puVar1 = (undefined8 *)(*(code *)PTR_malloc_14150b218)(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 3) = 0x110;
    puVar1[4] = param_1;
  }
  return;
}


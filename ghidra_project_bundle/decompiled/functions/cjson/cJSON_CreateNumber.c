/**
 * Function: cJSON_CreateNumber
 * Address:  1405833d0
 * Signature: undefined cJSON_CreateNumber(void)
 * Body size: 115 bytes
 */


void cJSON_CreateNumber(double param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
                    /* 0x5833d0  24  cJSON_CreateNumber */
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
    *(undefined4 *)(puVar1 + 3) = 8;
    puVar1[6] = param_1;
    iVar2 = 0x7fffffff;
    if ((param_1 < 2147483647.0) && (iVar2 = -0x80000000, -2147483648.0 < param_1)) {
      iVar2 = (int)param_1;
    }
    *(int *)(puVar1 + 5) = iVar2;
  }
  return;
}


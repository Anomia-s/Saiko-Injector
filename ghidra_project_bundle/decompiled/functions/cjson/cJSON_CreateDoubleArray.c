/**
 * Function: cJSON_CreateDoubleArray
 * Address:  1405846a0
 * Signature: undefined cJSON_CreateDoubleArray(void)
 * Body size: 436 bytes
 */


undefined8 * cJSON_CreateDoubleArray(double *param_1,uint param_2)

{
  double dVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ulonglong uVar6;
  
                    /* 0x5846a0  19  cJSON_CreateDoubleArray */
  if ((param_1 == (double *)0x0 || (int)param_2 < 0) ||
     (puVar2 = (undefined8 *)(*(code *)PTR_malloc_14150b218)(0x40), puVar2 == (undefined8 *)0x0)) {
    return (undefined8 *)0x0;
  }
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 3) = 0x20;
  if (param_2 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    dVar1 = *param_1;
    puVar3 = (undefined8 *)(*(code *)PTR_malloc_14150b218)(0x40);
    if (puVar3 == (undefined8 *)0x0) {
LAB_14058482b:
      cJSON_Delete(puVar2);
      return (undefined8 *)0x0;
    }
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 3) = 8;
    puVar3[6] = dVar1;
    iVar5 = 0x7fffffff;
    if ((dVar1 < 2147483647.0) && (iVar5 = -0x80000000, -2147483648.0 < dVar1)) {
      iVar5 = (int)dVar1;
    }
    *(int *)(puVar3 + 5) = iVar5;
    puVar2[2] = puVar3;
    if (param_2 != 1) {
      uVar6 = 1;
      puVar4 = puVar3;
      do {
        dVar1 = param_1[uVar6];
        puVar3 = (undefined8 *)(*(code *)PTR_malloc_14150b218)(0x40);
        if (puVar3 == (undefined8 *)0x0) goto LAB_14058482b;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined4 *)(puVar3 + 3) = 8;
        puVar3[6] = dVar1;
        iVar5 = 0x7fffffff;
        if ((dVar1 < 2147483647.0) && (iVar5 = -0x80000000, -2147483648.0 < dVar1)) {
          iVar5 = (int)dVar1;
        }
        *(int *)(puVar3 + 5) = iVar5;
        *puVar4 = puVar3;
        puVar3[1] = puVar4;
        uVar6 = uVar6 + 1;
        puVar4 = puVar3;
      } while (param_2 != uVar6);
    }
  }
  if (puVar2[2] != 0) {
    *(undefined8 **)(puVar2[2] + 8) = puVar3;
    return puVar2;
  }
  return puVar2;
}


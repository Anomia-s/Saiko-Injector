/**
 * Function: cJSON_CreateFloatArray
 * Address:  1405844e0
 * Signature: undefined cJSON_CreateFloatArray(void)
 * Body size: 429 bytes
 */


undefined8 * cJSON_CreateFloatArray(float *param_1,uint param_2)

{
  float fVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ulonglong uVar6;
  
                    /* 0x5844e0  21  cJSON_CreateFloatArray */
  if ((param_1 == (float *)0x0 || (int)param_2 < 0) ||
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
    fVar1 = *param_1;
    puVar3 = (undefined8 *)(*(code *)PTR_malloc_14150b218)(0x40);
    if (puVar3 == (undefined8 *)0x0) {
LAB_14058466c:
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
    puVar3[6] = (double)fVar1;
    iVar5 = 0x7fffffff;
    if (((double)fVar1 < 2147483647.0) && (iVar5 = -0x80000000, -2.1474836e+09 < fVar1)) {
      iVar5 = (int)fVar1;
    }
    *(int *)(puVar3 + 5) = iVar5;
    puVar2[2] = puVar3;
    if (param_2 != 1) {
      uVar6 = 1;
      puVar4 = puVar3;
      do {
        fVar1 = param_1[uVar6];
        puVar3 = (undefined8 *)(*(code *)PTR_malloc_14150b218)(0x40);
        if (puVar3 == (undefined8 *)0x0) goto LAB_14058466c;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined4 *)(puVar3 + 3) = 8;
        puVar3[6] = (double)fVar1;
        iVar5 = 0x7fffffff;
        if (((double)fVar1 < 2147483647.0) && (iVar5 = -0x80000000, -2.1474836e+09 < fVar1)) {
          iVar5 = (int)fVar1;
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


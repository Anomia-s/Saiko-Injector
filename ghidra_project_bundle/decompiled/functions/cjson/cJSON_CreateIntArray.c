/**
 * Function: cJSON_CreateIntArray
 * Address:  140584390
 * Signature: undefined cJSON_CreateIntArray(void)
 * Body size: 329 bytes
 */


undefined8 * cJSON_CreateIntArray(int *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
                    /* 0x584390  22  cJSON_CreateIntArray */
  if ((param_1 == (int *)0x0 || (int)param_2 < 0) ||
     (puVar2 = (undefined8 *)(*(code *)PTR_malloc_14150b218)(0x40), puVar2 == (undefined8 *)0x0)) {
LAB_1405844c2:
    puVar2 = (undefined8 *)0x0;
  }
  else {
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
      iVar1 = *param_1;
      puVar3 = (undefined8 *)(*(code *)PTR_malloc_14150b218)(0x40);
      if (puVar3 == (undefined8 *)0x0) {
LAB_1405844ba:
        cJSON_Delete(puVar2);
        goto LAB_1405844c2;
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
      puVar3[6] = (double)iVar1;
      *(int *)(puVar3 + 5) = iVar1;
      puVar2[2] = puVar3;
      if (param_2 != 1) {
        uVar5 = 1;
        puVar4 = puVar3;
        do {
          iVar1 = param_1[uVar5];
          puVar3 = (undefined8 *)(*(code *)PTR_malloc_14150b218)(0x40);
          if (puVar3 == (undefined8 *)0x0) goto LAB_1405844ba;
          puVar3[2] = 0;
          puVar3[3] = 0;
          puVar3[6] = 0;
          puVar3[7] = 0;
          puVar3[4] = 0;
          puVar3[5] = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
          *(undefined4 *)(puVar3 + 3) = 8;
          puVar3[6] = (double)iVar1;
          *(int *)(puVar3 + 5) = iVar1;
          *puVar4 = puVar3;
          puVar3[1] = puVar4;
          uVar5 = uVar5 + 1;
          puVar4 = puVar3;
        } while (param_2 != uVar5);
      }
    }
    if (puVar2[2] != 0) {
      *(undefined8 **)(puVar2[2] + 8) = puVar3;
    }
  }
  return puVar2;
}


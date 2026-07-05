/**
 * Function: cJSON_AddStringToObject
 * Address:  140583450
 * Signature: undefined cJSON_AddStringToObject(void)
 * Body size: 336 bytes
 */


undefined8 * cJSON_AddStringToObject(undefined8 *param_1,char *param_2,char *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  size_t sVar4;
  void *pvVar5;
  
                    /* 0x583450  13  cJSON_AddStringToObject */
  puVar3 = (undefined8 *)(*(code *)PTR_malloc_14150b218)(0x40);
  if (puVar3 == (undefined8 *)0x0) {
LAB_1405834e0:
    puVar3 = (undefined8 *)0x0;
    if (param_1 == (undefined8 *)0x0) goto LAB_140583576;
  }
  else {
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 3) = 0x10;
    if (param_3 == (char *)0x0) {
LAB_1405834d0:
      puVar3[4] = 0;
      cJSON_Delete(puVar3);
      goto LAB_1405834e0;
    }
    sVar4 = strlen(param_3);
    pvVar5 = (void *)(*(code *)PTR_malloc_14150b218)(sVar4 + 1);
    if (pvVar5 == (void *)0x0) goto LAB_1405834d0;
    memcpy(pvVar5,param_3,sVar4 + 1);
    puVar3[4] = pvVar5;
    if (param_1 == puVar3) goto LAB_140583576;
  }
  if (((param_1 != (undefined8 *)0x0) && (param_2 != (char *)0x0)) && (puVar3 != (undefined8 *)0x0))
  {
    sVar4 = strlen(param_2);
    pvVar5 = (void *)(*(code *)PTR_malloc_14150b218)(sVar4 + 1);
    if (pvVar5 != (void *)0x0) {
      memcpy(pvVar5,param_2,sVar4 + 1);
      uVar1 = *(uint *)(puVar3 + 3);
      if (((uVar1 & 0x200) == 0) && (puVar3[7] != 0)) {
        (*(code *)PTR_free_14150b220)();
      }
      puVar3[7] = pvVar5;
      *(uint *)(puVar3 + 3) = uVar1 & 0xfffffdff;
      if (param_1[2] != 0) {
        puVar2 = *(undefined8 **)(param_1[2] + 8);
        if (puVar2 == (undefined8 *)0x0) {
          return puVar3;
        }
        *puVar2 = puVar3;
        puVar3[1] = puVar2;
        *(undefined8 **)(param_1[2] + 8) = puVar3;
        return puVar3;
      }
      param_1[2] = puVar3;
      puVar3[1] = puVar3;
      *puVar3 = 0;
      return puVar3;
    }
  }
LAB_140583576:
  cJSON_Delete(puVar3);
  return (undefined8 *)0x0;
}


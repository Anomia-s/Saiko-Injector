/**
 * Function: cJSON_CreateStringArray
 * Address:  140584860
 * Signature: undefined cJSON_CreateStringArray(void)
 * Body size: 442 bytes
 */


undefined8 * cJSON_CreateStringArray(undefined8 *param_1,uint param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  size_t sVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
                    /* 0x584860  29  cJSON_CreateStringArray */
  if ((param_1 != (undefined8 *)0x0 && -1 < (int)param_2) &&
     (puVar2 = (undefined8 *)(*(code *)PTR_malloc_14150b218)(0x40), puVar2 != (undefined8 *)0x0)) {
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
LAB_140584943:
      if (puVar2[2] == 0) {
        return puVar2;
      }
      *(undefined8 **)(puVar2[2] + 8) = puVar3;
      return puVar2;
    }
    pcVar1 = (char *)*param_1;
    puVar3 = (undefined8 *)(*(code *)PTR_malloc_14150b218)(0x40);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 3) = 0x10;
      if (pcVar1 != (char *)0x0) {
        sVar4 = strlen(pcVar1);
        pvVar5 = (void *)(*(code *)PTR_malloc_14150b218)(sVar4 + 1);
        if (pvVar5 != (void *)0x0) {
          memcpy(pvVar5,pcVar1,sVar4 + 1);
          puVar3[4] = pvVar5;
          puVar2[2] = puVar3;
          if (param_2 != 1) {
            uVar7 = 1;
            puVar6 = puVar3;
            do {
              pcVar1 = (char *)param_1[uVar7];
              puVar3 = (undefined8 *)(*(code *)PTR_malloc_14150b218)(0x40);
              if (puVar3 == (undefined8 *)0x0) goto LAB_1405849fa;
              puVar3[2] = 0;
              puVar3[3] = 0;
              puVar3[6] = 0;
              puVar3[7] = 0;
              puVar3[4] = 0;
              puVar3[5] = 0;
              *puVar3 = 0;
              puVar3[1] = 0;
              *(undefined4 *)(puVar3 + 3) = 0x10;
              if (pcVar1 == (char *)0x0) goto LAB_1405849ea;
              sVar4 = strlen(pcVar1);
              pvVar5 = (void *)(*(code *)PTR_malloc_14150b218)(sVar4 + 1);
              if (pvVar5 == (void *)0x0) goto LAB_1405849ea;
              memcpy(pvVar5,pcVar1,sVar4 + 1);
              puVar3[4] = pvVar5;
              *puVar6 = puVar3;
              puVar3[1] = puVar6;
              uVar7 = uVar7 + 1;
              puVar6 = puVar3;
            } while (param_2 != uVar7);
          }
          goto LAB_140584943;
        }
      }
LAB_1405849ea:
      puVar3[4] = 0;
      cJSON_Delete(puVar3);
    }
LAB_1405849fa:
    cJSON_Delete(puVar2);
  }
  return (undefined8 *)0x0;
}


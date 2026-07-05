/**
 * Function: cJSON_AddNumberToObject
 * Address:  140583280
 * Signature: undefined cJSON_AddNumberToObject(void)
 * Body size: 328 bytes
 */


undefined8 * cJSON_AddNumberToObject(undefined8 *param_1,char *param_2,double param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  size_t sVar4;
  void *_Dst;
  int iVar5;
  
                    /* 0x583280  10  cJSON_AddNumberToObject */
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
    *(undefined4 *)(puVar3 + 3) = 8;
    puVar3[6] = param_3;
    iVar5 = 0x7fffffff;
    if ((param_3 < 2147483647.0) && (iVar5 = -0x80000000, -2147483648.0 < param_3)) {
      iVar5 = (int)param_3;
    }
    *(int *)(puVar3 + 5) = iVar5;
    if (param_1 != puVar3 && (param_2 != (char *)0x0 && param_1 != (undefined8 *)0x0)) {
      sVar4 = strlen(param_2);
      _Dst = (void *)(*(code *)PTR_malloc_14150b218)(sVar4 + 1);
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,param_2,sVar4 + 1);
        uVar1 = *(uint *)(puVar3 + 3);
        if (((uVar1 & 0x200) == 0) && (puVar3[7] != 0)) {
          (*(code *)PTR_free_14150b220)();
        }
        puVar3[7] = _Dst;
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
  }
  cJSON_Delete(puVar3);
  return (undefined8 *)0x0;
}


/**
 * Function: cJSON_AddArrayToObject
 * Address:  140583960
 * Signature: undefined cJSON_AddArrayToObject(void)
 * Body size: 263 bytes
 */


undefined8 * cJSON_AddArrayToObject(undefined8 *param_1,char *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  size_t sVar4;
  void *_Dst;
  
                    /* 0x583960  1  cJSON_AddArrayToObject */
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
    *(undefined4 *)(puVar3 + 3) = 0x20;
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


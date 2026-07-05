/**
 * Function: cJSON_CreateString
 * Address:  1405835a0
 * Signature: undefined cJSON_CreateString(void)
 * Body size: 139 bytes
 */


undefined8 * cJSON_CreateString(char *param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  void *_Dst;
  
                    /* 0x5835a0  28  cJSON_CreateString */
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
    *(undefined4 *)(puVar1 + 3) = 0x10;
    if (param_1 != (char *)0x0) {
      sVar2 = strlen(param_1);
      _Dst = (void *)(*(code *)PTR_malloc_14150b218)(sVar2 + 1);
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,param_1,sVar2 + 1);
        puVar1[4] = _Dst;
        return puVar1;
      }
    }
    puVar1[4] = 0;
    cJSON_Delete(puVar1);
  }
  return (undefined8 *)0x0;
}


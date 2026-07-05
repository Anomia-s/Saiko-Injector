/**
 * Function: cJSON_AddItemToObject
 * Address:  1405829b0
 * Signature: undefined cJSON_AddItemToObject(void)
 * Body size: 221 bytes
 */


undefined8 cJSON_AddItemToObject(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  size_t sVar3;
  void *_Dst;
  undefined8 uVar4;
  
  uVar4 = 0;
                    /* 0x5829b0  7  cJSON_AddItemToObject */
  if ((((param_1 != param_3) && (param_1 != (undefined8 *)0x0)) && (param_2 != (char *)0x0)) &&
     (uVar4 = 0, param_3 != (undefined8 *)0x0)) {
    sVar3 = strlen(param_2);
    _Dst = (void *)(*(code *)PTR_malloc_14150b218)(sVar3 + 1);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,param_2,sVar3 + 1);
      uVar1 = *(uint *)(param_3 + 3);
      if (((uVar1 & 0x200) == 0) && (param_3[7] != 0)) {
        (*(code *)PTR_free_14150b220)();
      }
      param_3[7] = _Dst;
      *(uint *)(param_3 + 3) = uVar1 & 0xfffffdff;
      if (param_1[2] == 0) {
        param_1[2] = param_3;
        param_3[1] = param_3;
        *param_3 = 0;
        uVar4 = 1;
      }
      else {
        puVar2 = *(undefined8 **)(param_1[2] + 8);
        uVar4 = 1;
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = param_3;
          param_3[1] = puVar2;
          *(undefined8 **)(param_1[2] + 8) = param_3;
        }
      }
    }
  }
  return uVar4;
}


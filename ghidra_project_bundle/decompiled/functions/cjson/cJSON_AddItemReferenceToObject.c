/**
 * Function: cJSON_AddItemReferenceToObject
 * Address:  140582c00
 * Signature: undefined cJSON_AddItemReferenceToObject(void)
 * Body size: 303 bytes
 */


undefined8 cJSON_AddItemReferenceToObject(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  size_t sVar9;
  void *_Dst;
  undefined8 uVar10;
  
                    /* 0x582c00  5  cJSON_AddItemReferenceToObject */
  uVar10 = 0;
  if (param_3 != (undefined8 *)0x0 && (param_2 != (char *)0x0 && param_1 != (undefined8 *)0x0)) {
    puVar8 = (undefined8 *)(*(code *)PTR_malloc_14150b218)(0x40);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[3];
      uVar6 = param_3[4];
      uVar7 = param_3[5];
      puVar8[2] = param_3[2];
      puVar8[3] = uVar5;
      *puVar8 = uVar3;
      puVar8[1] = uVar4;
      puVar8[4] = uVar6;
      puVar8[5] = uVar7;
      puVar8[6] = param_3[6];
      *(byte *)((longlong)puVar8 + 0x19) = *(byte *)((longlong)puVar8 + 0x19) | 1;
      *puVar8 = 0;
      puVar8[1] = 0;
      if (param_1 != puVar8) {
        sVar9 = strlen(param_2);
        _Dst = (void *)(*(code *)PTR_malloc_14150b218)(sVar9 + 1);
        uVar10 = 0;
        if (_Dst != (void *)0x0) {
          memcpy(_Dst,param_2,sVar9 + 1);
          uVar1 = *(uint *)(puVar8 + 3);
          if (((uVar1 & 0x200) == 0) && (puVar8[7] != 0)) {
            (*(code *)PTR_free_14150b220)();
          }
          puVar8[7] = _Dst;
          *(uint *)(puVar8 + 3) = uVar1 & 0xfffffdff;
          if (param_1[2] == 0) {
            param_1[2] = puVar8;
            puVar8[1] = puVar8;
            *puVar8 = 0;
            uVar10 = 1;
          }
          else {
            puVar2 = *(undefined8 **)(param_1[2] + 8);
            uVar10 = 1;
            if (puVar2 != (undefined8 *)0x0) {
              *puVar2 = puVar8;
              puVar8[1] = puVar2;
              *(undefined8 **)(param_1[2] + 8) = puVar8;
            }
          }
        }
      }
    }
  }
  return uVar10;
}


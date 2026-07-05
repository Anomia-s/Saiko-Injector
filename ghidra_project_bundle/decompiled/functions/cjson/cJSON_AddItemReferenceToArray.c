/**
 * Function: cJSON_AddItemReferenceToArray
 * Address:  140582b40
 * Signature: undefined cJSON_AddItemReferenceToArray(void)
 * Body size: 181 bytes
 */


undefined8 cJSON_AddItemReferenceToArray(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
                    /* 0x582b40  4  cJSON_AddItemReferenceToArray */
  uVar8 = 0;
  if (param_2 != (undefined8 *)0x0 && param_1 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)(*(code *)PTR_malloc_14150b218)(0x40);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[3];
      uVar5 = param_2[4];
      uVar6 = param_2[5];
      puVar7[2] = param_2[2];
      puVar7[3] = uVar4;
      *puVar7 = uVar2;
      puVar7[1] = uVar3;
      puVar7[4] = uVar5;
      puVar7[5] = uVar6;
      puVar7[6] = param_2[6];
      *(byte *)((longlong)puVar7 + 0x19) = *(byte *)((longlong)puVar7 + 0x19) | 1;
      *puVar7 = 0;
      puVar7[1] = 0;
      if (param_1 != puVar7) {
        if (param_1[2] == 0) {
          param_1[2] = puVar7;
          puVar7[1] = puVar7;
          *puVar7 = 0;
          uVar8 = 1;
        }
        else {
          puVar1 = *(undefined8 **)(param_1[2] + 8);
          uVar8 = 1;
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = puVar7;
            puVar7[1] = puVar1;
            *(undefined8 **)(param_1[2] + 8) = puVar7;
          }
        }
      }
    }
  }
  return uVar8;
}


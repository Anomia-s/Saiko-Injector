/**
 * Function: cJSON_AddItemToObjectCS
 * Address:  140582a90
 * Signature: undefined cJSON_AddItemToObjectCS(void)
 * Body size: 176 bytes
 */


undefined8 cJSON_AddItemToObjectCS(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
                    /* 0x582a90  8  cJSON_AddItemToObjectCS */
  if ((((param_1 != param_3) && (param_1 != (undefined8 *)0x0)) && (param_2 != 0)) &&
     (uVar3 = 0, param_3 != (undefined8 *)0x0)) {
    uVar1 = *(uint *)(param_3 + 3);
    if (((uVar1 & 0x200) == 0) && (param_3[7] != 0)) {
      (*(code *)PTR_free_14150b220)(param_3[7]);
    }
    param_3[7] = param_2;
    *(uint *)(param_3 + 3) = uVar1 | 0x200;
    if (param_1[2] == 0) {
      param_1[2] = param_3;
      param_3[1] = param_3;
      *param_3 = 0;
      uVar3 = 1;
    }
    else {
      puVar2 = *(undefined8 **)(param_1[2] + 8);
      uVar3 = 1;
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = param_3;
        param_3[1] = puVar2;
        *(undefined8 **)(param_1[2] + 8) = param_3;
      }
    }
  }
  return uVar3;
}


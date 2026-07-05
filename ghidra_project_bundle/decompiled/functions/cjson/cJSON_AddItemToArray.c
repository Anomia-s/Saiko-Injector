/**
 * Function: cJSON_AddItemToArray
 * Address:  140582960
 * Signature: undefined cJSON_AddItemToArray(void)
 * Body size: 77 bytes
 */


undefined8 cJSON_AddItemToArray(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
                    /* 0x582960  6  cJSON_AddItemToArray */
  uVar2 = 0;
  if (((param_1 != param_2) && (param_1 != (undefined8 *)0x0)) && (param_2 != (undefined8 *)0x0)) {
    if (param_1[2] == 0) {
      param_1[2] = param_2;
      param_2[1] = param_2;
      *param_2 = 0;
      return 1;
    }
    puVar1 = *(undefined8 **)(param_1[2] + 8);
    uVar2 = 1;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_2;
      param_2[1] = puVar1;
      *(undefined8 **)(param_1[2] + 8) = param_2;
    }
  }
  return uVar2;
}


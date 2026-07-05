/**
 * Function: cJSON_Delete
 * Address:  1405811a0
 * Signature: undefined cJSON_Delete(void)
 * Body size: 135 bytes
 */


void cJSON_Delete(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  while (param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    uVar2 = *(uint *)(param_1 + 3);
    if (((uVar2 & 0x100) == 0) && (param_1[2] != 0)) {
      cJSON_Delete();
      uVar2 = *(uint *)(param_1 + 3);
    }
    if (((uVar2 & 0x100) == 0) && (param_1[4] != 0)) {
      (*(code *)PTR_free_14150b220)();
      param_1[4] = 0;
      uVar2 = *(uint *)(param_1 + 3);
    }
    if (((uVar2 & 0x200) == 0) && (param_1[7] != 0)) {
      (*(code *)PTR_free_14150b220)();
      param_1[7] = 0;
    }
    (*(code *)PTR_free_14150b220)(param_1);
    param_1 = puVar1;
  }
  return;
}


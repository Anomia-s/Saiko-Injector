/**
 * Function: cJSON_InsertItemInArray
 * Address:  140583f80
 * Signature: undefined cJSON_InsertItemInArray(void)
 * Body size: 182 bytes
 */


undefined8 cJSON_InsertItemInArray(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  bool bVar5;
  
                    /* 0x583f80  50  cJSON_InsertItemInArray */
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if ((int)param_2 < 0) {
    return 0;
  }
  if (param_3 == (undefined8 *)0x0) {
    return 0;
  }
  uVar4 = (ulonglong)param_2;
  plVar1 = param_1 + 2;
  plVar3 = plVar1;
  do {
    plVar3 = (longlong *)*plVar3;
    bVar5 = uVar4 != 0;
    uVar4 = uVar4 - 1;
    if (plVar3 == (longlong *)0x0) break;
  } while (bVar5);
  if (plVar3 == (longlong *)0x0) {
    if (param_1 == param_3) {
      return 0;
    }
    if (*plVar1 != 0) {
      puVar2 = *(undefined8 **)(*plVar1 + 8);
      if (puVar2 == (undefined8 *)0x0) {
        return 1;
      }
      *puVar2 = param_3;
      param_3[1] = puVar2;
      *(undefined8 **)(*plVar1 + 8) = param_3;
      return 1;
    }
    *plVar1 = (longlong)param_3;
    param_3[1] = param_3;
    *param_3 = 0;
  }
  else {
    if ((plVar3 != (longlong *)*plVar1) && (plVar3[1] == 0)) {
      return 0;
    }
    *param_3 = plVar3;
    param_3[1] = plVar3[1];
    plVar3[1] = (longlong)param_3;
    if (plVar3 == (longlong *)*plVar1) {
      *plVar1 = (longlong)param_3;
    }
    else {
      *(undefined8 **)param_3[1] = param_3;
    }
  }
  return 1;
}


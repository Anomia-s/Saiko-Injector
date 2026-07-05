/**
 * Function: cJSON_ReplaceItemViaPointer
 * Address:  140584040
 * Signature: undefined cJSON_ReplaceItemViaPointer(void)
 * Body size: 136 bytes
 */


undefined8 cJSON_ReplaceItemViaPointer(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
                    /* 0x584040  73  cJSON_ReplaceItemViaPointer */
  if ((((param_1 != 0) && (param_2 != (longlong *)0x0)) && (param_3 != (longlong *)0x0)) &&
     ((uVar2 = 0, *(longlong *)(param_1 + 0x10) != 0 && (uVar2 = 1, param_3 != param_2)))) {
    lVar1 = *param_2;
    *param_3 = lVar1;
    param_3[1] = param_2[1];
    if (lVar1 != 0) {
      *(longlong **)(lVar1 + 8) = param_3;
    }
    if (*(longlong **)(param_1 + 0x10) == param_2) {
      if ((longlong *)(*(longlong **)(param_1 + 0x10))[1] == param_2) {
        param_3[1] = (longlong)param_3;
      }
      *(longlong **)(param_1 + 0x10) = param_3;
    }
    else {
      if ((undefined8 *)param_3[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_3[1] = param_3;
      }
      if (*param_3 == 0) {
        *(longlong **)(*(longlong *)(param_1 + 0x10) + 8) = param_3;
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
    cJSON_Delete(param_2);
    uVar2 = 1;
  }
  return uVar2;
}


/**
 * Function: cJSON_DetachItemViaPointer
 * Address:  140583ab0
 * Signature: undefined cJSON_DetachItemViaPointer(void)
 * Body size: 124 bytes
 */


longlong * cJSON_DetachItemViaPointer(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
                    /* 0x583ab0  39  cJSON_DetachItemViaPointer */
  if (param_2 == (longlong *)0x0 || param_1 == 0) {
    return (longlong *)0x0;
  }
  if (param_2 == *(longlong **)(param_1 + 0x10)) {
    lVar1 = *param_2;
  }
  else {
    if ((longlong *)param_2[1] == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    lVar1 = *param_2;
    *(longlong *)param_2[1] = lVar1;
  }
  if (lVar1 != 0) {
    *(longlong *)(lVar1 + 8) = param_2[1];
  }
  if (param_2 == *(longlong **)(param_1 + 0x10)) {
    *(longlong *)(param_1 + 0x10) = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  if (*param_2 == 0) {
    (*(longlong **)(param_1 + 0x10))[1] = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}


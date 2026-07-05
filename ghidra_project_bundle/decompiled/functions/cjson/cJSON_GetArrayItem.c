/**
 * Function: cJSON_GetArrayItem
 * Address:  140582630
 * Signature: undefined cJSON_GetArrayItem(void)
 * Body size: 52 bytes
 */


longlong cJSON_GetArrayItem(longlong param_1,uint param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  bool bVar3;
  
                    /* 0x582630  41  cJSON_GetArrayItem */
  if (param_1 == 0 || (int)param_2 < 0) {
    return 0;
  }
  uVar2 = (ulonglong)param_2;
  plVar1 = (longlong *)(param_1 + 0x10);
  do {
    plVar1 = (longlong *)*plVar1;
    bVar3 = uVar2 != 0;
    uVar2 = uVar2 - 1;
    if (plVar1 == (longlong *)0x0) {
      return (longlong)plVar1;
    }
  } while (bVar3);
  return (longlong)plVar1;
}


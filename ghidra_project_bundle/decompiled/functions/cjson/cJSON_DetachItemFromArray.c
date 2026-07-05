/**
 * Function: cJSON_DetachItemFromArray
 * Address:  140583b30
 * Signature: undefined cJSON_DetachItemFromArray(void)
 * Body size: 161 bytes
 */


longlong * cJSON_DetachItemFromArray(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  
                    /* 0x583b30  36  cJSON_DetachItemFromArray */
  if (param_1 != 0 && -1 < (int)param_2) {
    uVar3 = (ulonglong)param_2;
    plVar2 = (longlong *)(param_1 + 0x10);
    plVar1 = plVar2;
    do {
      plVar1 = (longlong *)*plVar1;
      bVar6 = uVar3 != 0;
      uVar3 = uVar3 - 1;
      if (plVar1 == (longlong *)0x0) break;
    } while (bVar6);
    if (plVar1 != (longlong *)0x0) {
      if (plVar1 == (longlong *)*plVar2) {
        lVar5 = *plVar1;
      }
      else {
        if ((longlong *)plVar1[1] == (longlong *)0x0) {
          return (longlong *)0x0;
        }
        lVar5 = *plVar1;
        *(longlong *)plVar1[1] = lVar5;
      }
      if (lVar5 == 0) {
        plVar4 = (longlong *)*plVar2;
        if (plVar1 == plVar4) {
          lVar5 = 0;
          goto LAB_140583bc7;
        }
      }
      else {
        *(longlong *)(lVar5 + 8) = plVar1[1];
        lVar5 = *plVar1;
        plVar4 = (longlong *)*plVar2;
        if (plVar1 == plVar4) {
LAB_140583bc7:
          *plVar2 = lVar5;
          *plVar1 = 0;
          plVar1[1] = 0;
          return plVar1;
        }
        if (lVar5 != 0) {
          *plVar1 = 0;
          plVar1[1] = 0;
          return plVar1;
        }
      }
      plVar4[1] = plVar1[1];
      *plVar1 = 0;
      plVar1[1] = 0;
      return plVar1;
    }
  }
  return (longlong *)0x0;
}


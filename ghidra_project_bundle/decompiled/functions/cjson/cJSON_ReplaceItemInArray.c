/**
 * Function: cJSON_ReplaceItemInArray
 * Address:  1405840d0
 * Signature: undefined cJSON_ReplaceItemInArray(void)
 * Body size: 190 bytes
 */


undefined8 cJSON_ReplaceItemInArray(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  bool bVar6;
  
                    /* 0x5840d0  70  cJSON_ReplaceItemInArray */
  uVar2 = 0;
  if (param_1 != 0 && -1 < (int)param_2) {
    uVar5 = (ulonglong)param_2;
    plVar3 = (longlong *)(param_1 + 0x10);
    plVar4 = plVar3;
    do {
      plVar4 = (longlong *)*plVar4;
      bVar6 = uVar5 != 0;
      uVar5 = uVar5 - 1;
      if (plVar4 == (longlong *)0x0) break;
    } while (bVar6);
    if ((((plVar4 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) && (uVar2 = 0, *plVar3 != 0))
       && (uVar2 = 1, param_3 != plVar4)) {
      lVar1 = *plVar4;
      *param_3 = lVar1;
      param_3[1] = plVar4[1];
      if (lVar1 != 0) {
        *(longlong **)(lVar1 + 8) = param_3;
      }
      if ((longlong *)*plVar3 == plVar4) {
        if ((longlong *)((longlong *)*plVar3)[1] == plVar4) {
          param_3[1] = (longlong)param_3;
        }
        *plVar3 = (longlong)param_3;
      }
      else {
        if ((undefined8 *)param_3[1] != (undefined8 *)0x0) {
          *(undefined8 *)param_3[1] = param_3;
        }
        if (*param_3 == 0) {
          *(longlong **)(*plVar3 + 8) = param_3;
        }
      }
      *plVar4 = 0;
      plVar4[1] = 0;
      cJSON_Delete(plVar4);
      uVar2 = 1;
    }
  }
  return uVar2;
}


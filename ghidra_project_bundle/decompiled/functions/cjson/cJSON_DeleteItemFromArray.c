/**
 * Function: cJSON_DeleteItemFromArray
 * Address:  140583be0
 * Signature: undefined cJSON_DeleteItemFromArray(void)
 * Body size: 177 bytes
 */


void cJSON_DeleteItemFromArray(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
                    /* 0x583be0  33  cJSON_DeleteItemFromArray */
  if (param_1 != 0 && -1 < (int)param_2) {
    uVar3 = (ulonglong)param_2;
    plVar1 = (longlong *)(param_1 + 0x10);
    plVar2 = plVar1;
    do {
      plVar2 = (longlong *)*plVar2;
      bVar7 = uVar3 != 0;
      uVar3 = uVar3 - 1;
      if (plVar2 == (longlong *)0x0) break;
    } while (bVar7);
    if (plVar2 != (longlong *)0x0) {
      if (plVar2 == (longlong *)*plVar1) {
        lVar6 = *plVar2;
      }
      else {
        if ((longlong *)plVar2[1] == (longlong *)0x0) goto LAB_140583c56;
        lVar6 = *plVar2;
        *(longlong *)plVar2[1] = lVar6;
      }
      if (lVar6 == 0) {
        plVar4 = (longlong *)*plVar1;
        if (plVar2 == plVar4) {
          lVar6 = 0;
          goto LAB_140583c83;
        }
        lVar5 = plVar2[1];
      }
      else {
        lVar5 = plVar2[1];
        *(longlong *)(lVar6 + 8) = lVar5;
        lVar6 = *plVar2;
        plVar4 = (longlong *)*plVar1;
        if (plVar2 == plVar4) {
LAB_140583c83:
          *plVar1 = lVar6;
          *plVar2 = 0;
          plVar2[1] = 0;
          cJSON_Delete();
          return;
        }
        if (lVar6 != 0) {
          *plVar2 = 0;
          plVar2[1] = 0;
          cJSON_Delete();
          return;
        }
      }
      plVar4[1] = lVar5;
      *plVar2 = 0;
      plVar2[1] = 0;
      cJSON_Delete();
      return;
    }
  }
LAB_140583c56:
  cJSON_Delete(0);
  return;
}


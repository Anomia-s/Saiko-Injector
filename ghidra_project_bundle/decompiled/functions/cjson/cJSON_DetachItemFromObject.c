/**
 * Function: cJSON_DetachItemFromObject
 * Address:  140583ca0
 * Signature: undefined cJSON_DetachItemFromObject(void)
 * Body size: 291 bytes
 */


longlong * cJSON_DetachItemFromObject(longlong param_1,byte *param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  byte bVar6;
  longlong lVar7;
  
                    /* 0x583ca0  37  cJSON_DetachItemFromObject */
  if (param_2 != (byte *)0x0 && param_1 != 0) {
    plVar5 = *(longlong **)(param_1 + 0x10);
    for (plVar1 = plVar5; plVar1 != (longlong *)0x0; plVar1 = (longlong *)*plVar1) {
      pbVar2 = (byte *)plVar1[7];
      if (pbVar2 != (byte *)0x0) {
        if (param_2 != pbVar2) {
          bVar6 = *param_2;
          iVar3 = tolower((uint)bVar6);
          iVar4 = tolower((uint)*pbVar2);
          if (iVar3 == iVar4) {
            lVar7 = 1;
            do {
              if (bVar6 == 0) goto LAB_140583d54;
              bVar6 = param_2[lVar7];
              iVar3 = tolower((uint)bVar6);
              iVar4 = tolower((uint)pbVar2[lVar7]);
              lVar7 = lVar7 + 1;
            } while (iVar3 == iVar4);
          }
          if (iVar3 != iVar4) goto LAB_140583cf4;
        }
LAB_140583d54:
        if (plVar1 == plVar5) {
          lVar7 = *plVar1;
          if (lVar7 == 0) goto LAB_140583d96;
LAB_140583d6f:
          *(longlong *)(lVar7 + 8) = plVar1[1];
          lVar7 = *plVar1;
          plVar5 = *(longlong **)(param_1 + 0x10);
          if (plVar1 != plVar5) {
            if (lVar7 != 0) goto LAB_140583daf;
LAB_140583d9f:
            plVar5[1] = plVar1[1];
            goto LAB_140583daf;
          }
        }
        else {
          if ((longlong *)plVar1[1] == (longlong *)0x0) {
            return (longlong *)0x0;
          }
          lVar7 = *plVar1;
          *(longlong *)plVar1[1] = lVar7;
          if (lVar7 != 0) goto LAB_140583d6f;
LAB_140583d96:
          plVar5 = *(longlong **)(param_1 + 0x10);
          if (plVar1 != plVar5) goto LAB_140583d9f;
          lVar7 = 0;
        }
        *(longlong *)(param_1 + 0x10) = lVar7;
LAB_140583daf:
        *plVar1 = 0;
        plVar1[1] = 0;
        return plVar1;
      }
LAB_140583cf4:
    }
  }
  return (longlong *)0x0;
}


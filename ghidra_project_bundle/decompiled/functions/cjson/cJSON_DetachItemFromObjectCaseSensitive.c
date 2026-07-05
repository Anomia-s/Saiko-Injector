/**
 * Function: cJSON_DetachItemFromObjectCaseSensitive
 * Address:  140583dd0
 * Signature: undefined cJSON_DetachItemFromObjectCaseSensitive(void)
 * Body size: 185 bytes
 */


/* WARNING: Type propagation algorithm not settling */

longlong * cJSON_DetachItemFromObjectCaseSensitive(longlong param_1,char *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
                    /* 0x583dd0  38  cJSON_DetachItemFromObjectCaseSensitive */
  if (param_2 == (char *)0x0 || param_1 == 0) {
    return (longlong *)0x0;
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  plVar1 = plVar4;
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    if ((char *)plVar1[7] == (char *)0x0) {
      return (longlong *)0x0;
    }
    iVar2 = strcmp(param_2,(char *)plVar1[7]);
    if (iVar2 == 0) break;
    plVar1 = (longlong *)*plVar1;
  }
  if (plVar1 == plVar4) {
    lVar3 = *plVar1;
    if (lVar3 == 0) goto LAB_140583e65;
LAB_140583e42:
    *(longlong *)(lVar3 + 8) = plVar1[1];
    lVar3 = *plVar1;
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar1 != plVar4) {
      if (lVar3 != 0) goto LAB_140583e7e;
LAB_140583e6e:
      plVar4[1] = plVar1[1];
      goto LAB_140583e7e;
    }
  }
  else {
    if ((longlong *)plVar1[1] == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    lVar3 = *plVar1;
    *(longlong *)plVar1[1] = lVar3;
    if (lVar3 != 0) goto LAB_140583e42;
LAB_140583e65:
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar1 != plVar4) goto LAB_140583e6e;
    lVar3 = 0;
  }
  *(longlong *)(param_1 + 0x10) = lVar3;
LAB_140583e7e:
  *plVar1 = 0;
  plVar1[1] = 0;
  return plVar1;
}


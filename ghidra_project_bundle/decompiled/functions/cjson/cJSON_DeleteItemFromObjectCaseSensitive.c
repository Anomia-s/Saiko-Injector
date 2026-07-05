/**
 * Function: cJSON_DeleteItemFromObjectCaseSensitive
 * Address:  140583eb0
 * Signature: undefined cJSON_DeleteItemFromObjectCaseSensitive(void)
 * Body size: 193 bytes
 */


void cJSON_DeleteItemFromObjectCaseSensitive(longlong param_1,char *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
                    /* 0x583eb0  35  cJSON_DeleteItemFromObjectCaseSensitive */
  if (param_2 == (char *)0x0 || param_1 == 0) {
LAB_140583efd:
    plVar5 = (longlong *)0x0;
LAB_140583eff:
    cJSON_Delete(plVar5);
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  plVar5 = plVar1;
  while( true ) {
    if ((plVar5 == (longlong *)0x0) || ((char *)plVar5[7] == (char *)0x0)) goto LAB_140583efd;
    iVar3 = strcmp(param_2,(char *)plVar5[7]);
    if (iVar3 == 0) break;
    plVar5 = (longlong *)*plVar5;
  }
  if (plVar5 == plVar1) {
    lVar4 = *plVar5;
    if (lVar4 == 0) goto LAB_140583f50;
LAB_140583f29:
    lVar2 = plVar5[1];
    *(longlong *)(lVar4 + 8) = lVar2;
    lVar4 = *plVar5;
    if (plVar5 == *(longlong **)(param_1 + 0x10)) {
LAB_140583f65:
      *(longlong *)(param_1 + 0x10) = lVar4;
    }
    else if (lVar4 == 0) {
      (*(longlong **)(param_1 + 0x10))[1] = lVar2;
    }
  }
  else {
    if ((longlong *)plVar5[1] == (longlong *)0x0) goto LAB_140583efd;
    lVar4 = *plVar5;
    *(longlong *)plVar5[1] = lVar4;
    if (lVar4 != 0) goto LAB_140583f29;
LAB_140583f50:
    if (plVar5 == *(longlong **)(param_1 + 0x10)) {
      lVar4 = 0;
      goto LAB_140583f65;
    }
    (*(longlong **)(param_1 + 0x10))[1] = plVar5[1];
  }
  *plVar5 = 0;
  plVar5[1] = 0;
  goto LAB_140583eff;
}


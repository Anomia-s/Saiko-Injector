/**
 * Function: cJSON_GetArraySize
 * Address:  140582610
 * Signature: undefined cJSON_GetArraySize(void)
 * Body size: 30 bytes
 */


int cJSON_GetArraySize(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
                    /* 0x582610  42  cJSON_GetArraySize */
  if (param_1 != 0) {
    plVar2 = (longlong *)(param_1 + 0x10);
    iVar1 = -1;
    do {
      plVar2 = (longlong *)*plVar2;
      iVar1 = iVar1 + 1;
    } while (plVar2 != (longlong *)0x0);
    return iVar1;
  }
  return 0;
}


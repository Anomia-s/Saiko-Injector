/**
 * Function: cJSON_GetObjectItemCaseSensitive
 * Address:  140582850
 * Signature: undefined cJSON_GetObjectItemCaseSensitive(void)
 * Body size: 79 bytes
 */


undefined8 * cJSON_GetObjectItemCaseSensitive(longlong param_1,char *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
                    /* 0x582850  46  cJSON_GetObjectItemCaseSensitive */
  if (param_2 != (char *)0x0 && param_1 != 0) {
    for (puVar1 = *(undefined8 **)(param_1 + 0x10);
        (puVar1 != (undefined8 *)0x0 && ((char *)puVar1[7] != (char *)0x0));
        puVar1 = (undefined8 *)*puVar1) {
      iVar2 = strcmp(param_2,(char *)puVar1[7]);
      if (iVar2 == 0) {
        return puVar1;
      }
    }
  }
  return (undefined8 *)0x0;
}


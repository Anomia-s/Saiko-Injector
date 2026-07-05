/**
 * Function: cJSON_Parse
 * Address:  140581a00
 * Signature: undefined cJSON_Parse(void)
 * Body size: 49 bytes
 */


undefined8 cJSON_Parse(char *param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  
                    /* 0x581a00  62  cJSON_Parse */
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    uVar2 = cJSON_ParseWithLengthOpts(param_1,sVar1 + 1,0,0);
    return uVar2;
  }
  return 0;
}


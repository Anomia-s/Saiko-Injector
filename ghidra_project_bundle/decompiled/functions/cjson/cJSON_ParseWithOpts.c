/**
 * Function: cJSON_ParseWithOpts
 * Address:  140581360
 * Signature: undefined cJSON_ParseWithOpts(void)
 * Body size: 61 bytes
 */


undefined8 cJSON_ParseWithOpts(char *param_1,undefined8 param_2,undefined4 param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  
                    /* 0x581360  65  cJSON_ParseWithOpts */
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    uVar2 = cJSON_ParseWithLengthOpts(param_1,sVar1 + 1,param_2,param_3);
    return uVar2;
  }
  return 0;
}


/**
 * Function: cJSON_GetNumberValue
 * Address:  140581080
 * Signature: undefined cJSON_GetNumberValue(void)
 * Body size: 25 bytes
 */


undefined8 cJSON_GetNumberValue(longlong param_1)

{
  undefined8 uVar1;
  
                    /* 0x581080  44  cJSON_GetNumberValue */
  uVar1 = 0x7ff8000000000000;
  if ((param_1 != 0) && (*(char *)(param_1 + 0x18) == '\b')) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
  }
  return uVar1;
}


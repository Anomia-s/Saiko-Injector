/**
 * Function: cJSON_SetNumberHelper
 * Address:  140581230
 * Signature: undefined cJSON_SetNumberHelper(void)
 * Body size: 65 bytes
 */


double cJSON_SetNumberHelper(longlong param_1,double param_2)

{
  int iVar1;
  
                    /* 0x581230  74  cJSON_SetNumberHelper */
  if (param_1 != 0) {
    iVar1 = 0x7fffffff;
    if ((param_2 < 2147483647.0) && (iVar1 = -0x80000000, -2147483648.0 < param_2)) {
      iVar1 = (int)param_2;
    }
    *(int *)(param_1 + 0x28) = iVar1;
    *(double *)(param_1 + 0x30) = param_2;
    return param_2;
  }
  return NAN;
}


/**
 * Function: uint8_index_type_is_not_supported_by_the_curr
 * Address:  140714db0
 * Signature: undefined uint8_index_type_is_not_supported_by_the_curr(void)
 * Body size: 383 bytes
 */


undefined8
uint8_index_type_is_not_supported_by_the_curr(undefined8 param_1,undefined1 param_2,char param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  switch(param_2) {
  case 0:
    goto switchD_140714ddd_caseD_0;
  case 1:
    if (param_3 != '\0') {
      return 0x3b9ed528;
    }
    local_30 = 0;
    local_38 = (char *)FUN_140b65d30(0x60);
    local_28 = 0x53;
    local_20 = 0x5f;
    builtin_strncpy(local_38,
                    "UINT8 index type is not supported by the current ray tracing geometry configuration"
                    ,0x54);
    FUN_140533460(param_1,&local_38);
    break;
  default:
    local_30 = 0;
    local_38 = (char *)FUN_140b65d30(0x30);
    local_28 = 0x2b;
    local_20 = 0x2f;
    builtin_strncpy(local_38,"Unsupported ray tracing geometry index type",0x2c);
    FUN_140533460(param_1,&local_38);
    break;
  case 9:
    return 0;
  case 0x21:
    return 1;
  }
  if (0xf < local_20) {
    uVar1 = local_20 + 1;
    pcVar2 = local_38;
    if (0xfff < uVar1) {
      pcVar2 = *(char **)(local_38 + -8);
      if ((char *)0x1f < local_38 + (-8 - (longlong)pcVar2)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar1 = local_20 + 0x28;
    }
    thunk_FUN_140b68ba8(pcVar2,uVar1);
  }
switchD_140714ddd_caseD_0:
  return 0x3b9d4e88;
}


/**
 * Function: format_result_too_large
 * Address:  1406ad540
 * Signature: undefined format_result_too_large(void)
 * Body size: 275 bytes
 */


undefined8 format_result_too_large(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  int *local_68;
  int local_58;
  int local_54;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  iVar2 = 0;
  local_50 = (char *)FUN_1406b7610(param_1,1,0);
  local_40 = 0x100000001;
  local_48 = param_1;
  if (*local_50 != '\0') {
    iVar2 = 0;
    do {
      local_68 = &local_58;
      iVar1 = format_asks_for_alignment_not_power_of_2
                        (&local_48,(longlong)iVar2,&local_50,&local_54);
      if (0xfffffffd < iVar1 - 6U) {
                    /* WARNING: Subroutine does not return */
        invalid_argument_d_s(param_1,1,"variable-length format");
      }
      if (0x40000000 - (local_54 + local_58) < iVar2) {
                    /* WARNING: Subroutine does not return */
        invalid_argument_d_s(param_1,1,"format result too large");
      }
      iVar2 = iVar2 + local_54 + local_58;
    } while (*local_50 != '\0');
  }
  FUN_140474150(param_1,iVar2);
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_88)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_88);
}


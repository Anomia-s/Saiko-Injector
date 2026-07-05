/**
 * Function: attempt_to_index_vector_with_s
 * Address:  1406b40b0
 * Signature: undefined attempt_to_index_vector_with_s(void)
 * Body size: 168 bytes
 */


undefined8 attempt_to_index_vector_with_s(undefined8 param_1)

{
  longlong lVar1;
  char *pcVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1406b7990(param_1,1);
  local_20 = 0;
  pcVar2 = (char *)FUN_1406b7610(param_1,2,&local_20);
  if ((local_20 == 1) && (uVar3 = ((int)*pcVar2 | 0x20U) - 0x78, uVar3 < 3)) {
    FUN_140474130(param_1,(double)*(float *)(lVar1 + (ulonglong)uVar3 * 4));
    if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_48)) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_18 ^ (ulonglong)auStack_48);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1406b7390(param_1,"attempt to index vector with \'%s\'",pcVar2);
}


/**
 * Function: resulting_file_length_did_not_exactly_match_t
 * Address:  140459a80
 * Signature: undefined resulting_file_length_did_not_exactly_match_t(void)
 * Body size: 210 bytes
 */


ulonglong resulting_file_length_did_not_exactly_match_t
                    (undefined1 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  local_30 = 0;
  puVar5 = &DAT_1413a2ad6;
  if (param_1 != (undefined1 *)0x0) {
    puVar5 = param_1;
  }
  FUN_1400fd7b0(&local_30,"%s%s",puVar5,param_2);
  lVar1 = local_30;
  if (local_30 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = parameter_s_is_invalid(local_30,&DAT_14135eea8);
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      lVar3 = parameter_s_is_invalid(lVar2,param_3,param_4);
      uVar4 = CONCAT71((int7)((ulonglong)param_4 >> 8),lVar3 == param_4);
      if (lVar3 != param_4) {
        FUN_1400fbed0("Resulting file length did not exactly match the source length");
      }
      FUN_1400f9140(lVar2);
    }
    FUN_140160cf0(lVar1);
  }
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_58)) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_58);
}


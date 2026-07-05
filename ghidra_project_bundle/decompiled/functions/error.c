/**
 * Function: error
 * Address:  1403ccfb0
 * Signature: undefined error(void)
 * Body size: 149 bytes
 */


void error(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  param_1 = param_1 + 8;
  local_res18 = param_3;
  local_res20 = param_4;
  local_28 = &local_res18;
  FUN_1403b7a10(param_1,"{\"error\":\"",10);
  thunk_FUN_1403b7800(param_1,param_2,&local_res18);
  FUN_1403b7a10(param_1,&DAT_141323196,2);
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_48);
}


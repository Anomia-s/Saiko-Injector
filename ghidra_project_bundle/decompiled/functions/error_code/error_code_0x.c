/**
 * Function: error_code_0x
 * Address:  140c75e70
 * Signature: undefined error_code_0x(void)
 * Body size: 88 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void error_code_0x(undefined4 param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x140c75e7a;
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  FUN_140c07aa0(local_28,10,&DAT_1413a6620,param_1);
  FUN_140b92440(2,"Error code= 0x",local_28);
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_48);
}


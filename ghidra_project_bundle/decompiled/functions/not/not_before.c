/**
 * Function: not_before
 * Address:  140c65b30
 * Signature: undefined not_before(void)
 * Body size: 175 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 not_before(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_140c078a0(param_3,&DAT_1413a5ce4,param_4,&DAT_1413a2ad6);
  if (*param_2 != 0) {
    FUN_140b73860(param_3,"Not Before: ",0xc);
    FUN_140c4d4c0(param_3,*param_2);
    if (param_2[1] == 0) {
      return 1;
    }
    FUN_140b73860(param_3,&DAT_1413a7198,2);
  }
  if (param_2[1] != 0) {
    FUN_140b73860(param_3,"Not After: ",0xb);
    FUN_140c4d4c0(param_3,param_2[1]);
  }
  return 1;
}


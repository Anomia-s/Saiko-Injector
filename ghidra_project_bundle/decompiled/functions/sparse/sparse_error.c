/**
 * Function: sparse_error
 * Address:  140c30020
 * Signature: undefined sparse_error(void)
 * Body size: 142 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
sparse_error(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
            undefined4 param_5,int param_6)

{
  undefined8 uVar1;
  char *pcVar2;
  
  param_4 = param_4 & 0xf0000;
  if (param_4 == 0) {
    return 0;
  }
  if (param_4 == 0x10000) {
    pcVar2 = "%*s<Parse Error>";
    if (param_6 == 0) {
      pcVar2 = "%*s<Not Supported>";
    }
    FUN_140c078a0(param_1,pcVar2,param_5,&DAT_1413a2ad6);
  }
  else {
    if (param_4 == 0x20000) {
      uVar1 = FUN_140ca5fc0();
      return uVar1;
    }
    if (param_4 == 0x30000) {
      uVar1 = FUN_140c62210();
      return uVar1;
    }
  }
  return 1;
}


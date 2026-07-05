/**
 * Function: scrltime
 * Address:  140c66f60
 * Signature: undefined scrltime(void)
 * Body size: 338 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool scrltime(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*param_2 != 0) {
    iVar1 = FUN_140c078a0(param_3,"%*scrlUrl: ",param_4,&DAT_1413a2ad6);
    if (iVar1 < 1) {
      return false;
    }
    iVar1 = FUN_140bdf280(param_3,*param_2);
    if (iVar1 == 0) {
      return false;
    }
    iVar1 = FUN_140b73860(param_3,&DAT_1413a7288,1);
    if (iVar1 < 1) {
      return false;
    }
  }
  if (param_2[1] != 0) {
    iVar1 = FUN_140c078a0(param_3,"%*scrlNum: ",param_4,&DAT_1413a2ad6);
    if (iVar1 < 1) {
      return false;
    }
    iVar1 = FUN_140cdc130(param_3,param_2[1]);
    if (iVar1 < 1) {
      return false;
    }
    iVar1 = FUN_140b73860(param_3,&DAT_1413a7288,1);
    if (iVar1 < 1) {
      return false;
    }
  }
  if (param_2[2] == 0) {
    return true;
  }
  iVar1 = FUN_140c078a0(param_3,"%*scrlTime: ",param_4,&DAT_1413a2ad6);
  if ((0 < iVar1) && (iVar1 = FUN_140c4d4c0(param_3,param_2[2]), iVar1 != 0)) {
    iVar1 = FUN_140b73860(param_3,&DAT_1413a7288,1);
    return 0 < iVar1;
  }
  return false;
}


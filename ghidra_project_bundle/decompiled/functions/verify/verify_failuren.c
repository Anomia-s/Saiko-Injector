/**
 * Function: verify_failuren
 * Address:  140d73190
 * Signature: undefined verify_failuren(void)
 * Body size: 382 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 verify_failuren(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char *_Str1;
  undefined8 uVar4;
  
  iVar1 = FUN_140b78ee0(param_2);
  if (iVar1 == 1) {
    pcVar3 = (char *)FUN_140b76c30(param_2);
    fputs(pcVar3,DAT_141704230);
    fflush(DAT_141704230);
    uVar2 = FUN_140b76080(param_2);
    uVar4 = 1;
  }
  else {
    if (iVar1 == 2) {
      uVar4 = FUN_140b76c30(param_2);
      FUN_14002b100(DAT_141704230,"Verifying - %s",uVar4);
      fflush(DAT_141704230);
      uVar2 = FUN_140b76080(param_2);
      uVar4 = uopenssl_win32_utf8(param_1,param_2,uVar2 & 1,1);
      if ((int)uVar4 < 1) {
        return uVar4;
      }
      pcVar3 = (char *)FUN_140ce04e0(param_2);
      _Str1 = (char *)FUN_140ce04c0(param_2);
      iVar1 = strcmp(_Str1,pcVar3);
      if (iVar1 == 0) {
        return 1;
      }
      FUN_14002b100(DAT_141704230,"Verify failure\n");
      fflush(DAT_141704230);
      return 0;
    }
    if (iVar1 != 3) {
      return 1;
    }
    pcVar3 = (char *)FUN_140b76c30(param_2);
    fputs(pcVar3,DAT_141704230);
    pcVar3 = (char *)FUN_140ce04b0(param_2);
    fputs(pcVar3,DAT_141704230);
    fflush(DAT_141704230);
    uVar2 = FUN_140b76080(param_2);
    uVar4 = 0;
  }
  uVar4 = uopenssl_win32_utf8(param_1,param_2,uVar2 & 1,uVar4);
  return uVar4;
}


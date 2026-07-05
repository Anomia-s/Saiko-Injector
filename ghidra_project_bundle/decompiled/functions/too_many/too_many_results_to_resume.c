/**
 * Function: too_many_results_to_resume
 * Address:  1406a9100
 * Signature: undefined too_many_results_to_resume(void)
 * Body size: 241 bytes
 */


ulonglong too_many_results_to_resume(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = FUN_140473f90(param_1,0xffffd8ed);
  if (*(byte *)(lVar3 + 3) == 6) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x510);
    if (lVar1 != 0) {
      FUN_14077a0c0(param_1,lVar1,lVar3);
    }
    uVar4 = attempt_to_break_across_metamethod_c_call_bou(param_1);
    return uVar4;
  }
  if (*(byte *)(lVar3 + 3) < 2) {
    uVar4 = (ulonglong)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10)) >> 4;
    iVar2 = FUN_140472ef0(param_1,(int)uVar4 + 1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1406b7390(param_1,"too many results to resume");
    }
    FUN_140473010(lVar3,param_1,uVar4 & 0xffffffff);
    if (-1 < (int)uVar4) {
      return uVar4 & 0xffffffff;
    }
  }
  else {
    FUN_140472fc0(param_1,2);
    FUN_140473010(lVar3,param_1,1);
  }
  iVar2 = FUN_140473710(param_1,0xffffffff);
  if (iVar2 != 0) {
    FUN_1406b74f0(param_1,1);
    FUN_1404732f0(param_1,0xfffffffe);
    FUN_140475430(param_1,2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140475380(param_1);
}


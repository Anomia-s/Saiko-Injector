/**
 * Function: cannot_resume_s_coroutine
 * Address:  1406a92b0
 * Signature: undefined cannot_resume_s_coroutine(void)
 * Body size: 284 bytes
 */


ulonglong cannot_resume_s_coroutine(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(char *)(param_2 + 3) == '\x01') {
LAB_1406a92da:
    if (param_3 == 0) {
      if (0x1f400 < *(longlong *)(param_2 + 8) - *(longlong *)(param_2 + 0x10)) goto LAB_1406a93ae;
    }
    else {
      iVar1 = FUN_140472ef0(param_2,param_3);
      if (iVar1 == 0) {
LAB_1406a93ae:
                    /* WARNING: Subroutine does not return */
        FUN_1406b7390(param_1,"too many arguments to resume");
      }
      FUN_140473010(param_1,param_2,param_3);
    }
    *(undefined1 *)(param_2 + 6) = *(undefined1 *)(param_1 + 6);
    uVar2 = FUN_1406b9660(param_2,param_1,param_3);
    if (uVar2 < 2) {
      uVar3 = (ulonglong)(*(longlong *)(param_2 + 8) - *(longlong *)(param_2 + 0x10)) >> 4;
      iVar1 = (int)uVar3;
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        if (0x13 < iVar1) {
          iVar1 = FUN_140472ef0(param_1,iVar1 + 1);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1406b7390(param_1,"too many results to resume");
          }
        }
        FUN_140473010(param_2,param_1,uVar3 & 0xffffffff);
      }
      goto LAB_1406a93a4;
    }
    uVar3 = 0xfffffffe;
    if (uVar2 == 6) goto LAB_1406a93a4;
    FUN_140473010(param_2,param_1,1);
  }
  else {
    iVar1 = FUN_1404751e0(param_1,param_2);
    if (iVar1 == 1) goto LAB_1406a92da;
    FUN_140474310(param_1,"cannot resume %s coroutine",
                  (&PTR_s_running_141348a15_0xe_141217fe0)[iVar1]);
  }
  uVar3 = 0xffffffff;
LAB_1406a93a4:
  return uVar3 & 0xffffffff;
}


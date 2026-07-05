/**
 * Function: cannot_close_s_coroutine
 * Address:  1406a9000
 * Signature: undefined cannot_close_s_coroutine(void)
 * Body size: 241 bytes
 */


undefined8 cannot_close_s_coroutine(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_140473f90(param_1,1);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    invalid_argument_d_s_expected_got_s(param_1,1,"thread");
  }
  iVar1 = FUN_1404751e0(param_1,lVar2);
  if ((1 < iVar1 - 3U) && (iVar1 != 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_1406b7390(param_1,"cannot close %s coroutine",
                  (&PTR_s_running_141348a15_0xe_141217fe0)[iVar1]);
  }
  if (*(byte *)(lVar2 + 3) < 2) {
    uVar4 = 1;
    FUN_1404744d0(param_1,1);
  }
  else {
    FUN_1404744d0(param_1,0);
    if (*(char *)(lVar2 + 3) == '\x05') {
      pcVar3 = "error in error handling";
    }
    else {
      if (*(char *)(lVar2 + 3) != '\x04') {
        iVar1 = FUN_1404731e0(lVar2);
        uVar4 = 2;
        if (iVar1 != 0) {
          FUN_140473010(lVar2,param_1,1);
        }
        goto LAB_1406a90af;
      }
      pcVar3 = "not enough memory";
    }
    FUN_140474220(param_1,pcVar3);
    uVar4 = 2;
  }
LAB_1406a90af:
  FUN_14047c940(lVar2);
  return uVar4;
}


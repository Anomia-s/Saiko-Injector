/**
 * Function: reseed_requests
 * Address:  140cac940
 * Signature: undefined reseed_requests(void)
 * Body size: 157 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong reseed_requests(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    lVar2 = FUN_140b93540(param_2,"reseed_requests");
    if (lVar2 != 0) {
      uVar3 = FUN_140b93940(lVar2,param_1 + 0xbc);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    lVar2 = FUN_140b93540(param_2,"reseed_time_interval");
    if (lVar2 != 0) {
      iVar1 = FUN_140b94330(lVar2,param_1 + 200);
      return (ulonglong)(iVar1 != 0);
    }
  }
  return 1;
}


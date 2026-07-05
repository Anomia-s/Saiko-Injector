/**
 * Function: max_request
 * Address:  140d29850
 * Signature: undefined max_request(void)
 * Body size: 179 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool max_request(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140b93540(param_2,"state");
  if ((lVar2 != 0) && (iVar1 = FUN_140b94350(lVar2,*(undefined4 *)(param_1 + 8)), iVar1 == 0)) {
    return false;
  }
  lVar2 = FUN_140b93540(param_2,"strength");
  if ((lVar2 != 0) && (iVar1 = FUN_140b94350(lVar2,0x400), iVar1 == 0)) {
    return false;
  }
  lVar2 = FUN_140b93540(param_2,"max_request");
  if (lVar2 == 0) {
    return true;
  }
  iVar1 = FUN_140b94bb0(lVar2,0x80);
  return iVar1 != 0;
}


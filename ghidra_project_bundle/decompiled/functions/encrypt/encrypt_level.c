/**
 * Function: encrypt_level
 * Address:  140d68850
 * Signature: undefined encrypt_level(void)
 * Body size: 79 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool encrypt_level(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140b93540(param_2,"encrypt-level");
  if (lVar2 != 0) {
    iVar1 = FUN_140b93920(lVar2,param_1 + 8);
    return iVar1 != 0;
  }
  return true;
}


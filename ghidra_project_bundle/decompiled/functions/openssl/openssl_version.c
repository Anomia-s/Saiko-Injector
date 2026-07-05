/**
 * Function: openssl_version
 * Address:  140bd2450
 * Signature: undefined openssl_version(void)
 * Body size: 166 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void openssl_version(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140b93540(param_2,"openssl-version");
  if (lVar1 != 0) {
    FUN_140b95260(lVar1,"3.5.4");
  }
  lVar1 = FUN_140b93540(param_2,"provider-name");
  if (lVar1 != 0) {
    FUN_140b95260(lVar1,*(undefined8 *)(param_1 + 0x28));
  }
  lVar1 = FUN_140b93540(param_2,"module-filename");
  if (lVar1 != 0) {
    uVar2 = FUN_140c5d4a0(*(undefined8 *)(param_1 + 0x38));
    FUN_140b95260(lVar1,uVar2);
  }
  FUN_140bd2c60(param_1,param_2);
  return;
}


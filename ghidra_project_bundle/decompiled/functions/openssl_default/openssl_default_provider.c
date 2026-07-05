/**
 * Function: openssl_default_provider
 * Address:  140cdb260
 * Signature: undefined openssl_default_provider(void)
 * Body size: 207 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool openssl_default_provider(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_140b93540(param_2,&DAT_1413a62ac);
  if ((lVar3 != 0) && (iVar1 = FUN_140b95260(lVar3,"OpenSSL Default Provider"), iVar1 == 0)) {
    return false;
  }
  lVar3 = FUN_140b93540(param_2,"version");
  if ((lVar3 != 0) && (iVar1 = FUN_140b95260(lVar3,"3.5.4"), iVar1 == 0)) {
    return false;
  }
  lVar3 = FUN_140b93540(param_2,"buildinfo");
  if ((lVar3 != 0) && (iVar1 = FUN_140b95260(lVar3,"3.5.4"), iVar1 == 0)) {
    return false;
  }
  lVar3 = FUN_140b93540(param_2,"status");
  if (lVar3 == 0) {
    return true;
  }
  uVar2 = FUN_140b69250();
  iVar1 = FUN_140b94350(lVar3,uVar2);
  return iVar1 != 0;
}


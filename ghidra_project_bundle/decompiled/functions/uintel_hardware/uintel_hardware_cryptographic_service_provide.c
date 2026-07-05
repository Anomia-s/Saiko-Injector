/**
 * Function: uintel_hardware_cryptographic_service_provide
 * Address:  140c19600
 * Signature: undefined uintel_hardware_cryptographic_service_provide(void)
 * Body size: 338 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void uintel_hardware_cryptographic_service_provide(undefined8 param_1)

{
  BOOL BVar1;
  longlong lVar2;
  BYTE *pBVar3;
  longlong lVar4;
  longlong lVar5;
  HCRYPTPROV local_res10;
  
  lVar2 = entropy_factoru_entropy_neededzu_bytes_needed(param_1,1);
  pBVar3 = (BYTE *)FUN_140c192d0(param_1,lVar2);
  lVar4 = 0;
  if (pBVar3 != (BYTE *)0x0) {
    BVar1 = CryptAcquireContextW(&local_res10,(LPCWSTR)0x0,(LPCWSTR)0x0,1,0xf0000040);
    lVar5 = lVar4;
    if (BVar1 != 0) {
      BVar1 = CryptGenRandom(local_res10,(DWORD)lVar2,pBVar3);
      if (BVar1 != 0) {
        lVar5 = lVar2;
      }
      CryptReleaseContext(local_res10,0);
    }
    FUN_140c19380(param_1,lVar5,lVar5 * 8);
    lVar2 = FUN_140c19030(param_1);
    if (lVar2 != 0) {
      return;
    }
  }
  lVar2 = entropy_factoru_entropy_neededzu_bytes_needed(param_1,1);
  pBVar3 = (BYTE *)FUN_140c192d0(param_1,lVar2);
  if (pBVar3 != (BYTE *)0x0) {
    BVar1 = CryptAcquireContextW
                      (&local_res10,(LPCWSTR)0x0,L"Intel Hardware Cryptographic Service Provider",
                       0x16,0xf0000040);
    if (BVar1 != 0) {
      BVar1 = CryptGenRandom(local_res10,(DWORD)lVar2,pBVar3);
      if (BVar1 != 0) {
        lVar4 = lVar2;
      }
      CryptReleaseContext(local_res10,0);
    }
    FUN_140c19380(param_1,lVar4,lVar4 * 8);
    lVar4 = FUN_140c19030(param_1);
    if (lVar4 != 0) {
      return;
    }
  }
  FUN_140c19030(param_1);
  return;
}


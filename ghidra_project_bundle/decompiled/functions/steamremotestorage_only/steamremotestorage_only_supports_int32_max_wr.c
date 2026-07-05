/**
 * Function: steamremotestorage_only_supports_int32_max_wr
 * Address:  14045a1a0
 * Signature: undefined steamremotestorage_only_supports_int32_max_wr(void)
 * Body size: 115 bytes
 */


undefined8
steamremotestorage_only_supports_int32_max_wr
          (longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(param_1 + 8))();
  if (lVar2 == 0) {
    uVar3 = FUN_1400fbed0("SteamRemoteStorage unavailable");
  }
  else if (param_4 >> 0x1f == 0) {
    iVar1 = (**(code **)(param_1 + 0x40))(lVar2,param_2,param_3,param_4 & 0xffffffff);
    uVar3 = 1;
    if (param_4 != (longlong)iVar1) {
      FUN_1400fbed0("SteamAPI_ISteamRemoteStorage_FileRead() failed");
      uVar3 = 0;
    }
  }
  else {
    uVar3 = FUN_1400fbed0("SteamRemoteStorage only supports INT32_MAX write size");
  }
  return uVar3;
}


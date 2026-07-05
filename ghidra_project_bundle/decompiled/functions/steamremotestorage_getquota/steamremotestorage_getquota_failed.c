/**
 * Function: steamremotestorage_getquota_failed
 * Address:  14045a220
 * Signature: undefined steamremotestorage_getquota_failed(void)
 * Body size: 120 bytes
 */


undefined8 steamremotestorage_getquota_failed(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  lVar2 = (**(code **)(param_1 + 8))();
  if (lVar2 == 0) {
    pcVar3 = "SteamRemoteStorage unavailable";
  }
  else {
    cVar1 = (**(code **)(param_1 + 0x48))(lVar2,local_18,&local_20);
    if (cVar1 != '\0') goto LAB_14045a271;
    pcVar3 = "SteamRemoteStorage()->GetQuota failed";
  }
  FUN_1400fbed0(pcVar3);
  local_20 = 0;
LAB_14045a271:
  if (DAT_1414ef3c0 != (local_10 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_10 ^ (ulonglong)auStack_48);
  }
  return local_20;
}


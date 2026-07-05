/**
 * Function: steamremotestorage_endfilewritebatch_failed
 * Address:  14045a070
 * Signature: undefined steamremotestorage_endfilewritebatch_failed(void)
 * Body size: 77 bytes
 */


ulonglong steamremotestorage_endfilewritebatch_failed(undefined8 *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  
  lVar3 = (*(code *)param_1[1])();
  if (lVar3 == 0) {
    pcVar4 = "SteamRemoteStorage unavailable";
  }
  else {
    cVar1 = (*(code *)param_1[5])(lVar3);
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (cVar1 != '\0') goto LAB_14045a0a4;
    pcVar4 = "SteamRemoteStorage()->EndFileWriteBatch() failed";
  }
  uVar2 = FUN_1400fbed0(pcVar4);
  uVar5 = (ulonglong)uVar2;
LAB_14045a0a4:
  FUN_140165790(*param_1);
  FUN_140160cf0(param_1);
  return uVar5 & 0xffffffff;
}


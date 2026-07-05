/**
 * Function: steamvirtualgamepadinfo
 * Address:  14043f500
 * Signature: undefined steamvirtualgamepadinfo(void)
 * Body size: 70 bytes
 */


void steamvirtualgamepadinfo(void)

{
  int iVar1;
  char *pcVar2;
  
  httplib::ClientImpl::vfunction4();
  iVar1 = FUN_14015bb00();
  if (iVar1 == 4) {
    return;
  }
  pcVar2 = (char *)FUN_140110550("SteamVirtualGamepadInfo");
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    DAT_1416f1728 = FUN_1400fcda0(pcVar2);
  }
  slot_d();
  return;
}


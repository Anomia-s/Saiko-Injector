/**
 * Function: steam_cloud_is_disabled_for_this_user
 * Address:  140459e50
 * Signature: undefined steam_cloud_is_disabled_for_this_user(void)
 * Body size: 532 bytes
 */


longlong steam_cloud_is_disabled_for_this_user(void)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  char *pcVar4;
  
  plVar2 = (longlong *)FUN_140160c40(0x50);
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  lVar3 = parameter_s_is_invalid("steam_api64.dll");
  *plVar2 = lVar3;
  if (lVar3 == 0) goto LAB_14045a053;
  lVar3 = failed_loading_s(lVar3,"SteamAPI_SteamRemoteStorage_v016");
  plVar2[1] = lVar3;
  if (lVar3 == 0) {
    pcVar4 = "Could not load function SteamAPI_SteamRemoteStorage_v016";
LAB_14045a046:
    FUN_1400fbed0(pcVar4);
  }
  else {
    lVar3 = failed_loading_s(*plVar2,"SteamAPI_ISteamRemoteStorage_IsCloudEnabledForAccount");
    plVar2[2] = lVar3;
    if (lVar3 == 0) {
      pcVar4 = "Could not load function SteamAPI_ISteamRemoteStorage_IsCloudEnabledForAccount";
      goto LAB_14045a046;
    }
    lVar3 = failed_loading_s(*plVar2,"SteamAPI_ISteamRemoteStorage_IsCloudEnabledForApp");
    plVar2[3] = lVar3;
    if (lVar3 == 0) {
      pcVar4 = "Could not load function SteamAPI_ISteamRemoteStorage_IsCloudEnabledForApp";
      goto LAB_14045a046;
    }
    lVar3 = failed_loading_s(*plVar2,"SteamAPI_ISteamRemoteStorage_BeginFileWriteBatch");
    plVar2[4] = lVar3;
    if (lVar3 == 0) {
      pcVar4 = "Could not load function SteamAPI_ISteamRemoteStorage_BeginFileWriteBatch";
      goto LAB_14045a046;
    }
    lVar3 = failed_loading_s(*plVar2,"SteamAPI_ISteamRemoteStorage_EndFileWriteBatch");
    plVar2[5] = lVar3;
    if (lVar3 == 0) {
      pcVar4 = "Could not load function SteamAPI_ISteamRemoteStorage_EndFileWriteBatch";
      goto LAB_14045a046;
    }
    lVar3 = failed_loading_s(*plVar2,"SteamAPI_ISteamRemoteStorage_GetFileSize");
    plVar2[6] = lVar3;
    if (lVar3 == 0) {
      pcVar4 = "Could not load function SteamAPI_ISteamRemoteStorage_GetFileSize";
      goto LAB_14045a046;
    }
    lVar3 = failed_loading_s(*plVar2,"SteamAPI_ISteamRemoteStorage_FileRead");
    plVar2[7] = lVar3;
    if (lVar3 == 0) {
      pcVar4 = "Could not load function SteamAPI_ISteamRemoteStorage_FileRead";
      goto LAB_14045a046;
    }
    lVar3 = failed_loading_s(*plVar2,"SteamAPI_ISteamRemoteStorage_FileWrite");
    plVar2[8] = lVar3;
    if (lVar3 == 0) {
      pcVar4 = "Could not load function SteamAPI_ISteamRemoteStorage_FileWrite";
      goto LAB_14045a046;
    }
    lVar3 = failed_loading_s(*plVar2,"SteamAPI_ISteamRemoteStorage_GetQuota");
    plVar2[9] = lVar3;
    if (lVar3 == 0) {
      pcVar4 = "Could not load function SteamAPI_ISteamRemoteStorage_GetQuota";
      goto LAB_14045a046;
    }
    lVar3 = (*(code *)plVar2[1])();
    if (lVar3 == 0) {
      pcVar4 = "SteamRemoteStorage unavailable";
      goto LAB_14045a046;
    }
    cVar1 = (*(code *)plVar2[2])(lVar3);
    if (cVar1 == '\0') {
      pcVar4 = "Steam cloud is disabled for this user";
      goto LAB_14045a046;
    }
    cVar1 = (*(code *)plVar2[3])(lVar3);
    if (cVar1 == '\0') {
      pcVar4 = "Steam cloud is disabled for this application";
      goto LAB_14045a046;
    }
    cVar1 = (*(code *)plVar2[4])(lVar3);
    if (cVar1 == '\0') {
      pcVar4 = "SteamRemoteStorage()->BeginFileWriteBatch failed";
      goto LAB_14045a046;
    }
    lVar3 = parameter_s_is_invalid(&DAT_140e18b80,plVar2);
    if (lVar3 != 0) {
      return lVar3;
    }
  }
  FUN_140165790(*plVar2);
LAB_14045a053:
  FUN_140160cf0(plVar2);
  return 0;
}


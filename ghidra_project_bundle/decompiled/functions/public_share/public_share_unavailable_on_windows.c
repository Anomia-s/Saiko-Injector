/**
 * Function: public_share_unavailable_on_windows
 * Address:  14045ad60
 * Signature: undefined public_share_unavailable_on_windows(void)
 * Body size: 741 bytes
 */


longlong public_share_unavailable_on_windows(undefined4 param_1)

{
  int iVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  INT_PTR IVar3;
  size_t sVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined1 auStack_258 [32];
  undefined4 *local_238;
  wchar_t *local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_258;
  hModule = LoadLibraryW(L"Shell32.dll");
  if ((hModule != (HMODULE)0x0) &&
     (pFVar2 = GetProcAddress(hModule,"SHGetKnownFolderPath"), pFVar2 != (FARPROC)0x0)) {
    switch(param_1) {
    case 0:
      local_228 = 0x5e6c858f;
      uStack_224 = 0x47600e22;
      uStack_220 = 0x33eafe9a;
      uStack_21c = 0x7371b617;
      break;
    case 1:
      local_228 = 0xb4bfcc3a;
      uStack_224 = 0x424cdb2c;
      uStack_220 = 0xe97f29b0;
      uStack_21c = 0x41c6879a;
      break;
    case 2:
      local_228 = 0xfdd39ad0;
      uStack_224 = 0x46af238f;
      uStack_220 = 0x856cb4ad;
      uStack_21c = 0xc7690348;
      break;
    case 3:
      local_228 = 0x374de290;
      uStack_224 = 0x4565123f;
      uStack_220 = 0xc4396491;
      uStack_21c = 0x7b465e92;
      break;
    case 4:
      local_228 = 0x4bd8d571;
      uStack_224 = 0x48d36d19;
      uStack_220 = 0x224297be;
      uStack_21c = 0x430e0820;
      break;
    case 5:
      local_228 = 0x33e28130;
      uStack_224 = 0x46764e1e;
      uStack_220 = 0x39985a83;
      uStack_21c = 0xbbc33b5c;
      break;
    case 6:
      FUN_1400fbed0("Public share unavailable on Windows");
      goto LAB_14045b005;
    case 7:
      local_228 = 0x4c5c32ff;
      uStack_224 = 0x43b0bb9d;
      uStack_220 = 0x722db4b5;
      uStack_21c = 0xa4aa4ee5;
      break;
    case 8:
      local_228 = 0xb7bede81;
      uStack_224 = 0x4682df94;
      uStack_220 = 0xa557d8a7;
      uStack_21c = 0x6fb82026;
      break;
    case 9:
      local_228 = 0xa63293e8;
      uStack_224 = 0x48db664e;
      uStack_220 = 0x75df79a0;
      uStack_21c = 0xf709059e;
      break;
    case 10:
      local_228 = 0x18989b1d;
      uStack_224 = 0x455b99b5;
      uStack_220 = 0x7cab1c84;
      uStack_21c = 0xfcdde474;
      break;
    default:
      FUN_1400fbed0("Invalid SDL_Folder: %d",param_1);
LAB_14045b005:
      lVar6 = 0;
      goto LAB_14045b007;
    }
    IVar3 = (*pFVar2)(&local_228,0x8000,0,&local_230);
    iVar1 = (int)IVar3;
    if (iVar1 < 0) goto LAB_14045af8f;
    sVar4 = wcslen(local_230);
    lVar5 = FUN_14017b9c0("UTF-8","UTF-16LE",local_230,sVar4 * 2 + 2);
    goto joined_r0x00014045af88;
  }
  switch(param_1) {
  case 0:
    uVar8 = 0x8028;
    break;
  case 1:
    uVar8 = 0x8000;
    break;
  case 2:
    uVar8 = 0x8005;
    break;
  case 3:
    pcVar7 = "Downloads folder unavailable before Vista";
    goto LAB_14045aea8;
  case 4:
    uVar8 = 0x800d;
    break;
  case 5:
    uVar8 = 0x8027;
    break;
  case 6:
    pcVar7 = "Public share unavailable on Windows";
    goto LAB_14045aea8;
  case 7:
    pcVar7 = "Saved games unavailable before Vista";
    goto LAB_14045aea8;
  case 8:
    pcVar7 = "Screenshots folder unavailable before Vista";
LAB_14045aea8:
    FUN_1400fbed0(pcVar7);
    goto joined_r0x00014045aed0;
  case 9:
    uVar8 = 0x8015;
    break;
  case 10:
    uVar8 = 0x800e;
    break;
  default:
    FUN_1400fbed0("Unsupported SDL_Folder on Windows before Vista: %d",param_1);
    goto joined_r0x00014045aed0;
  }
  local_238 = &local_228;
  iVar1 = SHGetFolderPathW(0,uVar8,0,0);
  if (iVar1 < 0) {
LAB_14045af8f:
    FUN_1403d7600("Couldn\'t get folder",iVar1);
joined_r0x00014045aed0:
    lVar6 = 0;
  }
  else {
    sVar4 = wcslen((wchar_t *)&local_228);
    lVar5 = FUN_14017b9c0("UTF-8","UTF-16LE",&local_228,sVar4 * 2 + 2);
joined_r0x00014045af88:
    if (lVar5 == 0) goto joined_r0x00014045aed0;
    lVar6 = FUN_1400fc570(lVar5);
    lVar6 = FUN_140160cc0(lVar5,lVar6 + 2);
    if (lVar6 == 0) {
      FUN_140160cf0(lVar5);
      goto joined_r0x00014045aed0;
    }
    lVar5 = FUN_1400fc570(lVar6);
    FUN_1400fcd40(lVar6,&DAT_141360cc6,lVar5 + 2);
  }
  if (hModule != (HMODULE)0x0) {
LAB_14045b007:
    FreeLibrary(hModule);
  }
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_258)) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_258);
}


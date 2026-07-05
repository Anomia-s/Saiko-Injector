/**
 * Function: freeaddrinfo
 * Address:  140bd76f0
 * Signature: undefined freeaddrinfo(void)
 * Body size: 507 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void freeaddrinfo(void)

{
  UINT UVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  char **ppcVar3;
  int iVar4;
  undefined1 auStack_288 [32];
  char *local_268;
  code *local_260;
  char *local_258;
  code *local_250;
  char *local_248;
  code *local_240;
  char local_238 [272];
  CHAR local_128 [272];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x140bd7700;
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_288;
  local_260 = FUN_140bd7050;
  local_258 = "getnameinfo";
  local_250 = FUN_140bd74c0;
  local_248 = "freeaddrinfo";
  local_240 = FUN_140bd6ff0;
  local_268 = "getaddrinfo";
  if (DAT_1416ffe44 != 0) goto LAB_140bd78c9;
  UVar1 = GetSystemDirectoryA(local_128,0x104);
  if (UVar1 != 0) {
    strcpy_s(local_238,0x10c,local_128);
    strcat_s(local_238,0x10c,"\\ws2_32");
    hModule = LoadLibraryA(local_238);
    if (hModule == (HMODULE)0x0) {
LAB_140bd77ea:
      strcpy_s(local_238,0x10c,local_128);
      strcat_s(local_238,0x10c,"\\wship6");
      hModule = LoadLibraryA(local_238);
      if (hModule != (HMODULE)0x0) {
        pFVar2 = GetProcAddress(hModule,"getaddrinfo");
        if (pFVar2 != (FARPROC)0x0) goto LAB_140bd784a;
        FreeLibrary(hModule);
      }
    }
    else {
      pFVar2 = GetProcAddress(hModule,"getaddrinfo");
      if (pFVar2 == (FARPROC)0x0) {
        FreeLibrary(hModule);
        goto LAB_140bd77ea;
      }
LAB_140bd784a:
      ppcVar3 = (char **)&local_260;
      iVar4 = 0;
      do {
        pFVar2 = GetProcAddress(hModule,ppcVar3[-1]);
        *ppcVar3 = (char *)pFVar2;
        if (pFVar2 == (FARPROC)0x0) {
          FreeLibrary(hModule);
          goto LAB_140bd78bf;
        }
        iVar4 = iVar4 + 1;
        ppcVar3 = ppcVar3 + 2;
      } while (iVar4 < 3);
      PTR_FUN_14150fcb8 = local_260;
      PTR_FUN_14150fcc8 = local_250;
      PTR_FUN_14150fcd8 = local_240;
    }
  }
LAB_140bd78bf:
  DAT_1416ffe44 = 1;
LAB_140bd78c9:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_288);
}


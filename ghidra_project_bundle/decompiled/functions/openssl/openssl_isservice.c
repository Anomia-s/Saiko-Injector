/**
 * Function: openssl_isservice
 * Address:  140bcf430
 * Signature: undefined openssl_isservice(void)
 * Body size: 350 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void openssl_isservice(void)

{
  wchar_t *_Str;
  longlong lVar1;
  BOOL BVar2;
  DWORD DVar3;
  uint uVar4;
  HMODULE hModule;
  HWINSTA hObj;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined8 uStackY_50;
  undefined1 auStackY_48 [32];
  uint local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)local_18;
  if (DAT_1416ff9d8 == (FARPROC)0x0) {
    uStackY_50 = 0x140bcf46e;
    hModule = GetModuleHandleW((LPCWSTR)0x0);
    if (hModule != (HMODULE)0x0) {
      uStackY_50 = 0x140bcf483;
      DAT_1416ff9d8 = GetProcAddress(hModule,"_OPENSSL_isservice");
      if (DAT_1416ff9d8 != (FARPROC)0x0) goto LAB_140bcf48f;
    }
    DAT_1416ff9d8 = (FARPROC)0xffffffffffffffff;
  }
  else {
LAB_140bcf48f:
    if (DAT_1416ff9d8 != (FARPROC)0xffffffffffffffff) {
      uStackY_50 = 0x140bcf497;
      (*DAT_1416ff9d8)();
      puVar6 = auStackY_48;
      goto LAB_140bcf582;
    }
  }
  uStackY_50 = 0x140bcf4ad;
  hObj = GetProcessWindowStation();
  puVar6 = auStackY_48;
  if (hObj != (HWINSTA)0x0) {
    uStackY_50 = 0x140bcf4d6;
    BVar2 = GetUserObjectInformationW(hObj,2,(PVOID)0x0,0,local_18);
    puVar6 = auStackY_48;
    if (BVar2 == 0) {
      uStackY_50 = 0x140bcf4e4;
      DVar3 = GetLastError();
      puVar6 = auStackY_48;
      if ((DVar3 == 0x7a) && (puVar6 = auStackY_48, local_18[0] < 0x201)) {
        uVar4 = local_18[0] + 1 & 0xfffffffe;
        local_18[0] = uVar4;
        uVar5 = (ulonglong)uVar4 + 0x11;
        if (uVar5 <= (ulonglong)uVar4 + 2) {
          uVar5 = 0xffffffffffffff0;
        }
        uStackY_50 = 0x140bcf52a;
        lVar1 = -(uVar5 & 0xfffffffffffffff0);
        puVar6 = auStackY_48 + lVar1;
        _Str = (wchar_t *)((longlong)local_18 + lVar1);
        *(uint **)(&stack0xffffffffffffffd8 + lVar1) = local_18;
        *(undefined8 *)(auStackY_48 + lVar1 + -8) = 0x140bcf54c;
        BVar2 = GetUserObjectInformationW
                          (hObj,2,_Str,uVar4,*(LPDWORD *)(&stack0xffffffffffffffd8 + lVar1));
        if (BVar2 != 0) {
          uVar4 = local_18[0] + 1;
          local_18[0] = uVar4 & 0xfffffffe;
          _Str[uVar4 >> 1] = L'\0';
          *(undefined8 *)(auStackY_48 + lVar1 + -8) = 0x140bcf573;
          wcsstr(_Str,L"Service-0x");
          puVar6 = auStackY_48 + lVar1;
        }
      }
    }
  }
LAB_140bcf582:
  uVar5 = local_10 ^ (ulonglong)local_18;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar6 + -8) = &UNK_140bcf58e;
  FUN_140b65db0(uVar5);
}


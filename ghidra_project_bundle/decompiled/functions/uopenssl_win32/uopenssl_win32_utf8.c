/**
 * Function: uopenssl_win32_utf8
 * Address:  140d734b0
 * Signature: undefined uopenssl_win32_utf8(void)
 * Body size: 1107 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void uopenssl_win32_utf8(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  FILE *_File;
  DWORD DVar1;
  BOOL BVar2;
  int iVar3;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 extraout_RAX_01;
  undefined8 extraout_RAX_02;
  undefined8 extraout_RAX_03;
  undefined8 extraout_RAX_04;
  HANDLE pvVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStackY_698 [32];
  uint local_658;
  char local_654 [12];
  CHAR local_648 [512];
  WCHAR local_448 [512];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140d734d2;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStackY_698;
  DAT_14170423c = 0;
  DAT_141704240 = 0;
  signal(0x16);
  DAT_1417041d0 = extraout_RAX;
  signal(8);
  DAT_141704160 = extraout_RAX_00;
  signal(4);
  DAT_141704140 = extraout_RAX_01;
  signal(2);
  DAT_141704130 = extraout_RAX_02;
  signal(0xb);
  DAT_141704178 = extraout_RAX_03;
  signal(0xf);
  DAT_141704240 = 1;
  DAT_141704198 = extraout_RAX_04;
  if ((param_3 == 0) && (DAT_141704238 != 0)) {
    DAT_141704224 = DAT_141704220 & 0xfffffffb;
    pvVar4 = GetStdHandle(0xfffffff6);
    SetConsoleMode(pvVar4,DAT_141704224);
  }
  DAT_141704240 = 2;
  local_648[0] = '\0';
  if (DAT_141704238 == 0) {
    pcVar5 = fgets(local_648,0x1ff,DAT_141704228);
LAB_140d7376c:
    if (pcVar5 == (char *)0x0) goto LAB_140d73803;
  }
  else {
    DVar1 = GetEnvironmentVariableW(L"OPENSSL_WIN32_UTF8",(LPWSTR)0x0,0);
    if (DVar1 != 0) {
      pvVar4 = GetStdHandle(0xfffffff6);
      BVar2 = ReadConsoleW(pvVar4,local_448,0x1ff,&local_658,(PCONSOLE_READCONSOLE_CONTROL)0x0);
      if (BVar2 == 0) goto LAB_140d73803;
      uVar7 = (ulonglong)local_658;
      if (((1 < local_658) && (local_448[local_658 - 2] == L'\r')) &&
         (uVar6 = local_658 - 1, local_448[uVar6] == L'\n')) {
        local_448[local_658 - 2] = L'\n';
        uVar7 = (ulonglong)uVar6;
        local_658 = uVar6;
      }
      if (0x3ff < uVar7 * 2) {
                    /* WARNING: Subroutine does not return */
        FUN_140b68c50();
      }
      local_448[uVar7] = L'\0';
      iVar3 = WideCharToMultiByte(0xfde9,0,local_448,-1,local_648,0x200,(LPCSTR)0x0,(LPBOOL)0x0);
      pcVar5 = local_648;
      if (iVar3 < 1) {
        pcVar5 = (char *)0x0;
      }
      FUN_14046e980(local_448,0x400);
      goto LAB_140d7376c;
    }
    pvVar4 = GetStdHandle(0xfffffff6);
    BVar2 = ReadConsoleA(pvVar4,local_648,0x1ff,&local_658,(PCONSOLE_READCONSOLE_CONTROL)0x0);
    if (BVar2 == 0) goto LAB_140d73803;
    uVar7 = (ulonglong)local_658;
    if (((1 < local_658) && (local_648[local_658 - 2] == '\r')) &&
       (uVar6 = local_658 - 1, local_648[uVar6] == '\n')) {
      local_648[local_658 - 2] = '\n';
      uVar7 = (ulonglong)uVar6;
      local_658 = uVar6;
    }
    if (0x1ff < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_140b68c50();
    }
    local_648[uVar7] = '\0';
  }
  iVar3 = feof(DAT_141704228);
  if ((iVar3 == 0) && (iVar3 = ferror(DAT_141704228), iVar3 == 0)) {
    pcVar5 = strchr(local_648,10);
    _File = DAT_141704228;
    if (pcVar5 == (char *)0x0) {
      do {
        pcVar5 = fgets(local_654,4,_File);
        if (pcVar5 == (char *)0x0) goto LAB_140d73803;
        pcVar5 = strchr(local_654,10);
      } while (pcVar5 == (char *)0x0);
    }
    else if (param_4 != 0) {
      *pcVar5 = '\0';
    }
    FUN_140ce0510(param_1,param_2,local_648);
  }
LAB_140d73803:
  if (param_3 == 0) {
    FUN_14002b100(DAT_141704230,&DAT_1413a7288);
  }
  if (((1 < DAT_141704240) && (param_3 == 0)) && (DAT_141704238 != 0)) {
    DAT_141704224 = DAT_141704220;
    pvVar4 = GetStdHandle(0xfffffff6);
    SetConsoleMode(pvVar4,DAT_141704224);
  }
  if (0 < DAT_141704240) {
    signal(0x16);
    signal(8);
    signal(4);
    signal(2);
    signal(0xb);
    signal(0xf);
  }
  FUN_14046e980(local_648,0x200);
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStackY_698);
}


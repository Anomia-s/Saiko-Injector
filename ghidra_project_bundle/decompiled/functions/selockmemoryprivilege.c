/**
 * Function: selockmemoryprivilege
 * Address:  1401b7430
 * Signature: undefined selockmemoryprivilege(void)
 * Body size: 1025 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 selockmemoryprivilege(longlong *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  SIZE_T SVar4;
  HANDLE ProcessHandle;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStackY_98 [32];
  _LUID local_68;
  HANDLE local_60;
  _SYSTEM_INFO local_58;
  _TOKEN_PRIVILEGES local_20;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStackY_98;
  if (DAT_1416b4098 == '\x01') goto LAB_1401b77fd;
  DAT_1416b4098 = '\x01';
  if (param_1 == (longlong *)0x0) {
    _DAT_1416b40e0 = 0;
    lRam00000001416b40e8 = 0;
    DAT_1416b40d0 = 0;
    _DAT_1416b40d8 = 0;
    _DAT_1416b40c0 = 0;
    _DAT_1416b40c8 = 0;
    _DAT_1416b40b0 = 0;
    DAT_1416b40b8 = 0;
LAB_1401b74ce:
    DAT_1416b40a0 = FUN_1401b7840;
    DAT_1416b40a8 = &LAB_1401b7940;
  }
  else {
    DAT_1416b40a0 = (code *)*param_1;
    DAT_1416b40a8 = (undefined1 *)param_1[1];
    _DAT_1416b40b0 = param_1[2];
    DAT_1416b40b8 = param_1[3];
    _DAT_1416b40c0 = param_1[4];
    _DAT_1416b40c8 = param_1[5];
    DAT_1416b40d0 = param_1[6];
    _DAT_1416b40d8 = param_1[7];
    _DAT_1416b40e0 = param_1[8];
    lRam00000001416b40e8 = param_1[9];
    if ((DAT_1416b40a0 == (code *)0x0) || (DAT_1416b40a8 == (undefined1 *)0x0)) goto LAB_1401b74ce;
  }
  local_58.dwNumberOfProcessors = 0;
  local_58.dwProcessorType = 0;
  local_58.dwAllocationGranularity = 0;
  local_58.wProcessorLevel = 0;
  local_58.wProcessorRevision = 0;
  local_58.lpMaximumApplicationAddress = (LPVOID)0x0;
  local_58.dwActiveProcessorMask = 0;
  local_58.u = (_union_552)0x0;
  local_58.dwPageSize = 0;
  local_58.lpMinimumApplicationAddress = (LPVOID)0x0;
  GetSystemInfo(&local_58);
  DAT_1416b40f8 = (ulonglong)local_58._0_8_ >> 0x20;
  DAT_1416b40f0 = local_58._40_8_ & 0xffffffff;
  DAT_1416b4100 = 0;
  if (DAT_1416b40d8 == 0) {
    uVar3 = 0;
  }
  else {
    local_60 = (HANDLE)0x0;
    SVar4 = GetLargePageMinimum();
    if (SVar4 != 0) {
      ProcessHandle = GetCurrentProcess();
      OpenProcessToken(ProcessHandle,0x28,&local_60);
    }
    if (local_60 != (HANDLE)0x0) {
      BVar1 = LookupPrivilegeValueA((LPCSTR)0x0,"SeLockMemoryPrivilege",&local_68);
      if (BVar1 != 0) {
        local_20.PrivilegeCount = 1;
        local_20.Privileges[0].Luid.LowPart = local_68.LowPart;
        local_20.Privileges[0].Luid.HighPart = local_68.HighPart;
        local_20.Privileges[0].Attributes = 2;
        BVar1 = AdjustTokenPrivileges(local_60,0,&local_20,0,(PTOKEN_PRIVILEGES)0x0,(PDWORD)0x0);
        if ((BVar1 != 0) && (DVar2 = GetLastError(), DVar2 == 0)) {
          DAT_1416b4100 = 1;
        }
      }
      CloseHandle(local_60);
    }
    uVar3 = (uint)DAT_1416b4100;
    if (uVar3 == 1) {
      if (DAT_1416b40f8 < SVar4) {
        DAT_1416b40f8 = SVar4;
      }
      if (DAT_1416b40f0 < SVar4) {
        DAT_1416b40f0 = SVar4;
      }
    }
  }
  uVar6 = 0x100;
  if (0x100 < DAT_1416b40f8) {
    uVar6 = DAT_1416b40f8;
  }
  if (0xffffffff < uVar6) {
    uVar6 = 0x100000000;
  }
  _DAT_1416b4108 = 0;
  do {
    _DAT_1416b4108 = _DAT_1416b4108 + 1;
    uVar6 = uVar6 >> 1;
  } while (uVar6 != 1);
  _DAT_1416b40c0 = 1L << ((byte)_DAT_1416b4108 & 0x3f);
  lVar7 = 1;
  if (DAT_1416b40d0 == 0) {
    DAT_1416b40d0 = 0x40;
  }
  if (DAT_1416b40d0 << 0x10 < _DAT_1416b40c0) {
    DAT_1416b40d0 = _DAT_1416b40c0 >> 0x10;
  }
  DAT_1416b4110 = DAT_1416b40d0;
  if ((0xf < _DAT_1416b4108) && ((DAT_1416b40d0 << 0x10 & _DAT_1416b40c0 - 1) != 0)) {
    DAT_1416b4110 = _DAT_1416b40c0 >> 0x10;
  }
  DAT_1416b4118 = 0x40;
  if (DAT_1416b4110 < 0x40) {
    DAT_1416b4118 = DAT_1416b4110;
  }
  _DAT_1416b40c8 = 0x10000;
  _DAT_1416b40d8 = CONCAT44(DAT_1416b40d8_4,uVar3);
  _DAT_1416b4120 = 0xff800000010;
  uVar3 = 0x20;
  DAT_1416b40d0 = DAT_1416b4110;
  DAT_1416b40f8 = _DAT_1416b40c0;
  do {
    *(uint *)(&DAT_1416b4120 + lVar7 * 8) = uVar3 - 0x10;
    *(short *)(&DAT_1416b4124 + lVar7 * 8) = (short)(0xff80 / (ulonglong)(uVar3 - 0x10));
    *(short *)(&DAT_1416b4126 + lVar7 * 8) = (short)lVar7;
    (&DAT_1416b4128)[lVar7 * 2] = uVar3;
    (&DAT_1416b412c)[lVar7 * 4] = (short)(0xff80 / (ulonglong)uVar3);
    (&DAT_1416b412e)[lVar7 * 4] = (short)lVar7 + 1;
    uVar3 = uVar3 + 0x20;
    lVar7 = lVar7 + 2;
  } while (lVar7 != 0x41);
  DAT_1416b4510 = 1;
  lVar8 = 0x40;
  lVar7 = 0;
  do {
    lVar9 = lVar7 + 1;
    uVar3 = (int)lVar9 * 0x200 + 0x400;
    *(uint *)(&DAT_1416b4328 + lVar7) = uVar3;
    *(short *)((longlong)&DAT_1416b4328 + lVar7 * 8 + 4) = (short)(0xff80 / (uVar3 & 0xffff));
    *(short *)((longlong)&DAT_1416b4328 + lVar7 * 8 + 6) = (short)lVar7 + 0x41;
    lVar5 = lVar8;
    do {
      if (*(short *)(&DAT_1416b4124 + lVar5 * 8) !=
          *(short *)((longlong)&DAT_1416b4328 + lVar7 * 8 + 4)) break;
      *(undefined8 *)(&DAT_1416b4120 + lVar5 * 8) = (&DAT_1416b4328)[lVar7];
      bVar10 = lVar5 != 0;
      lVar5 = lVar5 + -1;
    } while (bVar10);
    lVar8 = lVar8 + 1;
    lVar7 = lVar9;
  } while (lVar9 != 0x3d);
  DAT_1416b4518 = 0;
  memset(&DAT_1416b4520,0,0x178);
  DAT_1416b4d48 = 0;
LAB_1401b77fd:
  FUN_1401ae080();
  if (DAT_1414ef3c0 != (local_10 ^ (ulonglong)auStackY_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_10 ^ (ulonglong)auStackY_98);
  }
  return 0;
}


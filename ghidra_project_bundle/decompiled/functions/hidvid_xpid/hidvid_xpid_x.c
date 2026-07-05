/**
 * Function: hidvid_xpid_x
 * Address:  14016a1a0
 * Signature: undefined hidvid_xpid_x(void)
 * Body size: 1386 bytes
 */


void hidvid_xpid_x(undefined8 param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  UINT UVar3;
  int iVar4;
  longlong lVar5;
  PRAWINPUTDEVICELIST pRawInputDeviceList;
  longlong lVar6;
  char *pcVar7;
  ulonglong uVar8;
  code *pcVar9;
  char *pcVar10;
  PRAWINPUTDEVICELIST ptVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_228 [39];
  byte local_201;
  uint local_200;
  uint local_1fc;
  PRAWINPUTDEVICELIST local_1f8;
  longlong local_1f0;
  HDEVINFO local_1e8;
  longlong local_1e0;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4 [7];
  undefined4 local_1a8;
  int local_1a4;
  int local_1a0;
  uint local_19c;
  undefined1 local_198 [64];
  char local_158 [272];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_228;
  local_19c = 0;
  local_1a0 = 0;
  local_1a4 = 0;
  lVar5 = FUN_140468d70();
  if (((((char)param_2 == '\0') && (lVar5 == DAT_141526108)) ||
      (DAT_141526108 = lVar5,
      UVar3 = GetRawInputDeviceList((PRAWINPUTDEVICELIST)0x0,&local_19c,0x10),
      local_19c == 0 || UVar3 == 0xffffffff)) ||
     (pRawInputDeviceList = (PRAWINPUTDEVICELIST)FUN_140160c40((ulonglong)local_19c << 4),
     pRawInputDeviceList == (PRAWINPUTDEVICELIST)0x0)) goto LAB_14016a6e4;
  local_19c = GetRawInputDeviceList(pRawInputDeviceList,&local_19c,0x10);
  if (local_19c != 0xffffffff) {
    param_2 = param_2 ^ 1;
    local_1e8 = SetupDiGetClassDevsA((GUID *)0x0,(PCSTR)0x0,(HWND)0x0,6);
    lVar6 = FUN_14015f740(&local_1a0);
    lVar5 = FUN_140134f30(&local_1a4);
    if (local_19c != 0) {
      local_201 = (byte)param_2;
      uVar14 = 0;
      lVar12 = 0;
      local_200 = 0;
      lVar13 = 0;
      local_1fc = 0;
      pcVar9 = GetRawInputDeviceInfoA_exref;
      local_1f8 = pRawInputDeviceList;
      local_1f0 = lVar6;
      local_1e0 = lVar5;
LAB_14016a316:
      memset(local_158,0,0x104);
      local_1c8 = 0x20;
      local_1cc = 0x104;
      local_1d0 = 0;
      local_1d4 = 0;
      uVar1 = pRawInputDeviceList[uVar14].dwType;
      if (1 < uVar1) goto LAB_14016a300;
      ptVar11 = pRawInputDeviceList + uVar14;
      local_1c4[0] = 0x20;
      iVar4 = (*pcVar9)(ptVar11->hDevice,0x2000000b,local_1c4,&local_1c8);
      if (iVar4 == -1) goto LAB_14016a300;
      iVar4 = (*pcVar9)(ptVar11->hDevice,0x20000007,local_158,&local_1cc);
      lVar5 = local_1e0;
      pcVar10 = local_158;
      if (iVar4 != -1) {
        for (; (cVar2 = *pcVar10, cVar2 == '?' || (pcVar7 = pcVar10, cVar2 == '\\'));
            pcVar10 = pcVar10 + 1) {
        }
        do {
          if (cVar2 == '#') {
            *pcVar7 = '\\';
          }
          else {
            if (cVar2 == '\0') goto LAB_14016a3fc;
            if (cVar2 == '{') goto code_r0x00014016a3eb;
          }
          cVar2 = pcVar7[1];
          pcVar7 = pcVar7 + 1;
        } while( true );
      }
      goto LAB_14016a55d;
    }
    if (local_1a0 != 0) {
      iVar4 = local_1a0 + -1;
      lVar13 = 0;
      local_200 = 0;
      lVar12 = 0;
      goto LAB_14016a60f;
    }
    if (local_1a4 != 0) {
      iVar4 = local_1a4 + -1;
      lVar12 = 0;
      lVar13 = 0;
      goto LAB_14016a698;
    }
    lVar13 = 0;
    lVar12 = 0;
    goto LAB_14016a6b1;
  }
LAB_14016a6dc:
  FUN_140160cf0(pRawInputDeviceList);
LAB_14016a6e4:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_228)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_228);
  }
  return;
LAB_14016a300:
  uVar14 = uVar14 + 1;
  if (local_19c <= uVar14) goto LAB_14016a577;
  goto LAB_14016a316;
code_r0x00014016a3eb:
  if ((pcVar10 < pcVar7) && (pcVar7[-1] == '\\')) {
    pcVar7 = pcVar7 + -1;
  }
LAB_14016a3fc:
  *pcVar7 = '\0';
  FUN_1400fd340(pcVar10,"HID\\VID_%X&PID_%X&",&local_1d0,&local_1d4);
  if ((uVar1 & 1) == 0) {
    cVar2 = httplib::ClientImpl::vfunction2();
    uVar1 = local_200;
    pRawInputDeviceList = local_1f8;
    if (cVar2 != '\0') {
      iVar4 = *(int *)&ptVar11->hDevice;
      lVar15 = (longlong)(int)local_200;
      lVar6 = FUN_140160cc0();
      if (lVar6 != 0) {
        local_200 = uVar1 + 1;
        *(int *)(lVar6 + lVar15 * 4) = iVar4;
        lVar12 = lVar6;
      }
      if (0 < (longlong)local_1a4) {
        lVar6 = 0;
        do {
          pRawInputDeviceList = local_1f8;
          if (*(int *)(lVar5 + lVar6 * 4) == iVar4) goto LAB_14016a55d;
          lVar6 = lVar6 + 1;
        } while (local_1a4 != lVar6);
      }
      FUN_14016a730(local_1e8,pcVar10,local_198);
      FUN_140134c30(iVar4,local_198,local_201);
      pRawInputDeviceList = local_1f8;
    }
  }
  else {
    cVar2 = FUN_14015f4c0((undefined2)local_1d0,(undefined2)local_1d4,local_1a8);
    uVar1 = local_1fc;
    pRawInputDeviceList = local_1f8;
    if (cVar2 != '\0') {
      iVar4 = *(int *)&ptVar11->hDevice;
      lVar6 = (longlong)(int)local_1fc;
      lVar5 = FUN_140160cc0(lVar13,lVar6 * 4 + 4);
      if (lVar5 != 0) {
        local_1fc = uVar1 + 1;
        *(int *)(lVar5 + lVar6 * 4) = iVar4;
        lVar13 = lVar5;
      }
      if (0 < (longlong)local_1a0) {
        lVar5 = 0;
        do {
          pRawInputDeviceList = local_1f8;
          if (*(int *)(local_1f0 + lVar5 * 4) == iVar4) goto LAB_14016a55d;
          lVar5 = lVar5 + 1;
        } while (local_1a0 != lVar5);
      }
      FUN_14016a730(local_1e8,pcVar10,local_198);
      FUN_14015f4d0(iVar4,local_198,local_201);
      pRawInputDeviceList = local_1f8;
    }
  }
LAB_14016a55d:
  uVar14 = uVar14 + 1;
  pcVar9 = GetRawInputDeviceInfoA_exref;
  if (local_19c <= uVar14) goto LAB_14016a577;
  goto LAB_14016a316;
LAB_14016a577:
  lVar5 = local_1e0;
  lVar6 = local_1f0;
  if (local_1a0 == 0) {
    param_2 = (uint)local_201;
  }
  else {
    iVar4 = local_1a0 + -1;
    param_2 = (uint)local_201;
    if ((int)local_1fc < 1) {
LAB_14016a60f:
      lVar15 = (longlong)iVar4;
      do {
        FUN_14015f600(*(undefined4 *)(lVar6 + lVar15 * 4),param_2);
        bVar16 = lVar15 != 0;
        lVar15 = lVar15 + -1;
      } while (bVar16);
    }
    else {
      uVar14 = (ulonglong)local_1fc;
      lVar15 = (longlong)iVar4;
      do {
        iVar4 = *(int *)(local_1f0 + lVar15 * 4);
        uVar8 = 0;
        do {
          if (iVar4 == *(int *)(lVar13 + uVar8 * 4)) goto LAB_14016a5a7;
          uVar8 = uVar8 + 1;
        } while (uVar14 != uVar8);
        FUN_14015f600(iVar4,param_2);
LAB_14016a5a7:
        bVar16 = lVar15 != 0;
        lVar15 = lVar15 + -1;
        lVar6 = local_1f0;
      } while (bVar16);
    }
  }
  if (local_1a4 != 0) {
    iVar4 = local_1a4 + -1;
    if ((int)local_200 < 1) {
LAB_14016a698:
      lVar15 = (longlong)iVar4;
      do {
        FUN_140134d60(*(undefined4 *)(lVar5 + lVar15 * 4),param_2);
        bVar16 = lVar15 != 0;
        lVar15 = lVar15 + -1;
      } while (bVar16);
    }
    else {
      uVar14 = (ulonglong)local_200;
      lVar15 = (longlong)iVar4;
      do {
        iVar4 = *(int *)(lVar5 + lVar15 * 4);
        uVar8 = 0;
        do {
          if (iVar4 == *(int *)(lVar12 + uVar8 * 4)) goto LAB_14016a657;
          uVar8 = uVar8 + 1;
        } while (uVar14 != uVar8);
        FUN_140134d60(iVar4,param_2);
LAB_14016a657:
        bVar16 = lVar15 != 0;
        lVar15 = lVar15 + -1;
      } while (bVar16);
    }
  }
LAB_14016a6b1:
  FUN_140160cf0(lVar6);
  FUN_140160cf0(lVar13);
  FUN_140160cf0(lVar5);
  FUN_140160cf0(lVar12);
  SetupDiDestroyDeviceInfoList(local_1e8);
  goto LAB_14016a6dc;
}


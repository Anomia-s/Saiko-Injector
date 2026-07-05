/**
 * Function: setthreaddpiawarenesscontext
 * Address:  140469370
 * Signature: undefined setthreaddpiawarenesscontext(void)
 * Body size: 1530 bytes
 */


/* WARNING: Type propagation algorithm not settling */

ulonglong setthreaddpiawarenesscontext(uint *param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  HMODULE pHVar5;
  FARPROC pFVar6;
  INT_PTR IVar7;
  FARPROC pFVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 uVar14;
  char cVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  uint7 uVar21;
  longlong lVar22;
  char *pcVar23;
  char *pcVar24;
  longlong lVar25;
  undefined1 auStack_168 [44];
  undefined4 local_13c;
  longlong local_138;
  undefined4 *local_130;
  INT_PTR local_128;
  FARPROC local_120;
  undefined8 local_118;
  undefined8 local_110;
  HMODULE local_108;
  ulonglong local_100;
  FARPROC local_f8;
  uint local_ec [2];
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  uint local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_168;
  if ((int)param_1[8] < 0) {
    if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_168)) {
      uVar17 = FUN_1400fc060();
      return uVar17;
    }
    goto LAB_14046997a;
  }
  pHVar5 = GetModuleHandleW(L"user32.dll");
  pFVar6 = GetProcAddress(pHVar5,"SetThreadDpiAwarenessContext");
  if (pFVar6 == (FARPROC)0x0) {
    IVar7 = -1;
    pHVar5 = LoadLibraryW(L"comctl32.dll");
    if (pHVar5 != (HMODULE)0x0) goto LAB_140469435;
LAB_140469480:
    uVar2 = invalid_parent_window_handle(param_1,param_2);
    uVar17 = (ulonglong)uVar2;
  }
  else {
    IVar7 = (*pFVar6)(0xfffffffffffffffc);
    pHVar5 = LoadLibraryW(L"comctl32.dll");
    if (pHVar5 == (HMODULE)0x0) goto LAB_140469480;
LAB_140469435:
    pFVar8 = GetProcAddress(pHVar5,"TaskDialogIndirect");
    if (pFVar8 == (FARPROC)0x0) {
      FreeLibrary(pHVar5);
      goto LAB_140469480;
    }
    if (*(longlong *)(param_1 + 2) == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0x180) + 8);
    }
    local_130 = param_2;
    local_128 = IVar7;
    local_120 = pFVar6;
    local_f8 = pFVar8;
    lVar9 = FUN_1400fc570(*(undefined8 *)(param_1 + 6));
    uVar10 = FUN_14017b9c0("UTF-16LE","UTF-8",*(undefined8 *)(param_1 + 6),lVar9 + 1);
    lVar9 = FUN_1400fc570(*(undefined8 *)(param_1 + 4));
    local_118 = FUN_14017b9c0("UTF-16LE","UTF-8",*(undefined8 *)(param_1 + 4),lVar9 + 1);
    local_dc = 0;
    uStack_c4 = 0;
    local_bc = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    iStack_a0 = 0;
    local_9c = 0;
    uStack_94 = 0;
    local_8c = 0;
    uStack_84 = 0;
    local_7c = 0;
    uStack_74 = 0;
    local_6c = 0;
    uStack_64 = 0;
    local_5c = 0;
    uStack_54 = 0;
    local_4c = 0;
    local_ec[1] = 0xa0;
    uStack_d4 = 0x1000000;
    uVar2 = *param_1;
    uVar16 = 0xfffe;
    if ((((uVar2 & 0x10) != 0) || (uVar16 = 0xffff, (uVar2 & 0x20) != 0)) ||
       (uVar16 = 0xfffd, (uVar2 & 0x40) != 0)) {
      uStack_c4 = uVar16;
    }
    local_ac = param_1[8];
    local_110 = uVar10;
    local_108 = pHVar5;
    local_e4 = uVar14;
    local_cc = local_118;
    uStack_b4 = uVar10;
    local_138 = FUN_140160c40((longlong)(int)local_ac * 0xc);
    iStack_a0 = 0;
    uVar17 = (ulonglong)param_1[8];
    if (0 < (int)param_1[8]) {
      lVar9 = *(longlong *)(param_1 + 10);
      lVar22 = 0;
      local_13c = 0;
      local_100 = 0;
      pcVar12 = (char *)0x0;
LAB_140469610:
      lVar18 = (longlong)(int)(~(uint)lVar22 + (int)uVar17);
      if ((*param_1 & 0x80) != 0) {
        lVar18 = lVar22;
      }
      lVar25 = lVar22 * 0x10;
      if ((*(byte *)(lVar9 + lVar25) & 2) == 0) {
        iVar3 = (uint)lVar22 + 100;
      }
      else {
        local_13c = *(undefined4 *)(lVar9 + lVar25 + 4);
        iVar3 = 2;
      }
      piVar1 = (int *)(local_138 + lVar18 * 0xc);
      *piVar1 = iVar3;
      pcVar23 = *(char **)(*(longlong *)(param_1 + 10) + 8 + lVar25);
      if (pcVar23 != (char *)0x0) {
        lVar9 = 1;
        uVar20 = 0;
        uVar17 = 0;
        do {
          if (pcVar23[uVar17] == '&') {
            uVar20 = uVar20 + 1;
          }
          else if (pcVar23[uVar17] == '\0') goto code_r0x000140469698;
          uVar17 = uVar17 + 1;
          lVar9 = lVar9 + 1;
        } while( true );
      }
      goto LAB_1404698ec;
    }
    pcVar12 = (char *)0x0;
    local_13c = 0;
LAB_1404697f1:
    uStack_a8 = (undefined4)local_138;
    uStack_a4 = (undefined4)((ulonglong)local_138 >> 0x20);
    IVar7 = (*local_f8)(local_ec + 1,local_ec,0,0);
    uVar21 = (uint7)((ulonglong)IVar7 >> 8) & 0xffffff;
    FreeLibrary(local_108);
    FUN_140160cf0(pcVar12);
    FUN_140160cf0(local_110);
    FUN_140160cf0(local_118);
    if (0 < (int)param_1[8]) {
      puVar19 = (undefined8 *)(local_138 + 4);
      lVar9 = 0;
      do {
        FUN_140160cf0(*puVar19);
        lVar9 = lVar9 + 1;
        puVar19 = (undefined8 *)((longlong)puVar19 + 0xc);
      } while (lVar9 < (int)param_1[8]);
    }
    FUN_140160cf0(local_138);
    if ((int)IVar7 < 0) {
      uVar2 = invalid_parent_window_handle(param_1,local_130);
      uVar17 = (ulonglong)uVar2;
      IVar7 = local_128;
      pFVar6 = local_120;
    }
    else {
      uVar4 = local_13c;
      IVar7 = local_128;
      pFVar6 = local_120;
      if ((ulonglong)local_ec[0] != 2) {
        if (((int)local_ec[0] < 100) || ((int)(param_1[8] + 100) <= (int)local_ec[0])) {
          *local_130 = 0xffffffff;
          uVar17 = CONCAT71(uVar21,1);
          goto LAB_14046948d;
        }
        uVar4 = *(undefined4 *)
                 (*(longlong *)(param_1 + 10) + -0x63c + (ulonglong)local_ec[0] * 0x10);
      }
      *local_130 = uVar4;
      uVar17 = CONCAT71(uVar21,1);
    }
  }
LAB_14046948d:
  if (pFVar6 != (FARPROC)0x0) {
    (*pFVar6)(IVar7);
  }
  goto LAB_14046994d;
code_r0x000140469698:
  pcVar24 = pcVar23;
  if (uVar20 == 0) goto LAB_1404697a3;
  if (uVar20 <= -uVar17 - 2) {
    if ((pcVar12 == (char *)0x0) || (local_100 < uVar20 + uVar17 + 1)) {
      uVar11 = lVar9 + uVar20;
      if (uVar11 < 0xfffffffffffffe00) {
        uVar11 = 0xfffffffffffffdff;
      }
      uVar20 = (uVar20 - uVar11) + uVar17;
      FUN_140160cf0(pcVar12);
      pcVar12 = (char *)FUN_140160c40(uVar20);
      local_100 = uVar20;
      if (pcVar12 == (char *)0x0) {
        pcVar12 = (char *)0x0;
        goto LAB_1404698ec;
      }
    }
    pcVar24 = pcVar12;
    if (uVar17 != 0xffffffffffffffff) {
      pcVar13 = pcVar12;
      uVar20 = uVar17;
      if ((uVar17 & 1) == 0) {
        cVar15 = *pcVar23;
        if (cVar15 == '&') {
          pcVar13 = pcVar12 + 1;
          *pcVar12 = '&';
          cVar15 = *pcVar23;
        }
        pcVar23 = pcVar23 + 1;
        *pcVar13 = cVar15;
        pcVar13 = pcVar13 + 1;
        uVar20 = uVar17 - 1;
      }
      if (uVar17 != 0) {
        lVar9 = 0;
        do {
          cVar15 = pcVar23[lVar9];
          if (cVar15 == '&') {
            *pcVar13 = '&';
            pcVar13 = pcVar13 + 1;
            cVar15 = pcVar23[lVar9];
          }
          *pcVar13 = cVar15;
          cVar15 = pcVar23[lVar9 + 1];
          if (cVar15 == '&') {
            pcVar13[1] = '&';
            pcVar13 = pcVar13 + 2;
            cVar15 = pcVar23[lVar9 + 1];
          }
          else {
            pcVar13 = pcVar13 + 1;
          }
          *pcVar13 = cVar15;
          pcVar13 = pcVar13 + 1;
          lVar9 = lVar9 + 2;
        } while (uVar20 + 1 != lVar9);
      }
    }
LAB_1404697a3:
    lVar9 = FUN_1400fc570(pcVar24);
    uVar14 = FUN_14017b9c0("UTF-16LE","UTF-8",pcVar24,lVar9 + 1);
    *(undefined8 *)(piVar1 + 1) = uVar14;
    lVar9 = *(longlong *)(param_1 + 10);
    if ((*(byte *)(lVar9 + lVar25) & 1) != 0) {
      iStack_a0 = *piVar1;
    }
    lVar22 = lVar22 + 1;
    uVar17 = (ulonglong)(int)param_1[8];
    if ((longlong)uVar17 <= lVar22) goto LAB_1404697f1;
    goto LAB_140469610;
  }
LAB_1404698ec:
  FreeLibrary(local_108);
  FUN_140160cf0(pcVar12);
  FUN_140160cf0(local_110);
  FUN_140160cf0(local_118);
  if (lVar22 != 0) {
    puVar19 = (undefined8 *)(local_138 + 4);
    do {
      FUN_140160cf0(*puVar19);
      puVar19 = (undefined8 *)((longlong)puVar19 + 0xc);
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  FUN_140160cf0(local_138);
  uVar17 = 0;
LAB_14046994d:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_168)) {
    return uVar17;
  }
LAB_14046997a:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_168);
}


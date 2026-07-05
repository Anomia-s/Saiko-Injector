/**
 * Function: getlogicalprocessorinformationex
 * Address:  1401ab7e0
 * Signature: undefined getlogicalprocessorinformationex(void)
 * Body size: 2065 bytes
 */


void getlogicalprocessorinformationex(longlong param_1)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  DWORD DVar9;
  HMODULE hModule;
  FARPROC pFVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int *piVar21;
  char *pcVar22;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  int *local_b0;
  char *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  longlong local_90;
  _SYSTEM_INFO local_88;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  local_b8 = param_1;
  hModule = GetModuleHandleA("kernel32.dll");
  pFVar10 = GetProcAddress(hModule,"GetLogicalProcessorInformationEx");
  if (pFVar10 == (FARPROC)0x0) goto LAB_1401abd58;
  local_4c = 0;
  (*pFVar10)(3,0,&local_4c);
  DVar9 = GetLastError();
  uVar8 = local_4c;
  if (DVar9 == 0x7a) {
    uVar18 = (ulonglong)local_4c;
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x18c) == '\0') {
      FUN_1401b83e0();
    }
    lVar17 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x1a0);
    if (uVar8 < 0x401) {
      uVar18 = uVar18 + 0xf >> 4;
      puVar14 = (undefined8 *)(lVar17 + uVar18 * 0x18 + 8);
      puVar11 = *(undefined8 **)(lVar17 + 8 + uVar18 * 0x18);
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)FUN_1401b9c30(lVar17,puVar14,uVar18);
      }
      else {
        *puVar14 = *puVar11;
      }
    }
    else {
      uVar13 = 0x7e00;
      if (DAT_1416b4510 == '\0') {
        uVar13 = 0;
      }
      if (uVar13 < uVar8) {
        if (uVar8 < 0x3eff81) {
          puVar11 = (undefined8 *)FUN_1401b9ae0();
        }
        else {
          puVar11 = (undefined8 *)FUN_1401b9b30(lVar17,uVar18);
        }
      }
      else {
        puVar11 = (undefined8 *)FUN_1401b9a90(lVar17,uVar18);
      }
    }
    (*pFVar10)(3,puVar11,&local_4c);
  }
  else {
    local_4c = 0;
    puVar11 = (undefined8 *)0x0;
  }
  local_50 = 0;
  (*pFVar10)(5,0,&local_50);
  DVar9 = GetLastError();
  uVar8 = local_50;
  if (DVar9 == 0x7a) {
    uVar18 = (ulonglong)local_50;
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x18c) == '\0') {
      FUN_1401b83e0();
    }
    lVar17 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x1a0);
    if (uVar8 < 0x401) {
      uVar18 = uVar18 + 0xf >> 4;
      puVar15 = (undefined8 *)(lVar17 + uVar18 * 0x18 + 8);
      puVar14 = *(undefined8 **)(lVar17 + 8 + uVar18 * 0x18);
      if (puVar14 == (undefined8 *)0x0) {
        puVar14 = (undefined8 *)FUN_1401b9c30(lVar17,puVar15,uVar18);
      }
      else {
        *puVar15 = *puVar14;
      }
    }
    else {
      uVar13 = 0x7e00;
      if (DAT_1416b4510 == '\0') {
        uVar13 = 0;
      }
      if (uVar13 < uVar8) {
        if (uVar8 < 0x3eff81) {
          puVar14 = (undefined8 *)FUN_1401b9ae0();
        }
        else {
          puVar14 = (undefined8 *)FUN_1401b9b30(lVar17,uVar18);
        }
      }
      else {
        puVar14 = (undefined8 *)FUN_1401b9a90(lVar17,uVar18);
      }
    }
    (*pFVar10)(5,puVar14,&local_50);
  }
  else {
    local_50 = 0;
    puVar14 = (undefined8 *)0x0;
  }
  local_54 = 0;
  (*pFVar10)(0,0,&local_54);
  DVar9 = GetLastError();
  uVar8 = local_54;
  if (DVar9 == 0x7a) {
    uVar18 = (ulonglong)local_54;
    lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar17 + 0x18c) == '\0') {
      FUN_1401b83e0();
    }
    lVar1 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x1a0
             );
    if (uVar8 < 0x401) {
      uVar18 = uVar18 + 0xf >> 4;
      puVar16 = (undefined8 *)(lVar1 + uVar18 * 0x18 + 8);
      puVar15 = *(undefined8 **)(lVar1 + 8 + uVar18 * 0x18);
      if (puVar15 == (undefined8 *)0x0) {
        puVar15 = (undefined8 *)FUN_1401b9c30(lVar1,puVar16,uVar18);
      }
      else {
        *puVar16 = *puVar15;
      }
    }
    else {
      uVar13 = 0x7e00;
      if (DAT_1416b4510 == '\0') {
        uVar13 = 0;
      }
      if (uVar13 < uVar8) {
        if (uVar8 < 0x3eff81) {
          puVar15 = (undefined8 *)FUN_1401b9ae0();
        }
        else {
          puVar15 = (undefined8 *)FUN_1401b9b30(lVar1,uVar18);
        }
      }
      else {
        puVar15 = (undefined8 *)FUN_1401b9a90(lVar1,uVar18);
      }
    }
    (*pFVar10)(0,puVar15,&local_54);
  }
  else {
    local_54 = 0;
    lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar15 = (undefined8 *)0x0;
  }
  pcVar22 = (char *)(lVar17 + 0x18c);
  GetSystemInfo(&local_88);
  uVar18 = (ulonglong)local_88.dwNumberOfProcessors;
  if (*pcVar22 == '\0') {
    FUN_1401b83e0();
  }
  uVar19 = uVar18 << 4;
  lVar17 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x1a0)
  ;
  if (local_88.dwNumberOfProcessors < 0x41) {
    puVar16 = (undefined8 *)(lVar17 + uVar18 * 0x18 + 8);
    local_b0 = *(int **)(lVar17 + 8 + uVar18 * 0x18);
    if (local_b0 == (int *)0x0) {
      local_b0 = (int *)FUN_1401b9c30(lVar17,puVar16,local_88.dwNumberOfProcessors);
    }
    else {
      *puVar16 = *(undefined8 *)local_b0;
    }
    memset(local_b0,0,uVar19);
    if (uVar18 != 0) goto LAB_1401abb14;
    bVar4 = true;
    bVar3 = true;
  }
  else {
    uVar20 = 0x7e00;
    if (DAT_1416b4510 == '\0') {
      uVar20 = 0;
    }
    if (uVar20 < uVar19) {
      if (local_88.dwNumberOfProcessors < 0x3eff9) {
        local_b0 = (int *)FUN_1401b9ae0();
      }
      else {
        local_b0 = (int *)FUN_1401b9b30();
      }
    }
    else {
      local_b0 = (int *)FUN_1401b9a90();
    }
    memset(local_b0,0,uVar19);
LAB_1401abb14:
    if (local_88.dwNumberOfProcessors - 1 < 3) {
      uVar19 = 0;
    }
    else {
      piVar21 = local_b0 + 0xf;
      uVar19 = 0;
      do {
        iVar12 = (int)uVar19;
        piVar21[-0xc] = iVar12;
        piVar21[-8] = iVar12 + 1;
        piVar21[-4] = iVar12 + 2;
        *piVar21 = iVar12 + 3;
        uVar19 = uVar19 + 4;
        piVar21 = piVar21 + 0x10;
      } while (uVar19 != (local_88.dwNumberOfProcessors & 0xfffffffc));
    }
    if ((local_88.dwNumberOfProcessors & 3) != 0) {
      lVar17 = uVar19 * 0x10;
      uVar20 = 0;
      do {
        *(int *)((longlong)local_b0 + uVar20 + lVar17 + 0xc) = (int)uVar19;
        uVar19 = (ulonglong)((int)uVar19 + 1);
        uVar20 = uVar20 + 0x10;
      } while ((local_88.dwNumberOfProcessors & 3) << 4 != uVar20);
    }
    bVar4 = false;
    bVar3 = false;
  }
  if (local_4c != 0) {
    iVar12 = 0;
    puVar16 = puVar11;
    do {
      uVar19 = puVar16[4];
      piVar21 = local_b0;
      if (uVar19 != 0) {
        do {
          if ((uVar19 & 1) != 0) {
            *piVar21 = iVar12;
          }
          bVar3 = 1 < uVar19;
          piVar21 = piVar21 + 4;
          uVar19 = uVar19 >> 1;
        } while (bVar3);
      }
      puVar16 = (undefined8 *)((longlong)puVar16 + (ulonglong)*(uint *)((longlong)puVar16 + 4));
      iVar12 = iVar12 + 1;
      bVar3 = bVar4;
    } while (puVar16 < (undefined8 *)((ulonglong)local_4c + (longlong)puVar11));
  }
  if (local_50 != 0) {
    iVar12 = 0;
    puVar16 = puVar14;
    do {
      uVar19 = puVar16[4];
      piVar21 = local_b0 + 1;
      if (uVar19 != 0) {
        do {
          if ((uVar19 & 1) != 0) {
            *piVar21 = iVar12;
          }
          bVar4 = 1 < uVar19;
          piVar21 = piVar21 + 4;
          uVar19 = uVar19 >> 1;
        } while (bVar4);
      }
      puVar16 = (undefined8 *)((longlong)puVar16 + (ulonglong)*(uint *)((longlong)puVar16 + 4));
      iVar12 = iVar12 + 1;
    } while (puVar16 < (undefined8 *)((ulonglong)local_50 + (longlong)puVar14));
  }
  if (local_54 != 0) {
    iVar12 = 0;
    puVar14 = puVar15;
    do {
      uVar19 = puVar14[4];
      piVar21 = local_b0 + 2;
      if (uVar19 != 0) {
        do {
          if ((uVar19 & 1) != 0) {
            *piVar21 = iVar12;
          }
          bVar4 = 1 < uVar19;
          piVar21 = piVar21 + 4;
          uVar19 = uVar19 >> 1;
        } while (bVar4);
      }
      puVar14 = (undefined8 *)((longlong)puVar14 + (ulonglong)*(uint *)((longlong)puVar14 + 4));
      iVar12 = iVar12 + 1;
    } while (puVar14 < (undefined8 *)((ulonglong)local_54 + (longlong)puVar15));
  }
  local_a8 = pcVar22;
  local_a0 = puVar15;
  local_98 = puVar11;
  if (!bVar3) {
    lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    SRWLock = (PSRWLOCK)(local_b8 + 0x2a0);
    local_90 = local_b8 + 0x2a8;
    piVar21 = local_b0 + 3;
    do {
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x169) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar1 = *(longlong *)(lVar17 + 0x180);
      uVar19 = *(ulonglong *)(lVar1 + 0x28);
      if ((uVar19 & 0xffff) == 0) {
        FUN_1400637c0(lVar1,uVar19);
      }
      lVar2 = *(longlong *)(lVar1 + 0x48);
      uVar20 = (ulonglong)(uint)((int)(uVar19 & 0xffff) << 5);
      *(undefined1 *)(lVar2 + uVar20) = 0x62;
      *(int *)(lVar2 + 1 + uVar20) = piVar21[-3];
      *(int *)(lVar2 + 5 + uVar20) = piVar21[-2];
      *(int *)(lVar2 + 9 + uVar20) = piVar21[-1];
      *(int *)(lVar2 + 0xd + uVar20) = *piVar21;
      AcquireSRWLockExclusive(SRWLock);
      puVar11 = *(undefined8 **)(local_b8 + 0x2b0);
      if (puVar11 == *(undefined8 **)(local_b8 + 0x2b8)) {
        FUN_1401a4720(local_90);
        puVar11 = *(undefined8 **)(local_b8 + 0x2b0);
      }
      puVar14 = (undefined8 *)(lVar2 + uVar20);
      *(undefined8 **)(local_b8 + 0x2b0) = puVar11 + 4;
      uVar5 = *puVar14;
      uVar6 = puVar14[1];
      uVar7 = puVar14[3];
      puVar11[2] = puVar14[2];
      puVar11[3] = uVar7;
      *puVar11 = uVar5;
      puVar11[1] = uVar6;
      ReleaseSRWLockExclusive(SRWLock);
      *(ulonglong *)(lVar1 + 0x28) = uVar19 + 1;
      piVar21 = piVar21 + 4;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  pcVar22 = local_a8;
  if (*local_a8 == '\0') {
    FUN_1401b83e0();
  }
  FUN_1401b8260(local_b0);
  puVar14 = local_98;
  puVar11 = local_a0;
  if (*pcVar22 == '\0') {
    FUN_1401b83e0();
  }
  FUN_1401b8260(puVar11);
  if (*pcVar22 == '\0') {
    FUN_1401b83e0();
  }
  FUN_1401b8260(puVar14);
LAB_1401abd58:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_d8);
}


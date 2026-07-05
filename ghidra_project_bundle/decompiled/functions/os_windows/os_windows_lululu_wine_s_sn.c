/**
 * Function: os_windows_lululu_wine_s_sn
 * Address:  1401ac540
 * Signature: undefined os_windows_lululu_wine_s_sn(void)
 * Body size: 6689 bytes
 */


/* WARNING: Removing unreachable block (ram,0x0001401ac991) */
/* WARNING: Removing unreachable block (ram,0x0001401ac97c) */
/* WARNING: Removing unreachable block (ram,0x0001401ac892) */
/* WARNING: Removing unreachable block (ram,0x0001401ac864) */
/* WARNING: Removing unreachable block (ram,0x0001401ac838) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void os_windows_lululu_wine_s_sn(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  char cVar5;
  u_short uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  DWORD DVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  size_t sVar14;
  HMODULE pHVar15;
  FARPROC pFVar16;
  FARPROC pFVar17;
  size_t sVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined4 extraout_var;
  LPTOP_LEVEL_EXCEPTION_FILTER pPVar23;
  undefined8 *puVar24;
  longlong lVar25;
  char *pcVar26;
  byte *pbVar27;
  longlong lVar28;
  char *pcVar29;
  longlong *plVar30;
  int *piVar31;
  byte *pbVar32;
  _MEMORYSTATUSEX *buf;
  undefined *puVar33;
  size_t _Size;
  bool bVar34;
  undefined8 local_6c8;
  ulonglong local_6c0;
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  ulonglong local_698;
  undefined8 local_690;
  undefined2 local_688;
  undefined4 local_686;
  undefined4 local_682;
  undefined4 local_67e;
  uint local_67a;
  undefined1 local_676 [64];
  undefined1 local_636 [1038];
  int local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 *local_120;
  PSRWLOCK local_118;
  PSRWLOCK local_110;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  byte *local_d0;
  _MEMORYSTATUSEX local_c8;
  int local_84;
  size_t local_80;
  int local_74;
  char *local_70;
  DWORD local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  setthreaddescription("Tracy Profiler",0);
  local_74 = *(int *)((longlong)param_1 + 0x4c);
  lVar28 = param_1[2];
  while (lVar28 == 0) {
    local_6c8 = 10;
    FUN_140041730();
    lVar28 = param_1[2];
  }
  FUN_1401ae080();
  param_1[5] = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_1416b46c0,0x104);
  iVar7 = _stat64i32(&DAT_1416b46c0,&local_6c8);
  if (iVar7 == 0) {
    param_1[5] = local_6a8;
  }
  lVar28 = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_1416b47d0,0x104);
  sVar14 = strlen(&DAT_1416b47d0);
  pcVar29 = &DAT_1416b47d0 + sVar14;
  if (&DAT_1416b47d0 < pcVar29) {
    lVar28 = 0;
    do {
      if ((*pcVar29 == '/') || (*pcVar29 == '\\')) {
        lVar28 = 1;
        goto LAB_1401ac650;
      }
      pcVar29 = pcVar29 + -1;
    } while (&DAT_1416b47d0 < pcVar29);
    pcVar29 = &DAT_1416b47d0;
  }
LAB_1401ac650:
  pcVar29 = pcVar29 + lVar28;
  sVar14 = strlen(pcVar29);
  local_80 = 0x3f;
  if (sVar14 < 0x3f) {
    local_80 = sVar14;
  }
  pHVar15 = GetModuleHandleA("ntdll.dll");
  pFVar16 = GetProcAddress(pHVar15,"RtlGetVersion");
  if (pFVar16 == (FARPROC)0x0) {
    uRam00000001416b48e8 = 0xa73776f;
    _DAT_1416b48e0 = 0x57203a534f;
    _DAT_1416b48e5 = 0x646e69;
    puVar33 = &DAT_1416b48ec;
  }
  else {
    memset((void *)((longlong)&local_6c8 + 4),0,0x110);
    local_6c8 = CONCAT44(local_6c8._4_4_,0x114);
    (*pFVar16)(&local_6c8);
    pHVar15 = GetModuleHandleA("ntdll.dll");
    pFVar16 = GetProcAddress(pHVar15,"wine_get_version");
    pHVar15 = GetModuleHandleA("ntdll.dll");
    pFVar17 = GetProcAddress(pHVar15,"wine_get_build_id");
    if (pFVar17 == (FARPROC)0x0 || pFVar16 == (FARPROC)0x0) {
      pcVar26 = "OS: Windows %lu.%lu.%lu\n";
    }
    else {
      (*pFVar17)();
      (*pFVar16)();
      pcVar26 = "OS: Windows %lu.%lu.%lu (Wine %s [%s])\n";
    }
    iVar7 = FUN_1401a5af0(&DAT_1416b48e0,pcVar26,local_6c8._4_4_,(undefined4)local_6c0,
                          local_6c0 >> 0x20);
    puVar33 = &DAT_1416b48e0 + iVar7;
  }
  iVar7 = FUN_1401a5af0(puVar33,"Compiler: MSVC clang-cl %i.%i.%i\n",0x15,1,8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x140) < DAT_141529894) && (FUN_140b6864c(&DAT_141529894), DAT_141529894 == -1)) {
    cannot_init_winsockn(&DAT_141529890);
    _Init_thread_footer(&DAT_141529894);
  }
  puVar33 = puVar33 + iVar7;
  gethostname((char *)&local_6c8,0x200);
  local_64 = 0x101;
  GetUserNameA((LPSTR)&local_228,&local_64);
  iVar7 = FUN_1401a5af0(puVar33,"User: %s@%s\n",&local_228,&local_6c8);
  plVar30 = (longlong *)cpuid_brand_part1_info(0x80000002);
  local_108 = *plVar30;
  local_d8 = 0;
  puVar3 = (undefined4 *)cpuid_brand_part2_info(0x80000003);
  local_f8 = *puVar3;
  local_f4 = puVar3[1];
  local_ec = puVar3[2];
  local_f0 = puVar3[3];
  local_100 = CONCAT44((int)plVar30[1],*(undefined4 *)((longlong)plVar30 + 0xc));
  puVar3 = (undefined4 *)cpuid_brand_part3_info(0x80000004);
  local_e8 = *puVar3;
  local_e4 = puVar3[1];
  local_dc = puVar3[2];
  local_e0 = puVar3[3];
  lVar28 = (longlong)iVar7;
  *(undefined8 *)(puVar33 + lVar28) = 0x3678203a68637241;
  *(undefined4 *)(puVar33 + lVar28 + 7) = 0xa3436;
  iVar7 = FUN_1401a5af0(puVar33 + lVar28 + 10,"CPU: %s\n",&local_108);
  uVar8 = _Thrd_hardware_concurrency();
  iVar9 = FUN_1401a5af0(puVar33 + iVar7 + lVar28 + 10,"CPU cores: %i\n",uVar8);
  local_c8.dwLength = 0x40;
  GlobalMemoryStatusEx(&local_c8);
  FUN_1401a5af0(puVar33 + iVar7 + lVar28 + 10 + iVar9,"RAM: %I64u MB\n",
                (ulonglong)(local_c8.ullTotalPhys._2_6_ >> 4));
  sVar18 = strlen(&DAT_1416b48e0);
  sVar14 = 0x3ff;
  if (sVar18 < 0x3ff) {
    sVar14 = sVar18;
  }
  DVar10 = GetCurrentProcessId();
  sVar18 = local_80;
  local_698 = (ulonglong)DVar10;
  lVar28 = cpuid_basic_info(0);
  local_686 = *(undefined4 *)(lVar28 + 4);
  local_682 = *(undefined4 *)(lVar28 + 8);
  local_67e = *(undefined4 *)(lVar28 + 0xc);
  puVar4 = (uint *)cpuid_Version_info(1);
  local_67a = *puVar4 >> 4 & 0xfff000 | *puVar4 & 0xfff;
  local_6c8 = *param_1;
  local_6c0 = DAT_141526c68;
  local_6b8 = param_1[2];
  local_6b0 = param_1[1];
  local_6a8 = param_1[4];
  uStack_6a0 = param_1[5];
  local_690 = param_1[0xb];
  local_688 = 0x21d;
  memcpy(local_676,pcVar29,local_80);
  _Size = 0x40 - sVar18;
  memset(local_676 + sVar18,0,_Size);
  memcpy(local_636,&DAT_1416b48e0,sVar14);
  memset(local_636 + sVar14,0,0x400 - sVar14);
  local_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  LOCK();
  iVar7 = DAT_141526c60 + 1;
  UNLOCK();
  local_228 = DAT_141526c60;
  local_224 = 0xffffffff;
  local_64 = 0xffffffff;
  DAT_141526c60 = iVar7;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x140) < DAT_141529894) && (FUN_140b6864c(&DAT_141529894), DAT_141529894 == -1)) {
    cannot_init_winsockn(&DAT_141529890);
    _Init_thread_footer(&DAT_141529894);
  }
  iVar7 = local_74;
  if (local_74 == 0) {
    cVar5 = FUN_1401ae440(&local_64,0x1f96,4);
    iVar7 = 0x1f96;
    if (cVar5 == '\0') {
      cVar5 = FUN_1401ae440(&local_64,0x1f97,4);
      iVar7 = 0x1f97;
      if (cVar5 == '\0') {
        cVar5 = FUN_1401ae440(&local_64,0x1f98,4);
        iVar7 = 0x1f98;
        if (cVar5 == '\0') {
          cVar5 = FUN_1401ae440(&local_64,0x1f99,4);
          iVar7 = 0x1f99;
          if (cVar5 == '\0') {
            cVar5 = FUN_1401ae440(&local_64,0x1f9a,4);
            iVar7 = 0x1f9a;
            if (cVar5 == '\0') {
              cVar5 = FUN_1401ae440(&local_64,0x1f9b,4);
              iVar7 = 0x1f9b;
              if (cVar5 == '\0') {
                cVar5 = FUN_1401ae440(&local_64,0x1f9c,4);
                iVar7 = 0x1f9c;
                if (cVar5 == '\0') {
                  cVar5 = FUN_1401ae440(&local_64,0x1f9d,4);
                  iVar7 = 0x1f9d;
                  if (cVar5 == '\0') {
                    cVar5 = FUN_1401ae440(&local_64,0x1f9e,4);
                    iVar7 = 0x1f9e;
                    if (cVar5 == '\0') {
                      cVar5 = FUN_1401ae440(&local_64,0x1f9f,4);
                      iVar7 = 0x1f9f;
                      if (cVar5 == '\0') {
                        cVar5 = FUN_1401ae440(&local_64,0x1fa0,4);
                        iVar7 = 0x1fa0;
                        if (cVar5 == '\0') {
                          cVar5 = FUN_1401ae440(&local_64,0x1fa1,4);
                          iVar7 = 0x1fa1;
                          if (cVar5 == '\0') {
                            cVar5 = FUN_1401ae440(&local_64,0x1fa2,4);
                            iVar7 = 0x1fa2;
                            if (cVar5 == '\0') {
                              cVar5 = FUN_1401ae440(&local_64,0x1fa3,4);
                              iVar7 = 0x1fa3;
                              if (cVar5 == '\0') {
                                cVar5 = FUN_1401ae440(&local_64,0x1fa4,4);
                                iVar7 = 0x1fa4;
                                if (cVar5 == '\0') {
                                  cVar5 = FUN_1401ae440(&local_64,0x1fa5,4);
                                  iVar7 = 0x1fa5;
                                  if (cVar5 == '\0') {
                                    cVar5 = FUN_1401ae440(&local_64,0x1fa6,4);
                                    iVar7 = 0x1fa6;
                                    if (cVar5 == '\0') {
                                      cVar5 = FUN_1401ae440(&local_64,0x1fa7,4);
                                      iVar7 = 0x1fa7;
                                      if (cVar5 == '\0') {
                                        cVar5 = FUN_1401ae440(&local_64,0x1fa8,4);
                                        iVar7 = 0x1fa8;
                                        if (cVar5 == '\0') {
                                          cVar5 = FUN_1401ae440(&local_64,0x1fa9,4);
                                          iVar7 = 0x1fa9;
                                          goto joined_r0x0001401acdcb;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    cVar5 = FUN_1401ae440(&local_64,local_74,4);
joined_r0x0001401acdcb:
    if (cVar5 == '\0') {
      while ((*(byte *)(DAT_141526fc0 + 0x30) & 1) == 0) {
        FUN_1401ae570(param_1,&local_228);
        local_c8.dwLength = 10;
        local_c8.dwMemoryLoad = 0;
        FUN_140041730(&local_c8);
      }
      goto LAB_1401adbbe;
    }
  }
  lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_74 = iVar7;
  if (*(char *)(lVar28 + 0x18c) == '\0') {
    FUN_1401b83e0();
  }
  lVar19 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x1a0)
  ;
  puVar24 = *(undefined8 **)(lVar19 + 0x20);
  if (puVar24 == (undefined8 *)0x0) {
    puVar24 = (undefined8 *)FUN_1401b9c30(lVar19,(undefined8 *)(lVar19 + 0x20),1);
  }
  else {
    *(undefined8 *)(lVar19 + 0x20) = *puVar24;
  }
  param_1[8] = puVar24;
  *(undefined4 *)puVar24 = 0xffffffff;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x140) < DAT_141529894) && (FUN_140b6864c(&DAT_141529894), DAT_141529894 == -1)) {
    cannot_init_winsockn(&DAT_141529890);
    _Init_thread_footer(&DAT_141529894);
  }
  local_70 = (char *)(lVar28 + 0x18c);
  cVar5 = FUN_1401aebf0(param_1[8],"255.255.255.255",0x1f96);
  if (cVar5 == '\0') {
    piVar31 = (int *)param_1[8];
    if ((longlong)*piVar31 != 0xffffffffffffffff) {
      closesocket((longlong)*piVar31);
      *piVar31 = -1;
      piVar31 = (int *)param_1[8];
    }
    if (*local_70 == '\0') {
      FUN_1401b83e0();
    }
    FUN_1401b8260(piVar31);
    param_1[8] = 0;
  }
  _DAT_1416b4ce0 = 3;
  _DAT_1416b4ce4 = 0x4c;
  _DAT_1416b4ce2 = (undefined2)local_74;
  DVar10 = GetCurrentProcessId();
  sVar14 = local_80;
  _DAT_1416b4ce8 = (ulonglong)DVar10;
  memcpy(&DAT_1416b4cf4,pcVar29,local_80);
  memset(&DAT_1416b4cf4 + sVar14,0,_Size);
  local_80 = (size_t)((int)sVar14 + 0x15);
  local_118 = (PSRWLOCK)(param_1 + 0x66);
  local_120 = param_1 + 0xe;
  local_110 = (PSRWLOCK)(param_1 + 0x54);
  lVar28 = 0;
LAB_1401acfc4:
  while ((*(char *)(param_1 + 9) != '\0' || ((*(byte *)(DAT_141526fc0 + 0x30) & 1) == 0))) {
    lVar19 = FUN_1401aed70(&local_64);
    param_1[7] = lVar19;
    piVar31 = (int *)param_1[8];
    if (lVar19 == 0) {
      if (piVar31 != (int *)0x0) {
        uVar20 = _Query_perf_frequency();
        uVar21 = _Query_perf_counter();
        if (uVar20 == 24000000) {
          uVar20 = ((longlong)uVar21 / 24000000) * 1000000000;
          lVar19 = (((longlong)uVar21 % 24000000) * 1000000000) / 24000000;
LAB_1401acfad:
          lVar19 = lVar19 + uVar20;
        }
        else {
          if (uVar20 != 10000000) {
            if ((uVar21 | uVar20) >> 0x20 == 0) {
              uVar22 = (uVar21 & 0xffffffff) / (uVar20 & 0xffffffff);
              uVar21 = (uVar21 & 0xffffffff) % (uVar20 & 0xffffffff);
            }
            else {
              uVar22 = (longlong)uVar21 / (longlong)uVar20;
              uVar21 = (longlong)uVar21 % (longlong)uVar20;
            }
            uVar21 = uVar21 * 1000000000;
            if ((uVar20 | uVar21) >> 0x20 == 0) {
              uVar20 = (uVar21 & 0xffffffff) / (uVar20 & 0xffffffff);
            }
            else {
              uVar20 = (longlong)uVar21 / (longlong)uVar20;
            }
            lVar19 = uVar22 * 1000000000;
            goto LAB_1401acfad;
          }
          lVar19 = uVar21 * 100;
        }
        if (3000000000 < (ulonglong)(lVar19 - lVar28)) {
          AcquireSRWLockExclusive(local_118);
          pcVar29 = (char *)param_1[0x65];
          if (pcVar29 != (char *)0x0) {
            sVar14 = strlen(pcVar29);
            _DAT_1416b4ce0 = 3;
            _DAT_1416b4ce4 = 0x4c;
            _DAT_1416b4ce2 = (undefined2)local_74;
            DVar10 = GetCurrentProcessId();
            _DAT_1416b4ce8 = (ulonglong)DVar10;
            memcpy(&DAT_1416b4cf4,pcVar29,sVar14);
            memset(&DAT_1416b4cf4 + sVar14,0,0x40 - sVar14);
            local_80 = (size_t)((int)sVar14 + 0x15);
            param_1[0x65] = 0;
          }
          ReleaseSRWLockExclusive(local_118);
          lVar28 = _Xtime_get_ticks();
          _DAT_1416b4cf0 =
               ((int)(SUB168(SEXT816(lVar28) * ZEXT816(0xd6bf94d5e57a42bd),8) >> 0x17) -
               ((int)(lVar28 / -0x6769800000000000) + (int)(lVar28 >> 0x3f))) -
               *(int *)(param_1 + 4);
          piVar31 = (int *)param_1[8];
          local_c8.dwLength._0_2_ = 2;
          uVar6 = htons(0x1f96);
          local_c8.dwLength._2_2_ = uVar6;
          local_c8.dwMemoryLoad = piVar31[1];
          sendto((longlong)*piVar31,&DAT_1416b4ce0,(int)local_80,0,(sockaddr *)&local_c8,0x10);
          lVar28 = lVar19;
        }
      }
    }
    else {
      if (piVar31 != (int *)0x0) {
        _DAT_1416b4cf0 = -1;
        local_c8.dwLength._0_2_ = 2;
        uVar6 = htons(0x1f96);
        local_c8.dwLength._2_2_ = uVar6;
        local_c8.dwMemoryLoad = piVar31[1];
        sendto((longlong)*piVar31,&DAT_1416b4ce0,(int)local_80,0,(sockaddr *)&local_c8,0x10);
        lVar19 = param_1[7];
        lVar28 = 0;
      }
      iVar7 = 8;
      plVar30 = &local_108;
      do {
        if (iVar7 < 1) {
          uVar8 = 0x66725079;
          if (local_108 == 0x6672507963617254) {
            lVar19 = param_1[7];
            iVar7 = 4;
            piVar31 = &local_84;
            goto LAB_1401ad280;
          }
          break;
        }
        iVar9 = *(int *)(lVar19 + 0x10);
        local_c8.ullTotalPhys._0_2_ = 0x300;
        local_c8._0_8_ = (longlong)iVar9;
        iVar11 = WSAPoll(&local_c8,1,2000);
        if (iVar11 < 1) break;
        uVar12 = recv((longlong)iVar9,(char *)plVar30,iVar7,0);
        iVar7 = iVar7 - uVar12;
        plVar30 = (longlong *)((longlong)plVar30 + (ulonglong)uVar12);
      } while (0 < (int)uVar12);
      puVar24 = (undefined8 *)param_1[7];
      uVar2 = *puVar24;
      if (*local_70 == '\0') {
        FUN_1401b83e0();
      }
      FUN_1401b8260(uVar2);
      if (*(int *)(puVar24 + 2) != -1) {
        closesocket((longlong)*(int *)(puVar24 + 2));
        *(undefined4 *)(puVar24 + 2) = 0xffffffff;
      }
      if (puVar24[4] != 0) {
        freeaddrinfo(puVar24[3]);
        closesocket((longlong)*(int *)(puVar24 + 5));
      }
      uVar2 = param_1[7];
      if (*local_70 == '\0') {
        FUN_1401b83e0();
      }
      FUN_1401b8260(uVar2);
      param_1[7] = 0;
    }
  }
  piVar31 = (int *)param_1[8];
  if (piVar31 != (int *)0x0) {
    _DAT_1416b4cf0 = -1;
    local_c8.dwLength._0_2_ = 2;
    uVar6 = htons(0x1f96);
    local_c8.dwLength._2_2_ = uVar6;
    local_c8.dwMemoryLoad = piVar31[1];
    sendto((longlong)*piVar31,&DAT_1416b4ce0,(int)local_80,0,(sockaddr *)&local_c8,0x10);
  }
LAB_1401adbbe:
  *(undefined1 *)((longlong)param_1 + 0x32) = 1;
  if ((longlong)(int)local_64 != 0xffffffffffffffff) {
    closesocket((longlong)(int)local_64);
  }
  return;
LAB_1401ad280:
  if (0 < iVar7) {
    iVar9 = *(int *)(lVar19 + 0x10);
    local_c8.ullTotalPhys._0_2_ = 0x300;
    local_c8._0_8_ = (longlong)iVar9;
    iVar11 = WSAPoll(&local_c8,1,2000);
    if (0 < iVar11) goto code_r0x0001401ad2b9;
    goto LAB_1401ad2d6;
  }
  if (local_84 != 0x4c) {
    local_c8.dwLength._0_1_ = 2;
    iVar7 = *(int *)(param_1[7] + 0x10);
    iVar9 = 1;
    buf = &local_c8;
    goto LAB_1401adab0;
  }
  bVar1 = *(byte *)(param_1 + 0x53);
  while ((bVar1 & 1) != 0) {
    bVar1 = *(byte *)(param_1 + 0x53);
  }
  *(undefined1 *)(param_1 + 0x53) = 1;
  uVar20 = rdtsc();
  FUN_1401ae570(param_1);
  LOCK();
  param_1[0x52] = param_1[0x52] + 1;
  UNLOCK();
  *(undefined1 *)(param_1 + 0x51) = 1;
  pPVar23 = SetUnhandledExceptionFilter(exception_exception_stack_overflow_0xx);
  param_1[99] = pPVar23;
  *(undefined1 *)(param_1 + 100) = 1;
  local_84 = CONCAT31(local_84._1_3_,1);
  iVar7 = *(int *)(param_1[7] + 0x10);
  iVar9 = 1;
  piVar31 = &local_84;
  do {
    if (iVar9 < 1) break;
    iVar11 = send((longlong)iVar7,(char *)piVar31,iVar9,0);
    iVar9 = iVar9 - iVar11;
    piVar31 = (int *)((longlong)piVar31 + (longlong)iVar11);
  } while (iVar11 != -1);
  memset((void *)param_1[0x11],0,0x4020);
  iVar7 = *(int *)(param_1[7] + 0x10);
  iVar9 = 0x492;
  pcVar29 = (char *)&local_6c8;
  do {
    if (iVar9 < 1) break;
    iVar11 = send((longlong)iVar7,pcVar29,iVar9,0);
    iVar9 = iVar9 - iVar11;
    pcVar29 = pcVar29 + iVar11;
  } while (iVar11 != -1);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *local_120 = 0;
  local_120[1] = 0;
  local_120[2] = 0;
  local_108 = param_1[0x50];
  iVar7 = *(int *)(param_1[7] + 0x10);
  iVar9 = 0x10;
  plVar30 = &local_108;
  local_100 = CONCAT44(uVar8,(int)uVar20) | uVar20 & 0xffffffff00000000;
  do {
    if (iVar9 < 1) break;
    iVar11 = send((longlong)iVar7,(char *)plVar30,iVar9,0);
    iVar9 = iVar9 - iVar11;
    plVar30 = (longlong *)((longlong)plVar30 + (longlong)iVar11);
  } while (iVar11 != -1);
  AcquireSRWLockExclusive(local_110);
  pbVar32 = (byte *)param_1[0x55];
  pbVar27 = (byte *)param_1[0x56];
  local_d0 = pbVar27;
  if (pbVar32 != pbVar27) {
    do {
      bVar1 = *pbVar32;
      if (bVar1 == 6) {
        lVar19 = 0x11;
        lVar25 = 9;
LAB_1401ad9b3:
        FUN_1401aee90(param_1,*(undefined8 *)(pbVar32 + lVar25),*(undefined2 *)(pbVar32 + lVar19));
      }
      else {
        if (bVar1 == 0x33) {
          lVar19 = 10;
          lVar25 = 2;
          goto LAB_1401ad9b3;
        }
        if (bVar1 == 0x18) {
          lVar19 = 0xd;
          lVar25 = 5;
          goto LAB_1401ad9b3;
        }
      }
      sVar14 = *(size_t *)(&DAT_140def5f0 + (ulonglong)bVar1 * 8);
      iVar7 = *(int *)(param_1 + 0x13);
      iVar11 = iVar7 - *(int *)((longlong)param_1 + 0x9c);
      iVar9 = (int)sVar14;
      if (0x40000 < iVar11 + iVar9) {
        iVar11 = FUN_1401a5c60(param_1[0x11],
                               (longlong)*(int *)((longlong)param_1 + 0x9c) + param_1[0x12],
                               param_1[0x14] + 4,iVar11,0x40414,1);
        *(int *)param_1[0x14] = iVar11;
        iVar11 = iVar11 + 4;
        pcVar29 = (char *)param_1[0x14];
        iVar7 = *(int *)(param_1[7] + 0x10);
        do {
          if (iVar11 < 1) break;
          iVar13 = send((longlong)iVar7,pcVar29,iVar11,0);
          iVar11 = iVar11 - iVar13;
          pcVar29 = pcVar29 + iVar13;
        } while (iVar13 != -1);
        iVar7 = *(int *)(param_1 + 0x13);
        if (0x80000 < iVar7) {
          *(undefined4 *)(param_1 + 0x13) = 0;
          iVar7 = 0;
        }
        *(int *)((longlong)param_1 + 0x9c) = iVar7;
        pbVar27 = local_d0;
      }
      memcpy((void *)((longlong)iVar7 + param_1[0x12]),pbVar32,sVar14);
      *(int *)(param_1 + 0x13) = *(int *)(param_1 + 0x13) + iVar9;
      pbVar32 = pbVar32 + 0x20;
    } while (pbVar32 != pbVar27);
  }
  ReleaseSRWLockExclusive(local_110);
  iVar7 = 0;
LAB_1401ad5b2:
  FUN_1401aefe0(param_1);
  iVar9 = FUN_1401af290(param_1);
  iVar11 = FUN_1401af650(param_1);
  if ((iVar9 != 1) && (iVar11 != 1)) {
    iVar13 = 0;
    if (iVar11 != 2 || iVar9 != 2) goto LAB_1401ad810;
    iVar9 = *(int *)(param_1 + 0x13);
    iVar11 = iVar9 - *(int *)((longlong)param_1 + 0x9c);
    if (iVar11 != 0) {
      iVar11 = FUN_1401a5c60(param_1[0x11],
                             (longlong)*(int *)((longlong)param_1 + 0x9c) + param_1[0x12],
                             param_1[0x14] + 4,iVar11,0x40414,1);
      *(int *)param_1[0x14] = iVar11;
      iVar11 = iVar11 + 4;
      pbVar32 = (byte *)param_1[0x14];
      iVar9 = *(int *)(param_1[7] + 0x10);
      local_d0 = pbVar32;
      do {
        if (iVar11 < 1) {
          bVar34 = (int)pbVar32 - (int)local_d0 != -1;
          break;
        }
        bVar34 = false;
        iVar13 = send((longlong)iVar9,(char *)pbVar32,iVar11,0);
        iVar11 = iVar11 - iVar13;
        pbVar32 = pbVar32 + iVar13;
      } while (iVar13 != -1);
      iVar9 = *(int *)(param_1 + 0x13);
      if (0x80000 < iVar9) {
        *(undefined4 *)(param_1 + 0x13) = 0;
        iVar9 = 0;
      }
      *(int *)((longlong)param_1 + 0x9c) = iVar9;
      if (!bVar34) goto LAB_1401ad865;
    }
    if (iVar7 != 500) {
      iVar13 = iVar7;
      if (*(int *)(param_1[7] + 0x14) < 1) {
        local_c8.ullTotalPhys._0_2_ = 0x300;
        local_c8._0_8_ = (longlong)*(int *)(param_1[7] + 0x10);
        iVar9 = WSAPoll(&local_c8,1,0);
        if (iVar9 < 1) {
          local_c8.dwLength = 10;
          local_c8.dwMemoryLoad = 0;
          FUN_140041730(&local_c8);
          iVar13 = iVar7 + 1;
        }
      }
LAB_1401ad810:
      do {
        iVar7 = iVar13;
        if (*(int *)(param_1[7] + 0x14) < 1) {
          local_c8.ullTotalPhys._0_2_ = 0x300;
          local_c8._0_8_ = (longlong)*(int *)(param_1[7] + 0x10);
          iVar9 = WSAPoll(&local_c8,1,0);
          if (iVar9 < 1) goto LAB_1401ad851;
        }
        cVar5 = main_thread(param_1);
        iVar13 = iVar7;
        if (cVar5 == '\0') goto LAB_1401ad865;
      } while( true );
    }
    *(undefined1 *)(param_1[0x12] + (longlong)iVar9) = 0x3d;
    *(int *)(param_1 + 0x13) = *(int *)(param_1 + 0x13) + 1;
    iVar9 = FUN_1401a5c60(param_1[0x11]);
    *(int *)param_1[0x14] = iVar9;
    iVar9 = iVar9 + 4;
    pcVar29 = (char *)param_1[0x14];
    iVar7 = *(int *)(param_1[7] + 0x10);
    pcVar26 = pcVar29;
    do {
      if (iVar9 < 1) {
        bVar34 = (int)pcVar26 - (int)pcVar29 != -1;
        break;
      }
      bVar34 = false;
      iVar11 = send((longlong)iVar7,pcVar26,iVar9,0);
      iVar9 = iVar9 - iVar11;
      pcVar26 = pcVar26 + iVar11;
    } while (iVar11 != -1);
    iVar7 = *(int *)(param_1 + 0x13);
    if (0x80000 < iVar7) {
      *(undefined4 *)(param_1 + 0x13) = 0;
      iVar7 = 0;
    }
    *(int *)((longlong)param_1 + 0x9c) = iVar7;
    iVar13 = 0;
    if (bVar34) goto LAB_1401ad810;
  }
  goto LAB_1401ad865;
code_r0x0001401ad2b9:
  uVar12 = recv((longlong)iVar9,(char *)piVar31,iVar7,0);
  iVar7 = iVar7 - uVar12;
  piVar31 = (int *)((longlong)piVar31 + (ulonglong)uVar12);
  uVar8 = extraout_var;
  if ((int)uVar12 < 1) goto LAB_1401ad2d6;
  goto LAB_1401ad280;
LAB_1401ad2d6:
  puVar24 = (undefined8 *)param_1[7];
  uVar2 = *puVar24;
  if (*local_70 == '\0') {
    FUN_1401b83e0();
  }
  FUN_1401b8260(uVar2);
  if (*(int *)(puVar24 + 2) != -1) {
    closesocket((longlong)*(int *)(puVar24 + 2));
    *(undefined4 *)(puVar24 + 2) = 0xffffffff;
  }
  if (puVar24[4] != 0) {
    freeaddrinfo(puVar24[3]);
    closesocket((longlong)*(int *)(puVar24 + 5));
  }
  uVar2 = param_1[7];
  if (*local_70 == '\0') {
    FUN_1401b83e0();
  }
  FUN_1401b8260(uVar2);
  param_1[7] = 0;
  goto LAB_1401acfc4;
  while( true ) {
    iVar11 = send((longlong)iVar7,(char *)buf,iVar9,0);
    iVar9 = iVar9 - iVar11;
    buf = (_MEMORYSTATUSEX *)((longlong)&buf->dwLength + (longlong)iVar11);
    if (iVar11 == -1) break;
LAB_1401adab0:
    if (iVar9 < 1) break;
  }
  puVar24 = (undefined8 *)param_1[7];
  uVar2 = *puVar24;
  if (*local_70 == '\0') {
    FUN_1401b83e0();
  }
  FUN_1401b8260(uVar2);
  if (*(int *)(puVar24 + 2) != -1) {
    closesocket((longlong)*(int *)(puVar24 + 2));
    *(undefined4 *)(puVar24 + 2) = 0xffffffff;
  }
  if (puVar24[4] != 0) {
    freeaddrinfo(puVar24[3]);
    closesocket((longlong)*(int *)(puVar24 + 5));
  }
  uVar2 = param_1[7];
  if (*local_70 == '\0') {
    FUN_1401b83e0();
  }
  FUN_1401b8260(uVar2);
  param_1[7] = 0;
  goto LAB_1401acfc4;
LAB_1401ad851:
  if ((*(byte *)(DAT_141526fc0 + 0x30) & 1) != 0) goto LAB_1401ad865;
  goto LAB_1401ad5b2;
LAB_1401ad865:
  if ((*(byte *)(DAT_141526fc0 + 0x30) & 1) != 0) goto LAB_1401adbf2;
  *(undefined1 *)(param_1 + 0x51) = 0;
  if ((*(char *)(param_1 + 100) == '\x01') &&
     (pPVar23 = SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)param_1[99]),
     pPVar23 != exception_exception_stack_overflow_0xx)) {
    SetUnhandledExceptionFilter(pPVar23);
  }
  *(undefined1 *)(param_1 + 100) = 0;
  param_1[0x13] = 0;
  puVar24 = (undefined8 *)param_1[7];
  uVar2 = *puVar24;
  if (*local_70 == '\0') {
    FUN_1401b83e0();
  }
  FUN_1401b8260(uVar2);
  if (*(int *)(puVar24 + 2) != -1) {
    closesocket((longlong)*(int *)(puVar24 + 2));
    *(undefined4 *)(puVar24 + 2) = 0xffffffff;
  }
  if (puVar24[4] != 0) {
    freeaddrinfo(puVar24[3]);
    closesocket((longlong)*(int *)(puVar24 + 5));
  }
  uVar2 = param_1[7];
  if (*local_70 == '\0') {
    FUN_1401b83e0();
  }
  FUN_1401b8260(uVar2);
  param_1[7] = 0;
  goto LAB_1401acfc4;
LAB_1401adbf2:
  do {
  } while ((DAT_141526c28 & 1) == 0);
  FUN_1401ac4d0();
LAB_1401adc0e:
  iVar7 = FUN_1401af290(param_1,&local_228);
  iVar9 = FUN_1401af650(param_1);
  if ((iVar7 != 1) && (iVar9 != 1)) {
    if (iVar9 != 2 || iVar7 != 2) {
      do {
        if (*(int *)(param_1[7] + 0x14) < 1) {
          local_c8.ullTotalPhys._0_2_ = 0x300;
          local_c8._0_8_ = (longlong)*(int *)(param_1[7] + 0x10);
          iVar7 = WSAPoll(&local_c8,1,0);
          if (iVar7 < 1) goto LAB_1401adcac;
        }
        cVar5 = main_thread(param_1);
        if (cVar5 == '\0') goto LAB_1401adbbe;
      } while( true );
    }
    iVar7 = *(int *)(param_1 + 0x13) - *(int *)((longlong)param_1 + 0x9c);
    if (iVar7 == 0) goto LAB_1401add9e;
    iVar9 = FUN_1401a5c60(param_1[0x11],(longlong)*(int *)((longlong)param_1 + 0x9c) + param_1[0x12]
                          ,param_1[0x14] + 4,iVar7,0x40414,1);
    *(int *)param_1[0x14] = iVar9;
    iVar9 = iVar9 + 4;
    pcVar29 = (char *)param_1[0x14];
    iVar7 = *(int *)(param_1[7] + 0x10);
    goto LAB_1401add5d;
  }
  goto LAB_1401adbbe;
LAB_1401adcac:
  while (((lVar28 = param_1[0x40], lVar28 != param_1[0x48] ||
          (param_1[0x48] = param_1[0x30], param_1[0x30] != lVar28)) &&
         (lVar28 * 0x20 + param_1[0x29] != -0x40))) {
    unresolved(param_1);
    lVar28 = 0;
    if (param_1[0x40] + 1 != param_1[0x28]) {
      lVar28 = param_1[0x40] + 1;
    }
    param_1[0x40] = lVar28;
  }
  goto LAB_1401adc0e;
  while( true ) {
    iVar11 = send((longlong)iVar7,pcVar29,iVar9,0);
    iVar9 = iVar9 - iVar11;
    pcVar29 = pcVar29 + iVar11;
    if (iVar11 == -1) break;
LAB_1401add5d:
    if (iVar9 < 1) break;
  }
  iVar7 = *(int *)(param_1 + 0x13);
  if (0x80000 < iVar7) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    iVar7 = 0;
  }
  *(int *)((longlong)param_1 + 0x9c) = iVar7;
LAB_1401add9e:
  local_c8.dwLength._0_1_ = 0x3c;
  cVar5 = FUN_1401b07a0(param_1,&local_c8,1);
  if (cVar5 != '\0') {
    do {
      while (*(int *)(param_1[7] + 0x14) < 1) {
        local_100 = CONCAT62(local_100._2_6_,0x300);
        local_108 = (longlong)*(int *)(param_1[7] + 0x10);
        iVar7 = WSAPoll(&local_108,1,0);
        if (0 < iVar7) break;
        while (((lVar28 = param_1[0x40], lVar28 != param_1[0x48] ||
                (param_1[0x48] = param_1[0x30], param_1[0x30] != lVar28)) &&
               (lVar28 * 0x20 + param_1[0x29] != -0x40))) {
          unresolved(param_1);
          lVar28 = 0;
          if (param_1[0x40] + 1 != param_1[0x28]) {
            lVar28 = param_1[0x40] + 1;
          }
          param_1[0x40] = lVar28;
        }
        iVar7 = FUN_1401af290(param_1,&local_228);
        iVar9 = FUN_1401af650(param_1);
        if (((iVar7 == 1) || (iVar9 == 1)) ||
           ((*(int *)(param_1 + 0x13) != *(int *)((longlong)param_1 + 0x9c) &&
            (cVar5 = FUN_1401af9e0(param_1), cVar5 == '\0')))) goto LAB_1401adbbe;
      }
      cVar5 = main_thread(param_1);
    } while (cVar5 != '\0');
  }
  goto LAB_1401adbbe;
}


/**
 * Function: sdlprocesscreatestderr_to_stdout
 * Address:  14045b620
 * Signature: undefined sdlprocesscreatestderr_to_stdout(void)
 * Body size: 3480 bytes
 */


undefined8 sdlprocesscreatestderr_to_stdout(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BOOL BVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  LPPROCESS_INFORMATION lpProcessInformation;
  ulonglong uVar11;
  char *pcVar12;
  LPWSTR lpCommandLine;
  size_t _Size;
  LPVOID lpEnvironment;
  longlong lVar13;
  HANDLE pvVar14;
  HANDLE pvVar15;
  HANDLE pvVar16;
  byte *pbVar17;
  longlong lVar18;
  byte *pbVar19;
  longlong lVar20;
  longlong *plVar21;
  uint uVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStackY_198 [32];
  int local_128;
  DWORD local_10c;
  _SECURITY_ATTRIBUTES local_108;
  _STARTUPINFOW local_e8;
  HANDLE local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  HANDLE local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  HANDLE pvStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStackY_198;
  bVar3 = 0;
  plVar8 = (longlong *)FUN_14014ff10(param_2,"SDL.process.create.args",0);
  uVar9 = FUN_1401547e0();
  uVar9 = FUN_14014ff10(param_2,"SDL.process.create.environment",uVar9);
  iVar4 = FUN_140150150(param_2,"SDL.process.create.stdin_option");
  iVar5 = FUN_140150150(param_2,"SDL.process.create.stdout_option");
  local_128 = FUN_140150150(param_2,"SDL.process.create.stderr_option");
  cVar2 = FUN_1401503a0(param_2,"SDL.process.create.stderr_to_stdout");
  if (cVar2 != '\0') {
    bVar3 = FUN_14014fd70(param_2,"SDL.process.create.stderr_option");
    bVar3 = bVar3 ^ 1;
  }
  local_58 = 0xffffffff;
  uStack_54 = 0xffffffff;
  pvStack_50 = (HANDLE)0xffffffffffffffff;
  local_68 = (HANDLE)0xffffffffffffffff;
  uStack_60 = 0xffffffff;
  uStack_5c = 0xffffffff;
  local_78 = (HANDLE)0xffffffffffffffff;
  uStack_70 = 0xffffffff;
  uStack_6c = 0xffffffff;
  local_10c = 1;
  plVar10 = (longlong *)parameter_s_is_invalid(uVar9);
  if (plVar10 != (longlong *)0x0) {
    lpProcessInformation = (LPPROCESS_INFORMATION)FUN_140160c70(1,0x18);
    if (lpProcessInformation != (LPPROCESS_INFORMATION)0x0) {
      *(LPPROCESS_INFORMATION *)(param_1 + 0x10) = lpProcessInformation;
      *(undefined4 *)&lpProcessInformation->hProcess = 0xffffffff;
      *(undefined4 *)((longlong)&lpProcessInformation->hProcess + 4) = 0xffffffff;
      *(undefined4 *)&lpProcessInformation->hThread = 0xffffffff;
      *(undefined4 *)((longlong)&lpProcessInformation->hThread + 4) = 0xffffffff;
      local_e8.lpReserved = (LPWSTR)0x0;
      local_e8.dwXCountChars = 0;
      local_e8.dwYCountChars = 0;
      local_e8.wShowWindow = 0;
      local_e8.cbReserved2 = 0;
      local_e8._68_4_ = 0;
      local_e8.lpReserved2 = (LPBYTE)0x0;
      local_e8.dwX = 0;
      local_e8.dwY = 0;
      local_e8.dwXSize = 0;
      local_e8.dwYSize = 0;
      local_e8.lpDesktop = (LPWSTR)0x0;
      local_e8.lpTitle = (LPWSTR)0x0;
      local_e8.cb = 0x68;
      local_e8._4_4_ = 0;
      local_e8.dwFillAttribute = 0;
      local_e8.dwFlags = 0x100;
      local_e8.hStdInput = (HANDLE)0xffffffffffffffff;
      local_e8.hStdOutput = (HANDLE)0xffffffffffffffff;
      local_e8.hStdError = (HANDLE)0xffffffffffffffff;
      local_108.lpSecurityDescriptor = (LPVOID)0x0;
      local_108.nLength = 0x18;
      local_108._4_4_ = 0;
      local_108.bInheritHandle = 1;
      local_108._20_4_ = 0;
      lVar20 = *plVar8;
      uVar11 = FUN_1400fc570(lVar20);
      if (uVar11 < 4) {
        pbVar17 = (byte *)*plVar8;
        if (pbVar17 != (byte *)0x0) {
LAB_14045b856:
          lVar13 = 0;
          lVar20 = 0;
LAB_14045b900:
          lVar20 = lVar20 + 2;
          bVar1 = *pbVar17;
          do {
            uVar22 = (uint)bVar1;
            pbVar17 = pbVar17 + 1;
            if (uVar22 < 0x5c) goto LAB_14045b8d1;
            while (pbVar19 = pbVar17, uVar22 != 0x5c) {
              while( true ) {
                lVar20 = lVar20 + 1;
                pbVar17 = pbVar19 + 1;
                uVar22 = (uint)*pbVar19;
                if (0x5b < uVar22) break;
LAB_14045b8d1:
                pbVar19 = pbVar17;
                if ((uVar22 < 0x3f) &&
                   (uVar11 = (ulonglong)uVar22, (0x5000004100000000U >> (uVar11 & 0x3f) & 1) == 0))
                {
                  if (uVar11 == 0x22) goto LAB_14045b900;
                  if (uVar11 == 0) {
                    lVar20 = lVar20 + 1;
                    pbVar17 = (byte *)plVar8[lVar13 + 1];
                    lVar13 = lVar13 + 1;
                    if (pbVar17 != (byte *)0x0) goto LAB_14045b900;
                    bVar24 = false;
                    lVar13 = FUN_140160c40();
                    goto joined_r0x00014045bc37;
                  }
                }
              }
            }
            lVar20 = lVar20 + (ulonglong)(*pbVar17 == 0 || *pbVar17 == 0x22) + 1;
            bVar1 = *pbVar17;
          } while( true );
        }
        bVar24 = false;
      }
      else {
        lVar20 = lVar20 + uVar11 + -4;
        iVar6 = FUN_1400fd210(lVar20,&DAT_141331759);
        if (iVar6 == 0) {
          pbVar17 = (byte *)*plVar8;
          if (pbVar17 != (byte *)0x0) goto LAB_14045bb85;
          bVar24 = true;
        }
        else {
          iVar6 = FUN_1400fd210(lVar20,&DAT_141357f66);
          bVar24 = iVar6 == 0;
          pbVar17 = (byte *)*plVar8;
          if (pbVar17 != (byte *)0x0) {
            if (iVar6 != 0) goto LAB_14045b856;
LAB_14045bb85:
            lVar13 = 0;
            lVar20 = 0;
LAB_14045bc20:
            lVar20 = lVar20 + 2;
            pbVar19 = pbVar17;
LAB_14045bba0:
            while( true ) {
              pbVar17 = pbVar19 + 1;
              bVar1 = *pbVar19;
              uVar11 = (ulonglong)bVar1;
              pbVar19 = pbVar17;
              if (bVar1 < 0x5c) break;
              if (bVar1 != 0x5c) {
                if ((bVar1 != 0x7c) && (bVar1 != 0x5e)) goto LAB_14045bbe2;
                goto LAB_14045bc20;
              }
              lVar20 = lVar20 + (ulonglong)(*pbVar17 == 0 || *pbVar17 == 0x22) + 1;
            }
            if (bVar1 < 0x3f) {
              if (((0x5000004100000000U >> (uVar11 & 0x3f) & 1) != 0) || (uVar11 == 0x22))
              goto LAB_14045bc20;
              if (uVar11 == 0) goto LAB_14045bc09;
            }
LAB_14045bbe2:
            lVar20 = lVar20 + 1;
            goto LAB_14045bba0;
          }
        }
      }
      lVar20 = 0;
      lVar13 = FUN_140160c40();
      goto joined_r0x00014045bc37;
    }
    FUN_140160cf0(plVar10);
  }
LAB_14045c39a:
  uVar9 = 0;
LAB_14045c39c:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStackY_198)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStackY_198);
LAB_14045bc09:
  lVar20 = lVar20 + 1;
  pbVar17 = (byte *)plVar8[lVar13 + 1];
  lVar13 = lVar13 + 1;
  if (pbVar17 == (byte *)0x0) goto LAB_14045bc29;
  goto LAB_14045bc20;
LAB_14045bc29:
  bVar24 = true;
  lVar13 = FUN_140160c40();
joined_r0x00014045bc37:
  if (lVar13 == 0) {
    lpCommandLine = (LPWSTR)0x0;
LAB_14045bd63:
    lpEnvironment = (LPVOID)0x0;
    bVar24 = false;
  }
  else {
    pcVar12 = (char *)*plVar8;
    if (pcVar12 != (char *)0x0) {
      lVar18 = 0;
      if (!bVar24) {
        lVar23 = 0;
LAB_14045ba2c:
        *(undefined1 *)(lVar13 + lVar23) = 0x22;
        lVar23 = lVar23 + 1;
LAB_14045ba4a:
        cVar2 = *pcVar12;
        switch(cVar2) {
        case ' ':
          *(undefined1 *)(lVar13 + lVar23) = 0x20;
          break;
        case '!':
        case '#':
        case '$':
        case '%':
        case '&':
        case '\'':
        case '(':
        case ')':
        case '*':
        case '+':
        case ',':
        case '-':
        case '.':
        case '/':
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case ':':
        case ';':
        case '<':
        case '=':
        case '>':
        case '?':
        case '@':
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case '[':
        case ']':
        case '^':
          goto switchD_14045ba63_caseD_21;
        case '\"':
          *(undefined1 *)(lVar13 + lVar23) = 0x5c;
LAB_14045ba96:
          *(char *)(lVar13 + 1 + lVar23) = *pcVar12;
          lVar23 = lVar23 + 2;
          pcVar12 = pcVar12 + 1;
          goto LAB_14045ba4a;
        case '\\':
          *(undefined1 *)(lVar13 + lVar23) = 0x5c;
          if ((pcVar12[1] == '\"') || (pcVar12[1] == '\0')) goto LAB_14045ba96;
          break;
        default:
          if ((cVar2 != '|') && (cVar2 == '\0')) goto LAB_14045ba10;
switchD_14045ba63_caseD_21:
          *(char *)(lVar13 + lVar23) = cVar2;
        }
        lVar23 = lVar23 + 1;
        pcVar12 = pcVar12 + 1;
        goto LAB_14045ba4a;
      }
      lVar23 = 0;
LAB_14045b97c:
      *(undefined1 *)(lVar13 + lVar23) = 0x22;
      lVar23 = lVar23 + 1;
LAB_14045b9a5:
      cVar2 = *pcVar12;
      switch(cVar2) {
      case ' ':
      case '&':
      case '<':
      case '>':
      case '^':
        goto switchD_14045b9be_caseD_20;
      case '!':
      case '#':
      case '$':
      case '%':
      case '\'':
      case '(':
      case ')':
      case '*':
      case '+':
      case ',':
      case '-':
      case '.':
      case '/':
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case ':':
      case ';':
      case '=':
      case '?':
      case '@':
      case 'A':
      case 'B':
      case 'C':
      case 'D':
      case 'E':
      case 'F':
      case 'G':
      case 'H':
      case 'I':
      case 'J':
      case 'K':
      case 'L':
      case 'M':
      case 'N':
      case 'O':
      case 'P':
      case 'Q':
      case 'R':
      case 'S':
      case 'T':
      case 'U':
      case 'V':
      case 'W':
      case 'X':
      case 'Y':
      case 'Z':
      case '[':
      case ']':
switchD_14045b9be_caseD_21:
        *(char *)(lVar13 + lVar23) = cVar2;
LAB_14045b9ee:
        lVar23 = lVar23 + 1;
        pcVar12 = pcVar12 + 1;
        goto LAB_14045b9a5;
      case '\"':
        *(undefined1 *)(lVar13 + lVar23) = 0x22;
        break;
      case '\\':
        *(undefined1 *)(lVar13 + lVar23) = 0x5c;
        if ((pcVar12[1] != '\"') && (pcVar12[1] != '\0')) goto LAB_14045b9ee;
        break;
      default:
        if (cVar2 == '|') {
switchD_14045b9be_caseD_20:
          *(undefined1 *)(lVar13 + lVar23) = 0x5e;
          break;
        }
        if (cVar2 != '\0') goto switchD_14045b9be_caseD_21;
        *(undefined2 *)(lVar13 + lVar23) = 0x2022;
        lVar23 = lVar23 + 2;
        pcVar12 = (char *)plVar8[lVar18 + 1];
        lVar18 = lVar18 + 1;
        if (pcVar12 == (char *)0x0) goto LAB_14045baa8;
        goto LAB_14045b97c;
      }
      *(char *)(lVar13 + 1 + lVar23) = *pcVar12;
      lVar23 = lVar23 + 2;
      pcVar12 = pcVar12 + 1;
      goto LAB_14045b9a5;
    }
LAB_14045baa8:
    *(undefined1 *)(lVar13 + -1 + lVar20) = 0;
    lpCommandLine = (LPWSTR)FUN_14017b9c0("UTF-16LE","UTF-8",lVar13,lVar20);
    FUN_140160cf0(lVar13);
    if (*plVar10 == 0) {
      lVar20 = FUN_140160c40(1);
      if (lVar20 != 0) goto LAB_14045bb22;
      goto LAB_14045bd63;
    }
    lVar20 = 0;
    plVar8 = plVar10;
    do {
      plVar8 = plVar8 + 1;
      lVar13 = FUN_1400fc570();
      lVar13 = lVar20 + lVar13;
      lVar20 = lVar13 + 1;
    } while (*plVar8 != 0);
    lVar20 = FUN_140160c40(lVar13 + 2);
    if (lVar20 == 0) goto LAB_14045bd63;
LAB_14045bb22:
    if (*plVar10 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = 0;
      plVar8 = plVar10;
      do {
        plVar21 = plVar8 + 1;
        _Size = FUN_1400fc570();
        memcpy((void *)(lVar20 + lVar13),(void *)*plVar8,_Size);
        *(undefined1 *)(_Size + lVar20 + lVar13) = 0;
        lVar13 = lVar13 + _Size + 1;
        plVar8 = plVar21;
      } while (*plVar21 != 0);
    }
    *(undefined1 *)(lVar20 + lVar13) = 0;
    lpEnvironment = (LPVOID)FUN_14017b9c0("UTF-16LE","UTF-8",lVar20,lVar13);
    FUN_140160cf0(lVar20);
    if (lpEnvironment == (LPVOID)0x0) {
      lpEnvironment = (LPVOID)0x0;
      goto LAB_14045c2a3;
    }
    if (*(char *)(param_1 + 1) == '\x01') {
      iVar4 = iVar4 + (uint)(iVar4 == 0);
      iVar5 = iVar5 + (uint)(iVar5 == 0);
      local_128 = local_128 + (uint)(local_128 == 0);
      if (iVar4 != 1) goto LAB_14045bcae;
LAB_14045bd07:
      local_e8.hStdInput = CreateFileW(L"\\\\.\\NUL",0x10000000,0,&local_108,3,0,(HANDLE)0x0);
      goto LAB_14045be4a;
    }
    if (iVar4 == 1) goto LAB_14045bd07;
LAB_14045bcae:
    if (iVar4 == 2) {
      BVar7 = CreatePipe((PHANDLE)&local_58,&pvStack_50,&local_108,0);
      if (BVar7 == 0) {
        local_58 = 0xffffffff;
        uStack_54 = 0xffffffff;
        pvStack_50 = (HANDLE)0xffffffffffffffff;
        goto LAB_14045c2a3;
      }
      BVar7 = SetNamedPipeHandleState(pvStack_50,&local_10c,(LPDWORD)0x0,(LPDWORD)0x0);
      if (BVar7 == 0) {
LAB_14045c108:
        pcVar12 = "SetNamedPipeHandleState()";
      }
      else {
        BVar7 = SetHandleInformation(pvStack_50,1,0);
        if (BVar7 != 0) {
          local_e8.hStdInput = (HANDLE)CONCAT44(uStack_54,local_58);
          goto LAB_14045be4a;
        }
LAB_14045c114:
        pcVar12 = "SetHandleInformation()";
      }
LAB_14045c29e:
      FUN_1403d7710(pcVar12);
LAB_14045c2a3:
      bVar24 = false;
    }
    else {
      if (iVar4 != 3) {
        pvVar16 = GetCurrentProcess();
        pvVar14 = GetStdHandle(0xfffffff6);
        pvVar15 = GetCurrentProcess();
        BVar7 = DuplicateHandle(pvVar15,pvVar14,pvVar16,&local_e8.hStdInput,0,1,2);
        if (BVar7 != 0) goto LAB_14045be4a;
        local_e8.hStdInput = (HANDLE)0xffffffffffffffff;
LAB_14045c08f:
        pcVar12 = "DuplicateHandle()";
        goto LAB_14045c29e;
      }
      cVar2 = s_is_not_set(param_2,"SDL.process.create.stdin_source");
      if (cVar2 == '\0') goto LAB_14045c2a3;
LAB_14045be4a:
      if (iVar5 != 1) {
        if (iVar5 != 2) {
          if (iVar5 == 3) {
            cVar2 = s_is_not_set(param_2,"SDL.process.create.stdout_source");
            if (cVar2 == '\0') goto LAB_14045c2a3;
          }
          else {
            pvVar16 = GetCurrentProcess();
            pvVar14 = GetStdHandle(0xfffffff5);
            pvVar15 = GetCurrentProcess();
            BVar7 = DuplicateHandle(pvVar15,pvVar14,pvVar16,&local_e8.hStdOutput,0,1,2);
            if (BVar7 == 0) {
              local_e8.hStdOutput = (HANDLE)0xffffffffffffffff;
              goto LAB_14045c08f;
            }
          }
          goto LAB_14045bfa9;
        }
        BVar7 = CreatePipe(&local_68,(PHANDLE)&uStack_60,&local_108,0);
        if (BVar7 != 0) {
          BVar7 = SetNamedPipeHandleState(local_68,&local_10c,(LPDWORD)0x0,(LPDWORD)0x0);
          if (BVar7 == 0) goto LAB_14045c108;
          BVar7 = SetHandleInformation(local_68,1,0);
          if (BVar7 == 0) goto LAB_14045c114;
          local_e8.hStdOutput = (HANDLE)CONCAT44(uStack_5c,uStack_60);
          goto LAB_14045bfa9;
        }
        local_68 = (HANDLE)0xffffffffffffffff;
        uStack_60 = 0xffffffff;
        uStack_5c = 0xffffffff;
        goto LAB_14045c2a3;
      }
      local_e8.hStdOutput = CreateFileW(L"\\\\.\\NUL",0x10000000,0,&local_108,3,0,(HANDLE)0x0);
LAB_14045bfa9:
      if (bVar3 == 0) {
        if (local_128 == 1) {
          local_e8.hStdError = CreateFileW(L"\\\\.\\NUL",0x10000000,0,&local_108,3,0,(HANDLE)0x0);
          goto LAB_14045c15e;
        }
        if (local_128 == 2) {
          BVar7 = CreatePipe(&local_78,(PHANDLE)&uStack_70,&local_108,0);
          if (BVar7 != 0) {
            BVar7 = SetNamedPipeHandleState(local_78,&local_10c,(LPDWORD)0x0,(LPDWORD)0x0);
            if (BVar7 == 0) goto LAB_14045c108;
            BVar7 = SetHandleInformation(local_78,1,0);
            if (BVar7 == 0) goto LAB_14045c114;
            local_e8.hStdError = (HANDLE)CONCAT44(uStack_6c,uStack_70);
            goto LAB_14045c15e;
          }
          local_78 = (HANDLE)0xffffffffffffffff;
          uStack_70 = 0xffffffff;
          uStack_6c = 0xffffffff;
        }
        else {
          if (local_128 != 3) {
            pvVar14 = GetCurrentProcess();
            pvVar16 = GetStdHandle(0xfffffff4);
            goto LAB_14045bfcd;
          }
          cVar2 = s_is_not_set(param_2,"SDL.process.create.stderr_source",&local_e8.hStdError);
          if (cVar2 != '\0') goto LAB_14045c15e;
        }
        goto LAB_14045c2a3;
      }
      pvVar14 = GetCurrentProcess();
      pvVar16 = local_e8.hStdOutput;
LAB_14045bfcd:
      pvVar15 = GetCurrentProcess();
      BVar7 = DuplicateHandle(pvVar15,pvVar16,pvVar14,&local_e8.hStdError,0,1,2);
      if (BVar7 == 0) {
        local_e8.hStdError = (HANDLE)0xffffffffffffffff;
        goto LAB_14045c08f;
      }
LAB_14045c15e:
      BVar7 = CreateProcessW((LPCWSTR)0x0,lpCommandLine,(LPSECURITY_ATTRIBUTES)0x0,
                             (LPSECURITY_ATTRIBUTES)0x0,1,0x400,lpEnvironment,(LPCWSTR)0x0,&local_e8
                             ,lpProcessInformation);
      if (BVar7 == 0) {
        pcVar12 = "CreateProcess";
        goto LAB_14045c29e;
      }
      FUN_14014fc70(*(undefined4 *)(param_1 + 8),"SDL.process.pid",lpProcessInformation->dwProcessId
                   );
      if ((iVar4 == 2) &&
         (cVar2 = FUN_14045c540(param_1,pvStack_50,&DAT_14135eea8,"SDL.process.stdin"),
         cVar2 == '\0')) {
        CloseHandle(pvStack_50);
        pvStack_50 = (HANDLE)0xffffffffffffffff;
      }
      if ((iVar5 == 2) &&
         (cVar2 = FUN_14045c540(param_1,local_68,&DAT_14135eecf,"SDL.process.stdout"), cVar2 == '\0'
         )) {
        CloseHandle(local_68);
        local_68 = (HANDLE)0xffffffffffffffff;
      }
      bVar24 = true;
      if ((local_128 == 2) &&
         (cVar2 = FUN_14045c540(param_1,local_78,&DAT_14135eecf,"SDL.process.stderr"), cVar2 == '\0'
         )) {
        CloseHandle(local_78);
        local_78 = (HANDLE)0xffffffffffffffff;
      }
    }
  }
  if ((local_e8.hStdInput != (HANDLE)0xffffffffffffffff) &&
     (local_e8.hStdInput != (HANDLE)CONCAT44(uStack_54,local_58))) {
    CloseHandle(local_e8.hStdInput);
  }
  if ((local_e8.hStdOutput != (HANDLE)0xffffffffffffffff) &&
     (local_e8.hStdOutput != (HANDLE)CONCAT44(uStack_5c,uStack_60))) {
    CloseHandle(local_e8.hStdOutput);
  }
  if ((local_e8.hStdError != (HANDLE)0xffffffffffffffff) &&
     (local_e8.hStdError != (HANDLE)CONCAT44(uStack_6c,uStack_70))) {
    CloseHandle(local_e8.hStdError);
  }
  if ((HANDLE)CONCAT44(uStack_54,local_58) != (HANDLE)0xffffffffffffffff) {
    CloseHandle((HANDLE)CONCAT44(uStack_54,local_58));
  }
  if ((HANDLE)CONCAT44(uStack_5c,uStack_60) != (HANDLE)0xffffffffffffffff) {
    CloseHandle((HANDLE)CONCAT44(uStack_5c,uStack_60));
  }
  if ((HANDLE)CONCAT44(uStack_6c,uStack_70) != (HANDLE)0xffffffffffffffff) {
    CloseHandle((HANDLE)CONCAT44(uStack_6c,uStack_70));
  }
  FUN_140160cf0(lpCommandLine);
  FUN_140160cf0(lpEnvironment);
  FUN_140160cf0(plVar10);
  uVar9 = 1;
  if (bVar24) goto LAB_14045c39c;
  if (pvStack_50 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(pvStack_50);
  }
  if (local_68 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(local_68);
  }
  if (local_78 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(local_78);
  }
  goto LAB_14045c39a;
LAB_14045ba10:
  *(undefined2 *)(lVar13 + lVar23) = 0x2022;
  lVar23 = lVar23 + 2;
  pcVar12 = (char *)plVar8[lVar18 + 1];
  lVar18 = lVar18 + 1;
  if (pcVar12 == (char *)0x0) goto LAB_14045baa8;
  goto LAB_14045ba2c;
}


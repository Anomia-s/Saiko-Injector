/**
 * Function: tracy_symbol_offline_resolve
 * Address:  1401b40e0
 * Signature: undefined tracy_symbol_offline_resolve(void)
 * Body size: 1395 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tracy_symbol_offline_resolve(void)

{
  longlong lVar1;
  int iVar2;
  UINT UVar3;
  uint uVar4;
  uint uVar5;
  DWORD DVar6;
  char *pcVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  size_t _Size;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *_Dst;
  HANDLE pvVar12;
  bool bVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_86d8 [32];
  ulonglong local_86b8;
  int local_86b0;
  undefined8 local_86a8;
  undefined4 local_86a0;
  longlong *local_8690;
  size_t local_8688;
  char *local_8680;
  char *local_8678;
  uint local_866c;
  ulonglong local_8668 [34];
  ulonglong local_8558;
  undefined4 local_8550;
  ulonglong local_8448 [4096];
  undefined7 local_448;
  undefined4 uStack_441;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_86d8;
  pcVar7 = (char *)FUN_1401a5b90("TRACY_SYMBOL_OFFLINE_RESOLVE");
  if (pcVar7 == (char *)0x0) {
    DAT_141527828 = false;
  }
  else {
    DAT_141527828 = *pcVar7 == '1';
  }
  FUN_1401b53f0();
  symqueryinlinetrace();
  pcVar7 = (char *)FUN_1401a5b90("TRACY_NO_DBGHELP_INIT_LOAD");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 != '1')) {
    iVar2 = K32EnumDeviceDrivers(local_8448,0x8000,&local_866c);
    if (iVar2 != 0) {
      UVar3 = GetWindowsDirectoryA((LPSTR)&local_448,0x104);
      if (UVar3 == 0) {
        local_448 = 0x646e69775c3a63;
        uStack_441 = 0x73776f;
      }
      local_8688 = strlen((char *)&local_448);
      if (7 < local_866c) {
        lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        local_8690 = (longlong *)(lVar1 + 0x1a0);
        local_8680 = (char *)((longlong)local_8668 + local_8688);
        local_8678 = (char *)(lVar1 + 0x18c);
        uVar17 = 0;
        do {
          uVar4 = K32GetDeviceDriverBaseNameA(local_8448[uVar17],&local_8558,0x104);
          if (uVar4 != 0) {
            uVar14 = uVar4 + 3;
            if (uVar14 < 0x401) {
              uVar15 = (ulonglong)uVar14 + 0xf >> 4;
              puVar10 = *(undefined8 **)(*local_8690 + 8 + uVar15 * 0x18);
              if (puVar10 == (undefined8 *)0x0) {
                puVar10 = (undefined8 *)FUN_1401b9c30();
              }
              else {
                *(undefined8 *)(*local_8690 + uVar15 * 0x18 + 8) = *puVar10;
              }
            }
            else {
              uVar5 = 0;
              if (DAT_1416b4510 != '\0') {
                uVar5 = 0x7e00;
              }
              if (uVar5 < uVar14) {
                if (uVar14 < 0x3eff81) {
                  puVar10 = (undefined8 *)FUN_1401b9ae0();
                }
                else {
                  puVar10 = (undefined8 *)FUN_1401b9b30();
                }
              }
              else {
                puVar10 = (undefined8 *)FUN_1401b9a90();
              }
            }
            *(undefined1 *)puVar10 = 0x3c;
            memcpy((undefined1 *)((longlong)puVar10 + 1),&local_8558,(ulonglong)uVar4);
            *(undefined2 *)((longlong)puVar10 + (ulonglong)uVar4 + 1) = 0x3e;
            uVar15 = local_8448[uVar17];
            iVar2 = K32GetDeviceDriverFileNameA(uVar15,&local_8558,0x104);
            if (iVar2 == 0) {
              _Dst = (undefined8 *)0x0;
              if ((char)DAT_141526fe8[3] != '\0') goto LAB_1401b4458;
LAB_1401b4481:
              puVar9 = (ulonglong *)DAT_141526fe8[1];
              plVar8 = DAT_141526fe8;
              if (puVar9 == (ulonglong *)DAT_141526fe8[2]) {
LAB_1401b44df:
                FUN_1401b8490(plVar8);
                puVar9 = (ulonglong *)plVar8[1];
              }
            }
            else {
              puVar9 = &local_8558;
              if (local_8550 == 0x5c746f6f && local_8558 == 0x526d65747379535c) {
                memcpy(local_8668,&local_448,local_8688);
                strcpy(local_8680,(char *)((longlong)&local_8550 + 3));
                puVar9 = local_8668;
              }
              if (DAT_141527828 == '\0') {
                uVar16 = local_8448[uVar17];
                pvVar12 = GetCurrentProcess();
                local_86a0 = 0;
                local_86a8 = 0;
                local_86b0 = 0;
                local_86b8 = uVar16;
                SymLoadModuleEx(pvVar12,0,puVar9,0);
              }
              _Size = strlen((char *)puVar9);
              if (*local_8678 == '\0') {
                FUN_1401b83e0();
              }
              uVar16 = _Size + 1;
              if (uVar16 < 0x401) {
                uVar16 = _Size + 0x10 >> 4;
                _Dst = *(undefined8 **)(*local_8690 + 8 + uVar16 * 0x18);
                if (_Dst == (undefined8 *)0x0) {
                  _Dst = (undefined8 *)FUN_1401b9c30();
                }
                else {
                  *(undefined8 *)(*local_8690 + uVar16 * 0x18 + 8) = *_Dst;
                }
              }
              else {
                uVar11 = 0;
                if (DAT_1416b4510 != '\0') {
                  uVar11 = 0x7e00;
                }
                if (uVar11 < uVar16) {
                  if (uVar16 < 0x3eff81) {
                    _Dst = (undefined8 *)FUN_1401b9ae0();
                  }
                  else {
                    _Dst = (undefined8 *)FUN_1401b9b30();
                  }
                }
                else {
                  _Dst = (undefined8 *)FUN_1401b9a90();
                }
              }
              memcpy(_Dst,puVar9,_Size);
              *(undefined1 *)((longlong)_Dst + _Size) = 0;
              if ((char)DAT_141526fe8[3] == '\0') goto LAB_1401b4481;
LAB_1401b4458:
              plVar8 = DAT_141526fe8;
              puVar9 = (ulonglong *)DAT_141526fe8[1];
              if ((ulonglong *)*DAT_141526fe8 == puVar9) {
                bVar13 = true;
              }
              else {
                bVar13 = uVar15 < puVar9[-4];
              }
              *(bool *)(DAT_141526fe8 + 3) = bVar13;
              if (puVar9 == (ulonglong *)plVar8[2]) goto LAB_1401b44df;
            }
            plVar8[1] = (longlong)(puVar9 + 4);
            *puVar9 = uVar15;
            puVar9[1] = 0;
            puVar9[2] = (ulonglong)puVar10;
            puVar9[3] = (ulonglong)_Dst;
          }
          uVar17 = uVar17 + 1;
        } while (local_866c >> 3 != uVar17);
      }
      plVar8 = DAT_141526fe8;
      if ((char)DAT_141526fe8[3] == '\0') {
        FUN_1401b85a0(*DAT_141526fe8,DAT_141526fe8[1],DAT_141526fe8[1] - *DAT_141526fe8 >> 5);
        *(undefined1 *)(plVar8 + 3) = 1;
      }
    }
    plVar8 = GetCurrentProcess();
    iVar2 = K32EnumProcessModules(plVar8,local_8448,0x2000,local_8668);
    if ((iVar2 != 0) && (7 < (uint)local_8668[0])) {
      uVar17 = 0;
      local_8690 = plVar8;
      do {
        iVar2 = K32GetModuleInformation(plVar8,local_8448[uVar17],&local_8558,0x18);
        if ((iVar2 != 0) &&
           (DVar6 = GetModuleFileNameA((HMODULE)local_8448[uVar17],(LPSTR)&local_448,0x3fd),
           iVar2 = local_8550, uVar15 = local_8558, DVar6 != 0)) {
          if (DAT_141527828 == '\0') {
            pvVar12 = GetCurrentProcess();
            local_86b0 = iVar2;
            local_86b8 = uVar15;
            local_86a0 = 0;
            local_86a8 = 0;
            SymLoadModuleEx(pvVar12,0,&local_448,0);
            plVar8 = local_8690;
          }
          FUN_1401b5930(&local_448,DVar6,uVar15,iVar2);
        }
        uVar17 = uVar17 + 1;
      } while ((uint)local_8668[0] >> 3 != uVar17);
    }
  }
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_86d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_86d8);
  }
  return;
}


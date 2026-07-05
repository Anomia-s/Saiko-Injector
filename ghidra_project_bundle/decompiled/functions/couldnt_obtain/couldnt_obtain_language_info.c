/**
 * Function: couldnt_obtain_language_info
 * Address:  14046ae80
 * Signature: undefined couldnt_obtain_language_info(void)
 * Body size: 789 bytes
 */


undefined1 couldnt_obtain_language_info(longlong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  INT_PTR IVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char cVar9;
  LPSTR pCVar10;
  undefined1 uVar11;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  LPSTR local_80;
  uint local_70;
  undefined4 local_6c;
  CHAR local_68 [16];
  CHAR local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  if ((DAT_1416f2298 == (HMODULE)0x0) &&
     (DAT_1416f2298 = GetModuleHandleW(L"kernel32.dll"), DAT_1416f2298 != (HMODULE)0x0)) {
    DAT_1416f22a0 = GetProcAddress(DAT_1416f2298,"GetUserPreferredUILanguages");
  }
  if (DAT_1416f22a0 == (FARPROC)0x0) {
    iVar1 = GetLocaleInfoA(0x400,0x59,local_58,0x10);
    pCVar10 = local_68;
    iVar2 = GetLocaleInfoA(0x400,0x5a,pCVar10,0x10);
    if (iVar1 == 0) {
      uVar11 = FUN_1400fbed0("Couldn\'t obtain language info");
    }
    else {
      if (iVar2 == 0) {
        pCVar10 = "";
      }
      local_88 = &DAT_14135fdac;
      if (iVar2 == 0) {
        local_88 = &DAT_1413a2ad6;
      }
      local_80 = pCVar10;
      FUN_1400fd420(param_1,param_2,"%s%s%s",local_58);
      uVar11 = 1;
    }
  }
  else {
    local_6c = 0;
    local_70 = 0;
    (*DAT_1416f22a0)(8,&local_6c,0,&local_70);
    lVar4 = FUN_140160c40((ulonglong)local_70 * 2);
    uVar11 = lVar4 != 0;
    if ((bool)uVar11) {
      IVar5 = (*DAT_1416f22a0)(8,&local_6c,lVar4,&local_70);
      if ((int)IVar5 == 0) {
        iVar1 = GetLocaleInfoA(0x400,0x59,local_58,0x10);
        pCVar10 = local_68;
        iVar2 = GetLocaleInfoA(0x400,0x5a,pCVar10,0x10);
        if (iVar1 == 0) {
          FUN_1400fbed0("Couldn\'t obtain language info");
        }
        else {
          if (iVar2 == 0) {
            pCVar10 = "";
          }
          local_88 = &DAT_14135fdac;
          if (iVar2 == 0) {
            local_88 = &DAT_1413a2ad6;
          }
          local_80 = pCVar10;
          FUN_1400fd420(param_1,param_2,"%s%s%s",local_58);
        }
      }
      else {
        uVar7 = (ulonglong)(local_70 - 1);
        if (param_2 < local_70 - 1) {
          uVar7 = param_2;
        }
        uVar6 = 0;
        uVar3 = 0;
        if (uVar7 != 0) {
          if (uVar7 == 1) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
            uVar6 = 0;
            do {
              cVar9 = *(char *)(lVar4 + uVar8 * 2);
              if (cVar9 == '-') {
                *(undefined1 *)(param_1 + uVar8) = 0x5f;
                cVar9 = *(char *)(lVar4 + 2 + uVar8 * 2);
joined_r0x00014046b11d:
                if (cVar9 != '\0') goto LAB_14046b13f;
LAB_14046b0d0:
                *(undefined1 *)(param_1 + 1 + uVar8) = 0x2c;
                uVar6 = (ulonglong)((int)uVar8 + 1);
              }
              else {
                if (cVar9 != '\0') {
                  *(char *)(param_1 + uVar8) = cVar9;
                  cVar9 = *(char *)(lVar4 + 2 + uVar8 * 2);
                  goto joined_r0x00014046b11d;
                }
                *(undefined1 *)(param_1 + uVar8) = 0x2c;
                uVar6 = uVar8 & 0xffffffff;
                cVar9 = *(char *)(lVar4 + 2 + uVar8 * 2);
                if (cVar9 == '\0') goto LAB_14046b0d0;
LAB_14046b13f:
                if (cVar9 == '-') {
                  *(undefined1 *)(param_1 + 1 + uVar8) = 0x5f;
                }
                else {
                  *(char *)(param_1 + 1 + uVar8) = cVar9;
                }
              }
              uVar3 = (uint)uVar6;
              uVar8 = uVar8 + 2;
            } while (((uint)uVar7 & 0xfffffffe) != uVar8);
          }
          if ((uVar7 & 1) != 0) {
            cVar9 = *(char *)(lVar4 + uVar8 * 2);
            if (cVar9 == '\0') {
              *(undefined1 *)(param_1 + uVar8) = 0x2c;
              uVar3 = (uint)uVar8;
            }
            else if (cVar9 == '-') {
              *(undefined1 *)(param_1 + uVar8) = 0x5f;
            }
            else {
              *(char *)(param_1 + uVar8) = cVar9;
            }
          }
          uVar6 = (ulonglong)uVar3;
        }
        *(undefined1 *)(param_1 + uVar6) = 0;
      }
      FUN_140160cf0(lVar4);
    }
  }
  if (DAT_1414ef3c0 != (local_40 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_40 ^ (ulonglong)auStack_a8);
  }
  return uVar11;
}


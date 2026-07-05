/**
 * Function: formatted_output_changed_between_two_runs
 * Address:  1400fd580
 * Signature: undefined formatted_output_changed_between_two_runs(void)
 * Body size: 552 bytes
 */


ulonglong formatted_output_changed_between_two_runs
                    (void *param_1,longlong param_2,wchar_t *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  undefined1 *puVar6;
  ulonglong *puVar7;
  undefined1 *puVar8;
  wchar_t *_Str;
  ulonglong uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  local_90 = param_4;
  if (param_3 == (wchar_t *)0x0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    sVar5 = wcslen(param_3);
    puVar6 = (undefined1 *)FUN_14017b9c0("UTF-8","WCHAR_T",param_3,sVar5 * 2 + 2);
    if (puVar6 == (undefined1 *)0x0) {
      sVar5 = 0xffffffff;
      goto LAB_1400fd75a;
    }
  }
  uVar1 = local_90;
  local_98 = local_90;
  puVar11 = &DAT_1413a2ad6;
  if (puVar6 != (undefined1 *)0x0) {
    puVar11 = puVar6;
  }
  puVar7 = (ulonglong *)FUN_14002c1a0();
  local_a0 = uVar1;
  local_a8 = 0;
  uVar3 = __stdio_common_vsprintf(*puVar7 | 2,local_88,0x40,puVar11);
  sVar5 = 0xffffffff;
  if (-1 < (int)uVar3) {
    iVar10 = uVar3 + 1;
    if (uVar3 < 0x40) {
      puVar8 = (undefined1 *)0x0;
      puVar11 = local_88;
    }
    else {
      puVar8 = (undefined1 *)FUN_140160c40(iVar10);
      uVar1 = local_90;
      if (puVar8 == (undefined1 *)0x0) {
        FUN_140160cf0(puVar6);
        sVar5 = 0xffffffff;
        goto LAB_1400fd75a;
      }
      puVar7 = (ulonglong *)FUN_14002c1a0();
      local_a0 = uVar1;
      local_a8 = 0;
      iVar4 = __stdio_common_vsprintf(*puVar7 | 2,puVar8,iVar10,puVar11);
      puVar11 = puVar8;
      if ((int)uVar3 < iVar4) {
        FUN_140160cf0(puVar6);
        bVar2 = FUN_1400fbed0("Formatted output changed between two runs");
        sVar5 = (size_t)bVar2;
        goto LAB_1400fd75a;
      }
    }
    FUN_140160cf0(puVar6);
    _Str = (wchar_t *)FUN_14017b9c0("WCHAR_T","UTF-8",puVar11,iVar10);
    if (_Str == (wchar_t *)0x0) {
      sVar5 = 0xffffffff;
    }
    else {
      if (param_2 != 0 && param_1 != (void *)0x0) {
        sVar5 = wcslen(_Str);
        uVar9 = param_2 - 1U;
        if (sVar5 < param_2 - 1U) {
          uVar9 = sVar5;
        }
        memcpy(param_1,_Str,uVar9 * 2);
        *(undefined2 *)((longlong)param_1 + uVar9 * 2) = 0;
      }
      sVar5 = wcslen(_Str);
      FUN_140160cf0(_Str);
    }
    puVar6 = puVar8;
    if (puVar8 == (undefined1 *)0x0) goto LAB_1400fd75a;
  }
  FUN_140160cf0(puVar6);
LAB_1400fd75a:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_c8);
  }
  return sVar5 & 0xffffffff;
}


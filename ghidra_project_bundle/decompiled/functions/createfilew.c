/**
 * Function: createfilew
 * Address:  14057f040
 * Signature: undefined createfilew(void)
 * Body size: 1335 bytes
 */


/* WARNING: Type propagation algorithm not settling */

bool createfilew(longlong *param_1,longlong *param_2)

{
  DWORD DVar1;
  undefined8 ******ppppppuVar2;
  undefined8 *******pppppppuVar3;
  ulonglong uVar4;
  HANDLE pvVar5;
  uint *******pppppppuVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint *******pppppppuVar9;
  longlong lVar10;
  uint ******ppppppuVar11;
  LPCWSTR _Src;
  LPCWSTR pWVar12;
  size_t _Size;
  longlong *_Src_00;
  char *_Size_00;
  longlong *_Dst;
  ulonglong uVar13;
  uint *******_Src_01;
  uint *******local_a8 [2];
  longlong local_98;
  ulonglong uStack_90;
  undefined8 *******local_88;
  longlong lStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint ******local_58;
  uint ******ppppppuStack_50;
  undefined8 local_48;
  
  _Src = (LPCWSTR)&local_68;
  local_48 = 0xfffffffffffffffe;
  if (param_1 != param_2) {
    uVar7 = param_2[2];
    _Src_00 = param_2;
    if (7 < (ulonglong)param_2[3]) {
      _Src_00 = (longlong *)*param_2;
    }
    if ((ulonglong)param_1[3] < uVar7) {
      FUN_140003fc0(param_1,uVar7);
    }
    else {
      _Dst = param_1;
      if (7 < (ulonglong)param_1[3]) {
        _Dst = (longlong *)*param_1;
      }
      param_1[2] = uVar7;
      memmove(_Dst,_Src_00,uVar7 * 2);
      *(undefined2 *)((longlong)_Dst + uVar7 * 2) = 0;
    }
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = (undefined8 *******)0x0;
  lStack_80 = 0;
  uVar7 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (longlong *)*param_2;
  }
  if (0x7ffffffffffffffe < uVar7) {
                    /* WARNING: Subroutine does not return */
    string_too_long();
  }
  if (uVar7 < 8) {
    uStack_70 = 7;
    local_88 = (undefined8 *******)*param_2;
    lStack_80 = param_2[1];
    uVar13 = 7;
    local_78 = uVar7;
    if (3 < 7 - uVar7) goto LAB_14057f1cf;
LAB_14057f116:
    FUN_1400042c0(&local_88,4);
  }
  else {
    uVar4 = uVar7 | 7;
    if (0x7ffffffffffffffe < uVar4) {
LAB_14057f559:
                    /* WARNING: Subroutine does not return */
      std::bad_array_new_length::bad_array_new_length();
    }
    uVar13 = 10;
    if (10 < uVar4) {
      uVar13 = uVar4;
    }
    if (uVar4 < 0x7ff) {
      local_88 = (undefined8 *******)FUN_140b65d30(uVar13 * 2 + 2);
    }
    else {
      if (0x7fffffffffffffeb < uVar4) goto LAB_14057f559;
      ppppppuVar2 = (undefined8 ******)FUN_140b65d30(uVar13 * 2 + 0x29);
      local_88 = (undefined8 *******)((longlong)ppppppuVar2 + 0x27U & 0xffffffffffffffe0);
      local_88[-1] = ppppppuVar2;
    }
    local_78 = uVar7;
    uStack_70 = uVar13;
    memcpy(local_88,param_2,uVar7 * 2 + 2);
    if (uVar13 - uVar7 < 4) goto LAB_14057f116;
LAB_14057f1cf:
    local_78 = uVar7 + 4;
    pppppppuVar3 = local_88;
    if (uVar13 < 8) {
      pppppppuVar3 = &local_88;
    }
    *(undefined8 *)((longlong)pppppppuVar3 + uVar7 * 2) = 0x70006d0074002e;
    *(undefined2 *)((longlong)pppppppuVar3 + uVar7 * 2 + 8) = 0;
  }
  FUN_140580880(_Src,&local_88);
  pWVar12 = (LPCWSTR)(param_1 + 4);
  if (pWVar12 == _Src) {
    if ((uint ******)0x7 < ppppppuStack_50) {
      lVar8 = CONCAT44(uStack_64,local_68);
      uVar7 = (longlong)ppppppuStack_50 * 2 + 2;
      lVar10 = lVar8;
      if (0xfff < uVar7) {
        lVar10 = *(longlong *)(lVar8 + -8);
        if (0x1f < (ulonglong)((lVar8 + -8) - lVar10)) goto LAB_14057f55e;
        uVar7 = (longlong)ppppppuStack_50 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(lVar10,uVar7);
    }
  }
  else {
    uVar7 = param_1[7];
    if (7 < uVar7) {
      lVar10 = *(longlong *)pWVar12;
      uVar4 = uVar7 * 2 + 2;
      lVar8 = lVar10;
      if (0xfff < uVar4) {
        lVar8 = *(longlong *)(lVar10 + -8);
        if (0x1f < (ulonglong)((lVar10 + -8) - lVar8)) goto LAB_14057f55e;
        uVar4 = uVar7 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(lVar8,uVar4);
    }
    param_1[6] = (longlong)local_58;
    param_1[7] = (longlong)ppppppuStack_50;
    *(longlong *)pWVar12 = CONCAT44(uStack_64,local_68);
    param_1[5] = CONCAT44(uStack_5c,uStack_60);
  }
  if (7 < (ulonglong)param_1[7]) {
    pWVar12 = (LPCWSTR)param_1[4];
  }
  pvVar5 = CreateFileW(pWVar12,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (pvVar5 == (HANDLE)0xffffffffffffffff) {
    DVar1 = GetLastError();
    pppppppuVar6 = (uint *******)local_a8;
    win32_error_lu(pppppppuVar6,DVar1);
    if (uStack_90 - local_98 < 0xd) {
      pppppppuVar6 = (uint *******)FUN_140008af0(local_a8,0xd,local_98,0,"CreateFileW: ",0xd);
    }
    else {
      _Src_01 = pppppppuVar6;
      if (0xf < uStack_90) {
        _Src_01 = local_a8[0];
      }
      _Size_00 = &DAT_0000000d;
      if (("" < (char *)((longlong)_Src_01 + local_98) && _Src_01 < (uint *******)0x1413a1b7a) &&
         (_Size_00 = (char *)((longlong)_Src_01 + -0x1413a1b6d),
         _Src_01 < "CreateFileW: " || _Size_00 == (char *)0x0)) {
        _Size_00 = (char *)0x0;
      }
      _Size = local_98 + 1;
      pppppppuVar9 = local_a8[0];
      if (uStack_90 < 0x10) {
        pppppppuVar9 = pppppppuVar6;
      }
      local_98 = local_98 + 0xd;
      memmove((char *)((longlong)pppppppuVar9 + 0xd),_Src_01,_Size);
      memcpy(_Src_01,"CreateFileW: ",(size_t)_Size_00);
      memcpy((char *)((longlong)_Src_01 + (longlong)_Size_00),_Size_00 + 0x1413a1b7a,
             0xd - (longlong)_Size_00);
    }
    local_68 = *(uint *)pppppppuVar6;
    uStack_64 = *(undefined4 *)((longlong)pppppppuVar6 + 4);
    uStack_60 = *(undefined4 *)(pppppppuVar6 + 1);
    uStack_5c = *(undefined4 *)((longlong)pppppppuVar6 + 0xc);
    local_58 = pppppppuVar6[2];
    ppppppuStack_50 = pppppppuVar6[3];
    pppppppuVar6[2] = (uint ******)0x0;
    pppppppuVar6[3] = (uint ******)0xf;
    *(char *)pppppppuVar6 = '\0';
    ppppppuVar11 = local_58;
    pWVar12 = (LPCWSTR)(param_1 + 9);
    if (pWVar12 != _Src) {
      if ((uint ******)0xf < ppppppuStack_50) {
        _Src = (LPCWSTR)CONCAT44(uStack_64,local_68);
      }
      if ((uint ******)param_1[0xc] < local_58) {
        FUN_1400069b0(pWVar12,local_58);
      }
      else {
        if ((uint ******)0xf < (uint ******)param_1[0xc]) {
          pWVar12 = (LPCWSTR)param_1[9];
        }
        param_1[0xb] = (longlong)local_58;
        memmove(pWVar12,_Src,(size_t)local_58);
        *(undefined1 *)((longlong)pWVar12 + (longlong)ppppppuVar11) = 0;
      }
    }
    if ((uint ******)0xf < ppppppuStack_50) {
      lVar8 = CONCAT44(uStack_64,local_68);
      ppppppuVar11 = (uint ******)((longlong)ppppppuStack_50 + 1);
      lVar10 = lVar8;
      if ((uint ******)0xfff < ppppppuVar11) {
        lVar10 = *(longlong *)(lVar8 + -8);
        if (0x1f < (ulonglong)((lVar8 + -8) - lVar10)) goto LAB_14057f55e;
        ppppppuVar11 = ppppppuStack_50 + 5;
      }
      thunk_FUN_140b68ba8(lVar10,ppppppuVar11);
    }
    local_58 = (uint ******)0x0;
    ppppppuStack_50 = (uint ******)0xf;
    local_68 = local_68 & 0xffffff00;
    if (0xf < uStack_90) {
      uVar7 = uStack_90 + 1;
      pppppppuVar6 = local_a8[0];
      if (0xfff < uVar7) {
        pppppppuVar6 = (uint *******)local_a8[0][-1];
        if ((char *)0x1f < (char *)((longlong)local_a8[0] + (-8 - (longlong)pppppppuVar6)))
        goto LAB_14057f55e;
        uVar7 = uStack_90 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppppuVar6,uVar7);
    }
  }
  else {
    param_1[0xe] = (longlong)pvVar5;
  }
  if (7 < uStack_70) {
    uVar7 = uStack_70 * 2 + 2;
    pppppppuVar3 = local_88;
    if (0xfff < uVar7) {
      pppppppuVar3 = (undefined8 *******)local_88[-1];
      if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppuVar3))) {
LAB_14057f55e:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar7 = uStack_70 * 2 + 0x29;
    }
    thunk_FUN_140b68ba8(pppppppuVar3,uVar7);
  }
  return pvVar5 != (HANDLE)0xffffffffffffffff;
}


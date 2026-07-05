/**
 * Function: patch_range_extends_past_written_region
 * Address:  140580340
 * Signature: undefined patch_range_extends_past_written_region(void)
 * Body size: 1079 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
patch_range_extends_past_written_region
          (longlong param_1,_union_540 param_2,LPCVOID param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  uint ******ppppppuVar2;
  uint ******ppppppuVar3;
  uint ******ppppppuVar4;
  longlong lVar5;
  BOOL BVar6;
  DWORD DVar7;
  uint *******pppppppuVar8;
  undefined4 extraout_var;
  uint *******pppppppuVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint ******ppppppuVar12;
  uint *******_Src;
  uint *_Dst;
  size_t _Size;
  uint *_Src_00;
  char *_Size_00;
  uint *******local_c8 [2];
  longlong local_b8;
  ulonglong uStack_b0;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint ******local_98;
  uint ******ppppppuStack_90;
  _OVERLAPPED local_88;
  DWORD local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x70) == 0) {
    local_88.InternalHigh = 0;
    pppppppuVar8 = (uint *******)FUN_140b65d30(0x20);
    local_88.u = (_union_540)0x14;
    local_88.hEvent = (HANDLE)0x1f;
    *(undefined4 *)pppppppuVar8 = 0x63746170;
    builtin_strncpy((char *)((longlong)pppppppuVar8 + 4),"h: f",4);
    *(undefined4 *)(pppppppuVar8 + 1) = 0x20656c69;
    builtin_strncpy((char *)((longlong)pppppppuVar8 + 0xc),"not ",4);
    *(undefined4 *)(pppppppuVar8 + 2) = 0x6e65706f;
    *(char *)((longlong)pppppppuVar8 + 0x14) = '\0';
    local_88.Internal = (ULONG_PTR)pppppppuVar8;
    if ((_OVERLAPPED *)(param_1 + 0x48) != &local_88) {
      if (*(ulonglong *)(param_1 + 0x60) < 0x14) {
        FUN_1400069b0((_OVERLAPPED *)(param_1 + 0x48),0x14);
      }
      else {
        puVar1 = *(undefined8 **)(param_1 + 0x48);
        *(undefined8 *)(param_1 + 0x58) = 0x14;
        ppppppuVar12 = *pppppppuVar8;
        ppppppuVar2 = pppppppuVar8[1];
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(pppppppuVar8 + 2);
        *puVar1 = ppppppuVar12;
        puVar1[1] = ppppppuVar2;
        *(undefined1 *)((longlong)puVar1 + 0x14) = 0;
      }
    }
    uVar11 = 0x20;
  }
  else {
    if (*(ulonglong *)(param_1 + 0x40) < param_4 + (longlong)param_2.Pointer) {
      local_88.InternalHigh = 0;
      pppppppuVar8 = (uint *******)FUN_140b65d30(0x30);
      local_88.u = (_union_540)0x28;
      local_88.hEvent = (HANDLE)0x2f;
      *pppppppuVar8 = (uint ******)0x72203a6863746170;
      pppppppuVar8[1] = (uint ******)0x7478652065676e61;
      *(undefined4 *)(pppppppuVar8 + 2) = 0x73646e65;
      builtin_strncpy((char *)((longlong)pppppppuVar8 + 0x14)," pas",4);
      *(undefined4 *)(pppppppuVar8 + 3) = 0x72772074;
      builtin_strncpy((char *)((longlong)pppppppuVar8 + 0x1c),"itte",4);
      pppppppuVar8[4] = (uint ******)0x6e6f69676572206e;
      *(char *)(pppppppuVar8 + 5) = '\0';
      local_88.Internal = (ULONG_PTR)pppppppuVar8;
      if ((_OVERLAPPED *)(param_1 + 0x48) != &local_88) {
        if (*(ulonglong *)(param_1 + 0x60) < 0x28) {
          FUN_1400069b0((_OVERLAPPED *)(param_1 + 0x48),0x28);
        }
        else {
          puVar1 = *(undefined8 **)(param_1 + 0x48);
          *(undefined8 *)(param_1 + 0x58) = 0x28;
          ppppppuVar12 = *pppppppuVar8;
          ppppppuVar2 = pppppppuVar8[1];
          ppppppuVar3 = pppppppuVar8[2];
          ppppppuVar4 = pppppppuVar8[3];
          puVar1[4] = pppppppuVar8[4];
          puVar1[2] = ppppppuVar3;
          puVar1[3] = ppppppuVar4;
          *puVar1 = ppppppuVar12;
          puVar1[1] = ppppppuVar2;
          *(undefined1 *)(puVar1 + 5) = 0;
        }
      }
      uVar11 = 0x30;
      goto LAB_1405805a2;
    }
    if (param_4 == 0) {
      return CONCAT71((int7)(param_4 + (longlong)param_2.Pointer >> 8),1);
    }
    while( true ) {
      uVar11 = 0x40000000;
      if (param_4 < 0x40000000) {
        uVar11 = param_4;
      }
      local_64 = 0;
      local_88.hEvent = (HANDLE)0x0;
      local_88.Internal = 0;
      local_88.InternalHigh = 0;
      local_88.u = param_2;
      BVar6 = WriteFile(*(HANDLE *)(param_1 + 0x70),param_3,(DWORD)uVar11,&local_64,&local_88);
      if ((BVar6 == 0) || (local_64 != (DWORD)uVar11)) break;
      param_3 = (LPCVOID)((longlong)param_3 + uVar11);
      param_2.s = param_2.s + uVar11;
      param_4 = param_4 - uVar11;
      if (param_4 == 0) {
        return CONCAT71((int7)(CONCAT44(extraout_var,BVar6) >> 8),1);
      }
    }
    DVar7 = GetLastError();
    pppppppuVar8 = (uint *******)local_c8;
    win32_error_lu(pppppppuVar8,DVar7);
    if (uStack_b0 - local_b8 < 0xb) {
      pppppppuVar8 = (uint *******)FUN_140008af0(local_c8,0xb,local_b8,0,"WriteFile: ",0xb);
    }
    else {
      _Src = pppppppuVar8;
      if (0xf < uStack_b0) {
        _Src = local_c8[0];
      }
      _Size_00 = (char *)0xb;
      if (("" < (char *)((longlong)_Src + local_b8) && _Src < (uint *******)0x1413a1a9d) &&
         (_Size_00 = (char *)((longlong)_Src + -0x1413a1a92),
         _Src < "WriteFile: " || _Size_00 == (char *)0x0)) {
        _Size_00 = (char *)0x0;
      }
      _Size = local_b8 + 1;
      pppppppuVar9 = local_c8[0];
      if (uStack_b0 < 0x10) {
        pppppppuVar9 = pppppppuVar8;
      }
      local_b8 = local_b8 + 0xb;
      memmove((char *)((longlong)pppppppuVar9 + 0xb),_Src,_Size);
      memcpy(_Src,"WriteFile: ",(size_t)_Size_00);
      memcpy((char *)((longlong)_Src + (longlong)_Size_00),_Size_00 + 0x1413a1a9d,
             0xb - (longlong)_Size_00);
    }
    local_a8 = *(uint *)pppppppuVar8;
    uStack_a4 = *(undefined4 *)((longlong)pppppppuVar8 + 4);
    uStack_a0 = *(undefined4 *)(pppppppuVar8 + 1);
    uStack_9c = *(undefined4 *)((longlong)pppppppuVar8 + 0xc);
    local_98 = pppppppuVar8[2];
    ppppppuStack_90 = pppppppuVar8[3];
    pppppppuVar8[2] = (uint ******)0x0;
    pppppppuVar8[3] = (uint ******)0xf;
    *(char *)pppppppuVar8 = '\0';
    ppppppuVar12 = local_98;
    _Dst = (uint *)(param_1 + 0x48);
    _Src_00 = &local_a8;
    if (_Dst != _Src_00) {
      if ((uint ******)0xf < ppppppuStack_90) {
        _Src_00 = (uint *)CONCAT44(uStack_a4,local_a8);
      }
      if (*(uint *******)(param_1 + 0x60) < local_98) {
        FUN_1400069b0(_Dst,local_98);
      }
      else {
        if ((uint ******)0xf < *(uint *******)(param_1 + 0x60)) {
          _Dst = *(uint **)(param_1 + 0x48);
        }
        *(uint *******)(param_1 + 0x58) = local_98;
        memmove(_Dst,_Src_00,(size_t)local_98);
        *(undefined1 *)((longlong)_Dst + (longlong)ppppppuVar12) = 0;
      }
    }
    if ((uint ******)0xf < ppppppuStack_90) {
      lVar5 = CONCAT44(uStack_a4,local_a8);
      ppppppuVar12 = (uint ******)((longlong)ppppppuStack_90 + 1);
      lVar10 = lVar5;
      if ((uint ******)0xfff < ppppppuVar12) {
        lVar10 = *(longlong *)(lVar5 + -8);
        if (0x1f < (ulonglong)((lVar5 + -8) - lVar10)) goto LAB_14058075e;
        ppppppuVar12 = ppppppuStack_90 + 5;
      }
      thunk_FUN_140b68ba8(lVar10,ppppppuVar12);
    }
    local_98 = (uint ******)0x0;
    ppppppuStack_90 = (uint ******)0xf;
    local_a8 = local_a8 & 0xffffff00;
    if (uStack_b0 < 0x10) {
      return 0;
    }
    uVar11 = uStack_b0 + 1;
    pppppppuVar8 = local_c8[0];
    if (0xfff < uVar11) {
      pppppppuVar8 = (uint *******)local_c8[0][-1];
      if ((char *)0x1f < (char *)((longlong)local_c8[0] + (-8 - (longlong)pppppppuVar8))) {
LAB_14058075e:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar11 = uStack_b0 + 0x28;
    }
  }
LAB_1405805a2:
  thunk_FUN_140b68ba8(pppppppuVar8,uVar11);
  return 0;
}


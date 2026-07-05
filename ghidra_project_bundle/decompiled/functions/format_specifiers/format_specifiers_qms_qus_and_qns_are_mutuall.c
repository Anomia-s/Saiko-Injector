/**
 * Function: format_specifiers_qms_qus_and_qns_are_mutuall
 * Address:  140031840
 * Signature: undefined format_specifiers_qms_qus_and_qns_are_mutuall(void)
 * Body size: 2295 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 *
format_specifiers_qms_qus_and_qns_are_mutuall
          (undefined8 *param_1,longlong *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 ******ppppppuVar9;
  ulonglong uVar10;
  undefined8 *****pppppuVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******_Dst;
  ulonglong uVar16;
  undefined1 uVar17;
  undefined8 *puVar18;
  undefined1 local_1a0 [112];
  undefined8 *local_130;
  void *local_128;
  ulonglong uStack_120;
  ulonglong local_118;
  ulonglong uStack_110;
  undefined8 ******local_108;
  undefined8 ******ppppppuStack_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  undefined8 ******local_e8;
  undefined8 ******ppppppuStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  longlong *local_c8;
  undefined8 *local_c0;
  undefined8 *******local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  undefined8 *local_90;
  undefined8 *******local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = *param_2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  lVar13 = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar5 = param_2[3];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(int *)(param_1 + 3) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(int *)param_1 = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  *(int *)(param_1 + 1) = (int)lVar13;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  param_1[5] = 0;
  param_1[7] = std::bad_alloc::bad_alloc_Constructor_or_Destructor;
  local_130 = param_1 + 8;
  param_1[4] = local_130;
  param_1[6] = 0x20;
  local_90 = param_1 + 0xd;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0xf;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0xf;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0xf;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 1;
  local_c0 = param_1 + 0x24;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0xf;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0xf;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0xf;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 1;
  *(undefined1 *)(param_1 + 0x3b) = param_3;
  *(undefined2 *)((longlong)param_1 + 0x1d9) = 0;
  uVar16 = param_1[2];
  local_c8 = param_2;
  local_68 = param_1;
  if (uVar16 < 4) {
LAB_140031c43:
    uVar17 = *(undefined1 *)(param_1 + 0x3b);
    local_118 = 0;
    uStack_110 = 0;
    local_128 = (void *)0x0;
    uStack_120 = 0;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    if ((longlong)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      string_too_long();
    }
    if (uVar16 < 0x10) {
      uStack_110 = 0xf;
      local_128 = (void *)*param_1;
      uStack_120 = param_1[1];
      local_118 = uVar16;
    }
    else {
      uVar8 = uVar16 | 0xf;
      uVar12 = 0x16;
      if (0x16 < uVar8) {
        uVar12 = uVar8;
      }
      if (uVar8 < 0xfff) {
        local_128 = (void *)FUN_140b65d30(uVar12 + 1);
      }
      else {
        lVar7 = FUN_140b65d30(uVar12 + 0x28);
        local_128 = (void *)(lVar7 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)local_128 - 8) = lVar7;
      }
      local_118 = uVar16;
      uStack_110 = uVar12;
      memcpy(local_128,param_1,uVar16 + 1);
    }
    x_as_format_modifier_is_not_currently_support((longlong)local_90,&local_128,uVar17);
  }
  else {
    puVar14 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar14 = (undefined8 *)*param_1;
    }
    lVar7 = thunk_FUN_140b67470(puVar14,uVar16 + (longlong)puVar14,"%Qms");
    uVar12 = 0xffffffffffffffff;
    if (lVar7 - (longlong)puVar14 != 0xffffffffffffffff && lVar7 != uVar16 + (longlong)puVar14) {
      *(undefined1 *)((longlong)param_1 + 0x1d9) = 1;
      uVar12 = lVar7 - (longlong)puVar14;
    }
    uVar16 = param_1[2];
    uVar8 = uVar12;
    if (uVar16 < 4) {
joined_r0x000140031c3d:
      if (uVar8 == 0xffffffffffffffff) goto LAB_140031c43;
    }
    else {
      puVar14 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar14 = (undefined8 *)*param_1;
      }
      lVar7 = thunk_FUN_140b67470(puVar14,uVar16 + (longlong)puVar14,&DAT_141332041);
      if (lVar7 - (longlong)puVar14 == 0xffffffffffffffff || lVar7 == uVar16 + (longlong)puVar14) {
        uVar16 = param_1[2];
      }
      else {
        if (uVar12 != 0xffffffffffffffff) {
          quill::v11::QuillError::QuillError
                    ((QuillError *)local_1a0,
                     "format specifiers %Qms, %Qus and %Qns are mutually exclusive");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_1a0,(ThrowInfo *)&DAT_14140fa50);
        }
        *(undefined1 *)((longlong)param_1 + 0x1d9) = 2;
        uVar16 = param_1[2];
        uVar12 = lVar7 - (longlong)puVar14;
      }
      uVar8 = uVar12;
      if (uVar16 < 4) goto joined_r0x000140031c3d;
      puVar14 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar14 = (undefined8 *)*param_1;
      }
      lVar7 = thunk_FUN_140b67470(puVar14,uVar16 + (longlong)puVar14,&DAT_14133481f);
      uVar8 = lVar7 - (longlong)puVar14;
      if (lVar7 == uVar16 + (longlong)puVar14 || uVar8 == 0xffffffffffffffff) {
        uVar16 = param_1[2];
        uVar8 = uVar12;
        goto joined_r0x000140031c3d;
      }
      if (uVar12 != 0xffffffffffffffff) {
        quill::v11::QuillError::QuillError
                  ((QuillError *)(local_1a0 + 0x38),
                   "format specifiers %Qms, %Qus and %Qns are mutually exclusive");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_1a0 + 0x38,(ThrowInfo *)&DAT_14140fa50);
      }
      *(undefined1 *)((longlong)param_1 + 0x1d9) = 3;
      uVar16 = param_1[2];
    }
    local_a8 = 0;
    uStack_a0 = 0;
    if (uVar8 <= uVar16) {
      uVar16 = uVar8;
    }
    local_b8 = (undefined8 *******)0x0;
    uStack_b0 = 0;
    puVar14 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar14 = (undefined8 *)*param_1;
    }
    if ((longlong)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      string_too_long();
    }
    if (uVar16 < 0x10) {
      uStack_a0 = 0xf;
      local_a8 = uVar16;
      memcpy(&local_b8,puVar14,uVar16);
      *(undefined1 *)((longlong)&local_b8 + uVar16) = 0;
      pppppppuVar15 = &local_b8;
      if (0xf < uStack_a0) {
        pppppppuVar15 = local_b8;
      }
      uVar17 = *(undefined1 *)(param_1 + 0x3b);
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = (undefined8 ******)0x0;
      ppppppuStack_e0 = (undefined8 ******)0x0;
      if ((longlong)local_a8 < 0) {
                    /* WARNING: Subroutine does not return */
        string_too_long();
      }
      _Dst = local_b8;
      uVar16 = local_a8;
      if (0xf < local_a8) goto LAB_140031d4a;
      local_d8 = local_a8;
      uStack_d0 = 0xf;
      local_e8 = *pppppppuVar15;
      ppppppuStack_e0 = pppppppuVar15[1];
    }
    else {
      uVar10 = uVar16 | 0xf;
      uVar12 = 0x16;
      if (0x16 < uVar10) {
        uVar12 = uVar10;
      }
      if (uVar10 < 0xfff) {
        _Dst = (undefined8 *******)FUN_140b65d30(uVar12 + 1);
      }
      else {
        ppppppuVar9 = (undefined8 ******)FUN_140b65d30(uVar12 + 0x28);
        _Dst = (undefined8 *******)((longlong)ppppppuVar9 + 0x27U & 0xffffffffffffffe0);
        _Dst[-1] = ppppppuVar9;
      }
      local_b8 = _Dst;
      local_a8 = uVar16;
      uStack_a0 = uVar12;
      memcpy(_Dst,puVar14,uVar16);
      *(undefined1 *)((longlong)_Dst + uVar16) = 0;
      uVar17 = *(undefined1 *)(local_68 + 0x3b);
      pppppppuVar15 = _Dst;
LAB_140031d4a:
      uStack_d0 = 0;
      local_d8 = 0;
      ppppppuStack_e0 = (undefined8 ******)0x0;
      local_e8 = (undefined8 ******)0x0;
      uVar10 = uVar16 | 0xf;
      uVar12 = 0x16;
      if (0x16 < uVar10) {
        uVar12 = uVar10;
      }
      if (uVar10 < 0xfff) {
        local_e8 = (undefined8 ******)FUN_140b65d30(uVar12 + 1);
      }
      else {
        pppppuVar11 = (undefined8 *****)FUN_140b65d30(uVar12 + 0x28);
        local_e8 = (undefined8 ******)((longlong)pppppuVar11 + 0x27U & 0xffffffffffffffe0);
        local_e8[-1] = pppppuVar11;
      }
      local_d8 = uVar16;
      uStack_d0 = uVar12;
      memcpy(local_e8,pppppppuVar15,uVar16 + 1);
    }
    x_as_format_modifier_is_not_currently_support((longlong)local_90,&local_e8,uVar17);
    puVar14 = local_68;
    uVar8 = uVar8 + 4;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = (undefined8 *******)0x0;
    uStack_80 = 0;
    uVar16 = local_68[2] - uVar8;
    if ((ulonglong)local_68[2] < uVar8) {
                    /* WARNING: Subroutine does not return */
      invalid_string_position();
    }
    puVar18 = local_68;
    if (0xf < (ulonglong)local_68[3]) {
      puVar18 = (undefined8 *)*local_68;
    }
    if ((longlong)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      string_too_long();
    }
    if (uVar16 < 0x10) {
      uStack_70 = 0xf;
      local_78 = uVar16;
      memcpy(&local_88,(void *)((longlong)puVar18 + uVar8),uVar16);
      *(undefined1 *)((longlong)&local_88 + uVar16) = 0;
      uVar16 = local_78;
      uVar12 = uStack_70;
      if (local_78 != 0) goto LAB_140031ed8;
    }
    else {
      uVar10 = uVar16 | 0xf;
      uVar12 = 0x16;
      if (0x16 < uVar10) {
        uVar12 = uVar10;
      }
      if (uVar10 < 0xfff) {
        pppppppuVar15 = (undefined8 *******)FUN_140b65d30(uVar12 + 1);
      }
      else {
        ppppppuVar9 = (undefined8 ******)FUN_140b65d30(uVar12 + 0x28);
        pppppppuVar15 = (undefined8 *******)((longlong)ppppppuVar9 + 0x27U & 0xffffffffffffffe0);
        pppppppuVar15[-1] = ppppppuVar9;
      }
      local_88 = pppppppuVar15;
      local_78 = uVar16;
      uStack_70 = uVar12;
      memcpy(pppppppuVar15,(void *)((longlong)puVar18 + uVar8),uVar16);
      *(undefined1 *)((longlong)pppppppuVar15 + uVar16) = 0;
      puVar14 = local_68;
LAB_140031ed8:
      uVar12 = uStack_70;
      uVar17 = *(undefined1 *)(puVar14 + 0x3b);
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = (undefined8 ******)0x0;
      ppppppuStack_100 = (undefined8 ******)0x0;
      pppppppuVar15 = local_88;
      if (uStack_70 < 0x10) {
        pppppppuVar15 = &local_88;
      }
      if ((longlong)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        string_too_long();
      }
      if (uVar16 < 0x10) {
        uStack_f0 = 0xf;
        local_108 = *pppppppuVar15;
        ppppppuStack_100 = pppppppuVar15[1];
        local_f8 = uVar16;
      }
      else {
        uVar10 = uVar16 | 0xf;
        uVar8 = 0x16;
        if (0x16 < uVar10) {
          uVar8 = uVar10;
        }
        if (uVar10 < 0xfff) {
          local_108 = (undefined8 ******)FUN_140b65d30(uVar8 + 1);
        }
        else {
          pppppuVar11 = (undefined8 *****)FUN_140b65d30(uVar8 + 0x28);
          local_108 = (undefined8 ******)((longlong)pppppuVar11 + 0x27U & 0xffffffffffffffe0);
          local_108[-1] = pppppuVar11;
        }
        local_f8 = uVar16;
        uStack_f0 = uVar8;
        memcpy(local_108,pppppppuVar15,uVar16 + 1);
      }
      x_as_format_modifier_is_not_currently_support((longlong)local_c0,&local_108,uVar17);
      *(undefined1 *)((longlong)local_68 + 0x1da) = 1;
    }
    if (0xf < uVar12) {
      uVar16 = uVar12 + 1;
      pppppppuVar15 = local_88;
      if (0xfff < uVar16) {
        pppppppuVar15 = (undefined8 *******)local_88[-1];
        if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppuVar15)))
        goto LAB_1400320c5;
        uVar16 = uVar12 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppppuVar15,uVar16);
    }
    if (0xf < uStack_a0) {
      uVar16 = uStack_a0 + 1;
      pppppppuVar15 = _Dst;
      if (0xfff < uVar16) {
        pppppppuVar15 = (undefined8 *******)_Dst[-1];
        if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pppppppuVar15))) goto LAB_1400320c5;
        uVar16 = uStack_a0 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppppuVar15,uVar16);
    }
  }
  puVar14 = local_68;
  plVar6 = local_c8;
  uVar16 = local_c8[3];
  if (0xf < uVar16) {
    lVar7 = *local_c8;
    uVar12 = uVar16 + 1;
    lVar13 = lVar7;
    if (0xfff < uVar12) {
      lVar13 = *(longlong *)(lVar7 + -8);
      if (0x1f < (ulonglong)((lVar7 + -8) - lVar13)) {
LAB_1400320c5:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar12 = uVar16 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar13,uVar12);
  }
  plVar6[2] = 0;
  plVar6[3] = 0xf;
  *(undefined1 *)plVar6 = 0;
  return puVar14;
}


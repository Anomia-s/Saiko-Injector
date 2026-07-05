/**
 * Function: createheap_call_failed_for_heap
 * Address:  140541b50
 * Signature: undefined8 * __thiscall createheap_call_failed_for_heap(void * this, undefined8 * param_1, undefined1[16] * param_2)
 * Body size: 1812 bytes
 */


undefined8 * __thiscall
createheap_call_failed_for_heap(void *this,undefined8 *param_1,undefined1 (*param_2) [16])

{
  undefined4 uVar1;
  void *_Src;
  longlong *plVar2;
  int iVar3;
  basic_streambuf<char,std::char_traits<char>_> bVar4;
  longlong lVar5;
  short *psVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  basic_ostream<char,std::char_traits<char>_> *this_00;
  ulonglong uVar9;
  undefined1 (*pauVar10) [16];
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 (*_Src_00) [16];
  short *psVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  basic_streambuf<char,std::char_traits<char>_> bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined1 auVar36 [16];
  int iStack_19c;
  undefined1 local_198 [16];
  ulonglong local_188;
  basic_streambuf<char,std::char_traits<char>_> local_180 [3];
  undefined8 *local_168;
  undefined8 *local_160;
  longlong *local_148;
  ulonglong *local_140;
  int *local_130;
  ulonglong local_118;
  uint local_110;
  ios_base local_100 [6];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  ulonglong local_58;
  ulonglong local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  local_40 = 0xfffffffffffffffe;
  local_98 = *(undefined8 *)*param_2;
  local_78 = 0x400000;
  local_8c = 0;
  uStack_84 = 0x100000001;
  local_70 = 0x84;
  if (*(int *)((longlong)this + 0x5c8) != 1) {
    local_70 = 0;
  }
  if (2 < (byte)(*param_2)[8]) {
    httplib::ClientImpl::vfunction4();
    *param_1 = 0;
    return param_1;
  }
  local_90 = (byte)(*param_2)[8] + 1;
  local_48 = (longlong *)0x0;
  iVar3 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0xe0))
                    (*(longlong **)((longlong)this + 0x10),&local_98,&DAT_140e52f48);
  if (-1 < iVar3) {
    _Src_00 = param_2 + 1;
    uVar9 = *(ulonglong *)param_2[2];
    if (uVar9 != 0) {
      pauVar10 = _Src_00;
      if (0xf < *(ulonglong *)(param_2[2] + 8)) {
        pauVar10 = *(undefined1 (**) [16])param_2[1];
      }
      local_198 = (undefined1  [16])0x0;
      local_188 = 0;
      local_180[0] = (basic_streambuf<char,std::char_traits<char>_>)0x7;
      if (0x7ffffffffffffffe < uVar9) {
                    /* WARNING: Subroutine does not return */
        string_too_long();
      }
      uVar11 = uVar9;
      if (uVar9 < 8) {
        psVar6 = (short *)local_198;
        psVar13 = psVar6;
        if (3 < uVar9) goto LAB_140541e48;
LAB_140541e6b:
        uVar14 = uVar11 - 1;
        if ((uVar11 & 7) != 0) {
          uVar15 = 0;
          do {
            *psVar13 = (short)(char)(*pauVar10)[uVar15];
            psVar13 = psVar13 + 1;
            uVar15 = uVar15 + 1;
          } while ((uVar11 & 7) != uVar15);
          pauVar10 = (undefined1 (*) [16])(*pauVar10 + uVar15);
          uVar11 = uVar11 - uVar15;
        }
        if (6 < uVar14) {
          uVar14 = 0;
          do {
            psVar13[uVar14] = (short)(char)(*pauVar10)[uVar14];
            psVar13[uVar14 + 1] = (short)(char)(*pauVar10)[uVar14 + 1];
            psVar13[uVar14 + 2] = (short)(char)(*pauVar10)[uVar14 + 2];
            psVar13[uVar14 + 3] = (short)(char)(*pauVar10)[uVar14 + 3];
            psVar13[uVar14 + 4] = (short)(char)(*pauVar10)[uVar14 + 4];
            psVar13[uVar14 + 5] = (short)(char)(*pauVar10)[uVar14 + 5];
            psVar13[uVar14 + 6] = (short)(char)(*pauVar10)[uVar14 + 6];
            psVar13[uVar14 + 7] = (short)(char)(*pauVar10)[uVar14 + 7];
            uVar14 = uVar14 + 8;
          } while (uVar11 != uVar14);
        }
      }
      else {
        bVar4 = (basic_streambuf<char,std::char_traits<char>_>)(uVar9 | 7);
        if (0x7ffffffffffffffe < (ulonglong)bVar4) {
LAB_140542246:
                    /* WARNING: Subroutine does not return */
          std::bad_array_new_length::bad_array_new_length();
        }
        bVar16 = (basic_streambuf<char,std::char_traits<char>_>)0xa;
        if (10 < (ulonglong)bVar4) {
          bVar16 = bVar4;
        }
        if ((ulonglong)bVar4 < 0x7ff) {
          psVar6 = (short *)FUN_140b65d30((longlong)bVar16 * 2 + 2);
        }
        else {
          if (0x7fffffffffffffeb < (ulonglong)bVar4) goto LAB_140542246;
          lVar5 = FUN_140b65d30((longlong)bVar16 * 2 + 0x29);
          psVar6 = (short *)(lVar5 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)(psVar6 + -4) = lVar5;
        }
        local_198._0_8_ = psVar6;
        psVar13 = psVar6;
        local_180[0] = bVar16;
        if (uVar9 < 4) goto LAB_140541e6b;
LAB_140541e48:
        if ((psVar6 < *pauVar10 + uVar9) &&
           (psVar13 = psVar6, pauVar10 < (undefined1 (*) [16])(psVar6 + uVar9))) goto LAB_140541e6b;
        if (uVar9 < 0x10) {
          uVar14 = 0;
LAB_1405421e2:
          uVar15 = uVar9 & 0x7ffffffffffffffc;
          do {
            uVar1 = *(undefined4 *)(*pauVar10 + uVar14);
            uVar27 = (undefined1)((uint)uVar1 >> 0x18);
            uVar26 = (undefined1)((uint)uVar1 >> 0x10);
            uVar25 = (undefined1)((uint)uVar1 >> 8);
            auVar23._4_4_ =
                 (int)(CONCAT35(CONCAT21(CONCAT11(uVar27,uVar27),uVar26),CONCAT14(uVar26,uVar1)) >>
                      0x20);
            auVar23[3] = uVar25;
            auVar23[2] = uVar25;
            auVar23[0] = (undefined1)uVar1;
            auVar23[1] = auVar23[0];
            auVar23._8_8_ = 0;
            auVar24 = psraw(auVar23,8);
            *(longlong *)(psVar6 + uVar14) = auVar24._0_8_;
            uVar14 = uVar14 + 4;
          } while (uVar15 != uVar14);
          pauVar10 = (undefined1 (*) [16])(*pauVar10 + uVar15);
          uVar11 = (ulonglong)((uint)uVar9 & 3);
          psVar13 = psVar6 + uVar15;
          if (uVar9 != uVar15) goto LAB_140541e6b;
        }
        else {
          uVar14 = uVar9 & 0x7ffffffffffffff0;
          uVar11 = 0;
          do {
            uVar15 = *(ulonglong *)(*pauVar10 + uVar11);
            uVar25 = (undefined1)(uVar15 >> 0x38);
            auVar22._8_6_ = 0;
            auVar22._0_8_ = uVar15;
            auVar22[0xe] = uVar25;
            auVar22[0xf] = uVar25;
            uVar25 = (undefined1)(uVar15 >> 0x30);
            auVar21._14_2_ = auVar22._14_2_;
            auVar21._8_5_ = 0;
            auVar21._0_8_ = uVar15;
            auVar21[0xd] = uVar25;
            auVar20._13_3_ = auVar21._13_3_;
            auVar20._8_4_ = 0;
            auVar20._0_8_ = uVar15;
            auVar20[0xc] = uVar25;
            uVar25 = (undefined1)(uVar15 >> 0x28);
            auVar19._12_4_ = auVar20._12_4_;
            auVar19._8_3_ = 0;
            auVar19._0_8_ = uVar15;
            auVar19[0xb] = uVar25;
            auVar18._11_5_ = auVar19._11_5_;
            auVar18._8_2_ = 0;
            auVar18._0_8_ = uVar15;
            auVar18[10] = uVar25;
            uVar25 = (undefined1)(uVar15 >> 0x20);
            auVar17._10_6_ = auVar18._10_6_;
            auVar17[8] = 0;
            auVar17._0_8_ = uVar15;
            auVar17[9] = uVar25;
            auVar36._9_7_ = auVar17._9_7_;
            auVar36[8] = uVar25;
            auVar36._0_8_ = uVar15;
            uVar25 = (undefined1)(uVar15 >> 0x18);
            auVar24._8_8_ = auVar36._8_8_;
            auVar24[7] = uVar25;
            auVar24[6] = uVar25;
            uVar25 = (undefined1)(uVar15 >> 0x10);
            auVar24[5] = uVar25;
            auVar24[4] = uVar25;
            uVar25 = (undefined1)(uVar15 >> 8);
            auVar24[3] = uVar25;
            auVar24[2] = uVar25;
            auVar24[0] = (undefined1)uVar15;
            auVar24[1] = auVar24[0];
            uVar15 = *(ulonglong *)(*pauVar10 + uVar11 + 8);
            uVar25 = (undefined1)(uVar15 >> 0x38);
            auVar35._8_6_ = 0;
            auVar35._0_8_ = uVar15;
            auVar35[0xe] = uVar25;
            auVar35[0xf] = uVar25;
            uVar25 = (undefined1)(uVar15 >> 0x30);
            auVar34._14_2_ = auVar35._14_2_;
            auVar34._8_5_ = 0;
            auVar34._0_8_ = uVar15;
            auVar34[0xd] = uVar25;
            auVar33._13_3_ = auVar34._13_3_;
            auVar33._8_4_ = 0;
            auVar33._0_8_ = uVar15;
            auVar33[0xc] = uVar25;
            uVar25 = (undefined1)(uVar15 >> 0x28);
            auVar32._12_4_ = auVar33._12_4_;
            auVar32._8_3_ = 0;
            auVar32._0_8_ = uVar15;
            auVar32[0xb] = uVar25;
            auVar31._11_5_ = auVar32._11_5_;
            auVar31._8_2_ = 0;
            auVar31._0_8_ = uVar15;
            auVar31[10] = uVar25;
            uVar25 = (undefined1)(uVar15 >> 0x20);
            auVar30._10_6_ = auVar31._10_6_;
            auVar30[8] = 0;
            auVar30._0_8_ = uVar15;
            auVar30[9] = uVar25;
            auVar29._9_7_ = auVar30._9_7_;
            auVar29[8] = uVar25;
            auVar29._0_8_ = uVar15;
            uVar25 = (undefined1)(uVar15 >> 0x18);
            auVar28._8_8_ = auVar29._8_8_;
            auVar28[7] = uVar25;
            auVar28[6] = uVar25;
            uVar25 = (undefined1)(uVar15 >> 0x10);
            auVar28[5] = uVar25;
            auVar28[4] = uVar25;
            uVar25 = (undefined1)(uVar15 >> 8);
            auVar28[3] = uVar25;
            auVar28[2] = uVar25;
            auVar28[0] = (undefined1)uVar15;
            auVar28[1] = auVar28[0];
            auVar24 = psraw(auVar24,8);
            auVar36 = psraw(auVar28,8);
            *(undefined1 (*) [16])(psVar6 + uVar11) = auVar24;
            *(undefined1 (*) [16])(psVar6 + uVar11 + 8) = auVar36;
            uVar11 = uVar11 + 0x10;
          } while (uVar14 != uVar11);
          if (uVar9 != uVar14) {
            if ((uVar9 & 0xc) == 0) {
              pauVar10 = (undefined1 (*) [16])(*pauVar10 + uVar14);
              uVar11 = (ulonglong)((uint)uVar9 & 0xf);
              psVar13 = psVar6 + uVar14;
              goto LAB_140541e6b;
            }
            goto LAB_1405421e2;
          }
        }
      }
      local_188 = uVar9;
      psVar6[uVar9] = 0;
      if ((ulonglong)local_180[0] < 8) {
        puVar12 = local_198;
      }
      else {
        puVar12 = (undefined1 *)local_198._0_8_;
      }
      (**(code **)(*local_48 + 0x30))(local_48,puVar12);
      if (7 < (ulonglong)local_180[0]) {
        uVar9 = (longlong)local_180[0] * 2 + 2;
        lVar5 = local_198._0_8_;
        if (0xfff < uVar9) {
          lVar5 = *(longlong *)(local_198._0_8_ + -8);
          if (0x1f < (ulonglong)((local_198._0_8_ + -8) - lVar5)) goto LAB_14054224b;
          uVar9 = (longlong)local_180[0] * 2 + 0x29;
        }
        thunk_FUN_140b68ba8(lVar5,uVar9);
      }
    }
    pauVar10 = (undefined1 (*) [16])FUN_140b65d30(0x48);
    plVar2 = local_48;
    *pauVar10 = (undefined1  [16])0x0;
    pauVar10[1] = (undefined1  [16])0x0;
    *(undefined4 *)(*pauVar10 + 8) = 1;
    *(Heap_vftable **)*pauVar10 = &nvrhi::d3d12::Heap::vftable;
    pauVar10[2] = (undefined1  [16])0x0;
    *(undefined8 *)pauVar10[3] = 0;
    *(undefined8 *)(pauVar10[3] + 8) = 0xf;
    *(undefined8 *)pauVar10[4] = 0;
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 8))(local_48);
      *(longlong **)pauVar10[4] = plVar2;
    }
    pauVar10[1][8] = (*param_2)[8];
    *(undefined8 *)pauVar10[1] = *(undefined8 *)*param_2;
    if (pauVar10 + 1 != param_2) {
      uVar9 = *(ulonglong *)param_2[2];
      if (0xf < *(ulonglong *)(param_2[2] + 8)) {
        _Src_00 = *(undefined1 (**) [16])param_2[1];
      }
      if (uVar9 < 0x10) {
        *(ulonglong *)pauVar10[3] = uVar9;
        memmove(pauVar10 + 2,_Src_00,uVar9);
        pauVar10[2][uVar9] = 0;
      }
      else {
        FUN_1400069b0(pauVar10 + 2,uVar9);
      }
    }
    *param_1 = pauVar10;
    plVar2 = local_48;
    goto joined_r0x00014054215c;
  }
  FUN_1401e87c0(local_198,1);
  uVar7 = FUN_1400e5ec0(&local_188,"CreateHeap call failed for heap ");
  uVar8 = FUN_140527b30(param_2 + 1);
  uVar7 = FUN_1400e5ec0(uVar7,uVar8);
  this_00 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(uVar7,", HRESULT = 0x");
  lVar5 = (longlong)this_00->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
  *(uint *)((longlong)&this_00[1].vbtablePtr + lVar5) =
       *(uint *)((longlong)&this_00[1].vbtablePtr + lVar5) & 0xfffff1ff | 0x800;
  std::setw((__int64)local_68);
  (*(code *)local_68._0_8_)
            ((longlong)&this_00->vbtablePtr +
             (longlong)this_00->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset,
             local_68._8_8_);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(this_00,iVar3);
  local_68 = (undefined1  [16])0x0;
  local_58 = 0;
  local_50 = 0xf;
  if (((local_110 & 0x22) == 2) || (uVar9 = *local_140, uVar9 == 0)) {
    if (((local_110 & 4) == 0) && (*local_148 != 0)) {
      uVar9 = *local_148 + (longlong)*local_130;
      _Src = (void *)*local_168;
      goto joined_r0x000140541dfe;
    }
  }
  else {
    if (uVar9 < local_118) {
      uVar9 = local_118;
    }
    _Src = (void *)*local_160;
joined_r0x000140541dfe:
    if (_Src != (void *)0x0) {
      uVar9 = uVar9 - (longlong)_Src;
      if (uVar9 < 0x10) {
        local_58 = uVar9;
        memmove(local_68,_Src,uVar9);
        local_68[uVar9] = 0;
      }
      else {
        FUN_1400069b0(local_68,uVar9);
      }
    }
  }
  puVar12 = local_68;
  if (0xf < local_50) {
    puVar12 = (undefined1 *)local_68._0_8_;
  }
  (**(code **)(**(longlong **)((longlong)this + 0x68) + 8))
            (*(longlong **)((longlong)this + 0x68),2,puVar12);
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    lVar5 = local_68._0_8_;
    if (0xfff < uVar9) {
      lVar5 = *(longlong *)(local_68._0_8_ + -8);
      if (0x1f < (ulonglong)((local_68._0_8_ + -8) - lVar5)) {
LAB_14054224b:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar5,uVar9);
  }
  *param_1 = 0;
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   (local_198 + *(int *)(local_198._0_8_ + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_19c + (longlong)*(int *)(local_198._0_8_ + 4)) =
       *(int *)(local_198._0_8_ + 4) + -0x98;
  local_180[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_180);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_180);
  std::ios_base::~ios_base(local_100);
  plVar2 = local_48;
joined_r0x00014054215c:
  if (plVar2 != (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    (**(code **)(*plVar2 + 0x10))();
  }
  return param_1;
}


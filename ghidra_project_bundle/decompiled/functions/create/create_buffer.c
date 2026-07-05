/**
 * Function: create_buffer
 * Address:  14072a1a0
 * Signature: undefined __thiscall create_buffer(void * this)
 * Body size: 1838 bytes
 */


void __thiscall create_buffer(void *this)

{
  undefined4 uVar1;
  void *_Src;
  undefined8 uVar2;
  basic_streambuf<char,std::char_traits<char>_> bVar3;
  longlong lVar4;
  short *psVar5;
  ulonglong uVar6;
  basic_ostream<char,std::char_traits<char>_> *pbVar7;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar8;
  __uint64 _Var9;
  short *psVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  char *pcVar13;
  short *psVar14;
  short *psVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  basic_streambuf<char,std::char_traits<char>_> bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar38 [16];
  int iStack_15c;
  undefined1 local_158 [16];
  ulonglong local_148;
  basic_streambuf<char,std::char_traits<char>_> local_140 [3];
  undefined8 *local_128;
  undefined8 *local_120;
  longlong *local_108;
  ulonglong *local_100;
  int *local_f0;
  ulonglong local_d8;
  uint local_d0;
  ios_base local_c0 [6];
  undefined1 local_58 [16];
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  
  local_38 = 0xfffffffffffffffe;
  uVar2 = (**(code **)(**(longlong **)((longlong)this + 0x70) + 0x58))();
  *(undefined8 *)((longlong)this + 0x78) = uVar2;
  psVar14 = (short *)((longlong)this + 0x30);
  uVar6 = *(ulonglong *)((longlong)this + 0x40);
  if (uVar6 != 0) {
    psVar10 = psVar14;
    if (0xf < *(ulonglong *)((longlong)this + 0x48)) {
      psVar10 = *(short **)((longlong)this + 0x30);
    }
    local_158 = (undefined1  [16])0x0;
    local_148 = 0;
    local_140[0] = (basic_streambuf<char,std::char_traits<char>_>)0x7;
    if (0x7ffffffffffffffe < uVar6) {
                    /* WARNING: Subroutine does not return */
      string_too_long();
    }
    uVar11 = uVar6;
    if (uVar6 < 8) {
      psVar5 = (short *)local_158;
      psVar15 = psVar5;
      if (3 < uVar6) goto LAB_14072a2a8;
LAB_14072a2cb:
      uVar16 = uVar11 - 1;
      if ((uVar11 & 7) != 0) {
        uVar17 = 0;
        do {
          *psVar15 = (short)*(char *)((longlong)psVar10 + uVar17);
          psVar15 = psVar15 + 1;
          uVar17 = uVar17 + 1;
        } while ((uVar11 & 7) != uVar17);
        psVar10 = (short *)((longlong)psVar10 + uVar17);
        uVar11 = uVar11 - uVar17;
      }
      if (6 < uVar16) {
        uVar16 = 0;
        do {
          psVar15[uVar16] = (short)*(char *)((longlong)psVar10 + uVar16);
          psVar15[uVar16 + 1] = (short)*(char *)((longlong)psVar10 + uVar16 + 1);
          psVar15[uVar16 + 2] = (short)*(char *)((longlong)psVar10 + uVar16 + 2);
          psVar15[uVar16 + 3] = (short)*(char *)((longlong)psVar10 + uVar16 + 3);
          psVar15[uVar16 + 4] = (short)*(char *)((longlong)psVar10 + uVar16 + 4);
          psVar15[uVar16 + 5] = (short)*(char *)((longlong)psVar10 + uVar16 + 5);
          psVar15[uVar16 + 6] = (short)*(char *)((longlong)psVar10 + uVar16 + 6);
          psVar15[uVar16 + 7] = (short)*(char *)((longlong)psVar10 + uVar16 + 7);
          uVar16 = uVar16 + 8;
        } while (uVar11 != uVar16);
      }
    }
    else {
      bVar3 = (basic_streambuf<char,std::char_traits<char>_>)(uVar6 | 7);
      if (0x7ffffffffffffffe < (ulonglong)bVar3) {
LAB_14072a8b0:
                    /* WARNING: Subroutine does not return */
        std::bad_array_new_length::bad_array_new_length();
      }
      bVar18 = (basic_streambuf<char,std::char_traits<char>_>)0xa;
      if (10 < (ulonglong)bVar3) {
        bVar18 = bVar3;
      }
      if ((ulonglong)bVar3 < 0x7ff) {
        psVar5 = (short *)FUN_140b65d30((longlong)bVar18 * 2 + 2);
      }
      else {
        if (0x7fffffffffffffeb < (ulonglong)bVar3) goto LAB_14072a8b0;
        lVar4 = FUN_140b65d30((longlong)bVar18 * 2 + 0x29);
        psVar5 = (short *)(lVar4 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)(psVar5 + -4) = lVar4;
      }
      local_158._0_8_ = psVar5;
      psVar15 = psVar5;
      local_140[0] = bVar18;
      if (uVar6 < 4) goto LAB_14072a2cb;
LAB_14072a2a8:
      if ((psVar5 < (short *)((longlong)psVar10 + uVar6)) &&
         (psVar15 = psVar5, psVar10 < psVar5 + uVar6)) goto LAB_14072a2cb;
      if (uVar6 < 0x10) {
        uVar16 = 0;
LAB_14072a645:
        uVar17 = uVar6 & 0x7ffffffffffffffc;
        do {
          uVar1 = *(undefined4 *)((longlong)psVar10 + uVar16);
          uVar29 = (undefined1)((uint)uVar1 >> 0x18);
          uVar28 = (undefined1)((uint)uVar1 >> 0x10);
          uVar27 = (undefined1)((uint)uVar1 >> 8);
          auVar25._4_4_ =
               (int)(CONCAT35(CONCAT21(CONCAT11(uVar29,uVar29),uVar28),CONCAT14(uVar28,uVar1)) >>
                    0x20);
          auVar25[3] = uVar27;
          auVar25[2] = uVar27;
          auVar25[0] = (undefined1)uVar1;
          auVar25[1] = auVar25[0];
          auVar25._8_8_ = 0;
          auVar26 = psraw(auVar25,8);
          *(longlong *)(psVar5 + uVar16) = auVar26._0_8_;
          uVar16 = uVar16 + 4;
        } while (uVar17 != uVar16);
        psVar10 = (short *)((longlong)psVar10 + uVar17);
        uVar11 = (ulonglong)((uint)uVar6 & 3);
        psVar15 = psVar5 + uVar17;
        if (uVar6 != uVar17) goto LAB_14072a2cb;
      }
      else {
        uVar16 = uVar6 & 0x7ffffffffffffff0;
        uVar11 = 0;
        do {
          uVar17 = *(ulonglong *)((longlong)psVar10 + uVar11);
          uVar27 = (undefined1)(uVar17 >> 0x38);
          auVar24._8_6_ = 0;
          auVar24._0_8_ = uVar17;
          auVar24[0xe] = uVar27;
          auVar24[0xf] = uVar27;
          uVar27 = (undefined1)(uVar17 >> 0x30);
          auVar23._14_2_ = auVar24._14_2_;
          auVar23._8_5_ = 0;
          auVar23._0_8_ = uVar17;
          auVar23[0xd] = uVar27;
          auVar22._13_3_ = auVar23._13_3_;
          auVar22._8_4_ = 0;
          auVar22._0_8_ = uVar17;
          auVar22[0xc] = uVar27;
          uVar27 = (undefined1)(uVar17 >> 0x28);
          auVar21._12_4_ = auVar22._12_4_;
          auVar21._8_3_ = 0;
          auVar21._0_8_ = uVar17;
          auVar21[0xb] = uVar27;
          auVar20._11_5_ = auVar21._11_5_;
          auVar20._8_2_ = 0;
          auVar20._0_8_ = uVar17;
          auVar20[10] = uVar27;
          uVar27 = (undefined1)(uVar17 >> 0x20);
          auVar19._10_6_ = auVar20._10_6_;
          auVar19[8] = 0;
          auVar19._0_8_ = uVar17;
          auVar19[9] = uVar27;
          auVar38._9_7_ = auVar19._9_7_;
          auVar38[8] = uVar27;
          auVar38._0_8_ = uVar17;
          uVar27 = (undefined1)(uVar17 >> 0x18);
          auVar26._8_8_ = auVar38._8_8_;
          auVar26[7] = uVar27;
          auVar26[6] = uVar27;
          uVar27 = (undefined1)(uVar17 >> 0x10);
          auVar26[5] = uVar27;
          auVar26[4] = uVar27;
          uVar27 = (undefined1)(uVar17 >> 8);
          auVar26[3] = uVar27;
          auVar26[2] = uVar27;
          auVar26[0] = (undefined1)uVar17;
          auVar26[1] = auVar26[0];
          uVar17 = *(ulonglong *)((longlong)psVar10 + uVar11 + 8);
          uVar27 = (undefined1)(uVar17 >> 0x38);
          auVar37._8_6_ = 0;
          auVar37._0_8_ = uVar17;
          auVar37[0xe] = uVar27;
          auVar37[0xf] = uVar27;
          uVar27 = (undefined1)(uVar17 >> 0x30);
          auVar36._14_2_ = auVar37._14_2_;
          auVar36._8_5_ = 0;
          auVar36._0_8_ = uVar17;
          auVar36[0xd] = uVar27;
          auVar35._13_3_ = auVar36._13_3_;
          auVar35._8_4_ = 0;
          auVar35._0_8_ = uVar17;
          auVar35[0xc] = uVar27;
          uVar27 = (undefined1)(uVar17 >> 0x28);
          auVar34._12_4_ = auVar35._12_4_;
          auVar34._8_3_ = 0;
          auVar34._0_8_ = uVar17;
          auVar34[0xb] = uVar27;
          auVar33._11_5_ = auVar34._11_5_;
          auVar33._8_2_ = 0;
          auVar33._0_8_ = uVar17;
          auVar33[10] = uVar27;
          uVar27 = (undefined1)(uVar17 >> 0x20);
          auVar32._10_6_ = auVar33._10_6_;
          auVar32[8] = 0;
          auVar32._0_8_ = uVar17;
          auVar32[9] = uVar27;
          auVar31._9_7_ = auVar32._9_7_;
          auVar31[8] = uVar27;
          auVar31._0_8_ = uVar17;
          uVar27 = (undefined1)(uVar17 >> 0x18);
          auVar30._8_8_ = auVar31._8_8_;
          auVar30[7] = uVar27;
          auVar30[6] = uVar27;
          uVar27 = (undefined1)(uVar17 >> 0x10);
          auVar30[5] = uVar27;
          auVar30[4] = uVar27;
          uVar27 = (undefined1)(uVar17 >> 8);
          auVar30[3] = uVar27;
          auVar30[2] = uVar27;
          auVar30[0] = (undefined1)uVar17;
          auVar30[1] = auVar30[0];
          auVar26 = psraw(auVar26,8);
          auVar38 = psraw(auVar30,8);
          *(undefined1 (*) [16])(psVar5 + uVar11) = auVar26;
          *(undefined1 (*) [16])(psVar5 + uVar11 + 8) = auVar38;
          uVar11 = uVar11 + 0x10;
        } while (uVar16 != uVar11);
        if (uVar6 != uVar16) {
          if ((uVar6 & 0xc) == 0) {
            psVar10 = (short *)((longlong)psVar10 + uVar16);
            uVar11 = (ulonglong)((uint)uVar6 & 0xf);
            psVar15 = psVar5 + uVar16;
            goto LAB_14072a2cb;
          }
          goto LAB_14072a645;
        }
      }
    }
    local_148 = uVar6;
    psVar5[uVar6] = 0;
    if ((ulonglong)local_140[0] < 8) {
      puVar12 = local_158;
    }
    else {
      puVar12 = (undefined1 *)local_158._0_8_;
    }
    (**(code **)(**(longlong **)((longlong)this + 0x70) + 0x30))
              (*(longlong **)((longlong)this + 0x70),puVar12);
    if (7 < (ulonglong)local_140[0]) {
      uVar6 = (longlong)local_140[0] * 2 + 2;
      lVar4 = local_158._0_8_;
      if (0xfff < uVar6) {
        lVar4 = *(longlong *)(local_158._0_8_ + -8);
        if (0x1f < (ulonglong)((local_158._0_8_ + -8) - lVar4)) goto LAB_14072a8b5;
        uVar6 = (longlong)local_140[0] * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(lVar4,uVar6);
    }
  }
  if (*(char *)(*(longlong *)((longlong)this + 0xd8) + 0x50) != '\x01') {
    return;
  }
  uVar6 = *(ulonglong *)((longlong)this + 0x20);
  if (uVar6 < 0x100001) {
    uVar11 = uVar6;
    if (0x400 < uVar6) {
      uVar11 = uVar6 >> 10;
    }
    pcVar13 = "B";
    if (0x400 < uVar6) {
      pcVar13 = "KB";
    }
  }
  else {
    uVar11 = uVar6 >> 0x14;
    pcVar13 = "MB";
  }
  FUN_1401e87c0(local_158,1);
  uVar2 = FUN_1400e5ec0(&local_148,"Create buffer: ");
  if (0xf < *(ulonglong *)((longlong)this + 0x48)) {
    psVar14 = *(short **)((longlong)this + 0x30);
  }
  uVar2 = FUN_1400e73f0(uVar2,psVar14,*(undefined8 *)((longlong)this + 0x40));
  pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(uVar2," Res:0x");
  lVar4 = (longlong)pbVar7->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
  *(uint *)((longlong)&pbVar7[1].vbtablePtr + lVar4) =
       *(uint *)((longlong)&pbVar7[1].vbtablePtr + lVar4) & 0xfffff1ff | 0x800;
  pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     (pbVar7,*(__uint64 *)((longlong)this + 0x70));
  pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar8," Gpu:0x");
  lVar4 = (longlong)pbVar7->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
  *(uint *)((longlong)&pbVar7[1].vbtablePtr + lVar4) =
       *(uint *)((longlong)&pbVar7[1].vbtablePtr + lVar4) & 0xfffff1ff | 0x800;
  _Var9 = (**(code **)(*(longlong *)this + 0x30))(this);
  pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,_Var9);
  pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar8,&DAT_141327652);
  lVar4 = (longlong)pbVar7->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
  *(uint *)((longlong)&pbVar7[1].vbtablePtr + lVar4) =
       *(uint *)((longlong)&pbVar7[1].vbtablePtr + lVar4) & 0xfffff1ff | 0x800;
  lVar4 = (**(code **)(*(longlong *)this + 0x30))(this);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (pbVar7,lVar4 + *(longlong *)((longlong)this + 0x20));
  if (*(int *)((longlong)this + 0x28) == 0) {
    pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(&local_148," (size:");
    lVar4 = (longlong)pbVar7->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
    *(uint *)((longlong)&pbVar7[1].vbtablePtr + lVar4) =
         *(uint *)((longlong)&pbVar7[1].vbtablePtr + lVar4) & 0xfffff1ff | 0x200;
    pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,uVar11);
    uVar2 = FUN_1400e5ec0(pbVar8,pcVar13);
    FUN_1400e5ec0(uVar2,")");
  }
  else {
    pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(&local_148,&DAT_14136c3ce)
    ;
    lVar4 = (longlong)pbVar7->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
    *(uint *)((longlong)&pbVar7[1].vbtablePtr + lVar4) =
         *(uint *)((longlong)&pbVar7[1].vbtablePtr + lVar4) & 0xfffff1ff | 0x200;
    uVar6 = (ulonglong)*(uint *)((longlong)this + 0x28);
    if (uVar6 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(ulonglong *)((longlong)this + 0x20);
      if (uVar16 >> 0x20 == 0) {
        uVar16 = (uVar16 & 0xffffffff) / uVar6;
      }
      else {
        uVar16 = uVar16 / uVar6;
      }
    }
    pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,uVar16);
    pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar8," stride:");
    lVar4 = (longlong)pbVar7->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
    *(uint *)((longlong)&pbVar7[1].vbtablePtr + lVar4) =
         *(uint *)((longlong)&pbVar7[1].vbtablePtr + lVar4) & 0xfffff1ff | 0x200;
    pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       (pbVar7,*(uint *)((longlong)this + 0x28));
    pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar8,"B size:");
    lVar4 = (longlong)pbVar7->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
    *(uint *)((longlong)&pbVar7[1].vbtablePtr + lVar4) =
         *(uint *)((longlong)&pbVar7[1].vbtablePtr + lVar4) & 0xfffff1ff | 0x200;
    pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,uVar11);
    uVar2 = FUN_1400e5ec0(pbVar8,pcVar13);
    FUN_1400e5ec0(uVar2,")");
  }
  uVar2 = *(undefined8 *)((longlong)this + 0xd8);
  local_58 = (undefined1  [16])0x0;
  local_48 = 0;
  local_40 = 0xf;
  if (((local_d0 & 0x22) == 2) || (uVar6 = *local_100, uVar6 == 0)) {
    if (((local_d0 & 4) == 0) && (*local_108 != 0)) {
      uVar6 = *local_108 + (longlong)*local_f0;
      _Src = (void *)*local_128;
      goto joined_r0x00014072a7a2;
    }
  }
  else {
    if (uVar6 < local_d8) {
      uVar6 = local_d8;
    }
    _Src = (void *)*local_120;
joined_r0x00014072a7a2:
    if (_Src != (void *)0x0) {
      uVar6 = uVar6 - (longlong)_Src;
      if (uVar6 < 0x10) {
        local_48 = uVar6;
        memmove(local_58,_Src,uVar6);
        local_58[uVar6] = 0;
      }
      else {
        FUN_1400069b0(local_58,uVar6);
      }
    }
  }
  FUN_14053e370(uVar2,local_58);
  if (0xf < local_40) {
    uVar6 = local_40 + 1;
    lVar4 = local_58._0_8_;
    if (0xfff < uVar6) {
      lVar4 = *(longlong *)(local_58._0_8_ + -8);
      if (0x1f < (ulonglong)((local_58._0_8_ + -8) - lVar4)) {
LAB_14072a8b5:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = local_40 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar4,uVar6);
  }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   (local_158 + *(int *)(local_158._0_8_ + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_15c + (longlong)*(int *)(local_158._0_8_ + 4)) =
       *(int *)(local_158._0_8_ + 4) + -0x98;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_140[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_140);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_140);
  std::ios_base::~ios_base(local_c0);
  return;
}


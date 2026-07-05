/**
 * Function: unknown_prior_state_of_texture
 * Address:  1407c7890
 * Signature: undefined __thiscall unknown_prior_state_of_texture(void * this)
 * Body size: 3093 bytes
 */


/* WARNING: Type propagation algorithm not settling */

void __thiscall
unknown_prior_state_of_texture
          (void *this,basic_ios<char,std::char_traits<char>_>_vftable *param_2,uint *param_3,
          uint param_4)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  basic_ostream<char,std::char_traits<char>_> *pbVar8;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int *piVar13;
  longlong lVar14;
  ulonglong uVar15;
  void *_Dst;
  int *piVar16;
  uint uVar17;
  longlong *plVar18;
  void *pvVar19;
  uint *puVar20;
  undefined1 *puVar21;
  size_t _Size;
  uint uVar22;
  basic_ios<char,std::char_traits<char>_>_vftable *pbVar23;
  uint uVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  undefined8 local_1d8;
  basic_ios<char,std::char_traits<char>_> local_1d0;
  undefined8 local_1c0;
  basic_streambuf<char,std::char_traits<char>_> abStack_1b8 [3];
  longlong *local_1a0;
  longlong *local_198 [3];
  ulonglong *local_180;
  ulonglong *local_178;
  int *local_168;
  undefined4 *local_160;
  ulonglong local_150;
  uint local_148;
  basic_ios<char,std::char_traits<char>_>_vftable *local_138 [9];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  ulonglong local_d8;
  uint local_cc;
  longlong *local_c8;
  uint *local_c0;
  undefined8 *local_b8;
  int *local_b0;
  int *local_a8;
  uint local_9c;
  undefined1 local_98 [16];
  ulonglong local_88;
  ulonglong local_80;
  uint local_70;
  uint local_6c;
  basic_ios<char,std::char_traits<char>_>_vftable *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (*(int *)&param_2[1].vfunction1 != 0) {
    doesnt_have_the_right_state_bits_required_0x
              (*(int *)&param_2[1].vfunction1,param_4,1,param_2->vfunction1 + 0x20,
               *(undefined8 *)this);
    return;
  }
  FUN_1406dfba0(param_3,&local_1d0,param_2->vfunction1);
  *(basic_ios<char,std::char_traits<char>_>_vftable **)param_3 = local_1d0.vftablePtr;
  *(_Iosb<int> *)(param_3 + 2) = local_1d0._Iosb<int>;
  local_68 = param_2;
  plVar4 = (longlong *)FUN_1407c6f50(this,param_2,1);
  local_c0 = param_3;
  if ((*plVar4 == plVar4[1]) && ((int)plVar4[3] == 0)) {
    FUN_1401e87c0(&local_1d0,1);
    uVar5 = FUN_1400e5ec0(&local_1c0,"Unknown prior state of texture ");
    uVar6 = FUN_140527b30(local_68->vfunction1 + 0x20);
    uVar5 = FUN_1400e5ec0(uVar5,uVar6);
    FUN_1400e5ec0(uVar5,
                  ". Call CommandList::beginTrackingTextureState(...) before using the texture or use the keepInitialState and initialState members of TextureDesc."
                 );
    plVar18 = *(longlong **)this;
    local_98 = (undefined1  [16])0x0;
    local_88 = 0;
    local_80 = 0xf;
    if (((local_148 & 0x22) == 2) || (uVar26 = *local_178, uVar26 == 0)) {
      if (((local_148 & 4) == 0) && (*local_180 != 0)) {
        pplVar7 = &local_1a0;
        uVar26 = *local_180 + (longlong)*local_168;
        goto LAB_1407c7a12;
      }
    }
    else {
      pplVar7 = local_198;
      if (uVar26 < local_150) {
        uVar26 = local_150;
      }
LAB_1407c7a12:
      pvVar19 = (void *)**pplVar7;
      if (pvVar19 != (void *)0x0) {
        uVar26 = uVar26 - (longlong)pvVar19;
        if (uVar26 < 0x10) {
          local_88 = uVar26;
          memmove(local_98,pvVar19,uVar26);
          local_98[uVar26] = 0;
        }
        else {
          FUN_1400069b0(local_98,uVar26);
        }
      }
    }
    if (local_80 < 0x10) {
      puVar21 = local_98;
    }
    else {
      puVar21 = (undefined1 *)local_98._0_8_;
    }
    (**(code **)(*plVar18 + 8))(plVar18,2,puVar21);
    if (0xf < local_80) {
      uVar26 = local_80 + 1;
      lVar14 = local_98._0_8_;
      if (0xfff < uVar26) {
        lVar14 = *(longlong *)(local_98._0_8_ + -8);
        if (0x1f < (ulonglong)((local_98._0_8_ + -8) - lVar14)) {
LAB_1407c849f:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar26 = local_80 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar14,uVar26);
    }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((longlong)&local_1d0.vftablePtr +
     (longlong)*(int *)((longlong)&(local_1d0.vftablePtr)->vfunction1 + 4)) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    iVar2 = *(int *)((longlong)&(local_1d0.vftablePtr)->vfunction1 + 4);
    *(int *)((longlong)&local_1d8 + (longlong)iVar2 + 4) = iVar2 + -0x98;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
    abStack_1b8[0] =
         (basic_streambuf<char,std::char_traits<char>_>)
         &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    FUN_1401da8b0(abStack_1b8);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(abStack_1b8);
    std::ios_base::~ios_base((ios_base *)local_138);
  }
  puVar20 = local_c0;
  bVar3 = FUN_1406dfc10(local_c0,local_68->vfunction1);
  local_b0 = (int *)*plVar4;
  piVar16 = (int *)plVar4[1];
  if ((local_b0 == piVar16 & bVar3) == 1) {
    uVar17 = *(uint *)(plVar4 + 3);
    if ((param_4 & 0x40) == 0) {
      bVar3 = 0;
    }
    else {
      bVar3 = 1;
      if (*(char *)((longlong)plVar4 + 0x1c) != '\0') goto LAB_1407c7bef;
      bVar3 = *(byte *)((longlong)plVar4 + 0x1d) ^ 1;
    }
    if (uVar17 == param_4 && (bVar3 & 1) == 0) {
      *(uint *)(plVar4 + 3) = param_4;
      return;
    }
LAB_1407c7bef:
    local_1d0._Iosb<int> = (_Iosb<int>)0x0;
    local_1d0.vftablePtr = local_68;
    local_1c0 = (undefined *)CONCAT71(local_1c0._1_7_,1);
    local_1c0 = (undefined *)CONCAT44(uVar17,(undefined4)local_1c0);
    abStack_1b8[0]._0_4_ = param_4;
    plVar18 = *(longlong **)((longlong)this + 0xc0);
    if (plVar18 == *(longlong **)((longlong)this + 200)) {
      FUN_14019fd30((longlong)this + 0xb8,plVar18,&local_1d0);
    }
    else {
      plVar18[2] = (longlong)local_1c0;
      *(basic_streambuf<char,std::char_traits<char>_> *)(plVar18 + 3) = abStack_1b8[0];
      *plVar18 = (longlong)local_68;
      plVar18[1] = 0;
      *(longlong *)((longlong)this + 0xc0) = *(longlong *)((longlong)this + 0xc0) + 0x20;
    }
    *(uint *)(plVar4 + 3) = param_4;
    if (bVar3 == 1 && uVar17 == param_4) {
      *(undefined1 *)((longlong)plVar4 + 0x1d) = 1;
    }
    return;
  }
  local_a8 = piVar16;
  if (local_b0 != piVar16) goto LAB_1407c7d14;
  uVar17 = *(int *)(local_68->vfunction1 + 0xc) * *(int *)(local_68->vfunction1 + 0x10);
  uVar26 = (ulonglong)uVar17;
  if (uVar17 != 0) {
    if ((ulonglong)(plVar4[2] - (longlong)local_b0 >> 2) < uVar26) {
      FUN_1401d5f10(plVar4);
    }
    else {
      iVar2 = (int)plVar4[3];
      if (iVar2 == 0) {
        memset(piVar16,0,uVar26 * 4);
        piVar13 = piVar16 + uVar26;
      }
      else {
        piVar13 = piVar16;
        if (7 < uVar17) {
          uVar24 = uVar17 & 0xfffffff8;
          uVar26 = (ulonglong)(uVar17 & 7);
          piVar13 = piVar16 + uVar24;
          uVar10 = 0;
          do {
            piVar1 = piVar16 + uVar10;
            *piVar1 = iVar2;
            piVar1[1] = iVar2;
            piVar1[2] = iVar2;
            piVar1[3] = iVar2;
            piVar1 = piVar16 + uVar10 + 4;
            *piVar1 = iVar2;
            piVar1[1] = iVar2;
            piVar1[2] = iVar2;
            piVar1[3] = iVar2;
            uVar10 = uVar10 + 8;
          } while (uVar24 != uVar10);
          if (uVar24 == uVar17) goto LAB_1407c7cfb;
        }
        do {
          *piVar13 = iVar2;
          piVar13 = piVar13 + 1;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
LAB_1407c7cfb:
      plVar4[1] = (longlong)piVar13;
    }
  }
  *(int *)(plVar4 + 3) = 0;
LAB_1407c7d14:
  uVar17 = puVar20[2];
  local_d8 = 0;
  piVar16 = local_a8;
  piVar13 = local_b0;
  pbVar23 = local_68;
  local_6c = uVar17;
  local_c8 = plVar4;
  local_b8 = this;
  local_9c = param_4;
  do {
    if (uVar17 + puVar20[3] <= local_6c) {
      return;
    }
    uVar17 = *puVar20;
    uVar22 = local_6c;
    for (uVar24 = uVar17; uVar24 < uVar17 + puVar20[1]; uVar24 = uVar24 + 1) {
      uVar26 = (ulonglong)(*(int *)(pbVar23->vfunction1 + 0x10) * uVar22 + uVar24);
      uVar17 = *(uint *)(*plVar4 + uVar26 * 4);
      if ((piVar13 != piVar16) && (uVar17 == 0)) {
        local_1d0.vftablePtr = (basic_ios<char,std::char_traits<char>_>_vftable *)&DAT_140df266c;
        local_1c0 = &DAT_140df1610;
        std::ios_base::ios_base((ios_base *)local_138);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ios<char,std::char_traits<char>_> */
        local_138[0] = &std::basic_ios<char,std::char_traits<char>_>::vftable;
        local_f0 = 0;
        uStack_e8 = 0;
        local_e0 = 0;
        *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
         ((longlong)&local_1d0.vftablePtr +
         (longlong)*(int *)((longlong)&(local_1d0.vftablePtr)->vfunction1 + 4)) =
             &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        iVar2 = *(int *)((longlong)&(local_1d0.vftablePtr)->vfunction1 + 4);
        *(int *)((longlong)&local_1d8 + (longlong)iVar2 + 4) = iVar2 + -0x98;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_istream<char,std::char_traits<char>_> */
        *(basic_istream<char,std::char_traits<char>_>_vftable **)
         ((longlong)&local_1d0.vftablePtr +
         (longlong)*(int *)((longlong)&(local_1d0.vftablePtr)->vfunction1 + 4)) =
             &std::basic_istream<char,std::char_traits<char>_>::vftable;
        iVar2 = *(int *)((longlong)&(local_1d0.vftablePtr)->vfunction1 + 4);
        *(int *)((longlong)&local_1d8 + (longlong)iVar2 + 4) = iVar2 + -0x18;
        local_1d0._Iosb<int> = (_Iosb<int>)0x0;
        std::basic_ios<char,std::char_traits<char>_>::init
                  ((basic_ios<char,std::char_traits<char>_> *)
                   ((longlong)&local_1d0.vftablePtr +
                   (longlong)*(int *)((longlong)&(local_1d0.vftablePtr)->vfunction1 + 4)),
                   (basic_streambuf<char,std::char_traits<char>_> *)abStack_1b8,false);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ostream<char,std::char_traits<char>_> */
        *(basic_ostream<char,std::char_traits<char>_>_vftable **)
         (&abStack_1b8[-1].field_0x0 + *(int *)(local_1c0 + 4)) =
             &std::basic_ostream<char,std::char_traits<char>_>::vftable;
        *(int *)(&local_1d0._Iosb<int>.field_0x4 + *(int *)(local_1c0 + 4)) =
             *(int *)(local_1c0 + 4) + -0x10;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_iostream<char,std::char_traits<char>_> */
        *(basic_iostream<char,std::char_traits<char>_>_vftable **)
         ((longlong)&local_1d0.vftablePtr +
         (longlong)*(int *)((longlong)&(local_1d0.vftablePtr)->vfunction1 + 4)) =
             &std::basic_iostream<char,std::char_traits<char>_>::vftable;
        iVar2 = *(int *)((longlong)&(local_1d0.vftablePtr)->vfunction1 + 4);
        *(int *)((longlong)&local_1d8 + (longlong)iVar2 + 4) = iVar2 + -0x20;
        *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
         ((longlong)&local_1d0.vftablePtr +
         (longlong)*(int *)((longlong)&(local_1d0.vftablePtr)->vfunction1 + 4)) =
             &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        iVar2 = *(int *)((longlong)&(local_1d0.vftablePtr)->vfunction1 + 4);
        *(int *)((longlong)&local_1d8 + (longlong)iVar2 + 4) = iVar2 + -0x98;
        std::basic_streambuf<char,std::char_traits<char>_>::
        basic_streambuf<char,std::char_traits<char>_>(abStack_1b8);
        abStack_1b8[0] =
             (basic_streambuf<char,std::char_traits<char>_>)
             &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        local_150 = 0;
        local_148 = 0;
        uVar5 = FUN_1400e5ec0(&local_1c0,"Unknown prior state of texture ");
        uVar6 = FUN_140527b30(local_68->vfunction1 + 0x20);
        uVar5 = FUN_1400e5ec0(uVar5,uVar6);
        pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(uVar5," subresource (MipLevel = ");
        pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,uVar24);
        pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(pbVar9,", ArraySlice = ");
        pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,local_6c);
        FUN_1400e5ec0(pbVar9,
                      "). Call CommandList::beginTrackingTextureState(...) before using the texture or use the keepInitialState and initialState members of TextureDesc."
                     );
        plVar4 = (longlong *)*local_b8;
        local_98 = ZEXT816(0);
        local_88 = 0;
        local_80 = 0xf;
        if (((local_148 & 0x22) == 2) || (uVar10 = *local_178, uVar10 == 0)) {
          if (((local_148 & 4) == 0) && (*local_180 != 0)) {
            uVar10 = *local_180 + (longlong)*local_168;
            pvVar19 = (void *)*local_1a0;
            goto joined_r0x0001407c7fe7;
          }
        }
        else {
          if (uVar10 < local_150) {
            uVar10 = local_150;
          }
          pvVar19 = (void *)*local_198[0];
joined_r0x0001407c7fe7:
          if (pvVar19 != (void *)0x0) {
            uVar10 = uVar10 - (longlong)pvVar19;
            if (uVar10 < 0x10) {
              local_88 = uVar10;
              memmove(local_98,pvVar19,uVar10);
              local_98[uVar10] = 0;
            }
            else {
              FUN_1400069b0(local_98,uVar10);
            }
          }
        }
        (**(code **)(*plVar4 + 8))(plVar4,2);
        puVar20 = local_c0;
        if (0xf < local_80) {
          uVar10 = local_80 + 1;
          lVar14 = local_98._0_8_;
          if (0xfff < uVar10) {
            lVar14 = *(longlong *)(local_98._0_8_ + -8);
            if (0x1f < (ulonglong)((local_98._0_8_ + -8) - lVar14)) goto LAB_1407c849f;
            uVar10 = local_80 + 0x28;
          }
          thunk_FUN_140b68ba8(lVar14,uVar10);
        }
        *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
         ((longlong)&local_1d0.vftablePtr +
         (longlong)*(int *)((longlong)&(local_1d0.vftablePtr)->vfunction1 + 4)) =
             &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        iVar2 = *(int *)((longlong)&(local_1d0.vftablePtr)->vfunction1 + 4);
        *(int *)((longlong)&local_1d8 + (longlong)iVar2 + 4) = iVar2 + -0x98;
        abStack_1b8[0] =
             (basic_streambuf<char,std::char_traits<char>_>)
             &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        if ((local_148 & 1) != 0) {
          uVar10 = *local_178;
          lVar14 = 0x58;
          if (uVar10 == 0) {
            uVar10 = *local_180;
            lVar14 = 0x50;
          }
          lVar12 = *local_1a0;
          uVar10 = ((longlong)**(int **)(&abStack_1b8[0].field_0x0 + lVar14) + uVar10) - lVar12;
          lVar14 = lVar12;
          if (0xfff < uVar10) {
            lVar14 = *(longlong *)(lVar12 + -8);
            if (0x1f < (ulonglong)((lVar12 + -8) - lVar14)) goto LAB_1407c849f;
            uVar10 = uVar10 + 0x27;
          }
          thunk_FUN_140b68ba8(lVar14,uVar10);
        }
        *local_1a0 = 0;
        *local_180 = 0;
        *local_168 = 0;
        *local_198[0] = 0;
        *local_178 = 0;
        *local_160 = 0;
        local_150 = 0;
        local_148 = local_148 & 0xfffffffe;
        std::basic_streambuf<char,std::char_traits<char>_>::
        ~basic_streambuf<char,std::char_traits<char>_>(abStack_1b8);
        std::ios_base::~ios_base((ios_base *)local_138);
        piVar16 = local_a8;
        piVar13 = local_b0;
        pbVar23 = local_68;
        plVar4 = local_c8;
        uVar22 = local_6c;
      }
      if ((param_4 & 0x40) == 0 || (local_d8 & 1) != 0) {
        bVar3 = 0;
LAB_1407c81c3:
        if (uVar17 != param_4 || (bVar3 & 1) != 0) goto LAB_1407c81d4;
        *(uint *)(*plVar4 + uVar26 * 4) = param_4;
      }
      else {
        bVar3 = 1;
        if (*(char *)((longlong)plVar4 + 0x1c) == '\0') {
          bVar3 = *(byte *)((longlong)plVar4 + 0x1d) ^ 1;
          goto LAB_1407c81c3;
        }
LAB_1407c81d4:
        plVar4 = (longlong *)local_b8[0x18];
        if (plVar4 == (longlong *)local_b8[0x19]) {
          lVar14 = (longlong)plVar4 - local_b8[0x17];
          uVar15 = lVar14 >> 5;
          uVar10 = uVar15 + 1;
          uVar11 = (uVar15 >> 1) + uVar15;
          if (uVar11 <= uVar10) {
            uVar11 = uVar10;
          }
          if (0x7ffffffffffffff - (uVar15 >> 1) < uVar15) {
            uVar11 = 0x7ffffffffffffff;
          }
          if (uVar11 >> 0x3b != 0) {
LAB_1407c84b8:
                    /* WARNING: Subroutine does not return */
            std::bad_array_new_length::bad_array_new_length();
          }
          local_1d8 = uVar11 * 0x20;
          local_70 = uVar17;
          if (uVar11 == 0) {
            pvVar19 = (void *)0x0;
          }
          else if (uVar11 < 0x80) {
            pvVar19 = (void *)FUN_140b65d30(local_1d8);
            pbVar23 = local_68;
            uVar22 = local_6c;
          }
          else {
            if (uVar11 == 0x7ffffffffffffff) goto LAB_1407c84b8;
            lVar12 = FUN_140b65d30(local_1d8 + 0x27);
            pvVar19 = (void *)(lVar12 + 0x27U & 0xffffffffffffffe0);
            *(longlong *)((longlong)pvVar19 - 8) = lVar12;
            pbVar23 = local_68;
            uVar17 = local_70;
            uVar22 = local_6c;
          }
          puVar25 = local_b8;
          *(basic_ios<char,std::char_traits<char>_>_vftable **)((longlong)pvVar19 + lVar14) =
               pbVar23;
          *(uint *)((longlong)pvVar19 + lVar14 + 8) = uVar24;
          *(uint *)((longlong)pvVar19 + lVar14 + 0xc) = uVar22;
          *(undefined1 *)((longlong)pvVar19 + lVar14 + 0x10) = 0;
          *(uint *)((longlong)pvVar19 + lVar14 + 0x14) = uVar17;
          *(uint *)((longlong)pvVar19 + lVar14 + 0x18) = local_9c;
          local_cc = uVar24;
          if (plVar4 == (longlong *)local_b8[0x18]) {
            plVar18 = (longlong *)local_b8[0x17];
            _Size = (longlong)plVar4 - (longlong)plVar18;
            _Dst = pvVar19;
          }
          else {
            memmove(pvVar19,(void *)local_b8[0x17],(longlong)plVar4 - (longlong)local_b8[0x17]);
            _Size = puVar25[0x18] - (longlong)plVar4;
            _Dst = (void *)((longlong)pvVar19 + lVar14 + 0x20);
            plVar18 = plVar4;
          }
          memmove(_Dst,plVar18,_Size);
          plVar4 = local_c8;
          lVar14 = puVar25[0x17];
          if (lVar14 != 0) {
            uVar11 = puVar25[0x19] - lVar14;
            lVar12 = lVar14;
            if (0xfff < uVar11) {
              lVar12 = *(longlong *)(lVar14 + -8);
              if (0x1f < (ulonglong)((lVar14 + -8) - lVar12)) goto LAB_1407c849f;
              uVar11 = uVar11 + 0x27;
            }
            thunk_FUN_140b68ba8(lVar12,uVar11);
            puVar25 = local_b8;
          }
          puVar25[0x17] = pvVar19;
          puVar25[0x18] = (void *)(uVar10 * 0x20 + (longlong)pvVar19);
          puVar25[0x19] = local_1d8 + (longlong)pvVar19;
          lVar14 = *plVar4;
          *(uint *)(lVar14 + uVar26 * 4) = local_9c;
          piVar16 = local_a8;
          piVar13 = local_b0;
          puVar20 = local_c0;
          pbVar23 = local_68;
          uVar24 = local_cc;
          uVar22 = local_6c;
          param_4 = local_9c;
          if (local_70 == local_9c) goto LAB_1407c847e;
        }
        else {
          *plVar4 = (longlong)pbVar23;
          *(uint *)(plVar4 + 1) = uVar24;
          *(uint *)((longlong)plVar4 + 0xc) = uVar22;
          *(undefined1 *)(plVar4 + 2) = 0;
          *(uint *)((longlong)plVar4 + 0x14) = uVar17;
          *(uint *)(plVar4 + 3) = param_4;
          local_b8[0x18] = local_b8[0x18] + 0x20;
          lVar14 = *local_c8;
          *(uint *)(lVar14 + uVar26 * 4) = param_4;
          plVar4 = local_c8;
          if (uVar17 == param_4) {
LAB_1407c847e:
            if (bVar3 == 1) {
              *(undefined1 *)((longlong)plVar4 + 0x1d) = 1;
              local_d8 = CONCAT71((int7)((ulonglong)lVar14 >> 8),1);
            }
          }
        }
      }
      uVar17 = *puVar20;
    }
    local_6c = uVar22 + 1;
    uVar17 = puVar20[2];
  } while( true );
}


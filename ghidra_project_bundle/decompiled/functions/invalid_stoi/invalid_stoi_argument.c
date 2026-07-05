/**
 * Function: invalid_stoi_argument
 * Address:  1401f6d60
 * Signature: undefined invalid_stoi_argument(void)
 * Body size: 2645 bytes
 */


/* WARNING: Type propagation algorithm not settling */

longlong *
invalid_stoi_argument
          (longlong *param_1,undefined8 *param_2,undefined8 *param_3,
          _Func_impl_no_alloc<__int64_(__cdecl*)(httplib::Stream&___ptr64,std::unordered_multimap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,httplib::detail::case_ignore::hash,httplib::detail::case_ignore::equal_to,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_const&___ptr64),__int64,httplib::Stream&___ptr64,std::unordered_multimap<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_httplib::detail::case_ignore::hash,struct_httplib::detail::case_ignore::equal_to,class_std::allocator<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>&___ptr64>
          *param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  _Func_impl_no_alloc<__int64_(__cdecl*)(httplib::Stream&___ptr64,std::unordered_multimap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,httplib::detail::case_ignore::hash,httplib::detail::case_ignore::equal_to,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_const&___ptr64),__int64,httplib::Stream&___ptr64,std::unordered_multimap<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_httplib::detail::case_ignore::hash,struct_httplib::detail::case_ignore::equal_to,class_std::allocator<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>&___ptr64>
  *p_Var4;
  char cVar5;
  long lVar6;
  ulonglong *puVar7;
  uint ******ppppppuVar8;
  int *piVar9;
  ulonglong uVar10;
  char ******ppppppcVar11;
  _Func_impl_no_alloc<__int64_(__cdecl*)(httplib::Stream&___ptr64,std::unordered_multimap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,httplib::detail::case_ignore::hash,httplib::detail::case_ignore::equal_to,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_const&___ptr64),__int64,httplib::Stream&___ptr64,std::unordered_multimap<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_httplib::detail::case_ignore::hash,struct_httplib::detail::case_ignore::equal_to,class_std::allocator<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>&___ptr64>
  *p_Var12;
  undefined8 *puVar13;
  void *pvVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  longlong *plVar18;
  void *_Src;
  uint *******pppppppuVar19;
  char *******pppppppcVar20;
  undefined8 in_stack_fffffffffffffe88;
  uint uVar21;
  invalid_argument local_168;
  long local_dc;
  undefined8 *local_d8;
  longlong *local_d0;
  uint *******local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  char *******local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined4 local_84;
  char *******local_80;
  char *******local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  _Func_impl_no_alloc<__int64_(__cdecl*)(httplib::Stream&___ptr64,std::unordered_multimap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,httplib::detail::case_ignore::hash,httplib::detail::case_ignore::equal_to,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_const&___ptr64),__int64,httplib::Stream&___ptr64,std::unordered_multimap<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_httplib::detail::case_ignore::hash,struct_httplib::detail::case_ignore::equal_to,class_std::allocator<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>&___ptr64>
  *local_50;
  undefined8 local_48;
  
  uVar21 = (uint)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
  local_48 = 0xfffffffffffffffe;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  local_d8 = param_3;
  local_d0 = param_1;
  local_50 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x140) < DAT_1416b61f8) && (FUN_140b6864c(&DAT_1416b61f8), DAT_1416b61f8 == -1)) {
    FUN_1401d1520(&DAT_1416b61d0,
                  "(?:([a-z]+):\\/\\/)?(?:\\[([a-fA-F\\d:]+)\\]|([^:/?#]+))(?::(\\d+))?",1);
    atexit(FUN_1401f7a50);
    _Init_thread_footer(&DAT_1416b61f8);
  }
  local_168.exception_data.offset_0x10 = (void *)0x0;
  local_168.exception_data.offset_0x18._0_1_ = 0;
  local_168.exception_data._80_8_ = 0;
  local_168.exception_data._88_8_ = 0;
  local_168.exception_data.offset_0x60._0_1_ = 0;
  local_168.exception_data.offset_0x68 = 0;
  local_168.exception_data.offset_0x70 = 0;
  local_168.exception_data.offset_0x78._0_1_ = 0;
  local_168.exception_data.offset_0x20 = (void *)0x0;
  local_168.exception_data.offset_0x28 = 0;
  local_168.exception_data.offset_0x30 = 0;
  local_168.exception_data.offset_0x38._0_1_ = 0;
  local_168.exception_data.offset_0x38._1_7_ = 0;
  local_168.exception_data._64_1_ = 0;
  local_168.exception_data._65_8_ = 0;
  puVar13 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar13 = (undefined8 *)*param_2;
  }
  cVar5 = FUN_1401f31f0(0,param_2[2] + (longlong)puVar13,&local_168.exception_data.offset_0x10,
                        &DAT_1416b61d0,(ulonglong)uVar21 << 0x20,1);
  if (cVar5 == '\0') {
    p_Var12 = (_Func_impl_no_alloc<__int64_(__cdecl*)(httplib::Stream&___ptr64,std::unordered_multimap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,httplib::detail::case_ignore::hash,httplib::detail::case_ignore::equal_to,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_const&___ptr64),__int64,httplib::Stream&___ptr64,std::unordered_multimap<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_httplib::detail::case_ignore::hash,struct_httplib::detail::case_ignore::equal_to,class_std::allocator<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>&___ptr64>
               *)FUN_140b65d30(0x4c0);
    p_Var4 = local_50;
    local_50 = p_Var12;
    std::
    _Func_impl_no_alloc<__int64_(__cdecl*)(httplib::Stream&___ptr64,std::unordered_multimap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,httplib::detail::case_ignore::hash,httplib::detail::case_ignore::equal_to,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_const&___ptr64),__int64,httplib::Stream&___ptr64,std::unordered_multimap<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_httplib::detail::case_ignore::hash,struct_httplib::detail::case_ignore::equal_to,class_std::allocator<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>&___ptr64>
    ::
    _Func_impl_no_alloc<__int64_(__cdecl*)(httplib::Stream&___ptr64,std::unordered_multimap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,httplib::detail::case_ignore::hash,httplib::detail::case_ignore::equal_to,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_const&___ptr64),__int64,httplib::Stream&___ptr64,std::unordered_multimap<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_httplib::detail::case_ignore::hash,struct_httplib::detail::case_ignore::equal_to,class_std::allocator<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>&___ptr64>
              (p_Var12,param_2,0x50,local_d8,p_Var4);
    plVar18 = local_d0;
    puVar13 = (undefined8 *)*local_d0;
    *local_d0 = (longlong)local_50;
    if (puVar13 != (undefined8 *)0x0) {
      (**(code **)*puVar13)(puVar13,1);
    }
  }
  else {
    puVar13 = &local_168.exception_data.offset_0x68;
    puVar7 = (ulonglong *)((longlong)local_168.exception_data.offset_0x20 + 0x20);
    puVar1 = (ulonglong *)((longlong)local_168.exception_data.offset_0x20 + 0x28);
    puVar2 = (undefined8 *)((longlong)local_168.exception_data.offset_0x20 + 0x18);
    if ((ulonglong)
        (((longlong)
          (local_168.exception_data.offset_0x28 - (longlong)local_168.exception_data.offset_0x20) >>
         3) * -0x5555555555555555) < 2) {
      puVar7 = &local_168.exception_data.offset_0x70;
      puVar1 = &local_168.exception_data.offset_0x78;
      puVar2 = puVar13;
    }
    puVar3 = &local_168.exception_data.offset_0x78;
    puVar17 = &local_168.exception_data.offset_0x70;
    if ((char)*puVar1 == '\0') {
      pvVar14 = (void *)0x0;
      uVar15 = 0;
    }
    else {
      pvVar14 = (void *)*puVar2;
      uVar15 = *puVar7;
    }
    local_c8 = (uint *******)0x0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    uVar15 = uVar15 - (longlong)pvVar14;
    if (uVar15 == 0) {
      uStack_b0 = 0xf;
LAB_1401f6fea:
      local_84 = 0;
    }
    else {
      if ((longlong)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        string_too_long();
      }
      if (0xf < uVar15) {
        uVar10 = uVar15 | 0xf;
        uVar16 = 0x16;
        if (0x16 < uVar10) {
          uVar16 = uVar10;
        }
        if (uVar10 < 0xfff) {
          pppppppuVar19 = (uint *******)FUN_140b65d30(uVar16 + 1);
        }
        else {
          ppppppuVar8 = (uint ******)FUN_140b65d30(uVar16 + 0x28);
          pppppppuVar19 = (uint *******)((longlong)ppppppuVar8 + 0x27U & 0xffffffffffffffe0);
          pppppppuVar19[-1] = ppppppuVar8;
        }
        local_c8 = pppppppuVar19;
        local_b8 = uVar15;
        uStack_b0 = uVar16;
        memcpy(pppppppuVar19,pvVar14,uVar15);
        *(undefined1 *)((longlong)pppppppuVar19 + uVar15) = 0;
        if (local_b8 != 0) goto LAB_1401f6fc3;
        goto LAB_1401f6fea;
      }
      uStack_b0 = 0xf;
      local_b8 = uVar15;
      memcpy(&local_c8,pvVar14,uVar15);
      *(undefined1 *)((longlong)&local_c8 + uVar15) = 0;
      if (local_b8 == 0) goto LAB_1401f6fea;
LAB_1401f6fc3:
      pppppppuVar19 = local_c8;
      if (uStack_b0 < 0x10) {
        pppppppuVar19 = (uint *******)&local_c8;
      }
      if (local_b8 != 5) {
        if ((local_b8 != 4) || (*(uint *)pppppppuVar19 != 0x70747468)) goto LAB_1401f7732;
        goto LAB_1401f6fea;
      }
      if (*(char *)((longlong)pppppppuVar19 + 4) != 's' || *(uint *)pppppppuVar19 != 0x70747468) {
LAB_1401f7732:
        FUN_1400119b0(&local_78,"\'",&local_c8);
        FUN_140008840(&local_a8,&local_78,"\' scheme is not supported.");
        FUN_140004b30(&local_78);
        std::invalid_argument::invalid_argument(&local_168,&local_a8);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_168,(ThrowInfo *)&DAT_14142f180);
      }
      pppppppuVar19 = local_c8;
      if (uStack_b0 < 0x10) {
        pppppppuVar19 = (uint *******)&local_c8;
      }
      local_84 = CONCAT31((int3)((*(uint *)pppppppuVar19 ^ 0x70747468) >> 8),
                          *(char *)((longlong)pppppppuVar19 + 4) == 's' &&
                          (*(uint *)pppppppuVar19 ^ 0x70747468) == 0);
    }
    uVar15 = local_168.exception_data.offset_0x28;
    pvVar14 = local_168.exception_data.offset_0x20;
    puVar7 = (ulonglong *)((longlong)local_168.exception_data.offset_0x20 + 0x38);
    puVar1 = (ulonglong *)((longlong)local_168.exception_data.offset_0x20 + 0x40);
    puVar2 = (undefined8 *)((longlong)local_168.exception_data.offset_0x20 + 0x30);
    if ((ulonglong)
        (((longlong)
          (local_168.exception_data.offset_0x28 - (longlong)local_168.exception_data.offset_0x20) >>
         3) * -0x5555555555555555) < 3) {
      puVar7 = puVar17;
      puVar1 = puVar3;
      puVar2 = puVar13;
    }
    if ((char)*puVar1 == '\0') {
      _Src = (void *)0x0;
      uVar16 = 0;
    }
    else {
      _Src = (void *)*puVar2;
      uVar16 = *puVar7;
    }
    local_a8 = (char *******)0x0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uVar16 = uVar16 - (longlong)_Src;
    if (uVar16 == 0) {
      uStack_90 = 0xf;
LAB_1401f7187:
      puVar7 = (ulonglong *)((longlong)pvVar14 + 0x50);
      puVar1 = (ulonglong *)((longlong)pvVar14 + 0x58);
      puVar2 = (undefined8 *)((longlong)pvVar14 + 0x48);
      if ((ulonglong)(((longlong)(uVar15 - (longlong)pvVar14) >> 3) * -0x5555555555555555) < 4) {
        puVar7 = puVar17;
        puVar1 = puVar3;
        puVar2 = puVar13;
      }
      if ((char)*puVar1 == '\0') {
        pvVar14 = (void *)0x0;
        uVar15 = 0;
      }
      else {
        pvVar14 = (void *)*puVar2;
        uVar15 = *puVar7;
      }
      local_68 = 0;
      uStack_60 = 0;
      local_78 = (char *******)0x0;
      uStack_70 = 0;
      uVar15 = uVar15 - (longlong)pvVar14;
      if (uVar15 == 0) {
        uStack_60 = 0xf;
      }
      else {
        if ((longlong)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
          string_too_long();
        }
        if (uVar15 < 0x10) {
          uStack_60 = 0xf;
          local_68 = uVar15;
          memcpy(&local_78,pvVar14,uVar15);
          *(undefined1 *)((longlong)&local_78 + uVar15) = 0;
        }
        else {
          uVar10 = uVar15 | 0xf;
          uVar16 = 0x16;
          if (0x16 < uVar10) {
            uVar16 = uVar10;
          }
          if (uVar10 < 0xfff) {
            pppppppcVar20 = (char *******)FUN_140b65d30(uVar16 + 1);
          }
          else {
            ppppppcVar11 = (char ******)FUN_140b65d30(uVar16 + 0x28);
            pppppppcVar20 = (char *******)((longlong)ppppppcVar11 + 0x27U & 0xffffffffffffffe0);
            pppppppcVar20[-1] = ppppppcVar11;
          }
          local_78 = pppppppcVar20;
          local_68 = uVar15;
          uStack_60 = uVar16;
          memcpy(pppppppcVar20,pvVar14,uVar15);
          *(undefined1 *)((longlong)pppppppcVar20 + uVar15) = 0;
        }
      }
      if (0xf < uStack_90) {
        uVar15 = uStack_90 + 1;
        pppppppcVar20 = local_a8;
        if (0xfff < uVar15) {
          pppppppcVar20 = (char *******)local_a8[-1];
          if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)pppppppcVar20)))
          goto LAB_1401f7719;
          uVar15 = uStack_90 + 0x28;
        }
        thunk_FUN_140b68ba8(pppppppcVar20,uVar15);
      }
      local_98 = local_68;
      uStack_90 = uStack_60;
      local_a8 = local_78;
      uStack_a0 = uStack_70;
      uVar15 = local_168.exception_data.offset_0x28;
      pvVar14 = local_168.exception_data.offset_0x20;
    }
    else {
      if ((longlong)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        string_too_long();
      }
      if (uVar16 < 0x10) {
        uStack_90 = 0xf;
        local_98 = uVar16;
        memcpy(&local_a8,_Src,uVar16);
        *(undefined1 *)((longlong)&local_a8 + uVar16) = 0;
      }
      else {
        uVar10 = uVar16 | 0xf;
        uVar15 = 0x16;
        if (0x16 < uVar10) {
          uVar15 = uVar10;
        }
        if (uVar10 < 0xfff) {
          pppppppcVar20 = (char *******)FUN_140b65d30(uVar15 + 1);
        }
        else {
          ppppppcVar11 = (char ******)FUN_140b65d30(uVar15 + 0x28);
          pppppppcVar20 = (char *******)((longlong)ppppppcVar11 + 0x27U & 0xffffffffffffffe0);
          pppppppcVar20[-1] = ppppppcVar11;
        }
        local_a8 = pppppppcVar20;
        local_98 = uVar16;
        uStack_90 = uVar15;
        memcpy(pppppppcVar20,_Src,uVar16);
        *(undefined1 *)((longlong)pppppppcVar20 + uVar16) = 0;
        pvVar14 = local_168.exception_data.offset_0x20;
        uVar15 = local_168.exception_data.offset_0x28;
      }
      if (local_98 == 0) goto LAB_1401f7187;
    }
    if (4 < (ulonglong)(((longlong)(uVar15 - (longlong)pvVar14) >> 3) * -0x5555555555555555)) {
      puVar17 = (ulonglong *)((longlong)pvVar14 + 0x68);
      puVar3 = (ulonglong *)((longlong)pvVar14 + 0x70);
      puVar13 = (undefined8 *)((longlong)pvVar14 + 0x60);
    }
    if ((char)*puVar3 == '\0') {
      pvVar14 = (void *)0x0;
      uVar15 = 0;
    }
    else {
      pvVar14 = (void *)*puVar13;
      uVar15 = *puVar17;
    }
    local_68 = 0;
    uStack_60 = 0;
    local_78 = (char *******)0x0;
    uStack_70 = 0;
    uVar15 = uVar15 - (longlong)pvVar14;
    if (uVar15 == 0) {
      uStack_60 = 0xf;
LAB_1401f7544:
      cVar5 = (char)local_84;
      lVar6 = 0x50;
      if (cVar5 != '\0') {
        local_dc = 0x1bb;
        goto LAB_1401f7453;
      }
LAB_1401f7567:
      local_dc = lVar6;
      p_Var12 = (_Func_impl_no_alloc<__int64_(__cdecl*)(httplib::Stream&___ptr64,std::unordered_multimap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,httplib::detail::case_ignore::hash,httplib::detail::case_ignore::equal_to,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_const&___ptr64),__int64,httplib::Stream&___ptr64,std::unordered_multimap<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_httplib::detail::case_ignore::hash,struct_httplib::detail::case_ignore::equal_to,class_std::allocator<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>&___ptr64>
                 *)FUN_140b65d30(0x4c0);
      p_Var4 = local_50;
      local_50 = p_Var12;
      std::
      _Func_impl_no_alloc<__int64_(__cdecl*)(httplib::Stream&___ptr64,std::unordered_multimap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,httplib::detail::case_ignore::hash,httplib::detail::case_ignore::equal_to,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_const&___ptr64),__int64,httplib::Stream&___ptr64,std::unordered_multimap<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_httplib::detail::case_ignore::hash,struct_httplib::detail::case_ignore::equal_to,class_std::allocator<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>&___ptr64>
      ::
      _Func_impl_no_alloc<__int64_(__cdecl*)(httplib::Stream&___ptr64,std::unordered_multimap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,httplib::detail::case_ignore::hash,httplib::detail::case_ignore::equal_to,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_const&___ptr64),__int64,httplib::Stream&___ptr64,std::unordered_multimap<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_httplib::detail::case_ignore::hash,struct_httplib::detail::case_ignore::equal_to,class_std::allocator<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>&___ptr64>
                (p_Var12,&local_a8,lVar6,local_d8,p_Var4);
      plVar18 = local_d0;
      puVar13 = (undefined8 *)*local_d0;
      *local_d0 = (longlong)local_50;
      if (puVar13 != (undefined8 *)0x0) {
        (**(code **)*puVar13)(puVar13,1);
      }
    }
    else {
      if ((longlong)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        string_too_long();
      }
      if (0xf < uVar15) {
        uVar10 = uVar15 | 0xf;
        uVar16 = 0x16;
        if (0x16 < uVar10) {
          uVar16 = uVar10;
        }
        if (uVar10 < 0xfff) {
          pppppppcVar20 = (char *******)FUN_140b65d30(uVar16 + 1);
        }
        else {
          ppppppcVar11 = (char ******)FUN_140b65d30(uVar16 + 0x28);
          pppppppcVar20 = (char *******)((longlong)ppppppcVar11 + 0x27U & 0xffffffffffffffe0);
          pppppppcVar20[-1] = ppppppcVar11;
        }
        local_78 = pppppppcVar20;
        local_68 = uVar15;
        uStack_60 = uVar16;
        memcpy(pppppppcVar20,pvVar14,uVar15);
        *(undefined1 *)((longlong)pppppppcVar20 + uVar15) = 0;
        if (local_68 != 0) goto LAB_1401f73e7;
        goto LAB_1401f7544;
      }
      uStack_60 = 0xf;
      local_68 = uVar15;
      memcpy(&local_78,pvVar14,uVar15);
      *(undefined1 *)((longlong)&local_78 + uVar15) = 0;
      if (local_68 == 0) goto LAB_1401f7544;
LAB_1401f73e7:
      piVar9 = _errno();
      pppppppcVar20 = local_78;
      if (uStack_60 < 0x10) {
        pppppppcVar20 = (char *******)&local_78;
      }
      *piVar9 = 0;
      lVar6 = strtol((char *)pppppppcVar20,(char **)&local_80,10);
      if (pppppppcVar20 == local_80) {
        std::_Xinvalid_argument("invalid stoi argument");
LAB_1401f7795:
                    /* WARNING: Subroutine does not return */
        std::_Xout_of_range("stoi argument out of range");
      }
      if (*piVar9 == 0x22) goto LAB_1401f7795;
      cVar5 = (char)local_84;
      local_dc = lVar6;
      if (cVar5 == '\0') goto LAB_1401f7567;
LAB_1401f7453:
      FUN_1401f7bf0(&local_80,&local_a8,&local_dc,local_d8,local_50);
      pppppppcVar20 = local_80;
      plVar18 = local_d0;
      local_80 = (char *******)0x0;
      puVar13 = (undefined8 *)*local_d0;
      *local_d0 = (longlong)pppppppcVar20;
      if ((puVar13 != (undefined8 *)0x0) &&
         ((**(code **)*puVar13)(puVar13,1), pppppppcVar20 = local_80, local_80 != (char *******)0x0)
         ) {
        FUN_1401f26d0(local_80);
        thunk_FUN_140b68ba8(pppppppcVar20,0x540);
      }
      *(char *)(plVar18 + 1) = cVar5;
    }
    if (0xf < uStack_60) {
      uVar15 = uStack_60 + 1;
      pppppppcVar20 = local_78;
      if (0xfff < uVar15) {
        pppppppcVar20 = (char *******)local_78[-1];
        if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pppppppcVar20)))
        goto LAB_1401f7719;
        uVar15 = uStack_60 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppppcVar20,uVar15);
    }
    if (0xf < uStack_90) {
      uVar15 = uStack_90 + 1;
      pppppppcVar20 = local_a8;
      if (0xfff < uVar15) {
        pppppppcVar20 = (char *******)local_a8[-1];
        if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)pppppppcVar20)))
        goto LAB_1401f7719;
        uVar15 = uStack_90 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppppcVar20,uVar15);
    }
    if (0xf < uStack_b0) {
      uVar15 = uStack_b0 + 1;
      pppppppuVar19 = local_c8;
      if (0xfff < uVar15) {
        pppppppuVar19 = (uint *******)local_c8[-1];
        if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)pppppppuVar19)))
        goto LAB_1401f7719;
        uVar15 = uStack_b0 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppppuVar19,uVar15);
    }
  }
  if (local_168.exception_data.offset_0x20 != (void *)0x0) {
    uVar15 = local_168.exception_data.offset_0x30 - (longlong)local_168.exception_data.offset_0x20;
    pvVar14 = local_168.exception_data.offset_0x20;
    if (0xfff < uVar15) {
      pvVar14 = *(void **)((longlong)local_168.exception_data.offset_0x20 + -8);
      if (0x1f < (ulonglong)
                 ((longlong)local_168.exception_data.offset_0x20 + (-8 - (longlong)pvVar14))) {
LAB_1401f7719:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar15 = uVar15 + 0x27;
    }
    thunk_FUN_140b68ba8(pvVar14,uVar15);
  }
  return plVar18;
}


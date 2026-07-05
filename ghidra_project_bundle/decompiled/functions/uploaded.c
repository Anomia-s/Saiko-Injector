/**
 * Function: uploaded
 * Address:  1402881a0
 * Signature: undefined __thiscall uploaded(void * this)
 * Body size: 1727 bytes
 */


/* WARNING: Type propagation algorithm not settling */

bool __thiscall uploaded(void *this)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  __uint64 _Var4;
  _Iosb<int> _Src;
  longlong lVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  void *_Memory;
  undefined8 uVar13;
  code *******pppppppcVar14;
  longlong *plVar15;
  undefined8 in_stack_fffffffffffffe18;
  longlong local_1d8 [3];
  ulonglong local_1c0;
  code *******local_1b8;
  ulonglong local_1b0;
  void *local_1a8;
  undefined8 local_1a0;
  basic_ostream<char,std::char_traits<char>_> local_198;
  ulonglong local_180;
  _Iosb<int> *local_178;
  _Iosb<int> *local_170;
  _Iosb<int> *local_158;
  ulonglong *local_150;
  int *local_140 [3];
  ulonglong local_128;
  uint local_120 [3];
  char local_114;
  ios_base local_110;
  int local_100;
  ios_base local_f0 [6];
  code *******local_88;
  size_t sStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_1a0 = cJSON_CreateObject();
  if (*(ulonglong *)((longlong)this + 0x38) < 0x10) {
    lVar12 = (longlong)this + 0x20;
  }
  else {
    lVar12 = *(longlong *)((longlong)this + 0x20);
  }
  cJSON_AddStringToObject(local_1a0,"name",lVar12);
  uVar9 = cJSON_AddObjectToObject(local_1a0,"assets");
  plVar3 = *(longlong **)((longlong)this + 0x48);
  plVar15 = plVar3;
  local_1a8 = this;
  while( true ) {
    puVar6 = PTR_s_project_json_141500ba0;
    uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffe18 >> 0x20);
    plVar15 = (longlong *)*plVar15;
    if (plVar15 == plVar3) break;
    uVar10 = cJSON_CreateObject();
    cVar1 = *(char *)(plVar15 + 3);
    if (cVar1 == '\x02') {
      local_198.vftablePtr = (basic_ostream<char,std::char_traits<char>_>_vftable *)0x5;
      local_198.vbtablePtr._5_1_ = 0;
      local_198.vbtablePtr._6_1_ = 0;
      local_198.vbtablePtr._4_1_ = 0x65;
      local_198.vbtablePtr._0_4_ = 0x6e656373;
    }
    else if (cVar1 == '\x01') {
      local_198.vbtablePtr._4_1_ = 0;
      local_198.vbtablePtr._5_1_ = 0;
      local_198.vbtablePtr._6_1_ = 0;
      local_198.vftablePtr = (basic_ostream<char,std::char_traits<char>_>_vftable *)0x4;
      local_198.vbtablePtr._0_4_ = 0x6873656d;
    }
    else if (cVar1 == '\0') {
      local_198.vftablePtr = (basic_ostream<char,std::char_traits<char>_>_vftable *)0x6;
      local_198.vbtablePtr._6_1_ = 0;
      local_198.vbtablePtr._4_1_ = 0x70;
      local_198.vbtablePtr._5_1_ = 0x74;
      local_198.vbtablePtr._0_4_ = 0x69726373;
    }
    else {
      local_198.vftablePtr = (basic_ostream<char,std::char_traits<char>_>_vftable *)&DAT_00000007;
      local_198.vbtablePtr._0_4_ = 0x6e6b6e75;
      local_198.vbtablePtr._4_1_ = 0x6f;
      local_198.vbtablePtr._5_1_ = 0x77;
      local_198.vbtablePtr._6_1_ = 0x6e;
    }
    local_198.basic_ostream<char,std::char_traits<char>_>_data._6_2_ = 0;
    local_198.basic_ostream<char,std::char_traits<char>_>_data._5_1_ = 0;
    local_198.basic_ostream<char,std::char_traits<char>_>_data._4_1_ = 0;
    local_198.basic_ostream<char,std::char_traits<char>_>_data._0_4_ = 0;
    local_198.vbtablePtr._7_1_ = 0;
    local_180 = 0xf;
    cJSON_AddStringToObject(uVar10,"type",&local_198);
    if (0xf < local_180) {
      lVar5 = CONCAT17(local_198.vbtablePtr._7_1_,
                       CONCAT16(local_198.vbtablePtr._6_1_,
                                CONCAT15(local_198.vbtablePtr._5_1_,
                                         CONCAT14(local_198.vbtablePtr._4_1_,
                                                  local_198.vbtablePtr._0_4_))));
      uVar11 = local_180 + 1;
      lVar12 = lVar5;
      if (0xfff < uVar11) {
        lVar12 = *(longlong *)(lVar5 + -8);
        if (0x1f < (ulonglong)((lVar5 + -8) - lVar12)) goto LAB_14028859d;
        uVar11 = local_180 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar12,uVar11);
    }
    if ((ulonglong)plVar15[7] < 0x10) {
      lVar12 = (longlong)(plVar15 + 4);
    }
    else {
      lVar12 = plVar15[4];
    }
    cJSON_AddStringToObject(uVar10,"path",lVar12);
    if ((ulonglong)plVar15[0xb] < 0x10) {
      lVar12 = (longlong)(plVar15 + 8);
    }
    else {
      lVar12 = plVar15[8];
    }
    cJSON_AddStringToObject(uVar10,"checksum",lVar12);
    cJSON_AddBoolToObject(uVar10,"uploaded",*(undefined1 *)(plVar15 + 0xc));
    _Var4 = plVar15[2];
    FUN_1401d9dc0(&local_198,1);
    lVar12 = (longlong)
             *(int *)(CONCAT17(local_198.vbtablePtr._7_1_,
                               CONCAT16(local_198.vbtablePtr._6_1_,
                                        CONCAT15(local_198.vbtablePtr._5_1_,
                                                 CONCAT14(local_198.vbtablePtr._4_1_,
                                                          local_198.vbtablePtr._0_4_)))) + 4);
    *(uint *)((longlong)&local_180 + lVar12) =
         *(uint *)((longlong)&local_180 + lVar12) & 0xfffff1ff | 0x800;
    *(undefined1 *)
     ((longlong)local_140 +
     (longlong)
     *(int *)(CONCAT17(local_198.vbtablePtr._7_1_,
                       CONCAT16(local_198.vbtablePtr._6_1_,
                                CONCAT15(local_198.vbtablePtr._5_1_,
                                         CONCAT14(local_198.vbtablePtr._4_1_,
                                                  local_198.vbtablePtr._0_4_)))) + 4)) = 0x30;
    std::setw((__int64)&local_88);
    (*(code *)local_88)((longlong)&local_198.vbtablePtr +
                        (longlong)
                        *(int *)(CONCAT17(local_198.vbtablePtr._7_1_,
                                          CONCAT16(local_198.vbtablePtr._6_1_,
                                                   CONCAT15(local_198.vbtablePtr._5_1_,
                                                            CONCAT14(local_198.vbtablePtr._4_1_,
                                                                     local_198.vbtablePtr._0_4_))))
                                + 4),sStack_80);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(&local_198,_Var4);
    local_88 = (code *******)0x0;
    sStack_80 = 0;
    local_78 = 0;
    local_70 = 0xf;
    if (((local_120[0] & 0x22) == 2) || (uVar11 = *local_150, uVar11 == 0)) {
      if (((local_120[0] & 4) == 0) && (*local_158 != (_Iosb<int>)0x0)) {
        uVar11 = (longlong)*local_158 + (longlong)*local_140[0];
        _Src = *local_178;
        goto joined_r0x0001402884b7;
      }
    }
    else {
      if (uVar11 < local_128) {
        uVar11 = local_128;
      }
      _Src = *local_170;
joined_r0x0001402884b7:
      if (_Src != (_Iosb<int>)0x0) {
        uVar11 = uVar11 - (longlong)_Src;
        if (uVar11 < 0x10) {
          local_78 = uVar11;
          memmove(&local_88,(void *)_Src,uVar11);
          *(undefined1 *)((longlong)&local_88 + uVar11) = 0;
        }
        else {
          FUN_1400069b0(&local_88,uVar11);
        }
      }
    }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>
                        */
    *(basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((longlong)&local_198.vbtablePtr +
     (longlong)
     *(int *)(CONCAT17(local_198.vbtablePtr._7_1_,
                       CONCAT16(local_198.vbtablePtr._6_1_,
                                CONCAT15(local_198.vbtablePtr._5_1_,
                                         CONCAT14(local_198.vbtablePtr._4_1_,
                                                  local_198.vbtablePtr._0_4_)))) + 4)) =
         &std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    iVar2 = *(int *)(CONCAT17(local_198.vbtablePtr._7_1_,
                              CONCAT16(local_198.vbtablePtr._6_1_,
                                       CONCAT15(local_198.vbtablePtr._5_1_,
                                                CONCAT14(local_198.vbtablePtr._4_1_,
                                                         local_198.vbtablePtr._0_4_)))) + 4);
    *(int *)((longlong)&local_1a0 + (longlong)iVar2 + 4) = iVar2 + -0x88;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
    local_198.basic_ostream<char,std::char_traits<char>_>_data._0_4_ = 0x40df1898;
    local_198.basic_ostream<char,std::char_traits<char>_>_data._4_1_ = 1;
    local_198.basic_ostream<char,std::char_traits<char>_>_data._5_1_ = 0;
    local_198.basic_ostream<char,std::char_traits<char>_>_data._6_2_ = 0;
    FUN_1401da8b0(&local_198.basic_ostream<char,std::char_traits<char>_>_data);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)
               &local_198.basic_ostream<char,std::char_traits<char>_>_data);
    std::ios_base::~ios_base(&local_110);
    pppppppcVar14 = (code *******)&local_88;
    if (0xf < local_70) {
      pppppppcVar14 = local_88;
    }
    cJSON_AddItemToObject(uVar9,pppppppcVar14,uVar10);
    if (0xf < local_70) {
      uVar11 = local_70 + 1;
      pppppppcVar14 = local_88;
      if (0xfff < uVar11) {
        pppppppcVar14 = (code *******)local_88[-1];
        if ((undefined *)0x1f < (undefined *)((longlong)local_88 + (-8 - (longlong)pppppppcVar14)))
        goto LAB_14028859d;
        uVar11 = local_70 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppppcVar14,uVar11);
    }
  }
  sStack_80 = strlen(PTR_s_project_json_141500ba0);
  local_88 = (code *******)puVar6;
  uVar7 = FUN_140b6625c();
  FUN_140004460(&local_198,uVar7,&local_88);
  FUN_140003330(&local_88,local_1a8,&local_198);
  uVar9 = local_1a0;
  if (7 < local_180) {
    lVar5 = CONCAT17(local_198.vbtablePtr._7_1_,
                     CONCAT16(local_198.vbtablePtr._6_1_,
                              CONCAT15(local_198.vbtablePtr._5_1_,
                                       CONCAT14(local_198.vbtablePtr._4_1_,
                                                local_198.vbtablePtr._0_4_))));
    uVar11 = local_180 * 2 + 2;
    lVar12 = lVar5;
    if (0xfff < uVar11) {
      lVar12 = *(longlong *)(lVar5 + -8);
      if (0x1f < (ulonglong)((lVar5 + -8) - lVar12)) goto LAB_14028859d;
      uVar11 = local_180 * 2 + 0x29;
    }
    thunk_FUN_140b68ba8(lVar12,uVar11);
  }
  pppppppcVar14 = (code *******)&local_88;
  if (7 < local_70) {
    pppppppcVar14 = local_88;
  }
  FUN_1401f80d0(&local_198,pppppppcVar14,2,0x40,CONCAT44(uVar8,1));
  uVar10 = local_110._0_8_;
  lVar12 = DAT_14151e360;
  if (local_110._0_8_ == 0) {
    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
      local_1b8 = local_88;
      if (local_70 < 8) {
        local_1b8 = (code *******)&local_88;
      }
      local_1b0 = local_78;
      uVar8 = FUN_140b6625c();
      FUN_14003e640(local_1d8,uVar8,&local_1b8);
      FUN_140b5c2d0(lVar12,&PTR_s__opt_actions_runner__work_Platfo_140dfd5a8,local_1d8);
      if (0xf < local_1c0) {
        uVar11 = local_1c0 + 1;
        lVar12 = local_1d8[0];
        if (0xfff < uVar11) {
          lVar12 = *(longlong *)(local_1d8[0] + -8);
          if (0x1f < (ulonglong)((local_1d8[0] + -8) - lVar12)) goto LAB_14028859d;
          uVar11 = local_1c0 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar12,uVar11);
      }
    }
  }
  else {
    _Memory = (void *)cJSON_Print(uVar9);
    uVar13 = FUN_1400e5ec0(&local_198,_Memory);
    FUN_1401d9f10(uVar13,10);
    cJSON_free(_Memory);
  }
  cJSON_Delete(uVar9);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ofstream<char,std::char_traits<char>_> */
  *(basic_ofstream<char,std::char_traits<char>_>_vftable **)
   ((longlong)&local_198.vbtablePtr +
   (longlong)
   *(int *)(CONCAT17(local_198.vbtablePtr._7_1_,
                     CONCAT16(local_198.vbtablePtr._6_1_,
                              CONCAT15(local_198.vbtablePtr._5_1_,
                                       CONCAT14(local_198.vbtablePtr._4_1_,
                                                local_198.vbtablePtr._0_4_)))) + 4)) =
       &std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  iVar2 = *(int *)(CONCAT17(local_198.vbtablePtr._7_1_,
                            CONCAT16(local_198.vbtablePtr._6_1_,
                                     CONCAT15(local_198.vbtablePtr._5_1_,
                                              CONCAT14(local_198.vbtablePtr._4_1_,
                                                       local_198.vbtablePtr._0_4_)))) + 4);
  *(int *)((longlong)&local_1a0 + (longlong)iVar2 + 4) = iVar2 + -0xa8;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_filebuf<char,std::char_traits<char>_> */
  local_198.basic_ostream<char,std::char_traits<char>_>_data._0_4_ = 0x40df2fd8;
  local_198.basic_ostream<char,std::char_traits<char>_>_data._4_1_ = 1;
  local_198.basic_ostream<char,std::char_traits<char>_>_data._5_1_ = 0;
  local_198.basic_ostream<char,std::char_traits<char>_>_data._6_2_ = 0;
  if ((local_110._0_8_ != 0) && (*local_178 == (_Iosb<int>)local_120)) {
    *local_178 = local_110._Iosb<int>;
    *local_158 = local_110._Iosb<int>;
    *local_140[0] = local_100 - local_110._Iosb<int>._0_4_;
  }
  if (local_114 == '\x01') {
    FUN_1400e6190(&local_198.basic_ostream<char,std::char_traits<char>_>_data);
  }
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)
             &local_198.basic_ostream<char,std::char_traits<char>_>_data);
  std::ios_base::~ios_base(local_f0);
  if (7 < local_70) {
    uVar11 = local_70 * 2 + 2;
    pppppppcVar14 = local_88;
    if (0xfff < uVar11) {
      pppppppcVar14 = (code *******)local_88[-1];
      if ((undefined *)0x1f < (undefined *)((longlong)local_88 + (-8 - (longlong)pppppppcVar14))) {
LAB_14028859d:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar11 = local_70 * 2 + 0x29;
    }
    thunk_FUN_140b68ba8(pppppppcVar14,uVar11);
  }
  return uVar10 != 0;
}


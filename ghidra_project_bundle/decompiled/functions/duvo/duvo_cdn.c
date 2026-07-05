/**
 * Function: duvo_cdn
 * Address:  140063d90
 * Signature: void __fastcall duvo_cdn(undefined8 * param_1, undefined8 param_2, undefined8 param_3)
 * Body size: 1015 bytes
 */


void duvo_cdn(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  ulonglong uVar3;
  char *pcVar4;
  longlong lVar5;
  _Func_impl_no_alloc<_public:_void___cdecl_ldv::client::GameSession::InstallAssetBridges(gfx_resources*___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)___ptr64_::_1_::<lambda_0>,void,unsigned___int64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_vftable
  *local_f8;
  undefined8 *local_f0;
  _Func_impl_no_alloc<_public:_void___cdecl_ldv::client::GameSession::InstallAssetBridges(gfx_resources*___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)___ptr64_::_1_::<lambda_0>,void,unsigned___int64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_vftable
  **local_c0;
  longlong local_b8 [3];
  ulonglong local_a0;
  longlong local_98 [3];
  ulonglong local_80;
  char *local_78;
  size_t sStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  char *local_50;
  size_t sStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_78 = (char *)0x0;
  sStack_70 = 0;
  local_68 = 0;
  uStack_60 = 7;
  pcVar2 = (char *)thunk_FUN_1400505b0("Luduvo","Client");
  if (pcVar2 == (char *)0x0) {
    local_50 = "luduvo_cdn";
    sStack_48 = 10;
    uVar1 = FUN_140b6625c();
    FUN_140004460(local_b8,uVar1,&local_50);
    FUN_140064280(local_98);
    FUN_140003330(&local_50,local_98,local_b8);
    if (7 < uStack_60) {
      uVar3 = uStack_60 * 2 + 2;
      pcVar2 = local_78;
      if (0xfff < uVar3) {
        pcVar2 = *(char **)(local_78 + -8);
        if ((char *)0x1f < local_78 + (-8 - (longlong)pcVar2)) goto LAB_14006416e;
        uVar3 = uStack_60 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(pcVar2,uVar3);
    }
    local_68 = local_40;
    uStack_60 = uStack_38;
    local_78 = local_50;
    sStack_70 = sStack_48;
    local_40 = 0;
    uStack_38 = 7;
    local_50 = (char *)((ulonglong)local_50 & 0xffffffffffff0000);
    if (7 < local_80) {
      uVar3 = local_80 * 2 + 2;
      lVar5 = local_98[0];
      if (0xfff < uVar3) {
        lVar5 = *(longlong *)(local_98[0] + -8);
        if (0x1f < (ulonglong)((local_98[0] + -8) - lVar5)) goto LAB_14006416e;
        uVar3 = local_80 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(lVar5,uVar3);
    }
    if (7 < local_a0) {
      uVar3 = local_a0 * 2 + 2;
      lVar5 = local_b8[0];
      if (0xfff < uVar3) {
        lVar5 = *(longlong *)(local_b8[0] + -8);
        if (0x1f < (ulonglong)((local_b8[0] + -8) - lVar5)) goto LAB_14006416e;
        uVar3 = local_a0 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(lVar5,uVar3);
    }
  }
  else {
    local_50 = "cdn_cache";
    sStack_48 = 9;
    uVar1 = FUN_140b6625c();
    FUN_140004460(local_b8,uVar1,&local_50);
    sStack_48 = strlen(pcVar2);
    local_50 = pcVar2;
    uVar1 = FUN_140b6625c();
    FUN_140004460(local_98,uVar1,&local_50);
    FUN_140003330(&local_50,local_98,local_b8);
    if (7 < uStack_60) {
      uVar3 = uStack_60 * 2 + 2;
      pcVar4 = local_78;
      if (0xfff < uVar3) {
        pcVar4 = *(char **)(local_78 + -8);
        if ((char *)0x1f < local_78 + (-8 - (longlong)pcVar4)) goto LAB_14006416e;
        uVar3 = uStack_60 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(pcVar4,uVar3);
    }
    local_68 = local_40;
    uStack_60 = uStack_38;
    local_78 = local_50;
    sStack_70 = sStack_48;
    local_40 = 0;
    uStack_38 = 7;
    local_50 = (char *)((ulonglong)local_50 & 0xffffffffffff0000);
    if (7 < local_80) {
      uVar3 = local_80 * 2 + 2;
      lVar5 = local_98[0];
      if (0xfff < uVar3) {
        lVar5 = *(longlong *)(local_98[0] + -8);
        if (0x1f < (ulonglong)((local_98[0] + -8) - lVar5)) goto LAB_14006416e;
        uVar3 = local_80 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(lVar5,uVar3);
    }
    if (7 < local_a0) {
      uVar3 = local_a0 * 2 + 2;
      lVar5 = local_b8[0];
      if (0xfff < uVar3) {
        lVar5 = *(longlong *)(local_b8[0] + -8);
        if (0x1f < (ulonglong)((local_b8[0] + -8) - lVar5)) goto LAB_14006416e;
        uVar3 = local_a0 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(lVar5,uVar3);
    }
    thunk_FUN_140056d90(pcVar2);
  }
  FUN_140064410(&local_50,param_3,&local_78);
  pcVar2 = local_50;
  local_50 = (char *)0x0;
  lVar5 = param_1[0x872f];
  param_1[0x872f] = pcVar2;
  if (lVar5 != 0) {
    FUN_1401c20b0(lVar5);
    thunk_FUN_140b68ba8(lVar5,0x178);
    pcVar2 = local_50;
    if (local_50 != (char *)0x0) {
      FUN_1401c20b0(local_50);
      thunk_FUN_140b68ba8(pcVar2,0x178);
    }
  }
  local_f8 = &std::
              _Func_impl_no_alloc<`public:_void___cdecl_ldv::client::GameSession::InstallAssetBridges(gfx_resources*___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)___ptr64'::`1'::<lambda_0>,void,unsigned___int64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
              ::vftable;
  local_c0 = &local_f8;
  local_f0 = param_1;
  FUN_1401c2310(param_1[0x872f]);
  FUN_1401f8670(*param_1,param_2,param_1[0x872f]);
  if (7 < uStack_60) {
    uVar3 = uStack_60 * 2 + 2;
    pcVar2 = local_78;
    if (0xfff < uVar3) {
      pcVar2 = *(char **)(local_78 + -8);
      if ((char *)0x1f < local_78 + (-8 - (longlong)pcVar2)) {
LAB_14006416e:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uStack_60 * 2 + 0x29;
    }
    thunk_FUN_140b68ba8(pcVar2,uVar3);
  }
  return;
}


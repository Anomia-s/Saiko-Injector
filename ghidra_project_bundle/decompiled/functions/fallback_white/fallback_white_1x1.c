/**
 * Function: fallback_white_1x1
 * Address:  1404b4070
 * Signature: undefined4 __fastcall fallback_white_1x1(void * param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4)
 * Body size: 684 bytes
 */


undefined4
fallback_white_1x1(void *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  _Func_impl_no_alloc<_bool___cdecl_create_fallback_texture(gfx_resources*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
  *p_Var4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined2 local_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined1 local_c8;
  undefined4 local_c7;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  _Func_impl_no_alloc<_bool___cdecl_create_fallback_texture(gfx_resources*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
  *local_98;
  undefined6 *puStack_90;
  undefined4 *local_88;
  undefined8 uStack_80;
  _Func_impl_no_alloc<_bool___cdecl_create_fallback_texture(gfx_resources*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
  **local_60;
  undefined4 local_4c;
  undefined6 local_48;
  undefined2 uStack_42;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  memset(param_1,0,0x680);
  *(undefined8 *)((longlong)param_1 + 0x90) = param_2;
  FUN_1404d1e00(param_1,0x10,param_3,&LAB_1404b4410);
  FUN_1404d1e00((longlong)param_1 + 0x48,0x28,param_4,FUN_1404b4420);
  cVar2 = FUN_1406da0e0((longlong)param_1 + 0xb0,param_2,0x100000000400000);
  if (cVar2 == '\0') {
    return 0;
  }
  uStack_40 = 0;
  uStack_3c = 0;
  local_48 = 0;
  uStack_42 = 0;
  local_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0xf;
  local_c8 = 1;
  local_c0 = 0;
  local_bc = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_f8 = 0x100000001;
  local_108 = 1;
  uStack_104 = 1;
  uStack_100 = 1;
  uStack_fc = 1;
  local_ec = 0x313;
  local_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  local_98 = (_Func_impl_no_alloc<_bool___cdecl_create_fallback_texture(gfx_resources*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
              *)0x0;
  puStack_90 = (undefined6 *)0x0;
  p_Var4 = (_Func_impl_no_alloc<_bool___cdecl_create_fallback_texture(gfx_resources*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
            *)FUN_140b65d30(0x20);
  local_88 = (undefined4 *)0x12;
  uStack_80 = 0x1f;
  *(undefined4 *)&p_Var4->vfunction1 = 0x6c6c6146;
  builtin_strncpy((char *)((longlong)&p_Var4->vfunction1 + 4),"back",4);
  *(undefined4 *)&p_Var4->vfunction1 = 0x69685720;
  builtin_strncpy((char *)((longlong)&p_Var4->vfunction1 + 4),"te 1",4);
  *(undefined2 *)&p_Var4->vfunction3 = 0x3178;
  *(undefined1 *)((longlong)&p_Var4->vfunction3 + 2) = 0;
  local_98 = p_Var4;
  FUN_1400069b0(&local_e8,0x12);
  local_a4 = 0x20;
  local_a0 = 1;
  thunk_FUN_140b68ba8(p_Var4,0x20);
  (**(code **)(**(longlong **)((longlong)param_1 + 0x90) + 0x30))
            (*(longlong **)((longlong)param_1 + 0x90),&local_98,&local_108);
  local_48 = SUB86(local_98,0);
  uStack_42 = (undefined2)((ulonglong)local_98 >> 0x30);
  if (local_98 ==
      (_Func_impl_no_alloc<_bool___cdecl_create_fallback_texture(gfx_resources*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
       *)0x0) {
    uVar3 = 0;
    local_98 = (_Func_impl_no_alloc<_bool___cdecl_create_fallback_texture(gfx_resources*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
                *)0x0;
  }
  else {
    local_4c = 0xffffffff;
    local_98 = &std::
                _Func_impl_no_alloc<`bool___cdecl_create_fallback_texture(gfx_resources*___ptr64)'::`1'::<lambda_0>,void,nvrhi::ICommandList*___ptr64>
                ::vftable;
    puStack_90 = &local_48;
    local_88 = &local_4c;
    local_60 = &local_98;
    uVar3 = FUN_1404b5ac0(*(undefined8 *)((longlong)param_1 + 0x90),&local_98);
    if (local_60 !=
        (_Func_impl_no_alloc<_bool___cdecl_create_fallback_texture(gfx_resources*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
         **)0x0) {
      (*(*local_60)->vfunction5)(local_60,local_60 != &local_98);
    }
    if ((char)uVar3 != '\0') {
      uStack_3c = 0x100;
      uVar5 = FUN_1404d1fc0(param_1,&local_48,"__fallback_white");
      *(undefined8 *)((longlong)param_1 + 0x98) = uVar5;
      local_48 = 0;
      uStack_42 = 0;
    }
  }
  if (local_d0 < 0x10) {
    plVar1 = (longlong *)CONCAT26(uStack_42,local_48);
  }
  else {
    uVar6 = local_d0 + 1;
    lVar7 = local_e8;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(local_e8 + -8);
      if (0x1f < (ulonglong)((local_e8 + -8) - lVar7)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = local_d0 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
    plVar1 = (longlong *)CONCAT26(uStack_42,local_48);
  }
  if (plVar1 != (longlong *)0x0) {
    local_48 = 0;
    uStack_42 = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return uVar3;
}


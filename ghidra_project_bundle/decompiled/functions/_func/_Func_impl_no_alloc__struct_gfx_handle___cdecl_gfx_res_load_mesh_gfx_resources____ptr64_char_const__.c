/**
 * Function: _Func_impl_no_alloc<`struct_gfx_handle___cdecl_gfx_res_load_mesh(gfx_resources*___ptr64,char_const*___ptr64,unsigned_int)'::`1'::<lambda_3>,void,nvrhi::ICommandList*___ptr64>_Constructor_or_Destructor
 * Address:  1404b5e80
 * Signature: undefined8 __fastcall _Func_impl_no_alloc<`struct_gfx_handle___cdecl_gfx_res_load_mesh(gfx_resources*___ptr64,char_const*___ptr64,unsigned_int)'::`1'::<lambda_3>,void,nvrhi::ICommandList*___ptr64>_Constructor_or_Destructor(longlong param_1, undefined8 param_2, undefined4 param_3)
 * Body size: 616 bytes
 */


undefined8
std::
_Func_impl_no_alloc<`struct_gfx_handle___cdecl_gfx_res_load_mesh(gfx_resources*___ptr64,char_const*___ptr64,unsigned_int)'::`1'::<lambda_3>,void,nvrhi::ICommandList*___ptr64>
::
_Func_impl_no_alloc<_struct_gfx_handle___cdecl_gfx_res_load_mesh(gfx_resources*___ptr64,char_const*___ptr64,unsigned_int)_::_1_::<lambda_3>,void,nvrhi::ICommandList*___ptr64>_Constructor_or_Destructor
          (longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  void *local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  _Func_impl_no_alloc<_struct_gfx_handle___cdecl_gfx_res_load_mesh(gfx_resources*___ptr64,char_const*___ptr64,unsigned_int)_::_1_::<lambda_3>,void,nvrhi::ICommandList*___ptr64>_vftable
  *local_b8;
  undefined8 *puStack_b0;
  longlong *local_a8;
  void **ppvStack_a0;
  void **local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  _Func_impl_no_alloc<_struct_gfx_handle___cdecl_gfx_res_load_mesh(gfx_resources*___ptr64,char_const*___ptr64,unsigned_int)_::_1_::<lambda_3>,void,nvrhi::ICommandList*___ptr64>_vftable
  **pp_Stack_80;
  undefined4 local_78;
  void *local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined8 uStack_50;
  longlong local_48 [4];
  
  local_48[1] = 0xfffffffffffffffe;
  local_48[0] = param_1;
  uVar8 = FUN_1404d2160(param_1 + 0x48);
  if ((int)uVar8 == -1) {
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_1406da870(&local_d8,param_2,&local_58,&local_68,&LAB_1404b6140,param_1,param_3);
    if ((int)uStack_50 == 0) {
      free(local_58);
      local_58 = (void *)0x0;
      uStack_50 = 0;
      free(local_68);
      local_68 = (void *)0x0;
      uStack_60 = 0;
      FUN_1406dc290(&local_d8);
      uVar8 = 0xffffffff;
    }
    else {
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_e8 = 0;
      local_b8 = &vftable;
      puStack_b0 = &local_108;
      local_a8 = local_48;
      pp_Stack_80 = &local_b8;
      ppvStack_a0 = &local_58;
      local_98 = &local_68;
      FUN_1404b5ac0(*(undefined8 *)(param_1 + 0x90));
      if (pp_Stack_80 !=
          (_Func_impl_no_alloc<_struct_gfx_handle___cdecl_gfx_res_load_mesh(gfx_resources*___ptr64,char_const*___ptr64,unsigned_int)_::_1_::<lambda_3>,void,nvrhi::ICommandList*___ptr64>_vftable
           **)0x0) {
        (*(*pp_Stack_80)->vfunction5)(pp_Stack_80,pp_Stack_80 != &local_b8);
      }
      local_f8 = CONCAT44(*(undefined4 *)(local_48[0] + 0xa8),(int)uStack_d0);
      uStack_f0 = local_c8;
      local_e8 = uStack_c0;
      if ((int)uStack_d0 != 0) {
        lVar10 = 0;
        uVar9 = 0;
        do {
          lVar5 = local_48[0];
          local_78 = *(undefined4 *)((longlong)local_d8 + lVar10 + 0x40);
          local_b8 = *(_Func_impl_no_alloc<_struct_gfx_handle___cdecl_gfx_res_load_mesh(gfx_resources*___ptr64,char_const*___ptr64,unsigned_int)_::_1_::<lambda_3>,void,nvrhi::ICommandList*___ptr64>_vftable
                       **)((longlong)local_d8 + lVar10);
          puStack_b0 = (undefined8 *)((undefined8 *)((longlong)local_d8 + lVar10))[1];
          plVar2 = (longlong *)((longlong)local_d8 + lVar10 + 0x10);
          local_a8 = (longlong *)*plVar2;
          ppvStack_a0 = (void **)plVar2[1];
          plVar2 = (longlong *)((longlong)local_d8 + lVar10 + 0x20);
          local_98 = (void **)*plVar2;
          uStack_90 = (undefined4)plVar2[1];
          uStack_8c = *(undefined4 *)((longlong)plVar2 + 0xc);
          puVar3 = (undefined4 *)((longlong)local_d8 + lVar10 + 0x30);
          local_88 = *puVar3;
          uStack_84 = puVar3[1];
          pp_Stack_80 = *(_Func_impl_no_alloc<_struct_gfx_handle___cdecl_gfx_res_load_mesh(gfx_resources*___ptr64,char_const*___ptr64,unsigned_int)_::_1_::<lambda_3>,void,nvrhi::ICommandList*___ptr64>_vftable
                          ***)(puVar3 + 2);
          uVar7 = *(uint *)(local_48[0] + 0xa8);
          if (uVar7 < *(uint *)(local_48[0] + 0xac)) {
LAB_1404b5fa0:
            lVar4 = *(longlong *)(lVar5 + 0xa0);
            *(uint *)(lVar5 + 0xa8) = uVar7 + 1;
            lVar5 = (ulonglong)uVar7 * 0x44;
            *(undefined4 *)(lVar4 + 0x40 + lVar5) = local_78;
            puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar5);
            *puVar1 = CONCAT44(uStack_84,local_88);
            puVar1[1] = pp_Stack_80;
            plVar2 = (longlong *)(lVar4 + 0x20 + lVar5);
            *plVar2 = (longlong)local_98;
            plVar2[1] = CONCAT44(uStack_8c,uStack_90);
            plVar2 = (longlong *)(lVar4 + 0x10 + lVar5);
            *plVar2 = (longlong)local_a8;
            plVar2[1] = (longlong)ppvStack_a0;
            *(undefined8 *)(lVar4 + lVar5) = local_b8;
            ((undefined8 *)(lVar4 + lVar5))[1] = puStack_b0;
          }
          else {
            cVar6 = FUN_1404ee220(local_48[0] + 0xa0,local_48[0] + 0xac,0x44,0);
            if (cVar6 != '\0') {
              uVar7 = *(uint *)(lVar5 + 0xa8);
              goto LAB_1404b5fa0;
            }
          }
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 0x44;
        } while (uVar9 < (uStack_d0 & 0xffffffff));
      }
      free(local_58);
      local_58 = (void *)0x0;
      uStack_50 = 0;
      free(local_68);
      local_68 = (void *)0x0;
      uStack_60 = 0;
      free(local_d8);
      local_d8 = (void *)0x0;
      uStack_d0 = 0;
      uVar8 = FUN_1404d1fc0(local_48[0] + 0x48,&local_108,param_2);
    }
  }
  return uVar8;
}


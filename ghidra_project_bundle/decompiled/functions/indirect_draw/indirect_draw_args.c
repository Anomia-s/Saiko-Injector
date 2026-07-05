/**
 * Function: indirect_draw_args
 * Address:  1404d2480
 * Signature: undefined4 __fastcall indirect_draw_args(longlong * param_1, longlong param_2, undefined8 param_3, uint param_4)
 * Body size: 1243 bytes
 */


undefined4 indirect_draw_args(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  _Func_impl_no_alloc<_void___cdecl_create_geometry(gfx_object_pool*___ptr64,gfx_resources*___ptr64)_::_1_::<lambda_1>,void,nvrhi::ICommandList*___ptr64>_vftable
  **this;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  _Func_impl_no_alloc<_void___cdecl_create_geometry(gfx_object_pool*___ptr64,gfx_resources*___ptr64)_::_1_::<lambda_1>,void,nvrhi::ICommandList*___ptr64>_vftable
  *p_Var13;
  ulonglong uVar14;
  longlong *plVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 in_stack_ffffffffffffff18;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  _Func_impl_no_alloc<_void___cdecl_create_geometry(gfx_object_pool*___ptr64,gfx_resources*___ptr64)_::_1_::<lambda_1>,void,nvrhi::ICommandList*___ptr64>_vftable
  *local_c8;
  longlong **local_c0;
  undefined8 *puStack_b8;
  longlong **local_b0;
  void **ppvStack_a8;
  ulonglong local_a0;
  undefined5 local_98;
  undefined2 uStack_93;
  undefined1 uStack_91;
  undefined5 local_90;
  undefined3 uStack_8b;
  undefined4 local_88;
  undefined2 local_84;
  undefined4 local_80;
  longlong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  local_48 = 0xfffffffffffffffe;
  local_d8 = param_3;
  memset(param_1 + 1,0,400);
  *param_1 = param_2;
  *(uint *)(param_1 + 1) = param_4;
  uVar14 = (ulonglong)param_4;
  pvVar9 = calloc(uVar14,0x80);
  param_1[0xe] = (longlong)pvVar9;
  pvVar10 = calloc(uVar14,0x14);
  param_1[0x20] = (longlong)pvVar10;
  pvVar11 = calloc(0x1000,0x14);
  param_1[0x24] = (longlong)pvVar11;
  pvVar12 = calloc(uVar14,0x20);
  param_1[0x17] = (longlong)pvVar12;
  if (pvVar10 == (void *)0x0 || pvVar9 == (void *)0x0) {
    return 0;
  }
  if (pvVar12 != (void *)0x0 && pvVar11 != (void *)0x0) {
    FUN_1406dcac0(param_1 + 9,param_4);
    FUN_1406dcac0(param_1 + 0x12,(int)param_1[1]);
    FUN_1406dcac0(param_1 + 0x1b,(int)param_1[1]);
    local_e0 = local_d8;
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    local_58 = (void *)0x0;
    uStack_50 = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    local_d0 = param_1;
    FUN_1406dcd30(&local_78,&local_58);
    *(int *)(param_1 + 4) = (int)uStack_50 - *(int *)((longlong)param_1 + 0x1c);
    *(int *)((longlong)param_1 + 0x24) = (int)uStack_50;
    FUN_1406dd400(&local_78,&local_58,0x10,0x10);
    *(int *)(param_1 + 5) = (int)uStack_50 - *(int *)((longlong)param_1 + 0x24);
    *(int *)((longlong)param_1 + 0x2c) = (int)uStack_50;
    FUN_1406ddee0(&local_78,&local_58,0x10);
    *(int *)(param_1 + 6) = (int)uStack_50 - *(int *)((longlong)param_1 + 0x2c);
    *(int *)((longlong)param_1 + 0x34) = (int)uStack_50;
    FUN_1406de810(&local_78,&local_58,0x10);
    *(int *)(param_1 + 7) = (int)uStack_50 - *(int *)((longlong)param_1 + 0x34);
    *(int *)((longlong)param_1 + 0x3c) = (int)uStack_50;
    FUN_1406dee70(&local_78,&local_58);
    *(int *)(param_1 + 8) = (int)uStack_50 - *(int *)((longlong)param_1 + 0x3c);
    local_c8 = &std::
                _Func_impl_no_alloc<`void___cdecl_create_geometry(gfx_object_pool*___ptr64,gfx_resources*___ptr64)'::`1'::<lambda_1>,void,nvrhi::ICommandList*___ptr64>
                ::vftable;
    local_c0 = &local_d0;
    puStack_b8 = &local_e0;
    local_90 = SUB85(&local_c8,0);
    uStack_8b = (undefined3)((ulonglong)&local_c8 >> 0x28);
    local_b0 = &local_78;
    ppvStack_a8 = &local_58;
    FUN_1404d4a00(*param_1);
    this = (_Func_impl_no_alloc<_void___cdecl_create_geometry(gfx_object_pool*___ptr64,gfx_resources*___ptr64)_::_1_::<lambda_1>,void,nvrhi::ICommandList*___ptr64>_vftable
            **)CONCAT35(uStack_8b,local_90);
    if (this != (_Func_impl_no_alloc<_void___cdecl_create_geometry(gfx_object_pool*___ptr64,gfx_resources*___ptr64)_::_1_::<lambda_1>,void,nvrhi::ICommandList*___ptr64>_vftable
                 **)0x0) {
      (*(*this)->vfunction5)(this,this != &local_c8);
    }
    iVar1 = (int)local_d0[2];
    *(int *)((longlong)local_d0 + 0x1c) = *(int *)((longlong)local_d0 + 0x1c) + iVar1;
    *(int *)((longlong)local_d0 + 0x24) = *(int *)((longlong)local_d0 + 0x24) + iVar1;
    *(int *)((longlong)local_d0 + 0x2c) = *(int *)((longlong)local_d0 + 0x2c) + iVar1;
    *(int *)((longlong)local_d0 + 0x34) = *(int *)((longlong)local_d0 + 0x34) + iVar1;
    *(int *)((longlong)local_d0 + 0x3c) = *(int *)((longlong)local_d0 + 0x3c) + iVar1;
    free(local_78);
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    free(local_58);
    FUN_1404d4c10(&local_c8,*param_1,"World ObjectData",0x80,CONCAT44(uVar8,(int)param_1[1]));
    p_Var13 = local_c8;
    local_c8 = (_Func_impl_no_alloc<_void___cdecl_create_geometry(gfx_object_pool*___ptr64,gfx_resources*___ptr64)_::_1_::<lambda_1>,void,nvrhi::ICommandList*___ptr64>_vftable
                *)0x0;
    plVar15 = (longlong *)param_1[0x11];
    param_1[0x11] = (longlong)p_Var13;
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x10))();
      p_Var13 = local_c8;
      if (local_c8 !=
          (_Func_impl_no_alloc<_void___cdecl_create_geometry(gfx_object_pool*___ptr64,gfx_resources*___ptr64)_::_1_::<lambda_1>,void,nvrhi::ICommandList*___ptr64>_vftable
           *)0x0) {
        local_c8 = (_Func_impl_no_alloc<_void___cdecl_create_geometry(gfx_object_pool*___ptr64,gfx_resources*___ptr64)_::_1_::<lambda_1>,void,nvrhi::ICommandList*___ptr64>_vftable
                    *)0x0;
        (**(code **)(p_Var13->vfunction1 + 0x10))();
      }
      p_Var13 = (_Func_impl_no_alloc<_void___cdecl_create_geometry(gfx_object_pool*___ptr64,gfx_resources*___ptr64)_::_1_::<lambda_1>,void,nvrhi::ICommandList*___ptr64>_vftable
                 *)param_1[0x11];
    }
    if (p_Var13 ==
        (_Func_impl_no_alloc<_void___cdecl_create_geometry(gfx_object_pool*___ptr64,gfx_resources*___ptr64)_::_1_::<lambda_1>,void,nvrhi::ICommandList*___ptr64>_vftable
         *)0x0) {
      return 0;
    }
    uVar14 = instance_index_lut(param_1,(longlong *)0x0);
    if ((char)uVar14 == '\0') {
      return 0;
    }
    local_b0 = (longlong **)0x0;
    ppvStack_a8 = (void **)0x0;
    local_c0 = (longlong **)0x0;
    puStack_b8 = (undefined8 *)0x0;
    local_a0 = 0xf;
    local_98 = 0;
    uStack_93 = 0;
    local_90 = 0;
    local_88 = 1;
    local_84 = 0;
    local_80 = 0;
    local_c8 = (_Func_impl_no_alloc<_void___cdecl_create_geometry(gfx_object_pool*___ptr64,gfx_resources*___ptr64)_::_1_::<lambda_1>,void,nvrhi::ICommandList*___ptr64>_vftable
                *)0x14000;
    uStack_91 = 1;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    plVar15 = (longlong *)FUN_140b65d30(0x20);
    local_68 = 0x12;
    uStack_60 = 0x1f;
    *(undefined4 *)plVar15 = 0x69646e49;
    builtin_strncpy((char *)((longlong)plVar15 + 4),"rect",4);
    *(undefined4 *)(plVar15 + 1) = 0x61724420;
    builtin_strncpy((char *)((longlong)plVar15 + 0xc),"w Ar",4);
    *(undefined2 *)(plVar15 + 2) = 0x7367;
    *(char *)((longlong)plVar15 + 0x12) = '\0';
    local_78 = plVar15;
    if (local_a0 < 0x12) {
      FUN_1400069b0(&puStack_b8,0x12);
    }
    else {
      ppvStack_a8 = (void **)0x12;
      lVar4 = *plVar15;
      uVar8 = *(undefined4 *)((longlong)plVar15 + 4);
      lVar5 = plVar15[1];
      uVar3 = *(undefined4 *)((longlong)plVar15 + 0xc);
      *(short *)(puStack_b8 + 2) = (short)plVar15[2];
      *(int *)puStack_b8 = (int)lVar4;
      *(undefined4 *)((longlong)puStack_b8 + 4) = uVar8;
      *(int *)(puStack_b8 + 1) = (int)lVar5;
      *(undefined4 *)((longlong)puStack_b8 + 0xc) = uVar3;
      *(undefined1 *)((longlong)puStack_b8 + 0x12) = 0;
    }
    local_88 = 0x10;
    local_84 = CONCAT11(local_84._1_1_,1);
    thunk_FUN_140b68ba8(plVar15,0x20);
    uVar7 = 0;
    do {
      uVar16 = uVar7;
      if (2 < uVar16) {
        uVar7 = FUN_14021db90(*param_1);
        plVar15 = (longlong *)param_1[0x30];
        plVar2 = (longlong *)param_1[(ulonglong)uVar7 + 0x27];
        if (plVar15 != plVar2) {
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 8))(plVar2);
            plVar15 = (longlong *)param_1[0x30];
          }
          param_1[0x30] = (longlong)plVar2;
          if (plVar15 != (longlong *)0x0) {
            (**(code **)(*plVar15 + 0x10))();
          }
        }
        break;
      }
      (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x88))
                (*(longlong **)(*param_1 + 0x18),&local_78,&local_c8);
      plVar15 = local_78;
      local_78 = (longlong *)0x0;
      plVar2 = (longlong *)param_1[(ulonglong)uVar16 + 0x27];
      param_1[(ulonglong)uVar16 + 0x27] = (longlong)plVar15;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        plVar15 = local_78;
        if (local_78 != (longlong *)0x0) {
          local_78 = (longlong *)0x0;
          (**(code **)(*plVar15 + 0x10))();
        }
        plVar15 = (longlong *)param_1[(ulonglong)uVar16 + 0x27];
      }
      uVar7 = uVar16 + 1;
    } while (plVar15 != (longlong *)0x0);
    if (0xf < local_a0) {
      uVar14 = local_a0 + 1;
      puVar17 = puStack_b8;
      if (0xfff < uVar14) {
        puVar17 = (undefined8 *)puStack_b8[-1];
        if (0x1f < (ulonglong)((longlong)puStack_b8 + (-8 - (longlong)puVar17))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar14 = local_a0 + 0x28;
      }
      thunk_FUN_140b68ba8(puVar17,uVar14);
    }
    if (((2 < uVar16) && (cVar6 = template_draw_args(param_1), cVar6 != '\0')) &&
       (cVar6 = camera_vp_matrix(param_1), cVar6 != '\0')) {
      uVar8 = FUN_1404d3360(param_1);
      return uVar8;
    }
  }
  return 0;
}


/**
 * Function: instance_index_lut
 * Address:  1404d2b60
 * Signature: ulonglong __fastcall instance_index_lut(longlong * param_1, longlong * param_2)
 * Body size: 770 bytes
 */


ulonglong instance_index_lut(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  char *pcVar6;
  void *_Memory;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  size_t _Size;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *local_f0;
  longlong local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  ulonglong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined5 uStack_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined4 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  longlong *local_60;
  void *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_d0 = (undefined1  [16])0x0;
  local_e0 = (undefined1  [16])0x0;
  local_c0 = 0xf;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 1;
  local_a4 = 0;
  local_a0 = 0;
  local_e8 = (ulonglong)*(uint *)(param_1 + 1) << 2;
  uStack_b4 = 1;
  local_88 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_f0 = param_1;
  pcVar6 = (char *)FUN_140b65d30(0x20);
  local_88._8_8_ = 0x1f;
  local_88._0_8_ = 0x12;
  builtin_strncpy(pcVar6,"Instance Index LUT",0x13);
  if (local_c0 < 0x12) {
    local_98._0_8_ = pcVar6;
    FUN_1400069b0(local_e0 + 8,0x12);
  }
  else {
    local_d0._8_8_ = 0x12;
    uVar3 = *(undefined8 *)pcVar6;
    uVar4 = *(undefined8 *)(pcVar6 + 8);
    *(undefined2 *)(local_e0._8_8_ + 0x10) = *(undefined2 *)(pcVar6 + 0x10);
    *(undefined8 *)local_e0._8_8_ = uVar3;
    *(undefined8 *)(local_e0._8_8_ + 8) = uVar4;
    *(undefined1 *)(local_e0._8_8_ + 0x12) = 0;
    local_98._0_8_ = pcVar6;
  }
  local_a8 = 4;
  local_a4 = CONCAT11(local_a4._1_1_,1);
  thunk_FUN_140b68ba8(pcVar6,0x20);
  (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x88))
            (*(longlong **)(*param_1 + 0x18),local_98,&local_e8);
  pcVar6 = (char *)local_98._0_8_;
  local_98._0_8_ =
       (_Func_impl_no_alloc<_bool___cdecl_create_instance_index_buffer(gfx_object_pool*___ptr64,nvrhi::ICommandList*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
        *)0x0;
  uVar3 = local_98._0_8_;
  local_98._0_8_ =
       (_Func_impl_no_alloc<_bool___cdecl_create_instance_index_buffer(gfx_object_pool*___ptr64,nvrhi::ICommandList*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
        *)0x0;
  plVar2 = (longlong *)param_1[0x26];
  param_1[0x26] = (longlong)pcVar6;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    uVar3 = local_98._0_8_;
    if ((_Func_impl_no_alloc<_bool___cdecl_create_instance_index_buffer(gfx_object_pool*___ptr64,nvrhi::ICommandList*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
         *)local_98._0_8_ !=
        (_Func_impl_no_alloc<_bool___cdecl_create_instance_index_buffer(gfx_object_pool*___ptr64,nvrhi::ICommandList*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
         *)0x0) {
      local_98._0_8_ =
           (_Func_impl_no_alloc<_bool___cdecl_create_instance_index_buffer(gfx_object_pool*___ptr64,nvrhi::ICommandList*___ptr64)_::_1_::<lambda_0>,void,nvrhi::ICommandList*___ptr64>_vftable
            *)0x0;
      (**(code **)(*(vfunction1 **)uVar3 + 0x10))();
    }
    pcVar6 = (char *)param_1[0x26];
    uVar3 = local_98._0_8_;
  }
  local_98._0_8_ = uVar3;
  if (pcVar6 != (char *)0x0) {
    uVar5 = *(uint *)(param_1 + 1);
    _Size = (ulonglong)uVar5 * 4;
    _Memory = malloc(_Size);
    local_50 = _Memory;
    if (_Memory != (void *)0x0) {
      if (uVar5 == 0) {
        _Size = 0;
      }
      else {
        if (uVar5 < 8) {
          uVar7 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar5 & 0xfffffff8);
          iVar10 = 0;
          iVar11 = 1;
          iVar12 = 2;
          iVar13 = 3;
          uVar8 = 0;
          do {
            piVar1 = (int *)((longlong)_Memory + uVar8);
            *piVar1 = iVar10;
            piVar1[1] = iVar11;
            piVar1[2] = iVar12;
            piVar1[3] = iVar13;
            piVar1 = (int *)((longlong)_Memory + uVar8 + 0x10);
            *piVar1 = iVar10 + 4;
            piVar1[1] = iVar11 + 4;
            piVar1[2] = iVar12 + 4;
            piVar1[3] = iVar13 + 4;
            iVar10 = iVar10 + 8;
            iVar11 = iVar11 + 8;
            iVar12 = iVar12 + 8;
            iVar13 = iVar13 + 8;
            uVar8 = uVar8 + 0x20;
          } while ((_Size & 0xffffffffffffffe0) != uVar8);
          if ((uVar5 & 0xfffffff8) == uVar5) goto LAB_1404d2d7c;
        }
        do {
          *(int *)((longlong)_Memory + uVar7 * 4) = (int)uVar7;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar5);
      }
LAB_1404d2d7c:
      if (param_2 == (longlong *)0x0) {
        local_98._8_8_ = &local_f0;
        local_98._0_8_ =
             &std::
              _Func_impl_no_alloc<`bool___cdecl_create_instance_index_buffer(gfx_object_pool*___ptr64,nvrhi::ICommandList*___ptr64)'::`1'::<lambda_0>,void,nvrhi::ICommandList*___ptr64>
              ::vftable;
        local_88._0_8_ = &local_50;
        local_60 = (longlong *)local_98;
        uVar5 = FUN_1404d4a00(*param_1,local_98);
        uVar7 = (ulonglong)uVar5;
        _Memory = local_50;
        if (local_60 != (longlong *)0x0) {
          (**(code **)(*local_60 + 0x20))(local_60,local_60 != (longlong *)local_98);
          _Memory = local_50;
        }
      }
      else {
        uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        (**(code **)(*param_2 + 0x80))(param_2,pcVar6,_Memory,_Size,0);
      }
      free(_Memory);
      goto joined_r0x0001404d2d05;
    }
  }
  uVar7 = 0;
joined_r0x0001404d2d05:
  if (0xf < local_c0) {
    uVar8 = local_c0 + 1;
    lVar9 = local_e0._8_8_;
    if (0xfff < uVar8) {
      lVar9 = *(longlong *)(local_e0._8_8_ + -8);
      if (0x1f < (ulonglong)((local_e0._8_8_ + -8) - lVar9)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar8 = local_c0 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar9,uVar8);
  }
  return uVar7 & 0xffffffff;
}


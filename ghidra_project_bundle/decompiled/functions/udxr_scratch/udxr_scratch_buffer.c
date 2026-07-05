/**
 * Function: udxr_scratch_buffer
 * Address:  1407cc880
 * Signature: undefined __thiscall udxr_scratch_buffer(void * this)
 * Body size: 959 bytes
 */


/* WARNING: Type propagation algorithm not settling */

longlong * __thiscall udxr_scratch_buffer(void *this,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *_Src;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *pbVar8;
  undefined8 *******pppppppuVar9;
  ulonglong uVar10;
  size_t _Size;
  undefined8 in_stack_fffffffffffffe28;
  undefined4 uVar11;
  longlong local_1b8 [2];
  undefined1 local_1a8 [8];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_1a0 [3];
  longlong *local_188;
  longlong *local_180;
  longlong *local_168;
  ulonglong *local_160;
  int *local_150;
  ulonglong local_138;
  uint local_130;
  ios_base local_120 [6];
  int local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 *******local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_38;
  
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffe28 >> 0x20);
  local_38 = 0xfffffffffffffffe;
  plVar6 = (longlong *)FUN_140b65d30(0x48);
  plVar6[1] = 0x100000001;
                    /* inlined constructor or destructor (approx location) for
                       std::_Ref_count_obj2<nvrhi::d3d12::BufferChunk> */
  *plVar6 = (longlong)&std::_Ref_count_obj2<nvrhi::d3d12::BufferChunk>::vftable;
  plVar1 = plVar6 + 2;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  uVar10 = param_3 + 0xfffU & 0xfffffffffffff000;
  local_b8 = 0;
  uStack_b0 = 0;
  local_bc = 2 - (uint)*(byte *)((longlong)this + 0x28);
  uStack_90 = 0;
  local_68 = 0;
  local_98 = 1;
  uStack_80 = 0x1000100000001;
  local_78 = 0x100000000;
  uStack_70 = 0x100000000;
  uVar4 = 0xac3;
  if (*(byte *)((longlong)this + 0x28) == 1) {
    local_68 = 4;
    uVar4 = 0;
  }
  local_a8 = plVar1;
  local_a0 = plVar6;
  local_88 = uVar10;
  iVar5 = (**(code **)(*(longlong *)**(undefined8 **)this + 0xd8))
                    ((longlong *)**(undefined8 **)this,&local_bc,0,&local_98,CONCAT44(uVar11,uVar4),
                     0,&DAT_140df56c0,plVar1);
  if ((iVar5 < 0) ||
     ((*(char *)((longlong)this + 0x28) == '\0' &&
      (iVar5 = (**(code **)(*(longlong *)plVar6[2] + 0x40))((longlong *)plVar6[2],0,0), iVar5 < 0)))
     ) {
    *param_2 = 0;
    param_2[1] = 0;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) {
      return param_2;
    }
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) {
      return param_2;
    }
    (**(code **)(*plVar6 + 8))(plVar6);
    return param_2;
  }
  plVar6[4] = uVar10;
  lVar7 = (**(code **)(*(longlong *)plVar6[2] + 0x58))();
  plVar6[7] = lVar7;
  *(undefined4 *)(plVar6 + 8) = *(undefined4 *)((longlong)this + 0x38);
  FUN_140724fc0(local_1b8,1);
  if (*(char *)((longlong)this + 0x28) == '\x01') {
    pbVar8 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)
             FUN_1407ccd30(local_1a8,L"DXR Scratch Buffer ");
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar8,*(uint *)(plVar6 + 8))
    ;
  }
  else {
    pbVar8 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)
             FUN_1407ccd30(local_1a8,L"Upload Buffer ");
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar8,*(uint *)(plVar6 + 8))
    ;
  }
  plVar3 = (longlong *)*plVar1;
  local_58 = (undefined8 *******)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 7;
  if (((local_130 & 0x22) == 2) || (uVar10 = *local_160, uVar10 == 0)) {
    if (((local_130 & 4) != 0) || (*local_168 == 0)) goto joined_r0x0001407ccb28;
    uVar10 = *local_168 + (longlong)*local_150 * 2;
    _Src = (void *)*local_188;
  }
  else {
    if (uVar10 < local_138) {
      uVar10 = local_138;
    }
    _Src = (void *)*local_180;
  }
  if (_Src != (void *)0x0) {
    _Size = uVar10 - (longlong)_Src;
    if ((ulonglong)((longlong)_Size >> 1) < 8) {
      local_48 = (longlong)_Size >> 1;
      memmove(&local_58,_Src,_Size);
      *(undefined2 *)((longlong)&local_58 + _Size) = 0;
    }
    else {
      FUN_140003fc0(&local_58);
    }
  }
joined_r0x0001407ccb28:
  pppppppuVar9 = local_58;
  if (local_40 < 8) {
    pppppppuVar9 = &local_58;
  }
  (**(code **)(*plVar3 + 0x30))(plVar3,pppppppuVar9);
  if (7 < local_40) {
    uVar10 = local_40 * 2 + 2;
    pppppppuVar9 = local_58;
    if (0xfff < uVar10) {
      pppppppuVar9 = (undefined8 *******)local_58[-1];
      if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pppppppuVar9))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar10 = local_40 * 2 + 0x29;
    }
    thunk_FUN_140b68ba8(pppppppuVar9,uVar10);
  }
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar6;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   ((longlong)local_1b8 + (longlong)*(int *)(local_1b8[0] + 4)) =
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable
  ;
  *(int *)((longlong)local_1a0 + (longlong)*(int *)(local_1b8[0] + 4) + -0x1c) =
       *(int *)(local_1b8[0] + 4) + -0x98;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  local_1a0[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                 &std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                  vftable;
  FUN_140727fe0(local_1a0);
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_1a0);
  std::ios_base::~ios_base(local_120);
  return param_2;
}


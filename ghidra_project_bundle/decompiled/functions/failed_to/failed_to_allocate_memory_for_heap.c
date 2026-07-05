/**
 * Function: failed_to_allocate_memory_for_heap
 * Address:  140534ed0
 * Signature: undefined8 * __thiscall failed_to_allocate_memory_for_heap(void * this, undefined8 * param_1, undefined8 * param_2)
 * Body size: 1081 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * __thiscall
failed_to_allocate_memory_for_heap(void *this,undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  void *_Src;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *puVar10;
  int iStack_1b4;
  longlong local_1b0 [2];
  undefined1 local_1a0 [8];
  basic_streambuf<char,std::char_traits<char>_> local_198 [3];
  longlong *local_180;
  longlong *local_178;
  longlong *local_160;
  ulonglong *local_158;
  int *local_148;
  ulonglong local_130;
  uint local_128;
  ios_base local_118 [6];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  void *local_a0;
  undefined8 *******local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (2 < (ulonglong)*(byte *)(param_2 + 1)) {
    httplib::ClientImpl::vfunction4();
    *param_1 = 0;
    return param_1;
  }
  uVar6 = *param_2;
  uVar2 = *(undefined4 *)(&DAT_140e50100 + (ulonglong)*(byte *)(param_2 + 1) * 4);
  local_70 = param_1;
  puVar5 = (undefined8 *)FUN_140b65d30(0x58);
  lVar1 = (longlong)this + 0x610;
  *(undefined1 *)(puVar5 + 2) = 1;
  puVar5[3] = 0;
  *(undefined4 *)(puVar5 + 1) = 1;
  *puVar5 = &nvrhi::vulkan::Heap::vftable;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0xf;
  puVar5[10] = lVar1;
  puVar5[4] = *param_2;
  *(undefined1 *)(puVar5 + 5) = *(undefined1 *)(param_2 + 1);
  local_68 = puVar5;
  if (puVar5 + 4 != param_2) {
    uVar8 = param_2[4];
    if ((ulonglong)param_2[5] < 0x10) {
      puVar10 = param_2 + 2;
    }
    else {
      puVar10 = (undefined8 *)param_2[2];
    }
    if (uVar8 < 0x10) {
      puVar5[8] = uVar8;
      local_a0 = this;
      memmove(puVar5 + 6,puVar10,uVar8);
      *(undefined1 *)((longlong)puVar5 + uVar8 + 0x30) = 0;
      this = local_a0;
    }
    else {
      FUN_1400069b0(puVar5 + 6,uVar8);
    }
  }
  *(undefined1 *)(puVar5 + 2) = 1;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  local_b8 = uVar6;
  iVar4 = FUN_1406f62f0(lVar1,puVar5 + 2,&local_b8,uVar2,*(undefined1 *)((longlong)this + 0xbb),0,0,
                        0);
  puVar5 = local_70;
  if (iVar4 == 0) {
    if (param_2[4] != 0) {
      if ((ulonglong)param_2[5] < 0x10) {
        puVar10 = param_2 + 2;
      }
      else {
        puVar10 = (undefined8 *)param_2[2];
      }
      vk_device_setdebugutilsobjectnameext((longlong)this + 0x90,local_68[3],8,8,puVar10);
    }
    *puVar5 = local_68;
    return puVar5;
  }
  FUN_1401e87c0(local_1b0,1);
  uVar6 = FUN_1400e5ec0(local_1a0,"Failed to allocate memory for Heap ");
  uVar7 = FUN_140527b30(param_2 + 2);
  uVar6 = FUN_1400e5ec0(uVar6,uVar7);
  uVar6 = FUN_1400e5ec0(uVar6,", VkResult = ");
  uVar7 = vk_error_invalid_opaque_capture_address(iVar4);
  FUN_1400e5ec0(uVar6,uVar7);
  puVar5 = local_70;
  local_98 = (undefined8 *******)0x0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0xf;
  if (((local_128 & 0x22) == 2) || (uVar8 = *local_158, uVar8 == 0)) {
    if (((local_128 & 4) == 0) && (*local_160 != 0)) {
      uVar8 = *local_160 + (longlong)*local_148;
      _Src = (void *)*local_180;
      goto joined_r0x000140535144;
    }
  }
  else {
    if (uVar8 < local_130) {
      uVar8 = local_130;
    }
    _Src = (void *)*local_178;
joined_r0x000140535144:
    if (_Src != (void *)0x0) {
      uVar8 = uVar8 - (longlong)_Src;
      if (uVar8 < 0x10) {
        local_88 = uVar8;
        memmove(&local_98,_Src,uVar8);
        *(undefined1 *)((longlong)&local_98 + uVar8) = 0;
        plVar3 = *(longlong **)((longlong)this + 0x5f8);
        goto joined_r0x000140535171;
      }
      FUN_1400069b0(&local_98,uVar8);
    }
  }
  plVar3 = *(longlong **)((longlong)this + 0x5f8);
joined_r0x000140535171:
  pppppppuVar9 = local_98;
  if (local_80 < 0x10) {
    pppppppuVar9 = &local_98;
  }
  (**(code **)(*plVar3 + 8))(plVar3,2,pppppppuVar9);
  if (0xf < local_80) {
    uVar8 = local_80 + 1;
    pppppppuVar9 = local_98;
    if (0xfff < uVar8) {
      pppppppuVar9 = (undefined8 *******)local_98[-1];
      if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pppppppuVar9))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar8 = local_80 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppppuVar9,uVar8);
  }
  (**(code **)*local_68)(local_68,1);
  *puVar5 = 0;
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_1b0 + (longlong)*(int *)(local_1b0[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_1b4 + (longlong)*(int *)(local_1b0[0] + 4)) =
       *(int *)(local_1b0[0] + 4) + -0x98;
  local_198[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_198);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_198);
  std::ios_base::~ios_base(local_118);
  return puVar5;
}


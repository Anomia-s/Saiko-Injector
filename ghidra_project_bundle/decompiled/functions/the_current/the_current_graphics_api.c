/**
 * Function: the_current_graphics_api
 * Address:  140514ca0
 * Signature: undefined8 * __thiscall the_current_graphics_api(void * this, undefined8 * param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4)
 * Body size: 611 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * __thiscall
the_current_graphics_api
          (void *this,undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *******pppppppuVar7;
  longlong local_150 [2];
  undefined1 local_140 [8];
  basic_streambuf<char,std::char_traits<char>_> local_138 [3];
  longlong *local_120;
  longlong *local_118;
  longlong *local_100;
  ulonglong *local_f8;
  int *local_e8;
  ulonglong local_d0;
  uint local_c8;
  ios_base local_b8 [6];
  undefined8 *******local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  cVar2 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x128))();
  if (cVar2 == '\x01') {
    (**(code **)(*(longlong *)this + 0x80))(this,param_1,param_2,param_3,param_4);
    return param_1;
  }
  FUN_1401e87c0(local_150,1);
  uVar4 = FUN_1400e5ec0(local_140,"The current graphics API (");
  uVar3 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x128))();
  uVar5 = FUN_140527af0(uVar3);
  uVar4 = FUN_1400e5ec0(uVar4,uVar5);
  FUN_1400e5ec0(uVar4,") doesn\'t support createSamplerFeedbackForNativeTexture");
  local_58 = (undefined8 *******)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0xf;
  if (((local_c8 & 0x22) == 2) || (uVar6 = *local_f8, uVar6 == 0)) {
    if (((local_c8 & 4) == 0) && (*local_100 != 0)) {
      uVar6 = *local_100 + (longlong)*local_e8;
      _Src = (void *)*local_120;
      goto joined_r0x000140514dcf;
    }
  }
  else {
    if (uVar6 < local_d0) {
      uVar6 = local_d0;
    }
    _Src = (void *)*local_118;
joined_r0x000140514dcf:
    if (_Src != (void *)0x0) {
      uVar6 = uVar6 - (longlong)_Src;
      if (uVar6 < 0x10) {
        local_48 = uVar6;
        memmove(&local_58,_Src,uVar6);
        *(undefined1 *)((longlong)&local_58 + uVar6) = 0;
        plVar1 = *(longlong **)((longlong)this + 0x18);
        goto joined_r0x000140514df5;
      }
      FUN_1400069b0(&local_58,uVar6);
    }
  }
  plVar1 = *(longlong **)((longlong)this + 0x18);
joined_r0x000140514df5:
  pppppppuVar7 = local_58;
  if (local_40 < 0x10) {
    pppppppuVar7 = &local_58;
  }
  (**(code **)(*plVar1 + 8))(plVar1,2,pppppppuVar7);
  if (0xf < local_40) {
    uVar6 = local_40 + 1;
    pppppppuVar7 = local_58;
    if (0xfff < uVar6) {
      pppppppuVar7 = (undefined8 *******)local_58[-1];
      if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pppppppuVar7))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = local_40 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppppuVar7,uVar6);
  }
  *param_1 = 0;
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_150 + (longlong)*(int *)(local_150[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)local_138 + (longlong)*(int *)(local_150[0] + 4) + -0x1c) =
       *(int *)(local_150[0] + 4) + -0x98;
  local_138[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_138);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_138);
  std::ios_base::~ios_base(local_b8);
  return param_1;
}


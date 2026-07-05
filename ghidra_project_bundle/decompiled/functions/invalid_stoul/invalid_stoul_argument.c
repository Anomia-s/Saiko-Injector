/**
 * Function: invalid_stoul_argument
 * Address:  140b57010
 * Signature: undefined __thiscall invalid_stoul_argument(void * this)
 * Body size: 1417 bytes
 */


void __thiscall
invalid_stoul_argument(void *this,longlong param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ulong *puVar2;
  void *_Src;
  vfunction3 *_Size;
  longlong *plVar3;
  longlong lVar4;
  vfunction5 *pvVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  vfunction4 *pvVar9;
  vfunction6 *pvVar10;
  code *pcVar11;
  longlong lVar12;
  _Func_impl_no_alloc<_private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64_::_1_::<lambda_2>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>_vftable
  *p_Var13;
  vfunction4 *pvVar14;
  undefined1 local_120 [96];
  vfunction6 *local_c0;
  void *local_b8;
  undefined8 local_b0;
  _Func_impl_no_alloc<_private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64_::_1_::<lambda_2>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>_vftable
  *local_a8;
  ulonglong local_a0;
  _Func_impl_no_alloc<_private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64_::_1_::<lambda_2>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>_vftable
  local_98;
  _Func_impl_no_alloc<_private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64_::_1_::<lambda_2>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>_vftable
  *local_60;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  switch(*(undefined1 *)(*(longlong *)(param_3 + 8) + 0x25)) {
  case 1:
    if (*(char *)(*(longlong *)(param_3 + 8) + 0x24) == '\t') {
      if (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0xd8) != 0) {
        local_98.vfunction1 = (vfunction1 *)0x0;
        local_98.vfunction1 = (vfunction1 *)0x0;
        local_98.vfunction3 = (vfunction3 *)0x0;
        local_98.vfunction4 = (vfunction4 *)FUN_140b65d30(0x80);
        *(longlong *)(local_98.vfunction4 + 8) = 0;
        *(code **)(local_98.vfunction4 + 0x18) = std::bad_alloc::bad_alloc_Constructor_or_Destructor
        ;
        *(vfunction4 **)local_98.vfunction4 = local_98.vfunction4 + 0x20;
        *(longlong *)(local_98.vfunction4 + 0x10) = 0x58;
        local_98.vfunction5 = (vfunction5 *)0x0;
        local_98.vfunction6 = (vfunction6 *)0x0;
        FUN_1400306c0(param_3,&local_98);
        pvVar5 = local_98.vfunction5;
        local_a0 = *(ulonglong *)(param_2 + 0x2f0);
        if (*(ulonglong *)(param_2 + 0x2f8) < 0x10) {
          local_a8 = (_Func_impl_no_alloc<_private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64_::_1_::<lambda_2>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>_vftable
                      *)(param_2 + 0x2e0);
        }
        else {
          local_a8 = *(_Func_impl_no_alloc<_private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64_::_1_::<lambda_2>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>_vftable
                       **)(param_2 + 0x2e0);
        }
        local_b0 = *(undefined8 *)(param_2 + 0x2d0);
        if (*(ulonglong *)(param_2 + 0x2d8) < 0x10) {
          local_b8 = (void *)(param_2 + 0x2c0);
        }
        else {
          local_b8 = *(void **)(param_2 + 0x2c0);
        }
        local_120._56_8_ = local_98.vfunction1;
        local_120._64_8_ = local_98.vfunction1;
        local_120._72_8_ = local_98.vfunction3;
        local_120._80_4_ = local_98.vfunction4._0_4_;
        local_120._84_4_ = local_98.vfunction4._4_4_;
        local_120._88_4_ = local_98.vfunction5._0_4_;
        local_120._92_4_ = local_98.vfunction5._4_4_;
        local_98.vfunction4 = (vfunction4 *)0x0;
        local_98.vfunction5 = (vfunction5 *)0x0;
        local_c0 = local_98.vfunction6;
        if ((pvVar5 != (vfunction5 *)0x0) && (pvVar5[0xc0] == (vfunction5)0x1)) {
          local_120._64_8_ = pvVar5 + 0x98;
        }
        FUN_140030940(*(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0xd8),local_120 + 0x38,
                      local_120 + 0x68,local_120 + 0x78);
        FUN_1400294a0(&local_98);
        return;
      }
      quill::v11::QuillError::QuillError
                ((QuillError *)local_120,
                 "logger->init_backtrace(...) needs to be called first before using LOG_BACKTRACE(...)."
                );
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((QuillError *)local_120,(ThrowInfo *)&DAT_14140fa50);
    }
    local_98.vfunction1 = *(vfunction1 **)(param_2 + 0x2f0);
    if (*(ulonglong *)(param_2 + 0x2f8) < 0x10) {
      local_98.vfunction1 = (vfunction1 *)(param_2 + 0x2e0);
    }
    else {
      local_98.vfunction1 = *(vfunction1 **)(param_2 + 0x2e0);
    }
    local_a0 = *(ulonglong *)(param_2 + 0x2d0);
    if (*(ulonglong *)(param_2 + 0x2d8) < 0x10) {
      local_a8 = (_Func_impl_no_alloc<_private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64_::_1_::<lambda_2>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>_vftable
                  *)(param_2 + 0x2c0);
    }
    else {
      local_a8 = *(_Func_impl_no_alloc<_private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64_::_1_::<lambda_2>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>_vftable
                   **)(param_2 + 0x2c0);
    }
    FUN_140b576c0(this,param_3,local_120 + 0x78,&local_98);
    if (*(byte *)(*(longlong *)(param_3 + 8) + 0x24) <
        *(byte *)(*(longlong *)(param_3 + 0x10) + 0x3a)) {
      return;
    }
    lVar12 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0xd8);
    if (lVar12 == 0) {
      return;
    }
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64'::`1'::<lambda_1>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>
                        */
    local_98.vfunction1 =
         (vfunction1 *)
         &std::
          _Func_impl_no_alloc<`private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64'::`1'::<lambda_1>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>
          ::vftable;
    local_98.vfunction1 = this;
    local_60 = &local_98;
    FUN_140030580(lVar12,&local_98);
    break;
  case 2:
    lVar12 = *(longlong *)(param_3 + 0x10);
    if (*(longlong *)(lVar12 + 0xd8) == 0) {
      puVar8 = (undefined8 *)FUN_140b65d30(0x30);
      puVar8[1] = 0x100000001;
                    /* inlined constructor or destructor (approx location) for
                       std::_Ref_count_obj2<quill::v11::detail::BacktraceStorage> */
      *puVar8 = &std::_Ref_count_obj2<quill::v11::detail::BacktraceStorage>::vftable;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      *(undefined8 **)(lVar12 + 0xd8) = puVar8 + 2;
      plVar3 = *(longlong **)(lVar12 + 0xe0);
      *(undefined8 **)(lVar12 + 0xe0) = puVar8;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar7 = (int *)((longlong)plVar3 + 0xc);
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (*piVar7 == 0) {
            (**(code **)(*plVar3 + 8))(plVar3);
          }
        }
      }
    }
    puVar2 = *(ulong **)(*(longlong *)(param_3 + 0x10) + 0xd8);
    _Src = (void *)**(undefined8 **)(param_3 + 0x18);
    _Size = (vfunction3 *)(*(undefined8 **)(param_3 + 0x18))[1];
    local_98.vfunction3 = (vfunction3 *)0x0;
    local_98.vfunction4 = (vfunction4 *)0x0;
    local_98.vfunction1 = (vfunction1 *)0x0;
    local_98.vfunction1 = (vfunction1 *)0x0;
    if (_Size == (vfunction3 *)0x0) {
      local_98.vfunction4 = (vfunction4 *)0xf;
      piVar7 = _errno();
      p_Var13 = &local_98;
    }
    else {
      if ((longlong)_Size < 0) {
                    /* WARNING: Subroutine does not return */
        string_too_long();
      }
      if (_Size < (vfunction3 *)0x10) {
        local_98.vfunction4 = (vfunction4 *)0xf;
        local_98.vfunction3 = _Size;
        memcpy(&local_98,_Src,(size_t)_Size);
        _Size[(longlong)&local_98.vfunction1] = (vfunction3)0x0;
        pvVar14 = local_98.vfunction4;
        piVar7 = _errno();
        p_Var13 = (_Func_impl_no_alloc<_private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64_::_1_::<lambda_2>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>_vftable
                   *)local_98.vfunction1;
        if (pvVar14 < (vfunction4 *)0x10) {
          p_Var13 = &local_98;
        }
      }
      else {
        pvVar9 = (vfunction4 *)((ulonglong)_Size | 0xf);
        pvVar14 = (vfunction4 *)0x16;
        if ((vfunction4 *)0x16 < pvVar9) {
          pvVar14 = pvVar9;
        }
        if (pvVar9 < (vfunction4 *)0xfff) {
          p_Var13 = (_Func_impl_no_alloc<_private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64_::_1_::<lambda_2>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>_vftable
                     *)FUN_140b65d30(pvVar14 + 1);
        }
        else {
          pvVar10 = (vfunction6 *)FUN_140b65d30(pvVar14 + 0x28);
          p_Var13 = (_Func_impl_no_alloc<_private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64_::_1_::<lambda_2>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>_vftable
                     *)((ulonglong)(pvVar10 + 0x27) & 0xffffffffffffffe0);
          p_Var13[-1].vfunction6 = pvVar10;
        }
        local_98.vfunction1 = (vfunction1 *)p_Var13;
        local_98.vfunction3 = _Size;
        local_98.vfunction4 = pvVar14;
        memcpy(p_Var13,_Src,(size_t)_Size);
        _Size[(longlong)&p_Var13->vfunction1] = (vfunction3)0x0;
        piVar7 = _errno();
        p_Var13 = (_Func_impl_no_alloc<_private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64_::_1_::<lambda_2>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>_vftable
                   *)local_98.vfunction1;
      }
    }
    *piVar7 = 0;
    uVar6 = strtoul((char *)p_Var13,(char **)(local_120 + 0x78),10);
    if (p_Var13 == local_a8) {
      std::_Xinvalid_argument("invalid stoul argument");
    }
    else if (*piVar7 != 0x22) {
      if (*puVar2 != uVar6) {
        *puVar2 = uVar6;
        puVar2[1] = 0;
        lVar12 = *(longlong *)(puVar2 + 2);
        lVar4 = *(longlong *)(puVar2 + 4);
        if (lVar12 != lVar4) {
          do {
            FUN_140038080(lVar12);
            lVar12 = lVar12 + 0x70;
          } while (lVar12 != lVar4);
          lVar12 = *(longlong *)(puVar2 + 2);
          *(longlong *)(puVar2 + 4) = lVar12;
          uVar6 = *puVar2;
        }
        local_a8 = (_Func_impl_no_alloc<_private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64_::_1_::<lambda_2>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>_vftable
                    *)(ulonglong)uVar6;
        if ((_Func_impl_no_alloc<_private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64_::_1_::<lambda_2>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>_vftable
             *)((*(longlong *)(puVar2 + 6) - lVar12 >> 4) * 0x6db6db6db6db6db7) < local_a8) {
          FUN_1400390a0(puVar2 + 2,local_120 + 0x78);
        }
      }
      if (local_98.vfunction4 < (vfunction4 *)0x10) {
        return;
      }
      pcVar11 = local_98.vfunction4 + 1;
      p_Var13 = (_Func_impl_no_alloc<_private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64_::_1_::<lambda_2>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>_vftable
                 *)local_98.vfunction1;
      if ((code *)0xfff < pcVar11) {
        p_Var13 = (_Func_impl_no_alloc<_private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64_::_1_::<lambda_2>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>_vftable
                   *)((_Func_impl_no_alloc<_private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64_::_1_::<lambda_2>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>_vftable
                       *)((longlong)local_98.vfunction1 + -0x30))->vfunction6;
        if (0x1f < (ulonglong)((longlong)local_98.vfunction1 + (-8 - (longlong)p_Var13))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        pcVar11 = local_98.vfunction4 + 0x28;
      }
      thunk_FUN_140b68ba8(p_Var13,pcVar11);
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("stoul argument out of range");
  case 3:
    lVar12 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0xd8);
    if (lVar12 == 0) {
      return;
    }
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64'::`1'::<lambda_2>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>
                        */
    local_98.vfunction1 =
         (vfunction1 *)
         &std::
          _Func_impl_no_alloc<`private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64'::`1'::<lambda_2>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>
          ::vftable;
    local_60 = &local_98;
    local_98.vfunction1 = this;
    FUN_140030580(lVar12);
    break;
  case 4:
    FUN_140b54c70(this,0,0);
    *param_4 = *(undefined8 *)(param_3 + 0x28);
    *(undefined8 *)(param_3 + 0x28) = 0;
  default:
    goto switchD_140b5705d_default;
  }
  if (local_60 !=
      (_Func_impl_no_alloc<_private:_void___cdecl_quill::v11::detail::BackendWorker::_process_transit_event(quill::v11::detail::ThreadContext_const&___ptr64,quill::v11::detail::TransitEvent&___ptr64,std::atomic<bool>*___ptr64&___ptr64)___ptr64_::_1_::<lambda_2>,void,quill::v11::detail::TransitEvent_const&___ptr64,std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>_vftable
       *)0x0) {
    (**(code **)(local_60->vfunction1 + 0x20))(local_60,local_60 != &local_98);
  }
switchD_140b5705d_default:
  return;
}


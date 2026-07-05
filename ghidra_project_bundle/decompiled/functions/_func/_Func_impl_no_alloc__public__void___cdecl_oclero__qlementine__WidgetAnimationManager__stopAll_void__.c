/**
 * Function: _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::WidgetAnimationManager::stopAll(void)___ptr64'::`1'::<lambda_1>,void,QWidget_const*___ptr64,oclero::qlementine::WidgetAnimator*___ptr64>_Constructor_or_Destructor
 * Address:  140249ae0
 * Signature: void __fastcall _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::WidgetAnimationManager::stopAll(void)___ptr64'::`1'::<lambda_1>,void,QWidget_const*___ptr64,oclero::qlementine::WidgetAnimator*___ptr64>_Constructor_or_Destructor(char * param_1, char param_2)
 * Body size: 177 bytes
 */


void std::
     _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::WidgetAnimationManager::stopAll(void)___ptr64'::`1'::<lambda_1>,void,QWidget_const*___ptr64,oclero::qlementine::WidgetAnimator*___ptr64>
     ::
     _Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::WidgetAnimationManager::stopAll(void)___ptr64_::_1_::<lambda_1>,void,QWidget_const*___ptr64,oclero::qlementine::WidgetAnimator*___ptr64>_Constructor_or_Destructor
               (char *param_1,char param_2)

{
  longlong *plVar1;
  _Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::WidgetAnimationManager::stopAll(void)___ptr64_::_1_::<lambda_1>,void,QWidget_const*___ptr64,oclero::qlementine::WidgetAnimator*___ptr64>_vftable
  *p_Var2;
  longlong *plVar3;
  _Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::WidgetAnimationManager::stopAll(void)___ptr64_::_1_::<lambda_1>,void,QWidget_const*___ptr64,oclero::qlementine::WidgetAnimator*___ptr64>_vftable
  *local_88;
  char *local_80;
  _Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::WidgetAnimationManager::stopAll(void)___ptr64_::_1_::<lambda_1>,void,QWidget_const*___ptr64,oclero::qlementine::WidgetAnimator*___ptr64>_vftable
  **local_50;
  longlong local_48;
  longlong local_40 [2];
  
  local_40[1] = 0xfffffffffffffffe;
  *param_1 = param_2;
  if (param_2 == '\0') {
    p_Var2 = &vftable;
    local_88 = &vftable;
    local_80 = param_1;
    local_50 = &local_88;
    plVar1 = *(longlong **)(param_1 + 0x28);
    plVar3 = (longlong *)*plVar1;
    if (plVar3 != plVar1) {
      do {
        local_48 = plVar3[3];
        local_40[0] = plVar3[2];
        if (local_50 ==
            (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::WidgetAnimationManager::stopAll(void)___ptr64_::_1_::<lambda_1>,void,QWidget_const*___ptr64,oclero::qlementine::WidgetAnimator*___ptr64>_vftable
             **)0x0) {
                    /* WARNING: Subroutine does not return */
          std::_Xbad_function_call();
        }
        (*(*local_50)->vfunction3)(local_50,local_40);
        plVar3 = (longlong *)*plVar3;
      } while (plVar3 != plVar1);
      if (local_50 ==
          (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::WidgetAnimationManager::stopAll(void)___ptr64_::_1_::<lambda_1>,void,QWidget_const*___ptr64,oclero::qlementine::WidgetAnimator*___ptr64>_vftable
           **)0x0) {
        return;
      }
      p_Var2 = *local_50;
    }
    (*p_Var2->vfunction5)(local_50,local_50 != &local_88);
  }
  return;
}


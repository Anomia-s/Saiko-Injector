/**
 * Function: failed_to_cast_logger_invalid_logger_type
 * Address:  140041b80
 * Signature: undefined failed_to_cast_logger_invalid_logger_type(void)
 * Body size: 498 bytes
 */


longlong failed_to_cast_logger_invalid_logger_type
                   (undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
                   undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 in_stack_ffffffffffffff58;
  undefined1 local_90 [56];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x140) < DAT_14151ecd8) && (FUN_140b6864c(&DAT_14151ecd8), DAT_14151ecd8 == -1)) {
    FUN_14003acd0(&DAT_14151ecb0);
    atexit(FUN_14003ae10);
    _Init_thread_footer(&DAT_14151ecd8);
  }
  local_48 = param_2[2];
  param_2[2] = 0;
  local_58 = (undefined4)*param_2;
  uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_50 = (undefined4)param_2[1];
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  *param_2 = 0;
  param_2[1] = 0;
  uVar8 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff58 >> 8),param_4);
  local_40 = param_2;
  uVar6 = loglevel_backtrace_is_only_used_internally_pl
                    (&DAT_14151ecb0,param_1,&local_58,param_3,uVar8,param_5);
  lVar7 = __RTDynamicCast(uVar6,0,&quill::v11::detail::LoggerBase::RTTI_Type_Descriptor,
                          &quill::v11::LoggerImpl<quill::v11::FrontendOptions>::RTTI_Type_Descriptor
                          ,uVar8 & 0xffffffff00000000);
  plVar5 = local_40;
  if (lVar7 != 0) {
    lVar9 = *local_40;
    if (lVar9 != 0) {
      lVar3 = local_40[1];
      if (lVar9 == lVar3) {
        uVar8 = local_40[2] - lVar9;
      }
      else {
        do {
          plVar4 = *(longlong **)(lVar9 + 8);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar4)();
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 8))();
              }
            }
          }
          lVar9 = lVar9 + 0x10;
        } while (lVar9 != lVar3);
        lVar9 = *plVar5;
        uVar8 = plVar5[2] - lVar9;
      }
      if (0xfff < uVar8) {
        if (0x1f < (ulonglong)((lVar9 + -8) - *(longlong *)(lVar9 + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar8 = uVar8 + 0x27;
        lVar9 = *(longlong *)(lVar9 + -8);
      }
      thunk_FUN_140b68ba8(lVar9,uVar8);
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = 0;
    }
    return lVar7;
  }
  quill::v11::QuillError::QuillError
            ((QuillError *)local_90,"Failed to cast logger. Invalid logger type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_90,(ThrowInfo *)&DAT_14140fa50);
}


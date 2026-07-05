/**
 * Function: loglevel_backtrace_is_only_used_internally_pl
 * Address:  140041dd0
 * Signature: undefined loglevel_backtrace_is_only_used_internally_pl(void)
 * Body size: 773 bytes
 */


longlong loglevel_backtrace_is_only_used_internally_pl
                   (ulonglong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
                   undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *_Src;
  undefined8 local_150 [14];
  undefined1 local_e0 [80];
  LoggerImpl<quill::v11::FrontendOptions> *local_90;
  void *local_88;
  undefined8 uStack_80;
  void *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  LoggerImpl<quill::v11::FrontendOptions> *local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  do {
    do {
    } while (*(char *)(param_1 + 0x20) == '\x01');
    LOCK();
    cVar3 = *(char *)(param_1 + 0x20);
    *(char *)(param_1 + 0x20) = '\x01';
    UNLOCK();
  } while (cVar3 == '\x01');
  lVar7 = FUN_1400422a0(param_1,param_2);
  if (lVar7 == 0) {
    local_60 = param_1;
    local_50 = param_3;
    local_58 = (LoggerImpl<quill::v11::FrontendOptions> *)FUN_140b65d30(0xe8);
    local_78 = (void *)0x0;
    uStack_70 = 0;
    local_88 = (void *)0x0;
    uStack_80 = 0;
    pvVar6 = (void *)param_2[2];
    _Src = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      _Src = (undefined8 *)*param_2;
    }
    if ((longlong)pvVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      string_too_long();
    }
    if (pvVar6 < (void *)0x10) {
      uStack_70 = 0xf;
      local_88 = (void *)*_Src;
      uStack_80 = _Src[1];
      local_78 = pvVar6;
    }
    else {
      uVar8 = (ulonglong)pvVar6 | 0xf;
      uVar9 = 0x16;
      if (0x16 < uVar8) {
        uVar9 = uVar8;
      }
      if (uVar8 < 0xfff) {
        local_88 = (void *)FUN_140b65d30(uVar9 + 1);
      }
      else {
        lVar7 = FUN_140b65d30(uVar9 + 0x28);
        local_88 = (void *)(lVar7 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)local_88 - 8) = lVar7;
      }
      local_78 = pvVar6;
      uStack_70 = uVar9;
      memcpy(local_88,_Src,(longlong)pvVar6 + 1);
    }
    local_e0._72_8_ = local_50[2];
    local_50[2] = 0;
    local_e0._56_4_ = (undefined4)*local_50;
    local_e0._60_4_ = *(undefined4 *)((longlong)local_50 + 4);
    local_e0._64_4_ = (undefined4)local_50[1];
    local_e0._68_4_ = *(undefined4 *)((longlong)local_50 + 0xc);
    *local_50 = 0;
    local_50[1] = 0;
    FUN_1400311e0(local_150,param_4);
    quill::v11::LoggerImpl<quill::v11::FrontendOptions>::LoggerImpl<quill::v11::FrontendOptions>
              (local_58,(longlong *)&local_88,(longlong *)(local_e0 + 0x38),local_150,param_5,
               param_6);
    local_90 = local_58;
    FUN_140042650(local_60,&local_90);
    param_1 = local_60;
    lVar7 = FUN_1400422a0(local_60,param_2);
    param_3 = local_50;
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else if (*(char **)(param_1 + 0x18) != (char *)0x0) {
      cVar3 = **(char **)(param_1 + 0x18);
      if (cVar3 == '\t') {
        quill::v11::QuillError::QuillError
                  ((QuillError *)local_e0,
                   "LogLevel::Backtrace is only used internally. Please don\'t use it.");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_e0,(ThrowInfo *)&DAT_14140fa50);
      }
      *(char *)(lVar7 + 0x39) = cVar3;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  lVar10 = *param_3;
  if (lVar10 != 0) {
    lVar4 = param_3[1];
    if (lVar10 == lVar4) {
      uVar9 = param_3[2] - lVar10;
    }
    else {
      do {
        plVar5 = *(longlong **)(lVar10 + 8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar5)();
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
        }
        lVar10 = lVar10 + 0x10;
      } while (lVar10 != lVar4);
      lVar10 = *param_3;
      uVar9 = param_3[2] - lVar10;
    }
    if (0xfff < uVar9) {
      if (0x1f < (ulonglong)((lVar10 + -8) - *(longlong *)(lVar10 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar9 = uVar9 + 0x27;
      lVar10 = *(longlong *)(lVar10 + -8);
    }
    thunk_FUN_140b68ba8(lVar10,uVar9);
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
  }
  return lVar7;
}


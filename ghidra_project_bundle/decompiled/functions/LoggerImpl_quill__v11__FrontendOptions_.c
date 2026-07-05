/**
 * Function: LoggerImpl<quill::v11::FrontendOptions>
 * Address:  1400423d0
 * Signature: LoggerImpl<quill::v11::FrontendOptions> * __thiscall LoggerImpl<quill::v11::FrontendOptions>(LoggerImpl<quill::v11::FrontendOptions> * this, longlong * param_1, longlong * param_2, undefined8 * param_3, undefined1 param_4, undefined8 param_5)
 * Body size: 618 bytes
 */


LoggerImpl<quill::v11::FrontendOptions> * __thiscall
quill::v11::LoggerImpl<quill::v11::FrontendOptions>::LoggerImpl<quill::v11::FrontendOptions>
          (LoggerImpl<quill::v11::FrontendOptions> *this,longlong *param_1,longlong *param_2,
          undefined8 *param_3,undefined1 param_4,undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  
  local_a8 = *param_3;
  uStack_a0 = param_3[1];
  local_98 = param_3[2];
  uStack_90 = param_3[3];
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  local_88 = param_3[4];
  uStack_80 = param_3[5];
  local_78 = param_3[6];
  uStack_70 = param_3[7];
  param_3[6] = 0;
  param_3[7] = 0xf;
  *(undefined1 *)(param_3 + 4) = 0;
  local_68 = param_3[8];
  uStack_60 = param_3[9];
  local_58 = param_3[10];
  uStack_50 = param_3[0xb];
  param_3[10] = 0;
  param_3[0xb] = 0xf;
  *(undefined1 *)(param_3 + 8) = 0;
  local_40 = *(undefined4 *)(param_3 + 0xd);
  local_48 = param_3[0xc];
  local_d8 = param_2[2];
  param_2[2] = 0;
  local_e8 = *param_2;
  lStack_e0 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  local_c8 = *param_1;
  lStack_c0 = param_1[1];
  local_b8 = param_1[2];
  lStack_b0 = param_1[3];
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  detail::LoggerBase::LoggerBase((LoggerBase *)this,&local_c8,&local_e8,&local_a8,param_4,param_5);
  this->vftablePtr = &vftable;
  if ((this->LoggerBase_data).offset_0x20 != 0) {
    (this->LoggerBase_data).offset_0x30 = 2;
  }
  uVar6 = param_1[3];
  if (0xf < uVar6) {
    lVar7 = *param_1;
    uVar4 = uVar6 + 1;
    lVar5 = lVar7;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar7 + -8);
      if (0x1f < (ulonglong)((lVar7 + -8) - lVar5)) goto LAB_140042630;
      uVar4 = uVar6 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar5,uVar4);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  lVar7 = *param_2;
  if (lVar7 != 0) {
    lVar5 = param_2[1];
    if (lVar7 == lVar5) {
      uVar6 = param_2[2] - lVar7;
    }
    else {
      do {
        plVar3 = *(longlong **)(lVar7 + 8);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar3)();
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 8))();
            }
          }
        }
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != lVar5);
      lVar7 = *param_2;
      uVar6 = param_2[2] - lVar7;
    }
    if (0xfff < uVar6) {
      if (0x1f < (ulonglong)((lVar7 + -8) - *(longlong *)(lVar7 + -8))) {
LAB_140042630:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = uVar6 + 0x27;
      lVar7 = *(longlong *)(lVar7 + -8);
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  FUN_14000f270(param_3);
  return this;
}


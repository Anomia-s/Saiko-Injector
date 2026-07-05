/**
 * Function: LoggerBase_Constructor_or_Destructor
 * Address:  140042c40
 * Signature: void __fastcall LoggerBase_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 409 bytes
 */


void quill::v11::detail::LoggerBase::LoggerBase_Constructor_or_Destructor(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  *param_1 = &vftable;
  plVar3 = (longlong *)param_1[0x1c];
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
  plVar3 = (longlong *)param_1[0x1a];
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
  lVar7 = param_1[0x16];
  if (lVar7 != 0) {
    lVar5 = param_1[0x17];
    if (lVar7 == lVar5) {
      uVar6 = param_1[0x18] - lVar7;
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
      lVar7 = param_1[0x16];
      uVar6 = param_1[0x18] - lVar7;
    }
    if (0xfff < uVar6) {
      if (0x1f < (ulonglong)((lVar7 + -8) - *(longlong *)(lVar7 + -8))) goto LAB_140042dce;
      uVar6 = uVar6 + 0x27;
      lVar7 = *(longlong *)(lVar7 + -8);
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  FUN_14000f270(param_1 + 8);
  uVar6 = param_1[4];
  if (0xf < uVar6) {
    lVar7 = param_1[1];
    uVar4 = uVar6 + 1;
    lVar5 = lVar7;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar7 + -8);
      if (0x1f < (ulonglong)((lVar7 + -8) - lVar5)) {
LAB_140042dce:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = uVar6 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar5,uVar4);
  }
  param_1[3] = 0;
  param_1[4] = 0xf;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


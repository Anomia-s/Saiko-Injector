// FUN_14003f540 @ 14003f540

void FUN_14003f540(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)*param_1;
  if (plVar8 != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[1];
    if (plVar8 == plVar2) {
      uVar7 = param_1[2] - (longlong)plVar8;
    }
    else {
      do {
        plVar3 = (longlong *)plVar8[5];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 8))();
          }
        }
        uVar7 = plVar8[3];
        if (0xf < uVar7) {
          lVar4 = *plVar8;
          uVar5 = uVar7 + 1;
          lVar6 = lVar4;
          if (0xfff < uVar5) {
            lVar6 = *(longlong *)(lVar4 + -8);
            if (0x1f < (ulonglong)((lVar4 + -8) - lVar6)) goto LAB_14003f660;
            uVar5 = uVar7 + 0x28;
          }
          thunk_FUN_140b68ba8(lVar6,uVar5);
        }
        plVar8[2] = 0;
        plVar8[3] = 0xf;
        *(undefined1 *)plVar8 = 0;
        plVar8 = plVar8 + 6;
      } while (plVar8 != plVar2);
      plVar8 = (longlong *)*param_1;
      uVar7 = param_1[2] - (longlong)plVar8;
    }
    if (0xfff < uVar7) {
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)plVar8 + (-8 - plVar8[-1]))) {
LAB_14003f660:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar7 = uVar7 + 0x27;
      plVar8 = (longlong *)plVar8[-1];
    }
    thunk_FUN_140b68ba8(plVar8,uVar7);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x30 + param_2;
  param_1[2] = param_4 * 0x30 + param_2;
  return;
}



/**
 * Function: AccelStruct_Constructor_or_Destructor
 * Address:  1407351f0
 * Signature: void __fastcall AccelStruct_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 481 bytes
 */


void nvrhi::d3d12::AccelStruct::AccelStruct_Constructor_or_Destructor(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  *param_1 = &vftable;
  uVar6 = param_1[0x11];
  if (0xf < uVar6) {
    lVar1 = param_1[0xe];
    uVar4 = uVar6 + 1;
    lVar5 = lVar1;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar5)) goto LAB_1407353c4;
      uVar4 = uVar6 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar5,uVar4);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0xf;
  *(undefined1 *)(param_1 + 0xe) = 0;
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    uVar6 = param_1[0xc] - lVar1;
    lVar5 = lVar1;
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar5)) goto LAB_1407353c4;
      uVar6 = uVar6 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar5,uVar6);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    uVar6 = param_1[8] - lVar1;
    lVar5 = lVar1;
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar5)) goto LAB_1407353c4;
      uVar6 = uVar6 | 0x27;
    }
    thunk_FUN_140b68ba8(lVar5,uVar6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  plVar7 = (longlong *)param_1[3];
  if (plVar7 != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[4];
    if (plVar7 == plVar2) {
      uVar6 = param_1[5] - (longlong)plVar7;
    }
    else {
      do {
        plVar3 = (longlong *)*plVar7;
        if (plVar3 != (longlong *)0x0) {
          *plVar7 = 0;
          (**(code **)(*plVar3 + 0x10))();
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar2);
      plVar7 = (longlong *)param_1[3];
      uVar6 = param_1[5] - (longlong)plVar7;
    }
    if (0xfff < uVar6) {
      if (0x1f < (ulonglong)((longlong)plVar7 + (-8 - plVar7[-1]))) {
LAB_1407353c4:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = uVar6 + 0x27;
      plVar7 = (longlong *)plVar7[-1];
    }
    thunk_FUN_140b68ba8(plVar7,uVar6);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  plVar7 = (longlong *)param_1[2];
  if (plVar7 != (longlong *)0x0) {
    param_1[2] = 0;
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}


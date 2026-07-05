/**
 * Function: BindingSet_Constructor_or_Destructor
 * Address:  1407457c0
 * Signature: void __fastcall BindingSet_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 469 bytes
 */


void nvrhi::d3d12::BindingSet::BindingSet_Constructor_or_Destructor(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  *param_1 = &vftable;
  StaticDescriptorHeap::vfunction4
            ((StaticDescriptorHeap *)(param_1[0x1e] + 0x180),*(uint *)(param_1 + 7),
             *(uint *)(param_1[2] + 0x58));
  StaticDescriptorHeap::vfunction4
            ((StaticDescriptorHeap *)(param_1[0x1e] + 0x240),*(uint *)((longlong)param_1 + 0x3c),
             *(uint *)(param_1[2] + 0x5c));
  lVar1 = param_1[0x1a];
  if (lVar1 != 0) {
    uVar5 = param_1[0x1c] - lVar1;
    lVar4 = lVar1;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar4)) goto LAB_140745983;
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar4,uVar5);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
  }
  plVar6 = (longlong *)param_1[0x17];
  if (plVar6 != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[0x18];
    if (plVar6 == plVar2) {
      uVar5 = param_1[0x19] - (longlong)plVar6;
    }
    else {
      do {
        plVar3 = (longlong *)*plVar6;
        if (plVar3 != (longlong *)0x0) {
          *plVar6 = 0;
          (**(code **)(*plVar3 + 0x10))();
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar2);
      plVar6 = (longlong *)param_1[0x17];
      uVar5 = param_1[0x19] - (longlong)plVar6;
    }
    if (0xfff < uVar5) {
      if (0x1f < (ulonglong)((longlong)plVar6 + (-8 - plVar6[-1]))) goto LAB_140745983;
      uVar5 = uVar5 + 0x27;
      plVar6 = (longlong *)plVar6[-1];
    }
    thunk_FUN_140b68ba8(plVar6,uVar5);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    uVar5 = param_1[5] - lVar1;
    lVar4 = lVar1;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar4)) {
LAB_140745983:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar4,uVar5);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  plVar6 = (longlong *)param_1[2];
  if (plVar6 != (longlong *)0x0) {
    param_1[2] = 0;
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}


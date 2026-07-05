/**
 * Function: CommandList_Constructor_or_Destructor
 * Address:  1406f3320
 * Signature: void __fastcall CommandList_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 773 bytes
 */


void nvrhi::vulkan::CommandList::CommandList_Constructor_or_Destructor(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  
  *param_1 = &vftable;
  lVar3 = param_1[0x148];
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(lVar3 + 0x40);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
    puVar8 = *(undefined8 **)(lVar3 + 0x28);
    *(undefined8 *)puVar8[1] = 0;
    puVar8 = (undefined8 *)*puVar8;
    while (puVar8 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)*puVar8;
      plVar4 = (longlong *)puVar8[3];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
        }
      }
      thunk_FUN_140b68ba8(puVar8,0x20);
      puVar8 = puVar5;
    }
    thunk_FUN_140b68ba8(*(undefined8 *)(lVar3 + 0x28),0x20);
    thunk_FUN_140b68ba8(lVar3,0x48);
  }
  lVar3 = param_1[0x147];
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(lVar3 + 0x40);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
    puVar8 = *(undefined8 **)(lVar3 + 0x28);
    *(undefined8 *)puVar8[1] = 0;
    puVar8 = (undefined8 *)*puVar8;
    while (puVar8 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)*puVar8;
      plVar4 = (longlong *)puVar8[3];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
        }
      }
      thunk_FUN_140b68ba8(puVar8,0x20);
      puVar8 = puVar5;
    }
    thunk_FUN_140b68ba8(*(undefined8 *)(lVar3 + 0x28),0x20);
    thunk_FUN_140b68ba8(lVar3,0x48);
  }
  lVar3 = param_1[0x142];
  if (lVar3 != 0) {
    uVar7 = param_1[0x144] - lVar3;
    lVar6 = lVar3;
    if (0xfff < uVar7) {
      lVar6 = *(longlong *)(lVar3 + -8);
      if (0x1f < (ulonglong)((lVar3 + -8) - lVar6)) goto LAB_1406f362d;
      uVar7 = uVar7 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar6,uVar7);
    param_1[0x142] = 0;
    param_1[0x143] = 0;
    param_1[0x144] = 0;
  }
  puVar8 = (undefined8 *)param_1[0x140];
  *(undefined8 *)puVar8[1] = 0;
  puVar8 = (undefined8 *)*puVar8;
  while (puVar8 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar8;
    thunk_FUN_140b68ba8(puVar8,0x28);
    puVar8 = puVar5;
  }
  thunk_FUN_140b68ba8(param_1[0x140],0x28);
  lVar3 = param_1[0x13a];
  if (lVar3 != 0) {
    uVar7 = param_1[0x13c] - lVar3;
    lVar6 = lVar3;
    if (0xfff < uVar7) {
      lVar6 = *(longlong *)(lVar3 + -8);
      if (0x1f < (ulonglong)((lVar3 + -8) - lVar6)) {
LAB_1406f362d:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar7 = uVar7 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar6,uVar7);
    param_1[0x13a] = 0;
    param_1[0x13b] = 0;
    param_1[0x13c] = 0;
  }
  puVar8 = (undefined8 *)param_1[0x138];
  *(undefined8 *)puVar8[1] = 0;
  puVar8 = (undefined8 *)*puVar8;
  while (puVar8 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar8;
    if (puVar8[3] != 0) {
      thunk_FUN_140b68ba8(puVar8[3],0x68);
    }
    thunk_FUN_140b68ba8(puVar8,0x20);
    puVar8 = puVar5;
  }
  thunk_FUN_140b68ba8(param_1[0x138],0x20);
  plVar4 = (longlong *)param_1[0x28];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  FUN_1406f3090(param_1 + 9);
  return;
}


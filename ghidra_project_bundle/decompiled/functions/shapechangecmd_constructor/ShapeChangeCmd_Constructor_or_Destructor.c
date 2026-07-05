/**
 * Function: ShapeChangeCmd_Constructor_or_Destructor
 * Address:  1402633c0
 * Signature: void __fastcall ShapeChangeCmd_Constructor_or_Destructor(int param_1, longlong param_2, undefined8 param_3, longlong param_4)
 * Body size: 205 bytes
 */


void ldv::editor::_anon_41263C45::_anon_41263C45::ShapeChangeCmd::
     ShapeChangeCmd_Constructor_or_Destructor
               (int param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 *local_30;
  
  if (param_1 == 1) {
    iVar3 = **(int **)(param_4 + 8);
    cVar8 = FUN_1400b8670(**(undefined8 **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
    if ((cVar8 != '\0') && (iVar4 = **(int **)(param_2 + 0x20), iVar3 != iVar4)) {
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      uVar7 = *(undefined8 *)(param_2 + 0x18);
      local_30 = (undefined8 *)FUN_140b65d30(0x18);
      *local_30 = &vftable;
      local_30[1] = uVar7;
      *(int *)(local_30 + 2) = iVar4;
      *(int *)((longlong)local_30 + 0x14) = iVar3;
      FUN_140099d10(uVar6,&local_30);
      **(int **)(param_2 + 0x20) = iVar3;
    }
  }
  else if ((param_1 == 0) && (param_2 != 0)) {
    plVar5 = *(longlong **)(param_2 + 0x28);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    thunk_FUN_140b68ba8(param_2,0x30);
    return;
  }
  return;
}


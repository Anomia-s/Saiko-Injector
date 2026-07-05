/**
 * Function: list_too_long
 * Address:  1407cd7d0
 * Signature: undefined list_too_long(void)
 * Body size: 224 bytes
 */


void list_too_long(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    if (*(longlong *)(param_1 + 0x38) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list too long");
    }
    lVar3 = *(longlong *)(param_1 + 0x30);
    plVar5 = (longlong *)FUN_140b65d30(0x20);
    plVar5[2] = 0;
    plVar5[3] = 0;
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar6 = 0;
    }
    else {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x48) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    plVar5[2] = *(longlong *)(param_1 + 0x40);
    plVar5[3] = lVar6;
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
    puVar4 = *(undefined8 **)(lVar3 + 8);
    *plVar5 = lVar3;
    plVar5[1] = (longlong)puVar4;
    *(longlong **)(lVar3 + 8) = plVar5;
    *puVar4 = plVar5;
    plVar5 = *(longlong **)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x30);
  for (puVar7 = (undefined8 *)*puVar4; puVar7 != puVar4; puVar7 = (undefined8 *)*puVar7) {
    if (*(longlong *)(puVar7[2] + 8) == param_2) {
      *(undefined8 *)(puVar7[2] + 8) = param_3;
    }
  }
  return;
}


/**
 * Function: ConvexShape_Constructor_or_Destructor
 * Address:  140311200
 * Signature: void __fastcall ConvexShape_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 344 bytes
 */


void JPH::ConvexShape::ConvexShape_Constructor_or_Destructor(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  piVar1 = (int *)param_1[0x22];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      plVar2 = *(longlong **)(piVar1 + 6);
      if (plVar2 != (longlong *)0x0) {
        if (*(longlong *)(piVar1 + 2) != 0) {
          plVar3 = plVar2 + *(longlong *)(piVar1 + 2) * 2;
          do {
            if ((longlong *)*plVar2 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar2 + 0x10))();
            }
            plVar2 = plVar2 + 2;
          } while (plVar2 < plVar3);
          plVar2 = *(longlong **)(piVar1 + 6);
        }
        piVar1[2] = 0;
        piVar1[3] = 0;
        (*DAT_14151f538)(plVar2);
        auVar4._0_12_ = ZEXT812(0);
        auVar4._12_4_ = 0;
        *(undefined1 (*) [16])(piVar1 + 4) = auVar4;
      }
      (*DAT_14151f538)(piVar1);
    }
  }
  if (param_1[0x1f] != 0) {
    param_1[0x1d] = 0;
    (*DAT_14151f538)();
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x1e) = auVar5;
  }
  if (param_1[0x1c] != 0) {
    param_1[0x1a] = 0;
    (*DAT_14151f538)();
    auVar6._0_12_ = ZEXT812(0);
    auVar6._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x1b) = auVar6;
  }
  if (param_1[0x19] != 0) {
    param_1[0x17] = 0;
    (*DAT_14151f538)();
    auVar7._0_12_ = ZEXT812(0);
    auVar7._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x18) = auVar7;
  }
  if (param_1[0x16] != 0) {
    param_1[0x14] = 0;
    (*DAT_14151f538)();
    auVar8._0_12_ = ZEXT812(0);
    auVar8._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x15) = auVar8;
  }
  *param_1 = &vftable;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140311352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2,1);
      return;
    }
  }
  return;
}


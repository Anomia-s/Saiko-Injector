/**
 * Function: _Ref_count_obj2<quill::v11::detail::TransitEventBuffer>_Constructor_or_Destructor
 * Address:  140029080
 * Signature: void __fastcall _Ref_count_obj2<quill::v11::detail::TransitEventBuffer>_Constructor_or_Destructor(undefined8 * param_1, longlong param_2)
 * Body size: 310 bytes
 */


void std::_Ref_count_obj2<quill::v11::detail::TransitEventBuffer>::
     _Ref_count_obj2<quill::v11::detail::TransitEventBuffer>_Constructor_or_Destructor
               (undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  do {
    do {
    } while (*(char *)(param_1 + 3) == '\x01');
    LOCK();
    cVar3 = *(char *)(param_1 + 3);
    *(char *)(param_1 + 3) = '\x01';
    UNLOCK();
  } while (cVar3 == '\x01');
  plVar4 = (longlong *)param_1[1];
  local_50 = param_1;
  for (plVar8 = (longlong *)*param_1; plVar8 != plVar4; plVar8 = plVar8 + 2) {
    while( true ) {
      lVar5 = *plVar8;
      local_60 = lVar5;
      if (*(longlong *)(lVar5 + 0x300) == 0) {
        local_58 = (undefined8 *)FUN_140b65d30(0x48);
        local_58[1] = 0x100000001;
        *local_58 = &vftable;
        puVar7 = local_58 + 2;
        FUN_140029300(puVar7,*(undefined4 *)(param_2 + 0x50));
        *(undefined8 **)(lVar5 + 0x300) = puVar7;
        plVar6 = *(longlong **)(lVar5 + 0x308);
        *(undefined8 **)(lVar5 + 0x308) = local_58;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar6 + 8))(plVar6);
            }
          }
        }
      }
      plVar6 = *(longlong **)(param_2 + 0x4a8);
      if (plVar6 != *(longlong **)(param_2 + 0x4b0)) break;
      FUN_140029790(param_2 + 0x4a0,plVar6,&local_60);
      plVar8 = plVar8 + 2;
      if (plVar8 == plVar4) goto LAB_1400290cc;
    }
    *plVar6 = local_60;
    *(longlong *)(param_2 + 0x4a8) = *(longlong *)(param_2 + 0x4a8) + 8;
  }
LAB_1400290cc:
  *(undefined1 *)(local_50 + 3) = 0;
  return;
}


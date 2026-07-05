/**
 * Function: stableid_collision_0xllx_reassigned_from_llu
 * Address:  1403a5a60
 * Signature: undefined stableid_collision_0xllx_reassigned_from_llu(void)
 * Body size: 322 bytes
 */


void stableid_collision_0xllx_reassigned_from_llu(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  plVar6 = (longlong *)FUN_1400ba4f0(*param_1,DAT_1416dfb40,DAT_1416dfb40);
  if ((plVar6 != (longlong *)0x0) && (lVar2 = *plVar6, lVar2 != 0)) {
    lVar7 = FUN_1400c4580(param_1,8,0);
    if (0 < *(int *)((longlong)param_1 + 0x14)) {
      lVar1 = lVar2 + 0x18;
      lVar9 = 0;
      do {
        lVar3 = *(longlong *)(lVar7 + lVar9 * 8);
        lVar4 = *(longlong *)(param_1[3] + lVar9 * 8);
        plVar6 = (longlong *)FUN_1403b64c0(lVar1,lVar4);
        if (plVar6 == (longlong *)0x0) {
          if (lVar3 != 0) goto LAB_1403a5b45;
        }
        else {
          if (*plVar6 != lVar3) {
            FUN_1403b67c0(lVar2);
          }
          if (lVar3 == 0) {
            FUN_1403b67c0(lVar1,lVar4);
          }
          else {
LAB_1403a5b45:
            plVar6 = (longlong *)FUN_1403b64c0(lVar2,lVar3);
            if ((plVar6 != (longlong *)0x0) && (lVar5 = *plVar6, lVar5 != lVar4)) {
              uVar8 = __acrt_iob_func(2);
              FUN_14002b100(uVar8,"[StableId] collision: 0x%llx reassigned from %llu to %llu\n",
                            lVar3,lVar5,lVar4);
              FUN_1403b67c0(lVar1,*plVar6);
            }
            FUN_1403b6560(lVar2,lVar3,lVar4);
            FUN_1403b6560(lVar1,lVar4,lVar3);
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)((longlong)param_1 + 0x14));
    }
  }
  return;
}


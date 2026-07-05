/**
 * Function: vececs_query_cache_match_t
 * Address:  1403a3900
 * Signature: undefined vececs_query_cache_match_t(void)
 * Body size: 619 bytes
 */


longlong * vececs_query_cache_match_t(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  char *pcVar12;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)FUN_1403b6510(param_1 + 5);
    if (plVar2 != (longlong *)0x0) {
      return plVar2;
    }
    plVar2 = (longlong *)FUN_1403b6630(param_1 + 5,0x30,param_2);
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = 0;
    plVar2[3] = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    lVar6 = *(longlong *)(*param_1 + 0x80);
    cVar1 = FUN_1403955b0(param_1);
    if (cVar1 == '\0') {
      pcVar12 = "vec<ecs_query_cache_match_t>";
      uVar11 = 0x58;
    }
    else {
      pcVar12 = "vec<ecs_query_triv_cache_match_t>";
      uVar11 = 0x18;
    }
    FUN_1403b2710(lVar6 + 0xcc0,plVar2,uVar11,0,pcVar12);
    plVar2[2] = param_2;
    if ((longlong)*(int *)((longlong)param_1 + 0xdc) == 0) {
      lVar6 = param_1[0xe];
      if (*(ulonglong *)(lVar6 + 0x10) <= param_2) {
        bVar8 = false;
        goto LAB_1403a3a90;
      }
    }
    else {
      lVar6 = param_1[0xe];
      bVar8 = (bool)((*(byte *)(*(longlong *)(*param_1 + 0x10) + -0x39 +
                               (longlong)*(int *)((longlong)param_1 + 0xdc) * 0x48) & 8) >> 3);
      if (param_2 < *(ulonglong *)(lVar6 + 0x10) == bVar8) {
LAB_1403a3a90:
        do {
          lVar4 = lVar6;
          lVar6 = *(longlong *)(lVar4 + 0x28);
          if (lVar6 == 0) {
            *(longlong **)(lVar4 + 0x28) = plVar2;
            pcVar5 = (code *)param_1[0x17];
            if (pcVar5 == (code *)0x0) {
              return plVar2;
            }
            goto LAB_1403a3adc;
          }
        } while (bVar8 == param_2 < *(ulonglong *)(lVar6 + 0x10));
        *(longlong **)(lVar4 + 0x28) = plVar2;
        goto LAB_1403a3aad;
      }
    }
    param_1[0xe] = (longlong)plVar2;
LAB_1403a3aad:
    plVar2[5] = lVar6;
    pcVar5 = (code *)param_1[0x17];
    if (pcVar5 != (code *)0x0) {
LAB_1403a3adc:
      lVar6 = (*pcVar5)(*(undefined8 *)(*param_1 + 0x88),param_2,param_1[0x19]);
      plVar2[4] = lVar6;
    }
    return plVar2;
  }
  plVar2 = param_1 + 8;
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    return plVar2;
  }
  if (0x3ffffff < *(uint *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)FUN_1403b6670(param_1 + 5,0);
    *plVar3 = (longlong)plVar2;
  }
  plVar3 = param_1 + 0xe;
  do {
    plVar7 = (longlong *)*plVar3;
    if (plVar7 == plVar2) break;
    plVar3 = plVar7 + 5;
  } while (plVar7 != (longlong *)0x0);
  if (plVar7 != (longlong *)0x0) goto LAB_1403a3b39;
  if ((longlong)*(int *)((longlong)param_1 + 0xdc) == 0) {
    uVar10 = param_1[10];
    plVar3 = (longlong *)param_1[0xe];
    if ((ulonglong)plVar3[2] <= uVar10) {
      bVar8 = false;
      goto LAB_1403a3b10;
    }
LAB_1403a3b06:
    param_1[0xe] = (longlong)plVar2;
    plVar7 = plVar3;
    plVar9 = plVar2;
  }
  else {
    uVar10 = param_1[10];
    bVar8 = (bool)((*(byte *)(*(longlong *)(*param_1 + 0x10) + -0x39 +
                             (longlong)*(int *)((longlong)param_1 + 0xdc) * 0x48) & 8) >> 3);
    plVar3 = (longlong *)param_1[0xe];
    if (uVar10 < (ulonglong)plVar3[2] != bVar8) goto LAB_1403a3b06;
LAB_1403a3b10:
    do {
      plVar9 = plVar3;
      plVar3 = (longlong *)plVar9[5];
      plVar7 = plVar2;
      if (plVar3 == (longlong *)0x0) goto LAB_1403a3b35;
    } while (bVar8 == uVar10 < (ulonglong)plVar3[2]);
    plVar9[5] = (longlong)plVar2;
    plVar7 = plVar3;
    plVar9 = plVar2;
  }
LAB_1403a3b35:
  plVar9[5] = (longlong)plVar7;
LAB_1403a3b39:
  if ((code *)param_1[0x17] == (code *)0x0) {
    return plVar2;
  }
  lVar6 = (*(code *)param_1[0x17])(*(undefined8 *)(*param_1 + 0x88),0,param_1[0x19]);
  param_1[0xc] = lVar6;
  return plVar2;
}


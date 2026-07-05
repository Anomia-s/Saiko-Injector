/**
 * Function: failed_to_map_buffer_pool
 * Address:  1404008c0
 * Signature: undefined failed_to_map_buffer_pool(void)
 * Body size: 479 bytes
 */


longlong * failed_to_map_buffer_pool(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x50);
  FUN_1401552a0(*(undefined8 *)(lVar4 + 0x1e0));
  if (*(int *)(lVar4 + 0x110) == 0) {
    plVar5 = (longlong *)FUN_140160c70(1,0x18);
    if (plVar5 != (longlong *)0x0) {
      lVar6 = could_not_create_buffer(lVar4,0,0x8000,1,0);
      *plVar5 = lVar6;
      if (lVar6 != 0) goto LAB_1404008fb;
    }
    FUN_1401552c0(*(undefined8 *)(lVar4 + 0x1e0));
    plVar5 = (longlong *)0x0;
  }
  else {
    uVar2 = *(int *)(lVar4 + 0x110) - 1;
    plVar5 = *(longlong **)(*(longlong *)(lVar4 + 0x108) + (ulonglong)uVar2 * 8);
    *(uint *)(lVar4 + 0x110) = uVar2;
LAB_1404008fb:
    FUN_1401552c0(*(undefined8 *)(lVar4 + 0x1e0));
    *(undefined4 *)(plVar5 + 2) = 0;
    plVar5[1] = 0;
    plVar1 = *(longlong **)(*plVar5 + 0x10);
    iVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,0,0,*plVar5 + 0x80);
    if (iVar3 < 0) {
      s_error_code_s_0x08lx(lVar4,"Failed to map buffer pool!",iVar3);
      plVar5 = (longlong *)0x0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xf8);
      uVar8 = (ulonglong)uVar2;
      if (uVar8 != 0) {
        uVar7 = 0;
        do {
          if (*(longlong **)(*(longlong *)(param_1 + 0xf0) + uVar7 * 8) == plVar5) {
            return plVar5;
          }
          uVar7 = uVar7 + 1;
        } while (uVar8 != uVar7);
      }
      if (uVar2 == *(uint *)(param_1 + 0xfc)) {
        *(uint *)(param_1 + 0xfc) = uVar2 + 1;
        lVar4 = FUN_140160cc0(*(undefined8 *)(param_1 + 0xf0),(ulonglong)(uVar2 + 1) << 3);
        *(longlong *)(param_1 + 0xf0) = lVar4;
        uVar8 = (ulonglong)*(uint *)(param_1 + 0xf8);
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0xf0);
      }
      *(longlong **)(lVar4 + uVar8 * 8) = plVar5;
      *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
      lVar4 = *plVar5;
      uVar2 = *(uint *)(param_1 + 0x768);
      uVar8 = (ulonglong)uVar2;
      if (uVar8 != 0) {
        uVar7 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x760) + uVar7 * 8) == lVar4) {
            return plVar5;
          }
          uVar7 = uVar7 + 1;
        } while (uVar8 != uVar7);
      }
      if (uVar2 == *(uint *)(param_1 + 0x76c)) {
        *(uint *)(param_1 + 0x76c) = uVar2 + 1;
        lVar6 = FUN_140160cc0(*(undefined8 *)(param_1 + 0x760),(ulonglong)(uVar2 + 1) << 3);
        *(longlong *)(param_1 + 0x760) = lVar6;
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x768);
      }
      else {
        lVar6 = *(longlong *)(param_1 + 0x760);
      }
      *(longlong *)(lVar6 + uVar8 * 8) = lVar4;
      *(int *)(param_1 + 0x768) = *(int *)(param_1 + 0x768) + 1;
      FUN_140106160(lVar4 + 0x88,1);
    }
  }
  return plVar5;
}


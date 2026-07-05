/**
 * Function: window_already_unclaimed
 * Address:  1403fd6d0
 * Signature: undefined window_already_unclaimed(void)
 * Body size: 709 bytes
 */


void window_already_unclaimed(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar2 = video_subsystem_has_not_been_initialized(param_2);
  lVar4 = FUN_14014ff10(uVar2,"SDL_GPUD3D12WindowPropertyData",0);
  if (lVar4 == 0) {
    if (*(char *)(param_1 + 0x78) != '\x01') {
      FUN_1400fbed0(&DAT_141339891,"Window already unclaimed!");
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1400fb950(9,&DAT_141339891,"Window already unclaimed!");
  }
  setting_fence_event_failed(param_1);
  lVar1 = *(longlong *)(lVar4 + 0x118);
  if (lVar1 != 0) {
    iVar3 = FUN_140106160(lVar1 + 0x10);
    if (iVar3 == 1) {
      FUN_1401552a0(*(undefined8 *)(param_1 + 0x1f8));
      uVar6 = *(uint *)(param_1 + 0x130);
      if (uVar6 + 1 < *(uint *)(param_1 + 0x134)) {
        lVar5 = *(longlong *)(param_1 + 0x128);
      }
      else {
        *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) * 2;
        lVar5 = FUN_140160cc0(*(undefined8 *)(param_1 + 0x128));
        *(longlong *)(param_1 + 0x128) = lVar5;
        uVar6 = *(uint *)(param_1 + 0x130);
      }
      *(longlong *)(lVar5 + (ulonglong)uVar6 * 8) = lVar1;
      *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
      FUN_1401552c0(*(undefined8 *)(param_1 + 0x1f8));
    }
    *(undefined8 *)(lVar4 + 0x118) = 0;
  }
  lVar1 = *(longlong *)(lVar4 + 0x120);
  if (lVar1 != 0) {
    iVar3 = FUN_140106160(lVar1 + 0x10);
    if (iVar3 == 1) {
      FUN_1401552a0(*(undefined8 *)(param_1 + 0x1f8));
      uVar6 = *(uint *)(param_1 + 0x130);
      if (uVar6 + 1 < *(uint *)(param_1 + 0x134)) {
        lVar5 = *(longlong *)(param_1 + 0x128);
      }
      else {
        *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) * 2;
        lVar5 = FUN_140160cc0(*(undefined8 *)(param_1 + 0x128));
        *(longlong *)(param_1 + 0x128) = lVar5;
        uVar6 = *(uint *)(param_1 + 0x130);
      }
      *(longlong *)(lVar5 + (ulonglong)uVar6 * 8) = lVar1;
      *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
      FUN_1401552c0(*(undefined8 *)(param_1 + 0x1f8));
    }
    *(undefined8 *)(lVar4 + 0x120) = 0;
  }
  lVar1 = *(longlong *)(lVar4 + 0x128);
  if (lVar1 != 0) {
    iVar3 = FUN_140106160(lVar1 + 0x10);
    if (iVar3 == 1) {
      FUN_1401552a0(*(undefined8 *)(param_1 + 0x1f8));
      uVar6 = *(uint *)(param_1 + 0x130);
      if (uVar6 + 1 < *(uint *)(param_1 + 0x134)) {
        lVar5 = *(longlong *)(param_1 + 0x128);
      }
      else {
        *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) * 2;
        lVar5 = FUN_140160cc0(*(undefined8 *)(param_1 + 0x128));
        *(longlong *)(param_1 + 0x128) = lVar5;
        uVar6 = *(uint *)(param_1 + 0x130);
      }
      *(longlong *)(lVar5 + (ulonglong)uVar6 * 8) = lVar1;
      *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
      FUN_1401552c0(*(undefined8 *)(param_1 + 0x1f8));
    }
    *(undefined8 *)(lVar4 + 0x128) = 0;
  }
  FUN_140402f70(lVar4);
  FUN_1401552a0(*(undefined8 *)(param_1 + 0x1f0));
  uVar6 = *(uint *)(param_1 + 0x120);
  if ((ulonglong)uVar6 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x118);
    uVar7 = 0;
    do {
      if (**(longlong **)(lVar1 + uVar7 * 8) == param_2) {
        *(undefined8 *)(lVar1 + uVar7 * 8) = *(undefined8 *)(lVar1 + (ulonglong)(uVar6 - 1) * 8);
        *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + -1;
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar6 != uVar7);
  }
  FUN_1401552c0(*(undefined8 *)(param_1 + 0x1f0));
  FUN_140160cf0(lVar4);
  uVar2 = video_subsystem_has_not_been_initialized(param_2);
  FUN_14014f840(uVar2,"SDL_GPUD3D12WindowPropertyData");
  FUN_140107f20(FUN_140402c30,param_2);
  return;
}


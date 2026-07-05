/**
 * Function: unable_to_create_effect
 * Address:  140652fb0
 * Signature: undefined unable_to_create_effect(void)
 * Body size: 437 bytes
 */


undefined8 unable_to_create_effect(longlong param_1,longlong param_2,ushort *param_3)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined *puVar7;
  
  uVar1 = *param_3;
  if (uVar1 < 0x80) {
    switch(uVar1) {
    case 1:
      puVar7 = &DAT_140e160a0;
      break;
    case 2:
      puVar7 = &DAT_140e160d0;
      break;
    default:
switchD_140652fe4_caseD_3:
      uVar5 = FUN_1400fbed0("Haptic: Unknown effect type.");
      return uVar5;
    case 4:
      puVar7 = &DAT_140e160c0;
      break;
    case 8:
      puVar7 = &DAT_140e160e0;
      break;
    case 0x10:
      puVar7 = &DAT_140e160f0;
      break;
    case 0x20:
      puVar7 = &DAT_140e16100;
      break;
    case 0x40:
      puVar7 = &DAT_140e160b0;
    }
  }
  else if (uVar1 < 0x200) {
    if (uVar1 == 0x80) {
      puVar7 = &DAT_140e16110;
    }
    else {
      if (uVar1 != 0x100) goto switchD_140652fe4_caseD_3;
      puVar7 = &DAT_140e16120;
    }
  }
  else if (uVar1 == 0x200) {
    puVar7 = &DAT_140e16130;
  }
  else if (uVar1 == 0x400) {
    puVar7 = &DAT_140e16140;
  }
  else {
    if (uVar1 != 0x8000) goto switchD_140652fe4_caseD_3;
    puVar7 = &DAT_140e16150;
  }
  cVar3 = haptic_unknown_effect_type(param_1,*(undefined8 *)(param_2 + 0x48),param_3);
  if (cVar3 != '\0') {
    iVar4 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0x90))
                      ((longlong *)**(undefined8 **)(param_1 + 0x28),puVar7,
                       *(longlong *)(param_2 + 0x48),*(longlong *)(param_2 + 0x48) + 0x50,0);
    if (-1 < iVar4) {
      return 1;
    }
    FUN_1400fbed0("Haptic error %s","Unable to create effect");
  }
  uVar1 = *param_3;
  lVar2 = *(longlong *)(param_2 + 0x48);
  FUN_140160cf0(*(undefined8 *)(lVar2 + 0x30));
  *(undefined8 *)(lVar2 + 0x30) = 0;
  FUN_140160cf0(*(undefined8 *)(lVar2 + 0x20));
  *(undefined8 *)(lVar2 + 0x20) = 0;
  lVar6 = *(longlong *)(lVar2 + 0x40);
  if (lVar6 != 0) {
    if (SBORROW2(0,uVar1)) {
      FUN_140160cf0(*(undefined8 *)(lVar6 + 0x10));
      *(undefined8 *)(lVar6 + 0x10) = 0;
      lVar6 = *(longlong *)(lVar2 + 0x40);
    }
    FUN_140160cf0(lVar6);
    *(undefined8 *)(lVar2 + 0x40) = 0;
  }
  FUN_140160cf0(*(undefined8 *)(lVar2 + 0x28));
  *(undefined8 *)(lVar2 + 0x28) = 0;
  return 0;
}


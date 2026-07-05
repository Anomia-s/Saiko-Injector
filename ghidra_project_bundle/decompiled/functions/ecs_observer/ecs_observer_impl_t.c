/**
 * Function: ecs_observer_impl_t
 * Address:  1400c2e20
 * Signature: undefined ecs_observer_impl_t(void)
 * Body size: 613 bytes
 */


void ecs_observer_impl_t(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  uVar3 = *(uint *)(param_1 + 0xc4);
  if ((uVar3 & 0x200) != 0) {
    FUN_1400c3090(lVar1,param_1,1);
    uVar3 = *(uint *)(param_1 + 0xc4);
  }
  if ((uVar3 & 8) != 0) {
    lVar5 = FUN_140106180((Decoration<__int64> *)(param_1 + 0xe0));
    uVar3 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)(param_1 + 0xe0))
    ;
    if (0 < (int)uVar3) {
      uVar4 = 0;
      do {
        ecs_observer_impl_t(*(undefined8 *)(lVar5 + uVar4 * 8));
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
    (*DAT_1415033b0)(*(undefined8 *)(param_1 + 0xb8));
    goto LAB_1400c2fd9;
  }
  uVar4 = 0x8000000000000000;
  lVar5 = *(longlong *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0xa0);
  bVar2 = true;
  if (lVar5 == 0) {
LAB_1400c2ee3:
    lVar5 = 0;
  }
  else {
    if (*(char *)(lVar5 + 0x35) == '\0') goto LAB_1400c2fd9;
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if (lVar5 == 0) goto LAB_1400c2ee3;
    uVar4 = (ulonglong)*(byte *)(lVar5 + 0xf) << 0x38;
    bVar2 = false;
  }
  uVar7 = *(ulonglong *)(param_1 + 0xd0);
  if (((uVar7 & 0xf000000000000000) == 0x8000000000000000) ||
     ((uVar7 & 0xf000000000000000) == 0x9000000000000000)) {
    if (((uint)(uVar7 >> 0x20) & 0xfffffff) == 0x10f) {
      uVar7 = uVar7 & 0xffffffff | 0x8000010e00000000;
    }
    if ((uVar7 & 0xffffffff) == 0x10f) {
      uVar7 = uVar7 & 0xfffffff00000000 | 0x800000000000010e;
    }
  }
  uVar8 = 0x18;
  if ((uint)(uVar4 >> 0x3e) < 3) {
    if ((longlong)uVar4 < 0) {
      uVar8 = 0;
      goto LAB_1400c2f8d;
    }
    uVar8 = 0x30;
    if (uVar4 >> 0x3e != 0) goto LAB_1400c2f8d;
  }
  else {
LAB_1400c2f8d:
    FUN_1400c4120(lVar1,uVar6,param_1,uVar8,uVar7);
  }
  if (((!bVar2) && (*(longlong *)(lVar5 + 0x38) == 0x126)) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 0x80) != 0)) {
    FUN_1400c4120(lVar1,uVar6,param_1,0,4);
  }
LAB_1400c2fd9:
  FUN_1403b2770(lVar1 + 0xcc0,param_1 + 0xe0,8);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400b2bd0();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400b2bd0();
  }
  if (*(code **)(param_1 + 0x88) != (code *)0x0) {
    (**(code **)(param_1 + 0x88))(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(code **)(param_1 + 0x90) != (code *)0x0) {
    (**(code **)(param_1 + 0x90))(*(undefined8 *)(param_1 + 0x78));
  }
  if (*(code **)(param_1 + 0x98) != (code *)0x0) {
    (**(code **)(param_1 + 0x98))(*(undefined8 *)(param_1 + 0x80));
  }
  FUN_140168710(param_1,0x65637362);
  uVar6 = FUN_140391250(lVar1 + 0xcc0,0x100);
  FUN_140391740(uVar6,param_1,"ecs_observer_impl_t");
  return;
}


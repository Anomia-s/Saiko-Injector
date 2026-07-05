/**
 * Function: boldshutting_down_world
 * Address:  1400be3a0
 * Signature: undefined boldshutting_down_world(void)
 * Body size: 961 bytes
 */


undefined8 boldshutting_down_world(longlong param_1)

{
  Decoration<__int64> *this;
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  FUN_140399630(0,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/world.c",0x4f6,
                "#[bold]shutting down world");
  FUN_140399740(0);
  *(byte *)(param_1 + 3000) = *(byte *)(param_1 + 3000) | 8;
  uVar3 = FUN_1403a6e90(param_1,0x8000012600000000);
  FUN_140396bb0(param_1,**(undefined8 **)(param_1 + 0x9d0));
  FUN_1400bee50(param_1,uVar3,1);
  FUN_1403978c0(param_1,**(undefined8 **)(param_1 + 0x9d0));
  FUN_140396bb0(param_1,**(undefined8 **)(param_1 + 0x9d0));
  FUN_1400bee50(param_1,uVar3,0);
  FUN_1403978c0(param_1,**(undefined8 **)(param_1 + 0x9d0));
  *(byte *)(param_1 + 3000) = *(byte *)(param_1 + 3000) | 0x10;
  this = (Decoration<__int64> *)(param_1 + 0xd40);
  uVar1 = _anon_C953E3F2::Decoration<__int64>::vfunction3(this);
  lVar4 = FUN_140106180(this);
  if (0 < (int)uVar1) {
    lVar6 = 0;
    do {
      (**(code **)(lVar4 + lVar6))(param_1,*(undefined8 *)(lVar4 + 8 + lVar6));
      lVar6 = lVar6 + 0x10;
    } while ((ulonglong)uVar1 << 4 != lVar6);
  }
  iVar5 = 0;
  FUN_1403b2770(0,this,0x10);
  FUN_140396bb0(param_1,**(undefined8 **)(param_1 + 0x9d0));
  lVar4 = param_1 + 0x808;
  iVar2 = FUN_1403b5840(lVar4);
  if (0 < iVar2) {
    do {
      uVar3 = FUN_1403b56f0(lVar4,0xa0,iVar5);
      FUN_14039fb20(param_1,uVar3);
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  iVar2 = FUN_1403b5840(lVar4);
  if (iVar2 < 2) {
    if (iVar2 == 0) goto LAB_1400be586;
  }
  else {
    iVar5 = 1;
    do {
      uVar3 = FUN_1403b56f0(lVar4,0xa0,iVar5);
      FUN_14039fbb0(param_1,uVar3);
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
    iVar5 = 1;
    do {
      uVar3 = FUN_1403b56f0(lVar4,0xa0,iVar5);
      FUN_14039ff40(param_1,uVar3);
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  thunk_FUN_1403ac890(param_1,param_1 + 0x878);
LAB_1400be586:
  FUN_1403b4ec0(lVar4);
  FUN_14039fbb0(param_1,param_1 + 0x878);
  FUN_1403a97a0(param_1 + 2000);
  FUN_1403d12a0(param_1 + 0x848);
  lVar4 = param_1 + 0xcc0;
  FUN_1403b2770(lVar4,param_1 + 0x918,0x28);
  FUN_1403b2770(lVar4,param_1 + 0x928,0x20);
  FUN_1403b2770(lVar4,param_1 + 0x938,8);
  FUN_140398c00(param_1,**(undefined8 **)(param_1 + 0x9d0));
  if (*(code **)(param_1 + 0xd30) != (code *)0x0) {
    (**(code **)(param_1 + 0xd30))(*(undefined8 *)(param_1 + 0xd20));
  }
  if (*(code **)(param_1 + 0xd38) != (code *)0x0) {
    (**(code **)(param_1 + 0xd38))(*(undefined8 *)(param_1 + 0xd28));
  }
  FUN_1403bea10(param_1 + 0x90);
  FUN_1403a8fb0(param_1 + 2000);
  FUN_1403a8260(param_1);
  FUN_1403a5170(param_1);
  thunk_FUN_1403d12a0(param_1 + 0x970);
  thunk_FUN_1403d12a0(param_1 + 0x9a0);
  FUN_140396560(param_1,0);
  FUN_1403b6370(param_1 + 0x9f0);
  FUN_1403b2770(lVar4,param_1 + 0x9e0,8);
  FUN_1403914b0(param_1 + 0xbc8);
  FUN_1403914b0(param_1 + 0xbe8);
  FUN_1403914b0(param_1 + 0xc08);
  FUN_1403914b0(param_1 + 0xc28);
  FUN_1403914b0(param_1 + 0xc48);
  FUN_1403914b0(param_1 + 0xc68);
  FUN_1403ab5d0(param_1,param_1 + 0xc88);
  FUN_1403b2770(lVar4,param_1 + 0xcb0,8);
  FUN_1403911f0(lVar4);
  FUN_140168710(param_1,0x65637377);
  (*DAT_1415033b0)(param_1);
  FUN_14039cc10();
  FUN_140399630(0,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/world.c",0x543,
                "world destroyed, bye!");
  FUN_140399750(0);
  return 0;
}


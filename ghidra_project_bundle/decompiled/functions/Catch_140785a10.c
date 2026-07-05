/**
 * Function: Catch@140785a10
 * Address:  140785a10
 * Signature: undefined Catch@140785a10(void)
 * Body size: 214 bytes
 */


undefined8 Catch_140785a10(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_1407865a0(param_2 + 0x1d8,*(undefined8 *)(param_2 + 0x488));
  puVar1 = *(undefined8 **)(param_2 + 0x478);
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  lVar2 = *(longlong *)(param_2 + 0x1e0);
  lVar3 = *(longlong *)(param_2 + 0x1d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_1406d9470(puVar1 + 5,(lVar2 - lVar3 >> 3) * -0x71c71c71c71c71c7,param_2 + 0x1d8,
                param_2 + 0x1e0);
  lVar2 = *(longlong *)(param_2 + 0x478);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(param_2 + 0x450);
  uVar4 = *(undefined8 *)(param_2 + 0x460);
  *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)(param_2 + 0x458);
  *(undefined8 *)(lVar2 + 0x68) = uVar4;
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(param_2 + 0x468);
  *(undefined8 *)(param_2 + 0x450) = 0;
  *(undefined8 *)(param_2 + 0x458) = 0;
  *(undefined8 *)(param_2 + 0x460) = 0;
  return 0x140785964;
}


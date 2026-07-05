/**
 * Function: function_id3d12device_createplacedresource_ve
 * Address:  140422320
 * Signature: undefined function_id3d12device_createplacedresource_ve(void)
 * Body size: 353 bytes
 */


void function_id3d12device_createplacedresource_ve
               (longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  lVar1 = param_1 + param_2 * 0x20;
  puVar5 = (undefined8 *)(lVar1 + 0x110);
  plVar2 = *(longlong **)(param_1 + 0x110 + param_2 * 0x20);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    *puVar5 = 0;
  }
  local_30 = 0;
  local_34 = 2;
  local_28 = 0x100000001;
  local_48 = 0;
  local_78 = 1;
  uStack_70 = 0x10000;
  uStack_60 = 0x1000100000001;
  local_58 = 0x100000000;
  uStack_50 = 0x100000000;
  local_88 = &DAT_140e15530;
  local_90 = 0;
  local_98 = 0xac3;
  local_80 = puVar5;
  local_68 = param_3;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xd8))
                    (*(longlong **)(param_1 + 0x30),&local_34,0,&local_78);
  if (iVar3 < 0) {
    FUN_1403d7600("__FUNCTION__, ID3D12Device::CreatePlacedResource [vertex buffer]",iVar3);
  }
  else {
    uVar4 = (**(code **)(*(longlong *)*puVar5 + 0x58))();
    *(undefined8 *)(lVar1 + 0x118) = uVar4;
    *(undefined4 *)(lVar1 + 0x124) = 0x20;
    *(undefined8 *)(lVar1 + 0x128) = param_3;
  }
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_b8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_b8);
}


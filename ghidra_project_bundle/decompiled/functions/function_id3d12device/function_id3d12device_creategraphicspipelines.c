/**
 * Function: function_id3d12device_creategraphicspipelines
 * Address:  140422490
 * Signature: undefined function_id3d12device_creategraphicspipelines(void)
 * Body size: 880 bytes
 */


longlong function_id3d12device_creategraphicspipelines
                   (longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_368 [32];
  undefined4 local_348;
  undefined4 local_344;
  longlong *local_340;
  undefined8 local_338;
  undefined1 local_330 [112];
  undefined1 local_2c0 [8];
  undefined4 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  int local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  int local_29c;
  undefined1 local_294;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined8 local_164;
  undefined8 local_15c;
  undefined4 local_154;
  undefined **local_110;
  undefined4 local_108;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_d0;
  char *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  char *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_368;
  local_58 = 0x1000000000;
  uStack_50 = 0;
  local_68 = "COLOR";
  uStack_60 = 0x200000000;
  local_78 = 0x800000000;
  uStack_70 = 0;
  local_88 = "TEXCOORD";
  uStack_80 = 0x1000000000;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = "POSITION";
  uStack_a0 = 0x1000000000;
  local_340 = (longlong *)0x0;
  local_344 = param_4;
  memset(local_330,0,0x288);
  iVar2 = FUN_1406352c0(param_2);
  local_338 = *(undefined8 *)(param_1 + 0xe0 + (longlong)iVar2 * 8);
  FUN_140635280(param_2,local_330);
  local_348 = param_2;
  FUN_1406352a0(param_2);
  iVar2 = FUN_140125230(param_3);
  iVar3 = FUN_1401252e0(param_3);
  iVar4 = FUN_1401252b0(param_3);
  iVar5 = FUN_140125270(param_3);
  iVar6 = FUN_140125320(param_3);
  iVar7 = FUN_140125370(param_3);
  memset(local_2c0,0,0x148);
  uVar1 = local_344;
  local_2b8 = 1;
  local_2b0 = 0;
  if (iVar2 - 1U < 10) {
    local_2b0 = *(undefined4 *)(&DAT_140e156a0 + (ulonglong)(iVar2 - 1U) * 4);
  }
  local_2ac = 0;
  if (iVar5 - 1U < 10) {
    local_2ac = *(undefined4 *)(&DAT_140e156a0 + (ulonglong)(iVar5 - 1U) * 4);
  }
  local_2a0 = 0;
  if (4 < iVar4 - 1U) {
    iVar4 = 0;
  }
  local_2a4 = 0;
  if (iVar3 - 1U < 10) {
    local_2a4 = *(undefined4 *)(&DAT_140e156a0 + (ulonglong)(iVar3 - 1U) * 4);
  }
  if (iVar6 - 1U < 10) {
    local_2a0 = *(undefined4 *)(&DAT_140e156a0 + (ulonglong)(iVar6 - 1U) * 4);
  }
  local_29c = 0;
  if (iVar7 - 1U < 5) {
    local_29c = iVar7;
  }
  local_294 = 0xf;
  local_154 = 0;
  local_168 = 0;
  local_15c = 1;
  local_178 = 0xffffffff;
  uStack_174 = 3;
  uStack_170 = 1;
  uStack_16c = 0;
  local_164 = 0;
  local_110 = &local_a8;
  local_108 = 3;
  local_fc = local_344;
  local_f8 = 1;
  local_f4 = param_5;
  local_d0 = 1;
  local_2a8 = iVar4;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                    (*(longlong **)(param_1 + 0x30),&local_338,&DAT_140e155a0,&local_340);
  if (iVar2 < 0) {
    FUN_1403d7600("__FUNCTION__, ID3D12Device::CreateGraphicsPipelineState",iVar2);
  }
  else {
    lVar8 = FUN_140160cc0(*(undefined8 *)(param_1 + 0x100),
                          (longlong)*(int *)(param_1 + 0xf8) * 0x78 + 0x78);
    if (lVar8 != 0) {
      *(undefined4 *)(lVar8 + (longlong)*(int *)(param_1 + 0xf8) * 0x78) = local_348;
      *(undefined4 *)(lVar8 + 100 + (longlong)*(int *)(param_1 + 0xf8) * 0x78) = param_3;
      *(undefined4 *)(lVar8 + 0x68 + (longlong)*(int *)(param_1 + 0xf8) * 0x78) = uVar1;
      *(undefined4 *)(lVar8 + 0x6c + (longlong)*(int *)(param_1 + 0xf8) * 0x78) = param_5;
      *(longlong **)(lVar8 + 0x70 + (longlong)*(int *)(param_1 + 0xf8) * 0x78) = local_340;
      *(longlong *)(param_1 + 0x100) = lVar8;
      iVar2 = *(int *)(param_1 + 0xf8);
      *(int *)(param_1 + 0xf8) = iVar2 + 1;
      lVar8 = (longlong)iVar2 * 0x78 + lVar8;
      goto LAB_1404227c5;
    }
    if (local_340 != (longlong *)0x0) {
      (**(code **)(*local_340 + 0x10))();
    }
  }
  lVar8 = 0;
LAB_1404227c5:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_368)) {
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_368);
}


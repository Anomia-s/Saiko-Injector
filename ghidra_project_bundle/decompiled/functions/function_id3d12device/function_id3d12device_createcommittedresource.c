/**
 * Function: function_id3d12device_createcommittedresource
 * Address:  1404213d0
 * Signature: undefined function_id3d12device_createcommittedresource(void)
 * Body size: 1409 bytes
 */


undefined8
function_id3d12device_createcommittedresource
          (longlong param_1,longlong *param_2,uint param_3,undefined4 param_4,undefined4 param_5,
          int param_6,uint param_7,void *param_8,uint param_9,int *param_10)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  void *pvVar7;
  uint uVar8;
  ulonglong _Size;
  uint uVar9;
  undefined1 auStack_228 [32];
  ulonglong local_208;
  undefined8 *local_200;
  uint *local_1f8;
  ulonglong *local_1f0;
  undefined8 *local_1e8;
  uint local_1dc;
  uint local_1d8;
  undefined4 local_1d4;
  longlong *local_1d0;
  longlong *local_1c8;
  ulonglong local_1c0;
  uint local_1b4;
  void *local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  ulonglong uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong *plStack_170;
  undefined4 local_168;
  int iStack_164;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined1 local_140 [16];
  undefined4 local_130;
  undefined4 uStack_12c;
  uint uStack_128;
  undefined4 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_228;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  (**(code **)(*param_2 + 0x50))(param_2,&local_c8);
  local_b8 = (longlong)param_6;
  if ((int)local_a8 - 0x67U < 2) {
    local_b8 = (longlong)param_6 + 1U & 0xfffffffffffffffe;
    param_7 = param_7 + 1 & 0xfffffffe;
  }
  uStack_b0 = CONCAT44(uStack_b0._4_4_,param_7);
  local_f8 = 0;
  local_d8 = 0;
  local_1e8 = &local_f8;
  local_108 = 1;
  uStack_100 = 0x10000;
  uStack_f0 = 0x1000100000001;
  local_e8 = 0x100000000;
  uStack_e0 = 0x100000000;
  local_1f0 = &local_1c0;
  local_1f8 = &local_1b4;
  local_200 = (undefined8 *)local_140;
  local_208 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x130))
            (*(longlong **)(param_1 + 0x30),&local_c8,param_3,1);
  uVar9 = uStack_128;
  uVar5 = (ulonglong)uStack_128;
  local_118 = 0;
  local_11c = 2;
  local_110 = 0x100000001;
  local_1f0 = (ulonglong *)(param_1 + 0x2130 + (longlong)*(int *)(param_1 + 0x2230) * 8);
  local_1f8 = (uint *)&DAT_140e15530;
  local_200 = (undefined8 *)0x0;
  local_208 = CONCAT44(local_208._4_4_,0xac3);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xd8))
                    (*(longlong **)(param_1 + 0x30),&local_11c,0,&local_108);
  if (iVar2 < 0) {
    pcVar4 = "__FUNCTION__, ID3D12Device::CreateCommittedResource [create upload buffer]";
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x2130 + (longlong)*(int *)(param_1 + 0x2230) * 8);
    iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,0,0,&local_1b0);
    if (-1 < iVar2) {
      uVar8 = (uint)local_1c0;
      local_1d8 = param_3;
      local_1d4 = param_4;
      local_1c8 = plVar1;
      if ((param_9 == uVar8) && (uVar9 == uVar8)) {
        memcpy(local_1b0,param_8,(ulonglong)local_1b4 * (local_1c0 & 0xffffffff));
      }
      else if (local_1b4 != 0) {
        if (param_9 < uVar8) {
          uVar8 = param_9;
        }
        _Size = (ulonglong)uVar8;
        if (uVar9 <= uVar8) {
          _Size = uVar5;
        }
        lVar6 = (longlong)(int)param_9;
        uVar9 = local_1b4;
        pvVar7 = local_1b0;
        if ((local_1b4 & 3) != 0) {
          local_1dc = local_1b4;
          uVar9 = 0;
          local_1d0 = param_2;
          do {
            memcpy(pvVar7,param_8,_Size);
            param_8 = (void *)((longlong)param_8 + lVar6);
            pvVar7 = (void *)((longlong)pvVar7 + uVar5);
            uVar9 = uVar9 + 1;
          } while ((local_1b4 & 3) != uVar9);
          param_2 = local_1d0;
          uVar9 = local_1dc - uVar9;
          local_1b4 = local_1dc;
        }
        if (3 < local_1b4) {
          do {
            memcpy(pvVar7,param_8,_Size);
            memcpy((void *)((longlong)pvVar7 + uVar5),(void *)((longlong)param_8 + lVar6),_Size);
            param_8 = (void *)((longlong)param_8 + lVar6 + lVar6);
            pvVar7 = (void *)((longlong)((longlong)pvVar7 + uVar5) + uVar5);
            memcpy(pvVar7,param_8,_Size);
            param_8 = (void *)((longlong)param_8 + lVar6);
            pvVar7 = (void *)((longlong)pvVar7 + uVar5);
            memcpy(pvVar7,param_8,_Size);
            param_8 = (void *)((longlong)param_8 + lVar6);
            pvVar7 = (void *)((longlong)pvVar7 + uVar5);
            uVar9 = uVar9 - 4;
          } while (uVar9 != 0);
        }
      }
      (**(code **)(*local_1c8 + 0x48))(local_1c8,0,0);
      if (*param_10 != 0x400) {
        local_178 = 0;
        uStack_160 = 0x400;
        _local_168 = CONCAT44(*param_10,0xffffffff);
        plStack_170 = param_2;
        (**(code **)(**(longlong **)(param_1 + 0x48) + 0xd0))
                  (*(longlong **)(param_1 + 0x48),1,&local_178);
      }
      *param_10 = 0x400;
      local_1a0 = 0;
      local_190 = 0;
      uStack_188 = 0;
      local_180 = 0;
      uStack_198 = (ulonglong)local_1d8;
      local_178 = *(undefined8 *)(param_1 + 0x2130 + (longlong)*(int *)(param_1 + 0x2230) * 8);
      plStack_170 = (longlong *)0x1;
      local_158 = local_130;
      uStack_154 = uStack_12c;
      uStack_150 = uStack_128;
      uStack_14c = uStack_124;
      local_200 = &local_178;
      local_1f8 = (uint *)0x0;
      local_208 = local_208 & 0xffffffff00000000;
      local_1a8 = param_2;
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x80))
                (*(longlong **)(param_1 + 0x48),&local_1a8,local_1d4,param_5);
      if (*param_10 != 0x80) {
        local_88 = 0;
        uStack_70 = 0x80;
        local_78 = CONCAT44(*param_10,0xffffffff);
        plStack_80 = param_2;
        (**(code **)(**(longlong **)(param_1 + 0x48) + 0xd0))
                  (*(longlong **)(param_1 + 0x48),1,&local_88);
      }
      *param_10 = 0x80;
      iVar2 = *(int *)(param_1 + 0x2230) + 1;
      *(int *)(param_1 + 0x2230) = iVar2;
      uVar3 = 1;
      if (iVar2 == 0x20) {
        FUN_140421960(param_1);
        uVar3 = 1;
      }
      goto LAB_1404218fe;
    }
    plVar1 = *(longlong **)(param_1 + 0x2130 + (longlong)*(int *)(param_1 + 0x2230) * 8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      *(undefined8 *)(param_1 + 0x2130 + (longlong)*(int *)(param_1 + 0x2230) * 8) = 0;
    }
    pcVar4 = "__FUNCTION__, ID3D12Resource::Map [map staging texture]";
  }
  uVar3 = FUN_1403d7600(pcVar4,iVar2);
LAB_1404218fe:
  if (DAT_1414ef3c0 != (local_60 ^ (ulonglong)auStack_228)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_60 ^ (ulonglong)auStack_228);
  }
  return uVar3;
}


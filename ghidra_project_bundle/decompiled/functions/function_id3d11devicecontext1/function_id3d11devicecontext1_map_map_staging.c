/**
 * Function: function_id3d11devicecontext1_map_map_staging
 * Address:  14041ba20
 * Signature: undefined function_id3d11devicecontext1_map_map_staging(void)
 * Body size: 1082 bytes
 */


undefined8
function_id3d11devicecontext1_map_map_staging
          (longlong param_1,longlong *param_2,int param_3,undefined4 param_4,undefined4 param_5,
          uint param_6,uint param_7,void *param_8,uint param_9)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  void *pvVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  void **local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  longlong local_a8;
  longlong *local_a0;
  undefined4 local_94;
  void *local_90;
  uint local_88;
  uint local_7c;
  uint local_78;
  int local_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_f8;
  (**(code **)(*param_2 + 0x50))(param_2,&local_7c);
  local_7c = param_6;
  local_78 = param_7;
  local_60 = 3;
  uStack_5c = 0;
  uStack_58 = 0x10000;
  uStack_54 = 0;
  if (local_6c - 0x67U < 2) {
    local_7c = param_6 + 1 & 0xfffffffe;
    local_78 = param_7 + 1 & 0xfffffffe;
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))
                    (*(longlong **)(param_1 + 0x28),&local_7c,0,&local_50);
  if (iVar2 < 0) {
    pcVar6 = "__FUNCTION__, ID3D11Device1::CreateTexture2D [create staging texture]";
  }
  else {
    local_d0 = &local_90;
    local_d8 = 0;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x70))
                      (*(longlong **)(param_1 + 0x30),local_50,0,2);
    if (-1 < iVar2) {
      param_6 = param_6 * param_3;
      if (param_6 == local_88 && param_6 == param_9) {
        memcpy(local_90,param_8,(longlong)(int)param_7 * (ulonglong)param_9);
        param_6 = param_9;
      }
      else {
        if (param_9 <= param_6) {
          param_6 = param_9;
        }
        if (local_88 <= param_6) {
          param_6 = local_88;
        }
        if (0 < (int)param_7) {
          uVar12 = (ulonglong)param_6;
          lVar7 = (longlong)(int)param_9;
          uVar9 = param_7 & 3;
          pvVar10 = local_90;
          if (3 < param_7) {
            uVar4 = param_7 & 0x7ffffffc;
            local_a8 = param_1;
            local_a0 = param_2;
            local_94 = param_4;
            do {
              memcpy(pvVar10,param_8,uVar12);
              uVar11 = (ulonglong)local_88;
              memcpy((void *)(uVar11 + (longlong)pvVar10),(void *)((longlong)param_8 + lVar7),uVar12
                    );
              param_8 = (void *)((longlong)param_8 + lVar7 + lVar7);
              pvVar10 = (void *)((ulonglong)local_88 + (longlong)(uVar11 + (longlong)pvVar10));
              memcpy(pvVar10,param_8,uVar12);
              param_8 = (void *)((longlong)param_8 + lVar7);
              pvVar10 = (void *)((ulonglong)local_88 + (longlong)pvVar10);
              memcpy(pvVar10,param_8,uVar12);
              param_8 = (void *)((longlong)param_8 + lVar7);
              pvVar10 = (void *)((ulonglong)local_88 + (longlong)pvVar10);
              uVar4 = uVar4 - 4;
              param_1 = local_a8;
              param_4 = local_94;
              param_2 = local_a0;
            } while (uVar4 != 0);
          }
          for (; local_a8 = param_1, uVar9 != 0; uVar9 = uVar9 - 1) {
            memcpy(pvVar10,param_8,uVar12);
            param_8 = (void *)((longlong)param_8 + lVar7);
            pvVar10 = (void *)((longlong)pvVar10 + (ulonglong)local_88);
            param_1 = local_a8;
          }
        }
      }
      if (0 < (int)param_7 && local_6c - 0x67U < 2) {
        bVar13 = local_6c == 0x68;
        uVar4 = (uint)!bVar13 * 2 | 0xfffffffc;
        uVar12 = (ulonglong)(param_6 + (uint)bVar13 * 2 + 1 & uVar4);
        uVar5 = param_7 + 1 >> 1;
        pvVar10 = (void *)((ulonglong)(local_88 * local_78) + (longlong)local_90);
        uVar9 = 1;
        if (1 < uVar5) {
          uVar9 = uVar5;
        }
        lVar8 = (longlong)(int)(param_9 + 1 + (uint)bVar13 * 2 & uVar4);
        uVar4 = uVar9 & 3;
        lVar7 = param_1;
        local_a8 = param_1;
        if (6 < param_7) {
          uVar9 = uVar9 & 0x3ffffffc;
          local_a0 = param_2;
          do {
            memcpy(pvVar10,param_8,uVar12);
            uVar11 = (ulonglong)local_88;
            memcpy((void *)(uVar11 + (longlong)pvVar10),(void *)((longlong)param_8 + lVar8),uVar12);
            param_8 = (void *)((longlong)param_8 + lVar8 + lVar8);
            pvVar10 = (void *)((ulonglong)local_88 + (longlong)(uVar11 + (longlong)pvVar10));
            memcpy(pvVar10,param_8,uVar12);
            param_8 = (void *)((longlong)param_8 + lVar8);
            pvVar10 = (void *)((ulonglong)local_88 + (longlong)pvVar10);
            memcpy(pvVar10,param_8,uVar12);
            param_8 = (void *)((longlong)param_8 + lVar8);
            pvVar10 = (void *)((ulonglong)local_88 + (longlong)pvVar10);
            uVar9 = uVar9 - 4;
            lVar7 = local_a8;
            param_2 = local_a0;
          } while (uVar9 != 0);
        }
        for (; lVar1 = local_a8, param_1 = local_a8, local_a8 = lVar7, uVar4 != 0; uVar4 = uVar4 - 1
            ) {
          memcpy(pvVar10,param_8,uVar12);
          param_8 = (void *)((longlong)param_8 + lVar8);
          pvVar10 = (void *)((longlong)pvVar10 + (ulonglong)local_88);
          lVar7 = local_a8;
          local_a8 = lVar1;
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                (*(longlong **)(param_1 + 0x30),local_50,0);
      local_c8 = local_50;
      local_d8 = param_5;
      local_b8 = 0;
      local_c0 = 0;
      local_d0 = (void **)((ulonglong)local_d0 & 0xffffffff00000000);
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x170))
                (*(longlong **)(param_1 + 0x30),param_2,0,param_4);
      uVar3 = 1;
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 0x10))();
        uVar3 = 1;
      }
      goto LAB_14041be1f;
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
      local_50 = (longlong *)0x0;
    }
    pcVar6 = "__FUNCTION__, ID3D11DeviceContext1::Map [map staging texture]";
  }
  uVar3 = FUN_1403d7600(pcVar6,iVar2);
LAB_14041be1f:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_f8);
  }
  return uVar3;
}


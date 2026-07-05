/**
 * Function: could_not_fetch_blit_pipeline
 * Address:  1403fd140
 * Signature: undefined could_not_fetch_blit_pipeline(void)
 * Body size: 647 bytes
 */


void could_not_fetch_blit_pipeline(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  undefined4 *local_b0;
  int local_a8;
  uint local_a4;
  undefined8 local_a0;
  int local_98;
  int local_94;
  undefined4 *local_90;
  uint local_88;
  uint local_84;
  undefined8 local_80;
  int local_78;
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_1414ef3c0 ^ (ulonglong)auStack_118;
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  local_c0 = (longlong)puVar1 + 0xe4;
  local_c8 = puVar1 + 0x1c;
  local_d0 = puVar1 + 0x1b;
  local_d8 = puVar1[0x18];
  local_e8 = *(undefined4 *)(puVar1 + 0x16);
  uStack_e4 = *(undefined4 *)((longlong)puVar1 + 0xb4);
  uStack_e0 = *(undefined4 *)(puVar1 + 0x17);
  uStack_dc = *(undefined4 *)((longlong)puVar1 + 0xbc);
  local_f8 = *(undefined4 *)(puVar1 + 0x14);
  uStack_f4 = *(undefined4 *)((longlong)puVar1 + 0xa4);
  uStack_f0 = *(undefined4 *)(puVar1 + 0x15);
  uStack_ec = *(undefined4 *)((longlong)puVar1 + 0xac);
  lVar2 = failed_to_create_gpu_pipeline_for_blit(*puVar1,*param_2,param_2[1],puVar1[0x13]);
  if (lVar2 == 0) {
    FUN_1400fb8f0(9,"Could not fetch blit pipeline");
  }
  else {
    uVar8 = param_2[5];
    if (uVar8 != 0) {
      uVar5 = param_2[6];
      if (1 < uVar5) {
        uVar7 = 0;
        do {
          if (1 < uVar5) {
            uVar8 = 1;
            do {
              local_60 = 0;
              uStack_68 = 0;
              local_a8 = uVar8 - 1;
              local_a0 = 0;
              uVar5 = (uint)param_2[3] >> ((byte)local_a8 & 0x1f);
              local_98 = uVar5 + (uVar5 == 0);
              uVar5 = (uint)param_2[4] >> ((byte)local_a8 & 0x1f);
              local_94 = uVar5 + (uVar5 == 0);
              uVar5 = (uint)param_2[3] >> ((byte)uVar8 & 0x1f);
              local_78 = uVar5 + (uVar5 == 0);
              uVar5 = (uint)param_2[4] >> ((byte)uVar8 & 0x1f);
              local_80 = 0;
              local_74 = uVar5 + (uVar5 == 0);
              local_70 = 2;
              uStack_58 = 1;
              local_b0 = param_2;
              local_a4 = uVar7;
              local_90 = param_2;
              local_88 = uVar8;
              local_84 = uVar7;
              parameter_s_is_invalid(param_1,&local_b0);
              uVar8 = uVar8 + 1;
              uVar5 = param_2[6];
            } while (uVar8 < uVar5);
            uVar8 = param_2[5];
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
    }
    lVar2 = *(longlong *)(param_2 + 10);
    uVar8 = *(uint *)(param_1 + 0x758);
    uVar6 = (ulonglong)uVar8;
    if (uVar6 != 0) {
      uVar4 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x750) + uVar4 * 8) == lVar2) goto LAB_1403fd394;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    if (uVar8 == *(uint *)(param_1 + 0x75c)) {
      *(uint *)(param_1 + 0x75c) = uVar8 + 1;
      lVar3 = FUN_140160cc0(*(undefined8 *)(param_1 + 0x750),(ulonglong)(uVar8 + 1) << 3);
      *(longlong *)(param_1 + 0x750) = lVar3;
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x758);
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x750);
    }
    *(longlong *)(lVar3 + uVar6 * 8) = lVar2;
    *(int *)(param_1 + 0x758) = *(int *)(param_1 + 0x758) + 1;
    FUN_140106160(lVar2 + 0x48,1);
  }
LAB_1403fd394:
  if (DAT_1414ef3c0 == (local_50 ^ (ulonglong)auStack_118)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_50 ^ (ulonglong)auStack_118);
}


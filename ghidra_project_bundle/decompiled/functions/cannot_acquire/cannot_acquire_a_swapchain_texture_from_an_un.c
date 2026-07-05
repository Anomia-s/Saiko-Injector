/**
 * Function: cannot_acquire_a_swapchain_texture_from_an_un
 * Address:  1403f2d90
 * Signature: undefined cannot_acquire_a_swapchain_texture_from_an_un(void)
 * Body size: 1252 bytes
 */


ulonglong cannot_acquire_a_swapchain_texture_from_an_un
                    (uint param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                    undefined4 *param_5,undefined4 *param_6)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint7 uVar11;
  ulonglong uVar10;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  uint *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 *local_a0;
  undefined4 local_90 [2];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  uint local_44;
  ulonglong local_40;
  
  uVar10 = (ulonglong)param_1;
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_e8;
  lVar7 = *(longlong *)(param_2 + 0x50);
  *param_4 = 0;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  uVar3 = video_subsystem_has_not_been_initialized(param_3);
  lVar5 = FUN_14014ff10(uVar3,"SDL_GPUVulkanWindowPropertyData",0);
  if (lVar5 == 0) {
    if (*(char *)(lVar7 + 0x57c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,&DAT_141339891,"Cannot acquire a swapchain texture from an unclaimed window!")
      ;
    }
    FUN_1400fbed0(&DAT_141339891,"Cannot acquire a swapchain texture from an unclaimed window!");
    uVar10 = 0;
    goto LAB_1403f3239;
  }
  uVar11 = (uint7)(uint3)(param_1 >> 8);
  if (*(char *)(lVar5 + 0x10) == '\x01') {
    iVar4 = FUN_1403f2650(lVar7,lVar5);
    if (iVar4 != 0) {
      if (iVar4 == 2) {
        lVar1 = *(longlong *)(lVar5 + 0x98 + (ulonglong)*(uint *)(lVar5 + 0xb0) * 8);
        uVar10 = CONCAT71(uVar11,1);
        if (lVar1 != 0) {
          iVar4 = FUN_140106160(lVar1 + 8,0xffffffff);
          if (iVar4 == 1) {
            FUN_1401552a0(*(undefined8 *)(lVar7 + 2000));
            uVar9 = *(uint *)(lVar7 + 0x7e0);
            if (uVar9 + 1 < *(uint *)(lVar7 + 0x7e4)) {
              lVar8 = *(longlong *)(lVar7 + 0x7d8);
            }
            else {
              uVar9 = *(uint *)(lVar7 + 0x7e4) * 2;
              *(uint *)(lVar7 + 0x7e4) = uVar9;
              lVar8 = FUN_140160cc0(*(undefined8 *)(lVar7 + 0x7d8),(ulonglong)uVar9 << 3);
              *(longlong *)(lVar7 + 0x7d8) = lVar8;
              uVar9 = *(uint *)(lVar7 + 0x7e0);
            }
            *(longlong *)(lVar8 + (ulonglong)uVar9 * 8) = lVar1;
            *(int *)(lVar7 + 0x7e0) = *(int *)(lVar7 + 0x7e0) + 1;
            FUN_1401552c0(*(undefined8 *)(lVar7 + 2000));
          }
          *(undefined8 *)(lVar5 + 0x98 + (ulonglong)*(uint *)(lVar5 + 0xb0) * 8) = 0;
        }
        goto LAB_1403f3239;
      }
      goto LAB_1403f2e94;
    }
LAB_1403f2ee6:
    uVar10 = 0;
  }
  else {
LAB_1403f2e94:
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = *(undefined4 *)(lVar5 + 0x5c);
    }
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = *(undefined4 *)(lVar5 + 0x60);
    }
    lVar1 = *(longlong *)(lVar5 + 0x98 + (ulonglong)*(uint *)(lVar5 + 0xb0) * 8);
    if (lVar1 != 0) {
      if ((char)param_1 == '\0') {
        cVar2 = vkgetfencestatus_s(lVar7);
        uVar10 = CONCAT71(uVar11,1);
        if (cVar2 == '\0') goto LAB_1403f3239;
      }
      else {
        cVar2 = vk_error_out_of_host_memory
                          (lVar7,CONCAT71((int7)((ulonglong)lVar1 >> 8),1),
                           lVar5 + (ulonglong)*(uint *)(lVar5 + 0xb0) * 8 + 0x98,1);
        if (cVar2 == '\0') goto LAB_1403f2ee6;
      }
      lVar1 = *(longlong *)(lVar5 + 0x98 + (ulonglong)*(uint *)(lVar5 + 0xb0) * 8);
      iVar4 = FUN_140106160(lVar1 + 8,0xffffffff);
      if (iVar4 == 1) {
        FUN_1401552a0(*(undefined8 *)(lVar7 + 2000));
        uVar9 = *(uint *)(lVar7 + 0x7e0);
        if (uVar9 + 1 < *(uint *)(lVar7 + 0x7e4)) {
          lVar8 = *(longlong *)(lVar7 + 0x7d8);
        }
        else {
          uVar9 = *(uint *)(lVar7 + 0x7e4) * 2;
          *(uint *)(lVar7 + 0x7e4) = uVar9;
          lVar8 = FUN_140160cc0(*(undefined8 *)(lVar7 + 0x7d8),(ulonglong)uVar9 << 3);
          *(longlong *)(lVar7 + 0x7d8) = lVar8;
          uVar9 = *(uint *)(lVar7 + 0x7e0);
        }
        *(longlong *)(lVar8 + (ulonglong)uVar9 * 8) = lVar1;
        *(int *)(lVar7 + 0x7e0) = *(int *)(lVar7 + 0x7e0) + 1;
        FUN_1401552c0(*(undefined8 *)(lVar7 + 2000));
      }
      *(undefined8 *)(lVar5 + 0x98 + (ulonglong)*(uint *)(lVar5 + 0xb0) * 8) = 0;
    }
    do {
      local_c8 = 0;
      local_c0 = &local_44;
      iVar4 = (**(code **)(lVar7 + 0xc48))
                        (*(undefined8 *)(lVar7 + 0x570),*(undefined8 *)(lVar5 + 0x28),
                         0xffffffffffffffff,
                         *(undefined8 *)(lVar5 + 0x68 + (ulonglong)*(uint *)(lVar5 + 0xb0) * 8));
      if ((iVar4 == 0) || (iVar4 == 0x3b9acdeb)) {
        lVar1 = *(longlong *)(lVar5 + 0x50);
        uVar6 = (ulonglong)local_44;
        local_90[0] = 0x2d;
        local_88 = 0;
        local_80 = 0x10000000000;
        uStack_78 = 0x200000000;
        local_70 = 0xffffffffffffffff;
        local_68 = *(undefined8 *)(*(longlong *)(lVar1 + 0x28 + uVar6 * 0x50) + 0x18);
        local_60 = 1;
        uStack_5c = 0;
        uStack_58 = 1;
        uStack_54 = 0;
        local_50 = 1;
        local_a0 = local_90;
        local_a8 = 1;
        local_b0 = 0;
        local_b8 = 0;
        local_c0 = (uint *)0x0;
        local_c8 = local_c8 & 0xffffffff00000000;
        (**(code **)(lVar7 + 0xa78))(*(undefined8 *)(param_2 + 0x58),0x400,0x400,0);
        uVar9 = *(uint *)(param_2 + 0x70);
        if (uVar9 == *(uint *)(param_2 + 0x74)) {
          *(uint *)(param_2 + 0x74) = uVar9 + 1;
          lVar7 = FUN_140160cc0(*(undefined8 *)(param_2 + 0x68),(ulonglong)(uVar9 + 1) << 4);
          *(longlong *)(param_2 + 0x68) = lVar7;
          uVar9 = *(uint *)(param_2 + 0x70);
        }
        else {
          lVar7 = *(longlong *)(param_2 + 0x68);
        }
        *(uint *)(param_2 + 0x70) = uVar9 + 1;
        *(longlong *)(lVar7 + (ulonglong)uVar9 * 0x10) = lVar5;
        *(uint *)(lVar7 + 8 + (ulonglong)uVar9 * 0x10) = local_44;
        uVar9 = *(uint *)(param_2 + 0x80);
        if (uVar9 == *(uint *)(param_2 + 0x84)) {
          *(uint *)(param_2 + 0x84) = uVar9 + 1;
          lVar7 = FUN_140160cc0(*(undefined8 *)(param_2 + 0x78),(ulonglong)(uVar9 + 1) << 3);
          *(longlong *)(param_2 + 0x78) = lVar7;
          uVar9 = *(uint *)(param_2 + 0x80);
        }
        else {
          lVar7 = *(longlong *)(param_2 + 0x78);
        }
        *(undefined8 *)(lVar7 + (ulonglong)uVar9 * 8) =
             *(undefined8 *)(lVar5 + 0x68 + (ulonglong)*(uint *)(lVar5 + 0xb0) * 8);
        *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
        uVar9 = *(uint *)(param_2 + 0x90);
        if (uVar9 == *(uint *)(param_2 + 0x94)) {
          *(uint *)(param_2 + 0x94) = uVar9 + 1;
          lVar7 = FUN_140160cc0(*(undefined8 *)(param_2 + 0x88),(ulonglong)(uVar9 + 1) << 3);
          *(longlong *)(param_2 + 0x88) = lVar7;
          uVar9 = *(uint *)(param_2 + 0x90);
        }
        else {
          lVar7 = *(longlong *)(param_2 + 0x88);
        }
        *(undefined8 *)(lVar7 + (ulonglong)uVar9 * 8) =
             *(undefined8 *)(lVar5 + 0x80 + (ulonglong)*(uint *)(lVar5 + 0xb0) * 8);
        *(int *)(param_2 + 0x90) = *(int *)(param_2 + 0x90) + 1;
        *param_4 = lVar1 + uVar6 * 0x50;
        break;
      }
      iVar4 = FUN_1403f2650(lVar7,lVar5);
      if (iVar4 == 0) goto LAB_1403f2ee6;
    } while (iVar4 != 2);
    uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
  }
LAB_1403f3239:
  if (DAT_1414ef3c0 != (local_40 ^ (ulonglong)auStack_e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_40 ^ (ulonglong)auStack_e8);
  }
  return uVar10;
}


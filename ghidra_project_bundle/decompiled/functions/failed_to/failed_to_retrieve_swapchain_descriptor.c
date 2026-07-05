/**
 * Function: failed_to_retrieve_swapchain_descriptor
 * Address:  140402790
 * Signature: undefined failed_to_retrieve_swapchain_descriptor(void)
 * Body size: 1168 bytes
 */


ulonglong failed_to_retrieve_swapchain_descriptor
                    (undefined8 *param_1,undefined8 *param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined4 uVar4;
  BOOL BVar5;
  int iVar6;
  HWND hWnd;
  char *pcVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 uStack_f0;
  longlong **local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  int local_5c;
  undefined8 local_58;
  undefined4 local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_118;
  uVar4 = video_subsystem_has_not_been_initialized(*param_2);
  uVar10 = 0;
  hWnd = (HWND)FUN_14014ff10(uVar4,"SDL.window.win32.hwnd",0);
  lVar8 = (longlong)param_3;
  local_5c = 3 - (uint)(*(uint *)((longlong)param_1 + 0x7c) < 3);
  local_70 = *(undefined4 *)(&DAT_140e14d60 + lVar8 * 4);
  *(int *)(param_2 + 0x22) = local_5c;
  local_78 = 0;
  local_58 = 0x400000000;
  local_50 = 0;
  local_6c = 0x100000000;
  uStack_64 = 0x2000000000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  local_4c = (uint)(*(int *)(param_1 + 8) != 0) << 0xb;
  BVar5 = IsWindow(hWnd);
  if (BVar5 != 0) {
    local_e8 = &local_a8;
    local_f8 = &local_98;
    uStack_f0 = 0;
    iVar6 = (**(code **)(*(longlong *)param_1[2] + 0x78))
                      ((longlong *)param_1[2],param_1[0xe],hWnd,&local_78);
    if (iVar6 < 0) {
      pcVar7 = "Could not create swapchain";
    }
    else {
      iVar6 = (**(code **)*local_a8)(local_a8,&DAT_140e14d80,&local_b0);
      (**(code **)(*local_a8 + 0x10))();
      if (iVar6 < 0) {
        pcVar7 = "Could not create IDXGISwapChain3";
      }
      else {
        if (param_3 != 0) {
          (**(code **)(*local_b0 + 0x130))(local_b0,*(undefined4 *)(&DAT_140e14d70 + lVar8 * 4));
        }
        iVar6 = (**(code **)(*local_b0 + 0x30))(local_b0,&DAT_140e14714,&local_a0);
        if (iVar6 < 0) {
          FUN_1400fb8f0(9,"Could not get swapchain parent! Error Code: (0x%08lX)",iVar6);
        }
        else {
          iVar6 = (**(code **)(*local_a0 + 0x40))(local_a0,hWnd,1);
          if (iVar6 < 0) {
            FUN_1400fb8f0(9,"MakeWindowAssociation failed! Error Code: (0x%08lX)",iVar6);
          }
          (**(code **)(*local_a0 + 0x10))();
        }
        (**(code **)(*local_b0 + 0x90))(local_b0,&local_78);
        if (-1 < iVar6) {
          param_2[1] = local_b0;
          *(undefined4 *)(param_2 + 2) = param_4;
          *(int *)((longlong)param_2 + 0x14) = param_3;
          *(undefined4 *)(param_2 + 3) = *(undefined4 *)(&DAT_140e14d70 + lVar8 * 4);
          *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
          param_2[0x26] = local_78;
          lVar1 = (longlong)param_1 + 0xe4;
          puVar9 = param_1 + 0x1c;
          puVar2 = param_1 + 0x1b;
          uVar4 = *(undefined4 *)(&DAT_140e14d90 + lVar8 * 4);
          local_d8 = param_1[0x18];
          local_e8 = (longlong **)param_1[0x16];
          uStack_e0 = *(undefined4 *)(param_1 + 0x17);
          uStack_dc = *(undefined4 *)((longlong)param_1 + 0xbc);
          local_f8 = (undefined8 *)param_1[0x14];
          uStack_f0 = param_1[0x15];
          local_d0 = puVar2;
          local_c8 = puVar9;
          local_c0 = lVar1;
          failed_to_create_gpu_pipeline_for_blit(*param_1,0,uVar4,param_1[0x13]);
          local_d8 = param_1[0x18];
          local_e8 = (longlong **)param_1[0x16];
          uStack_e0 = *(undefined4 *)(param_1 + 0x17);
          uStack_dc = *(undefined4 *)((longlong)param_1 + 0xbc);
          local_f8 = (undefined8 *)param_1[0x14];
          uStack_f0 = param_1[0x15];
          local_d0 = puVar2;
          local_c8 = puVar9;
          local_c0 = lVar1;
          failed_to_create_gpu_pipeline_for_blit(*param_1,1,uVar4,param_1[0x13]);
          local_d8 = param_1[0x18];
          local_e8 = (longlong **)param_1[0x16];
          uStack_e0 = *(undefined4 *)(param_1 + 0x17);
          uStack_dc = *(undefined4 *)((longlong)param_1 + 0xbc);
          local_f8 = (undefined8 *)param_1[0x14];
          uStack_f0 = param_1[0x15];
          local_d0 = puVar2;
          local_c8 = puVar9;
          local_c0 = lVar1;
          failed_to_create_gpu_pipeline_for_blit(*param_1,2,uVar4,param_1[0x13]);
          local_d8 = param_1[0x18];
          local_e8 = (longlong **)param_1[0x16];
          uStack_e0 = *(undefined4 *)(param_1 + 0x17);
          uStack_dc = *(undefined4 *)((longlong)param_1 + 0xbc);
          local_f8 = (undefined8 *)param_1[0x14];
          uStack_f0 = param_1[0x15];
          local_d0 = puVar2;
          local_c8 = puVar9;
          local_c0 = lVar1;
          failed_to_create_gpu_pipeline_for_blit(*param_1,3,uVar4,param_1[0x13]);
          local_d8 = param_1[0x18];
          local_e8 = (longlong **)param_1[0x16];
          uStack_e0 = *(undefined4 *)(param_1 + 0x17);
          uStack_dc = *(undefined4 *)((longlong)param_1 + 0xbc);
          local_f8 = (undefined8 *)param_1[0x14];
          uStack_f0 = param_1[0x15];
          local_d0 = puVar2;
          local_c8 = puVar9;
          local_c0 = lVar1;
          failed_to_create_gpu_pipeline_for_blit(*param_1,4,uVar4,param_1[0x13]);
          uVar10 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
          if (*(int *)(param_2 + 0x22) != 0) {
            puVar9 = param_2 + 4;
            uVar11 = 0;
            do {
              local_f8 = puVar9;
              cVar3 = could_not_get_buffer_from_swapchain
                                (param_1,local_b0,param_3,uVar11 & 0xffffffff);
              if (cVar3 == '\0') {
                (**(code **)(*local_b0 + 0x10))();
                goto LAB_140402bd2;
              }
              uVar11 = uVar11 + 1;
              puVar9 = puVar9 + 10;
            } while (uVar11 < *(uint *)(param_2 + 0x22));
          }
          goto LAB_140402bd5;
        }
        pcVar7 = "Failed to retrieve swapchain descriptor!";
      }
    }
    s_error_code_s_0x08lx(param_1,pcVar7,iVar6);
LAB_140402bd2:
    uVar10 = 0;
  }
LAB_140402bd5:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_118)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_118);
  }
  return uVar10 & 0xffffffff;
}


/**
 * Function: function_idxgiswapchain_resizebuffers
 * Address:  140420e10
 * Signature: undefined function_idxgiswapchain_resizebuffers(void)
 * Body size: 1459 bytes
 */


int function_idxgiswapchain_resizebuffers(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  uint uVar11;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined8 uStack_d0;
  undefined8 *local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_f8;
  lVar2 = *(longlong *)(param_1 + 0x2c0);
  FUN_140421960(lVar2);
  local_d8 = 0;
  (**(code **)(**(longlong **)(lVar2 + 0x48) + 0x170))(*(longlong **)(lVar2 + 0x48),0,0,0);
  if (*(longlong **)(lVar2 + 0xb0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar2 + 0xb0) + 0x10))();
    *(undefined8 *)(lVar2 + 0xb0) = 0;
  }
  if (*(longlong **)(lVar2 + 0xb8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar2 + 0xb8) + 0x10))();
    *(undefined8 *)(lVar2 + 0xb8) = 0;
  }
  video_subsystem_has_not_been_initialized(*(undefined8 *)(param_1 + 0x100),&local_9c,&local_a0);
  *(undefined4 *)(lVar2 + 0x422c0) = 1;
  plVar3 = *(longlong **)(lVar2 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    lVar9 = *(longlong *)(param_1 + 0x2c0);
    local_b8 = (longlong *)0x0;
    local_70 = 0;
    local_98 = CONCAT44(local_a0,local_9c);
    uVar11 = 0x57;
    if (*(int *)(param_1 + 0x1f0) == 0x12002600) {
      uVar11 = 0x18;
    }
    uVar6 = 10;
    if (*(int *)(param_1 + 0x1f0) != 0x12000500) {
      uVar6 = uVar11;
    }
    *(uint *)(lVar9 + 0x60) = uVar6;
    uStack_90 = (ulonglong)uVar6;
    local_88 = 1;
    uStack_80 = 0x200000020;
    iVar5 = FUN_1403d7b60();
    local_78 = (uint)(iVar5 != 0);
    local_74 = 3;
    local_6c = 0x840;
    uVar7 = video_subsystem_has_not_been_initialized(*(undefined8 *)(param_1 + 0x100));
    lVar8 = FUN_14014ff10(uVar7,"SDL.window.win32.hwnd",0);
    if (lVar8 == 0) {
      FUN_1400fbed0("Couldn\'t get window handle");
      iVar5 = -0x7fffbffb;
    }
    else {
      local_c8 = &local_b8;
      local_d8 = 0;
      uStack_d0 = 0;
      iVar5 = (**(code **)(**(longlong **)(lVar9 + 0x10) + 0x78))
                        (*(longlong **)(lVar9 + 0x10),*(undefined8 *)(lVar9 + 0x40),lVar8,&local_98)
      ;
      if (iVar5 < 0) {
        pcVar10 = "__FUNCTION__, IDXGIFactory2::CreateSwapChainForHwnd";
      }
      else {
        (**(code **)(**(longlong **)(lVar9 + 0x10) + 0x40))(*(longlong **)(lVar9 + 0x10),lVar8,1);
        puVar1 = (undefined8 *)(lVar9 + 0x28);
        iVar5 = (**(code **)*local_b8)(local_b8,&DAT_140e15690,puVar1);
        if (iVar5 < 0) {
          pcVar10 = "__FUNCTION__, IDXGISwapChain1::QueryInterface";
        }
        else {
          iVar5 = (**(code **)(*(longlong *)*puVar1 + 0xf8))((longlong *)*puVar1,1);
          if (-1 < iVar5) {
            *(undefined4 *)(lVar9 + 0x50) = local_74;
            *(undefined4 *)(lVar9 + 0x54) = local_6c;
            local_c0 = local_c0 & 0xffffffff00000000;
            uVar7 = 0xc;
            if (*(int *)(param_1 + 0x1f0) != 0x12002600) {
              uVar7 = 0;
            }
            if (*(int *)(param_1 + 0x1f0) == 0x12000500) {
              uVar7 = 1;
            }
            iVar5 = (**(code **)(**(longlong **)(lVar9 + 0x28) + 0x128))
                              (*(longlong **)(lVar9 + 0x28),uVar7,&local_c0);
            if ((iVar5 < 0) || ((local_c0 & 1) == 0)) {
              FUN_1400fbed0("Unsupported output colorspace");
              iVar5 = -0x7785fffc;
            }
            else {
              iVar5 = (**(code **)(*(longlong *)*puVar1 + 0x130))((longlong *)*puVar1,uVar7);
              if (iVar5 < 0) {
                pcVar10 = "__FUNCTION__, IDXGISwapChain3::SetColorSpace1";
                goto LAB_140421106;
              }
            }
            uVar4 = *puVar1;
            uVar7 = parameter_s_is_invalid(param_1);
            FUN_14014faf0(uVar7,"SDL.renderer.d3d12.swap_chain",uVar4);
            goto joined_r0x0001404210e3;
          }
          pcVar10 = "__FUNCTION__, IDXGISwapChain4::SetMaximumFrameLatency";
        }
      }
LAB_140421106:
      FUN_1403d7600(pcVar10,iVar5);
    }
joined_r0x0001404210e3:
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    if ((iVar5 < 0) || (*(longlong *)(lVar2 + 0x28) == 0)) goto LAB_140421321;
LAB_140421130:
    iVar5 = FUN_1403d7b60();
    if (((iVar5 == 0) || (*(int *)(lVar2 + 0x50) != 3)) ||
       (iVar5 = (**(code **)(**(longlong **)(lVar2 + 0x28) + 0xd8))
                          (*(longlong **)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x422c0)),
       -1 < iVar5)) {
      iVar5 = (**(code **)(**(longlong **)(lVar2 + 0x28) + 0x48))
                        (*(longlong **)(lVar2 + 0x28),0,&DAT_140e15530,(undefined8 *)(lVar2 + 0xb0))
      ;
      if (-1 < iVar5) {
        local_b0 = 0;
        uStack_a8 = 0;
        local_b8 = (longlong *)CONCAT44(4,*(undefined4 *)(lVar2 + 0x60));
        local_c0 = 0;
        (**(code **)(**(longlong **)(lVar2 + 0x68) + 0x48))(*(longlong **)(lVar2 + 0x68),&local_c0);
        (**(code **)(**(longlong **)(lVar2 + 0x30) + 0xa0))
                  (*(longlong **)(lVar2 + 0x30),*(undefined8 *)(lVar2 + 0xb0),&local_b8,local_c0);
        iVar5 = (**(code **)(**(longlong **)(lVar2 + 0x28) + 0x48))
                          (*(longlong **)(lVar2 + 0x28),1,&DAT_140e15530,
                           (undefined8 *)(lVar2 + 0xb8));
        if (-1 < iVar5) {
          local_b0 = 0;
          uStack_a8 = 0;
          local_b8 = (longlong *)CONCAT44(4,*(undefined4 *)(lVar2 + 0x60));
          local_c0 = 0;
          (**(code **)(**(longlong **)(lVar2 + 0x68) + 0x48))
                    (*(longlong **)(lVar2 + 0x68),&local_c0);
          local_c0 = *(uint *)(lVar2 + 0x70) + local_c0;
          (**(code **)(**(longlong **)(lVar2 + 0x30) + 0xa0))
                    (*(longlong **)(lVar2 + 0x30),*(undefined8 *)(lVar2 + 0xb8),&local_b8);
          uVar7 = (**(code **)(**(longlong **)(lVar2 + 0x28) + 0x120))();
          *(undefined4 *)(lVar2 + 200) = uVar7;
          lVar9 = *(longlong *)(param_1 + 0x2c0);
          if (*(longlong *)(lVar9 + 0x422c8) == 0) {
            local_98 = 0;
            (**(code **)(**(longlong **)(lVar9 + 0x68) + 0x48))
                      (*(longlong **)(lVar9 + 0x68),&local_98);
            lVar9 = (ulonglong)(uint)(*(int *)(lVar9 + 0x70) * *(int *)(lVar9 + 200)) + local_98;
          }
          else {
            lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x422c8) + 0x28);
          }
          *(longlong *)(lVar2 + 0x422d0) = lVar9;
          local_d8 = 0;
          (**(code **)(**(longlong **)(lVar2 + 0x48) + 0x170))
                    (*(longlong **)(lVar2 + 0x48),1,lVar2 + 0x422d0,0);
          uStack_90 = *(ulonglong *)(lVar2 + 0xb0 + (longlong)*(int *)(lVar2 + 200) * 8);
          local_98 = 0;
          uStack_80 = 4;
          local_88 = 0xffffffff;
          (**(code **)(**(longlong **)(lVar2 + 0x48) + 0xd0))
                    (*(longlong **)(lVar2 + 0x48),1,&local_98);
          *(undefined1 *)(lVar2 + 0x42310) = 1;
          goto LAB_140421321;
        }
      }
      pcVar10 = "__FUNCTION__, IDXGISwapChain4::GetBuffer";
    }
    else {
      pcVar10 = "__FUNCTION__, IDXGISwapChain4::SetRotation";
    }
  }
  else {
    uStack_d0 = CONCAT44(uStack_d0._4_4_,*(undefined4 *)(lVar2 + 0x54));
    local_d8 = local_d8 & 0xffffffff00000000;
    iVar5 = (**(code **)(*plVar3 + 0x68))(plVar3,0,local_9c,local_a0);
    if (-1 < iVar5) goto LAB_140421130;
    pcVar10 = "__FUNCTION__, IDXGISwapChain::ResizeBuffers";
  }
  FUN_1403d7600(pcVar10,iVar5);
LAB_140421321:
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_f8)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_f8);
}


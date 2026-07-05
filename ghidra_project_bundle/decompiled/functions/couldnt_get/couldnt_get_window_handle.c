/**
 * Function: couldnt_get_window_handle
 * Address:  140422d40
 * Signature: undefined couldnt_get_window_handle(void)
 * Body size: 1487 bytes
 */


undefined8 couldnt_get_window_handle(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  char *pcVar11;
  float fVar12;
  undefined1 auStack_1e8 [32];
  int local_1c8;
  undefined4 *local_1c0;
  undefined8 *local_1b8;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined1 local_1a0 [28];
  uint local_184;
  byte local_17e;
  uint local_148;
  uint local_144;
  uint local_108;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_1e8;
  uVar4 = video_subsystem_has_not_been_initialized(param_2);
  lVar6 = FUN_14014ff10(uVar4,"SDL.window.win32.hwnd",0);
  if (lVar6 == 0) {
    pcVar11 = "Couldn\'t get window handle";
  }
  else {
    sdlrenderercreateoutput_colorspace(param_1,param_3);
    if (*(int *)(param_1 + 0x3e) == 0x120005a0) {
      lVar7 = FUN_140160c70(1,0x178);
      if (lVar7 == 0) {
        uVar10 = 0;
      }
      else {
        cVar2 = direct3dcreate9ex(lVar7,lVar7 + 8);
        if (cVar2 == '\0') {
          FUN_140160cf0(lVar7);
          pcVar11 = "Unable to create Direct3D interface";
          goto LAB_140422f73;
        }
        *param_1 = &LAB_140423310;
        param_1[2] = FUN_140423330;
        param_1[3] = unsupported_yuv_colorspace;
        param_1[0xe] = texture_is_not_currently_available;
        param_1[0xf] = texture_is_not_currently_available;
        param_1[0x11] = texture_is_not_currently_available;
        param_1[0x12] = FUN_140424040;
        param_1[0x13] = &LAB_140424170;
        param_1[0x14] = FUN_140424190;
        param_1[4] = httplib::ClientImpl::vfunction2;
        param_1[5] = httplib::ClientImpl::vfunction2;
        param_1[6] = FUN_1404241d0;
        param_1[7] = FUN_1404241d0;
        param_1[0xb] = FUN_1404243b0;
        param_1[0xc] = &LAB_140424720;
        param_1[0xd] = sdl_failed_to_get_a_vertex_buffer_for_this_di;
        param_1[0x15] = createoffscreenplainsurface;
        param_1[0x16] = FUN_140425080;
        param_1[0x17] = FUN_140425110;
        param_1[0x18] = FUN_140425270;
        param_1[0x19] = that_operation_is_not_supported;
        param_1[0x58] = lVar7;
        *(undefined1 *)(lVar7 + 0x140) = 1;
        *(undefined1 *)(lVar7 + 0x155) = 1;
        *(undefined1 *)(lVar7 + 0x168) = 1;
        *(undefined4 *)(lVar7 + 0x150) = 0x7fffffff;
        *(undefined8 *)(lVar7 + 0x148) = 0;
        *(undefined4 *)(lVar7 + 0x16c) = 0;
        *(undefined8 *)(lVar7 + 0x170) = 0;
        param_1[0x1d] = PTR_s_direct3d_141503708;
        parameter_s_is_invalid(param_1,0x16362004);
        video_subsystem_has_not_been_initialized(param_2,&local_1a4,&local_1a8);
        uVar8 = video_subsystem_has_not_been_initialized(param_2);
        if ((uVar8 & 1) == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = video_subsystem_has_not_been_initialized(param_2);
        }
        uStack_58 = 0;
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
        local_68 = local_1a4;
        uStack_64 = local_1a8;
        uStack_60 = 0x100000000;
        uStack_50 = 1;
        uStack_48 = lVar6;
        if (lVar9 == 0) {
          local_40 = 1;
          uVar4 = 0;
        }
        else {
          iVar5 = *(int *)(lVar9 + 4);
          if (iVar5 < 0x3132564e) {
            if (iVar5 == 0x15151002) {
              uVar4 = 0x17;
            }
            else if (iVar5 == 0x16161804) {
              uVar4 = 0x16;
            }
            else {
              if (iVar5 != 0x16362004) goto LAB_1404232ee;
              uVar4 = 0x15;
            }
          }
          else {
            if (iVar5 < 0x32315659) {
              if ((iVar5 == 0x3132564e) || (iVar5 == 0x3231564e)) {
LAB_140423076:
                uVar4 = 0x32;
                goto LAB_14042307b;
              }
            }
            else if ((iVar5 == 0x32315659) || (iVar5 == 0x56555949)) goto LAB_140423076;
LAB_1404232ee:
            uVar4 = 0;
          }
LAB_14042307b:
          uStack_60 = CONCAT44(1,uVar4);
          fVar12 = ceilf(*(float *)(lVar9 + 0x14));
          uVar4 = (undefined4)(longlong)fVar12;
        }
        local_30 = CONCAT44(0x80000000,uVar4);
        uVar4 = video_subsystem_has_not_been_initialized(param_2);
        uVar4 = invalid_display_index(uVar4);
        *(undefined4 *)(lVar7 + 0x18) = uVar4;
        iVar5 = (**(code **)(**(longlong **)(lVar7 + 8) + 0x70))
                          (*(longlong **)(lVar7 + 8),uVar4,1,local_1a0);
        if (iVar5 < 0) {
          pcVar11 = "GetDeviceCaps()";
        }
        else {
          bVar3 = FUN_1401106d0("SDL_RENDER_DIRECT3D_THREADSAFE",0);
          local_1c8 = (local_184 >> 0xb & 0x20) + (uint)bVar3 * 4 + 0x22;
          puVar1 = (undefined8 *)(lVar7 + 0x10);
          local_1c0 = &local_68;
          local_1b8 = puVar1;
          iVar5 = (**(code **)(**(longlong **)(lVar7 + 8) + 0x80))
                            (*(longlong **)(lVar7 + 8),*(undefined4 *)(lVar7 + 0x18),1,lVar6);
          if (iVar5 < 0) {
            pcVar11 = "CreateDevice()";
          }
          else {
            iVar5 = (**(code **)(*(longlong *)*puVar1 + 0x70))((longlong *)*puVar1,0,&local_70);
            if (iVar5 < 0) {
              pcVar11 = "GetSwapChain()";
            }
            else {
              iVar5 = (**(code **)(*local_70 + 0x48))(local_70,&local_68);
              (**(code **)(*local_70 + 0x10))();
              if (-1 < iVar5) {
                *(undefined4 *)(lVar7 + 0x50) = (undefined4)uStack_38;
                *(undefined4 *)(lVar7 + 0x54) = uStack_38._4_4_;
                *(undefined4 *)(lVar7 + 0x58) = (undefined4)local_30;
                *(undefined4 *)(lVar7 + 0x5c) = local_30._4_4_;
                *(undefined4 *)(lVar7 + 0x40) = (undefined4)uStack_48;
                *(undefined4 *)(lVar7 + 0x44) = uStack_48._4_4_;
                *(undefined4 *)(lVar7 + 0x48) = (undefined4)local_40;
                *(undefined4 *)(lVar7 + 0x4c) = local_40._4_4_;
                *(undefined4 *)(lVar7 + 0x30) = (undefined4)uStack_58;
                *(undefined4 *)(lVar7 + 0x34) = uStack_58._4_4_;
                *(undefined4 *)(lVar7 + 0x38) = (undefined4)uStack_50;
                *(undefined4 *)(lVar7 + 0x3c) = uStack_50._4_4_;
                *(undefined4 *)(lVar7 + 0x20) = local_68;
                *(undefined4 *)(lVar7 + 0x24) = uStack_64;
                *(undefined4 *)(lVar7 + 0x28) = (undefined4)uStack_60;
                *(undefined4 *)(lVar7 + 0x2c) = uStack_60._4_4_;
                (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x38))
                          (*(longlong **)(lVar7 + 0x10),local_1a0);
                if (local_148 < local_144) {
                  local_144 = local_148;
                }
                uVar4 = parameter_s_is_invalid(param_1);
                FUN_14014fc70(uVar4,"SDL.renderer.max_texture_size",local_144);
                if ((local_17e & 2) != 0) {
                  *(undefined1 *)(lVar7 + 0x62) = 1;
                }
                (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x130))
                          (*(longlong **)(lVar7 + 0x10),0,lVar7 + 0x80);
                *(undefined8 *)(lVar7 + 0x88) = 0;
                FUN_140425620(lVar7);
                if (2 < local_108) {
                  iVar5 = FUN_140635300(*(undefined8 *)(lVar7 + 0x10),1,(longlong *)(lVar7 + 0xa0));
                  if (iVar5 < 0) {
                    outofvideomemory("CreatePixelShader()",iVar5);
                  }
                  if (*(longlong *)(lVar7 + 0xa0) != 0) {
                    parameter_s_is_invalid(param_1,0x32315659);
                    parameter_s_is_invalid(param_1,0x56555949);
                  }
                }
                uVar10 = *puVar1;
                uVar4 = parameter_s_is_invalid(param_1);
                FUN_14014faf0(uVar4,"SDL.renderer.d3d9.device",uVar10);
                uVar10 = 1;
                goto LAB_1404232b5;
              }
              pcVar11 = "GetPresentParameters()";
            }
          }
        }
        uVar10 = outofvideomemory(pcVar11,iVar5);
      }
LAB_1404232b5:
      if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_1e8)) {
        return uVar10;
      }
      goto LAB_1404232ff;
    }
    pcVar11 = "Unsupported output colorspace";
  }
LAB_140422f73:
  uVar10 = FUN_1400fbed0(pcVar11);
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_1e8)) {
    return uVar10;
  }
LAB_1404232ff:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_1e8);
}


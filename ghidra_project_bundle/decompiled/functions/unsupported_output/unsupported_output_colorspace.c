/**
 * Function: unsupported_output_colorspace
 * Address:  14043c650
 * Signature: undefined unsupported_output_colorspace(void)
 * Body size: 1289 bytes
 */


ulonglong unsupported_output_colorspace(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  ulonglong local_a4;
  undefined4 local_9c;
  ulonglong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  sdlrenderercreateoutput_colorspace(param_1,param_3);
  if (*(int *)(param_1 + 0x1f0) != 0x120005a0) {
    uVar8 = FUN_1400fbed0("Unsupported output colorspace");
    if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_d8)) {
      return uVar8;
    }
    goto LAB_14043cb4c;
  }
  plVar6 = (longlong *)FUN_140160c70(1,0x188);
  if (plVar6 == (longlong *)0x0) {
LAB_14043cb16:
    uVar8 = 0;
  }
  else {
    *(code **)(param_1 + 0x10) = FUN_1404183c0;
    *(code **)(param_1 + 0x18) = texture_format_s_not_supported_by_sdl_gpu;
    *(code **)(param_1 + 0x70) = update_size_overflow;
    *(code **)(param_1 + 0x88) = FUN_14043d010;
    *(code **)(param_1 + 0x90) = FUN_14043d0a0;
    *(code **)(param_1 + 0x98) = httplib::ClientImpl::vfunction4;
    *(undefined1 **)(param_1 + 0xa0) = &LAB_14043d140;
    *(code **)(param_1 + 0x20) = httplib::ClientImpl::vfunction2;
    *(code **)(param_1 + 0x28) = httplib::ClientImpl::vfunction2;
    *(code **)(param_1 + 0x30) = FUN_140429160;
    *(code **)(param_1 + 0x38) = FUN_140429160;
    *(code **)(param_1 + 0x58) = FUN_14043d160;
    *(undefined1 **)(param_1 + 0x60) = &LAB_14043d730;
    *(code **)(param_1 + 0x68) = render_target_texture_is_null;
    *(code **)(param_1 + 0xa8) = read_size_overflow;
    *(code **)(param_1 + 0xb0) = failed_to_acquire_swapchain_texture_s;
    *(code **)(param_1 + 0xb8) = FUN_14043e190;
    *(code **)(param_1 + 0xc0) = FUN_14043e1f0;
    *(code **)(param_1 + 200) = that_operation_is_not_supported;
    *(longlong **)(param_1 + 0x2c0) = plVar6;
    *(undefined8 *)(param_1 + 0x100) = param_2;
    *(undefined **)(param_1 + 0xe8) = PTR_DAT_141503778;
    uVar8 = 0;
    local_b0 = param_2;
    uVar3 = FUN_1401503a0(param_3,"SDL.gpu.device.create.debugmode",0);
    uVar4 = FUN_1401503a0(param_3,"SDL.gpu.device.create.preferlowpower",0);
    uVar3 = FUN_1401106d0("SDL_RENDER_GPU_DEBUG",uVar3);
    uVar4 = FUN_1401106d0("SDL_RENDER_GPU_LOW_POWER",uVar4);
    FUN_14014fd20(param_3,"SDL.gpu.device.create.debugmode",uVar3);
    FUN_14014fd20(param_3,"SDL.gpu.device.create.preferlowpower",uVar4);
    sdlgpudevicecreateshadersspirv(param_3);
    lVar7 = sdlgpudevicecreatepreferlowpower(param_3);
    *plVar6 = lVar7;
    if (lVar7 != 0) {
      cVar2 = unsupported_gpu_backend(plVar6 + 1,lVar7);
      if ((cVar2 != '\0') && (cVar2 = FUN_140636470(plVar6 + 7,*plVar6), cVar2 != '\0')) {
        uStack_90 = 0;
        local_98 = 0x1000000000001;
        lVar7 = invalid_gpu_device(*plVar6,&local_98);
        plVar6[0xd] = lVar7;
        if (lVar7 != 0) {
          local_9c = 0;
          local_a4 = 0x1000000000000;
          lVar7 = invalid_gpu_device(*plVar6,&local_a4);
          plVar6[0xc] = lVar7;
          if (lVar7 != 0) {
            local_78 = 0;
            uStack_74 = 0;
            uStack_70 = 0;
            uStack_6c = 0;
            local_88 = 0;
            uStack_84 = 0;
            uStack_80 = 0;
            uStack_7c = 0;
            local_98 = 0;
            uStack_90 = 0;
            uStack_8c = 0;
            uStack_68 = 0;
            lVar7 = invalid_gpu_device(*plVar6,&local_98);
            if (lVar7 != 0) {
              plVar6[0x2d] = lVar7;
              uStack_7c = 0;
              local_78 = 0;
              uStack_74 = 0;
              uStack_70 = 0;
              uStack_8c = 0;
              local_88 = 0;
              uStack_84 = 0;
              uStack_80 = 0;
              uStack_6c = 0;
              uStack_68 = 0;
              local_98 = 0x100000001;
              uStack_90 = 1;
              lVar7 = invalid_gpu_device(*plVar6,&local_98);
              if (lVar7 != 0) {
                plVar6[0x2f] = lVar7;
                local_78 = 0;
                uStack_74 = 0;
                uStack_70 = 0;
                uStack_6c = 0;
                local_88 = 0;
                uStack_84 = 0;
                uStack_80 = 0;
                uStack_7c = 0;
                local_98 = 0;
                uStack_90 = 0;
                uStack_8c = 0;
                uStack_68 = 0;
                lVar7 = invalid_gpu_device(*plVar6,&local_98);
                if (lVar7 != 0) {
                  plVar6[0x2e] = lVar7;
                  uStack_7c = 0;
                  local_78 = 0;
                  uStack_74 = 0;
                  uStack_70 = 0;
                  uStack_8c = 0;
                  local_88 = 0;
                  uStack_84 = 0;
                  uStack_80 = 0;
                  uStack_6c = 0;
                  uStack_68 = 0;
                  local_98 = 0x100000001;
                  uStack_90 = 1;
                  lVar7 = invalid_gpu_device(*plVar6,&local_98);
                  uVar1 = local_b0;
                  if (lVar7 != 0) {
                    plVar6[0x30] = lVar7;
                    cVar2 = invalid_gpu_device(*plVar6,local_b0);
                    if (cVar2 != '\0') {
                      plVar6[0xb] = 0;
                      uVar3 = FUN_140150150(param_3,"SDL.renderer.create.present_vsync",0);
                      that_operation_is_not_supported(*plVar6,uVar1,uVar3,(longlong)plVar6 + 0x5c);
                      invalid_gpu_device(*plVar6,uVar1,(int)plVar6[0xb],
                                         *(undefined4 *)((longlong)plVar6 + 0x5c));
                      invalid_gpu_device(*plVar6,1);
                      parameter_s_is_invalid(param_1,0x16762004);
                      parameter_s_is_invalid(param_1,0x16362004);
                      parameter_s_is_invalid(param_1,0x16561804);
                      parameter_s_is_invalid(param_1,0x16161804);
                      uVar3 = parameter_s_is_invalid(param_1);
                      FUN_14014fc70(uVar3,"SDL.renderer.max_texture_size",0x4000);
                      plVar6[0x1f] = 0x3f8000003f800000;
                      plVar6[0x20] = 0x3f8000003f800000;
                      plVar6[0x1c] = 0x3f80000000000000;
                      lVar7 = invalid_gpu_device(*plVar6);
                      plVar6[0x11] = lVar7;
                      video_subsystem_has_not_been_initialized(uVar1,&local_98,&local_a4);
                      uVar3 = invalid_gpu_device(*plVar6,uVar1);
                      uVar5 = FUN_14043e410(plVar6,local_98 & 0xffffffff,local_a4 & 0xffffffff,uVar3
                                           );
                      uVar8 = (ulonglong)uVar5;
                      if ((char)uVar5 != '\0') {
                        lVar7 = *plVar6;
                        uVar3 = parameter_s_is_invalid(param_1);
                        FUN_14014faf0(uVar3,"SDL.renderer.gpu.device",lVar7);
                      }
                      goto LAB_14043cb19;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_14043cb16;
    }
  }
LAB_14043cb19:
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_d8)) {
    return uVar8;
  }
LAB_14043cb4c:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_d8);
}


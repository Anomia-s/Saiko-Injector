/**
 * Function: sdlrenderercreatevulkanphysical_device
 * Address:  140434330
 * Signature: undefined sdlrenderercreatevulkanphysical_device(void)
 * Body size: 4277 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sdlrenderercreatevulkanphysical_device(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  char *pcVar16;
  char *pcVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined8 *puStack_110;
  undefined8 local_108;
  undefined8 *puStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  undefined **local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined8 uStack_90;
  undefined *local_88;
  char **ppcStack_80;
  undefined8 local_78;
  longlong lStack_70;
  ulonglong local_68;
  undefined *puStack_60;
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_148;
  puVar3 = *(undefined8 **)(param_1 + 0x2c0);
  lVar11 = FUN_140144860();
  cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
  local_50 = "VK_LAYER_KHRONOS_validation";
  cVar6 = video_subsystem_has_not_been_initialized(0);
  if (cVar6 == '\0') {
    pcVar17 = "SDL_Vulkan_LoadLibrary failed";
LAB_1404347e7:
    FUN_1400fb830(6,pcVar17);
  }
  else {
    if ((lVar11 == 0) || (pcVar4 = *(code **)(lVar11 + 0x558), pcVar4 == (code *)0x0)) {
      pcVar17 = "vkGetInstanceProcAddr is NULL";
      goto LAB_1404347e7;
    }
    *puVar3 = pcVar4;
    DAT_1416f1628 = (code *)(*pcVar4)(0,"vkCreateInstance");
    if (DAT_1416f1628 == (code *)0x0) {
      cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
      pcVar17 = "vkGetInstanceProcAddr(VK_NULL_HANDLE, \"vkCreateInstance\") failed";
joined_r0x00014043487f:
      if (cVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_1400fb950(6,&DAT_141339891,pcVar17);
      }
      pcVar16 = "%s";
LAB_140434861:
      FUN_1400fbed0(pcVar16,pcVar17);
    }
    else {
      DAT_1416f1660 = (*(code *)*puVar3)(0,"vkEnumerateInstanceExtensionProperties");
      if (DAT_1416f1660 == 0) {
        cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
        pcVar17 = 
        "vkGetInstanceProcAddr(VK_NULL_HANDLE, \"vkEnumerateInstanceExtensionProperties\") failed";
        goto joined_r0x00014043487f;
      }
      DAT_1416f1668 = (*(code *)*puVar3)(0,"vkEnumerateInstanceLayerProperties");
      if (DAT_1416f1668 == 0) {
        cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
        pcVar17 = 
        "vkGetInstanceProcAddr(VK_NULL_HANDLE, \"vkEnumerateInstanceLayerProperties\") failed";
        goto joined_r0x00014043487f;
      }
      *(undefined1 *)(puVar3 + 0x50a) = 0;
      if ((*(int *)(param_1 + 0x1f0) == 0x12002600) || (*(int *)(param_1 + 0x1f0) == 0x12000500)) {
        cVar6 = sdl_render_vulkan_debug("VK_EXT_swapchain_colorspace");
        *(char *)(puVar3 + 0x50a) = cVar6;
        if (cVar6 != '\0') goto LAB_140434439;
        pcVar16 = "Using HDR output but %s not supported";
        pcVar17 = "VK_EXT_swapchain_colorspace";
        goto LAB_140434861;
      }
LAB_140434439:
      uVar7 = sdl_render_vulkan_debug("VK_KHR_get_physical_device_properties2");
      *(undefined1 *)((longlong)puVar3 + 0x2851) = uVar7;
      uVar19 = 0;
      lVar12 = FUN_14014ff10(param_2,"SDL.renderer.create.vulkan.instance",0);
      plVar18 = puVar3 + 1;
      puVar3[1] = lVar12;
      if (lVar12 == 0) {
        local_78 = 0;
        lStack_70 = 0;
        local_88 = (undefined *)0x0;
        ppcStack_80 = (char **)0x0;
        local_98 = 0;
        uStack_94 = 0;
        uStack_a0 = 0;
        local_f8 = 0;
        local_108 = 0;
        puStack_100 = (undefined8 *)0x0;
        local_118 = 0;
        puStack_110 = (undefined8 *)0x0;
        uStack_f0 = 0x40000000000000;
        local_a8 = 1;
        uStack_90 = &local_118;
        local_120 = plVar18;
        lVar12 = FUN_14014e3b0(&local_78);
        lVar13 = FUN_140160c70((int)local_78 + 2,8);
        plVar18 = local_120;
        if ((int)local_78 != 0) {
          uVar14 = 0;
          do {
            *(undefined8 *)(lVar13 + uVar14 * 8) = *(undefined8 *)(lVar12 + uVar14 * 8);
            uVar14 = uVar14 + 1;
            uVar19 = local_78 & 0xffffffff;
          } while (uVar14 < uVar19);
        }
        if (*(char *)(puVar3 + 0x50a) == '\0') {
          cVar6 = *(char *)((longlong)puVar3 + 0x2851);
        }
        else {
          *(char **)(lVar13 + uVar19 * 8) = "VK_EXT_swapchain_colorspace";
          uVar19 = (ulonglong)((int)local_78 + 1U);
          local_78 = CONCAT44(local_78._4_4_,(int)local_78 + 1U);
          cVar6 = *(char *)((longlong)puVar3 + 0x2851);
        }
        if (cVar6 == '\x01') {
          *(char **)(lVar13 + uVar19 * 8) = "VK_KHR_get_physical_device_properties2";
          local_78._4_4_ = (undefined4)(local_78 >> 0x20);
          local_78 = CONCAT44(local_78._4_4_,(int)local_78 + 1);
        }
        lStack_70 = lVar13;
        if (cVar5 != '\0') {
          cVar5 = FUN_14043a020();
          if (cVar5 != '\0') {
            ppcStack_80 = &local_50;
            local_88 = (undefined *)CONCAT44(local_88._4_4_,1);
          }
        }
        iVar9 = (*DAT_1416f1628)(&local_a8,0,plVar18);
        FUN_140160cf0(lVar13);
        if (iVar9 == 0) {
          lVar12 = *plVar18;
          goto LAB_140434474;
        }
        cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
        if (cVar5 != '\0') {
          uVar15 = vk_error_invalid_opaque_capture_address(iVar9);
                    /* WARNING: Subroutine does not return */
          FUN_1400fb950(6,"%s: %s","vkCreateInstance()",uVar15);
        }
        uVar15 = vk_error_invalid_opaque_capture_address(iVar9);
        pcVar17 = "vkCreateInstance()";
        goto LAB_140434a69;
      }
      *(undefined1 *)(puVar3 + 2) = 1;
LAB_140434474:
      DAT_1416f1640 = (code *)(*(code *)*puVar3)(lVar12,"vkCreateDevice");
      if (DAT_1416f1640 == (code *)0x0) {
        cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
        pcVar17 = "vkGetInstanceProcAddr(instance, \"vkCreateDevice\") failed";
LAB_140434bf1:
        if (cVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_1400fb950(6,&DAT_141339891,pcVar17);
        }
        FUN_1400fbed0(&DAT_141339891,pcVar17);
      }
      else {
        DAT_1416f1608 = (*(code *)*puVar3)(puVar3[1],"vkDestroyInstance");
        if (DAT_1416f1608 == 0) {
          cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
          pcVar17 = "vkGetInstanceProcAddr(instance, \"vkDestroyInstance\") failed";
          goto LAB_140434bf1;
        }
        DAT_1416f1600 = (*(code *)*puVar3)(puVar3[1],"vkDestroySurfaceKHR");
        if (DAT_1416f1600 == 0) {
          cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
          pcVar17 = "vkGetInstanceProcAddr(instance, \"vkDestroySurfaceKHR\") failed";
          goto LAB_140434bf1;
        }
        DAT_1416f1670 = (*(code *)*puVar3)(puVar3[1],"vkEnumerateDeviceExtensionProperties");
        if (DAT_1416f1670 == 0) {
          cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
          pcVar17 = 
          "vkGetInstanceProcAddr(instance, \"vkEnumerateDeviceExtensionProperties\") failed";
          goto LAB_140434bf1;
        }
        DAT_1416f1678 = (*(code *)*puVar3)(puVar3[1],"vkEnumeratePhysicalDevices");
        if (DAT_1416f1678 == 0) {
          cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
          pcVar17 = "vkGetInstanceProcAddr(instance, \"vkEnumeratePhysicalDevices\") failed";
          goto LAB_140434bf1;
        }
        DAT_1416f1680 = (*(code *)*puVar3)(puVar3[1],"vkGetDeviceProcAddr");
        if (DAT_1416f1680 == 0) {
          cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
          pcVar17 = "vkGetInstanceProcAddr(instance, \"vkGetDeviceProcAddr\") failed";
          goto LAB_140434bf1;
        }
        DAT_1416f1638 = (code *)(*(code *)*puVar3)(puVar3[1],"vkGetPhysicalDeviceFeatures");
        if (DAT_1416f1638 == (code *)0x0) {
          cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
          pcVar17 = "vkGetInstanceProcAddr(instance, \"vkGetPhysicalDeviceFeatures\") failed";
          goto LAB_140434bf1;
        }
        DAT_1416f1688 = (*(code *)*puVar3)(puVar3[1],"vkGetPhysicalDeviceProperties");
        if (DAT_1416f1688 == 0) {
          cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
          pcVar17 = "vkGetInstanceProcAddr(instance, \"vkGetPhysicalDeviceProperties\") failed";
          goto LAB_140434bf1;
        }
        DAT_1416f1630 = (code *)(*(code *)*puVar3)(puVar3[1],"vkGetPhysicalDeviceMemoryProperties");
        if (DAT_1416f1630 == (code *)0x0) {
          cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
          pcVar17 = 
          "vkGetInstanceProcAddr(instance, \"vkGetPhysicalDeviceMemoryProperties\") failed";
          goto LAB_140434bf1;
        }
        DAT_1416f1690 = (*(code *)*puVar3)(puVar3[1],"vkGetPhysicalDeviceQueueFamilyProperties");
        if (DAT_1416f1690 == 0) {
          cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
          pcVar17 = 
          "vkGetInstanceProcAddr(instance, \"vkGetPhysicalDeviceQueueFamilyProperties\") failed";
          goto LAB_140434bf1;
        }
        DAT_1416f1698 = (*(code *)*puVar3)(puVar3[1],"vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
        if (DAT_1416f1698 == 0) {
          cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
          pcVar17 = 
          "vkGetInstanceProcAddr(instance, \"vkGetPhysicalDeviceSurfaceCapabilitiesKHR\") failed";
          goto LAB_140434bf1;
        }
        DAT_1416f16a0 = (*(code *)*puVar3)(puVar3[1],"vkGetPhysicalDeviceSurfaceFormatsKHR");
        if (DAT_1416f16a0 == 0) {
          cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
          pcVar17 = 
          "vkGetInstanceProcAddr(instance, \"vkGetPhysicalDeviceSurfaceFormatsKHR\") failed";
          goto LAB_140434bf1;
        }
        DAT_1416f16a8 = (*(code *)*puVar3)(puVar3[1],"vkGetPhysicalDeviceSurfacePresentModesKHR");
        if (DAT_1416f16a8 == 0) {
          cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
          pcVar17 = 
          "vkGetInstanceProcAddr(instance, \"vkGetPhysicalDeviceSurfacePresentModesKHR\") failed";
          goto LAB_140434bf1;
        }
        DAT_1416f16b0 = (*(code *)*puVar3)(puVar3[1],"vkGetPhysicalDeviceSurfaceSupportKHR");
        if (DAT_1416f16b0 == 0) {
          cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
          pcVar17 = 
          "vkGetInstanceProcAddr(instance, \"vkGetPhysicalDeviceSurfaceSupportKHR\") failed";
          goto LAB_140434bf1;
        }
        DAT_1416f1508 = (*(code *)*puVar3)(puVar3[1],"vkQueueWaitIdle");
        if (DAT_1416f1508 == 0) {
          cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
          pcVar17 = "vkGetInstanceProcAddr(instance, \"vkQueueWaitIdle\") failed";
          goto LAB_140434bf1;
        }
        _DAT_1416f16b8 = (*(code *)*puVar3)(puVar3[1],"vkGetPhysicalDeviceFeatures2KHR");
        _DAT_1416f16c0 = (*(code *)*puVar3)(puVar3[1],"vkGetPhysicalDeviceFormatProperties2KHR");
        _DAT_1416f16c8 =
             (*(code *)*puVar3)(puVar3[1],"vkGetPhysicalDeviceImageFormatProperties2KHR");
        _DAT_1416f16d0 = (*(code *)*puVar3)(puVar3[1],"vkGetPhysicalDeviceMemoryProperties2KHR");
        _DAT_1416f16d8 = (*(code *)*puVar3)(puVar3[1],"vkGetPhysicalDeviceProperties2KHR");
        lVar12 = FUN_140150150(param_2,"SDL.renderer.create.vulkan.surface",0);
        puVar3[3] = lVar12;
        if (lVar12 == 0) {
          if (*(code **)(lVar11 + 0x1f8) != (code *)0x0) {
            local_128 = puVar3 + 3;
            cVar5 = (**(code **)(lVar11 + 0x1f8))
                              (lVar11,*(undefined8 *)(param_1 + 0x100),*plVar18,0);
            if (cVar5 != '\0') goto LAB_1404346ac;
          }
          FUN_140439470(param_1);
          cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
          if (cVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_1400fb950(6,&DAT_141339891,"Vulkan_CreateSurface() failed");
          }
          pcVar16 = "%s";
          pcVar17 = "Vulkan_CreateSurface() failed";
          goto LAB_140434861;
        }
        *(undefined1 *)(puVar3 + 4) = 1;
LAB_1404346ac:
        lVar11 = FUN_14014ff10(param_2,"SDL.renderer.create.vulkan.physical_device",0);
        puVar3[5] = lVar11;
        if (lVar11 == 0) {
          iVar9 = no_viable_physical_devices_found(puVar3);
          if (iVar9 == 0) goto LAB_1404346eb;
        }
        else {
          (*DAT_1416f1630)(lVar11,puVar3 + 0x6d);
          (*DAT_1416f1638)(puVar3[5],puVar3 + 0xae);
LAB_1404346eb:
          cVar5 = FUN_14014fd70(param_2,"SDL.renderer.create.vulkan.graphics_queue_family_index");
          if (cVar5 != '\0') {
            uVar8 = FUN_140150150(param_2,"SDL.renderer.create.vulkan.graphics_queue_family_index",0
                                 );
            *(undefined4 *)((longlong)puVar3 + 0x66c) = uVar8;
          }
          cVar5 = FUN_14014fd70(param_2,"SDL.renderer.create.vulkan.present_queue_family_index");
          if (cVar5 != '\0') {
            uVar8 = FUN_140150150(param_2,"SDL.renderer.create.vulkan.present_queue_family_index",0)
            ;
            *(undefined4 *)(puVar3 + 0xce) = uVar8;
          }
          if (*(char *)((longlong)puVar3 + 0x2851) == '\x01') {
            cVar5 = sdl_render_vulkan_debug(puVar3);
            if (cVar5 != '\0') {
              *(undefined1 *)((longlong)puVar3 + 0x2852) = 1;
            }
          }
          lVar11 = FUN_14014ff10(param_2,"SDL.renderer.create.vulkan.device",0);
          puVar3[0xcc] = lVar11;
          if (lVar11 == 0) {
            local_c8 = 0;
            puStack_60 = (undefined *)0x0;
            local_78 = 0;
            lStack_70 = 0;
            ppcStack_80 = (char **)0x0;
            local_98 = 0;
            uStack_90._4_4_ = 0;
            uStack_a0 = 0;
            puStack_110 = (undefined8 *)0x0;
            local_f8 = 0;
            uStack_f0 = 0;
            local_118 = 3;
            puStack_100 = &local_a8;
            local_d8 = 0;
            bVar1 = *(byte *)((longlong)puVar3 + 0x2852);
            local_e8 = (ulonglong)((uint)bVar1 * 4 + 1);
            local_e0 = &PTR_s_VK_KHR_swapchain_140e15ad0;
            local_a8 = 2;
            uStack_94 = *(uint *)((longlong)puVar3 + 0x66c);
            uStack_90._0_4_ = 1;
            local_88 = &DAT_140e15af8;
            local_108 = 1;
            uVar2 = *(uint *)(puVar3 + 0xce);
            if (uVar2 != uStack_94) {
              ppcStack_80 = (char **)0x2;
              lStack_70 = (ulonglong)uVar2 << 0x20;
              puStack_60 = &DAT_140e15af8;
              local_108 = 2;
            }
            local_68 = (ulonglong)(uVar2 != uStack_94);
            local_108 = local_108 << 0x20;
            if (bVar1 != 0) {
              local_c8 = 0x3b9d2b64;
              puStack_110 = &local_c8;
            }
            local_b8 = (ulonglong)(bVar1 != 0);
            uStack_c0 = 0;
            iVar10 = (*DAT_1416f1640)(puVar3[5],&local_118,0,puVar3 + 0xcc);
            if (iVar10 == 0) goto LAB_140434781;
            cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
            if (cVar5 != '\0') {
              uVar15 = vk_error_invalid_opaque_capture_address(iVar10);
                    /* WARNING: Subroutine does not return */
              FUN_1400fb950(6,"%s: %s","vkCreateDevice()",uVar15);
            }
            uVar15 = vk_error_invalid_opaque_capture_address(iVar10);
            FUN_1400fbed0("%s: %s","vkCreateDevice()",uVar15);
LAB_140434e63:
            FUN_140439470(param_1);
            goto LAB_1404347f7;
          }
          *(undefined1 *)(puVar3 + 0xcd) = 1;
LAB_140434781:
          cVar5 = sdl_render_vulkan_debug(puVar3);
          if (cVar5 != '\0') {
            (*DAT_1416f1648)(puVar3[0xcc],*(undefined4 *)((longlong)puVar3 + 0x66c),0,puVar3 + 0xca)
            ;
            iVar9 = *(int *)((longlong)puVar3 + 0x66c);
            if (iVar9 == *(int *)(puVar3 + 0xce)) {
              puVar3[0xcb] = puVar3[0xca];
            }
            else {
              (*DAT_1416f1648)(puVar3[0xcc],*(int *)(puVar3 + 0xce),0);
              iVar9 = *(int *)((longlong)puVar3 + 0x66c);
            }
            puStack_110 = (undefined8 *)0x0;
            local_118 = 0x27;
            local_108 = CONCAT44(iVar9,2);
            iVar9 = (*DAT_1416f1650)(puVar3[0xcc],&local_118,0,puVar3 + 0xd0);
            if (iVar9 == 0) {
              iVar9 = sdl_render_vulkan_debug(puVar3);
              if (iVar9 != 0) {
                FUN_140439470(param_1);
                iVar10 = 0;
                goto LAB_1404347f7;
              }
              uStack_a0 = 0;
              local_98 = 0;
              uStack_94 = 0;
              uStack_90._0_4_ = 0;
              uStack_90._4_4_ = 0;
              local_88 = (undefined *)0x0;
              local_a8 = 0x10;
              FUN_140635ef0(0,&local_88,&uStack_90);
              iVar9 = (*DAT_1416f1658)(puVar3[0xcc],&local_a8,0,puVar3 + 0xe3);
              if (iVar9 == 0) {
                FUN_140635f10(0,&local_88,&uStack_90);
                iVar9 = (*DAT_1416f1658)(puVar3[0xcc],&local_a8,0,puVar3 + 0xe6);
                if (iVar9 == 0) {
                  uStack_a0 = 0;
                  local_98 = 0;
                  uStack_94 = 0;
                  uStack_90._0_4_ = 0;
                  uStack_90._4_4_ = 0;
                  local_88 = (undefined *)0x0;
                  local_a8 = 0x10;
                  FUN_140635ef0(1,&local_88,&uStack_90);
                  iVar9 = (*DAT_1416f1658)(puVar3[0xcc],&local_a8,0,puVar3 + 0xe4);
                  if (iVar9 == 0) {
                    FUN_140635f10(1,&local_88,&uStack_90);
                    iVar9 = (*DAT_1416f1658)(puVar3[0xcc],&local_a8,0,puVar3 + 0xe7);
                    if (iVar9 == 0) {
                      uStack_a0 = 0;
                      local_98 = 0;
                      uStack_94 = 0;
                      uStack_90._0_4_ = 0;
                      uStack_90._4_4_ = 0;
                      local_88 = (undefined *)0x0;
                      local_a8 = 0x10;
                      FUN_140635ef0(2,&local_88,&uStack_90);
                      iVar9 = (*DAT_1416f1658)(puVar3[0xcc],&local_a8,0,puVar3 + 0xe5);
                      if (iVar9 == 0) {
                        FUN_140635f10(2,&local_88,&uStack_90);
                        iVar9 = (*DAT_1416f1658)(puVar3[0xcc],&local_a8,0,puVar3 + 0xe8);
                        if (iVar9 == 0) {
                          iVar10 = sdl_render_vulkan_debug(puVar3,0,puVar3 + 0xe9,puVar3 + 0xea);
                          if (iVar10 != 0) goto LAB_140434e63;
                          lVar11 = 0;
                          do {
                            FUN_140438d20(puVar3,lVar11,0x10000);
                            lVar11 = lVar11 + 1;
                          } while (lVar11 != 0x100);
                          uStack_a0 = 0;
                          lStack_70 = 0;
                          puStack_60 = (undefined *)0x0;
                          local_98 = 0;
                          uStack_94 = 0;
                          uStack_90._4_4_ = 0;
                          local_a8 = 0x1f;
                          ppcStack_80 = (char **)0x2;
                          local_78 = 0x3f80000000000000;
                          local_68 = 0x447a000000000000;
                          uStack_90._0_4_ = 0;
                          local_88 = (undefined *)0x200000002;
                          iVar9 = (*DAT_1416f1438)(puVar3[0xcc],&local_a8,0,puVar3 + 0x500);
                          if (iVar9 == 0) {
                            uStack_94 = 0;
                            uStack_90._0_4_ = 0;
                            local_88 = (undefined *)0x0;
                            iVar9 = (*DAT_1416f1438)(puVar3[0xcc],&local_a8,0,puVar3 + 0x501);
                            if (iVar9 == 0) {
                              uStack_94 = 1;
                              uStack_90._0_4_ = 1;
                              local_88 = (undefined *)0x200000002;
                              iVar9 = (*DAT_1416f1438)(puVar3[0xcc],&local_a8,0,puVar3 + 0x502);
                              if (iVar9 == 0) {
                                uStack_94 = 1;
                                uStack_90._0_4_ = 1;
                                local_88 = (undefined *)0x0;
                                iVar10 = 0;
                                iVar9 = (*DAT_1416f1438)(puVar3[0xcc],&local_a8,0,puVar3 + 0x503);
                                if (iVar9 == 0) {
                                  uVar8 = parameter_s_is_invalid(param_1);
                                  FUN_14014faf0(uVar8,"SDL.renderer.vulkan.instance",puVar3[1]);
                                  FUN_14014fc70(uVar8,"SDL.renderer.vulkan.surface",puVar3[3]);
                                  FUN_14014faf0(uVar8,"SDL.renderer.vulkan.physical_device",
                                                puVar3[5]);
                                  FUN_14014faf0(uVar8,"SDL.renderer.vulkan.device",puVar3[0xcc]);
                                  FUN_14014fc70(uVar8,
                                                "SDL.renderer.vulkan.graphics_queue_family_index",
                                                *(undefined4 *)((longlong)puVar3 + 0x66c));
                                  FUN_14014fc70(uVar8,
                                                "SDL.renderer.vulkan.present_queue_family_index",
                                                *(undefined4 *)(puVar3 + 0xce));
                                  goto LAB_1404347f7;
                                }
                              }
                            }
                          }
                          FUN_140439470(param_1);
                          cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
                          if (cVar5 != '\0') {
                            uVar15 = vk_error_invalid_opaque_capture_address(iVar9);
                    /* WARNING: Subroutine does not return */
                            FUN_1400fb950(6,"%s: %s","vkCreateSampler()",uVar15);
                          }
                          uVar15 = vk_error_invalid_opaque_capture_address(iVar9);
                          pcVar17 = "vkCreateSampler()";
                          goto LAB_140434a69;
                        }
                      }
                    }
                  }
                }
              }
              FUN_140439470(param_1);
              cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
              if (cVar5 != '\0') {
                uVar15 = vk_error_invalid_opaque_capture_address(iVar9);
                    /* WARNING: Subroutine does not return */
                FUN_1400fb950(6,"%s: %s","vkCreateShaderModule()",uVar15);
              }
              uVar15 = vk_error_invalid_opaque_capture_address(iVar9);
              pcVar17 = "vkCreateShaderModule()";
            }
            else {
              FUN_140439470(param_1);
              cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
              if (cVar5 != '\0') {
                uVar15 = vk_error_invalid_opaque_capture_address(iVar9);
                    /* WARNING: Subroutine does not return */
                FUN_1400fb950(6,"%s: %s","vkCreateCommandPool()",uVar15);
              }
              uVar15 = vk_error_invalid_opaque_capture_address(iVar9);
              pcVar17 = "vkCreateCommandPool()";
            }
LAB_140434a69:
            FUN_1400fbed0("%s: %s",pcVar17,uVar15);
            iVar10 = iVar9;
            goto LAB_1404347f7;
          }
        }
      }
      FUN_140439470(param_1);
    }
  }
  iVar10 = -0xd;
LAB_1404347f7:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_148)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_148);
  }
  return iVar10;
}


/**
 * Function: sdl_vulkan_getvkgetinstanceprocaddr_s
 * Address:  1403dc7c0
 * Signature: undefined sdl_vulkan_getvkgetinstanceprocaddr_s(void)
 * Body size: 4556 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 sdl_vulkan_getvkgetinstanceprocaddr_s(undefined8 *param_1)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  void *_Src;
  void *_Dst;
  longlong lVar7;
  undefined8 uVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint *puVar21;
  longlong lVar22;
  undefined1 auStack_4b8 [32];
  ulonglong local_498;
  undefined8 local_490;
  longlong local_488;
  longlong local_480;
  int local_474;
  int local_470;
  uint local_46c;
  undefined4 local_468 [2];
  undefined8 local_460;
  undefined8 uStack_458;
  undefined4 local_450;
  undefined *local_448;
  undefined8 local_440;
  int local_3d4;
  uint local_388;
  uint local_384 [3];
  undefined8 local_378;
  int local_370;
  undefined4 *local_368;
  undefined4 local_360;
  undefined **local_358;
  uint local_350;
  void *local_348;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_4b8;
  FUN_140154f00("MVK_CONFIG_FULL_IMAGE_VIEW_SWIZZLE","1",1);
  cVar4 = video_subsystem_has_not_been_initialized(0);
  if (cVar4 == '\0') {
    pcVar13 = "Vulkan: SDL_Vulkan_LoadLibrary failed!";
LAB_1403dc882:
    FUN_1400fb8f0(9,pcVar13);
  }
  else {
    DAT_1416f1408 = (code *)video_subsystem_has_not_been_initialized();
    if (DAT_1416f1408 != (code *)0x0) {
      DAT_1416f1410 = (code *)(*DAT_1416f1408)(0,"vkCreateInstance");
      if (DAT_1416f1410 == (code *)0x0) {
        pcVar13 = "vkGetInstanceProcAddr(VK_NULL_HANDLE, \"vkCreateInstance\") failed";
      }
      else {
        DAT_1416f1418 = (code *)(*DAT_1416f1408)(0,"vkEnumerateInstanceExtensionProperties");
        if (DAT_1416f1418 == (code *)0x0) {
          pcVar13 = 
          "vkGetInstanceProcAddr(VK_NULL_HANDLE, \"vkEnumerateInstanceExtensionProperties\") failed"
          ;
        }
        else {
          DAT_1416f1420 = (code *)(*DAT_1416f1408)(0,"vkEnumerateInstanceLayerProperties");
          if (DAT_1416f1420 != (code *)0x0) goto LAB_1403dc8a7;
          pcVar13 = 
          "vkGetInstanceProcAddr(VK_NULL_HANDLE, \"vkEnumerateInstanceLayerProperties\") failed";
        }
      }
      goto LAB_1403dc882;
    }
    uVar8 = out_of_memory();
    FUN_1400fb8f0(9,"SDL_Vulkan_GetVkGetInstanceProcAddr(): %s",uVar8);
  }
LAB_1403dc8a7:
  local_468[0] = 0;
  local_460 = 0;
  uStack_458 = 0;
  local_450 = 0;
  local_448 = &DAT_141361f65;
  local_440 = 0x400000002dce94;
  _Src = (void *)FUN_14014e3b0(&local_388);
  if (_Src == (void *)0x0) {
    uVar8 = out_of_memory();
                    /* WARNING: Subroutine does not return */
    FUN_1400fb950(9,"SDL_Vulkan_GetInstanceExtensions(): getExtensionCount: %s",uVar8);
  }
  _Dst = (void *)FUN_140160c40((ulonglong)(local_388 + 4) << 3);
  memcpy(_Dst,_Src,(ulonglong)local_388 << 3);
  uVar15 = local_388;
  uVar18 = (ulonglong)local_388;
  local_388 = local_388 + 1;
  *(char **)((longlong)_Dst + uVar18 * 8) = "VK_KHR_get_physical_device_properties2";
  (*DAT_1416f1418)(0,local_384,0);
  lVar7 = FUN_140160c40((ulonglong)local_384[0] * 0x104);
  (*DAT_1416f1418)(0,local_384,lVar7);
  bVar3 = true;
  if (uVar15 + 1 != 0) {
    uVar18 = 0;
    do {
      uVar16 = (ulonglong)local_384[0];
      if (uVar16 == 0) {
        bVar3 = false;
        goto LAB_1403dcabb;
      }
      uVar8 = *(undefined8 *)((longlong)_Dst + uVar18 * 8);
      lVar22 = lVar7;
      while (iVar6 = FUN_1400fd200(uVar8,lVar22), iVar6 != 0) {
        lVar22 = lVar22 + 0x104;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) {
          bVar3 = false;
          goto LAB_1403dca04;
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar15 + 1);
    bVar3 = true;
  }
LAB_1403dca04:
  uVar18 = (ulonglong)local_384[0];
  lVar22 = lVar7;
  if (uVar18 == 0) {
LAB_1403dcabb:
    *(undefined1 *)((longlong)param_1 + 0x58a) = 0;
  }
  else {
    do {
      iVar6 = FUN_1400fd200("VK_EXT_debug_utils",lVar22);
      if (iVar6 == 0) {
        *(undefined1 *)((longlong)param_1 + 0x58a) = 1;
        if (local_384[0] == 0) goto LAB_1403dcac2;
        goto LAB_1403dca67;
      }
      uVar18 = uVar18 - 1;
      lVar22 = lVar22 + 0x104;
    } while (uVar18 != 0);
    *(undefined1 *)((longlong)param_1 + 0x58a) = 0;
    if (local_384[0] != 0) {
LAB_1403dca67:
      uVar18 = (ulonglong)local_384[0];
      lVar22 = lVar7;
      do {
        iVar6 = FUN_1400fd200("VK_EXT_swapchain_colorspace",lVar22);
        if (iVar6 == 0) {
          uVar5 = 1;
          goto LAB_1403dcac4;
        }
        lVar22 = lVar22 + 0x104;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
LAB_1403dcac2:
  uVar5 = 0;
LAB_1403dcac4:
  *(undefined1 *)((longlong)param_1 + 0x58b) = uVar5;
  FUN_140160cf0(lVar7);
  if (!bVar3) {
    FUN_140160cf0(_Dst);
    if (*(char *)((longlong)param_1 + 0x57c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,&DAT_141339891,"Required Vulkan instance extensions not supported");
    }
    FUN_1400fbed0(&DAT_141339891,"Required Vulkan instance extensions not supported");
    pcVar13 = "Vulkan: Could not create Vulkan instance";
    goto LAB_1403dd91d;
  }
  if (*(char *)((longlong)param_1 + 0x58a) == '\x01') {
    uVar18 = (ulonglong)local_388;
    local_388 = local_388 + 1;
    *(char **)((longlong)_Dst + uVar18 * 8) = "VK_EXT_debug_utils";
    cVar4 = *(char *)((longlong)param_1 + 0x58b);
  }
  else {
    FUN_1400fb8f0(9,"%s is not supported!","VK_EXT_debug_utils");
    cVar4 = *(char *)((longlong)param_1 + 0x58b);
  }
  if (cVar4 == '\x01') {
    uVar18 = (ulonglong)local_388;
    local_388 = local_388 + 1;
    *(char **)((longlong)_Dst + uVar18 * 8) = "VK_EXT_swapchain_colorspace";
  }
  local_384[1] = 1;
  local_378 = 0;
  local_370 = 0;
  local_368 = local_468;
  local_358 = &PTR_s_VK_LAYER_KHRONOS_validation_141503588;
  local_350 = local_388;
  local_348 = _Dst;
  if (*(char *)((longlong)param_1 + 0x57c) == '\x01') {
    local_360 = 1;
    (*DAT_1416f1420)(local_384,0);
    lVar7 = FUN_140160c40((ulonglong)local_384[0] * 0x208);
    (*DAT_1416f1420)(local_384,lVar7);
    if (local_384[0] != 0) {
      uVar18 = 0;
      lVar22 = lVar7;
      do {
        iVar6 = FUN_1400fd200(PTR_s_VK_LAYER_KHRONOS_validation_141503588,lVar22);
        if (iVar6 == 0) {
          FUN_140160cf0(lVar7);
          FUN_1400fb890(9,"Validation layers enabled, expect debug level performance!");
          goto LAB_1403dcc91;
        }
        uVar18 = uVar18 + 1;
        lVar22 = lVar22 + 0x208;
      } while (uVar18 < local_384[0]);
    }
    FUN_140160cf0(lVar7);
    FUN_1400fb8f0(9,"Validation layers not found, continuing without validation");
  }
  local_360 = 0;
LAB_1403dcc91:
  iVar6 = (*DAT_1416f1410)(local_384 + 1,0,param_1);
  FUN_140160cf0(_Dst);
  if (iVar6 != 0) {
    if (*(char *)((longlong)param_1 + 0x57c) != '\x01') {
      if (iVar6 < -1000000000) {
        if (iVar6 < -0x3b9acdec) {
          if (iVar6 == -0x3b9eae18) {
            pcVar13 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
          }
          else {
            if (iVar6 != -0x3b9bd788) goto switchD_1403dd16e_caseD_fffffff5;
            pcVar13 = "VK_ERROR_OUT_OF_POOL_MEMORY";
          }
        }
        else if (iVar6 == -0x3b9acdec) {
          pcVar13 = "VK_ERROR_OUT_OF_DATE_KHR";
        }
        else {
          if (iVar6 != -0x3b9aca01) goto switchD_1403dd16e_caseD_fffffff5;
          pcVar13 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
        }
      }
      else {
        switch(iVar6) {
        case -0xc:
          pcVar13 = "VK_ERROR_FRAGMENTED_POOL";
          break;
        case -0xb:
        case -5:
switchD_1403dd16e_caseD_fffffff5:
          pcVar13 = "Unhandled VkResult!";
          break;
        case -10:
          pcVar13 = "VK_ERROR_TOO_MANY_OBJECTS";
          break;
        case -9:
          pcVar13 = "VK_ERROR_INCOMPATIBLE_DRIVER";
          break;
        case -8:
          pcVar13 = "VK_ERROR_FEATURE_NOT_PRESENT";
          break;
        case -7:
          pcVar13 = "VK_ERROR_EXTENSION_NOT_PRESENT";
          break;
        case -6:
          pcVar13 = "VK_ERROR_LAYER_NOT_PRESENT";
          break;
        case -4:
          pcVar13 = "VK_ERROR_DEVICE_LOST";
          break;
        case -3:
          pcVar13 = "VK_ERROR_INITIALIZATION_FAILED";
          break;
        case -2:
          pcVar13 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
          break;
        case -1:
          pcVar13 = "VK_ERROR_OUT_OF_HOST_MEMORY";
          break;
        default:
          if (iVar6 == -1000000000) {
            pcVar13 = "VK_ERROR_SURFACE_LOST_KHR";
          }
          else {
            if (iVar6 != 0x3b9acdeb) goto switchD_1403dd16e_caseD_fffffff5;
            pcVar13 = "VK_SUBOPTIMAL_KHR";
          }
        }
      }
      FUN_1400fbed0("%s %s","vkCreateInstance",pcVar13);
      pcVar13 = "Vulkan: Could not create Vulkan instance";
      goto LAB_1403dd91d;
    }
    if (iVar6 < -1000000000) {
      if (iVar6 < -0x3b9acdec) {
        if (iVar6 == -0x3b9eae18) {
          pcVar13 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
          goto LAB_1403dd138;
        }
        if (iVar6 == -0x3b9bd788) {
          pcVar13 = "VK_ERROR_OUT_OF_POOL_MEMORY";
          goto LAB_1403dd138;
        }
      }
      else {
        if (iVar6 == -0x3b9acdec) {
          pcVar13 = "VK_ERROR_OUT_OF_DATE_KHR";
          goto LAB_1403dd138;
        }
        if (iVar6 == -0x3b9aca01) {
          pcVar13 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
          goto LAB_1403dd138;
        }
      }
      goto switchD_1403dcce5_caseD_fffffff5;
    }
    switch(iVar6) {
    case -0xc:
      pcVar13 = "VK_ERROR_FRAGMENTED_POOL";
      break;
    case -10:
      pcVar13 = "VK_ERROR_TOO_MANY_OBJECTS";
      break;
    case -9:
      pcVar13 = "VK_ERROR_INCOMPATIBLE_DRIVER";
      break;
    case -8:
      pcVar13 = "VK_ERROR_FEATURE_NOT_PRESENT";
      break;
    case -7:
      pcVar13 = "VK_ERROR_EXTENSION_NOT_PRESENT";
      break;
    case -6:
      pcVar13 = "VK_ERROR_LAYER_NOT_PRESENT";
      break;
    case -4:
      pcVar13 = "VK_ERROR_DEVICE_LOST";
      break;
    case -3:
      pcVar13 = "VK_ERROR_INITIALIZATION_FAILED";
      break;
    case -2:
      pcVar13 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
      break;
    case -1:
      pcVar13 = "VK_ERROR_OUT_OF_HOST_MEMORY";
      break;
    default:
      if (iVar6 == -1000000000) {
        pcVar13 = "VK_ERROR_SURFACE_LOST_KHR";
        break;
      }
      if (iVar6 == 0x3b9acdeb) {
        pcVar13 = "VK_SUBOPTIMAL_KHR";
        break;
      }
    case -0xb:
    case -5:
switchD_1403dcce5_caseD_fffffff5:
      pcVar13 = "Unhandled VkResult!";
    }
LAB_1403dd138:
                    /* WARNING: Subroutine does not return */
    FUN_1400fb950(9,"%s %s","vkCreateInstance",pcVar13);
  }
  uVar8 = (*DAT_1416f1408)(*param_1,"vkGetDeviceProcAddr");
  param_1[0x120] = uVar8;
  uVar8 = (*DAT_1416f1408)(*param_1,"vkCreateDevice");
  param_1[0x121] = uVar8;
  uVar8 = (*DAT_1416f1408)(*param_1,"vkDestroyInstance");
  param_1[0x122] = uVar8;
  uVar8 = (*DAT_1416f1408)(*param_1,"vkEnumerateDeviceExtensionProperties");
  param_1[0x123] = uVar8;
  uVar8 = (*DAT_1416f1408)(*param_1,"vkEnumeratePhysicalDevices");
  param_1[0x124] = uVar8;
  uVar8 = (*DAT_1416f1408)(*param_1,"vkGetPhysicalDeviceFeatures");
  param_1[0x125] = uVar8;
  uVar8 = (*DAT_1416f1408)(*param_1,"vkGetPhysicalDeviceQueueFamilyProperties");
  param_1[0x126] = uVar8;
  uVar8 = (*DAT_1416f1408)(*param_1,"vkGetPhysicalDeviceFormatProperties");
  param_1[0x127] = uVar8;
  uVar8 = (*DAT_1416f1408)(*param_1,"vkGetPhysicalDeviceImageFormatProperties");
  param_1[0x128] = uVar8;
  uVar8 = (*DAT_1416f1408)(*param_1,"vkGetPhysicalDeviceMemoryProperties");
  param_1[0x129] = uVar8;
  uVar8 = (*DAT_1416f1408)(*param_1,"vkGetPhysicalDeviceProperties");
  param_1[0x12a] = uVar8;
  uVar8 = (*DAT_1416f1408)(*param_1,"vkGetPhysicalDeviceProperties2KHR");
  param_1[299] = uVar8;
  uVar8 = (*DAT_1416f1408)(*param_1,"vkDestroySurfaceKHR");
  param_1[300] = uVar8;
  uVar8 = (*DAT_1416f1408)(*param_1,"vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
  param_1[0x12d] = uVar8;
  uVar8 = (*DAT_1416f1408)(*param_1,"vkGetPhysicalDeviceSurfaceFormatsKHR");
  param_1[0x12e] = uVar8;
  uVar8 = (*DAT_1416f1408)(*param_1,"vkGetPhysicalDeviceSurfacePresentModesKHR");
  param_1[0x12f] = uVar8;
  uVar8 = (*DAT_1416f1408)(*param_1,"vkGetPhysicalDeviceSurfaceSupportKHR");
  param_1[0x130] = uVar8;
  uVar8 = (*DAT_1416f1408)(*param_1,"vkCmdBeginDebugUtilsLabelEXT");
  param_1[0x131] = uVar8;
  uVar8 = (*DAT_1416f1408)(*param_1,"vkSetDebugUtilsObjectNameEXT");
  param_1[0x132] = uVar8;
  uVar8 = (*DAT_1416f1408)(*param_1,"vkCmdEndDebugUtilsLabelEXT");
  param_1[0x133] = uVar8;
  uVar8 = (*DAT_1416f1408)(*param_1,"vkCmdInsertDebugUtilsLabelEXT");
  param_1[0x134] = uVar8;
  iVar6 = (*(code *)param_1[0x124])(*param_1,&local_46c,0);
  if (iVar6 != 0) {
    if (*(char *)((longlong)param_1 + 0x57c) != '\x01') {
      if (iVar6 < -1000000000) {
        if (iVar6 < -0x3b9acdec) {
          if (iVar6 == -0x3b9eae18) {
            pcVar13 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
          }
          else {
            if (iVar6 != -0x3b9bd788) goto switchD_1403dd374_caseD_fffffff5;
            pcVar13 = "VK_ERROR_OUT_OF_POOL_MEMORY";
          }
        }
        else if (iVar6 == -0x3b9acdec) {
          pcVar13 = "VK_ERROR_OUT_OF_DATE_KHR";
        }
        else {
          if (iVar6 != -0x3b9aca01) goto switchD_1403dd374_caseD_fffffff5;
          pcVar13 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
        }
      }
      else {
        switch(iVar6) {
        case -0xc:
          pcVar13 = "VK_ERROR_FRAGMENTED_POOL";
          break;
        case -0xb:
        case -5:
switchD_1403dd374_caseD_fffffff5:
          pcVar13 = "Unhandled VkResult!";
          break;
        case -10:
          pcVar13 = "VK_ERROR_TOO_MANY_OBJECTS";
          break;
        case -9:
          pcVar13 = "VK_ERROR_INCOMPATIBLE_DRIVER";
          break;
        case -8:
          pcVar13 = "VK_ERROR_FEATURE_NOT_PRESENT";
          break;
        case -7:
          pcVar13 = "VK_ERROR_EXTENSION_NOT_PRESENT";
          break;
        case -6:
          pcVar13 = "VK_ERROR_LAYER_NOT_PRESENT";
          break;
        case -4:
          pcVar13 = "VK_ERROR_DEVICE_LOST";
          break;
        case -3:
          pcVar13 = "VK_ERROR_INITIALIZATION_FAILED";
          break;
        case -2:
          pcVar13 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
          break;
        case -1:
          pcVar13 = "VK_ERROR_OUT_OF_HOST_MEMORY";
          break;
        default:
          if (iVar6 == -1000000000) {
            pcVar13 = "VK_ERROR_SURFACE_LOST_KHR";
          }
          else {
            if (iVar6 != 0x3b9acdeb) goto switchD_1403dd374_caseD_fffffff5;
            pcVar13 = "VK_SUBOPTIMAL_KHR";
          }
        }
      }
      FUN_1400fbed0("%s %s","vkEnumeratePhysicalDevices",pcVar13);
      goto LAB_1403dd916;
    }
    if (iVar6 < -1000000000) {
      if (iVar6 < -0x3b9acdec) {
        if (iVar6 == -0x3b9eae18) {
          pcVar13 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
          goto LAB_1403dd33e;
        }
        if (iVar6 == -0x3b9bd788) {
          pcVar13 = "VK_ERROR_OUT_OF_POOL_MEMORY";
          goto LAB_1403dd33e;
        }
      }
      else {
        if (iVar6 == -0x3b9acdec) {
          pcVar13 = "VK_ERROR_OUT_OF_DATE_KHR";
          goto LAB_1403dd33e;
        }
        if (iVar6 == -0x3b9aca01) {
          pcVar13 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
          goto LAB_1403dd33e;
        }
      }
      goto switchD_1403dcf20_caseD_fffffff5;
    }
    switch(iVar6) {
    case -0xc:
      pcVar13 = "VK_ERROR_FRAGMENTED_POOL";
      break;
    case -10:
      pcVar13 = "VK_ERROR_TOO_MANY_OBJECTS";
      break;
    case -9:
      pcVar13 = "VK_ERROR_INCOMPATIBLE_DRIVER";
      break;
    case -8:
      pcVar13 = "VK_ERROR_FEATURE_NOT_PRESENT";
      break;
    case -7:
      pcVar13 = "VK_ERROR_EXTENSION_NOT_PRESENT";
      break;
    case -6:
      pcVar13 = "VK_ERROR_LAYER_NOT_PRESENT";
      break;
    case -4:
      pcVar13 = "VK_ERROR_DEVICE_LOST";
      break;
    case -3:
      pcVar13 = "VK_ERROR_INITIALIZATION_FAILED";
      break;
    case -2:
      pcVar13 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
      break;
    case -1:
      pcVar13 = "VK_ERROR_OUT_OF_HOST_MEMORY";
      break;
    default:
      if (iVar6 == -1000000000) {
        pcVar13 = "VK_ERROR_SURFACE_LOST_KHR";
        break;
      }
      if (iVar6 == 0x3b9acdeb) {
        pcVar13 = "VK_SUBOPTIMAL_KHR";
        break;
      }
    case -0xb:
    case -5:
switchD_1403dcf20_caseD_fffffff5:
      pcVar13 = "Unhandled VkResult!";
    }
LAB_1403dd33e:
                    /* WARNING: Subroutine does not return */
    FUN_1400fb950(9,"%s %s","vkEnumeratePhysicalDevices",pcVar13);
  }
  if ((ulonglong)local_46c == 0) {
    FUN_1400fb890(9,"Failed to find any GPUs with Vulkan support");
    goto LAB_1403dd916;
  }
  lVar22 = FUN_140160c40((ulonglong)local_46c << 3);
  lVar7 = FUN_140160c40((ulonglong)local_46c * 6);
  iVar6 = (*(code *)param_1[0x124])(*param_1);
  if (iVar6 < -1000000000) {
    if (iVar6 < -0x3b9acdec) {
      if (iVar6 == -0x3b9eae18) {
        pcVar13 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
      }
      else {
        if (iVar6 != -0x3b9bd788) goto switchD_1403dcfae_caseD_fffffff5;
        pcVar13 = "VK_ERROR_OUT_OF_POOL_MEMORY";
      }
    }
    else if (iVar6 == -0x3b9acdec) {
      pcVar13 = "VK_ERROR_OUT_OF_DATE_KHR";
    }
    else {
      if (iVar6 != -0x3b9aca01) goto switchD_1403dcfae_caseD_fffffff5;
      pcVar13 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
    }
    goto LAB_1403dd8f5;
  }
  switch(iVar6) {
  case 0:
    goto switchD_1403dcfae_caseD_0;
  case 5:
    FUN_1400fb8f0(9);
switchD_1403dcfae_caseD_0:
    if (local_46c != 0) {
      uVar16 = 0;
      uVar18 = 0;
      iVar12 = 0;
      local_488 = lVar7;
      local_480 = lVar22;
      iVar6 = -1;
      do {
        local_474 = iVar6;
        local_490 = *(undefined8 *)(lVar22 + uVar16 * 8);
        puVar17 = &DAT_140e0c7b5;
        if (*(char *)((longlong)param_1 + 0x57d) != '\0') {
          puVar17 = &DAT_140e0c7b0;
        }
        local_498 = uVar18;
        local_470 = iVar12;
        (*(code *)param_1[0x12a])(local_490,local_384 + 1);
        bVar1 = puVar17[local_370];
        uVar15 = (uint)local_498;
        uVar14 = (uint)bVar1;
        if (((byte)local_498 < bVar1) || (uVar14 = uVar15, (byte)local_498 <= bVar1)) {
          (*(code *)param_1[0x125])(local_490,local_468);
          uVar8 = local_490;
          if (((local_460._4_4_ == 0) ||
              ((((int)local_460 == 0 || (local_440._4_4_ == 0)) || (local_3d4 == 0)))) ||
             ((int)local_440 == 0)) goto LAB_1403dd7b8;
          pcVar13 = (char *)(lVar7 + uVar16 * 6);
          (*(code *)param_1[0x123])(local_490,0,local_384,0);
          lVar10 = FUN_140160c40((ulonglong)local_384[0] * 0x104);
          lVar22 = local_480;
          (*(code *)param_1[0x123])(uVar8,0,local_384,lVar10);
          uVar18 = (ulonglong)local_384[0];
          pcVar13[4] = '\0';
          pcVar13[5] = '\0';
          pcVar13[0] = '\0';
          pcVar13[1] = '\0';
          pcVar13[2] = '\0';
          pcVar13[3] = '\0';
          if (uVar18 == 0) {
LAB_1403dd7a6:
            FUN_140160cf0(lVar10);
LAB_1403dd7ae:
            uVar15 = (uint)local_498;
            goto LAB_1403dd7b8;
          }
          lVar20 = 0;
          do {
            lVar7 = lVar10 + lVar20;
            iVar6 = FUN_1400fd200(lVar7,"VK_KHR_swapchain");
            if (iVar6 == 0) {
              *pcVar13 = '\x01';
            }
            else {
              iVar6 = FUN_1400fd200(lVar7,"VK_KHR_maintenance1");
              if (iVar6 == 0) {
                pcVar13[1] = '\x01';
              }
              else {
                iVar6 = FUN_1400fd200(lVar7,"VK_KHR_driver_properties");
                if (iVar6 == 0) {
                  pcVar13[2] = '\x01';
                }
                else {
                  iVar6 = FUN_1400fd200(lVar7,"VK_EXT_vertex_attribute_divisor");
                  if (iVar6 == 0) {
                    pcVar13[3] = '\x01';
                  }
                  else {
                    iVar6 = FUN_1400fd200(lVar7,"VK_KHR_portability_subset");
                    if (iVar6 == 0) {
                      pcVar13[4] = '\x01';
                    }
                    else {
                      iVar6 = FUN_1400fd200(lVar7,"VK_EXT_texture_compression_astc_hdr");
                      if (iVar6 == 0) {
                        pcVar13[5] = '\x01';
                      }
                    }
                  }
                }
              }
            }
            lVar22 = local_480;
            lVar7 = local_488;
            lVar20 = lVar20 + 0x104;
          } while (uVar18 * 0x104 != lVar20);
          if (*pcVar13 == '\0') goto LAB_1403dd7a6;
          cVar4 = pcVar13[1];
          FUN_140160cf0(lVar10);
          uVar8 = local_490;
          if (cVar4 == '\0') goto LAB_1403dd7ae;
          (*(code *)param_1[0x126])(local_490,&local_388,0);
          puVar9 = (uint *)FUN_140160c40((ulonglong)local_388 * 0x18);
          (*(code *)param_1[0x126])(uVar8,&local_388,puVar9);
          if (local_388 == 0) {
            FUN_140160cf0(puVar9);
            uVar15 = (uint)local_498;
            lVar7 = local_488;
            goto LAB_1403dd7b8;
          }
          uVar18 = 0;
          uVar19 = 0xffffffff;
          uVar15 = 0;
          puVar21 = puVar9;
          do {
            cVar4 = video_subsystem_has_not_been_initialized(*param_1,local_490,uVar18 & 0xffffffff)
            ;
            if ((cVar4 != '\0') && (uVar2 = *puVar21, (uVar2 & 1) != 0)) {
              uVar11 = 3 - ((uVar2 & 4) == 0);
              if ((uVar2 & 2) == 0) {
                uVar11 = 1;
              }
              if (uVar15 < uVar11) {
                uVar19 = uVar18 & 0xffffffff;
                uVar15 = uVar11;
              }
            }
            iVar12 = (int)uVar19;
            uVar18 = uVar18 + 1;
            puVar21 = puVar21 + 6;
          } while (uVar18 < local_388);
          FUN_140160cf0(puVar9);
          iVar6 = (int)uVar16;
          uVar15 = (uint)local_498;
          lVar22 = local_480;
          lVar7 = local_488;
          if (iVar12 == -1) goto LAB_1403dd7b8;
        }
        else {
          uVar14 = 0;
LAB_1403dd7b8:
          iVar6 = local_474;
          if ((byte)uVar15 < (byte)uVar14) {
            iVar6 = -1;
            uVar15 = uVar14;
          }
          uVar14 = uVar15 & 0xff;
          iVar12 = local_470;
        }
        uVar16 = uVar16 + 1;
        uVar18 = (ulonglong)uVar14;
      } while (uVar16 < local_46c);
      if (iVar6 != -1) {
        lVar10 = (longlong)iVar6;
        *(undefined2 *)(param_1 + 0xb1) = *(undefined2 *)(lVar7 + 4 + lVar10 * 6);
        *(undefined4 *)((longlong)param_1 + 0x584) = *(undefined4 *)(lVar7 + lVar10 * 6);
        uVar8 = *(undefined8 *)(lVar22 + lVar10 * 8);
        param_1[1] = uVar8;
        *(int *)(param_1 + 0xf6) = iVar12;
        *(undefined4 *)(param_1 + 2) = 0x3b9bb079;
        if (*(char *)((longlong)param_1 + 0x586) == '\0') {
          param_1[3] = 0;
          (*(code *)param_1[0x12a])(uVar8,param_1 + 4);
        }
        else {
          *(undefined4 *)(param_1 + 0x6b) = 0x3b9dc7a0;
          param_1[0x6c] = 0;
          param_1[3] = param_1 + 0x6b;
          (*(code *)param_1[299])(uVar8,param_1 + 2);
        }
        (*(code *)param_1[0x129])(param_1[1],param_1 + 0xb3);
        FUN_140160cf0(lVar22);
        FUN_140160cf0(lVar7);
        uVar8 = 1;
        goto LAB_1403dd929;
      }
    }
    goto LAB_1403dd906;
  case -0xc:
    pcVar13 = "VK_ERROR_FRAGMENTED_POOL";
    break;
  case -0xb:
  case -5:
  case 1:
  case 2:
  case 3:
  case 4:
switchD_1403dcfae_caseD_fffffff5:
    pcVar13 = "Unhandled VkResult!";
    break;
  case -10:
    pcVar13 = "VK_ERROR_TOO_MANY_OBJECTS";
    break;
  case -9:
    pcVar13 = "VK_ERROR_INCOMPATIBLE_DRIVER";
    break;
  case -8:
    pcVar13 = "VK_ERROR_FEATURE_NOT_PRESENT";
    break;
  case -7:
    pcVar13 = "VK_ERROR_EXTENSION_NOT_PRESENT";
    break;
  case -6:
    pcVar13 = "VK_ERROR_LAYER_NOT_PRESENT";
    break;
  case -4:
    pcVar13 = "VK_ERROR_DEVICE_LOST";
    break;
  case -3:
    pcVar13 = "VK_ERROR_INITIALIZATION_FAILED";
    break;
  case -2:
    pcVar13 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
    break;
  case -1:
    pcVar13 = "VK_ERROR_OUT_OF_HOST_MEMORY";
    break;
  default:
    if (iVar6 == -1000000000) {
      pcVar13 = "VK_ERROR_SURFACE_LOST_KHR";
    }
    else {
      if (iVar6 != 0x3b9acdeb) goto switchD_1403dcfae_caseD_fffffff5;
      pcVar13 = "VK_SUBOPTIMAL_KHR";
    }
  }
LAB_1403dd8f5:
  FUN_1400fb8f0(9,"vkEnumeratePhysicalDevices failed: %s",pcVar13);
LAB_1403dd906:
  FUN_140160cf0(lVar22);
  FUN_140160cf0(lVar7);
LAB_1403dd916:
  pcVar13 = "Vulkan: Failed to determine a suitable physical device";
LAB_1403dd91d:
  FUN_1400fb8f0(9,pcVar13);
  uVar8 = 0;
LAB_1403dd929:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_4b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_4b8);
  }
  return uVar8;
}


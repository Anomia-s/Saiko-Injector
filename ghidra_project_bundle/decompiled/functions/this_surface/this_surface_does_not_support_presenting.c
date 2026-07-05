/**
 * Function: this_surface_does_not_support_presenting
 * Address:  1403f0f80
 * Signature: undefined this_surface_does_not_support_presenting(void)
 * Body size: 2387 bytes
 */


ulonglong this_surface_does_not_support_presenting
                    (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  char *pcVar6;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  (**(code **)(param_1 + 0x980))(param_2,*(undefined4 *)(param_1 + 0x7b0),param_3,&local_4c);
  *(undefined4 *)(param_4 + 0x40) = 0;
  *(undefined4 *)(param_4 + 0x50) = 0;
  if (local_4c == 0) {
    if (*(char *)(param_1 + 0x57c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,&DAT_141339891,"This surface does not support presenting!");
    }
    FUN_1400fbed0(&DAT_141339891,"This surface does not support presenting!");
LAB_1403f189d:
    uVar5 = 0;
LAB_1403f189f:
    if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
      FUN_140b65db0(local_48 ^ (ulonglong)auStack_78);
    }
    return uVar5 & 0xffffffff;
  }
  iVar2 = (**(code **)(param_1 + 0x968))(param_2,param_3,param_4);
  if (iVar2 == 0) {
    if ((*(byte *)(param_4 + 0x2c) & 1) == 0) {
      FUN_1400fb8f0(9,"Opaque presentation unsupported! Expect weird transparency bugs!");
    }
    iVar2 = (**(code **)(param_1 + 0x970))(param_2,param_3,param_4 + 0x40,0);
    if (iVar2 != 0) {
      if (*(char *)(param_1 + 0x57c) != '\x01') {
        if (iVar2 < -1000000000) {
          if (iVar2 < -0x3b9acdec) {
            if (iVar2 == -0x3b9eae18) {
              pcVar6 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
            }
            else {
              if (iVar2 != -0x3b9bd788) goto switchD_1403f1601_caseD_fffffff5;
              pcVar6 = "VK_ERROR_OUT_OF_POOL_MEMORY";
            }
          }
          else if (iVar2 == -0x3b9acdec) {
            pcVar6 = "VK_ERROR_OUT_OF_DATE_KHR";
          }
          else {
            if (iVar2 != -0x3b9aca01) goto switchD_1403f1601_caseD_fffffff5;
            pcVar6 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
          }
        }
        else {
          switch(iVar2) {
          case -0xc:
            pcVar6 = "VK_ERROR_FRAGMENTED_POOL";
            break;
          case -0xb:
          case -5:
switchD_1403f1601_caseD_fffffff5:
            pcVar6 = "Unhandled VkResult!";
            break;
          case -10:
            pcVar6 = "VK_ERROR_TOO_MANY_OBJECTS";
            break;
          case -9:
            pcVar6 = "VK_ERROR_INCOMPATIBLE_DRIVER";
            break;
          case -8:
            pcVar6 = "VK_ERROR_FEATURE_NOT_PRESENT";
            break;
          case -7:
            pcVar6 = "VK_ERROR_EXTENSION_NOT_PRESENT";
            break;
          case -6:
            pcVar6 = "VK_ERROR_LAYER_NOT_PRESENT";
            break;
          case -4:
            pcVar6 = "VK_ERROR_DEVICE_LOST";
            break;
          case -3:
            pcVar6 = "VK_ERROR_INITIALIZATION_FAILED";
            break;
          case -2:
            pcVar6 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
            break;
          case -1:
            pcVar6 = "VK_ERROR_OUT_OF_HOST_MEMORY";
            break;
          default:
            if (iVar2 == -1000000000) {
              pcVar6 = "VK_ERROR_SURFACE_LOST_KHR";
            }
            else {
              if (iVar2 != 0x3b9acdeb) goto switchD_1403f1601_caseD_fffffff5;
              pcVar6 = "VK_SUBOPTIMAL_KHR";
            }
          }
        }
        pcVar4 = "vkGetPhysicalDeviceSurfaceFormatsKHR";
        goto LAB_1403f1898;
      }
      if (-0x3b9aca01 < iVar2) {
        switch(iVar2) {
        case -0xc:
          pcVar6 = "VK_ERROR_FRAGMENTED_POOL";
          break;
        case -10:
          pcVar6 = "VK_ERROR_TOO_MANY_OBJECTS";
          break;
        case -9:
          pcVar6 = "VK_ERROR_INCOMPATIBLE_DRIVER";
          break;
        case -8:
          pcVar6 = "VK_ERROR_FEATURE_NOT_PRESENT";
          break;
        case -7:
          pcVar6 = "VK_ERROR_EXTENSION_NOT_PRESENT";
          break;
        case -6:
          pcVar6 = "VK_ERROR_LAYER_NOT_PRESENT";
          break;
        case -4:
          pcVar6 = "VK_ERROR_DEVICE_LOST";
          break;
        case -3:
          pcVar6 = "VK_ERROR_INITIALIZATION_FAILED";
          break;
        case -2:
          pcVar6 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
          break;
        case -1:
          pcVar6 = "VK_ERROR_OUT_OF_HOST_MEMORY";
          break;
        default:
          if (iVar2 == -1000000000) {
            pcVar6 = "VK_ERROR_SURFACE_LOST_KHR";
            break;
          }
          if (iVar2 == 0x3b9acdeb) {
            pcVar6 = "VK_SUBOPTIMAL_KHR";
            break;
          }
        case -0xb:
        case -5:
switchD_1403f10c9_caseD_fffffff5:
          pcVar6 = "Unhandled VkResult!";
        }
LAB_1403f15cb:
                    /* WARNING: Subroutine does not return */
        FUN_1400fb950(9,"%s %s","vkGetPhysicalDeviceSurfaceFormatsKHR",pcVar6);
      }
      if (iVar2 < -0x3b9acdec) {
        if (iVar2 == -0x3b9eae18) {
          pcVar6 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
          goto LAB_1403f15cb;
        }
        if (iVar2 == -0x3b9bd788) {
          pcVar6 = "VK_ERROR_OUT_OF_POOL_MEMORY";
          goto LAB_1403f15cb;
        }
      }
      else {
        if (iVar2 == -0x3b9acdec) {
          pcVar6 = "VK_ERROR_OUT_OF_DATE_KHR";
          goto LAB_1403f15cb;
        }
        if (iVar2 == -0x3b9aca01) {
          pcVar6 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
          goto LAB_1403f15cb;
        }
      }
      goto switchD_1403f10c9_caseD_fffffff5;
    }
    iVar2 = (**(code **)(param_1 + 0x978))(param_2,param_3,param_4 + 0x50,0);
    if (iVar2 == 0) {
      *(undefined8 *)(param_4 + 0x38) = 0;
      if ((ulonglong)*(uint *)(param_4 + 0x40) != 0) {
        lVar3 = FUN_140160c40((ulonglong)*(uint *)(param_4 + 0x40) << 3);
        *(longlong *)(param_4 + 0x38) = lVar3;
        if (lVar3 == 0) goto LAB_1403f189d;
        iVar2 = (**(code **)(param_1 + 0x970))(param_2,param_3,param_4 + 0x40,lVar3);
        if (iVar2 != 0) {
          FUN_140160cf0(*(undefined8 *)(param_4 + 0x38));
          cVar1 = *(char *)(param_1 + 0x57c);
          pcVar6 = (char *)vk_error_out_of_host_memory(iVar2);
          if (cVar1 == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_1400fb950(9,"%s %s","vkGetPhysicalDeviceSurfaceFormatsKHR",pcVar6);
          }
          pcVar4 = "vkGetPhysicalDeviceSurfaceFormatsKHR";
          goto LAB_1403f1898;
        }
      }
      *(undefined8 *)(param_4 + 0x48) = 0;
      uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      if ((ulonglong)*(uint *)(param_4 + 0x50) == 0) goto LAB_1403f189f;
      lVar3 = FUN_140160c40((ulonglong)*(uint *)(param_4 + 0x50) << 2);
      *(longlong *)(param_4 + 0x48) = lVar3;
      if (lVar3 == 0) {
        FUN_140160cf0(*(undefined8 *)(param_4 + 0x38));
        goto LAB_1403f189d;
      }
      iVar2 = (**(code **)(param_1 + 0x978))(param_2,param_3,param_4 + 0x50,lVar3);
      if (iVar2 == 0) goto LAB_1403f189f;
      FUN_140160cf0(*(undefined8 *)(param_4 + 0x38));
      FUN_140160cf0(*(undefined8 *)(param_4 + 0x48));
      cVar1 = *(char *)(param_1 + 0x57c);
      pcVar6 = (char *)vk_error_out_of_host_memory(iVar2);
      if (cVar1 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_1400fb950(9,"%s %s","vkGetPhysicalDeviceSurfacePresentModesKHR",pcVar6);
      }
      pcVar4 = "vkGetPhysicalDeviceSurfacePresentModesKHR";
    }
    else {
      if (*(char *)(param_1 + 0x57c) == '\x01') {
        if (iVar2 < -1000000000) {
          if (iVar2 < -0x3b9acdec) {
            if (iVar2 == -0x3b9eae18) {
              pcVar6 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
              goto LAB_1403f177a;
            }
            if (iVar2 == -0x3b9bd788) {
              pcVar6 = "VK_ERROR_OUT_OF_POOL_MEMORY";
              goto LAB_1403f177a;
            }
          }
          else {
            if (iVar2 == -0x3b9acdec) {
              pcVar6 = "VK_ERROR_OUT_OF_DATE_KHR";
              goto LAB_1403f177a;
            }
            if (iVar2 == -0x3b9aca01) {
              pcVar6 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
              goto LAB_1403f177a;
            }
          }
          goto switchD_1403f1126_caseD_fffffff5;
        }
        switch(iVar2) {
        case -0xc:
          pcVar6 = "VK_ERROR_FRAGMENTED_POOL";
          break;
        case -10:
          pcVar6 = "VK_ERROR_TOO_MANY_OBJECTS";
          break;
        case -9:
          pcVar6 = "VK_ERROR_INCOMPATIBLE_DRIVER";
          break;
        case -8:
          pcVar6 = "VK_ERROR_FEATURE_NOT_PRESENT";
          break;
        case -7:
          pcVar6 = "VK_ERROR_EXTENSION_NOT_PRESENT";
          break;
        case -6:
          pcVar6 = "VK_ERROR_LAYER_NOT_PRESENT";
          break;
        case -4:
          pcVar6 = "VK_ERROR_DEVICE_LOST";
          break;
        case -3:
          pcVar6 = "VK_ERROR_INITIALIZATION_FAILED";
          break;
        case -2:
          pcVar6 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
          break;
        case -1:
          pcVar6 = "VK_ERROR_OUT_OF_HOST_MEMORY";
          break;
        default:
          if (iVar2 == -1000000000) {
            pcVar6 = "VK_ERROR_SURFACE_LOST_KHR";
            break;
          }
          if (iVar2 == 0x3b9acdeb) {
            pcVar6 = "VK_SUBOPTIMAL_KHR";
            break;
          }
        case -0xb:
        case -5:
switchD_1403f1126_caseD_fffffff5:
          pcVar6 = "Unhandled VkResult!";
        }
LAB_1403f177a:
                    /* WARNING: Subroutine does not return */
        FUN_1400fb950(9,"%s %s","vkGetPhysicalDeviceSurfacePresentModesKHR",pcVar6);
      }
      if (iVar2 < -1000000000) {
        if (iVar2 < -0x3b9acdec) {
          if (iVar2 == -0x3b9eae18) {
            pcVar6 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
          }
          else {
            if (iVar2 != -0x3b9bd788) goto switchD_1403f17b0_caseD_fffffff5;
            pcVar6 = "VK_ERROR_OUT_OF_POOL_MEMORY";
          }
        }
        else if (iVar2 == -0x3b9acdec) {
          pcVar6 = "VK_ERROR_OUT_OF_DATE_KHR";
        }
        else {
          if (iVar2 != -0x3b9aca01) goto switchD_1403f17b0_caseD_fffffff5;
          pcVar6 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
        }
      }
      else {
        switch(iVar2) {
        case -0xc:
          pcVar6 = "VK_ERROR_FRAGMENTED_POOL";
          break;
        case -0xb:
        case -5:
switchD_1403f17b0_caseD_fffffff5:
          pcVar6 = "Unhandled VkResult!";
          break;
        case -10:
          pcVar6 = "VK_ERROR_TOO_MANY_OBJECTS";
          break;
        case -9:
          pcVar6 = "VK_ERROR_INCOMPATIBLE_DRIVER";
          break;
        case -8:
          pcVar6 = "VK_ERROR_FEATURE_NOT_PRESENT";
          break;
        case -7:
          pcVar6 = "VK_ERROR_EXTENSION_NOT_PRESENT";
          break;
        case -6:
          pcVar6 = "VK_ERROR_LAYER_NOT_PRESENT";
          break;
        case -4:
          pcVar6 = "VK_ERROR_DEVICE_LOST";
          break;
        case -3:
          pcVar6 = "VK_ERROR_INITIALIZATION_FAILED";
          break;
        case -2:
          pcVar6 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
          break;
        case -1:
          pcVar6 = "VK_ERROR_OUT_OF_HOST_MEMORY";
          break;
        default:
          if (iVar2 == -1000000000) {
            pcVar6 = "VK_ERROR_SURFACE_LOST_KHR";
          }
          else {
            if (iVar2 != 0x3b9acdeb) goto switchD_1403f17b0_caseD_fffffff5;
            pcVar6 = "VK_SUBOPTIMAL_KHR";
          }
        }
      }
      pcVar4 = "vkGetPhysicalDeviceSurfacePresentModesKHR";
    }
LAB_1403f1898:
    FUN_1400fbed0("%s %s",pcVar4,pcVar6);
    goto LAB_1403f189d;
  }
  if (*(char *)(param_1 + 0x57c) != '\x01') {
    if (iVar2 < -1000000000) {
      if (iVar2 < -0x3b9acdec) {
        if (iVar2 == -0x3b9eae18) {
          pcVar6 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
        }
        else {
          if (iVar2 != -0x3b9bd788) goto switchD_1403f13e4_caseD_fffffff5;
          pcVar6 = "VK_ERROR_OUT_OF_POOL_MEMORY";
        }
      }
      else if (iVar2 == -0x3b9acdec) {
        pcVar6 = "VK_ERROR_OUT_OF_DATE_KHR";
      }
      else {
        if (iVar2 != -0x3b9aca01) goto switchD_1403f13e4_caseD_fffffff5;
        pcVar6 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
      }
    }
    else {
      switch(iVar2) {
      case -0xc:
        pcVar6 = "VK_ERROR_FRAGMENTED_POOL";
        break;
      case -0xb:
      case -5:
switchD_1403f13e4_caseD_fffffff5:
        pcVar6 = "Unhandled VkResult!";
        break;
      case -10:
        pcVar6 = "VK_ERROR_TOO_MANY_OBJECTS";
        break;
      case -9:
        pcVar6 = "VK_ERROR_INCOMPATIBLE_DRIVER";
        break;
      case -8:
        pcVar6 = "VK_ERROR_FEATURE_NOT_PRESENT";
        break;
      case -7:
        pcVar6 = "VK_ERROR_EXTENSION_NOT_PRESENT";
        break;
      case -6:
        pcVar6 = "VK_ERROR_LAYER_NOT_PRESENT";
        break;
      case -4:
        pcVar6 = "VK_ERROR_DEVICE_LOST";
        break;
      case -3:
        pcVar6 = "VK_ERROR_INITIALIZATION_FAILED";
        break;
      case -2:
        pcVar6 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
        break;
      case -1:
        pcVar6 = "VK_ERROR_OUT_OF_HOST_MEMORY";
        break;
      default:
        if (iVar2 == -1000000000) {
          pcVar6 = "VK_ERROR_SURFACE_LOST_KHR";
        }
        else {
          if (iVar2 != 0x3b9acdeb) goto switchD_1403f13e4_caseD_fffffff5;
          pcVar6 = "VK_SUBOPTIMAL_KHR";
        }
      }
    }
    pcVar4 = "vkGetPhysicalDeviceSurfaceCapabilitiesKHR";
    goto LAB_1403f1898;
  }
  if (-0x3b9aca01 < iVar2) {
    switch(iVar2) {
    case -0xc:
      pcVar6 = "VK_ERROR_FRAGMENTED_POOL";
      break;
    case -10:
      pcVar6 = "VK_ERROR_TOO_MANY_OBJECTS";
      break;
    case -9:
      pcVar6 = "VK_ERROR_INCOMPATIBLE_DRIVER";
      break;
    case -8:
      pcVar6 = "VK_ERROR_FEATURE_NOT_PRESENT";
      break;
    case -7:
      pcVar6 = "VK_ERROR_EXTENSION_NOT_PRESENT";
      break;
    case -6:
      pcVar6 = "VK_ERROR_LAYER_NOT_PRESENT";
      break;
    case -4:
      pcVar6 = "VK_ERROR_DEVICE_LOST";
      break;
    case -3:
      pcVar6 = "VK_ERROR_INITIALIZATION_FAILED";
      break;
    case -2:
      pcVar6 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
      break;
    case -1:
      pcVar6 = "VK_ERROR_OUT_OF_HOST_MEMORY";
      break;
    default:
      if (iVar2 == -1000000000) {
        pcVar6 = "VK_ERROR_SURFACE_LOST_KHR";
        break;
      }
      if (iVar2 == 0x3b9acdeb) {
        pcVar6 = "VK_SUBOPTIMAL_KHR";
        break;
      }
    case -0xb:
    case -5:
switchD_1403f101c_caseD_fffffff5:
      pcVar6 = "Unhandled VkResult!";
    }
LAB_1403f13ae:
                    /* WARNING: Subroutine does not return */
    FUN_1400fb950(9,"%s %s","vkGetPhysicalDeviceSurfaceCapabilitiesKHR",pcVar6);
  }
  if (iVar2 < -0x3b9acdec) {
    if (iVar2 == -0x3b9eae18) {
      pcVar6 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
      goto LAB_1403f13ae;
    }
    if (iVar2 == -0x3b9bd788) {
      pcVar6 = "VK_ERROR_OUT_OF_POOL_MEMORY";
      goto LAB_1403f13ae;
    }
  }
  else {
    if (iVar2 == -0x3b9acdec) {
      pcVar6 = "VK_ERROR_OUT_OF_DATE_KHR";
      goto LAB_1403f13ae;
    }
    if (iVar2 == -0x3b9aca01) {
      pcVar6 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
      goto LAB_1403f13ae;
    }
  }
  goto switchD_1403f101c_caseD_fffffff5;
}


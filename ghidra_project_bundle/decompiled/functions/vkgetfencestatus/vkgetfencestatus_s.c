/**
 * Function: vkgetfencestatus_s
 * Address:  1403e9620
 * Signature: undefined vkgetfencestatus_s(void)
 * Body size: 586 bytes
 */


bool vkgetfencestatus_s(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = (**(code **)(param_1 + 0xbe0))(*(undefined8 *)(param_1 + 0x570),*param_2);
  if (uVar1 < 2) goto LAB_1403e985e;
  if (*(char *)(param_1 + 0x57c) != '\x01') {
    if ((int)uVar1 < -1000000000) {
      if ((int)uVar1 < -0x3b9acdec) {
        if (uVar1 == 0xc46151e8) {
          pcVar2 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
        }
        else {
          if (uVar1 != 0xc4642878) goto switchD_1403e9778_caseD_fffffff5;
          pcVar2 = "VK_ERROR_OUT_OF_POOL_MEMORY";
        }
      }
      else if (uVar1 == 0xc4653214) {
        pcVar2 = "VK_ERROR_OUT_OF_DATE_KHR";
      }
      else {
        if (uVar1 != 0xc46535ff) goto switchD_1403e9778_caseD_fffffff5;
        pcVar2 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
      }
    }
    else {
      switch(uVar1) {
      case 0xfffffff4:
        pcVar2 = "VK_ERROR_FRAGMENTED_POOL";
        break;
      case 0xfffffff5:
      case 0xfffffffb:
switchD_1403e9778_caseD_fffffff5:
        pcVar2 = "Unhandled VkResult!";
        break;
      case 0xfffffff6:
        pcVar2 = "VK_ERROR_TOO_MANY_OBJECTS";
        break;
      case 0xfffffff7:
        pcVar2 = "VK_ERROR_INCOMPATIBLE_DRIVER";
        break;
      case 0xfffffff8:
        pcVar2 = "VK_ERROR_FEATURE_NOT_PRESENT";
        break;
      case 0xfffffff9:
        pcVar2 = "VK_ERROR_EXTENSION_NOT_PRESENT";
        break;
      case 0xfffffffa:
        pcVar2 = "VK_ERROR_LAYER_NOT_PRESENT";
        break;
      case 0xfffffffc:
        pcVar2 = "VK_ERROR_DEVICE_LOST";
        break;
      case 0xfffffffd:
        pcVar2 = "VK_ERROR_INITIALIZATION_FAILED";
        break;
      case 0xfffffffe:
        pcVar2 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
        break;
      case 0xffffffff:
        pcVar2 = "VK_ERROR_OUT_OF_HOST_MEMORY";
        break;
      default:
        if (uVar1 == 0xc4653600) {
          pcVar2 = "VK_ERROR_SURFACE_LOST_KHR";
        }
        else {
          if (uVar1 != 0x3b9acdeb) goto switchD_1403e9778_caseD_fffffff5;
          pcVar2 = "VK_SUBOPTIMAL_KHR";
        }
      }
    }
    FUN_1400fbed0("vkGetFenceStatus: %s",pcVar2);
LAB_1403e985e:
    return uVar1 == 0;
  }
  if (-0x3b9aca01 < (int)uVar1) {
    switch(uVar1) {
    case 0xfffffff4:
      pcVar2 = "VK_ERROR_FRAGMENTED_POOL";
      break;
    case 0xfffffff6:
      pcVar2 = "VK_ERROR_TOO_MANY_OBJECTS";
      break;
    case 0xfffffff7:
      pcVar2 = "VK_ERROR_INCOMPATIBLE_DRIVER";
      break;
    case 0xfffffff8:
      pcVar2 = "VK_ERROR_FEATURE_NOT_PRESENT";
      break;
    case 0xfffffff9:
      pcVar2 = "VK_ERROR_EXTENSION_NOT_PRESENT";
      break;
    case 0xfffffffa:
      pcVar2 = "VK_ERROR_LAYER_NOT_PRESENT";
      break;
    case 0xfffffffc:
      pcVar2 = "VK_ERROR_DEVICE_LOST";
      break;
    case 0xfffffffd:
      pcVar2 = "VK_ERROR_INITIALIZATION_FAILED";
      break;
    case 0xfffffffe:
      pcVar2 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
      break;
    case 0xffffffff:
      pcVar2 = "VK_ERROR_OUT_OF_HOST_MEMORY";
      break;
    default:
      if (uVar1 == 0xc4653600) {
        pcVar2 = "VK_ERROR_SURFACE_LOST_KHR";
        break;
      }
      if (uVar1 == 0x3b9acdeb) {
        pcVar2 = "VK_SUBOPTIMAL_KHR";
        break;
      }
    case 0xfffffff5:
    case 0xfffffffb:
switchD_1403e966f_caseD_fffffff5:
      pcVar2 = "Unhandled VkResult!";
    }
LAB_1403e9749:
                    /* WARNING: Subroutine does not return */
    FUN_1400fb950(9,"vkGetFenceStatus: %s",pcVar2);
  }
  if ((int)uVar1 < -0x3b9acdec) {
    if (uVar1 == 0xc46151e8) {
      pcVar2 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
      goto LAB_1403e9749;
    }
    if (uVar1 == 0xc4642878) {
      pcVar2 = "VK_ERROR_OUT_OF_POOL_MEMORY";
      goto LAB_1403e9749;
    }
  }
  else {
    if (uVar1 == 0xc4653214) {
      pcVar2 = "VK_ERROR_OUT_OF_DATE_KHR";
      goto LAB_1403e9749;
    }
    if (uVar1 == 0xc46535ff) {
      pcVar2 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
      goto LAB_1403e9749;
    }
  }
  goto switchD_1403e966f_caseD_fffffff5;
}


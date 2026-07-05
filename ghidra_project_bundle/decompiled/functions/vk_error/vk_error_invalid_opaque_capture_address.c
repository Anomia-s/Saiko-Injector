/**
 * Function: vk_error_invalid_opaque_capture_address
 * Address:  1406f2100
 * Signature: undefined vk_error_invalid_opaque_capture_address(void)
 * Body size: 848 bytes
 */


char * vk_error_invalid_opaque_capture_address(int param_1)

{
  if (param_1 < -0xd) {
    if (param_1 < -0x3b9bd788) {
      if (param_1 < -0x3b9d3ee8) {
        if (param_1 == -0x3b9eb5e8) {
          return "VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS";
        }
        if (param_1 == -0x3b9eae18) {
          return "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
        }
        if (param_1 == -0x3b9d71b1) {
          return "VK_ERROR_NOT_PERMITTED_EXT";
        }
      }
      else {
        if (param_1 == -0x3b9d3ee8) {
          return "VK_ERROR_FRAGMENTATION";
        }
        if (param_1 == -0x3b9d3330) {
          return "VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT";
        }
        if (param_1 == -0x3b9be343) {
          return "VK_ERROR_INVALID_EXTERNAL_HANDLE";
        }
      }
    }
    else if (param_1 < -0x3b9ad5b9) {
      if (param_1 == -0x3b9bd788) {
        return "VK_ERROR_OUT_OF_POOL_MEMORY";
      }
      if (param_1 == -0x3b9af8e0) {
        return "VK_ERROR_INVALID_SHADER_NV";
      }
      if (param_1 == -0x3b9af4f9) {
        return "VK_ERROR_VALIDATION_FAILED_EXT";
      }
    }
    else if (param_1 < -0x3b9aca01) {
      if (param_1 == -0x3b9ad5b9) {
        return "VK_ERROR_INCOMPATIBLE_DISPLAY_KHR";
      }
      if (param_1 == -0x3b9acdec) {
        return "VK_ERROR_OUT_OF_DATE_KHR";
      }
    }
    else {
      if (param_1 == -0x3b9aca01) {
        return "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
      }
      if (param_1 == -1000000000) {
        return "VK_ERROR_SURFACE_LOST_KHR";
      }
    }
  }
  else if (param_1 < 0x3b9acdeb) {
    switch(param_1) {
    case 0:
      return "VK_SUCCESS";
    case 1:
      return "VK_NOT_READY";
    case 2:
      return "VK_TIMEOUT";
    case 3:
      return "VK_EVENT_SET";
    case 4:
      return "VK_EVENT_RESET";
    case 5:
      return "VK_INCOMPLETE";
    case -0xd:
      return "VK_ERROR_UNKNOWN";
    case -0xc:
      return "VK_ERROR_FRAGMENTED_POOL";
    case -0xb:
      return "VK_ERROR_FORMAT_NOT_SUPPORTED";
    case -10:
      return "VK_ERROR_TOO_MANY_OBJECTS";
    case -9:
      return "VK_ERROR_INCOMPATIBLE_DRIVER";
    case -8:
      return "VK_ERROR_FEATURE_NOT_PRESENT";
    case -7:
      return "VK_ERROR_EXTENSION_NOT_PRESENT";
    case -6:
      return "VK_ERROR_LAYER_NOT_PRESENT";
    case -5:
      return "VK_ERROR_MEMORY_MAP_FAILED";
    case -4:
      return "VK_ERROR_DEVICE_LOST";
    case -3:
      return "VK_ERROR_INITIALIZATION_FAILED";
    case -2:
      return "VK_ERROR_OUT_OF_DEVICE_MEMORY";
    case -1:
      return "VK_ERROR_OUT_OF_HOST_MEMORY";
    }
  }
  else {
    switch(param_1) {
    case 0x3b9ee0e0:
      return "VK_THREAD_IDLE_KHR";
    case 0x3b9ee0e1:
      return "VK_THREAD_DONE_KHR";
    case 0x3b9ee0e2:
      return "VK_OPERATION_DEFERRED_KHR";
    case 0x3b9ee0e3:
      return "VK_OPERATION_NOT_DEFERRED_KHR";
    }
    if (param_1 == 0x3b9acdeb) {
      return "VK_SUBOPTIMAL_KHR";
    }
    if (param_1 == 0x3b9f5228) {
      return "VK_PIPELINE_COMPILE_REQUIRED_EXT";
    }
  }
  FUN_1400a3c00(&DAT_141700110,0x18,"Unknown (%d)");
  return &DAT_141700110;
}


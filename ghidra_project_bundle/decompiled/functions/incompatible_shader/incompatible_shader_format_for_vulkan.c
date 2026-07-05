/**
 * Function: incompatible_shader_format_for_vulkan
 * Address:  1403de140
 * Signature: undefined incompatible_shader_format_for_vulkan(void)
 * Body size: 3137 bytes
 */


longlong * incompatible_shader_format_for_vulkan(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_e8 [2];
  undefined8 local_e0;
  ulonglong local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_158;
  if (*(int *)(param_2 + 3) != 2) {
    if (*(char *)(param_1 + 0x57c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,&DAT_141339891,"Incompatible shader format for Vulkan!");
    }
    FUN_1400fbed0(&DAT_141339891,"Incompatible shader format for Vulkan!");
LAB_1403de932:
    plVar6 = (longlong *)0x0;
LAB_1403de934:
    if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_158)) {
      return plVar6;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_40 ^ (ulonglong)auStack_158);
  }
  plVar6 = (longlong *)FUN_140160c40(0x20);
  local_88[0] = 0x10;
  local_80 = 0;
  local_78 = 0;
  local_70 = *param_2;
  local_68 = param_2[1];
  iVar5 = (**(code **)(param_1 + 0xb28))(*(undefined8 *)(param_1 + 0x570),local_88,0,plVar6);
  if (iVar5 == 0) {
    lVar2 = *plVar6;
    uVar3 = param_2[2];
    local_60 = (longlong *)0x0;
    local_118 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_114 = *(undefined4 *)(param_2 + 4);
    uStack_110 = *(undefined8 *)((longlong)param_2 + 0x24);
    local_108 = *(undefined8 *)((longlong)param_2 + 0x2c);
    cVar4 = FUN_1403d87a0(*(undefined8 *)(param_1 + 0x808),&local_118,&local_60);
    if (cVar4 == '\0') {
      local_60 = (longlong *)FUN_140160c70(1,0x38);
      local_120 = 0;
      local_128 = 0;
      local_130 = (longlong *)((ulonglong)local_130 & 0xffffffff00000000);
      local_138._0_4_ = *(undefined4 *)((longlong)param_2 + 0x24);
      lVar7 = vk_error_out_of_host_memory
                        (param_1,0x20,*(undefined4 *)((longlong)param_2 + 0x1c),
                         *(undefined4 *)(param_2 + 4));
      local_60[1] = lVar7;
      local_128 = *(undefined4 *)((longlong)param_2 + 0x2c);
      local_120 = 0;
      local_138._0_4_ = 0;
      local_130._0_4_ = *(undefined4 *)(param_2 + 5);
      lVar7 = vk_error_out_of_host_memory(param_1,0x20,0,0);
      local_60[2] = lVar7;
      local_120 = *(undefined4 *)(param_2 + 6);
      local_128 = 0;
      local_130 = (longlong *)((ulonglong)local_130._4_4_ << 0x20);
      local_138 = (ulonglong)local_138._4_4_ << 0x20;
      lVar7 = vk_error_out_of_host_memory(param_1,0x20,0,0);
      local_60[3] = lVar7;
      local_58 = *(undefined8 *)(local_60[1] + 8);
      local_50 = *(undefined8 *)(local_60[2] + 8);
      local_48 = *(undefined8 *)(lVar7 + 8);
      *(undefined4 *)(local_60 + 4) = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(undefined4 *)((longlong)local_60 + 0x24) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(local_60 + 5) = *(undefined4 *)((longlong)param_2 + 0x24);
      *(undefined4 *)((longlong)local_60 + 0x2c) = *(undefined4 *)(param_2 + 5);
      *(undefined4 *)(local_60 + 6) = *(undefined4 *)((longlong)param_2 + 0x2c);
      *(undefined4 *)((longlong)local_60 + 0x34) = *(undefined4 *)(param_2 + 6);
      local_e8[0] = 0x1e;
      local_e0 = 0;
      local_d8 = 0x300000000;
      local_d0 = &local_58;
      local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
      local_c0 = 0;
      iVar5 = (**(code **)(param_1 + 0xb08))(*(undefined8 *)(param_1 + 0x570),local_e8,0);
      plVar1 = local_60;
      if (iVar5 == 0) {
        puVar8 = (undefined4 *)FUN_140160c40(0x18);
        *puVar8 = local_118;
        puVar8[1] = uStack_114;
        puVar8[2] = (undefined4)uStack_110;
        puVar8[3] = uStack_110._4_4_;
        *(undefined8 *)(puVar8 + 4) = local_108;
        FUN_1403d8280(*(undefined8 *)(param_1 + 0x808),puVar8,local_60);
        goto LAB_1403de50c;
      }
      if (*local_60 != 0) {
        (**(code **)(param_1 + 0xb88))(*(undefined8 *)(param_1 + 0x570),*local_60,0);
      }
      FUN_140160cf0(plVar1);
      if (*(char *)(param_1 + 0x57c) == '\x01') {
        if (iVar5 < -1000000000) {
          if (iVar5 < -0x3b9acdec) {
            if (iVar5 == -0x3b9eae18) {
              pcVar10 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
              goto LAB_1403dec16;
            }
            if (iVar5 == -0x3b9bd788) {
              pcVar10 = "VK_ERROR_OUT_OF_POOL_MEMORY";
              goto LAB_1403dec16;
            }
          }
          else {
            if (iVar5 == -0x3b9acdec) {
              pcVar10 = "VK_ERROR_OUT_OF_DATE_KHR";
              goto LAB_1403dec16;
            }
            if (iVar5 == -0x3b9aca01) {
              pcVar10 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
              goto LAB_1403dec16;
            }
          }
          goto switchD_1403de499_caseD_fffffff5;
        }
        switch(iVar5) {
        case -0xc:
          pcVar10 = "VK_ERROR_FRAGMENTED_POOL";
          break;
        case -10:
          pcVar10 = "VK_ERROR_TOO_MANY_OBJECTS";
          break;
        case -9:
          pcVar10 = "VK_ERROR_INCOMPATIBLE_DRIVER";
          break;
        case -8:
          pcVar10 = "VK_ERROR_FEATURE_NOT_PRESENT";
          break;
        case -7:
          pcVar10 = "VK_ERROR_EXTENSION_NOT_PRESENT";
          break;
        case -6:
          pcVar10 = "VK_ERROR_LAYER_NOT_PRESENT";
          break;
        case -4:
          pcVar10 = "VK_ERROR_DEVICE_LOST";
          break;
        case -3:
          pcVar10 = "VK_ERROR_INITIALIZATION_FAILED";
          break;
        case -2:
          pcVar10 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
          break;
        case -1:
          pcVar10 = "VK_ERROR_OUT_OF_HOST_MEMORY";
          break;
        default:
          if (iVar5 == -1000000000) {
            pcVar10 = "VK_ERROR_SURFACE_LOST_KHR";
            break;
          }
          if (iVar5 == 0x3b9acdeb) {
            pcVar10 = "VK_SUBOPTIMAL_KHR";
            break;
          }
        case -0xb:
        case -5:
switchD_1403de499_caseD_fffffff5:
          pcVar10 = "Unhandled VkResult!";
        }
LAB_1403dec16:
                    /* WARNING: Subroutine does not return */
        FUN_1400fb950(9,"%s %s","vkCreatePipelineLayout",pcVar10);
      }
      if (iVar5 < -1000000000) {
        if (iVar5 < -0x3b9acdec) {
          if (iVar5 == -0x3b9eae18) {
            pcVar10 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
          }
          else {
            if (iVar5 != -0x3b9bd788) goto switchD_1403dec4e_caseD_fffffff5;
            pcVar10 = "VK_ERROR_OUT_OF_POOL_MEMORY";
          }
        }
        else if (iVar5 == -0x3b9acdec) {
          pcVar10 = "VK_ERROR_OUT_OF_DATE_KHR";
        }
        else {
          if (iVar5 != -0x3b9aca01) goto switchD_1403dec4e_caseD_fffffff5;
          pcVar10 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
        }
      }
      else {
        switch(iVar5) {
        case -0xc:
          pcVar10 = "VK_ERROR_FRAGMENTED_POOL";
          break;
        case -0xb:
        case -5:
switchD_1403dec4e_caseD_fffffff5:
          pcVar10 = "Unhandled VkResult!";
          break;
        case -10:
          pcVar10 = "VK_ERROR_TOO_MANY_OBJECTS";
          break;
        case -9:
          pcVar10 = "VK_ERROR_INCOMPATIBLE_DRIVER";
          break;
        case -8:
          pcVar10 = "VK_ERROR_FEATURE_NOT_PRESENT";
          break;
        case -7:
          pcVar10 = "VK_ERROR_EXTENSION_NOT_PRESENT";
          break;
        case -6:
          pcVar10 = "VK_ERROR_LAYER_NOT_PRESENT";
          break;
        case -4:
          pcVar10 = "VK_ERROR_DEVICE_LOST";
          break;
        case -3:
          pcVar10 = "VK_ERROR_INITIALIZATION_FAILED";
          break;
        case -2:
          pcVar10 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
          break;
        case -1:
          pcVar10 = "VK_ERROR_OUT_OF_HOST_MEMORY";
          break;
        default:
          if (iVar5 == -1000000000) {
            pcVar10 = "VK_ERROR_SURFACE_LOST_KHR";
          }
          else {
            if (iVar5 != 0x3b9acdeb) goto switchD_1403dec4e_caseD_fffffff5;
            pcVar10 = "VK_SUBOPTIMAL_KHR";
          }
        }
      }
      FUN_1400fbed0("%s %s","vkCreatePipelineLayout",pcVar10);
      plVar6[2] = 0;
      goto LAB_1403ded51;
    }
LAB_1403de50c:
    plVar6[2] = (longlong)local_60;
    if (local_60 == (longlong *)0x0) {
LAB_1403ded51:
      (**(code **)(param_1 + 0xba8))(*(undefined8 *)(param_1 + 0x570),*plVar6,0);
      FUN_140160cf0(plVar6);
      goto LAB_1403de932;
    }
    local_e8[0] = 0x1d;
    local_e0 = 0;
    local_d8 = local_d8 & 0xffffffff00000000;
    local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,0x12);
    local_c8 = 0;
    local_c0 = 0x2000000000;
    local_a8 = 0;
    local_a0 = *(undefined8 *)plVar6[2];
    local_98 = 0;
    local_90 = 0;
    plVar1 = plVar6 + 1;
    local_138 = 0;
    local_130 = plVar1;
    local_b8 = lVar2;
    local_b0 = uVar3;
    iVar5 = (**(code **)(param_1 + 0xae0))(*(undefined8 *)(param_1 + 0x570),0,1,local_e8);
    if (iVar5 == 0) {
      FUN_140106140(plVar6 + 3,0);
      if (((*(char *)(param_1 + 0x57c) == '\x01') && (*(char *)(param_1 + 0x58a) == '\x01')) &&
         (cVar4 = FUN_14014fd70(*(undefined4 *)(param_2 + 8),"SDL.gpu.computepipeline.create.name"),
         cVar4 != '\0')) {
        local_118 = 0x3b9cbe00;
        uStack_110 = 0;
        local_f8 = FUN_14014ffe0(*(undefined4 *)(param_2 + 8),"SDL.gpu.computepipeline.create.name",
                                 0);
        local_108 = CONCAT44(local_108._4_4_,0x13);
        local_100 = *plVar1;
        (**(code **)(param_1 + 0x990))(*(undefined8 *)(param_1 + 0x570),&local_118);
      }
      goto LAB_1403de934;
    }
    if (*plVar1 != 0) {
      (**(code **)(param_1 + 0xb78))(*(undefined8 *)(param_1 + 0x570),*plVar1,0);
    }
    if (*plVar6 != 0) {
      (**(code **)(param_1 + 0xba8))(*(undefined8 *)(param_1 + 0x570),*plVar6,0);
    }
    FUN_140160cf0(plVar6);
    if (*(char *)(param_1 + 0x57c) != '\x01') {
      if (iVar5 < -1000000000) {
        if (iVar5 < -0x3b9acdec) {
          if (iVar5 == -0x3b9eae18) {
            pcVar10 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
          }
          else {
            if (iVar5 != -0x3b9bd788) goto switchD_1403deaca_caseD_fffffff5;
            pcVar10 = "VK_ERROR_OUT_OF_POOL_MEMORY";
          }
        }
        else if (iVar5 == -0x3b9acdec) {
          pcVar10 = "VK_ERROR_OUT_OF_DATE_KHR";
        }
        else {
          if (iVar5 != -0x3b9aca01) goto switchD_1403deaca_caseD_fffffff5;
          pcVar10 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
        }
      }
      else {
        switch(iVar5) {
        case -0xc:
          pcVar10 = "VK_ERROR_FRAGMENTED_POOL";
          break;
        case -0xb:
        case -5:
switchD_1403deaca_caseD_fffffff5:
          pcVar10 = "Unhandled VkResult!";
          break;
        case -10:
          pcVar10 = "VK_ERROR_TOO_MANY_OBJECTS";
          break;
        case -9:
          pcVar10 = "VK_ERROR_INCOMPATIBLE_DRIVER";
          break;
        case -8:
          pcVar10 = "VK_ERROR_FEATURE_NOT_PRESENT";
          break;
        case -7:
          pcVar10 = "VK_ERROR_EXTENSION_NOT_PRESENT";
          break;
        case -6:
          pcVar10 = "VK_ERROR_LAYER_NOT_PRESENT";
          break;
        case -4:
          pcVar10 = "VK_ERROR_DEVICE_LOST";
          break;
        case -3:
          pcVar10 = "VK_ERROR_INITIALIZATION_FAILED";
          break;
        case -2:
          pcVar10 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
          break;
        case -1:
          pcVar10 = "VK_ERROR_OUT_OF_HOST_MEMORY";
          break;
        default:
          if (iVar5 == -1000000000) {
            pcVar10 = "VK_ERROR_SURFACE_LOST_KHR";
          }
          else {
            if (iVar5 != 0x3b9acdeb) goto switchD_1403deaca_caseD_fffffff5;
            pcVar10 = "VK_SUBOPTIMAL_KHR";
          }
        }
      }
      pcVar9 = "vkCreateComputePipeline";
      goto LAB_1403de92d;
    }
    if (-0x3b9aca01 < iVar5) {
      switch(iVar5) {
      case -0xc:
        pcVar10 = "VK_ERROR_FRAGMENTED_POOL";
        break;
      case -10:
        pcVar10 = "VK_ERROR_TOO_MANY_OBJECTS";
        break;
      case -9:
        pcVar10 = "VK_ERROR_INCOMPATIBLE_DRIVER";
        break;
      case -8:
        pcVar10 = "VK_ERROR_FEATURE_NOT_PRESENT";
        break;
      case -7:
        pcVar10 = "VK_ERROR_EXTENSION_NOT_PRESENT";
        break;
      case -6:
        pcVar10 = "VK_ERROR_LAYER_NOT_PRESENT";
        break;
      case -4:
        pcVar10 = "VK_ERROR_DEVICE_LOST";
        break;
      case -3:
        pcVar10 = "VK_ERROR_INITIALIZATION_FAILED";
        break;
      case -2:
        pcVar10 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
        break;
      case -1:
        pcVar10 = "VK_ERROR_OUT_OF_HOST_MEMORY";
        break;
      default:
        if (iVar5 == -1000000000) {
          pcVar10 = "VK_ERROR_SURFACE_LOST_KHR";
          break;
        }
        if (iVar5 == 0x3b9acdeb) {
          pcVar10 = "VK_SUBOPTIMAL_KHR";
          break;
        }
      case -0xb:
      case -5:
switchD_1403de648_caseD_fffffff5:
        pcVar10 = "Unhandled VkResult!";
      }
LAB_1403dea92:
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,"%s %s","vkCreateComputePipeline",pcVar10);
    }
    if (iVar5 < -0x3b9acdec) {
      if (iVar5 == -0x3b9eae18) {
        pcVar10 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
        goto LAB_1403dea92;
      }
      if (iVar5 == -0x3b9bd788) {
        pcVar10 = "VK_ERROR_OUT_OF_POOL_MEMORY";
        goto LAB_1403dea92;
      }
    }
    else {
      if (iVar5 == -0x3b9acdec) {
        pcVar10 = "VK_ERROR_OUT_OF_DATE_KHR";
        goto LAB_1403dea92;
      }
      if (iVar5 == -0x3b9aca01) {
        pcVar10 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
        goto LAB_1403dea92;
      }
    }
    goto switchD_1403de648_caseD_fffffff5;
  }
  FUN_140160cf0(plVar6);
  if (*(char *)(param_1 + 0x57c) != '\x01') {
    if (iVar5 < -1000000000) {
      if (iVar5 < -0x3b9acdec) {
        if (iVar5 == -0x3b9eae18) {
          pcVar10 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
        }
        else {
          if (iVar5 != -0x3b9bd788) goto switchD_1403de83e_caseD_fffffff5;
          pcVar10 = "VK_ERROR_OUT_OF_POOL_MEMORY";
        }
      }
      else if (iVar5 == -0x3b9acdec) {
        pcVar10 = "VK_ERROR_OUT_OF_DATE_KHR";
      }
      else {
        if (iVar5 != -0x3b9aca01) goto switchD_1403de83e_caseD_fffffff5;
        pcVar10 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
      }
    }
    else {
      switch(iVar5) {
      case -0xc:
        pcVar10 = "VK_ERROR_FRAGMENTED_POOL";
        break;
      case -0xb:
      case -5:
switchD_1403de83e_caseD_fffffff5:
        pcVar10 = "Unhandled VkResult!";
        break;
      case -10:
        pcVar10 = "VK_ERROR_TOO_MANY_OBJECTS";
        break;
      case -9:
        pcVar10 = "VK_ERROR_INCOMPATIBLE_DRIVER";
        break;
      case -8:
        pcVar10 = "VK_ERROR_FEATURE_NOT_PRESENT";
        break;
      case -7:
        pcVar10 = "VK_ERROR_EXTENSION_NOT_PRESENT";
        break;
      case -6:
        pcVar10 = "VK_ERROR_LAYER_NOT_PRESENT";
        break;
      case -4:
        pcVar10 = "VK_ERROR_DEVICE_LOST";
        break;
      case -3:
        pcVar10 = "VK_ERROR_INITIALIZATION_FAILED";
        break;
      case -2:
        pcVar10 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
        break;
      case -1:
        pcVar10 = "VK_ERROR_OUT_OF_HOST_MEMORY";
        break;
      default:
        if (iVar5 == -1000000000) {
          pcVar10 = "VK_ERROR_SURFACE_LOST_KHR";
        }
        else {
          if (iVar5 != 0x3b9acdeb) goto switchD_1403de83e_caseD_fffffff5;
          pcVar10 = "VK_SUBOPTIMAL_KHR";
        }
      }
    }
    pcVar9 = "vkCreateShaderModule";
LAB_1403de92d:
    FUN_1400fbed0("%s %s",pcVar9,pcVar10);
    goto LAB_1403de932;
  }
  if (-0x3b9aca01 < iVar5) {
    switch(iVar5) {
    case -0xc:
      pcVar10 = "VK_ERROR_FRAGMENTED_POOL";
      break;
    case -10:
      pcVar10 = "VK_ERROR_TOO_MANY_OBJECTS";
      break;
    case -9:
      pcVar10 = "VK_ERROR_INCOMPATIBLE_DRIVER";
      break;
    case -8:
      pcVar10 = "VK_ERROR_FEATURE_NOT_PRESENT";
      break;
    case -7:
      pcVar10 = "VK_ERROR_EXTENSION_NOT_PRESENT";
      break;
    case -6:
      pcVar10 = "VK_ERROR_LAYER_NOT_PRESENT";
      break;
    case -4:
      pcVar10 = "VK_ERROR_DEVICE_LOST";
      break;
    case -3:
      pcVar10 = "VK_ERROR_INITIALIZATION_FAILED";
      break;
    case -2:
      pcVar10 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
      break;
    case -1:
      pcVar10 = "VK_ERROR_OUT_OF_HOST_MEMORY";
      break;
    default:
      if (iVar5 == -1000000000) {
        pcVar10 = "VK_ERROR_SURFACE_LOST_KHR";
        break;
      }
      if (iVar5 == 0x3b9acdeb) {
        pcVar10 = "VK_SUBOPTIMAL_KHR";
        break;
      }
    case -0xb:
    case -5:
switchD_1403de21d_caseD_fffffff5:
      pcVar10 = "Unhandled VkResult!";
    }
LAB_1403de806:
                    /* WARNING: Subroutine does not return */
    FUN_1400fb950(9,"%s %s","vkCreateShaderModule",pcVar10);
  }
  if (iVar5 < -0x3b9acdec) {
    if (iVar5 == -0x3b9eae18) {
      pcVar10 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
      goto LAB_1403de806;
    }
    if (iVar5 == -0x3b9bd788) {
      pcVar10 = "VK_ERROR_OUT_OF_POOL_MEMORY";
      goto LAB_1403de806;
    }
  }
  else {
    if (iVar5 == -0x3b9acdec) {
      pcVar10 = "VK_ERROR_OUT_OF_DATE_KHR";
      goto LAB_1403de806;
    }
    if (iVar5 == -0x3b9aca01) {
      pcVar10 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
      goto LAB_1403de806;
    }
  }
  goto switchD_1403de21d_caseD_fffffff5;
}


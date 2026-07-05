/**
 * Function: vk_error_out_of_host_memory
 * Address:  1403f2850
 * Signature: undefined vk_error_out_of_host_memory(void)
 * Body size: 1108 bytes
 */


bool vk_error_out_of_host_memory(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  uVar4 = *(int *)(param_2 + 0x18) + 1;
  *(uint *)(param_2 + 0x18) = uVar4;
  uVar2 = FUN_140160cc0(*(undefined8 *)(param_2 + 0x10),(ulonglong)uVar4 << 3);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  local_50[0] = 0x28;
  local_48 = 0;
  local_40 = *(undefined8 *)(param_2 + 8);
  local_38 = 0x100000000;
  iVar1 = (**(code **)(param_1 + 0x9a8))(*(undefined8 *)(param_1 + 0x570),local_50,&local_58);
  if (iVar1 == 0) {
    lVar3 = FUN_140160c40(0x880);
    *(longlong *)(lVar3 + 0x50) = param_1;
    *(longlong *)(lVar3 + 0x60) = param_2;
    *(undefined8 *)(lVar3 + 0x58) = local_58;
    *(undefined8 *)(lVar3 + 0x870) = 0;
    *(undefined8 *)(lVar3 + 0x70) = 0x100000000;
    uVar2 = FUN_140160c40(0x10);
    *(undefined8 *)(lVar3 + 0x68) = uVar2;
    *(undefined8 *)(lVar3 + 0x80) = 0x100000000;
    uVar2 = FUN_140160c40(8);
    *(undefined8 *)(lVar3 + 0x78) = uVar2;
    *(undefined8 *)(lVar3 + 0x90) = 0x100000000;
    uVar2 = FUN_140160c40(8);
    *(undefined8 *)(lVar3 + 0x88) = uVar2;
    *(undefined1 *)(lVar3 + 0x294) = 0;
    *(undefined8 *)(lVar3 + 0x148) = 0x101010101010101;
    *(undefined2 *)(lVar3 + 0x150) = 0x101;
    *(undefined8 *)(lVar3 + 0x158) = 0;
    *(undefined8 *)(lVar3 + 0x160) = 0;
    *(undefined8 *)(lVar3 + 0x168) = 0;
    *(undefined8 *)(lVar3 + 0x170) = 0;
    *(undefined8 *)(lVar3 + 0x178) = 0;
    *(undefined8 *)(lVar3 + 0x180) = 0;
    *(undefined8 *)(lVar3 + 0x188) = 0;
    *(undefined8 *)(lVar3 + 0x808) = 0x400000000;
    uVar2 = FUN_140160c40(0x20);
    *(undefined8 *)(lVar3 + 0x800) = uVar2;
    *(undefined8 *)(lVar3 + 0x818) = 0x400000000;
    uVar2 = FUN_140160c40(0x20);
    *(undefined8 *)(lVar3 + 0x810) = uVar2;
    *(undefined8 *)(lVar3 + 0x828) = 0x400000000;
    uVar2 = FUN_140160c40(0x20);
    *(undefined8 *)(lVar3 + 0x820) = uVar2;
    *(undefined8 *)(lVar3 + 0x838) = 0x400000000;
    uVar2 = FUN_140160c40(0x20);
    *(undefined8 *)(lVar3 + 0x830) = uVar2;
    *(undefined8 *)(lVar3 + 0x848) = 0x400000000;
    uVar2 = FUN_140160c40(0x20);
    *(undefined8 *)(lVar3 + 0x840) = uVar2;
    *(undefined8 *)(lVar3 + 0x858) = 0x400000000;
    uVar2 = FUN_140160c40(0x20);
    *(undefined8 *)(lVar3 + 0x850) = uVar2;
    *(undefined8 *)(lVar3 + 0x868) = 0x400000000;
    uVar2 = FUN_140160c40(0x20);
    *(undefined8 *)(lVar3 + 0x860) = uVar2;
    *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)*(uint *)(param_2 + 0x1c) * 8) = lVar3;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    goto LAB_1403f2c72;
  }
  if (*(char *)(param_1 + 0x57c) != '\x01') {
    if (iVar1 < -1000000000) {
      if (iVar1 < -0x3b9acdec) {
        if (iVar1 == -0x3b9eae18) {
          pcVar5 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
        }
        else {
          if (iVar1 != -0x3b9bd788) goto switchD_1403f2b85_caseD_fffffff5;
          pcVar5 = "VK_ERROR_OUT_OF_POOL_MEMORY";
        }
      }
      else if (iVar1 == -0x3b9acdec) {
        pcVar5 = "VK_ERROR_OUT_OF_DATE_KHR";
      }
      else {
        if (iVar1 != -0x3b9aca01) goto switchD_1403f2b85_caseD_fffffff5;
        pcVar5 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
      }
    }
    else {
      switch(iVar1) {
      case -0xc:
        pcVar5 = "VK_ERROR_FRAGMENTED_POOL";
        break;
      case -0xb:
      case -5:
switchD_1403f2b85_caseD_fffffff5:
        pcVar5 = "Unhandled VkResult!";
        break;
      case -10:
        pcVar5 = "VK_ERROR_TOO_MANY_OBJECTS";
        break;
      case -9:
        pcVar5 = "VK_ERROR_INCOMPATIBLE_DRIVER";
        break;
      case -8:
        pcVar5 = "VK_ERROR_FEATURE_NOT_PRESENT";
        break;
      case -7:
        pcVar5 = "VK_ERROR_EXTENSION_NOT_PRESENT";
        break;
      case -6:
        pcVar5 = "VK_ERROR_LAYER_NOT_PRESENT";
        break;
      case -4:
        pcVar5 = "VK_ERROR_DEVICE_LOST";
        break;
      case -3:
        pcVar5 = "VK_ERROR_INITIALIZATION_FAILED";
        break;
      case -2:
        pcVar5 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
        break;
      case -1:
        pcVar5 = "VK_ERROR_OUT_OF_HOST_MEMORY";
        break;
      default:
        if (iVar1 == -1000000000) {
          pcVar5 = "VK_ERROR_SURFACE_LOST_KHR";
        }
        else {
          if (iVar1 != 0x3b9acdeb) goto switchD_1403f2b85_caseD_fffffff5;
          pcVar5 = "VK_SUBOPTIMAL_KHR";
        }
      }
    }
    FUN_1400fbed0("%s %s","vkAllocateCommandBuffers",pcVar5);
LAB_1403f2c72:
    if (DAT_1414ef3c0 != (local_30 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
      FUN_140b65db0(local_30 ^ (ulonglong)auStack_78);
    }
    return iVar1 == 0;
  }
  if (-0x3b9aca01 < iVar1) {
    switch(iVar1) {
    case -0xc:
      pcVar5 = "VK_ERROR_FRAGMENTED_POOL";
      break;
    case -10:
      pcVar5 = "VK_ERROR_TOO_MANY_OBJECTS";
      break;
    case -9:
      pcVar5 = "VK_ERROR_INCOMPATIBLE_DRIVER";
      break;
    case -8:
      pcVar5 = "VK_ERROR_FEATURE_NOT_PRESENT";
      break;
    case -7:
      pcVar5 = "VK_ERROR_EXTENSION_NOT_PRESENT";
      break;
    case -6:
      pcVar5 = "VK_ERROR_LAYER_NOT_PRESENT";
      break;
    case -4:
      pcVar5 = "VK_ERROR_DEVICE_LOST";
      break;
    case -3:
      pcVar5 = "VK_ERROR_INITIALIZATION_FAILED";
      break;
    case -2:
      pcVar5 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
      break;
    case -1:
      pcVar5 = "VK_ERROR_OUT_OF_HOST_MEMORY";
      break;
    default:
      if (iVar1 == -1000000000) {
        pcVar5 = "VK_ERROR_SURFACE_LOST_KHR";
        break;
      }
      if (iVar1 == 0x3b9acdeb) {
        pcVar5 = "VK_SUBOPTIMAL_KHR";
        break;
      }
    case -0xb:
    case -5:
switchD_1403f2904_caseD_fffffff5:
      pcVar5 = "Unhandled VkResult!";
    }
LAB_1403f2b4f:
                    /* WARNING: Subroutine does not return */
    FUN_1400fb950(9,"%s %s","vkAllocateCommandBuffers",pcVar5);
  }
  if (iVar1 < -0x3b9acdec) {
    if (iVar1 == -0x3b9eae18) {
      pcVar5 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
      goto LAB_1403f2b4f;
    }
    if (iVar1 == -0x3b9bd788) {
      pcVar5 = "VK_ERROR_OUT_OF_POOL_MEMORY";
      goto LAB_1403f2b4f;
    }
  }
  else {
    if (iVar1 == -0x3b9acdec) {
      pcVar5 = "VK_ERROR_OUT_OF_DATE_KHR";
      goto LAB_1403f2b4f;
    }
    if (iVar1 == -0x3b9aca01) {
      pcVar5 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
      goto LAB_1403f2b4f;
    }
  }
  goto switchD_1403f2904_caseD_fffffff5;
}


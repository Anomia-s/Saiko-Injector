/**
 * Function: vkdestroydebugutilsmessengerext
 * Address:  14052b050
 * Signature: undefined vkdestroydebugutilsmessengerext(void)
 * Body size: 154 bytes
 */


void vkdestroydebugutilsmessengerext(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  
  if (param_1[2] != 0) {
    vkDeviceWaitIdle();
    vkDestroyDevice(param_1[2],0);
    param_1[2] = 0;
  }
  lVar2 = *param_1;
  if (param_1[8] != 0) {
    if (lVar2 == 0) {
      return;
    }
    vkDestroySurfaceKHR(lVar2,param_1[8],0);
    param_1[8] = 0;
    lVar2 = *param_1;
  }
  if (param_1[7] != 0) {
    if (lVar2 == 0) {
      return;
    }
    pcVar1 = (code *)vkGetInstanceProcAddr(lVar2,"vkDestroyDebugUtilsMessengerEXT");
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(*param_1,param_1[7],0);
    }
    param_1[7] = 0;
    lVar2 = *param_1;
  }
  if (lVar2 != 0) {
    vkDestroyInstance(lVar2,0);
    *param_1 = 0;
  }
  return;
}


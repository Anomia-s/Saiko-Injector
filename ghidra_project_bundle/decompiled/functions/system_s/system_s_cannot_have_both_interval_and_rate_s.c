/**
 * Function: system_s_cannot_have_both_interval_and_rate_s
 * Address:  1403c6e90
 * Signature: undefined system_s_cannot_have_both_interval_and_rate_s(void)
 * Body size: 295 bytes
 */


undefined8
system_s_cannot_have_both_interval_and_rate_s
          (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_3 + 0x9e0) == 0) || (*(int *)(param_3 + 0x9e4) == 0)) {
    if ((*(int *)(param_3 + 0x9e0) != 0) ||
       ((*(int *)(param_3 + 0x9e4) != 0 || (*(longlong *)(param_3 + 0x9e8) != 0)))) {
      if (*(int *)(param_3 + 0x9e0) != 0) {
        FUN_1403c8870(param_1,param_2,*(undefined4 *)(param_3 + 0x9e0));
      }
      if (*(int *)(param_3 + 0x9e4) == 0) {
        if (*(longlong *)(param_3 + 0x9e8) == 0) {
          return 0;
        }
        FUN_1403c8a00(param_1,param_2,*(longlong *)(param_3 + 0x9e8));
      }
      else {
        FUN_1403c8900(param_1,param_2,*(int *)(param_3 + 0x9e4));
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1403ae340(param_1,0,param_2,".",0);
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/system/system.c"
                  ,0xe8,"system %s cannot have both interval and rate set",uVar1);
    (*DAT_1415033b0)(uVar1);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


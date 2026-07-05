/**
 * Function: maximum_script_nesting_depth_exceeded
 * Address:  140764c30
 * Signature: undefined maximum_script_nesting_depth_exceeded(void)
 * Body size: 132 bytes
 */


int maximum_script_nesting_depth_exceeded
              (longlong *param_1,longlong param_2,longlong param_3,longlong param_4,int param_5)

{
  int iVar1;
  
  if (*(longlong *)(param_3 + 0x78) != 0) {
    *param_1 = param_3;
    param_1[1] = param_2;
    *(int *)(param_1 + 0x88) = param_5;
    if (param_5 < 0x84) {
      *(int *)(param_1 + 0x88) = param_5 + 1;
      param_1[(longlong)param_5 + 2] = param_4;
      iVar1 = (*(code *)param_1[1])(param_1,param_4);
      *(int *)(param_1 + 0x88) = param_5;
      return -(uint)(iVar1 != 0);
    }
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/visit.c"
                  ,0x11,"maximum script nesting depth exceeded");
  }
  return -1;
}


/**
 * Function: opt_actions_runner_work_platform_platform_thi
 * Address:  14042fac0
 * Signature: undefined opt_actions_runner_work_platform_platform_thi(void)
 * Body size: 179 bytes
 */


void opt_actions_runner_work_platform_platform_thi
               (char *param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  
  if (*(char *)(param_2 + 8) == '\x01') {
    iVar1 = (**(code **)(param_2 + 200))();
    if (iVar1 != 0) {
      do {
        if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
          param_1 = "generic";
        }
        pcVar2 = "UNKNOWN";
        if (iVar1 - 0x500U < 6) {
          pcVar2 = (&PTR_s_GL_INVALID_ENUM_1413676ac_0xe_140e159e0)[iVar1 - 0x500U];
        }
        FUN_1400fbed0("%s: %s (%d): %s %s (0x%X)",param_1,
                      "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/render/opengles2/SDL_render_gles2.c"
                      ,param_3,param_4,pcVar2,iVar1);
        iVar1 = (**(code **)(param_2 + 200))();
      } while (iVar1 != 0);
    }
  }
  return;
}


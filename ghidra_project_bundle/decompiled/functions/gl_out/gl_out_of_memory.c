/**
 * Function: gl_out_of_memory
 * Address:  14042a720
 * Signature: undefined gl_out_of_memory(void)
 * Body size: 555 bytes
 */


ulonglong gl_out_of_memory(char *param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  longlong lVar5;
  longlong lVar6;
  undefined7 uVar4;
  
  lVar5 = *(longlong *)(param_2 + 0x2c0);
  uVar4 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (*(char *)(lVar5 + 8) != '\x01') goto LAB_14042a91f;
  if (*(char *)(lVar5 + 9) == '\0') {
    iVar1 = (**(code **)(lVar5 + 0xd8))();
    if (iVar1 == 0) goto LAB_14042a91f;
    do {
      if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
        param_1 = "generic";
      }
      pcVar2 = "GL_INVALID_ENUM";
      switch(iVar1) {
      case 0x500:
        break;
      case 0x501:
        pcVar2 = "GL_INVALID_VALUE";
        break;
      case 0x502:
        pcVar2 = "GL_INVALID_OPERATION";
        break;
      case 0x503:
        pcVar2 = "GL_STACK_OVERFLOW";
        break;
      case 0x504:
        pcVar2 = "GL_STACK_UNDERFLOW";
        break;
      case 0x505:
        pcVar2 = "GL_OUT_OF_MEMORY";
        break;
      default:
        if (iVar1 == 0x8031) {
          pcVar2 = "GL_TABLE_TOO_LARGE";
        }
        else {
          pcVar2 = "UNKNOWN";
        }
      }
      FUN_1400fbed0("%s: %s (%d): %s %s (0x%X)",param_1,
                    "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/render/opengl/SDL_render_gl.c"
                    ,param_3,param_4,pcVar2,iVar1);
      iVar1 = (**(code **)(lVar5 + 0xd8))();
    } while (iVar1 != 0);
LAB_14042a91d:
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 == 0) goto LAB_14042a91f;
    uVar3 = CONCAT71(uVar4,iVar1 < 1);
    if (0 < iVar1) {
      lVar6 = 0;
      do {
        FUN_1400fbed0("%s: %s (%d): %s %s",param_1,
                      "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/render/opengl/SDL_render_gl.c"
                      ,param_3,param_4,*(undefined8 *)(*(longlong *)(lVar5 + 0x10) + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar5 + 0xc));
      lVar5 = *(longlong *)(param_2 + 0x2c0);
      if (*(char *)(lVar5 + 8) != '\x01') goto LAB_14042a91d;
    }
    if (*(char *)(lVar5 + 9) == '\x01') {
      if (*(int *)(lVar5 + 0xc) != 0) {
        if (0 < *(int *)(lVar5 + 0xc)) {
          lVar6 = 0;
          do {
            FUN_140160cf0(*(undefined8 *)(*(longlong *)(lVar5 + 0x10) + lVar6 * 8));
            lVar6 = lVar6 + 1;
          } while (lVar6 < *(int *)(lVar5 + 0xc));
        }
        FUN_140160cf0(*(undefined8 *)(lVar5 + 0x10));
        *(undefined4 *)(lVar5 + 0xc) = 0;
        *(undefined8 *)(lVar5 + 0x10) = 0;
      }
    }
    else if (*(longlong *)(lVar5 + 0xd8) != 0) {
      do {
        iVar1 = (**(code **)(lVar5 + 0xd8))();
      } while (iVar1 != 0);
    }
  }
LAB_14042a91f:
  return uVar3 & 0xffffffff;
}


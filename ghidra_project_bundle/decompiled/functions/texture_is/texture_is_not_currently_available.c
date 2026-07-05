/**
 * Function: texture_is_not_currently_available
 * Address:  1404319c0
 * Signature: undefined texture_is_not_currently_available(void)
 * Body size: 189 bytes
 */


undefined8
texture_is_not_currently_available
          (longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
          undefined4 *param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_2 + 0xf0);
  if (lVar2 == 0) {
    uVar4 = FUN_1400fbed0("Texture is not currently available");
  }
  else if (*(longlong *)(lVar2 + 0x48) == 0) {
    iVar1 = *(int *)(lVar2 + 0x24);
    if (iVar1 == 9) {
      lVar5 = 1;
    }
    else if (iVar1 == 0x61) {
      lVar5 = 8;
    }
    else if (iVar1 == 0x10) {
      lVar5 = 2;
    }
    else {
      lVar5 = 4;
    }
    iVar1 = *(int *)(param_3 + 1);
    iVar3 = sdl_render_vulkan_debug
                      (*(undefined8 *)(param_1 + 0x2c0),
                       (longlong)*(int *)((longlong)param_3 + 0xc) * iVar1 * lVar5,1,lVar2 + 0x40);
    if (iVar3 == 0) {
      uVar4 = param_3[1];
      *(undefined8 *)(lVar2 + 100) = *param_3;
      *(undefined8 *)(lVar2 + 0x6c) = uVar4;
      *param_4 = *(undefined8 *)(lVar2 + 0x58);
      *param_5 = (int)(iVar1 * lVar5);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = FUN_1400fbed0("texture is already locked");
  }
  return uVar4;
}


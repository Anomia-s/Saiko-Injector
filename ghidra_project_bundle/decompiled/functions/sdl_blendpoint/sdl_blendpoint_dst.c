/**
 * Function: sdl_blendpoint_dst
 * Address:  14061f1d0
 * Signature: undefined sdl_blendpoint_dst(void)
 * Body size: 551 bytes
 */


undefined8
sdl_blendpoint_dst(longlong param_1,int param_2,int param_3,int param_4,byte param_5,byte param_6,
                  byte param_7,byte param_8)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_140110960();
  if (cVar2 == '\0') {
    uVar3 = FUN_1400fbed0("Parameter \'%s\' is invalid","SDL_BlendPoint(): dst");
    return uVar3;
  }
  if ((*(uint *)(param_1 + 4) & 0xf0000000) != 0x10000000 || (*(uint *)(param_1 + 4) & 0xf800) == 0)
  {
    uVar3 = FUN_1400fbed0("SDL_BlendPoint(): Unsupported surface format");
    return uVar3;
  }
  if (*(int *)(param_1 + 100) <= param_2) {
    if (((*(int *)(param_1 + 0x68) <= param_3) &&
        (param_2 < *(int *)(param_1 + 100) + *(int *)(param_1 + 0x6c))) &&
       (param_3 < *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x70))) {
      if (param_4 - 1U < 2) {
        param_5 = (byte)(((uint)param_5 * (uint)param_8) / 0xff);
        param_6 = (byte)(((uint)param_6 * (uint)param_8) / 0xff);
        param_7 = (byte)(((uint)param_7 * (uint)param_8) / 0xff);
      }
      lVar1 = *(longlong *)(param_1 + 0x38);
      cVar2 = *(char *)(lVar1 + 4);
      if (cVar2 == ' ') {
        if (*(int *)(lVar1 + 8) != 0xff0000) goto LAB_14061f37d;
        if (*(int *)(lVar1 + 0x14) == 0) {
          FUN_14061fc00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        }
        else {
          FUN_14061ff30(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        }
      }
      else if (cVar2 == '\x10') {
        if (*(int *)(lVar1 + 8) != 0xf800) goto LAB_14061f37d;
        FUN_14061f7f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
      else {
        if ((cVar2 != '\x0f') || (*(int *)(lVar1 + 8) != 0x7c00)) {
LAB_14061f37d:
          if (*(int *)(lVar1 + 0x14) != 0) {
            uVar3 = that_operation_is_not_supported
                              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
            return uVar3;
          }
          uVar3 = that_operation_is_not_supported
                            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          return uVar3;
        }
        FUN_14061f400(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
    }
  }
  return 1;
}


/**
 * Function: texture_getblockwidth
 * Address:  1404026e0
 * Signature: undefined texture_getblockwidth(void)
 * Body size: 154 bytes
 */


ulonglong texture_getblockwidth(int param_1,undefined4 param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  ulonglong uVar4;
  
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x34:
  case 0x35:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
    uVar4 = 1;
    break;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x36:
  case 0x38:
  case 0x39:
  case 0x3f:
  case 0x4d:
  case 0x5b:
    uVar4 = 4;
    break;
  default:
    do {
      iVar3 = FUN_14015bb20(&DAT_141503670,"Texture_GetBlockWidth",
                            "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/gpu/d3d12/../SDL_sysgpu.h"
                            ,0xbf);
    } while (iVar3 == 0);
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  case 0x40:
  case 0x41:
  case 0x4e:
  case 0x4f:
  case 0x5c:
  case 0x5d:
    uVar4 = 5;
    break;
  case 0x42:
  case 0x43:
  case 0x50:
  case 0x51:
  case 0x5e:
  case 0x5f:
    uVar4 = 6;
    break;
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x60:
  case 0x61:
  case 0x62:
    uVar4 = 8;
    break;
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
    uVar4 = 10;
    break;
  case 0x4b:
  case 0x4c:
  case 0x59:
  case 0x5a:
  case 0x67:
  case 0x68:
    uVar4 = 0xc;
  }
  uVar1 = (ulonglong)((param_1 + (int)uVar4) - 1);
  iVar3 = sdl_gputextureformattexelblocksize_real(param_2,uVar1 % uVar4);
  return (ulonglong)(uint)(iVar3 * (int)(uVar1 / uVar4));
}


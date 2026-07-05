/**
 * Function: unknown_pixel_format
 * Address:  140155ac0
 * Signature: undefined unknown_pixel_format(void)
 * Body size: 430 bytes
 */


undefined8
unknown_pixel_format
          (uint param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
          undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if ((param_1 & 0xf0000000) == 0x10000000 || param_1 == 0) {
    uVar7 = param_1 >> 8 & 0xff;
    if (2 < (param_1 & 0xff)) {
      uVar7 = (param_1 & 0xff) * 8;
    }
    *param_2 = uVar7;
    *param_6 = 0;
    *param_5 = 0;
    *param_4 = 0;
    *param_3 = 0;
    if (param_1 == 0x17401803) {
      *param_3 = 0xff0000;
      *param_4 = 0xff00;
      *param_5 = 0xff;
    }
    else if (param_1 == 0x17101803) {
      *param_3 = 0xff;
      *param_4 = 0xff00;
      *param_5 = 0xff0000;
    }
    else if ((param_1 >> 0x18 & 0xf) - 4 < 3) {
      uVar7 = (param_1 >> 0x10 & 0xf) - 1;
      if ((7 < uVar7) || (uVar6 = param_1 >> 0x14 & 0xf, 7 < uVar6 - 1)) {
        uVar5 = FUN_1400fbed0("Unknown pixel format");
        return uVar5;
      }
      uVar8 = (ulonglong)uVar7;
      uVar1 = *(undefined4 *)(&DAT_140deb9a0 + uVar8 * 4);
      uVar2 = *(undefined4 *)(&DAT_140deb9c0 + uVar8 * 4);
      uVar3 = *(undefined4 *)(&DAT_140deb9e0 + uVar8 * 4);
      uVar4 = *(undefined4 *)(&DAT_140deba00 + uVar8 * 4);
      switch(uVar6) {
      case 2:
        *param_3 = uVar4;
        *param_4 = uVar3;
        *param_5 = uVar2;
        break;
      case 3:
        *param_6 = uVar4;
      case 1:
        *param_3 = uVar3;
        *param_4 = uVar2;
        *param_5 = uVar1;
        break;
      case 4:
        *param_3 = uVar4;
        *param_4 = uVar3;
        *param_5 = uVar2;
        *param_6 = uVar1;
        break;
      case 6:
        *param_5 = uVar4;
        *param_4 = uVar3;
        *param_3 = uVar2;
        break;
      case 7:
        *param_6 = uVar4;
      case 5:
        *param_5 = uVar3;
        *param_4 = uVar2;
        *param_3 = uVar1;
        break;
      case 8:
        *param_5 = uVar4;
        *param_4 = uVar3;
        *param_3 = uVar2;
        *param_6 = uVar1;
      }
    }
  }
  else {
    *param_6 = 0;
    *param_5 = 0;
    *param_4 = 0;
    *param_3 = 0;
    uVar7 = 0x20;
    if (((param_1 != 0x32595559) && (param_1 != 0x55595659)) && (param_1 != 0x59565955)) {
      uVar7 = 0;
    }
    *param_2 = uVar7;
  }
  return 1;
}


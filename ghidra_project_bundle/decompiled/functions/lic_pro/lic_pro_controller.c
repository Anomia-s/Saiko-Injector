/**
 * Function: lic_pro_controller
 * Address:  14012cdf0
 * Signature: undefined lic_pro_controller(void)
 * Body size: 434 bytes
 */


int lic_pro_controller(uint param_1,uint param_2,char *param_3,byte param_4)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  short sVar6;
  
  sVar1 = (short)param_2;
  sVar6 = (short)param_1;
  if (sVar1 == 0 && sVar6 == 0) {
    if (param_3 == (char *)0x0) {
      return 1;
    }
    iVar3 = FUN_1400fd200(param_3,"Lic Pro Controller");
    if (((iVar3 != 0) && (iVar3 = FUN_1400fd200(param_3,"Nintendo Wireless Gamepad"), iVar3 != 0))
       && (iVar3 = FUN_1400fd200(param_3,"Wireless Gamepad"), iVar3 != 0)) {
      return 1;
    }
switchD_14012cf60_caseD_23:
    return 7;
  }
  if (sVar1 == 1 && sVar6 == 1) {
    return 1;
  }
  iVar3 = 8;
  if (sVar1 != 0x2006 || sVar6 != 0x57e) {
    if (sVar1 == 0x2007 && sVar6 == 0x57e) {
      if (param_3 == (char *)0x0) {
        return 9;
      }
      pcVar5 = strstr(param_3,"NES Controller");
      iVar3 = 1;
    }
    else {
      if (sVar1 != 0x200e || sVar6 != 0x57e) {
        if (sVar1 == 0x2008 && sVar6 == 0x57e) {
          return 10;
        }
        if ((param_4 != 0) && (cVar2 = FUN_14012d100(param_1,param_2), cVar2 != '\0')) {
          return 1;
        }
        uVar4 = _x4x_0x4x(param_1 & 0xffff,param_2 & 0xffff);
        switch(uVar4) {
        case 0x1f:
          return 2;
        case 0x20:
          return 3;
        case 0x21:
          return 4;
        case 0x22:
          return 5;
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2b:
          return 1;
        case 0x26:
        case 0x2a:
          goto switchD_14012cf60_caseD_23;
        case 0x2c:
          if (param_4 != 0) {
            return 7;
          }
          return 1;
        case 0x2d:
          return 6;
        case 0x2e:
          return (uint)param_4 * 4 + 1;
        default:
          return 1;
        }
      }
      if (param_3 == (char *)0x0) {
        return 9;
      }
      pcVar5 = strstr(param_3,"(L)");
    }
    if (pcVar5 == (char *)0x0) {
      return 9;
    }
    return iVar3;
  }
  return 8;
}


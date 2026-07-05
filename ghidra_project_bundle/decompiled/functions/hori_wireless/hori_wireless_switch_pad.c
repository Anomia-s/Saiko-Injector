/**
 * Function: hori_wireless_switch_pad
 * Address:  140649480
 * Signature: undefined hori_wireless_switch_pad(void)
 * Body size: 179 bytes
 */


byte hori_wireless_switch_pad
               (undefined8 param_1,char *param_2,int param_3,short param_4,undefined2 param_5)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_1400fd200(param_2,"HORI Wireless Switch Pad");
  if (iVar2 == 0) {
    return 0;
  }
  if (param_4 == 0x57e) {
    switch(param_5) {
    case 0x2007:
      iVar2 = strncmp(param_2,"NES Controller",0xe);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = strncmp(param_2,"HVC Controller",0xe);
      if (iVar2 == 0) {
        return 0;
      }
      break;
    case 0x2017:
    case 0x2019:
    case 0x201e:
      return 0;
    }
  }
  bVar1 = FUN_140649270(param_1);
  return (bVar1 ^ 1) & param_3 == 7;
}


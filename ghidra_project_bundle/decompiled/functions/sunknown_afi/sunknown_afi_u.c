/**
 * Function: sunknown_afi_u
 * Address:  140be81f0
 * Signature: undefined sunknown_afi_u(void)
 * Body size: 569 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 sunknown_afi_u(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  short sVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar8 = 0x140be8214;
  iVar7 = 0;
  iVar3 = FUN_140b77980(param_2);
  if (0 < iVar3) {
    do {
      puVar4 = (undefined8 *)FUN_140b77990(param_2,iVar7);
      if ((((puVar4 == (undefined8 *)0x0) || (piVar1 = (int *)*puVar4, piVar1 == (int *)0x0)) ||
          (puVar2 = *(undefined1 **)(piVar1 + 2), puVar2 == (undefined1 *)0x0)) || (*piVar1 < 2)) {
        sVar6 = 0;
LAB_140be82b8:
        FUN_140c078a0(param_3,"%*sUnknown AFI %u",param_4,&DAT_1413a2ad6,sVar6,uVar8);
      }
      else {
        sVar6 = CONCAT11(*puVar2,puVar2[1]);
        if (sVar6 == 1) {
          FUN_140c078a0(param_3,"%*sIPv4",param_4,&DAT_1413a2ad6);
        }
        else {
          if (sVar6 != 2) goto LAB_140be82b8;
          FUN_140c078a0(param_3,"%*sIPv6",param_4,&DAT_1413a2ad6);
        }
      }
      if (2 < *(int *)*puVar4) {
        switch(*(undefined1 *)(*(longlong *)((int *)*puVar4 + 2) + 2)) {
        case 1:
          FUN_140b73bf0(param_3," (Unicast)");
          break;
        case 2:
          FUN_140b73bf0(param_3," (Multicast)");
          break;
        case 3:
          FUN_140b73bf0(param_3," (Unicast/Multicast)");
          break;
        case 4:
          FUN_140b73bf0(param_3," (MPLS)");
          break;
        default:
          FUN_140c078a0(param_3," (Unknown SAFI %u)");
          break;
        case 0x40:
          FUN_140b73bf0(param_3," (Tunnel)");
          break;
        case 0x41:
          FUN_140b73bf0(param_3," (VPLS)");
          break;
        case 0x42:
          FUN_140b73bf0(param_3," (BGP MDT)");
          break;
        case 0x80:
          FUN_140b73bf0(param_3," (MPLS-labeled VPN)");
        }
      }
      if (*(int *)puVar4[1] == 0) {
        FUN_140b73bf0(param_3,": inherit\n");
      }
      else if (*(int *)puVar4[1] == 1) {
        FUN_140b73bf0(param_3,&DAT_1413a7260);
        uVar5 = dddd(param_3,param_4 + 2,*(undefined8 *)(puVar4[1] + 8),sVar6);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
      }
      iVar7 = iVar7 + 1;
      iVar3 = FUN_140b77980(param_2);
    } while (iVar7 < iVar3);
  }
  return 1;
}


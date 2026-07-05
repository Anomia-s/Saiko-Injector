/**
 * Function: srole_certificate_serial_number
 * Address:  140c6a1c0
 * Signature: undefined srole_certificate_serial_number(void)
 * Body size: 510 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
srole_certificate_serial_number
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar6 = 0x140c6a1de;
  iVar1 = FUN_140b77980(param_2);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      if ((0 < iVar3) && (iVar1 = FUN_140b73bf0(param_3,&DAT_1413a7288), iVar1 < 1)) {
        return 0;
      }
      iVar1 = iVar3 + 1;
      iVar4 = iVar1;
      iVar2 = FUN_140c078a0(param_3,"%*sRole Specification Certificate Identifier #%d:\n",param_4,
                            &DAT_1413a2ad6,iVar1,uVar6);
      if (iVar2 < 1) {
        return 0;
      }
      puVar5 = (undefined8 *)FUN_140b77990(param_2,iVar3);
      iVar3 = FUN_140c078a0(param_3,"%*sRole Name: ",param_4 + 4,&DAT_1413a2ad6,iVar4);
      if (iVar3 < 1) {
        return 0;
      }
      iVar3 = registered_id(param_3,*puVar5);
      if (iVar3 < 1) {
        return 0;
      }
      iVar3 = FUN_140b73bf0(param_3,&DAT_1413a7288);
      if (iVar3 < 1) {
        return 0;
      }
      iVar3 = FUN_140c078a0(param_3,"%*sRole Certificate Issuer: ",param_4 + 4,&DAT_1413a2ad6);
      if (iVar3 < 1) {
        return 0;
      }
      iVar3 = registered_id(param_3,puVar5[1]);
      if (iVar3 < 1) {
        return 0;
      }
      if (puVar5[2] != 0) {
        iVar3 = FUN_140b73bf0(param_3,&DAT_1413a7288);
        if (iVar3 < 1) {
          return 0;
        }
        iVar3 = FUN_140c078a0(param_3,"%*sRole Certificate Serial Number:",param_4 + 4,
                              &DAT_1413a2ad6);
        if (iVar3 < 1) {
          return 0;
        }
        iVar3 = sju_s0xjx(param_3,puVar5[2],param_4 + 4);
        if (iVar3 != 0) {
          return 0;
        }
      }
      if (puVar5[3] != 0) {
        iVar3 = FUN_140b73bf0(param_3,&DAT_1413a7288);
        if (iVar3 < 1) {
          return 0;
        }
        iVar3 = FUN_140c078a0(param_3,"%*sRole Certificate Locator:\n",param_4 + 4,&DAT_1413a2ad6);
        if (iVar3 < 1) {
          return 0;
        }
        iVar3 = FUN_140bc77e0(param_3,puVar5[3],param_4 + 4);
        if (iVar3 < 1) {
          return 0;
        }
      }
      iVar3 = FUN_140b73bf0(param_3,&DAT_1413a7288);
      if (iVar3 != 1) {
        return 0;
      }
      iVar4 = FUN_140b77980(param_2);
      iVar3 = iVar1;
    } while (iVar1 < iVar4);
  }
  return 1;
}


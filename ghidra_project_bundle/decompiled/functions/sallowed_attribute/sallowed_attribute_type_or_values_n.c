/**
 * Function: sallowed_attribute_type_or_values_n
 * Address:  140c6b8e0
 * Signature: undefined sallowed_attribute_type_or_values_n(void)
 * Body size: 641 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
sallowed_attribute_type_or_values_n
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  
  uVar10 = 0x140c6b904;
  iVar7 = 0;
  iVar9 = 0;
  iVar2 = FUN_140b77980(param_2);
  if (0 < iVar2) {
    do {
      iVar2 = FUN_140c078a0(param_3,"%*sAllowed Attributes:\n",param_4,&DAT_1413a2ad6,iVar9,uVar10);
      if (iVar2 < 1) {
        return 0;
      }
      puVar4 = (undefined8 *)FUN_140b77990(param_2,iVar7);
      iVar8 = 0;
      iVar2 = FUN_140b77980(*puVar4);
      if (0 < iVar2) {
        do {
          iVar7 = iVar9;
          iVar9 = FUN_140c078a0(param_3,"%*sAllowed Attribute Type or Values:\n",param_4 + 4,
                                &DAT_1413a2ad6);
          if (iVar9 < 1) {
            return 0;
          }
          piVar5 = (int *)FUN_140b77990(*puVar4,iVar8);
          if (*piVar5 == 0) {
            iVar9 = FUN_140c078a0(param_3,"%*sAttribute Type: ",param_4 + 8,&DAT_1413a2ad6);
            if (iVar9 < 1) {
              return 0;
            }
            iVar9 = FUN_140bde8c0(param_3,*(undefined8 *)(piVar5 + 2));
            if (iVar9 < 1) {
              return 0;
            }
            iVar9 = FUN_140b73bf0(param_3,&DAT_1413a7288);
            if (iVar9 < 1) {
              return 0;
            }
          }
          else {
            if (*piVar5 != 1) {
              return 0;
            }
            uVar1 = *(undefined8 *)(piVar5 + 2);
            uVar6 = FUN_140c16c00(uVar1);
            uVar3 = FUN_140b964c0(uVar6);
            iVar9 = FUN_140c078a0(param_3,"%*sAttribute Values: ",param_4 + 8,&DAT_1413a2ad6);
            if (iVar9 < 1) {
              return 0;
            }
            iVar9 = FUN_140bde8c0(param_3,uVar6);
            if (iVar9 < 1) {
              return 0;
            }
            iVar9 = FUN_140b73bf0(param_3,&DAT_1413a7288);
            if (iVar9 < 1) {
              return 0;
            }
            iVar2 = 0;
            iVar9 = FUN_140c16bd0(uVar1);
            if (0 < iVar9) {
              do {
                uVar6 = FUN_140c16c50(uVar1,iVar2);
                iVar9 = could_not_decode_distinguished_namen(param_3,uVar3,uVar6,param_4 + 0xc);
                if (iVar9 < 1) {
                  return 0;
                }
                iVar9 = FUN_140b73bf0(param_3,&DAT_1413a7288);
                if (iVar9 < 1) {
                  return 0;
                }
                iVar2 = iVar2 + 1;
                iVar9 = FUN_140c16bd0(uVar1);
              } while (iVar2 < iVar9);
            }
          }
          iVar8 = iVar8 + 1;
          iVar2 = FUN_140b77980(*puVar4);
          iVar9 = iVar7;
        } while (iVar8 < iVar2);
      }
      iVar9 = FUN_140c078a0(param_3,"%*sHolder Domain: ",param_4 + 4,&DAT_1413a2ad6);
      if (iVar9 < 1) {
        return 0;
      }
      iVar9 = registered_id(param_3,puVar4[1]);
      if (iVar9 < 1) {
        return 0;
      }
      iVar9 = FUN_140b73bf0(param_3,&DAT_1413a7288);
      if (iVar9 < 1) {
        return 0;
      }
      iVar7 = iVar7 + 1;
      iVar9 = iVar7;
      iVar2 = FUN_140b77980(param_2);
    } while (iVar7 < iVar2);
  }
  return 1;
}


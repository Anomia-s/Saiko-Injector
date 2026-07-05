/**
 * Function: base_out_of_range
 * Address:  1406a88d0
 * Signature: undefined base_out_of_range(void)
 * Body size: 331 bytes
 */


undefined8 base_out_of_range(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte *pbVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_58 [32];
  int local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  iVar2 = FUN_1406b78a0(param_1,2,10);
  if (iVar2 == 10) {
    local_38 = 0;
    dVar6 = (double)FUN_140473880(param_1,1,&local_38);
    if (local_38 != 0) {
LAB_1406a89ba:
      FUN_140474130(param_1,dVar6);
      goto LAB_1406a89d6;
    }
    missing_argument_d(param_1,1);
  }
  else {
    pbVar3 = (byte *)FUN_1406b7610(param_1,1,0);
    if (0x22 < iVar2 - 2U) {
                    /* WARNING: Subroutine does not return */
      invalid_argument_d_s(param_1,2,"base out of range");
    }
    uVar4 = strtoull(pbVar3,&local_38,iVar2);
    pbVar5 = (byte *)CONCAT44(uStack_34,local_38);
    if (pbVar3 != pbVar5) {
      do {
        bVar1 = *pbVar5;
        iVar2 = isspace((uint)bVar1);
        pbVar5 = pbVar5 + 1;
      } while (iVar2 != 0);
      if (bVar1 == 0) {
        auVar7._8_4_ = (int)((ulonglong)uVar4 >> 0x20);
        auVar7._0_8_ = uVar4;
        auVar7._12_4_ = 0x45300000;
        dVar6 = (auVar7._8_8_ - 1.9342813113834067e+25) +
                ((double)CONCAT44(0x43300000,(int)uVar4) - 4503599627370496.0);
        goto LAB_1406a89ba;
      }
    }
  }
  FUN_140474110(param_1);
LAB_1406a89d6:
  if (DAT_1414ef3c0 != (local_30 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_30 ^ (ulonglong)auStack_58);
  }
  return 1;
}


/**
 * Function: ssigned_certificate_timestamp
 * Address:  140cdc350
 * Signature: undefined ssigned_certificate_timestamp(void)
 * Body size: 917 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssigned_certificate_timestamp
               (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
               longlong param_5)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  int local_88;
  int local_84;
  longlong local_80;
  undefined8 local_78;
  undefined1 local_70 [24];
  ulonglong local_58;
  
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  local_80 = param_5;
  local_88 = param_3;
  local_78 = param_4;
  local_84 = FUN_140b77980();
  iVar13 = 0;
  if (0 < local_84) {
    iVar10 = param_3 + 4;
    param_3 = param_3 + 0x10;
    do {
      piVar6 = (int *)FUN_140b77990(param_1,iVar13);
      lVar7 = 0;
      if (local_80 != 0) {
        lVar7 = FUN_140ba2130(local_80,*(undefined8 *)(piVar6 + 6),*(undefined8 *)(piVar6 + 8));
      }
      FUN_140c078a0(param_2,"%*sSigned Certificate Timestamp:",local_88,&DAT_1413a2ad6);
      FUN_140c078a0(param_2,"\n%*sVersion   : ",iVar10,&DAT_1413a2ad6);
      if (*piVar6 == 0) {
        FUN_140c078a0(param_2,"v1 (0x0)");
        if (lVar7 != 0) {
          local_98 = FUN_140b77290(lVar7);
          FUN_140c078a0(param_2,"\n%*sLog       : %s",iVar10,&DAT_1413a2ad6);
        }
        FUN_140c078a0(param_2,"\n%*sLog ID    : ",iVar10,&DAT_1413a2ad6);
        local_98 = CONCAT44(local_98._4_4_,piVar6[8]);
        FUN_140c62240(param_2,param_3,0x10,*(undefined8 *)(piVar6 + 6));
        FUN_140c078a0(param_2,"\n%*sTimestamp : ",iVar10,&DAT_1413a2ad6);
        uVar1 = *(ulonglong *)(piVar6 + 10);
        lVar7 = FUN_140b91090();
        if (lVar7 != 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar1;
          lVar9 = SUB168(ZEXT816(0x8daea1d7f4cf721b) * auVar2,8);
          uVar11 = (uVar1 - lVar9 >> 1) + lVar9 >> 0x1a;
          uVar12 = uVar1 + uVar11 * -86400000;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar12;
          lVar9 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar3,8);
          FUN_140c4d3a0(lVar7,0,uVar11,(uVar12 - lVar9 >> 1) + lVar9 >> 9);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar1;
          lVar9 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar4,8);
          uVar8 = FUN_140b76c30(lVar7);
          local_98 = CONCAT44(local_98._4_4_,
                              (int)uVar1 + (int)((uVar1 - lVar9 >> 1) + lVar9 >> 9) * -1000);
          FUN_140c07aa0(local_70,0x14,"%.14s.%03dZ",uVar8);
          iVar5 = FUN_140c4d430(lVar7,local_70);
          if (iVar5 != 0) {
            FUN_140c4d4c0(param_2,lVar7);
          }
          FUN_140b90e80(lVar7);
        }
        FUN_140c078a0(param_2,"\n%*sExtensions: ",iVar10,&DAT_1413a2ad6);
        if (*(longlong *)(piVar6 + 0xe) == 0) {
          FUN_140c078a0(param_2,&DAT_1413a6280);
        }
        else {
          local_98 = CONCAT44(local_98._4_4_,(int)*(longlong *)(piVar6 + 0xe));
          FUN_140c62240(param_2,param_3,0x10,*(undefined8 *)(piVar6 + 0xc));
        }
        FUN_140c078a0(param_2,"\n%*sSignature : ",iVar10,&DAT_1413a2ad6);
        iVar5 = FUN_140ba0fd0(piVar6);
        if (iVar5 == 0) {
          FUN_140c078a0(param_2,"%02X%02X",(char)piVar6[0x10],
                        *(undefined1 *)((longlong)piVar6 + 0x41));
        }
        else {
          uVar8 = FUN_140b96460(iVar5);
          FUN_140c078a0(param_2,&DAT_1413a5d54,uVar8);
        }
        FUN_140c078a0(param_2,"\n%*s            ",iVar10,&DAT_1413a2ad6);
        uVar8 = *(undefined8 *)(piVar6 + 0x12);
        iVar5 = piVar6[0x14];
      }
      else {
        FUN_140c078a0(param_2,"unknown\n%*s",param_3,&DAT_1413a2ad6);
        uVar8 = *(undefined8 *)(piVar6 + 2);
        iVar5 = piVar6[4];
      }
      local_98 = CONCAT44(local_98._4_4_,iVar5);
      FUN_140c62240(param_2,param_3,0x10,uVar8);
      iVar5 = FUN_140b77980(param_1);
      if (iVar13 < iVar5 + -1) {
        FUN_140c078a0(param_2,&DAT_1413a5d54,local_78);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < local_84);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_b8);
}


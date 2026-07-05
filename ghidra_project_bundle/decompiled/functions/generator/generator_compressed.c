/**
 * Function: generator_compressed
 * Address:  140cf70c0
 * Signature: undefined generator_compressed(void)
 * Body size: 1526 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void generator_compressed(undefined8 param_1,longlong param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auStack_158 [32];
  longlong local_138;
  ulonglong local_128;
  ulonglong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined1 local_d8;
  undefined1 local_d7 [143];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140cf70da;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_158;
  uVar9 = 0;
  local_100 = 0;
  local_118 = 0;
  local_110 = 0;
  uVar7 = 0x80020;
  local_108 = 0;
  uVar13 = 0;
  uVar11 = 0;
  local_f0 = 0;
  uVar10 = 0;
  if (param_2 == 0) {
    uVar7 = 0xc0102;
    uVar10 = uVar9;
    uVar11 = uVar9;
  }
  else {
    lVar4 = FUN_140c93730();
    local_100 = lVar4;
    if (lVar4 == 0) {
      uVar7 = 0x80003;
    }
    else {
      iVar1 = FUN_140c0bdb0(param_2);
      if (iVar1 == 0) {
        iVar1 = FUN_140c0bda0(param_2);
        uVar11 = FUN_140bfcab0();
        local_120 = uVar11;
        if (((uVar11 == 0) || (local_118 = FUN_140bfcab0(), local_118 == 0)) ||
           (local_110 = FUN_140bfcab0(), local_110 == 0)) {
          uVar7 = 0x80003;
          uVar10 = 0;
        }
        else {
          local_138 = lVar4;
          iVar2 = FUN_140c0bf00(param_2,uVar11,local_118,local_110);
          if ((iVar2 != 0) && (lVar4 = FUN_140b76c30(param_2), lVar4 != 0)) {
            local_f8 = FUN_140b77290(param_2);
            local_e8 = FUN_140b772a0(param_2);
            if (local_f8 != 0) {
              iVar2 = FUN_140c0bdd0(param_2);
              local_138 = local_100;
              local_128 = FUN_140c944b0(param_2,lVar4,iVar2,&local_108);
              if (local_128 == 0) {
                uVar7 = 0x80010;
                uVar10 = local_128;
                uVar11 = local_120;
              }
              else {
                local_e0 = FUN_140b74cb0(param_2);
                if (local_e0 != 0) {
                  local_f0 = FUN_140b9f2c0(param_2);
                }
                iVar3 = FUN_140b73ea0(param_1,param_3,0x80);
                uVar10 = local_128;
                uVar11 = local_120;
                if (iVar3 != 0) {
                  uVar5 = FUN_140b96490(iVar1);
                  iVar3 = FUN_140c078a0(param_1,"Field Type: %s\n",uVar5);
                  uVar10 = local_128;
                  uVar11 = local_120;
                  if (0 < iVar3) {
                    if (iVar1 == 0x197) {
                      iVar1 = FUN_140c0daf0(param_2);
                      uVar10 = local_128;
                      uVar11 = local_120;
                      if ((iVar1 != 0) &&
                         (iVar3 = FUN_140b73ea0(param_1,param_3,0x80), uVar10 = local_128,
                         uVar11 = local_120, iVar3 != 0)) {
                        uVar5 = FUN_140b96490(iVar1);
                        iVar1 = FUN_140c078a0(param_1,"Basis Type: %s\n",uVar5);
                        uVar10 = local_128;
                        uVar11 = local_120;
                        if (0 < iVar1) {
                          pcVar6 = "Polynomial:";
                          goto LAB_140cf73a9;
                        }
                      }
                    }
                    else {
                      pcVar6 = "Prime:";
LAB_140cf73a9:
                      local_138 = CONCAT44(local_138._4_4_,param_3);
                      iVar1 = s_slu_s0xlxn(param_1,pcVar6,local_120,0);
                      uVar10 = local_128;
                      uVar11 = local_120;
                      if (iVar1 != 0) {
                        local_138 = CONCAT44(local_138._4_4_,param_3);
                        iVar1 = s_slu_s0xlxn(param_1,"A:   ",local_118,0);
                        uVar10 = local_128;
                        uVar11 = local_120;
                        if (iVar1 != 0) {
                          local_138 = CONCAT44(local_138._4_4_,param_3);
                          iVar1 = s_slu_s0xlxn(param_1,"B:   ",local_110,0);
                          lVar4 = local_108;
                          uVar10 = local_128;
                          uVar11 = local_120;
                          if (iVar1 != 0) {
                            puVar8 = PTR_s_Generator__compressed___14151c7c8;
                            if ((iVar2 != 2) &&
                               (puVar8 = PTR_s_Generator__hybrid___14151c7d8, iVar2 == 4)) {
                              puVar8 = PTR_s_Generator__uncompressed___14151c7d0;
                            }
                            if (local_108 == 0) {
LAB_140cf7622:
                              local_138 = CONCAT44(local_138._4_4_,param_3);
                              iVar1 = s_slu_s0xlxn(param_1,"Order: ",local_f8,0);
                              uVar10 = local_128;
                              uVar11 = local_120;
                              if (iVar1 != 0) {
                                if (local_e8 != 0) {
                                  local_138 = CONCAT44(local_138._4_4_,param_3);
                                  iVar1 = s_slu_s0xlxn(param_1,"Cofactor: ",local_e8,0);
                                  uVar10 = local_128;
                                  uVar11 = local_120;
                                  if (iVar1 == 0) goto LAB_140cf7480;
                                }
                                uVar9 = local_128;
                                uVar12 = local_120;
                                if (local_e0 == 0) goto LAB_140cf74ac;
                                local_138 = CONCAT44(local_138._4_4_,param_3);
                                iVar1 = FUN_140cf76e0(param_1,"Seed:",local_e0,local_f0);
                                uVar10 = local_128;
                                uVar9 = local_128;
                                uVar11 = local_120;
                                uVar12 = local_120;
                                if (iVar1 != 0) goto LAB_140cf74ac;
                              }
                            }
                            else {
                              if (0 < (int)param_3) {
                                uVar13 = 0x80;
                                if ((int)param_3 < 0x81) {
                                  uVar13 = param_3;
                                }
                                memset(&local_d8,0x20,(ulonglong)uVar13);
                                iVar1 = FUN_140b73860(param_1,&local_d8,uVar13);
                                uVar10 = local_128;
                                uVar11 = local_120;
                                if (iVar1 < 1) goto LAB_140cf7480;
                              }
                              iVar1 = FUN_140c078a0(param_1,&DAT_1413a5d54,puVar8);
                              uVar10 = local_128;
                              uVar11 = local_120;
                              if (0 < iVar1) {
                                if (local_128 != 0) {
                                  do {
                                    if (uVar9 == (uVar9 / 0xf) * 0xf) {
                                      local_d8 = 10;
                                      memset(local_d7,0x20,(longlong)(int)(uVar13 + 4));
                                      iVar1 = FUN_140b73860(param_1,&local_d8,uVar13 + 5);
                                      uVar10 = local_128;
                                      uVar11 = local_120;
                                      if (iVar1 < 1) goto LAB_140cf7480;
                                    }
                                    pcVar6 = ":";
                                    if (uVar9 + 1 == local_128) {
                                      pcVar6 = "";
                                    }
                                    iVar1 = FUN_140c078a0(param_1,"%02x%s",
                                                          *(undefined1 *)(uVar9 + lVar4),pcVar6);
                                    uVar10 = local_128;
                                    uVar11 = local_120;
                                    if (iVar1 < 1) goto LAB_140cf7480;
                                    uVar9 = uVar9 + 1;
                                  } while (uVar9 < local_128);
                                }
                                uVar10 = local_128;
                                iVar1 = FUN_140b73860(param_1,&DAT_1413a7288,1);
                                uVar11 = local_120;
                                if (0 < iVar1) goto LAB_140cf7622;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_140cf7480;
            }
          }
          uVar7 = 0x80010;
          uVar10 = 0;
        }
      }
      else {
        iVar1 = FUN_140b73ea0(param_1,param_3,0x80);
        if ((iVar1 != 0) && (iVar1 = FUN_140c0bd90(param_2), iVar1 != 0)) {
          uVar5 = FUN_140b96490(iVar1);
          iVar2 = FUN_140c078a0(param_1,"ASN1 OID: %s",uVar5);
          if (((0 < iVar2) && (iVar2 = FUN_140c078a0(param_1,&DAT_1413a7288), 0 < iVar2)) &&
             ((lVar4 = FUN_140c7e640(iVar1), uVar12 = uVar9, lVar4 == 0 ||
              ((iVar1 = FUN_140b73ea0(param_1,param_3,0x80), iVar1 != 0 &&
               (iVar1 = FUN_140c078a0(param_1,"NIST CURVE: %s\n",lVar4), 0 < iVar1))))))
          goto LAB_140cf74ac;
        }
      }
    }
  }
LAB_140cf7480:
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ec\\eck_prn.c",0xd8,"ECPKParameters_print")
  ;
  FUN_140b91cc0(0x10,uVar7,0);
  uVar9 = uVar10;
  uVar12 = uVar11;
LAB_140cf74ac:
  FUN_140bfcf10(uVar12);
  FUN_140bfcf10(local_118);
  FUN_140bfcf10(local_110);
  FUN_140b8db20(local_108,uVar9,"crypto\\ec\\eck_prn.c",0xdc);
  FUN_140c93850(local_100);
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_158);
}


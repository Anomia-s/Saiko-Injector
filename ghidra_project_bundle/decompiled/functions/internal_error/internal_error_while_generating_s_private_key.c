/**
 * Function: internal_error_while_generating_s_private_key
 * Address:  140da5e70
 * Signature: undefined internal_error_while_generating_s_private_key(void)
 * Body size: 954 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void internal_error_while_generating_s_private_key
               (undefined4 *param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  ushort *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  code *pcVar13;
  ulonglong *puVar14;
  int iVar15;
  ushort *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_2a8 [32];
  longlong *local_288;
  undefined8 local_280;
  longlong *local_278;
  undefined1 local_268 [4];
  int local_264;
  undefined8 *local_260;
  longlong local_258;
  undefined4 *local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 local_228;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined1 local_1f8 [32];
  ulonglong local_1d8 [48];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x140da5e8f;
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_2a8;
  local_260 = (undefined8 *)*param_4;
  pcVar13 = FUN_140da5120;
  uVar3 = *(undefined4 *)(local_260 + 9);
  local_248 = *param_1;
  uStack_244 = param_1[1];
  uStack_240 = param_1[2];
  uStack_23c = param_1[3];
  if (*(int *)(local_260 + 8) == 0x5ae) {
    pcVar13 = FUN_140da52c0;
  }
  local_238 = param_1[4];
  uStack_234 = param_1[5];
  uStack_230 = param_1[6];
  uStack_22c = param_1[7];
  local_268[0] = 0;
  local_228 = (undefined1)uVar3;
  local_250 = param_1;
  iVar8 = FUN_140b70ff0(param_2,param_4[5],0);
  puVar17 = local_260;
  if (iVar8 != 0) {
    local_264 = 0x40;
    iVar8 = evp_digestupdate(param_2,&local_248,0x21);
    puVar17 = local_260;
    if (iVar8 != 0) {
      uVar10 = FUN_140b76060(param_2);
      iVar8 = FUN_140b97c00(uVar10);
      if (iVar8 == 0) {
        iVar8 = assertion_failed_mdsize_evp_max_md_size(param_2,&local_218,&local_264);
        puVar17 = local_260;
        if ((iVar8 != 0) && (local_264 == 0x40)) goto LAB_140da5ff9;
      }
      else {
        iVar8 = FUN_140b71630(param_2,&local_218,0x40);
        puVar17 = local_260;
        if (iVar8 != 0) {
LAB_140da5ff9:
          puVar11 = (undefined4 *)param_4[6];
          *puVar11 = local_218;
          puVar11[1] = uStack_214;
          puVar11[2] = uStack_210;
          puVar11[3] = uStack_20c;
          puVar11[4] = local_208;
          puVar11[5] = uStack_204;
          puVar11[6] = uStack_200;
          puVar11[7] = uStack_1fc;
          iVar8 = FUN_140da4f70(param_2,param_4);
          puVar17 = local_260;
          if (iVar8 != 0) {
            local_288 = (longlong *)CONCAT44(local_288._4_4_,uVar3);
            local_280 = param_2;
            local_278 = param_4;
            iVar8 = FUN_140da5560(param_4[10],pcVar13,local_268,local_1f8);
            puVar17 = local_260;
            if (iVar8 != 0) {
              local_288 = (longlong *)CONCAT44(local_288._4_4_,uVar3);
              local_280 = param_2;
              local_278 = param_4;
              iVar8 = FUN_140da5560(param_4[8],pcVar13,local_268,local_1f8);
              puVar17 = local_260;
              if (iVar8 != 0) {
                FUN_140da4b40(param_4[8],param_4[9],param_4[10],uVar3);
                if (param_3 == 0) {
                  local_258 = param_4[7];
                  puVar4 = (ushort *)param_4[8];
                  iVar8 = *(int *)(*param_4 + 0x48);
                  iVar9 = FUN_140b70ff0(param_2,param_4[4]);
                  puVar17 = local_260;
                  puVar16 = puVar4;
                  if (iVar9 != 0) {
                    do {
                      puVar1 = puVar16 + 0x100;
                      uVar12 = 0;
                      puVar14 = local_1d8;
                      iVar9 = 0;
                      do {
                        uVar2 = *puVar16;
                        iVar15 = iVar9 + 0xc;
                        puVar16 = puVar16 + 1;
                        uVar12 = (ulonglong)uVar2 << ((byte)iVar9 & 0x3f) | uVar12;
                        if (0x3f < iVar15) {
                          *puVar14 = uVar12;
                          if (iVar15 < 0x41) {
                            uVar12 = 0;
                            puVar14 = puVar14 + 1;
                            iVar15 = 0;
                          }
                          else {
                            uVar12 = (ulonglong)(uVar2 >> (0x40 - (byte)iVar9 & 0x3f));
                            puVar14 = puVar14 + 1;
                            iVar15 = iVar9 + -0x34;
                          }
                        }
                        iVar9 = iVar15;
                      } while (puVar16 < puVar1);
                      iVar9 = evp_digestupdate(param_2,local_1d8);
                      puVar17 = local_260;
                      if (iVar9 == 0) goto LAB_140da5f61;
                      puVar16 = puVar1;
                    } while (puVar1 < puVar4 + (longlong)iVar8 * 0x100);
                    iVar8 = evp_digestupdate(param_2,param_4[6],0x20);
                    puVar17 = local_260;
                    if (((iVar8 != 0) &&
                        (iVar8 = assertion_failed_mdsize_evp_max_md_size
                                           (param_2,local_258,&local_264), puVar17 = local_260,
                        iVar8 != 0)) && (param_1 = local_250, local_264 == 0x20))
                    goto LAB_140da619f;
                  }
                }
                else {
                  FUN_140da5d00(param_3,param_4);
                  puVar17 = local_260;
                  local_288 = param_4;
                  iVar8 = FUN_140da34b0(param_4[7],param_3,local_260[3],param_2);
                  if (iVar8 != 0) {
LAB_140da619f:
                    uVar3 = param_1[9];
                    uVar6 = param_1[10];
                    uVar7 = param_1[0xb];
                    puVar11 = (undefined4 *)param_4[0xb];
                    *puVar11 = param_1[8];
                    puVar11[1] = uVar3;
                    puVar11[2] = uVar6;
                    puVar11[3] = uVar7;
                    uVar3 = param_1[0xd];
                    uVar6 = param_1[0xe];
                    uVar7 = param_1[0xf];
                    puVar11[4] = param_1[0xc];
                    puVar11[5] = uVar3;
                    puVar11[6] = uVar6;
                    puVar11[7] = uVar7;
                    lVar5 = param_4[0xb];
                    puVar11 = (undefined4 *)(lVar5 + 0x20);
                    param_4[0xc] = (longlong)puVar11;
                    if ((*(byte *)(param_4 + 0xd) & 8) == 0) {
                      FUN_14046e980(puVar11,0x20);
                      param_4[0xc] = 0;
                    }
                    else {
                      uVar3 = param_1[1];
                      uVar6 = param_1[2];
                      uVar7 = param_1[3];
                      *puVar11 = *param_1;
                      *(undefined4 *)(lVar5 + 0x24) = uVar3;
                      *(undefined4 *)(lVar5 + 0x28) = uVar6;
                      *(undefined4 *)(lVar5 + 0x2c) = uVar7;
                      uVar10 = *(undefined8 *)(param_1 + 6);
                      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(param_1 + 4);
                      *(undefined8 *)(lVar5 + 0x38) = uVar10;
                    }
                    FUN_14046e980(&local_248,0x20);
                    FUN_14046e980(local_1f8,0x20);
                    goto LAB_140da5fb9;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_140da5f61:
  FUN_14046e980(&local_248,0x20);
  FUN_14046e980(local_1f8,0x20);
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ml_kem\\ml_kem.c",0x594,"genkey");
  FUN_140b91cc0(0xf,0xc0103,"internal error while generating %s private key",*puVar17);
LAB_140da5fb9:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_2a8);
}


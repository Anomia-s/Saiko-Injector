/**
 * Function: tls_process_cert_verify
 * Address:  140bb9230
 * Signature: undefined tls_process_cert_verify(void)
 * Body size: 1406 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tls_process_cert_verify(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108 [2];
  undefined1 local_f8 [176];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140bb9246;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_168;
  lVar9 = 0;
  lVar15 = 0;
  local_128 = 0;
  local_110 = 0;
  local_118 = 0;
  lVar6 = FUN_140b70980();
  local_120 = 0;
  puVar3 = *(undefined8 **)(param_1 + 8);
  lVar10 = lVar9;
  if (lVar6 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_lib.c",0x1c7,"tls_process_cert_verify");
    FUN_140ba3290(param_1,0x50,0x80006,0);
    goto LAB_140bb9766;
  }
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x2b8);
  if ((lVar7 == 0) &&
     ((*(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x2c0) == 0 ||
      (lVar7 = FUN_140b74cd0(), lVar7 == 0)))) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar11 = 0x1cd;
LAB_140bb9735:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_lib.c",uVar11,"tls_process_cert_verify");
    uVar14 = 0xc0103;
    lVar15 = lVar9;
LAB_140bb974e:
    uVar11 = 0x50;
  }
  else {
    lVar8 = FUN_140ba9e60(lVar7,0,puVar3);
    if (lVar8 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_lib.c",0x1d3,"tls_process_cert_verify");
      uVar11 = 0x2f;
      uVar14 = 0xdc;
      lVar15 = lVar9;
    }
    else if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 2) == 0) {
      iVar5 = FUN_140bb24f0(param_1,lVar7);
      if (iVar5 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_lib.c",0x1e4,"tls_process_cert_verify");
        uVar14 = 0x14d;
        goto LAB_140bb974e;
      }
LAB_140bb9396:
      iVar5 = FUN_140bb2550(puVar3,*(undefined8 *)(param_1 + 0x400),&local_110);
      if (iVar5 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar11 = 0x1e9;
        goto LAB_140bb9735;
      }
      if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 2) == 0) &&
         (((param_2[1] == 0x40 &&
           ((iVar5 = FUN_140b78ee0(lVar7), iVar5 == 0x32b ||
            (iVar5 = FUN_140b78ee0(lVar7), iVar5 == 0x3d3)))) ||
          ((param_2[1] == 0x80 && (iVar5 = FUN_140b78ee0(lVar7), iVar5 == 0x3d4)))))) {
        uVar13 = *(uint *)(param_2 + 1);
LAB_140bb94a1:
        uVar12 = (ulonglong)uVar13;
        if ((ulonglong)param_2[1] < uVar12) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar11 = 0x206;
        }
        else {
          lVar8 = *param_2;
          lVar10 = param_2[1] - uVar12;
          param_2[1] = lVar10;
          *param_2 = uVar12 + lVar8;
          if (lVar10 == 0) {
            iVar5 = tls_13_server_certificateverify(param_1,local_f8,local_108,&local_118);
            lVar10 = lVar15;
            if (iVar5 == 0) goto LAB_140bb9766;
            if (local_110 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_140b97a80();
            }
            local_148 = puVar3[0x8c];
            local_138 = 0;
            local_140 = lVar7;
            iVar5 = FUN_140bd0d20(lVar6,&local_120,uVar11,*puVar3);
            if (iVar5 < 1) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              uVar11 = 0x21a;
            }
            else {
              iVar5 = FUN_140b78ee0(lVar7);
              if ((iVar5 == 0x32b) || (iVar5 - 0x3d3U < 2)) {
                lVar9 = FUN_140b8d8d0(uVar13,"ssl\\statem\\statem_lib.c",0x223);
                lVar10 = lVar9;
                if (lVar9 == 0) goto LAB_140bb9766;
                FUN_140b8f210(lVar9,lVar8,uVar13);
                lVar8 = lVar9;
              }
              if (((*(longlong *)(param_1 + 0x400) == 0) ||
                  (*(int *)(*(longlong *)(param_1 + 0x400) + 0x1c) != 0x390)) ||
                 ((iVar5 = FUN_140c29750(local_120,6), 0 < iVar5 &&
                  (iVar5 = FUN_140c29810(local_120,0xffffffff), 0 < iVar5)))) {
                if (*(int *)(param_1 + 0x48) == 0x300) {
                  iVar5 = s_digest_verify_update_s(lVar6,local_108[0],local_118);
                  if ((iVar5 < 1) ||
                     (iVar5 = FUN_140b70730(lVar6,0x1d,
                                            *(undefined4 *)(*(longlong *)(param_1 + 0x8f8) + 8),
                                            *(longlong *)(param_1 + 0x8f8) + 0x50), iVar5 < 1)) {
                    d_aplatformplatformopenssl_srccryptoerrerr_lo();
                    uVar11 = 0x238;
                    goto LAB_140bb955c;
                  }
                  iVar5 = s_digest_verify_final_s(lVar6,lVar8,uVar13);
                  if (0 < iVar5) goto LAB_140bb96c9;
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  uVar11 = 0x23c;
                }
                else {
                  local_148 = local_118;
                  iVar5 = evp_digestverify(lVar6,lVar8,uVar13,local_108[0]);
                  if (0 < iVar5) {
LAB_140bb96c9:
                    lVar10 = lVar9;
                    if ((((*(int *)(param_1 + 0x78) == 0) &&
                         ((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) ==
                          0)) && (iVar5 = **(int **)(param_1 + 0x18), 0x303 < iVar5)) &&
                       ((iVar5 != 0x10000 && (*(int *)(param_1 + 0x340) == 1)))) {
                      local_128 = 2;
                    }
                    else {
                      local_128 = 3;
                    }
                    goto LAB_140bb9766;
                  }
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  uVar11 = 0x247;
                }
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\statem\\statem_lib.c",uVar11,"tls_process_cert_verify");
                uVar11 = 0x33;
                uVar14 = 0x7b;
                lVar15 = lVar9;
                goto LAB_140bb9753;
              }
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              uVar11 = 0x22f;
            }
LAB_140bb955c:
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\statem\\statem_lib.c",uVar11,"tls_process_cert_verify");
            uVar14 = 0x80006;
            lVar15 = lVar9;
            goto LAB_140bb974e;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar11 = 0x20a;
        }
      }
      else {
        if (1 < (ulonglong)param_2[1]) {
          puVar4 = (undefined1 *)*param_2;
          uVar13 = (uint)CONCAT11(*puVar4,puVar4[1]);
          *param_2 = (longlong)(puVar4 + 2);
          param_2[1] = param_2[1] - 2;
          goto LAB_140bb94a1;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar11 = 0x201;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_lib.c",uVar11,"tls_process_cert_verify");
      uVar11 = 0x32;
      uVar14 = 0x9f;
    }
    else {
      if (1 < (ulonglong)param_2[1]) {
        puVar4 = (undefined1 *)*param_2;
        uVar1 = puVar4[1];
        uVar2 = *puVar4;
        *param_2 = (longlong)(puVar4 + 2);
        param_2[1] = param_2[1] - 2;
        iVar5 = FUN_140bb2700(param_1,CONCAT11(uVar2,uVar1),lVar7);
        if (iVar5 < 1) goto LAB_140bb9766;
        goto LAB_140bb9396;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_lib.c",0x1db,"tls_process_cert_verify");
      uVar11 = 0x32;
      uVar14 = 0xf0;
    }
  }
LAB_140bb9753:
  FUN_140ba3290(param_1,uVar11,uVar14,0);
  lVar10 = lVar15;
LAB_140bb9766:
  FUN_140b73150(*(undefined8 *)(param_1 + 0x1a8));
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  FUN_140b709d0(lVar6);
  FUN_140b8d990(lVar10,"ssl\\statem\\statem_lib.c",0x25d);
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_168);
}


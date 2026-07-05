/**
 * Function: verify_error_s
 * Address:  140ba98a0
 * Signature: undefined verify_error_s(void)
 * Body size: 942 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int verify_error_s(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  longlong local_res20;
  
  lVar8 = 0;
  lVar10 = 0;
  local_res20 = 0;
  if (param_1 == 0) {
    plVar13 = (longlong *)param_2[0x2b];
    puVar7 = param_2;
  }
  else {
    plVar13 = *(longlong **)(param_1 + 0x878);
    puVar7 = *(undefined8 **)(param_1 + 8);
  }
  plVar1 = (longlong *)*plVar13;
  iVar3 = 0;
  iVar14 = 0;
  iVar4 = 0;
  if (*plVar1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_cert.c",0x437,"ssl_build_cert_chain");
    FUN_140b91cc0(0x14,0xb3,0);
    iVar4 = iVar3;
LAB_140ba9c22:
    iVar3 = iVar4;
    if ((param_3 & 4) == 0) goto LAB_140ba9c34;
  }
  else {
    if ((param_3 & 4) == 0) {
      lVar8 = plVar13[0xe];
      if (lVar8 == 0) {
        lVar8 = puVar7[5];
      }
      if ((param_3 & 1) != 0) {
        local_res20 = plVar1[2];
      }
LAB_140ba99d6:
      lVar10 = FUN_140bd9320(*puVar7,puVar7[0x8c]);
      if (lVar10 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\ssl_cert.c",0x453,"ssl_build_cert_chain");
        FUN_140b91cc0(0x14,0x8000b,0);
        iVar4 = iVar3;
      }
      else {
        iVar2 = x509_store_ctx_init(lVar10,lVar8,*plVar1,local_res20);
        if (iVar2 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\ssl_cert.c",0x457,"ssl_build_cert_chain");
          FUN_140b91cc0(0x14,0x8000b,0);
          iVar4 = iVar3;
        }
        else {
          FUN_140bd9bc0(lVar10,*(uint *)((longlong)plVar13 + 0x1c) & 0x30000);
          iVar3 = x509_verify_cert(lVar10);
          if (iVar3 < 1) {
            if ((param_3 & 8) == 0) {
              uVar6 = FUN_140bd9b70(lVar10);
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\ssl_cert.c",0x469,"ssl_build_cert_chain");
              uVar9 = invalid_certificate_verification_context(uVar6);
              FUN_140b91cc0(0x14,0x86,"Verify error:%s",uVar9);
              goto LAB_140ba9c22;
            }
            if ((param_3 & 0x10) != 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
            }
            iVar14 = 2;
          }
          lVar11 = FUN_140bd9b90(lVar10);
          uVar9 = FUN_140b78390(lVar11);
          FUN_140b763d0(uVar9);
          if (((param_3 & 2) != 0) && (iVar4 = FUN_140b77980(lVar11), 0 < iVar4)) {
            iVar4 = FUN_140b77980(lVar11);
            uVar9 = FUN_140b77990(lVar11,iVar4 + -1);
            uVar5 = FUN_140bc5590(uVar9);
            if ((uVar5 >> 0xd & 1) != 0) {
              uVar9 = FUN_140b783c0(lVar11);
              FUN_140b763d0(uVar9);
            }
          }
          iVar3 = 0;
          iVar4 = FUN_140b77980(lVar11);
          if (iVar4 < 1) {
            FUN_140b9f7a0(plVar1[2]);
            plVar1[2] = lVar11;
            iVar4 = iVar14;
            if (iVar14 == 0) {
              iVar4 = 1;
            }
          }
          else {
            do {
              uVar9 = FUN_140b77990(lVar11,iVar3);
              iVar4 = FUN_140bb17f0(param_1,param_2,uVar9,0,0);
              if (iVar4 != 1) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\ssl_cert.c",0x483,"ssl_build_cert_chain");
                FUN_140b91cc0(0x14,iVar4,0);
                FUN_140b9f7a0(lVar11);
                iVar4 = 0;
                goto LAB_140ba9c22;
              }
              iVar3 = iVar3 + 1;
              iVar4 = FUN_140b77980(lVar11);
            } while (iVar3 < iVar4);
            FUN_140b9f7a0(plVar1[2]);
            plVar1[2] = lVar11;
            iVar4 = 1;
          }
        }
      }
      goto LAB_140ba9c22;
    }
    lVar8 = FUN_140b76910();
    if (lVar8 != 0) {
      iVar12 = 0;
      iVar2 = FUN_140b77980(plVar1[2]);
      if (0 < iVar2) {
        do {
          uVar9 = FUN_140b77990(plVar1[2],iVar12);
          iVar2 = FUN_140b77100(lVar8,uVar9);
          if (iVar2 == 0) goto LAB_140ba9c2c;
          iVar12 = iVar12 + 1;
          iVar2 = FUN_140b77980(plVar1[2]);
        } while (iVar12 < iVar2);
      }
      iVar2 = FUN_140b77100(lVar8,*plVar1);
      if (iVar2 != 0) goto LAB_140ba99d6;
    }
  }
LAB_140ba9c2c:
  FUN_140b76ab0(lVar8);
LAB_140ba9c34:
  FUN_140bd9600(lVar10);
  return iVar3;
}


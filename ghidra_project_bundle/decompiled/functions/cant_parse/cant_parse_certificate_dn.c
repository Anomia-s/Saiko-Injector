/**
 * Function: cant_parse_certificate_dn
 * Address:  140c77650
 * Signature: undefined cant_parse_certificate_dn(void)
 * Body size: 774 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
cant_parse_certificate_dn
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
          undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  HCERTSTORE hCertStore;
  PCCERT_CONTEXT pCertContext;
  longlong lVar5;
  undefined8 uVar6;
  PCCERT_CONTEXT pCVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  BYTE *local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140c77673;
  uVar15 = 0;
  lVar4 = FUN_140c10320(param_1,DAT_141517ed0);
  *param_4 = 0;
  *param_5 = 0;
  puVar11 = &DAT_1413a660c;
  if (*(undefined **)(lVar4 + 0x30) != (undefined *)0x0) {
    puVar11 = *(undefined **)(lVar4 + 0x30);
  }
  hCertStore = (HCERTSTORE)opening_certificate_store_sn(lVar4,puVar11);
  if (hCertStore != (HCERTSTORE)0x0) {
    pCertContext = CertEnumCertificatesInStore(hCertStore,(PCCERT_CONTEXT)0x0);
    uVar8 = uVar15;
    uVar13 = uVar15;
    for (; pCertContext != (PCCERT_CONTEXT)0x0;
        pCertContext = CertEnumCertificatesInStore(hCertStore,pCertContext)) {
      local_48 = pCertContext->pbCertEncoded;
      lVar5 = FUN_140b763f0(0,&local_48,pCertContext->cbCertEncoded);
      if (lVar5 == 0) {
        enginese_capic(lVar4,"Can\'t Parse Certificate %d\n",uVar13);
      }
      else {
        iVar2 = FUN_140b77980(param_3);
        if (iVar2 < 1) {
LAB_140c77789:
          iVar2 = FUN_140bc53f0(lVar5,1,0);
          if ((iVar2 != 0) &&
             (puVar9 = (undefined8 *)enginese_capic(lVar4,pCertContext), puVar9 != (undefined8 *)0x0
             )) {
            pCVar7 = CertDuplicateCertificateContext(pCertContext);
            uVar1 = DAT_141517edc;
            *puVar9 = pCVar7;
            FUN_140b76500(lVar5,uVar1,puVar9);
            if (uVar8 == 0) {
              uVar8 = FUN_140b77ab0();
            }
            iVar2 = FUN_140b78340(uVar8,lVar5);
            if (iVar2 != 0) goto LAB_140c777f6;
          }
        }
        else {
          iVar2 = FUN_140b77980(param_3);
          uVar12 = uVar15;
          if (0 < iVar2) {
            do {
              uVar10 = FUN_140b77990(param_3,uVar12);
              uVar6 = FUN_140b74cb0(lVar5);
              iVar2 = FUN_140b755d0(uVar10,uVar6);
              if (iVar2 == 0) goto LAB_140c77789;
              uVar14 = (int)uVar12 + 1;
              iVar2 = FUN_140b77980(param_3);
              uVar12 = (ulonglong)uVar14;
            } while ((int)uVar14 < iVar2);
          }
        }
        FUN_140b763d0(lVar5);
      }
LAB_140c777f6:
      uVar13 = (ulonglong)((int)uVar13 + 1);
    }
    CertCloseStore(hCertStore,0);
    if (uVar8 != 0) {
      iVar2 = (**(code **)(lVar4 + 0x48))(param_1,param_2,uVar8);
      iVar3 = FUN_140b77980(uVar8);
      if (0 < iVar3) {
        do {
          lVar4 = FUN_140b77990(uVar8,uVar15);
          if ((int)uVar15 == iVar2) {
            *param_4 = lVar4;
          }
          else {
            puVar9 = (undefined8 *)FUN_140b76520(lVar4,DAT_141517edc);
            if (puVar9 != (undefined8 *)0x0) {
              CryptDestroyKey(puVar9[2]);
              CryptReleaseContext(puVar9[1],0);
              if ((PCCERT_CONTEXT)*puVar9 != (PCCERT_CONTEXT)0x0) {
                CertFreeCertificateContext((PCCERT_CONTEXT)*puVar9);
              }
              FUN_140b8d990(puVar9,"engines\\e_capi.c",0x659);
            }
            FUN_140b763d0(lVar4);
          }
          uVar14 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar14;
          iVar3 = FUN_140b77980(uVar8);
        } while ((int)uVar14 < iVar3);
      }
      FUN_140b77c10(uVar8);
      if (*param_4 != 0) {
        uVar10 = FUN_140b76520(*param_4,DAT_141517edc);
        uVar10 = err_capi_error(param_1,uVar10);
        uVar1 = DAT_141517edc;
        *param_5 = uVar10;
        FUN_140b76500(*param_4,uVar1,0);
        return 1;
      }
    }
  }
  return 0;
}


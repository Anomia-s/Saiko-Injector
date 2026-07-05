/**
 * Function: listing_certs_for_store_sn
 * Address:  140c76550
 * Signature: undefined listing_certs_for_store_sn(void)
 * Body size: 285 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 listing_certs_for_store_sn(longlong param_1,undefined8 param_2,longlong param_3)

{
  HCERTSTORE hCertStore;
  PCCERT_CONTEXT pCVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar4 = &DAT_1413a660c;
  if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_1 + 0x28);
  }
  enginese_capic(param_1,"Listing certs for store %s\n",puVar4);
  hCertStore = (HCERTSTORE)opening_certificate_store_sn(param_1,puVar4);
  uVar2 = 0;
  if (hCertStore != (HCERTSTORE)0x0) {
    uVar2 = 1;
    if (param_3 == 0) {
      iVar3 = 0;
      for (pCVar1 = CertEnumCertificatesInStore(hCertStore,(PCCERT_CONTEXT)0x0);
          pCVar1 != (PCCERT_CONTEXT)0x0; pCVar1 = CertEnumCertificatesInStore(hCertStore,pCVar1)) {
        FUN_140c078a0(param_2,"Certificate %d\n",iVar3);
        container_name_s_key_type_lun(param_1,param_2,pCVar1);
        iVar3 = iVar3 + 1;
      }
    }
    else {
      pCVar1 = (PCCERT_CONTEXT)capi_cert_get_fnamen(param_1,param_3,hCertStore);
      if (pCVar1 == (PCCERT_CONTEXT)0x0) {
        uVar2 = 0;
      }
      else {
        container_name_s_key_type_lun(param_1,param_2,pCVar1);
        CertFreeCertificateContext(pCVar1);
      }
    }
    CertCloseStore(hCertStore,0);
  }
  return uVar2;
}


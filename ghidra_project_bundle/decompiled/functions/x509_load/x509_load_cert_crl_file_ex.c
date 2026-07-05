/**
 * Function: x509_load_cert_crl_file_ex
 * Address:  140b9aee0
 * Signature: undefined x509_load_cert_crl_file_ex(void)
 * Body size: 450 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong x509_load_cert_crl_file_ex
                    (longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                    undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = 0;
  if (param_3 != 1) {
    uVar2 = x509_load_cert_file_ex();
    return uVar2;
  }
  lVar3 = calling_fopens_s(param_2,&DAT_1413a64f4);
  if (lVar3 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\by_file.c",0xf7,"X509_load_cert_crl_file_ex");
    FUN_140b91cc0(0xb,0x80020,0);
    return 0;
  }
  lVar4 = pem_x509_info_read_bio_ex(lVar3,0,0,&DAT_1413a2ad6,param_4,param_5);
  FUN_140b73150(lVar3);
  if (lVar4 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\by_file.c",0xfd,"X509_load_cert_crl_file_ex");
    FUN_140b91cc0(0xb,0x80009,0);
    return 0;
  }
  iVar7 = 0;
  iVar1 = FUN_140b77980(lVar4);
  if (0 < iVar1) {
    do {
      plVar5 = (longlong *)FUN_140b77990(lVar4,iVar7);
      if (*plVar5 != 0) {
        iVar1 = FUN_140b77100(*(undefined8 *)(param_1 + 0x18));
        if (iVar1 != 0) {
          uVar6 = uVar6 + 1;
          goto LAB_140b9b017;
        }
LAB_140b9b09e:
        uVar6 = 0;
        goto LAB_140b9b075;
      }
LAB_140b9b017:
      if (plVar5[1] != 0) {
        iVar1 = FUN_140b77160(*(undefined8 *)(param_1 + 0x18));
        if (iVar1 == 0) goto LAB_140b9b09e;
        uVar6 = uVar6 + 1;
      }
      iVar7 = iVar7 + 1;
      iVar1 = FUN_140b77980(lVar4);
    } while (iVar7 < iVar1);
    if (uVar6 != 0) goto LAB_140b9b075;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("crypto\\x509\\by_file.c",0x112,"X509_load_cert_crl_file_ex");
  FUN_140b91cc0(0xb,0x88,0);
LAB_140b9b075:
  FUN_140b77c60(lVar4,cryptoasn1x_infoc);
  return (ulonglong)uVar6;
}


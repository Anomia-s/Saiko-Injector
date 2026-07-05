/**
 * Function: x509_load_crl_file
 * Address:  140b9aca0
 * Signature: undefined x509_load_crl_file(void)
 * Body size: 562 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int x509_load_crl_file(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  
  lVar3 = 0;
  iVar6 = 0;
  lVar5 = 0;
  if (param_2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\by_file.c",0xb1,"X509_load_crl_file");
    uVar4 = 0xc0102;
    lVar5 = 0;
    iVar6 = 0;
  }
  else {
    uVar4 = FUN_140bf2830();
    lVar3 = FUN_140b73040(uVar4);
    if ((lVar3 == 0) || (iVar1 = FUN_140b74190(lVar3,0x6c,3,param_2), iVar1 < 1)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\x509\\by_file.c",0xb8,"X509_load_crl_file");
      uVar4 = 0x80020;
    }
    else if (param_3 == 1) {
      lVar5 = FUN_140c25a70(lVar3,0,0,&DAT_1413a2ad6);
      iVar6 = 0;
      while (lVar5 != 0) {
        iVar1 = FUN_140b77160(*(undefined8 *)(param_1 + 0x18),lVar5);
        if (iVar1 == 0) {
          iVar6 = 0;
          goto LAB_140b9aea7;
        }
        iVar6 = iVar6 + 1;
        FUN_140beb890(lVar5);
        lVar5 = FUN_140c25a70(lVar3,0,0,&DAT_1413a2ad6);
      }
      uVar2 = FUN_140b92170();
      if (((((int)uVar2 >> 0x1f & 0x7f800000U) + 0x7fffff & uVar2) == 0x6c) && (0 < iVar6)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        goto LAB_140b9aea7;
      }
      if (iVar6 == 0) {
        uVar4 = 0x89;
        uVar7 = 0xc6;
      }
      else {
        iVar6 = 0;
        uVar4 = 0x80009;
        uVar7 = 200;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\x509\\by_file.c",uVar7,"X509_load_crl_file");
    }
    else if (param_3 == 2) {
      lVar5 = FUN_140bf3520(lVar3,0);
      if (lVar5 != 0) {
        iVar6 = FUN_140b77160(*(undefined8 *)(param_1 + 0x18),lVar5);
        goto LAB_140b9aea7;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\x509\\by_file.c",0xd9,"X509_load_crl_file");
      uVar4 = 0x89;
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\x509\\by_file.c",0xde,"X509_load_crl_file");
      uVar4 = 100;
      lVar5 = 0;
    }
  }
  FUN_140b91cc0(0xb,uVar4,0);
LAB_140b9aea7:
  FUN_140beb890(lVar5);
  FUN_140b73150(lVar3);
  return iVar6;
}


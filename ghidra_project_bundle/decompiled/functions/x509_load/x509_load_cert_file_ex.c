/**
 * Function: x509_load_cert_file_ex
 * Address:  140b9a9c0
 * Signature: undefined x509_load_cert_file_ex(void)
 * Body size: 721 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int x509_load_cert_file_ex
              (longlong param_1,longlong param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong local_res10;
  
  iVar2 = 0;
  iVar7 = 0;
  lVar4 = 0;
  local_res10 = 0;
  if (param_2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\by_file.c",0x5f,"X509_load_cert_file_ex");
    uVar6 = 0xc0102;
    iVar7 = iVar2;
  }
  else {
    uVar6 = FUN_140bf2830();
    lVar4 = FUN_140b73040(uVar6);
    if ((lVar4 == 0) || (iVar1 = FUN_140b74190(lVar4,0x6c,3,param_2), iVar1 < 1)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\x509\\by_file.c",0x66,"X509_load_cert_file_ex");
      uVar6 = 0x80020;
    }
    else {
      local_res10 = FUN_140b76440(param_4,param_5);
      if (local_res10 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\x509\\by_file.c",0x6c,"X509_load_cert_file_ex");
        uVar6 = 0x8000d;
        iVar7 = iVar2;
      }
      else if (param_3 == 1) {
        FUN_140b932f0();
        lVar5 = FUN_140bf5b20(lVar4,&local_res10,0,&DAT_1413a2ad6);
        iVar7 = iVar2;
        while (lVar5 != 0) {
          FUN_140b93470();
          iVar2 = FUN_140b77100(*(undefined8 *)(param_1 + 0x18),local_res10);
          if (iVar2 == 0) {
LAB_140b9ab7b:
            iVar7 = 0;
            goto LAB_140b9ac64;
          }
          FUN_140b763d0(local_res10);
          local_res10 = FUN_140b76440(param_4,param_5);
          if (local_res10 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\x509\\by_file.c",0x8f,"X509_load_cert_file_ex");
            FUN_140b91cc0(0xb,0x8000d,0);
            goto LAB_140b9ab7b;
          }
          iVar7 = iVar7 + 1;
          FUN_140b932f0();
          lVar5 = FUN_140bf5b20(lVar4,&local_res10,0,&DAT_1413a2ad6);
        }
        uVar3 = FUN_140b92170();
        if (((((int)uVar3 >> 0x1f & 0x7f800000U) + 0x7fffff & uVar3) == 0x6c) && (0 < iVar7)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          goto LAB_140b9ac64;
        }
        FUN_140b93470();
        if (iVar7 == 0) {
          uVar6 = 0x87;
          uVar8 = 0x7b;
        }
        else {
          iVar7 = 0;
          uVar6 = 0x80009;
          uVar8 = 0x7d;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\x509\\by_file.c",uVar8,"X509_load_cert_file_ex");
      }
      else if (param_3 == 2) {
        lVar5 = FUN_140bf34e0(lVar4,&local_res10);
        if (lVar5 != 0) {
          iVar7 = FUN_140b77100(*(undefined8 *)(param_1 + 0x18),local_res10);
          goto LAB_140b9ac64;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\x509\\by_file.c",0x97,"X509_load_cert_file_ex");
        uVar6 = 0x87;
        iVar7 = iVar2;
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\x509\\by_file.c",0x9c,"X509_load_cert_file_ex");
        uVar6 = 100;
      }
    }
  }
  FUN_140b91cc0(0xb,uVar6,0);
LAB_140b9ac64:
  FUN_140b763d0(local_res10);
  FUN_140b73150(lVar4);
  return iVar7;
}


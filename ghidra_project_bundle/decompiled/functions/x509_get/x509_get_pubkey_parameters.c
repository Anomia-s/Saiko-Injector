/**
 * Function: x509_get_pubkey_parameters
 * Address:  140bd9ee0
 * Signature: undefined x509_get_pubkey_parameters(void)
 * Body size: 300 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 x509_get_pubkey_parameters(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((param_1 != 0) && (iVar1 = FUN_140b7f310(), iVar1 == 0)) {
    return 1;
  }
  iVar1 = 0;
  iVar2 = FUN_140b77980(param_2);
  if (0 < iVar2) {
    do {
      uVar3 = FUN_140b77990(param_2,iVar1);
      lVar4 = FUN_140b74cd0(uVar3);
      if (lVar4 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\x509\\x509_vfy.c",0x862,"X509_get_pubkey_parameters");
        uVar3 = 0x6c;
        goto LAB_140bd9f7d;
      }
      iVar2 = FUN_140b7f310(lVar4);
      if (iVar2 == 0) {
        do {
          iVar1 = iVar1 + -1;
          if (iVar1 < 0) {
            if (param_1 == 0) {
              return 1;
            }
            uVar3 = FUN_140b7f050(param_1,lVar4);
            return uVar3;
          }
          uVar3 = FUN_140b77990(param_2,iVar1);
          uVar3 = FUN_140b74cd0(uVar3);
          iVar2 = FUN_140b7f050(uVar3,lVar4);
        } while (iVar2 != 0);
        return 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_140b77980(param_2);
    } while (iVar1 < iVar2);
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("crypto\\x509\\x509_vfy.c",0x86a,"X509_get_pubkey_parameters");
  uVar3 = 0x6b;
LAB_140bd9f7d:
  FUN_140b91cc0(0xb,uVar3,0);
  return 0;
}


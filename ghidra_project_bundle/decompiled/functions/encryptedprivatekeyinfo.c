/**
 * Function: encryptedprivatekeyinfo
 * Address:  140d70080
 * Signature: undefined encryptedprivatekeyinfo(void)
 * Body size: 1002 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 encryptedprivatekeyinfo(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  
  uVar2 = FUN_140b76070(*param_1);
  if (param_1[4] == 0) {
    lVar3 = FUN_140c2b310();
    param_1[4] = lVar3;
    if (lVar3 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\storemgmt\\file_store.c",0x1a9,"file_setup_decoders");
      FUN_140b91cc0(0x39,0x8003c,0);
      return 0;
    }
    iVar1 = FUN_140c2bf60(lVar3,param_1[5]);
    if (iVar1 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\storemgmt\\file_store.c",0x1b0,"file_setup_decoders");
      FUN_140b91cc0(0x39,0x8003c,0);
      return 0;
    }
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 3) {
      iVar1 = FUN_140c2bfc0(param_1[4],"SubjectPublicKeyInfo");
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\storemgmt\\file_store.c",0x1bf,"file_setup_decoders"
                  );
        FUN_140b91cc0(0x39,0x8003c,0);
        return 0;
      }
    }
    else if (iVar1 == 4) {
      iVar1 = FUN_140c2bfc0(param_1[4],"EncryptedPrivateKeyInfo");
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\storemgmt\\file_store.c",0x1d0,"file_setup_decoders"
                  );
        FUN_140b91cc0(0x39,0x8003c,0);
        return 0;
      }
    }
    else if (iVar1 == 5) {
      iVar1 = FUN_140c2bfc0(param_1[4],"Certificate");
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\storemgmt\\file_store.c",0x1d8,"file_setup_decoders"
                  );
        FUN_140b91cc0(0x39,0x8003c,0);
        return 0;
      }
    }
    else if ((iVar1 == 6) && (iVar1 = FUN_140c2bfc0(param_1[4],"CertificateList"), iVar1 == 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\storemgmt\\file_store.c",0x1e0,"file_setup_decoders");
      FUN_140b91cc0(0x39,0x8003c,0);
      return 0;
    }
    ppuVar6 = &PTR_DAT_14131ca10;
    do {
      lVar4 = FUN_140c2b4a0(0,ppuVar6,0);
      lVar3 = 0;
      if (lVar4 != 0) {
        lVar3 = FUN_140c2c790(lVar4,*param_1);
      }
      FUN_140c2b140(lVar4);
      if (lVar3 == 0) {
        return 0;
      }
      uVar5 = FUN_140c2c2b0(lVar3);
      if (((param_1[5] == 0) || (iVar1 = FUN_140b8c6a0(uVar5), iVar1 == 0)) ||
         ((iVar1 = FUN_140b8c6a0(param_1[5],&DAT_1413a6874), iVar1 == 0 &&
          (iVar1 = FUN_140b8c6a0(uVar5,&DAT_1413a5e04), iVar1 == 0)))) {
        iVar1 = FUN_140c2ccd0(param_1[4],lVar3);
        if (iVar1 == 0) {
          FUN_140c2cb30(lVar3);
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\storemgmt\\file_store.c",0x20e,
                     "file_setup_decoders");
          FUN_140b91cc0(0x39,0x8003c,0);
          return 0;
        }
      }
      else {
        FUN_140c2cb30();
      }
      ppuVar6 = ppuVar6 + 4;
    } while (*ppuVar6 != (undefined *)0x0);
    iVar1 = FUN_140c2c020(param_1[4],uVar2,param_1[6]);
    if (iVar1 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\storemgmt\\file_store.c",0x215,"file_setup_decoders");
      FUN_140b91cc0(0x39,0x8003c,0);
      return 0;
    }
    iVar1 = FUN_140c2c2c0(param_1[4],FUN_140c113e0);
    if ((iVar1 == 0) ||
       (iVar1 = ossl_decoder_ctx_set_cleanup(param_1[4],_guard_check_icall), iVar1 == 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\storemgmt\\file_store.c",0x221,"file_setup_decoders");
      FUN_140b91cc0(0x39,0x8003c,0);
      return 0;
    }
  }
  return 1;
}


/**
 * Function: cryptoapi_rsa_method
 * Address:  140c77960
 * Signature: undefined cryptoapi_rsa_method(void)
 * Body size: 504 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cryptoapi_rsa_method(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140c10070();
  if (lVar2 == 0) {
    return;
  }
  DAT_141700ca0 = FUN_140cebe40("CryptoAPI RSA method",0);
  if (DAT_141700ca0 != 0) {
    DAT_141700ca8 = FUN_140cebf40("CryptoAPI DSA method",0);
    if (DAT_141700ca8 != 0) {
      iVar1 = FUN_140c101e0(lVar2,PTR_DAT_141517ec0);
      if (iVar1 != 0) {
        iVar1 = FUN_140c10240(lVar2,PTR_s_CryptoAPI_ENGINE_141517ec8);
        if (iVar1 != 0) {
          iVar1 = FUN_140c102e0(lVar2,8);
          if (iVar1 != 0) {
            iVar1 = FUN_140c102b0(lVar2,err_capi_error);
            if (iVar1 != 0) {
              iVar1 = FUN_140c102c0(lVar2,calling_capi_ctx_free_with_lxn);
              if (iVar1 != 0) {
                iVar1 = FUN_140c102a0(lVar2,FUN_140c78540);
                if (iVar1 != 0) {
                  iVar1 = FUN_140b77280(lVar2,DAT_141700ca0);
                  if (iVar1 != 0) {
                    iVar1 = FUN_140c99a50(lVar2,DAT_141700ca8);
                    if (iVar1 != 0) {
                      iVar1 = FUN_140c4a2a0(lVar2,err_capi_error);
                      if (iVar1 != 0) {
                        iVar1 = FUN_140c4a2b0(lVar2,cant_parse_certificate_dn);
                        if (iVar1 != 0) {
                          iVar1 = FUN_140c102f0(lVar2,&DAT_141259c30);
                          if (iVar1 != 0) {
                            iVar1 = FUN_140c102d0(lVar2,setting_store_name_to_sn);
                            if (iVar1 != 0) {
                              if (DAT_141700c98 == 0) {
                                DAT_141700c98 = FUN_140b92700();
                              }
                              if (DAT_141700c9c == 0) {
                                FUN_140b925c0(DAT_141700c98,&DAT_141517cd0);
                                DAT_141700c9c = 1;
                              }
                              FUN_140b932f0();
                              FUN_140c5b1a0(lVar2);
                              FUN_140c10150(lVar2);
                              d_aplatformplatformopenssl_srccryptoerrerr_lo();
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_140cebee0(DAT_141700ca0);
    DAT_141700ca0 = 0;
    FUN_140cebfe0(DAT_141700ca8);
    DAT_141700ca8 = 0;
  }
  FUN_140c10150(lVar2);
  return;
}


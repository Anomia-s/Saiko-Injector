/**
 * Function: software_engine_support
 * Address:  140c72fe0
 * Signature: undefined software_engine_support(void)
 * Body size: 320 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void software_engine_support(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_140c10070();
  if (lVar2 == 0) {
    return;
  }
  iVar1 = FUN_140c101e0(lVar2,PTR_s_openssl_141517c20);
  if (iVar1 != 0) {
    iVar1 = FUN_140c10240(lVar2,PTR_s_Software_engine_support_141517c28);
    if (iVar1 != 0) {
      iVar1 = FUN_140c102a0(lVar2,FUN_140c73120);
      if (iVar1 != 0) {
        uVar3 = FUN_140ca8d80();
        iVar1 = FUN_140b77280(lVar2,uVar3);
        if (iVar1 != 0) {
          uVar3 = FUN_140c99120();
          iVar1 = FUN_140c99a50(lVar2,uVar3);
          if (iVar1 != 0) {
            uVar3 = FUN_140c7ede0();
            iVar1 = FUN_140cebc90(lVar2,uVar3);
            if (iVar1 != 0) {
              uVar3 = FUN_140c7a560();
              iVar1 = FUN_140c98ba0(lVar2,uVar3);
              if (iVar1 != 0) {
                uVar3 = FUN_140c18ea0();
                iVar1 = FUN_140bd67f0(lVar2,uVar3);
                if (iVar1 != 0) {
                  iVar1 = FUN_140bd6800(lVar2,FUN_140c73180);
                  if (iVar1 != 0) {
                    iVar1 = FUN_140bd1cd0(lVar2,FUN_140c732b0);
                    if (iVar1 != 0) {
                      iVar1 = FUN_140c4a2a0(lVar2,test_eng_openssl_pkeyloading_private_key_sn);
                      if (iVar1 != 0) {
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
  FUN_140c10150(lVar2);
  return;
}


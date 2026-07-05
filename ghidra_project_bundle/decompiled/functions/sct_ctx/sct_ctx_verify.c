/**
 * Function: sct_ctx_verify
 * Address:  140c30770
 * Signature: undefined sct_ctx_verify(void)
 * Body size: 499 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int sct_ctx_verify(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x140c30785;
  iVar2 = 0;
  iVar1 = FUN_140ba12b0(param_2);
  if ((((iVar1 == 0) || (*param_1 == 0)) || (param_2[0x16] == -1)) ||
     ((param_2[0x16] == 1 && (param_1[3] == 0)))) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ct\\ct_vfy.c",0x68,"SCT_CTX_verify");
    uVar4 = 0x6a;
  }
  else if (*param_2 == 0) {
    if (*(size_t *)(param_2 + 8) == param_1[2]) {
      iVar1 = memcmp(*(void **)(param_2 + 6),(void *)param_1[1],param_1[2]);
      if (iVar1 == 0) {
        if (*(ulonglong *)(param_2 + 10) <= (ulonglong)param_1[9]) {
          lVar3 = FUN_140b70980();
          if (lVar3 != 0) {
            iVar1 = FUN_140bd0d20(lVar3,0,"SHA2-256",param_1[10],param_1[0xb],*param_1,0,uVar4);
            if (iVar1 != 0) {
              iVar1 = FUN_140c30970(lVar3,param_1,param_2);
              if (iVar1 != 0) {
                iVar2 = s_digest_verify_final_s
                                  (lVar3,*(undefined8 *)(param_2 + 0x12),
                                   *(undefined8 *)(param_2 + 0x14));
                if (iVar2 == 0) {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("crypto\\ct\\ct_vfy.c",0x88,"SCT_CTX_verify");
                  FUN_140b91cc0(0x32,0x6b,0);
                }
              }
            }
          }
          FUN_140b709d0(lVar3);
          return iVar2;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ct\\ct_vfy.c",0x75,"SCT_CTX_verify");
        uVar4 = 0x74;
        goto LAB_140c30944;
      }
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ct\\ct_vfy.c",0x71,"SCT_CTX_verify");
    uVar4 = 0x72;
  }
  else {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ct\\ct_vfy.c",0x6c,"SCT_CTX_verify");
    uVar4 = 0x73;
  }
LAB_140c30944:
  FUN_140b91cc0(0x32,uVar4,0);
  return 0;
}


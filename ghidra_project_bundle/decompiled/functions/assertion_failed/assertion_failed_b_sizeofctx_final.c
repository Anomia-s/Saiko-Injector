/**
 * Function: assertion_failed_b_sizeofctx_final
 * Address:  140b851b0
 * Signature: undefined assertion_failed_b_sizeofctx_final(void)
 * Body size: 868 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 assertion_failed_b_sizeofctx_final(longlong *param_1,undefined1 *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong local_res18 [2];
  
  if (param_3 == (int *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\evp_enc.c",0x4f6,"EVP_DecryptFinal_ex");
    FUN_140b91cc0(6,0xc0102,0);
    return 0;
  }
  iVar2 = 0;
  *param_3 = 0;
  if ((int)param_1[2] != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\evp_enc.c",0x4fc,"EVP_DecryptFinal_ex");
    FUN_140b91cc0(6,0x94,0);
    return 0;
  }
  lVar4 = *param_1;
  if (lVar4 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\evp_enc.c",0x501,"EVP_DecryptFinal_ex");
    FUN_140b91cc0(6,0x83,0);
    return 0;
  }
  if (*(longlong *)(lVar4 + 0x70) != 0) {
    iVar2 = FUN_140b981c0();
    if ((iVar2 < 1) || (*(code **)(*param_1 + 0xa0) == (code *)0x0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\evp_enc.c",0x50b,"EVP_DecryptFinal_ex");
      FUN_140b91cc0(6,0xbc,0);
      return 0;
    }
    if (iVar2 == 1) {
      iVar2 = 0;
    }
    uVar3 = (**(code **)(*param_1 + 0xa0))(param_1[0x16],param_2,local_res18,(longlong)iVar2);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if (0x7fffffff < local_res18[0]) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\evp_enc.c",0x514,"EVP_DecryptFinal_ex");
      FUN_140b91cc0(6,0xbc,0);
      return 0;
    }
    *param_3 = (int)local_res18[0];
    return uVar3;
  }
  if ((*(uint *)(lVar4 + 0x10) & 0x100000) == 0) {
    uVar5 = *(uint *)(lVar4 + 4);
    uVar6 = (ulonglong)uVar5;
    if ((*(uint *)(param_1 + 0xe) & 0x100) == 0) {
      if (1 < uVar5) {
        if ((*(int *)((longlong)param_1 + 0x14) == 0) && ((int)param_1[0x10] != 0)) {
          if (0x20 < uVar5) {
            s_d_openssl_internal_error_sn
                      ("assertion failed: b <= sizeof(ctx->final)","crypto\\evp\\evp_enc.c",0x537);
          }
          bVar1 = *(byte *)((ulonglong)(uVar5 - 1) + 0x88 + (longlong)param_1);
          if ((bVar1 != 0) && ((int)(uint)bVar1 <= (int)uVar5)) {
            uVar5 = (uint)bVar1;
            if (bVar1 != 0) {
              do {
                uVar6 = (ulonglong)((int)uVar6 - 1);
                if (*(byte *)(uVar6 + 0x88 + (longlong)param_1) != uVar5) {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  uVar3 = 0x544;
                  goto LAB_140b8538f;
                }
                iVar2 = iVar2 + 1;
              } while (iVar2 < (int)uVar5);
            }
            iVar2 = *(int *)(*param_1 + 4) - uVar5;
            lVar4 = (longlong)iVar2;
            if (0 < iVar2) {
              puVar7 = param_2;
              do {
                *puVar7 = puVar7[(longlong)param_1 + (0x88 - (longlong)param_2)];
                puVar7 = puVar7 + 1;
                lVar4 = lVar4 + -1;
              } while (lVar4 != 0);
            }
            *param_3 = iVar2;
            return 1;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar3 = 0x53f;
LAB_140b8538f:
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\evp_enc.c",uVar3,"EVP_DecryptFinal_ex");
          uVar3 = 100;
        }
        else {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\evp_enc.c",0x534,"EVP_DecryptFinal_ex");
          uVar3 = 0x6d;
        }
        goto LAB_140b853a0;
      }
    }
    else if (*(int *)((longlong)param_1 + 0x14) != 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\evp_enc.c",0x52c,"EVP_DecryptFinal_ex");
      uVar3 = 0x8a;
LAB_140b853a0:
      FUN_140b91cc0(6,uVar3,0);
      goto LAB_140b853ad;
    }
LAB_140b85298:
    uVar3 = 1;
  }
  else {
    iVar2 = (**(code **)(lVar4 + 0x20))(param_1,param_2,0,0);
    if (-1 < iVar2) {
      *param_3 = iVar2;
      goto LAB_140b85298;
    }
LAB_140b853ad:
    uVar3 = 0;
  }
  return uVar3;
}


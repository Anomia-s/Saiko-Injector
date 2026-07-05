/**
 * Function: evp_digestupdate
 * Address:  140b71290
 * Signature: undefined evp_digestupdate(void)
 * Body size: 526 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
evp_digestupdate(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = FUN_140b8da80(0x48,"crypto\\evp\\digest.c",0x83);
  if (lVar5 == 0) {
    return 0;
  }
  uVar6 = 1;
  FUN_140b988d0(lVar5,1);
  iVar4 = evp_md_init_internal(lVar5,param_5,0,param_6);
  if (iVar4 != 0) {
    if (param_2 == 0) {
LAB_140b71450:
      iVar4 = assertion_failed_mdsize_evp_max_md_size(lVar5,param_3,param_4);
      if (iVar4 != 0) goto LAB_140b71464;
    }
    else if ((*(uint *)(lVar5 + 0x18) >> 0xb & 1) == 0) {
      puVar2 = *(uint **)(lVar5 + 0x28);
      if (((puVar2 == (uint *)0x0) || (uVar1 = *puVar2, (uVar1 & 0xc1f0) == 0)) ||
         (*(longlong *)(puVar2 + 0xc) == 0)) {
        lVar3 = *(longlong *)(lVar5 + 8);
        if (((lVar3 == 0) || (*(longlong *)(lVar3 + 0x68) == 0)) ||
           ((*(uint *)(lVar5 + 0x18) >> 8 & 1) != 0)) {
          if (*(code **)(lVar5 + 0x30) != (code *)0x0) {
            iVar4 = (**(code **)(lVar5 + 0x30))(lVar5,param_1,param_2);
            goto LAB_140b7144c;
          }
        }
        else {
          if (*(code **)(lVar3 + 0x88) != (code *)0x0) {
            iVar4 = (**(code **)(lVar3 + 0x88))(*(undefined8 *)(lVar5 + 0x38),param_1,param_2);
            goto LAB_140b7144c;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\digest.c",0x1a6,"EVP_DigestUpdate");
          FUN_140b91cc0(6,0xbd,0);
        }
      }
      else {
        if (uVar1 == 0x80) {
          iVar4 = s_digest_sign_update_s(lVar5,param_1,param_2);
        }
        else {
          if (uVar1 != 0x100) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\evp\\digest.c",0x19c,"EVP_DigestUpdate");
            FUN_140b91cc0(6,0xbd,0);
            goto LAB_140b71462;
          }
          iVar4 = s_digest_verify_update_s(lVar5,param_1,param_2);
        }
LAB_140b7144c:
        if (iVar4 != 0) goto LAB_140b71450;
      }
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\digest.c",0x187,"EVP_DigestUpdate");
      FUN_140b91cc0(6,0xbd,0);
    }
  }
LAB_140b71462:
  uVar6 = 0;
LAB_140b71464:
  FUN_140b71de0(lVar5,0);
  FUN_140b8d990(lVar5,"crypto\\evp\\digest.c",0x8c);
  return uVar6;
}


/**
 * Function: pkcs7_signer_info_sign
 * Address:  140cdcf90
 * Signature: undefined pkcs7_signer_info_sign(void)
 * Body size: 577 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkcs7_signer_info_sign(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong local_res8;
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined8 local_res18 [2];
  
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  local_res18[0] = 0;
  local_res8 = 0;
  uVar1 = FUN_140b964c0(**(undefined8 **)(param_1 + 0x10));
  uVar3 = FUN_140b96490(uVar1);
  lVar4 = FUN_140b999e0(uVar3);
  if (lVar4 == 0) {
    return 0;
  }
  lVar5 = FUN_140b70980();
  if (lVar5 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\pkcs7\\pk7_doit.c",0x3c5,"PKCS7_SIGNER_INFO_sign");
    FUN_140b91cc0(0x21,0x80006,0);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = FUN_140c6fef0(uVar7);
    uVar7 = FUN_140c6fee0(uVar7);
    uVar8 = FUN_140b97a80(lVar4);
    iVar2 = FUN_140bd0680(lVar5,local_res18,uVar8,uVar7,uVar6,uVar3,0);
    if (0 < iVar2) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      uVar3 = FUN_140c6f670();
      iVar2 = FUN_140be3340(uVar7,&local_res8,uVar3);
      if (((-1 < iVar2) && (local_res8 != 0)) &&
         (iVar2 = s_digest_sign_update_s(lVar5,local_res8,(longlong)iVar2), 0 < iVar2)) {
        FUN_140b8d990(local_res8,"crypto\\pkcs7\\pk7_doit.c",0x3d5);
        local_res8 = 0;
        iVar2 = s_digest_sign_final_s(lVar5,0,&local_res10);
        if (((0 < iVar2) &&
            (local_res8 = FUN_140b8d8d0(CONCAT44(uStackX_14,local_res10),"crypto\\pkcs7\\pk7_doit.c"
                                        ,0x3d9), local_res8 != 0)) &&
           (iVar2 = s_digest_sign_final_s(lVar5,local_res8,&local_res10), 0 < iVar2)) {
          FUN_140b709d0(lVar5);
          FUN_140b78e90(*(undefined8 *)(param_1 + 0x28),local_res8,local_res10);
          return 1;
        }
      }
    }
  }
  FUN_140b8d990(local_res8,"crypto\\pkcs7\\pk7_doit.c",0x3e6);
  FUN_140b709d0(lVar5);
  return 0;
}


/**
 * Function: rsa_sign_asn1_octet_string
 * Address:  140c8ef50
 * Signature: undefined rsa_sign_asn1_octet_string(void)
 * Body size: 295 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool rsa_sign_asn1_octet_string
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               int *param_5,undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong local_res10;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_20;
  
  uStack_20 = 0x140c8ef5f;
  local_34 = 4;
  local_38 = param_3;
  local_30 = param_2;
  iVar2 = FUN_140b90f90(&local_38,0);
  iVar3 = FUN_140c8d0a0(param_6);
  if (iVar2 <= iVar3 + -0xb) {
    lVar4 = FUN_140b8d8d0(iVar3 + 1,"crypto\\rsa\\rsa_saos.c",0x2a);
    bVar1 = false;
    if (lVar4 != 0) {
      local_res10 = lVar4;
      FUN_140b90f90(&local_38,&local_res10);
      iVar2 = FUN_140c8d0f0(iVar2,lVar4,param_4,param_6,1);
      bVar1 = 0 < iVar2;
      if (bVar1) {
        *param_5 = iVar2;
      }
      FUN_140b8db20(lVar4,iVar3 + 1,"crypto\\rsa\\rsa_saos.c",0x35);
    }
    return bVar1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("crypto\\rsa\\rsa_saos.c",0x27,"RSA_sign_ASN1_OCTET_STRING");
  FUN_140b91cc0(4,0x70,0);
  return false;
}


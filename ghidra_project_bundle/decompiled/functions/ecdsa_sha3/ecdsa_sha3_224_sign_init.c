/**
 * Function: ecdsa_sha3_224_sign_init
 * Address:  140d49a80
 * Signature: undefined ecdsa_sha3_224_sign_init(void)
 * Body size: 491 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ecdsa_sha3_224_sign_init(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_140b69250();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\signature\\ecdsa_sig.c",0x119,"ecdsa_signverify_init")
      ;
      FUN_140b91cc0(0x39,0x72,0);
      return 0;
    }
  }
  else {
    iVar1 = FUN_140c0e380(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_140c0e290(*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = param_2;
  }
  *(undefined4 *)(param_1 + 0x18) = 0x10;
  if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
    lVar3 = FUN_140b93540(param_3,"nonce-type");
    if ((lVar3 != 0) && (iVar1 = FUN_140b93940(lVar3,param_1 + 0x198), iVar1 == 0)) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x18) == 0x8000) &&
       (lVar3 = FUN_140b93540(param_3,"signature"), lVar3 != 0)) {
      FUN_140b8d990(*(undefined8 *)(param_1 + 0x178),
                    "providers\\implementations\\signature\\ecdsa_sig.c",0x3e1);
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined8 *)(param_1 + 0x180) = 0;
      iVar1 = FUN_140b95120(lVar3,param_1 + 0x178,0);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  iVar1 = s_exceeds_name_buffer_length(param_1,"SHA3-224",0,"ECDSA-SHA3-224 Sign Init");
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffd | 1;
  lVar3 = *(longlong *)(param_1 + 0x168);
  if (lVar3 == 0) {
    lVar3 = FUN_140b70980();
    *(longlong *)(param_1 + 0x168) = lVar3;
    if (lVar3 == 0) goto LAB_140d49c45;
  }
  iVar1 = FUN_140b70fd0(lVar3,*(undefined8 *)(param_1 + 0x160),param_3);
  if (iVar1 != 0) {
    return 1;
  }
LAB_140d49c45:
  FUN_140b709d0(*(undefined8 *)(param_1 + 0x168));
  *(undefined8 *)(param_1 + 0x168) = 0;
  return 0;
}


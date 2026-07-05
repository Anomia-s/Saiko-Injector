/**
 * Function: dsa_sha2_224_sign_message_init
 * Address:  140d3cb00
 * Signature: undefined dsa_sha2_224_sign_message_init(void)
 * Body size: 488 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dsa_sha2_224_sign_message_init(longlong param_1,longlong param_2,longlong *param_3)

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
                ("providers\\implementations\\signature\\dsa_sig.c",0x121,"dsa_signverify_init");
      FUN_140b91cc0(0x39,0x72,0);
      return 0;
    }
  }
  else {
    iVar1 = FUN_140c0b010(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_140c0af60(*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = param_2;
  }
  *(undefined4 *)(param_1 + 0x18) = 0x4000;
  if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
    lVar3 = FUN_140b93540(param_3,"nonce-type");
    if ((lVar3 != 0) && (iVar1 = FUN_140b93940(lVar3,param_1 + 0x20), iVar1 == 0)) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x18) == 0x8000) &&
       (lVar3 = FUN_140b93540(param_3,"signature"), lVar3 != 0)) {
      FUN_140b8d990(*(undefined8 *)(param_1 + 0x178),
                    "providers\\implementations\\signature\\dsa_sig.c",0x3ca);
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined8 *)(param_1 + 0x180) = 0;
      iVar1 = FUN_140b95120(lVar3,param_1 + 0x178,0);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  iVar1 = s_exceeds_name_buffer_length(param_1,"SHA2-224",0,"DSA-SHA2-224 Sign Message Init");
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffd | 1;
  lVar3 = *(longlong *)(param_1 + 0x170);
  if (lVar3 == 0) {
    lVar3 = FUN_140b70980();
    *(longlong *)(param_1 + 0x170) = lVar3;
    if (lVar3 == 0) goto LAB_140d3ccc2;
  }
  iVar1 = FUN_140b70fd0(lVar3,*(undefined8 *)(param_1 + 0x168),param_3);
  if (iVar1 != 0) {
    return 1;
  }
LAB_140d3ccc2:
  FUN_140b709d0(*(undefined8 *)(param_1 + 0x170));
  *(undefined8 *)(param_1 + 0x170) = 0;
  return 0;
}


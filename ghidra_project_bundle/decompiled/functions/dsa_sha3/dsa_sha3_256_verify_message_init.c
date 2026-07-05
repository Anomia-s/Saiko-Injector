/**
 * Function: dsa_sha3_256_verify_message_init
 * Address:  140d3f280
 * Signature: undefined dsa_sha3_256_verify_message_init(void)
 * Body size: 333 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dsa_sha3_256_verify_message_init(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return 0;
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
  *(undefined4 *)(param_1 + 0x18) = 0x8000;
  iVar1 = providersimplementationssignaturedsa_sigc(param_1,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = s_exceeds_name_buffer_length(param_1,"SHA3-256",0,"DSA-SHA3-256 Verify Message Init");
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffd | 1;
  lVar2 = *(longlong *)(param_1 + 0x170);
  if (lVar2 == 0) {
    lVar2 = FUN_140b70980();
    *(longlong *)(param_1 + 0x170) = lVar2;
    if (lVar2 == 0) goto LAB_140d3f38f;
  }
  iVar1 = FUN_140b70fd0(lVar2,*(undefined8 *)(param_1 + 0x168),param_3);
  if (iVar1 != 0) {
    return 1;
  }
LAB_140d3f38f:
  FUN_140b709d0(*(undefined8 *)(param_1 + 0x170));
  *(undefined8 *)(param_1 + 0x170) = 0;
  return 0;
}


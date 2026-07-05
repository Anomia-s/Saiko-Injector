/**
 * Function: rsa_sigalg_signverify_init
 * Address:  140d44c10
 * Signature: undefined rsa_sigalg_signverify_init(void)
 * Body size: 293 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
rsa_sigalg_signverify_init
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init(param_1,param_2,param_3,param_4,param_6,param_8);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\signature\\rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
              );
    FUN_140b91cc0(4,0xb2,0);
    return 0;
  }
  iVar1 = s_exceeds_name_buffer_length(param_1,param_5,0,param_8);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x68) = param_7;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffd | 1;
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 == 0) {
    lVar2 = FUN_140b70980();
    *(longlong *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) goto LAB_140d44d15;
  }
  iVar1 = FUN_140b70fd0(lVar2,*(undefined8 *)(param_1 + 0x20),param_4);
  if (iVar1 != 0) {
    return 1;
  }
LAB_140d44d15:
  FUN_140b709d0(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}


/**
 * Function: rsa_signverify_message_update
 * Address:  140d41120
 * Signature: undefined rsa_signverify_message_update(void)
 * Body size: 110 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rsa_signverify_message_update(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 0x1c), (uVar1 & 1) == 0)) &&
     (*(longlong *)(param_1 + 0x28) != 0)) {
    if ((uVar1 & 8) != 0) {
      *(uint *)(param_1 + 0x1c) = uVar1 & 0xffffffdf;
      uVar2 = evp_digestupdate(*(longlong *)(param_1 + 0x28));
      return uVar2;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\signature\\rsa_sig.c",0x348,
               "rsa_signverify_message_update");
    FUN_140b91cc0(0x39,0xf0,0);
  }
  return 0;
}


/**
 * Function: ed448_digest_signverify_init
 * Address:  140d45980
 * Signature: undefined ed448_digest_signverify_init(void)
 * Body size: 198 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ed448_digest_signverify_init(longlong param_1,char *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    if ((param_3 == 0) && (*(longlong *)(param_1 + 8) != 0)) {
      uVar2 = the_eddsa_instance_is_preset_you_may_not_try(param_1,param_4);
      return uVar2;
    }
    iVar1 = eddsa_signverify_init(param_1,param_3);
    if ((iVar1 != 0) && (*(int *)(*(longlong *)(param_1 + 8) + 0x60) == 3)) {
      *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) & 0xffffffe4;
      *(undefined4 *)(param_1 + 0x118) = 4;
      iVar1 = the_eddsa_instance_is_preset_you_may_not_try(param_1,param_4);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  else {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\signature\\eddsa_sig.c",0x2c9,
               "ed448_digest_signverify_init");
    FUN_140b91cc0(0x39,0x7a,"Explicit digest not allowed with EdDSA operations");
  }
  return 0;
}


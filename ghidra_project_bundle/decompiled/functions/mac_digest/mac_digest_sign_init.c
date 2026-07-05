/**
 * Function: mac_digest_sign_init
 * Address:  140d4bdc0
 * Signature: undefined mac_digest_sign_init(void)
 * Body size: 325 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
mac_digest_sign_init(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 == 0) {
    if (param_3 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\signature\\mac_legacy_sig.c",0x6b,
                 "mac_digest_sign_init");
      FUN_140b91cc0(0x39,0x72,0);
      return 0;
    }
  }
  else if (param_3 == 0) goto LAB_140d4be78;
  iVar1 = FUN_140d30400(param_3);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_140d30490(*(undefined8 *)(param_1 + 0x10));
  *(longlong *)(param_1 + 0x10) = param_3;
  lVar2 = param_3;
LAB_140d4be78:
  if (*(longlong *)(lVar2 + 0x20) != 0) {
    uVar3 = FUN_140b97de0();
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) != 0) {
    uVar4 = FUN_140b8c100();
  }
  iVar1 = FUN_140d71ae0(*(undefined8 *)(param_1 + 0x18),0,uVar3,param_2,uVar4,
                        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38),0,0);
  if ((iVar1 != 0) &&
     (iVar1 = evp_mac_init(*(undefined8 *)(param_1 + 0x18),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18),param_4),
     iVar1 != 0)) {
    return 1;
  }
  return 0;
}


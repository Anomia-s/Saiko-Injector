/**
 * Function: blake2_mac_init
 * Address:  140d18ba0
 * Signature: undefined blake2_mac_init(void)
 * Body size: 533 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 blake2_mac_init(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_4 != (longlong *)0x0) && (*param_4 != 0)) {
    lVar2 = FUN_140b93540(param_4,&DAT_1413a61f4);
    if (lVar2 != 0) {
      iVar1 = FUN_140b94310(lVar2,&local_res8);
      if ((iVar1 == 0) || (0x1f < local_res8 - 1U)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("D:\\a\\Platform\\Platform\\openssl-src\\providers\\implementations\\macs\\blake2_mac_impl.c"
                   ,0xcb,"blake2_mac_set_ctx_params");
        uVar3 = 0x71;
        goto LAB_140d18c51;
      }
      FUN_140d869e0(param_1 + 0x80);
    }
    lVar2 = FUN_140b93540(param_4,&DAT_1413a593c);
    if ((lVar2 != 0) &&
       (iVar1 = d_aplatformplatformopenssl_srcprovidersimplem
                          (param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18)),
       iVar1 == 0)) {
      return 0;
    }
    lVar2 = FUN_140b93540(param_4,"custom");
    if (lVar2 != 0) {
      if (8 < *(ulonglong *)(lVar2 + 0x18)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("D:\\a\\Platform\\Platform\\openssl-src\\providers\\implementations\\macs\\blake2_mac_impl.c"
                   ,0xdc,"blake2_mac_set_ctx_params");
        uVar3 = 0x6f;
        goto LAB_140d18c51;
      }
      FUN_140d89220(param_1 + 0x80,*(undefined8 *)(lVar2 + 0x10));
    }
    lVar2 = FUN_140b93540(param_4,&DAT_1413a5aa0);
    if (lVar2 != 0) {
      if (8 < *(ulonglong *)(lVar2 + 0x18)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("D:\\a\\Platform\\Platform\\openssl-src\\providers\\implementations\\macs\\blake2_mac_impl.c"
                   ,0xe8,"blake2_mac_set_ctx_params");
        uVar3 = 0x70;
        goto LAB_140d18c51;
      }
      FUN_140d89270(param_1 + 0x80,*(undefined8 *)(lVar2 + 0x10));
    }
  }
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x81) == '\0') {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("D:\\a\\Platform\\Platform\\openssl-src\\providers\\implementations\\macs\\blake2_mac_impl.c"
                 ,0x75,"blake2_mac_init");
      uVar3 = 0x72;
LAB_140d18c51:
      FUN_140b91cc0(0x39,uVar3,0);
      return 0;
    }
  }
  else {
    iVar1 = d_aplatformplatformopenssl_srcprovidersimplem(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar3 = FUN_140d88f10(param_1,param_1 + 0x80,param_1 + 0xa0);
  return uVar3;
}


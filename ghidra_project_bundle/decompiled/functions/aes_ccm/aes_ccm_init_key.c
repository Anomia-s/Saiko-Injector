/**
 * Function: aes_ccm_init_key
 * Address:  140b8a2f0
 * Signature: undefined aes_ccm_init_key(void)
 * Body size: 329 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aes_ccm_init_key(longlong param_1,longlong param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  
  lVar2 = FUN_140b987a0();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_140b8a407;
  iVar1 = FUN_140b981e0(param_1);
  if (iVar1 << 3 < 1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\e_aes.c",0xda2,"aes_ccm_init_key");
    FUN_140b91cc0(6,0x82,0);
    return 0;
  }
  if ((DAT_1416f2384 & 0x200) == 0) {
    FUN_14076e170(param_2,iVar1 << 3,lVar2);
    pcVar3 = FUN_14076dae0;
  }
  else {
    FUN_14076f570();
    pcVar3 = (code *)&DAT_14076f740;
  }
  FUN_140c1e340(lVar2 + 0x118,*(undefined4 *)(lVar2 + 0x10c),*(undefined4 *)(lVar2 + 0x108),lVar2,
                pcVar3);
  *(undefined8 *)(lVar2 + 0x150) = 0;
  *(undefined4 *)(lVar2 + 0xf8) = 1;
  if (param_3 == (void *)0x0) {
    return 1;
  }
LAB_140b8a407:
  memcpy((void *)(param_1 + 0x28),param_3,(longlong)(0xf - *(int *)(lVar2 + 0x108)));
  *(undefined4 *)(lVar2 + 0xfc) = 1;
  return 1;
}


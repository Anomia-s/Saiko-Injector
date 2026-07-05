/**
 * Function: aesni_ccm_init_key
 * Address:  140b88b30
 * Signature: undefined aesni_ccm_init_key(void)
 * Body size: 313 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aesni_ccm_init_key(longlong param_1,longlong param_2,void *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0x140b88b50;
  lVar2 = FUN_140b987a0();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_140b88c25;
  iVar1 = FUN_140b981e0(param_1);
  if (iVar1 << 3 < 1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\e_aes.c",0x153,"aesni_ccm_init_key")
    ;
    FUN_140b91cc0(6,0x82,0);
    return 0;
  }
  FUN_140776bc0(param_2,iVar1 << 3,lVar2);
  FUN_140c1e340(lVar2 + 0x118,*(undefined4 *)(lVar2 + 0x10c),*(undefined4 *)(lVar2 + 0x108),lVar2,
                &LAB_140772840,uVar4);
  *(undefined4 *)(lVar2 + 0xf8) = 1;
  puVar3 = &DAT_1407736c0;
  if (param_4 != 0) {
    puVar3 = &DAT_140773560;
  }
  *(undefined **)(lVar2 + 0x150) = puVar3;
  if (param_3 == (void *)0x0) {
    return 1;
  }
LAB_140b88c25:
  memcpy((void *)(param_1 + 0x28),param_3,(longlong)(0xf - *(int *)(lVar2 + 0x108)));
  *(undefined4 *)(lVar2 + 0xfc) = 1;
  return 1;
}


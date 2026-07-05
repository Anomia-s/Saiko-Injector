/**
 * Function: aesni_gcm_init_key
 * Address:  140b88430
 * Signature: undefined aesni_gcm_init_key(void)
 * Body size: 349 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aesni_gcm_init_key(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140b987a0();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(lVar2 + 0xf8) == 0) {
      memcpy(*(void **)(lVar2 + 0x2c0),param_3,(longlong)*(int *)(lVar2 + 0x2c8));
    }
    else {
      FUN_140c1cdb0(lVar2 + 0x100);
    }
    *(undefined4 *)(lVar2 + 0xfc) = 1;
    *(undefined4 *)(lVar2 + 0x2d0) = 0;
    return 1;
  }
  iVar1 = FUN_140b981e0(param_1);
  if (0 < iVar1 << 3) {
    FUN_140776bc0(param_2,iVar1 << 3,lVar2);
    FUN_140c1cd10(lVar2 + 0x100,lVar2,&LAB_140772840);
    *(undefined **)(lVar2 + 0x2e8) = &DAT_1407738a0;
    if ((param_3 != (void *)0x0) ||
       ((*(int *)(lVar2 + 0xfc) != 0 &&
        (param_3 = *(void **)(lVar2 + 0x2c0), param_3 != (void *)0x0)))) {
      FUN_140c1cdb0(lVar2 + 0x100,param_3,(longlong)*(int *)(lVar2 + 0x2c8));
      *(undefined4 *)(lVar2 + 0xfc) = 1;
    }
    *(undefined4 *)(lVar2 + 0xf8) = 1;
    return 1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\e_aes.c",0xec,"aesni_gcm_init_key");
  FUN_140b91cc0(6,0x82,0);
  return 0;
}


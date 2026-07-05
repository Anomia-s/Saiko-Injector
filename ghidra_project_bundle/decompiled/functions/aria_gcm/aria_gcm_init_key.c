/**
 * Function: aria_gcm_init_key
 * Address:  140ce83c0
 * Signature: undefined aria_gcm_init_key(void)
 * Body size: 337 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aria_gcm_init_key(undefined8 param_1,longlong param_2,void *param_3)

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
    if (*(int *)(lVar2 + 0x118) == 0) {
      memcpy(*(void **)(lVar2 + 0x2e0),param_3,(longlong)*(int *)(lVar2 + 0x2e8));
    }
    else {
      FUN_140c1cdb0(lVar2 + 0x120);
    }
    *(undefined4 *)(lVar2 + 0x11c) = 1;
    *(undefined4 *)(lVar2 + 0x2f0) = 0;
    return 1;
  }
  iVar1 = FUN_140b981e0(param_1);
  iVar1 = FUN_140d7f860(param_2,iVar1 << 3,lVar2);
  FUN_140c1cd10(lVar2 + 0x120,lVar2,FUN_140d80790);
  if (-1 < iVar1) {
    if ((param_3 != (void *)0x0) ||
       ((*(int *)(lVar2 + 0x11c) != 0 &&
        (param_3 = *(void **)(lVar2 + 0x2e0), param_3 != (void *)0x0)))) {
      FUN_140c1cdb0(lVar2 + 0x120,param_3,(longlong)*(int *)(lVar2 + 0x2e8));
      *(undefined4 *)(lVar2 + 0x11c) = 1;
    }
    *(undefined4 *)(lVar2 + 0x118) = 1;
    return 1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\e_aria.c",0xe6,"aria_gcm_init_key");
  FUN_140b91cc0(6,0xb0,0);
  return 0;
}


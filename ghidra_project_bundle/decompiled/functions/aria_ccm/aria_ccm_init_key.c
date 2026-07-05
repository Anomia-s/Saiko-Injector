/**
 * Function: aria_ccm_init_key
 * Address:  140ce8d10
 * Signature: undefined aria_ccm_init_key(void)
 * Body size: 280 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aria_ccm_init_key(longlong param_1,longlong param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x140ce8d2a;
  lVar2 = FUN_140b987a0();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_140ce8dea;
  iVar1 = FUN_140b981e0(param_1);
  iVar1 = FUN_140d7f860(param_2,iVar1 << 3,lVar2);
  FUN_140c1e340(lVar2 + 0x138,*(undefined4 *)(lVar2 + 300),*(undefined4 *)(lVar2 + 0x128),lVar2,
                FUN_140d80790,uVar3);
  if (iVar1 < 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\e_aria.c",0x20c,"aria_ccm_init_key")
    ;
    FUN_140b91cc0(6,0xb0,0);
    return 0;
  }
  *(undefined8 *)(lVar2 + 0x170) = 0;
  *(undefined4 *)(lVar2 + 0x118) = 1;
  if (param_3 == (void *)0x0) {
    return 1;
  }
LAB_140ce8dea:
  memcpy((void *)(param_1 + 0x28),param_3,(longlong)(0xf - *(int *)(lVar2 + 0x128)));
  *(undefined4 *)(lVar2 + 0x11c) = 1;
  return 1;
}


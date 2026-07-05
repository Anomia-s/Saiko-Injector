/**
 * Function: aria_init_key
 * Address:  140ce7c10
 * Signature: undefined aria_init_key(void)
 * Body size: 217 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aria_init_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_140b76060();
  iVar1 = FUN_140b97ed0(uVar2);
  if ((param_4 == 0) && (iVar1 - 1U < 2)) {
    iVar1 = FUN_140b981e0(param_1);
    uVar2 = FUN_140b987a0(param_1);
    iVar1 = FUN_140d804f0(param_2,iVar1 << 3,uVar2);
  }
  else {
    iVar1 = FUN_140b981e0(param_1);
    uVar2 = FUN_140b987a0(param_1);
    iVar1 = FUN_140d7f860(param_2,iVar1 << 3,uVar2);
  }
  if (iVar1 < 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\e_aria.c",0x4c,"aria_init_key");
    FUN_140b91cc0(6,0xb0,0);
    return 0;
  }
  return 1;
}


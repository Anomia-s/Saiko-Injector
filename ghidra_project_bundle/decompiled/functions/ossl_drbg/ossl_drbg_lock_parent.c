/**
 * Function: ossl_drbg_lock_parent
 * Address:  140cacb50
 * Signature: undefined ossl_drbg_lock_parent(void)
 * Body size: 104 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ossl_drbg_lock_parent(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x140cacb5a;
  if ((*(longlong *)(param_1 + 0x30) != 0) && (*(code **)(param_1 + 0x40) != (code *)0x0)) {
    iVar1 = (**(code **)(param_1 + 0x40))(*(longlong *)(param_1 + 0x30));
    if (iVar1 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\rands\\drbg.c",0x46,"ossl_drbg_lock_parent",param_4,
                 uVar2);
      FUN_140b91cc0(0x39,0xb6,0);
      return 0;
    }
  }
  return 1;
}


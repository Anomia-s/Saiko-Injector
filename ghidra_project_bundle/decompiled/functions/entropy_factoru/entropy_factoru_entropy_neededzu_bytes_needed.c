/**
 * Function: entropy_factoru_entropy_neededzu_bytes_needed
 * Address:  140c19050
 * Signature: undefined entropy_factoru_entropy_neededzu_bytes_needed(void)
 * Body size: 314 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong entropy_factoru_entropy_neededzu_bytes_needed(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = *(ulonglong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30);
  if (*(ulonglong *)(param_1 + 0x38) <= *(ulonglong *)(param_1 + 0x30)) {
    lVar4 = 0;
  }
  if (param_2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\rand\\rand_pool.c",0xf4,"ossl_rand_pool_bytes_needed");
    FUN_140b91cc0(0x24,0x69,0);
    uVar3 = 0;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 8);
    uVar3 = (ulonglong)param_2 * lVar4 + 7 >> 3;
    if (*(longlong *)(param_1 + 0x20) - uVar2 < uVar3) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\rand\\rand_pool.c",0xfc,"ossl_rand_pool_bytes_needed");
      FUN_140b91cc0(0x24,0x7d,
                    "entropy_factor=%u, entropy_needed=%zu, bytes_needed=%zu,pool->max_len=%zu, pool->len=%zu"
                    ,param_2,lVar4,uVar3,*(undefined8 *)(param_1 + 0x20),
                    *(undefined8 *)(param_1 + 8));
      uVar3 = 0;
    }
    else {
      if ((uVar2 < *(ulonglong *)(param_1 + 0x18)) &&
         (uVar2 = *(ulonglong *)(param_1 + 0x18) - uVar2, uVar3 < uVar2)) {
        uVar3 = uVar2;
      }
      iVar1 = FUN_140c194c0(param_1,uVar3);
      if (iVar1 == 0) {
        *(undefined8 *)(param_1 + 8) = 0;
        uVar3 = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
    }
  }
  return uVar3;
}


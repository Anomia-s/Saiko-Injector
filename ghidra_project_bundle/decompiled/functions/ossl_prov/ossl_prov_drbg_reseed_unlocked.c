/**
 * Function: ossl_prov_drbg_reseed_unlocked
 * Address:  140cad0b0
 * Signature: undefined ossl_prov_drbg_reseed_unlocked(void)
 * Body size: 860 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ossl_prov_drbg_reseed_unlocked
               (longlong param_1,undefined4 param_2,longlong param_3,ulonglong param_4,
               ulonglong param_5,ulonglong param_6)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  __time64_t _Var4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x140cad0ca;
  uVar3 = 0;
  local_28 = 0;
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return false;
  }
  if (*(int *)(param_1 + 0xe8) != 1) {
    FUN_140cacaf0(param_1);
    if (*(int *)(param_1 + 0xe8) == 2) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\rands\\drbg.c",500,"ossl_prov_drbg_reseed_unlocked");
      FUN_140b91cc0(0x39,0xc0,0);
      return false;
    }
    if (*(int *)(param_1 + 0xe8) == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\rands\\drbg.c",0x1f8,"ossl_prov_drbg_reseed_unlocked")
      ;
      FUN_140b91cc0(0x39,0xc1,0);
      return false;
    }
  }
  if (param_3 != 0) {
    if (param_4 < *(ulonglong *)(param_1 + 0x88)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\rands\\drbg.c",0x1ff,"ossl_prov_drbg_reseed_unlocked")
      ;
      FUN_140b91cc0(0x24,0x7c,0);
      *(undefined4 *)(param_1 + 0xe8) = 2;
      return false;
    }
    if (*(ulonglong *)(param_1 + 0x90) < param_4) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\rands\\drbg.c",0x204,"ossl_prov_drbg_reseed_unlocked")
      ;
      FUN_140b91cc0(0x24,0x6a,0);
      *(undefined4 *)(param_1 + 0xe8) = 2;
      return false;
    }
  }
  uVar6 = uVar3;
  if ((param_5 == 0) || (uVar6 = param_6, param_6 <= *(ulonglong *)(param_1 + 0xb0))) {
    iVar1 = *(int *)(param_1 + 0xd0);
    *(undefined4 *)(param_1 + 0xe8) = 2;
    *(int *)(param_1 + 0xd4) = iVar1;
    if ((iVar1 != 0) && (*(int *)(param_1 + 0xd4) = iVar1 + 1, iVar1 + 1 == 0)) {
      *(undefined4 *)(param_1 + 0xd4) = 1;
    }
    if ((param_3 == 0) ||
       (iVar1 = (**(code **)(param_1 + 0x20))(param_1,param_3,param_4,param_5,uVar6),
       param_5 = uVar3, uVar6 = uVar3, iVar1 != 0)) {
      uVar3 = FUN_140cacec0(param_1,&local_28,*(undefined4 *)(param_1 + 0x78),
                            *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),param_2)
      ;
      if ((uVar3 < *(ulonglong *)(param_1 + 0x88)) || (*(ulonglong *)(param_1 + 0x90) < uVar3)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\rands\\drbg.c",0x238,
                   "ossl_prov_drbg_reseed_unlocked");
        FUN_140b91cc0(0x39,0xbd,0);
      }
      else {
        iVar1 = (**(code **)(param_1 + 0x20))(param_1,local_28,uVar3,param_5,uVar6);
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 0xe8) = 1;
          *(undefined4 *)(param_1 + 0xb8) = 1;
          _Var4 = _time64((__time64_t *)0x0);
          *(__time64_t *)(param_1 + 0xc0) = _Var4;
          *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xd4);
          if (*(longlong *)(param_1 + 0x30) != 0) {
            uVar2 = FUN_140cacd90(param_1);
            *(undefined4 *)(param_1 + 0xd8) = uVar2;
          }
        }
      }
      FUN_140cad020(param_1,local_28,uVar3);
      return *(int *)(param_1 + 0xe8) == 1;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\rands\\drbg.c",0x229,"ossl_prov_drbg_reseed_unlocked");
    uVar5 = 0xcc;
  }
  else {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\rands\\drbg.c",0x20d,"ossl_prov_drbg_reseed_unlocked");
    uVar5 = 0xb8;
  }
  FUN_140b91cc0(0x39,uVar5,0);
  return false;
}


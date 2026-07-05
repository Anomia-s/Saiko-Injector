/**
 * Function: drbg_ctr_set_ctx_params_locked
 * Address:  140d2bd70
 * Signature: undefined drbg_ctr_set_ctx_params_locked(void)
 * Body size: 694 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 drbg_ctr_set_ctx_params_locked(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  int local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 0xf0);
  uVar5 = FUN_140b76070(*(undefined8 *)(param_1 + 8));
  lVar8 = 0;
  lVar6 = FUN_140b93540(param_2,"use_derivation_function");
  bVar3 = false;
  if ((lVar6 != 0) && (iVar4 = FUN_140b93920(lVar6,local_res8), bVar3 = false, iVar4 != 0)) {
    bVar3 = true;
    *(uint *)(lVar1 + 0x30) = (uint)(local_res8[0] != 0);
  }
  lVar7 = FUN_140b93540(param_2,"properties");
  lVar6 = lVar8;
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 8) != 4) {
      return 0;
    }
    lVar6 = *(longlong *)(lVar7 + 0x10);
  }
  lVar7 = FUN_140b93540(param_2,"provider-name");
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 8) != 4) {
      return 0;
    }
    lVar8 = FUN_140bd2d00(uVar5,*(undefined8 *)(lVar7 + 0x10),1);
    if (lVar8 == 0) {
      return 0;
    }
  }
  lVar7 = FUN_140b93540(param_2,"cipher");
  if (lVar7 == 0) {
    FUN_140bd3160(lVar8);
    if (!bVar3) goto LAB_140d2c007;
LAB_140d2bff7:
    iVar4 = drbg_ctr_init(param_1);
    if (iVar4 != 0) {
LAB_140d2c007:
      uVar5 = reseed_requests(param_1,param_2);
      return uVar5;
    }
  }
  else {
    if ((*(int *)(lVar7 + 8) == 4) && (2 < *(ulonglong *)(lVar7 + 0x18))) {
      lVar2 = *(longlong *)(lVar7 + 0x10);
      iVar4 = FUN_140b8c6a0(&DAT_1413a67a0,(*(ulonglong *)(lVar7 + 0x18) - 3) + lVar2);
      if (iVar4 == 0) {
        lVar9 = FUN_140b8c8b0(lVar2,*(undefined8 *)(lVar7 + 0x18),
                              "providers\\implementations\\rands\\drbg_ctr.c",0x2fa);
        if (lVar9 != 0) {
          *(undefined4 *)(*(longlong *)(lVar7 + 0x18) + -3 + lVar9) = 0x424345;
          FUN_140b843f0(*(undefined8 *)(lVar1 + 0x18));
          FUN_140b843f0(*(undefined8 *)(lVar1 + 0x20));
          FUN_140b932f0();
          lVar7 = FUN_140b86670(lVar8,lVar2,0);
          *(longlong *)(lVar1 + 0x20) = lVar7;
          if (lVar7 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar10 = FUN_140b84390(uVar5,lVar2,lVar6);
            *(undefined8 *)(lVar1 + 0x20) = uVar10;
          }
          else {
            FUN_140b93470();
          }
          FUN_140b932f0();
          lVar7 = FUN_140b86670(lVar8,lVar9,0);
          *(longlong *)(lVar1 + 0x18) = lVar7;
          if (lVar7 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar5 = FUN_140b84390(uVar5,lVar9,lVar6);
            *(undefined8 *)(lVar1 + 0x18) = uVar5;
          }
          else {
            FUN_140b93470();
          }
          FUN_140b8d990(lVar9,"providers\\implementations\\rands\\drbg_ctr.c",0x315);
          if ((*(longlong *)(lVar1 + 0x20) == 0) || (*(longlong *)(lVar1 + 0x18) == 0)) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("providers\\implementations\\rands\\drbg_ctr.c",0x317,
                       "drbg_ctr_set_ctx_params_locked");
            FUN_140b91cc0(0x39,0xcf,0);
            FUN_140bd3160(lVar8);
            return 0;
          }
          FUN_140bd3160(lVar8);
          goto LAB_140d2bff7;
        }
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\rands\\drbg_ctr.c",0x2f6,
                   "drbg_ctr_set_ctx_params_locked");
        FUN_140b91cc0(0x39,0xce,0);
      }
    }
    FUN_140bd3160(lVar8);
  }
  return 0;
}


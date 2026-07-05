/**
 * Function: openssl_nist_sp_800_90a_drbg
 * Address:  140cabb90
 * Signature: undefined openssl_nist_sp_800_90a_drbg(void)
 * Body size: 1329 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

bool openssl_nist_sp_800_90a_drbg
               (longlong param_1,uint param_2,undefined4 param_3,char *param_4,ulonglong param_5)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  __time64_t _Var8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong local_res8;
  undefined8 local_78;
  longlong local_70;
  undefined8 *local_68;
  ulonglong local_60;
  ulonglong local_58;
  char *local_50;
  longlong local_48 [2];
  
  uVar3 = 0;
  uVar12 = *(uint *)(param_1 + 0x78);
  local_res8 = 0;
  local_78 = 0;
  if (uVar12 < param_2) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\rands\\drbg.c",0x166,"ossl_prov_drbg_instantiate");
    FUN_140b91cc0(0x39,0xb5,0);
    goto LAB_140cac090;
  }
  uVar11 = *(ulonglong *)(param_1 + 0x90);
  local_50 = "OpenSSL NIST SP 800-90A DRBG";
  if (param_4 != (char *)0x0) {
    local_50 = param_4;
  }
  local_58 = 0x1d;
  if (param_4 != (char *)0x0) {
    local_58 = param_5;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x88);
  local_60 = uVar6;
  if (*(ulonglong *)(param_1 + 0xa8) < local_58) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\rands\\drbg.c",0x172,"ossl_prov_drbg_instantiate");
    FUN_140b91cc0(0x39,0xc3,0);
    goto LAB_140cac090;
  }
  iVar2 = *(int *)(param_1 + 0xe8);
  if (iVar2 != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar9 = 0x178;
    if (iVar2 != 2) {
      uVar9 = 0x17a;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\rands\\drbg.c",uVar9,"ossl_prov_drbg_instantiate");
    uVar9 = 0xc0;
    if (iVar2 != 2) {
      uVar9 = 0xb9;
    }
    FUN_140b91cc0(0x39,uVar9,0);
    goto LAB_140cac090;
  }
  lVar1 = *(longlong *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0xe8) = 2;
  if (lVar1 == 0) {
LAB_140cabf43:
    iVar2 = *(int *)(param_1 + 0xd0);
    *(int *)(param_1 + 0xd4) = iVar2;
    if ((iVar2 != 0) && (*(int *)(param_1 + 0xd4) = iVar2 + 1, iVar2 + 1 == 0)) {
      *(undefined4 *)(param_1 + 0xd4) = 1;
    }
    uVar4 = FUN_140cacec0(param_1,&local_78,uVar12,uVar6,uVar11,param_3);
    if ((uVar4 < uVar6) || (uVar11 < uVar4)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\rands\\drbg.c",0x1bc,"ossl_prov_drbg_instantiate");
      uVar9 = 0xbd;
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x10))
                        (param_1,local_78,uVar4,local_res8,uVar3,local_50,local_58);
      if (iVar2 != 0) {
        FUN_140cad020(param_1,local_78,uVar4);
        *(undefined4 *)(param_1 + 0xe8) = 1;
        *(undefined4 *)(param_1 + 0xb8) = 1;
        _Var8 = _time64((__time64_t *)0x0);
        *(__time64_t *)(param_1 + 0xc0) = _Var8;
        *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xd4);
        goto LAB_140cac090;
      }
      FUN_140cad020(param_1,local_78,uVar4);
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\rands\\drbg.c",0x1c3,"ossl_prov_drbg_instantiate");
      uVar9 = 0xbc;
    }
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0xa0);
    local_70 = lVar10;
    if (*(code **)(param_1 + 0x58) == (code *)0x0) {
      if (*(longlong *)(param_1 + 0x30) == 0) {
        uVar9 = FUN_140b76070(*(undefined8 *)(param_1 + 8));
        puVar5 = (undefined8 *)FUN_140c17600(uVar9,6);
        lVar7 = local_res8;
        local_68 = puVar5;
        if (puVar5 != (undefined8 *)0x0) {
          if ((((*(longlong *)(param_1 + 0x30) != 0) && (*(code **)(param_1 + 0x58) != (code *)0x0))
              && (uVar6 = (**(code **)(param_1 + 0x58))
                                    (*(longlong *)(param_1 + 0x30),0,0,
                                     *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0)
                                    ), uVar6 != 0)) &&
             (lVar7 = FUN_140b8d8d0(uVar6,"providers\\implementations\\rands\\drbg.c",0x13f),
             lVar10 = local_70, lVar7 != 0)) {
            uVar3 = (**(code **)(param_1 + 0x58))
                              (*(undefined8 *)(param_1 + 0x30),lVar7,0,
                               *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0));
            if (uVar3 == uVar6) goto LAB_140cabf15;
            FUN_140b8d990(lVar7,"providers\\implementations\\rands\\drbg.c",0x146);
            lVar10 = local_70;
            puVar5 = local_68;
          }
          local_48[1] = 0;
          local_48[0] = param_1;
          iVar2 = FUN_140b8b810(puVar5 + 1,1,local_48 + 1,*puVar5);
          if (iVar2 == 0) {
            uVar3 = 0;
            lVar7 = local_res8;
          }
          else {
            uVar3 = FUN_140cfec80(*(undefined8 *)(param_1 + 8),&local_res8,lVar1,lVar10,local_48,
                                  0x10);
            lVar7 = local_res8;
          }
        }
LAB_140cabf15:
        local_res8 = lVar7;
        if ((uVar3 < *(ulonglong *)(param_1 + 0x98)) ||
           (uVar6 = local_60, *(ulonglong *)(param_1 + 0xa0) < uVar3)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar9 = 0x1a9;
          goto LAB_140cabd43;
        }
      }
      else {
        uVar12 = uVar12 + (uVar12 >> 1);
        uVar11 = uVar11 + lVar10;
        uVar3 = 0;
        uVar6 = uVar6 + lVar1;
      }
      goto LAB_140cabf43;
    }
    uVar3 = (**(code **)(param_1 + 0x58))(*(undefined8 *)(param_1 + 0x30),0,uVar12,lVar1,lVar10);
    if (uVar3 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar9 = 0x186;
    }
    else {
      local_res8 = FUN_140b8d8d0(uVar3,"providers\\implementations\\rands\\drbg.c",0x189);
      if (local_res8 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar9 = 0x18b;
      }
      else {
        uVar4 = (**(code **)(param_1 + 0x58))
                          (*(undefined8 *)(param_1 + 0x30),local_res8,
                           *(undefined4 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x98),
                           *(undefined8 *)(param_1 + 0xa0));
        if (uVar3 == uVar4) goto LAB_140cabf43;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar9 = 0x192;
      }
    }
LAB_140cabd43:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\rands\\drbg.c",uVar9,"ossl_prov_drbg_instantiate");
    uVar9 = 0xbe;
  }
  FUN_140b91cc0(0x39,uVar9,0);
LAB_140cac090:
  if (local_res8 != 0) {
    FUN_140cfed10(*(undefined8 *)(param_1 + 8),local_res8,uVar3);
  }
  return *(int *)(param_1 + 0xe8) == 1;
}


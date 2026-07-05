/**
 * Function: evp_pkey_derive_init_ex
 * Address:  140b81d10
 * Signature: undefined evp_pkey_derive_init_ex(void)
 * Body size: 1149 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint evp_pkey_derive_init_ex(undefined4 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong local_res8;
  undefined8 local_res10;
  longlong local_res18;
  
  lVar9 = 0;
  local_res8 = 0;
  local_res10 = param_2;
  if (param_1 == (undefined4 *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\exchange.c",0xd9,"EVP_PKEY_derive_init_ex");
    FUN_140b91cc0(6,0xc0102,0);
    return 0xfffffffe;
  }
  FUN_140b7c180();
  *param_1 = 0x800;
  FUN_140b932f0();
  if (*(longlong *)(param_1 + 8) == 0) goto LAB_140b81f34;
  lVar6 = *(longlong *)(param_1 + 0x22);
  if (lVar6 == 0) {
    lVar6 = FUN_140b7ed00();
    if ((lVar6 != 0) && (iVar4 = FUN_140b7e3a0(lVar6,*(undefined8 *)(param_1 + 8)), iVar4 != 0)) {
      lVar7 = FUN_140bfe030(*(undefined8 *)(param_1 + 8));
      *(longlong *)(lVar6 + 0x68) = lVar7;
      if (lVar7 != 0) {
        *(longlong *)(param_1 + 0x22) = lVar6;
        goto LAB_140b81dee;
      }
    }
    FUN_140b93470();
    FUN_140b7efe0(lVar6);
    uVar11 = 0xf1;
  }
  else {
LAB_140b81dee:
    if ((*(longlong *)(lVar6 + 0x60) != 0) &&
       (*(longlong *)(lVar6 + 0x60) != *(longlong *)(param_1 + 8))) {
      FUN_140b93470();
      uVar10 = 0xc0103;
      uVar11 = 0xfd;
      goto LAB_140b820a5;
    }
    local_res18 = FUN_140c07360(*(undefined8 *)(param_1 + 8),0xb);
    if (local_res18 == 0) {
      FUN_140b93470();
      uVar11 = 0x104;
    }
    else {
      iVar4 = 1;
      lVar6 = lVar9;
      lVar7 = lVar9;
      do {
        if (lVar7 != 0) goto LAB_140b82077;
        if (lVar6 != 0) {
          LOCK();
          piVar1 = (int *)(lVar6 + 0x20);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 < 2) {
            FUN_140b8d990(*(undefined8 *)(lVar6 + 8),"crypto\\evp\\exchange.c",0xa2);
            FUN_140bd3160(*(undefined8 *)(lVar6 + 0x18));
            FUN_140b8d990(lVar6,"crypto\\evp\\exchange.c",0xa5);
          }
        }
        FUN_140bfdf00(local_res8);
        if (iVar4 == 1) {
          lVar6 = FUN_140bd58f0(*(undefined8 *)(param_1 + 2),0xb,local_res18,
                                *(undefined8 *)(param_1 + 4),FUN_140b82830,FUN_140b827d0,
                                FUN_140b82770);
          if (lVar6 != 0) {
            lVar9 = *(longlong *)(lVar6 + 0x18);
            goto LAB_140b81fb7;
          }
        }
        else {
          if (iVar4 == 2) {
            lVar9 = FUN_140b97dc0(*(undefined8 *)(param_1 + 8));
            lVar6 = FUN_140bd5970(lVar9,0xb,local_res18,*(undefined8 *)(param_1 + 4),FUN_140b82830,
                                  FUN_140b827d0,FUN_140b82770);
            if (lVar6 == 0) goto LAB_140b81f34;
          }
          else if (lVar6 == 0) goto LAB_140b82013;
LAB_140b81fb7:
          uVar11 = *(undefined8 *)(param_1 + 4);
          uVar10 = FUN_140b77290(*(undefined8 *)(param_1 + 8));
          lVar8 = FUN_140bfe4f0(lVar9,uVar10,uVar11);
          local_res8 = lVar8;
          if (lVar8 != 0) {
            lVar7 = FUN_140b80640(*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 2),
                                  &local_res8,*(undefined8 *)(param_1 + 4));
          }
          if (local_res8 == 0) {
            FUN_140bfdf00(lVar8);
          }
        }
LAB_140b82013:
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
      if (lVar7 == 0) {
        if (lVar6 != 0) {
          LOCK();
          piVar1 = (int *)(lVar6 + 0x20);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 < 2) {
            FUN_140b8d990(*(undefined8 *)(lVar6 + 8),"crypto\\evp\\exchange.c",0xa2);
            FUN_140bd3160(*(undefined8 *)(lVar6 + 0x18));
            FUN_140b8d990(lVar6,"crypto\\evp\\exchange.c",0xa5);
          }
        }
LAB_140b81f34:
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        lVar9 = *(longlong *)(param_1 + 0x1e);
        if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0xb8) != 0)) {
          if (*(code **)(lVar9 + 0xb0) == (code *)0x0) {
            return 1;
          }
          uVar5 = (**(code **)(lVar9 + 0xb0))(param_1);
          if ((int)uVar5 < 1) {
            *param_1 = 0;
          }
          FUN_140bfdf00(local_res8);
          return uVar5;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\exchange.c",0x175,"EVP_PKEY_derive_init_ex");
        FUN_140b91cc0(6,0x96,0);
        return 0xfffffffe;
      }
LAB_140b82077:
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      *(longlong *)(param_1 + 10) = lVar6;
      pcVar3 = *(code **)(lVar6 + 0x28);
      uVar11 = FUN_140bd3830(*(undefined8 *)(lVar6 + 0x18));
      lVar9 = (*pcVar3)(uVar11);
      *(longlong *)(param_1 + 0xc) = lVar9;
      if (lVar9 != 0) {
        iVar4 = (**(code **)(lVar6 + 0x30))(lVar9,lVar7,local_res10);
        FUN_140bfdf00(local_res8);
        return (uint)(iVar4 != 0);
      }
      uVar11 = 0x15d;
    }
  }
  uVar10 = 0x86;
LAB_140b820a5:
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("crypto\\evp\\exchange.c",uVar11,"EVP_PKEY_derive_init_ex");
  FUN_140b91cc0(6,uVar10,0);
  FUN_140b7c180(param_1);
  *param_1 = 0;
  FUN_140bfdf00(local_res8);
  return 0;
}


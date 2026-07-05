/**
 * Function: maybe_need_to_load_the_default_provider
 * Address:  140cb37d0
 * Signature: undefined maybe_need_to_load_the_default_provider(void)
 * Body size: 1270 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

bool maybe_need_to_load_the_default_provider(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  char *pcVar9;
  bool bVar10;
  longlong local_res10;
  ulonglong local_78;
  longlong alStack_70 [9];
  
  alStack_70[8] = 0x140cb37f5;
  lVar1 = param_2[1];
  lVar3 = ossl_store_loader_get0_provider(*(undefined8 *)(lVar1 + 8));
  local_res10 = lVar3;
  uVar4 = FUN_140bd3af0(lVar3);
  uVar8 = *(undefined8 *)(lVar1 + 0x30);
  local_78 = 0;
  alStack_70[0] = 0;
  alStack_70[1] = 0;
  alStack_70[2] = 0;
  alStack_70[3] = 0;
  alStack_70[4] = 0;
  alStack_70[5] = 0;
  alStack_70[6] = 0;
  alStack_70[7] = 0;
  alStack_70[8] = 0;
  lVar5 = FUN_140b93540(param_1,&DAT_1413a6260);
  if ((lVar5 != 0) && (iVar2 = FUN_140b93920(lVar5,&local_78), iVar2 == 0)) {
    return false;
  }
  lVar5 = FUN_140b93540(param_1,"data-type");
  if ((lVar5 != 0) && (iVar2 = FUN_140b954c0(lVar5,alStack_70), iVar2 == 0)) {
    return false;
  }
  lVar5 = FUN_140b93540(param_1,&DAT_1413a6588);
  if (((lVar5 != 0) && (iVar2 = FUN_140b95610(lVar5,alStack_70 + 4,alStack_70 + 5), iVar2 == 0)) &&
     (iVar2 = FUN_140b954c0(lVar5,alStack_70 + 3), iVar2 == 0)) {
    return false;
  }
  lVar5 = FUN_140b93540(param_1,"data-structure");
  if ((lVar5 != 0) && (iVar2 = FUN_140b954c0(lVar5,alStack_70 + 2), iVar2 == 0)) {
    return false;
  }
  lVar5 = FUN_140b93540(param_1,"input-type");
  if ((lVar5 != 0) && (iVar2 = FUN_140b954c0(lVar5,alStack_70 + 1), iVar2 == 0)) {
    return false;
  }
  lVar5 = FUN_140b93540(param_1,"reference");
  if ((lVar5 != 0) && (iVar2 = FUN_140b95610(lVar5,alStack_70 + 6,alStack_70 + 7), iVar2 == 0)) {
    return false;
  }
  lVar5 = FUN_140b93540(param_1,&DAT_1413a6480);
  if ((lVar5 != 0) && (iVar2 = FUN_140b954c0(lVar5,alStack_70 + 8), iVar2 == 0)) {
    return false;
  }
  FUN_140b932f0();
  lVar5 = 0;
  if ((*param_2 == 0) && ((int)local_78 == 1)) {
    if (alStack_70[3] == 0) goto LAB_140cb3ba9;
    lVar6 = FUN_140b8c830(alStack_70[3],"crypto\\store\\store_result.c",0xb7);
    lVar3 = lVar5;
    if ((lVar6 == 0) ||
       ((alStack_70[8] != 0 &&
        (lVar3 = FUN_140b8c830(alStack_70[8],"crypto\\store\\store_result.c",0xb9), lVar3 == 0)))) {
LAB_140cb3b34:
      FUN_140b8d990(lVar6,"crypto\\store\\store_result.c",0xbb);
      FUN_140b8d990(lVar3,"crypto\\store\\store_result.c",0xbc);
      FUN_140b93470();
      return false;
    }
    lVar7 = ossl_store_info_new_name(lVar6);
    *param_2 = lVar7;
    if (lVar7 == 0) goto LAB_140cb3b34;
    ossl_store_info_set0_name_description(lVar7,lVar3);
    lVar3 = local_res10;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  FUN_140b932f0();
  if ((*param_2 == 0) &&
     (iVar2 = FUN_140cb3cd0(&local_78,param_2,lVar1,lVar3,uVar4,uVar8), iVar2 == 0))
  goto LAB_140cb3ba9;
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  FUN_140b932f0();
  if ((*param_2 != 0) || (((int)local_78 != 0 && ((int)local_78 != 3)))) goto LAB_140cb3ad7;
  local_res10 = FUN_140b76440(uVar4,uVar8);
  if (local_res10 == 0) goto LAB_140cb3ba9;
  bVar10 = true;
  if (alStack_70[0] != 0) {
    iVar2 = FUN_140b8c6a0(alStack_70[0],"TRUSTED CERTIFICATE");
    bVar10 = true;
    if (iVar2 == 0) {
      bVar10 = false;
    }
  }
  lVar6 = FUN_140b76540(&local_res10,alStack_70 + 4,alStack_70[5] & 0xffffffff);
  if ((lVar6 != 0) ||
     ((bVar10 &&
      (lVar6 = FUN_140b763f0(&local_res10,alStack_70 + 4,alStack_70[5] & 0xffffffff), lVar6 != 0))))
  {
    if (local_res10 != 0) {
      local_78 = CONCAT44(local_78._4_4_,3);
      lVar6 = ossl_store_info_new_cert();
      *param_2 = lVar6;
      if (lVar6 == 0) goto LAB_140cb3ace;
    }
  }
  else {
LAB_140cb3ace:
    FUN_140b763d0(local_res10);
  }
LAB_140cb3ad7:
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  FUN_140b932f0();
  if ((*param_2 == 0) && ((local_78 & 0xfffffffb) == 0)) {
    lVar6 = FUN_140beb8b0(0,alStack_70 + 4,alStack_70[5] & 0xffffffff);
    if (lVar6 != 0) {
      local_78 = CONCAT44(local_78._4_4_,4);
      iVar2 = FUN_140beb960(lVar6,uVar4,uVar8);
      if (iVar2 == 0) {
        FUN_140beb890();
        lVar6 = lVar5;
      }
      else {
        lVar5 = ossl_store_info_new_crl(lVar6);
        *param_2 = lVar5;
      }
    }
    if (*param_2 == 0) {
      FUN_140beb890(lVar6);
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  FUN_140b932f0();
  if ((*param_2 != 0) ||
     (iVar2 = maybe_wrong_password(&local_78,param_2,lVar1,uVar4,uVar8), iVar2 != 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    bVar10 = false;
    if (*param_2 == 0) {
      iVar2 = FUN_140bd2ab0(uVar4,"default");
      pcVar9 = ":maybe need to load the default provider?";
      if (iVar2 != 0) {
        pcVar9 = "";
      }
      if (lVar3 == 0) {
        if (*pcVar9 == '\0') {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\store\\store_result.c",0xa7,"ossl_store_handle_load_result");
          FUN_140b91cc0(0x2c,0x8010c,0);
        }
        else {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\store\\store_result.c",0xa5,"ossl_store_handle_load_result");
          FUN_140b91cc0(0x2c,0x8010c,&DAT_1413a5d54,pcVar9);
        }
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\store\\store_result.c",0xa2,"ossl_store_handle_load_result");
        uVar8 = FUN_140c17270(lVar3);
        FUN_140b91cc0(0x2c,0x8010c,"provider=%s%s",uVar8,pcVar9);
      }
      bVar10 = *param_2 == 0;
    }
    return !bVar10;
  }
LAB_140cb3ba9:
  FUN_140b93470();
  return false;
}


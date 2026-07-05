/**
 * Function: setting_store_name_to_sn
 * Address:  140c77d30
 * Signature: undefined setting_store_name_to_sn(void)
 * Body size: 941 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
setting_store_name_to_sn(undefined8 param_1,undefined4 param_2,uint param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 local_28 [2];
  undefined8 local_20;
  
  local_20 = 0x140c77d44;
  uVar1 = 1;
  if (DAT_141517ed0 == -1) {
    if (DAT_141700c98 == 0) {
      DAT_141700c98 = FUN_140b92700();
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,"ERR_CAPI_error"
              );
    FUN_140b91cc0(DAT_141700c98,0x6b,0);
    d_aplatformplatformopenssl_srccryptoerrerr_lo("engines\\e_capi.c",0x125,0);
    return 0;
  }
  puVar3 = (uint *)FUN_140c10320();
  uVar4 = __acrt_iob_func(1);
  lVar5 = FUN_140bf2980(uVar4,0);
  if (lVar5 == 0) {
    if (DAT_141700c98 == 0) {
      DAT_141700c98 = FUN_140b92700();
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,"ERR_CAPI_error"
              );
    FUN_140b91cc0(DAT_141700c98,0x73,0);
    d_aplatformplatformopenssl_srccryptoerrerr_lo("engines\\e_capi.c",299,0);
    return 0;
  }
  switch(param_2) {
  case 200:
    uVar1 = listing_certs_for_store_sn(puVar3,lVar5,0);
    break;
  case 0xc9:
    uVar1 = listing_certs_for_store_sn(puVar3,lVar5,param_4);
    break;
  case 0xca:
    *puVar3 = param_3;
    enginese_capic(puVar3,"Setting debug level to %d\n",param_3);
    break;
  case 0xcb:
    lVar6 = FUN_140b8c830(param_4,"engines\\e_capi.c",0x15b);
    if (lVar6 != 0) {
      *(longlong *)(puVar3 + 2) = lVar6;
      enginese_capic(puVar3,"Setting debug file to %s\n",lVar6);
      break;
    }
    goto LAB_140c780b8;
  case 0xcc:
    puVar3[4] = param_3;
    enginese_capic(puVar3,"Setting key type to %d\n",param_3);
    break;
  case 0xcd:
    uVar1 = capi_get_provname_returned_names_typedn(puVar3,lVar5);
    break;
  case 0xce:
    iVar2 = capi_get_provname_returned_names_typedn(puVar3,&local_20,local_28,param_3);
    if (iVar2 == 1) {
      uVar1 = capi_ctx_set_provname_names_typedn(puVar3,local_20,local_28[0],0);
      FUN_140b8d990(local_20,"engines\\e_capi.c",0x6a3);
      break;
    }
    goto LAB_140c780b8;
  case 0xcf:
    uVar1 = capi_ctx_set_provname_names_typedn(puVar3,param_4,puVar3[8],1);
    break;
  case 0xd0:
    puVar3[8] = param_3;
    break;
  case 0xd1:
    uVar1 = container_name_s_lend_indexd_flagsdn(puVar3,lVar5);
    break;
  case 0xd2:
    puVar3[0x10] = param_3;
    break;
  case 0xd3:
    if (2 < param_3 - 1) {
      err_capi_error(0,0x78,"engines\\e_capi.c",0x173);
      FUN_140b73150(lVar5);
      return 0;
    }
    puVar3[0xf] = param_3;
    break;
  case 0xd4:
    lVar6 = FUN_140b8c830(param_4,"engines\\e_capi.c",0x140);
    if (lVar6 != 0) {
      FUN_140b8d990(*(undefined8 *)(puVar3 + 10),"engines\\e_capi.c",0x142);
      *(longlong *)(puVar3 + 10) = lVar6;
      enginese_capic(puVar3,"Setting store name to %s\n",param_4);
      break;
    }
    goto LAB_140c780b8;
  case 0xd5:
    uVar7 = puVar3[0xe] & 0xfffdffff | 0x10000;
    if ((param_3 & 1) != 0) {
      uVar7 = puVar3[0xe] & 0xfffeffff | 0x20000;
    }
    puVar3[0xe] = uVar7;
    enginese_capic(puVar3,"Setting flags to %d\n",param_3);
    break;
  default:
    if (DAT_141700c98 == 0) {
      DAT_141700c98 = FUN_140b92700();
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("D:\\a\\Platform\\Platform\\openssl-src\\engines\\e_capi_err.c",0x5c,"ERR_CAPI_error"
              );
    FUN_140b91cc0(DAT_141700c98,0x7d,0);
    d_aplatformplatformopenssl_srccryptoerrerr_lo("engines\\e_capi.c",0x183,0);
LAB_140c780b8:
    uVar1 = 0;
  }
  FUN_140b73150(lVar5);
  return uVar1;
}


/**
 * Function: aes_ocb_block_update_internal
 * Address:  140d0f290
 * Signature: undefined aes_ocb_block_update_internal(void)
 * Body size: 683 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool aes_ocb_block_update_internal
               (longlong param_1,longlong param_2,ulonglong *param_3,ulonglong param_4,
               longlong param_5,ulonglong param_6)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong local_res8;
  longlong local_48;
  longlong local_40;
  
  if (((*(byte *)(param_1 + 0x364) & 1) == 0) || (iVar2 = FUN_140d10280(), iVar2 == 0)) {
    return false;
  }
  if (param_6 == 0) {
    *param_3 = 0;
    return true;
  }
  if (param_2 == 0) {
    pcVar5 = FUN_140d10250;
    local_40 = 0x3a0;
    lVar3 = 0x378;
  }
  else {
    pcVar5 = FUN_140d100c0;
    local_40 = 0x390;
    lVar3 = 0x370;
  }
  plVar1 = (longlong *)(lVar3 + param_1);
  local_res8 = param_6;
  local_40 = local_40 + param_1;
  uVar4 = 0;
  bVar6 = false;
  local_48 = param_5;
  if (*plVar1 == 0) {
    param_6 = param_6 & 0xfffffffffffffff0;
  }
  else {
    param_6 = FUN_140d97320(local_40,plVar1,0x10,&local_48,&local_res8);
  }
  if (*plVar1 == 0x10) {
    if (param_4 < 0x10) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\cipher_aes_ocb.c",0xaf,
                 "aes_ocb_block_update_internal");
      FUN_140b91cc0(0x39,0x6a,0);
      return false;
    }
    iVar2 = (*pcVar5)(param_1,local_40,param_2,0x10);
    if (iVar2 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\cipher_aes_ocb.c",0xb3,
                 "aes_ocb_block_update_internal");
      FUN_140b91cc0(0x39,0x66,0);
      return false;
    }
    *plVar1 = 0;
    uVar4 = 0x10;
    if (param_2 != 0) {
      param_2 = param_2 + 0x10;
    }
  }
  if (param_6 != 0) {
    uVar4 = uVar4 + param_6;
    if (param_4 < uVar4) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\cipher_aes_ocb.c",0xbe,
                 "aes_ocb_block_update_internal");
      FUN_140b91cc0(0x39,0x6a,0);
      return false;
    }
    iVar2 = (*pcVar5)(param_1,local_48,param_2,param_6);
    if (iVar2 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\cipher_aes_ocb.c",0xc2,
                 "aes_ocb_block_update_internal");
      FUN_140b91cc0(0x39,0x66,0);
      return false;
    }
    local_48 = local_48 + param_6;
    local_res8 = local_res8 - param_6;
  }
  if ((local_res8 == 0) ||
     (iVar2 = providersimplementationsciphersciphercommon_b
                        (local_40,plVar1,0x10,&local_48,&local_res8), iVar2 != 0)) {
    bVar6 = local_res8 == 0;
    *param_3 = uVar4;
  }
  return bVar6;
}


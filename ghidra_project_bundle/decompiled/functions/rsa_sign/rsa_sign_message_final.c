/**
 * Function: rsa_sign_message_final
 * Address:  140d40b30
 * Signature: undefined rsa_sign_message_final(void)
 * Body size: 216 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rsa_sign_message_final(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  ulonglong local_90;
  uint local_88 [4];
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x140d40b3f;
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  local_88[0] = 0;
  iVar1 = FUN_140b69250();
  if (((iVar1 != 0) && (param_1 != 0)) && (*(longlong *)(param_1 + 0x28) != 0)) {
    if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\signature\\rsa_sig.c",0x35c,"rsa_sign_message_final");
      FUN_140b91cc0(0x39,0xed,0);
    }
    else {
      if (param_2 != 0) {
        iVar1 = assertion_failed_mdsize_evp_max_md_size
                          (*(longlong *)(param_1 + 0x28),local_78,local_88);
        if (iVar1 == 0) goto LAB_140d40bb6;
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffffc7;
      }
      local_90 = (ulonglong)local_88[0];
      local_98 = local_78;
      rsa_key_size_d_expected_minimum_d(param_1,param_2,param_3,param_4);
    }
  }
LAB_140d40bb6:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_b8);
}


/**
 * Function: rsa_verify_message_final
 * Address:  140d40fe0
 * Signature: undefined rsa_verify_message_final(void)
 * Body size: 199 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rsa_verify_message_final(longlong param_1)

{
  int iVar1;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  uint local_68 [4];
  undefined1 local_58 [64];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x140d40fec;
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  local_68[0] = 0;
  iVar1 = FUN_140b69250();
  if (((iVar1 != 0) && (param_1 != 0)) && (*(longlong *)(param_1 + 0x28) != 0)) {
    if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\signature\\rsa_sig.c",0x476,"rsa_verify_message_final"
                );
      FUN_140b91cc0(0x39,0xed,0);
    }
    else {
      iVar1 = assertion_failed_mdsize_evp_max_md_size
                        (*(longlong *)(param_1 + 0x28),local_58,local_68);
      if (iVar1 != 0) {
        local_78 = (ulonglong)local_68[0];
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffffc7;
        rsa_verify_directly(param_1,*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                            local_58);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_98);
}


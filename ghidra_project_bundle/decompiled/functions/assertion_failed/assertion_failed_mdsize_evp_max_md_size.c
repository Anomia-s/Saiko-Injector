/**
 * Function: assertion_failed_mdsize_evp_max_md_size
 * Address:  140b71120
 * Signature: undefined assertion_failed_mdsize_evp_max_md_size(void)
 * Body size: 360 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong assertion_failed_mdsize_evp_max_md_size(longlong param_1,undefined8 param_2,uint *param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  
  local_res8 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar2 = FUN_140b97c20();
    if (-1 < (int)uVar2) {
      if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x68) == 0) {
        if (0x40 < uVar2) {
          s_d_openssl_internal_error_sn
                    ("assertion failed: mdsize <= EVP_MAX_MD_SIZE","crypto\\evp\\digest.c",0x1e5);
        }
        uVar3 = (**(code **)(*(longlong *)(param_1 + 8) + 0x28))(param_1,param_2);
        if (param_3 != (uint *)0x0) {
          *param_3 = uVar2;
        }
        pcVar1 = *(code **)(*(longlong *)(param_1 + 8) + 0x38);
        if (pcVar1 != (code *)0x0) {
          (*pcVar1)(param_1);
          FUN_140b988d0(param_1,2);
        }
        FUN_14046e980(*(undefined8 *)(param_1 + 0x20),
                      (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x44));
        return (ulonglong)uVar3;
      }
      pcVar1 = *(code **)(*(longlong *)(param_1 + 8) + 0x90);
      if (pcVar1 == (code *)0x0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar5 = 0x1cb;
      }
      else if ((*(uint *)(param_1 + 0x18) & 0x800) == 0) {
        uVar4 = (*pcVar1)(*(undefined8 *)(param_1 + 0x38),param_2,&local_res8,(longlong)(int)uVar2);
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x800;
        if (param_3 == (uint *)0x0) {
          return uVar4;
        }
        if (local_res8 < 0x100000000) {
          *param_3 = (uint)local_res8;
          return uVar4;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar5 = 0x1dc;
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar5 = 0x1d0;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\digest.c",uVar5,"EVP_DigestFinal_ex");
      FUN_140b91cc0(6,0xbc,0);
    }
  }
  return 0;
}


/**
 * Function: assertion_failed_l_sizeofiv
 * Address:  140ce3d00
 * Signature: undefined assertion_failed_l_sizeofiv(void)
 * Body size: 317 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void assertion_failed_l_sizeofiv(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  int local_38 [2];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  if (param_2 != 0) {
    uVar1 = FUN_140b98300();
    if (0x10 < uVar1) {
      s_d_openssl_internal_error_sn("assertion failed: l <= sizeof(iv)","crypto\\evp\\e_rc2.c",0x8c)
      ;
    }
    uVar2 = FUN_140c24210(param_2,local_38,local_30,uVar1);
    if (uVar2 == uVar1) {
      if (local_38[0] == 0x3a) {
        uVar1 = 0x80;
      }
      else if (local_38[0] == 0x78) {
        uVar1 = 0x40;
      }
      else {
        if (local_38[0] != 0xa0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\e_rc2.c",0x7d,"rc2_magic_to_meth");
          FUN_140b91cc0(6,0x6c,0);
          goto LAB_140ce3dfa;
        }
        uVar1 = 0x28;
      }
      if (0 < (int)uVar2) {
        local_48 = local_30;
        local_40 = 0xffffffff;
        iVar3 = FUN_140b85520(param_1,0,0,0);
        if (iVar3 == 0) goto LAB_140ce3dfa;
      }
      iVar3 = FUN_140b85be0(param_1,3,uVar1,0);
      if (0 < iVar3) {
        FUN_140b85920(param_1,uVar1 >> 3);
      }
    }
  }
LAB_140ce3dfa:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_68);
}


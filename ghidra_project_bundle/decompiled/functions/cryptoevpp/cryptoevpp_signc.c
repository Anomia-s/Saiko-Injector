/**
 * Function: cryptoevpp_signc
 * Address:  140cc5350
 * Signature: undefined cryptoevpp_signc(void)
 * Body size: 393 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cryptoevpp_signc(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  uint local_b8 [2];
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x140cc5367;
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_e8;
  local_a8 = param_6;
  local_b8[0] = 0;
  lVar2 = 0;
  *param_3 = 0;
  iVar1 = FUN_140b988f0(param_1,0x200);
  if (iVar1 == 0) {
    lVar2 = FUN_140b70980();
    if (lVar2 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\p_sign.c",0x24,"EVP_SignFinal_ex")
      ;
      FUN_140b91cc0(6,0x80006,0);
      goto LAB_140cc54c9;
    }
    iVar1 = FUN_140b70a90(lVar2,param_1);
    lVar4 = param_1;
    if (iVar1 != 0) {
      lVar4 = lVar2;
    }
    iVar1 = assertion_failed_mdsize_evp_max_md_size(lVar4,local_98,local_b8);
    FUN_140b709d0(lVar2);
    if (iVar1 == 0) goto LAB_140cc54c9;
LAB_140cc5446:
    iVar1 = FUN_140b7e020(param_4);
    local_b0 = (longlong)iVar1;
    lVar2 = FUN_140b7b2e0(param_5,param_4,local_a8);
    if ((lVar2 != 0) && (iVar1 = FUN_140bfecd0(lVar2), 0 < iVar1)) {
      uVar3 = FUN_140b76060(param_1);
      iVar1 = FUN_140b7b150(lVar2,uVar3);
      if (0 < iVar1) {
        local_c8 = (ulonglong)local_b8[0];
        iVar1 = evp_pkey_sign(lVar2,param_2,&local_b0,local_98);
        if (0 < iVar1) {
          *param_3 = (undefined4)local_b0;
        }
      }
    }
  }
  else {
    iVar1 = assertion_failed_mdsize_evp_max_md_size(param_1,local_98,local_b8);
    if (iVar1 != 0) goto LAB_140cc5446;
  }
  FUN_140b7b6a0(lVar2);
LAB_140cc54c9:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_e8);
}


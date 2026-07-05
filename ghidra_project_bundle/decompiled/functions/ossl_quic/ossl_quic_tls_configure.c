/**
 * Function: ossl_quic_tls_configure
 * Address:  140badb30
 * Signature: undefined ossl_quic_tls_configure(void)
 * Body size: 438 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_quic_tls_configure(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  piVar2 = (int *)*param_1;
  if ((piVar2 == (int *)0x0) ||
     (((*piVar2 != 0 &&
       ((-1 < (char)*piVar2 || (piVar2 = (int *)FUN_140bc8b20(piVar2), piVar2 == (int *)0x0)))) ||
      (iVar1 = FUN_140b6b270(*param_1,0x7b,0x304,0), iVar1 == 0)))) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar3 = 0x2cc;
  }
  else {
    uVar3 = FUN_140c44020();
    lVar4 = FUN_140b73040(uVar3);
    if (lVar4 != 0) {
      FUN_140b6a950(*param_1,lVar4,lVar4);
      FUN_140b69590(*param_1,0x100000);
      FUN_140bacd40(piVar2,&PTR_FUN_141234910,param_1);
      iVar1 = FUN_140ba24b0(0,*(longlong *)(piVar2 + 0x21e) + 0x80,*(int *)(param_1 + 0xf) != 0,0x39
                            ,CONCAT44(uVar5,0x4a0),&LAB_140bae0e0,_guard_check_icall,param_1,
                            FUN_140bae110,param_1);
      if (iVar1 == 0) {
        return 0;
      }
      piVar2[0x58] = piVar2[0x58] | 0x2000;
      return 1;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar3 = 0x2d0;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\quic\\quic_tls.c",uVar3,"ossl_quic_tls_configure");
  FUN_140b91cc0(0x14,0x189,"handshake layer error, error code %llu (0x%llx) (\"%s\")",1,1,
                "internal error");
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo(param_1[0x12]);
    *(uint *)(param_1 + 0x15) = *(uint *)(param_1 + 0x15) | 2;
    param_1[0x13] = 1;
    param_1[0x14] = "internal error";
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
  }
  return 0;
}


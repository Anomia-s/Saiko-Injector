/**
 * Function: invalid_operation_d
 * Address:  140da7dd0
 * Signature: undefined invalid_operation_d(void)
 * Body size: 309 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 invalid_operation_d(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_2 < 0x401) {
    uVar1 = 0;
    if (param_2 != 0x400) {
      if (param_2 == 0x10) {
LAB_140da7ee9:
        uVar3 = 1;
        goto LAB_140da7eee;
      }
      uVar3 = 0;
      if (param_2 == 0x20) goto LAB_140da7eee;
      uVar1 = 0;
      if (param_2 != 0x40) {
        if (param_2 != 0x200) goto LAB_140da7ea1;
        goto LAB_140da7e1f;
      }
    }
  }
  else if (param_2 == 0x1000) {
LAB_140da7e1f:
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if (param_2 != 0x2000) {
      if (param_2 != 0x4000) {
        if (param_2 != 0x8000) {
LAB_140da7ea1:
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\common\\securitycheck.c",0x35,"ossl_rsa_key_op_get_protect");
          FUN_140b91cc0(0x39,0xc0103,"invalid operation: %d",param_2);
          return 0;
        }
        goto LAB_140da7eee;
      }
      goto LAB_140da7ee9;
    }
  }
  uVar3 = uVar1;
  iVar2 = FUN_140c2a410(param_1,0xf000);
  if (iVar2 == 0x1000) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\common\\securitycheck.c",0x2e,"ossl_rsa_key_op_get_protect");
    FUN_140b91cc0(0x39,0xb2,"operation: %d",param_2);
    return 0;
  }
LAB_140da7eee:
  *param_3 = uVar3;
  return 1;
}


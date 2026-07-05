/**
 * Function: ec_point_is_at_infinity
 * Address:  140c0d730
 * Signature: undefined ec_point_is_at_infinity(void)
 * Body size: 169 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_point_is_at_infinity(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ec_lib.c",0x3da,"EC_POINT_is_at_infinity");
    FUN_140b91cc0(0x10,0xc0101,0);
    return 0;
  }
  if (*param_1 == *param_2) {
    if ((int)param_1[4] != 0) {
      if (((int)param_2[1] != 0) && ((int)param_1[4] != (int)param_2[1])) goto LAB_140c0d7a3;
    }
                    /* WARNING: Could not recover jumptable at 0x000140c0d7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
LAB_140c0d7a3:
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("crypto\\ec\\ec_lib.c",0x3de,"EC_POINT_is_at_infinity");
  FUN_140b91cc0(0x10,0x65,0);
  return 0;
}


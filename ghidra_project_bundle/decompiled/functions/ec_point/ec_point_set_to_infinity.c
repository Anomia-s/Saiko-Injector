/**
 * Function: ec_point_set_to_infinity
 * Address:  140c0d050
 * Signature: undefined ec_point_set_to_infinity(void)
 * Body size: 145 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_point_set_to_infinity(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  uVar1 = 0x140c0d05a;
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x70);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ec_lib.c",0x332,"EC_POINT_set_to_infinity",param_4,uVar1);
    FUN_140b91cc0(0x10,0xc0101,0);
    return 0;
  }
  if (*param_1 != *param_2) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ec_lib.c",0x336,"EC_POINT_set_to_infinity");
    FUN_140b91cc0(0x10,0x65,0);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000140c0d0de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}


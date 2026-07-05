/**
 * Function: nconf_load
 * Address:  140c1a320
 * Signature: undefined nconf_load(void)
 * Body size: 86 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 nconf_load(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\conf\\conf_lib.c",0xfe,"NCONF_load");
    FUN_140b91cc0(0xe,0x69,0);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000140c1a373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x48))();
  return uVar1;
}


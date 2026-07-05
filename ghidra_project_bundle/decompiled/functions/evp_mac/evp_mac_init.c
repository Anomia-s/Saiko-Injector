/**
 * Function: evp_mac_init
 * Address:  140c45d50
 * Signature: undefined evp_mac_init(void)
 * Body size: 90 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 evp_mac_init(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x140c45d5a;
  if (*(code **)(*param_1 + 0x40) == (code *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\mac_lib.c",0x77,"EVP_MAC_init",param_4,uVar1);
    FUN_140b91cc0(0x80006,0x8010c,0);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000140c45da7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x40))(param_1[1]);
  return uVar1;
}


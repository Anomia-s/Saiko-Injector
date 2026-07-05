/**
 * Function: evp_md_get_block_size
 * Address:  140b97ba0
 * Signature: undefined evp_md_get_block_size(void)
 * Body size: 83 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
evp_md_get_block_size(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x140b97baa;
  if (param_1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\evp_lib.c",0x322,"EVP_MD_get_block_size",param_4,uVar1);
    FUN_140b91cc0(6,0x9f,0);
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x40);
}


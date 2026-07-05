/**
 * Function: do_init_module_list_lock
 * Address:  140c1b5c0
 * Signature: undefined do_init_module_list_lock(void)
 * Body size: 114 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void do_init_module_list_lock
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  DAT_141700348 = cryptothreads_winc(1,0,param_3,param_4,0x140c1b5ca);
  if (DAT_141700348 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\conf\\conf_mod.c",0x68,"do_init_module_list_lock");
    FUN_140b91cc0(0xe,0x8000f,0);
    DAT_141700360 = 0;
    return;
  }
  DAT_141700360 = 1;
  return;
}


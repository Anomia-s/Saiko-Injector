/**
 * Function: ecx_init
 * Address:  140d3a980
 * Signature: undefined ecx_init(void)
 * Body size: 154 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ecx_init(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_140b69250();
  if (iVar1 != 0) {
    if (((param_1 != (longlong *)0x0) && (param_2 != 0)) &&
       (*(longlong *)(param_2 + 0x58) == *param_1)) {
      iVar1 = FUN_140c131f0(param_2);
      if (iVar1 != 0) {
        FUN_140c13180(param_1[1]);
        param_1[1] = param_2;
        return 1;
      }
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\exchange\\ecx_exch.c",0x53,"ecx_init");
    FUN_140b91cc0(0x39,0xc0103,0);
  }
  return 0;
}


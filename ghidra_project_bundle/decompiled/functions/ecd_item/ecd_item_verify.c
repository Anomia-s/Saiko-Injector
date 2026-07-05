/**
 * Function: ecd_item_verify
 * Address:  140bf9c90
 * Signature: undefined ecd_item_verify(void)
 * Body size: 157 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte ecd_item_verify(undefined8 param_1)

{
  int iVar1;
  undefined8 in_stack_00000030;
  int local_18 [2];
  undefined8 local_10;
  
  local_10 = 0x140bf9c9c;
  FUN_140bdf8f0(&local_10,local_18,0);
  iVar1 = FUN_140b964c0(local_10);
  if ((iVar1 - 0x43fU < 2) && (local_18[0] == -1)) {
    iVar1 = FUN_140bd0d80(param_1,0,0,0,in_stack_00000030);
    return -(iVar1 != 0) & 2;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ec\\ecx_meth.c",0x228,"ecd_item_verify");
  FUN_140b91cc0(0x10,0x66,0);
  return 0;
}


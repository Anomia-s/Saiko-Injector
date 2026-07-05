/**
 * Function: calling_capi_ctx_free_with_lxn
 * Address:  140c785b0
 * Signature: undefined calling_capi_ctx_free_with_lxn(void)
 * Body size: 201 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 calling_capi_ctx_free_with_lxn(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140c10320(param_1,DAT_141517ed0);
  enginese_capic(lVar1,"Calling capi_ctx_free with %lx\n",lVar1);
  if (lVar1 != 0) {
    FUN_140b8d990(*(undefined8 *)(lVar1 + 0x18),"engines\\e_capi.c",0x673);
    FUN_140b8d990(*(undefined8 *)(lVar1 + 8),"engines\\e_capi.c",0x674);
    FUN_140b8d990(*(undefined8 *)(lVar1 + 0x28),"engines\\e_capi.c",0x675);
    FUN_140b8d990(*(undefined8 *)(lVar1 + 0x30),"engines\\e_capi.c",0x676);
    FUN_140b8d990(lVar1,"engines\\e_capi.c",0x677);
  }
  FUN_140c10300(param_1,DAT_141517ed0,0);
  return 1;
}


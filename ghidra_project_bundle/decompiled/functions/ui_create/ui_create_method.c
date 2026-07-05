/**
 * Function: ui_create_method
 * Address:  140ce02a0
 * Signature: undefined ui_create_method(void)
 * Body size: 229 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * ui_create_method(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_140b8da80(0x58,"crypto\\ui\\ui_lib.c",0x25e);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_140b8c830(param_1,"crypto\\ui\\ui_lib.c",0x25f);
    *plVar2 = lVar3;
    if (lVar3 != 0) {
      iVar1 = FUN_140b8cf40(0xe,plVar2,plVar2 + 9);
      if (iVar1 != 0) {
        return plVar2;
      }
    }
    if (*plVar2 != 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ui\\ui_lib.c",0x269,"UI_create_method")
      ;
      FUN_140b91cc0(0x28,0x8000f,0);
    }
    FUN_140b8d990(*plVar2,"crypto\\ui\\ui_lib.c",0x26a);
  }
  FUN_140b8d990(plVar2,"crypto\\ui\\ui_lib.c",0x26c);
  return (longlong *)0x0;
}


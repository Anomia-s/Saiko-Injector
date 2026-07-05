/**
 * Function: infopair_add
 * Address:  140bd46a0
 * Signature: undefined infopair_add(void)
 * Body size: 313 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 infopair_add(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_140b8da80(0x10,"crypto\\provider_core.c",0x322);
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  lVar3 = FUN_140b8c830(param_2,"crypto\\provider_core.c",0x323);
  *plVar2 = lVar3;
  if (lVar3 == 0) goto LAB_140bd477b;
  lVar3 = FUN_140b8c830(param_3,"crypto\\provider_core.c",0x324);
  plVar2[1] = lVar3;
  if (lVar3 == 0) goto LAB_140bd477b;
  lVar3 = *param_1;
  if (lVar3 == 0) {
    lVar3 = FUN_140b77ab0();
    *param_1 = lVar3;
    if (lVar3 != 0) goto LAB_140bd4739;
  }
  else {
LAB_140bd4739:
    iVar1 = FUN_140b78340(lVar3,plVar2);
    if (0 < iVar1) {
      return 1;
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\provider_core.c",0x32a,"infopair_add");
  FUN_140b91cc0(0xf,0x8000f,0);
LAB_140bd477b:
  FUN_140b8d990(*plVar2,"crypto\\provider_core.c",0x332);
  FUN_140b8d990(plVar2[1],"crypto\\provider_core.c",0x333);
  FUN_140b8d990(plVar2,"crypto\\provider_core.c",0x334);
  return 0;
}


/**
 * Function: int_engine_module_init
 * Address:  140cffa70
 * Signature: undefined int_engine_module_init(void)
 * Body size: 211 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 int_engine_module_init(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  uVar2 = FUN_140b77290();
  lVar3 = FUN_140c1a380(param_2,uVar2);
  if (lVar3 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\engine\\eng_cnf.c",0x9e,"int_engine_module_init");
    FUN_140b91cc0(0x26,0x94,0);
    return 0;
  }
  iVar5 = 0;
  iVar1 = FUN_140b77980(lVar3);
  if (0 < iVar1) {
    do {
      lVar4 = FUN_140b77990(lVar3,iVar5);
      iVar1 = sections_names_values
                        (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10),param_2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      iVar1 = FUN_140b77980(lVar3);
    } while (iVar5 < iVar1);
  }
  return 1;
}


/**
 * Function: enginese_capic
 * Address:  140c797d0
 * Signature: undefined enginese_capic(void)
 * Body size: 111 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 enginese_capic(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x140c797e5;
  uVar2 = 0;
  puVar1 = (undefined8 *)err_capi_error();
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = capi_get_key_contnames_provnames_typedn
                      (param_1,*puVar1,puVar1[1],*(undefined4 *)(puVar1 + 2),
                       *(undefined4 *)(puVar1 + 5),uVar3);
  }
  FUN_140b8d990(puVar1,"engines\\e_capi.c",0x623);
  return uVar2;
}

